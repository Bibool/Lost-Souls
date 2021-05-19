///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "CFireBall.h"

#include "DrawDebugHelpers.h"
#include "GCAA/SpellManager/SpellManager.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/EngineTypes.h"
#include "GCAA/Components/DamageComponent.h"
#include "GCAA/NPC/BaseNpc.h"

ACFireBall::ACFireBall()
	:	ASpell()
{}

void ACFireBall::Initialize()
{
	SetSpellType( ESpellType::Fireball );
	m_fSelfDestructTime = m_sStats.Self_Destruct_Time;
}

void ACFireBall::TargetAcquiring( AActor* otherActor ) const
{
	// An array that will hold the initial targets.
	TArray<AActor*> acTargets;

	// A sorted array that will hold the VALID targets.
	TArray<AActor*> acValidTargets;

	// The HitResults for our first Sphere Trace.
	TArray<FHitResult> asHitResults;

	// To narrow results down, type of collision channels to check for.	
	TArray < TEnumAsByte<EObjectTypeQuery> > sTypes;
	sTypes.Add( UEngineTypes::ConvertToObjectType( ECollisionChannel::ECC_Pawn ) );

	// Holds the actors we will want to ignore, in our case; the spells, player and the current hit target.
	TArray<AActor*> acActorsToIgnore;
	acActorsToIgnore.Append( m_pcSpellManager->GetCurrentSpellsArray() );
	acActorsToIgnore.Add( UGameplayStatics::GetPlayerPawn( GetWorld(), 0 ) );
	if (otherActor != nullptr )	acActorsToIgnore.Add( otherActor );

	// The class type we are looking for on the actor.
	const TSubclassOf<ABaseNpc> acClassToCheck;

	// The actual sphere trace.
	const bool bhit = UKismetSystemLibrary::SphereOverlapActors( GetWorld(), GetActorLocation(), m_sStats.AOE_Radius, sTypes, acClassToCheck, acActorsToIgnore, acTargets );

	if (bhit)
	{
		for (AActor* Element : acTargets)
		{
			// We then ray trace towards the target, to make sure we have sight of it.
			// If we do, add it to the valid targets array.
			FHitResult sHitResult;
			const bool bLTHit = UKismetSystemLibrary::LineTraceSingle( GetWorld(), GetActorLocation(), Element->GetActorLocation(), ETraceTypeQuery::TraceTypeQuery2, false, acActorsToIgnore, EDrawDebugTrace::None, sHitResult, true );
			if (bLTHit)
			{
				if (sHitResult.GetActor()->ActorHasTag( "Damage" ) && sHitResult.GetActor() != nullptr && sHitResult.GetActor() != otherActor)
				{
					acValidTargets.Add( sHitResult.GetActor() );
				}
			}
		}
	}

	// Our target acquiring logic is done, so we can apply damage to them now.
	const FDamageEvent sDamageEvent;
	
	// Can the fireball do AOE Damage?
	// if so, apply splash damage.
	if (m_sStats.Has_AOE_Damage)
	{
		for (AActor* actor : acValidTargets)
		{
			UDamageComponent* pDmgComp = actor->FindComponentByClass<UDamageComponent>();
			if ( pDmgComp )
			{
				pDmgComp->ReceiveDamage( m_sStats.Splash_Damage );
			}
		}
	}

	if (otherActor != nullptr )
	{
		UDamageComponent* pDmgComp = otherActor->FindComponentByClass<UDamageComponent>();
		if ( pDmgComp )
		{
			pDmgComp->ReceiveDamage( m_sStats.Main_Target_Damage );
		}
	}

}


void ACFireBall::CollisionLogic( AActor* otherActor )
{
	if (m_bIsInCollision)
	{
		TargetAcquiring( otherActor );
		Explosion();
		m_bIsInCollision = false;
	}
}

void ACFireBall::NonEnemyCollisionLogic(UPrimitiveComponent* OtherComp, const FHitResult& Hit)
{
	if (m_bIsInCollision)
	{
		TargetAcquiring( nullptr );
		Explosion();
		m_bIsInCollision = false;
	}
}


void ACFireBall::Explosion()
{
	if (m_sStats.PS_Explosion)
	{
		UGameplayStatics::SpawnEmitterAtLocation( GetWorld(), m_sStats.PS_Explosion, GetActorLocation(), FRotator::ZeroRotator, m_sStats.Explosion_Scale, true );
	}
	
	Destroyed();
}


void ACFireBall::SetStats(FCFireBallStatsStruct spellStats)
{
	m_sStats = spellStats;
	SetSelfDestroyTime( m_sStats.Self_Destruct_Time );
}


void ACFireBall::FireLogic(float DeltaTime)
{
	FVector currentLoc = GetActorLocation();
	currentLoc += GetActorForwardVector() * m_sStats.Projectile_Speed * DeltaTime;

	SetActorLocation( currentLoc );
}



