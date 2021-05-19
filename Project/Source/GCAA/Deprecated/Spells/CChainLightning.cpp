// Fill out your copyright notice in the Description page of Project Settings.


#include "CChainLightning.h"


#include "DrawDebugHelpers.h"
#include "GCAA/Components/DamageComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GCAA/NPC/BaseNpc.h"
#include "GCAA/SpellManager/SpellManager.h"
#include "Kismet/KismetMathLibrary.h"

ACChainLightning::ACChainLightning()
	:	ASpell()
{}

void ACChainLightning::Initialize()
{
	//sIdentifier.eType = ESpellType::Lightning;
	//SelfDestructTime = sStats.Self_Destruct_Time;
	bCanCollide = true;
}

void ACChainLightning::SetStats(FCChainLightningStatsStruct spellStats)
{
	sStats = spellStats;
}

void ACChainLightning::AdditionalAwakeLogic()
{
	iActorTracker			= 0;
	iCurrentBounces			= 0;
	iCollisionCount			= 0;
	fTargetSeekRadius		= sStats.Fork_Range;
	bHasPreviouslyCollided	= false;
	bFirstDamageInstance	= true;
	mpcActorTarget			= nullptr;
}



void ACChainLightning::FireLogic(float DeltaTime)
{
	FVector currentLoc = GetActorLocation();
	//currentLoc += GetActorForwardVector() * sStats.Projectile_Speed * DeltaTime;

	SetActorLocation( currentLoc );

	if (mpcActorTarget)
	{
		SetActorRotation( UKismetMathLibrary::FindLookAtRotation( GetActorLocation(), mpcActorTarget->GetActorLocation() ) );
	}
	//else 
	//{
	//	SetActorRotation( CurrentRotationOfCamera );
	//}
}

void ACChainLightning::CollisionEndLogic(AActor* otherActor)
{
	//bCanCollide = true;
}

void ACChainLightning::CheckNumOfTargets()
{
	// Is there only a single target? (doesn't count itself, therefore 0)
	if		(iActorTracker == 0 )
	{
		eCurrentFork = ForkNum::OneTarget;
	}

	// Is there only 2 targets? (doesn't count itself, therefore 1)
	if		(iActorTracker == 1 )
	{
		eCurrentFork = ForkNum::TwoTargets;
		
		// Since the spell will seek another target, set to false to avoid dealing single target damage.
		bHasPreviouslyCollided = true;
	}

	// Is there 3 or more targets? (doesn't count itself, therefore >= 2)
	if		(iActorTracker >= 2 )
	{
		eCurrentFork = ForkNum::ThreePlusTargets;
		
		// Since the spell will seek another target, set to false to avoid dealing single target damage.
		bHasPreviouslyCollided = true;
	}
}


void ACChainLightning::SortTArrayByDistance( TArray<AActor*> ValidActorTargets ) const
{
	FVector SourceLocation = GetActorLocation();
	ValidActorTargets.Sort( [SourceLocation]( const AActor& A, const AActor& B )
	{
		const float DistanceA = FVector::DistSquared( SourceLocation, B.GetActorLocation() );
		const float DistanceB = FVector::DistSquared( SourceLocation, A.GetActorLocation() );

		return DistanceA > DistanceB;
	} );
}


bool ACChainLightning::CheckBounce()
{
	bool CanGoOn = false;

	// Has it reached it's maximum amount of bounces?
	// If True: Destroy itself, and stop any further spell logic from happening.
	if (iCurrentBounces >= sStats.Fork_Max_Amount)
	{
		iCurrentBounces = 0;
		CanGoOn = false;
		
		Destroyed();
	}

	// if False: increment counter, and gives the go ahead to continue with logic.
	else
	{
		iCurrentBounces++;
		CanGoOn = true;
	}

	UE_LOG( LogTemp, Warning, TEXT( "Bounce num: %i" ), iCurrentBounces ) ;
	return CanGoOn;
}

void ACChainLightning::ShuffleArray(TArray<AActor*> array) const
{
	if (array.Num() > 0)
	{
		const int32 LastIndex = array.Num() - 1;
		for (int32 i = 0; i <= LastIndex; ++i)
		{
			const int32 Index = FMath::RandRange( i, LastIndex );
			if (i != Index)
			{
				array.Swap( i, Index );
			}
		}
	}
}




void ACChainLightning::TargetAcquire(AActor* otherActor)
{
	
	// Since the spell will now die eventually, remove self destruct timer.
	GetWorldTimerManager().ClearTimer( m_sDelayedDestructionTimer );

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
	if (otherActor != nullptr)	acActorsToIgnore.Add( otherActor );

	// The class type we are looking for on the actor.
	const TSubclassOf<ABaseNpc> acClassToCheck;

	// The actual sphere trace.
	const bool bhit = UKismetSystemLibrary::SphereOverlapActors( GetWorld(), GetActorLocation(), fTargetSeekRadius, sTypes, acClassToCheck, acActorsToIgnore, acTargets );
	// and it's visual representation
	if (kbDebugInfo) DrawDebugSphere( GetWorld(), GetActorLocation(), fTargetSeekRadius, 30.f, FColor::Red, false, 2.0f );

	if (bhit)
	{
		for (AActor* Element : acTargets)
		{
			if (kbDebugInfo) // We set false here if we do not want on screen debug info
			{
				DrawDebugLine( GetWorld(), GetActorLocation(), Element->GetActorLocation(), FColor::Blue, true );
				DrawDebugBox( GetWorld(), Element->GetActorLocation(), FVector( 20, 20, 20 ), FColor::Blue, true );
			}

			// We then ray trace towards the target, to make sure we have sight of it.
			// If we do, add it to the valid targets array.
			FHitResult sHitResult;
			const bool bLTHit = UKismetSystemLibrary::LineTraceSingle( GetWorld(), GetActorLocation(), Element->GetActorLocation(), ETraceTypeQuery::TraceTypeQuery2, false, acActorsToIgnore, EDrawDebugTrace::ForDuration, sHitResult, true, FColor::Green, FColor::Yellow, 20.f );
			if (bLTHit)
			{
				if (sHitResult.GetActor() != nullptr && sHitResult.GetActor() != otherActor && sHitResult.GetActor()->ActorHasTag( "Damage" ) )
				{
					acValidTargets.Add( sHitResult.GetActor() );
					iActorTracker++;
				}
			}
		}
	}

	// Apply damage to target logic. It should happen once per main target.
	FDamageEvent sDamageEvent;

	
	// Checks if we can set the current collided actor
	if (iCollisionCount == 0)
	{
		pcActorTargetToRemember = otherActor;
	}
	
	CheckNumOfTargets();
	
	switch (eCurrentFork)
	{
	case ForkNum::OneTarget:
		if (bHasPreviouslyCollided)
		{
			UDamageComponent* pDmgComp = otherActor->FindComponentByClass<UDamageComponent>();
			if ( pDmgComp )
			{
				pDmgComp->ReceiveDamage( sStats.Fork_Damage );
				if ( sStats.VFX_On_Hit) const UParticleSystemComponent* pHitFX = UGameplayStatics::SpawnEmitterAtLocation( GetWorld(), sStats.VFX_On_Hit, GetActorLocation(), FRotator::ZeroRotator, FVector(1,1,1), true );
			}
		
			//otherActor->TakeDamage( sStats.Fork_Damage, sDamageEvent, nullptr, this );
		}
		else
		{
			const float kfDamage = sStats.Main_Target_Damage + (sStats.Fork_Damage * sStats.Fork_Max_Amount);

			UDamageComponent* pDmgComp = otherActor->FindComponentByClass<UDamageComponent>();
			if ( pDmgComp )
			{
				pDmgComp->ReceiveDamage( kfDamage );
				if ( sStats.VFX_On_Hit) const UParticleSystemComponent* pHitFX = UGameplayStatics::SpawnEmitterAtLocation( GetWorld(), sStats.VFX_On_Hit, GetActorLocation(), FRotator::ZeroRotator, FVector(1,1,1), true );
			}
			
			//otherActor->TakeDamage( kfDamage, sDamageEvent, nullptr, this );
		}
		
		Destroyed();
		break;
	
	case ForkNum::TwoTargets:
		//otherActor (this collided actor) - TakeDamage()
		//
		// We check to see if it's valid first
		if (acValidTargets[0])
		{
			const FRotator LookAtRotator = UKismetMathLibrary::FindLookAtRotation( GetActorLocation(), acValidTargets[0]->GetActorLocation() );
			m_sCurrentRotationOfCamera = LookAtRotator;

			// Decrement the radius.
			fTargetSeekRadius -= sStats.Fork_Range_Decrement;
			mpcActorTarget = acValidTargets[0];
		}
	
		break;
	
	case ForkNum::ThreePlusTargets:
		// This needs more logic as we are handling more than 2 targets.
		// First we sort our valid targets by distance.
		//SortTArrayByDistance( acValidTargets );
		ShuffleArray( acValidTargets );

	
		// As always, we check if we haven't reached our max amounts of bounces.
		if (true)
		{
			// Is the previous target that we don't want to go back to not NULL?
			if (pcActorTargetToRemember != nullptr)
			{
				// Begin a foreach loop
				for (AActor* Element : acValidTargets)
				{
					// Find one in the array that isn't the previous one.
					if (Element != pcActorTargetToRemember)
					{
						UKismetSystemLibrary::DrawDebugArrow( GetWorld(), GetActorLocation(), Element->GetActorLocation(), 5.f, FLinearColor::Green, 1.f, 5.f );

						// Set our rotation to face this new enemy.
						const FRotator LookAtRotator = UKismetMathLibrary::FindLookAtRotation( GetActorLocation(), Element->GetActorLocation() );
						m_sCurrentRotationOfCamera = LookAtRotator;

						// Decrement the radius.
						fTargetSeekRadius -= sStats.Fork_Range_Decrement;

						// Did we bounce twice?
						// True: Reset the counter
						if (iCollisionCount == 2)
						{
							iCollisionCount = 0;
						}

						// If not, increment it.
						else
						{
							iCollisionCount++;
						}

						mpcActorTarget = Element;
						// We have our target, so we break out of the loop.
						break;
					}
				}
			}
		}

		break;
	}	


	// Is it the first time it hits in a fork?
	if (bFirstDamageInstance && iActorTracker != 0)
	{
		UDamageComponent* pDmgComp = otherActor->FindComponentByClass<UDamageComponent>();
		if ( pDmgComp )
		{
			pDmgComp->ReceiveDamage( sStats.Main_Target_Damage );
			if ( sStats.VFX_On_Hit) const UParticleSystemComponent* pHitFX = UGameplayStatics::SpawnEmitterAtLocation( GetWorld(), sStats.VFX_On_Hit, GetActorLocation(), FRotator::ZeroRotator, FVector(1,1,1), true );
		}
		
		//otherActor->TakeDamage( sStats.Main_Target_Damage, sDamageEvent, nullptr, this );
		UE_LOG( LogTemp, Warning, TEXT( "First instance damage to multi target track" ) );
	}
	// if this is false, it means that it had previously hit a target.
	if (!bFirstDamageInstance)
	{
		UE_LOG( LogTemp, Warning, TEXT( "Previously hit a target" ) );

		UDamageComponent* pDmgComp = otherActor->FindComponentByClass<UDamageComponent>();
		if ( pDmgComp )
		{
			pDmgComp->ReceiveDamage( sStats.Fork_Damage );
			if ( sStats.VFX_On_Hit) const UParticleSystemComponent* pHitFX = UGameplayStatics::SpawnEmitterAtLocation( GetWorld(), sStats.VFX_On_Hit, GetActorLocation(), FRotator::ZeroRotator, FVector(1,1,1), true );
		}
		
		//otherActor->TakeDamage( sStats.Fork_Damage, sDamageEvent, nullptr, this );
	}

	CheckBounce();

	iActorTracker = 0;
}


void ACChainLightning::CollisionLogic(AActor* otherActor)
{
	// Is this spell allowed to collide and active?
	if ( m_bIsInCollision )
	{
		TargetAcquire( otherActor );
		m_bIsInCollision = false;
	}
}

void ACChainLightning::NonEnemyCollisionLogic( UPrimitiveComponent* OtherComp, const FHitResult& Hit )
{
	// Is this spell allowed to collide and active?
	if (m_bIsInCollision)
	{
		Destroyed();
		m_bIsInCollision = false;
	}
}