///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "CBasicSpell.h"

#include "GCAA/Player/CPlayer.h"
#include "GCAA/SpellManager/SpellManager.h"
#include "Kismet/KismetMathLibrary.h"

void ACBasicSpell::SetStats(FCBasicSpellStatsStruct spellStats)
{
	m_sStats = spellStats;
	SetSelfDestroyTime( m_sStats.Self_Destruct_Time );
}

void ACBasicSpell::Awake()
{
	RootComponent->SetVisibility( true, true );
	SetCanPoolUse( false );

	if ( m_bCanAutoDestroy )
	{
		GetWorldTimerManager().SetTimer( m_sDelayedDestructionTimer, this, &ACBasicSpell::Destroy_Wrapper, m_fSelfDestructTime, false );
	}

	if ( m_pcSpellManager->GetPlayer() )
	{
		FVector v3TargetLocation;

		if ( m_pcSpellManager->GetPlayer()->Get_IsLockedOn())
		{
			v3TargetLocation = m_pcSpellManager->GetPlayer()->GetTargetLockData().ATargetLockedActor->GetActorLocation();
		}
		else
		{
			v3TargetLocation = m_pcSpellManager->GetPlayer()->GetTargetLockData().CursorInWorldVector;
		}

		
		SetActorLocation( m_pcSpellManager->GetPlayer()->GetCurrentComponent()->GetComponentLocation() );
		SetActorRotation( UKismetMathLibrary::FindLookAtRotation( GetActorLocation(), v3TargetLocation ), ETeleportType::TeleportPhysics );
	}
}

void ACBasicSpell::FireLogic(float DeltaTime)
{
	FVector currentLoc = GetActorLocation();
	currentLoc += GetActorForwardVector() * m_sStats.Projectile_Speed * DeltaTime;

	SetActorLocation( currentLoc );
	//SetActorRotation( CurrentRotationOfCamera );
}

void ACBasicSpell::Initialize()
{
	SetSpellType(ESpellType::Default);
	m_fSelfDestructTime = m_sStats.Self_Destruct_Time;
}

void ACBasicSpell::CollisionLogic(AActor* otherActor)
{
	if (m_bIsInCollision)
	{
		UDamageComponent* pDmgComp = otherActor->FindComponentByClass<UDamageComponent>();
		
		if (otherActor && pDmgComp )
		{
			pDmgComp->ReceiveDamage( m_sStats.Damage );
			if ( m_sStats.VFX_On_Hit) const UParticleSystemComponent* pHitFX = UGameplayStatics::SpawnEmitterAtLocation( GetWorld(), m_sStats.VFX_On_Hit, GetActorLocation(), FRotator::ZeroRotator, FVector(1,1,1), true );
		}	

		Destroyed();
		m_bIsInCollision = false;
	}
}

void ACBasicSpell::NonEnemyCollisionLogic(UPrimitiveComponent* OtherComp, const FHitResult& Hit)
{
	if (m_bIsInCollision)
	{
		Destroyed();
		m_bIsInCollision = false;
	}
	
}

void ACBasicSpell::Destroy_Wrapper()
{
	Destroyed();
}
