///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "CWindblast.h"


#include "DrawDebugHelpers.h"
#include "GCAA/Player/CPlayer.h"
#include "GCAA/NPC/BaseNpc.h"
#include "GCAA/Structures/FActorDistanceData.h"

#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Math/UnitConversion.h"


ACWindblast::ACWindblast()
{
	PrimaryActorTick.bCanEverTick = true;

	// We set our default bool values that will be used by spell logic.
	m_bCastFail		= false;
	m_bTargetsFound	= false;
	m_bDisplacing	= false;

	SetSpellType( ESpellType::WindBlast );
}

// "Fire" event, player request Windblast from manager > comes here.
void ACWindblast::FireWindblast()
{
	UE_LOG(LogTemp, Warning, TEXT("Windblast Called."));

	// Enters here to find the actual targets.
	TraceForTargets();
}

void ACWindblast::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	m_sMoveBackWardTimeline.TickTimeline( DeltaTime );
}

void ACWindblast::BeginPlay()
{
	Super::BeginPlay();
}

void ACWindblast::TraceForTargets()
{
	// Find our player.
	AActor* playerActor = GetWorld()->GetFirstPlayerController()->GetCharacter();

	// Is it valid? Null check
	if ( playerActor  )
	{
		// In case the cooldown is low enough that enemies are still being crowd controlled.
		// We release them.
		// RestoreNPCState();
		
		// We clear the array so we don't pushback previous targets. 
		//mapsTargets.Empty();

		// The collision types we want to check against.
		TArray < TEnumAsByte<EObjectTypeQuery > > sTypes;
		sTypes.Add( UEngineTypes::ConvertToObjectType( ECollisionChannel::ECC_Pawn ) );

		// Actors we don't want to find in the trace.
		TArray<AActor*> acActorsToIgnore;
		acActorsToIgnore.Append( m_pcSpellManager->GetCurrentSpellsArray() );	// Although unlikely, we don't want to pick up spells.
		acActorsToIgnore.Add( playerActor );										// Nor the player.

		// This will hold all actors found by the trace.
		TArray<AActor*> acPossibleTargets;
		
		const bool bHit = UKismetSystemLibrary::SphereOverlapActors(GetWorld(), playerActor->GetActorLocation(), m_sSpellStats.Query_Radius, sTypes, ABaseNpc::StaticClass(), acActorsToIgnore, acPossibleTargets );

		// This will be our temporary container for valid targets.
		TArray<FActorDistanceData> asTargets;

		// By default, we haven't found any targets unless, will be set to true IF the sorting algorithm finds valid targets.
		// This really just circumvents pointless if/else statements.
		m_bTargetsFound = false;

		// Did the trace hit anything?
		if ( bHit )
		{
			int iNumTargets = 0;
			// We will iterate through the results and sort the ones we want.
			for (auto actor : acPossibleTargets)
			{
				// is this element valid? Null check.
				const bool kbUseCap = m_sSpellStats.Use_Target_Cap;
				const int kiTargetCap = m_sSpellStats.Max_Targets - 1;
				
				if ( actor )
				{
					// The subtracted locations of the target and player.			
					const FVector kv3SubtractedLocation = actor->GetActorLocation() - playerActor->GetActorLocation();
					// Result normalized and stored into a vector.
					const FVector kv3NormalizedVector = kv3SubtractedLocation.GetSafeNormal();
					// Get the dot product of the player's Forward Vector and the normalized vector.
					const float kfDotProduct = UKismetMathLibrary::Dot_VectorVector(playerActor->GetActorForwardVector(), kv3NormalizedVector);

					// Checks the dot product and see if it is in our desired range.
					const bool kbInRange = UKismetMathLibrary::InRange_FloatFloat(kfDotProduct, m_sSpellStats.Min_Angle, 1.f, true, true);

					// Success - Dot product fits our criteria
					if ( kbInRange )
					{
						m_apsTargets.Empty();
						
						// Temporary struct to hold all our data.
						FActorDistanceData fData;						
						fData.pcActor = actor;

						ABaseNpc* pNPC = Cast<ABaseNpc>(actor);
						
						if (pNPC)
						{
							pNPC->StopActions();
							const FVector kv3LaunchVector = UKismetMathLibrary::GetDirectionUnitVector(playerActor->GetActorLocation(),GetActorLocation() ) * m_sSpellStats.Distance_OffSet;							
							pNPC->LaunchCharacter(kv3LaunchVector, false, false);
							if ( m_sSpellStats.VFX_On_Hit) UGameplayStatics::SpawnEmitterAtLocation( GetWorld(), m_sSpellStats.VFX_On_Hit, GetActorLocation(), FRotator::ZeroRotator, FVector(1,1,1), true );
							
							GetWorldTimerManager().SetTimer(m_sRestoreControl, this, &ACWindblast::RestoreNPCState, m_sSpellStats.Stun_Duration, false);
						}		

						if ( kbUseCap )
						{
							if (iNumTargets != kiTargetCap)
							{
								asTargets.Add(fData);
								m_bTargetsFound = true;
								iNumTargets++;
							}
						}
						else
						{
							// Add data to our temporary container.
							asTargets.Add(fData);

							// Since we did find a target, it's required to set the bool to true else spell will report it as failure.
							m_bTargetsFound = true;
						}
					}
				}
			}
		}
		// When we have finally gotten all our data, we can proceed.
		// This will only fire IF a valid target was found.
		if ( m_bTargetsFound )
		{
			SetCanPoolUse( false );	
			// Our member is a copy of the valid targets.
			m_apsTargets = asTargets;
		}
		else
		{
			// Was false, therefore failure.
			ReportSpellFailure();
		}
	}	
}

void ACWindblast::VFireEvent()
{
	FireWindblast();
}

void ACWindblast::ReportSpellFailure()
{
	// No valid targets found, so we tell the player as much.
	// Is play valid? Null check
	if ( ACPlayer* pPlayer = Cast<ACPlayer>(GetWorld()->GetFirstPlayerController()->GetCharacter()) )
	{
		// Resets the Cooldown.
		GetWorldTimerManager().ClearTimer(pPlayer->GetWindblastTimer());

		// Allows player to cast again.
		pPlayer->SetCanWindblast( false ) ;
	}
	SetCanPoolUse( true );	
}


void ACWindblast::RestoreNPCState()
{
	if ( IsValid(m_apsTargets[0].pcActor) )
	{
		for (auto EnemyData : m_apsTargets)
		{
			if ( EnemyData.pcActor )
			{
				ABaseNpc* pNPC = Cast<ABaseNpc>(EnemyData.pcActor);

				if (pNPC)
				{
					pNPC->AllowActions();
				}
			}
		}
	}	
}


#pragma region _deprecated_timeline_

void ACWindblast::DisplaceTargets()
{
	// We would tel the npcs they have to stop any movement here.
	m_bDisplacing = false;	
	m_sMoveBackWardTimeline.PlayFromStart();
}

void ACWindblast::ApplyDisplacement(float Value)
{
	// Should only displace if it hasn't reached desired offset.
	if ( !m_bDisplacing )
	{
		// Loop through current targets.
		for (auto enemyData : m_apsTargets)
		{
			// and sets their location using lerp with the timeline as the alpha.
			enemyData.pcActor->SetActorLocation(UKismetMathLibrary::VLerp(enemyData.pcActor->GetActorLocation(), enemyData.vLocation, Value), true );

			// are we (approx) at the offset location?
			if ( enemyData.pcActor->GetActorLocation().Equals(enemyData.vLocation, 1.f ) )
			{
				m_bDisplacing = true;
			}
			else
			{
				m_bDisplacing = false;
			}
		}
	}

	// Displace was completed early - so call the end.
	else
	{
		TimelineComplete();
	}
}




void ACWindblast::TimelineComplete()
{
	// TODO: @BM, NPC resume movement function required to be called here.
	for (auto enemyData : m_apsTargets)
	{
		ABaseNpc* pNPC = Cast<ABaseNpc>(enemyData.pcActor);

		if (pNPC)
		{
			pNPC->AllowActions();
		}		
	}
}

#pragma endregion 

#pragma region Setters

// Sets the pointer to the current instance of our manager.
void ACWindblast::SetSpellManager(ASpellManager* pSpellManager)
{
	m_pcSpellManager = pSpellManager;
}

// Sets the pointer to the current instance of our player.
void ACWindblast::SetPlayer(ACPlayer* pPlayer)
{
	m_pcPlayer = pPlayer;
}

// Gets the Blueprint set struct data and sets up the timeline. 
void ACWindblast::SetStats( FWindBlastStatsStruct sStats )
{
	// Our member struct is a copy of the blueprint-set struct.
	m_sSpellStats = sStats;
}

#pragma endregion 