///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "CLightning.h"

#include "GCAA/Player/CPlayer.h"
#include "GCAA/NPC/BaseNpc.h"
#include "Kismet/KismetArrayLibrary.h"

// Sets default values
ACLightning::ACLightning()
{
	// This doesn't need tick.
	PrimaryActorTick.bCanEverTick	= false;
	m_iCurrentCounter				= 0;
	m_fRadius						= 0.f;
	m_bCanBeUsed					= true;

	SetSpellType( ESpellType::Lightning );
}

// Called when the game starts or when spawned
void ACLightning::BeginPlay()
{
	Super::BeginPlay();

	m_sTypes.Add( UEngineTypes::ConvertToObjectType( ECollisionChannel::ECC_Pawn ) );
}

void ACLightning::FireLightning()
{
	UE_LOG(LogTemp, Warning, TEXT("Lightning requested."))

	m_pcPlayer = Cast<ACPlayer>(GetWorld()->GetFirstPlayerController()->GetCharacter() );	
	if ( IsValid(m_pcPlayer) )
	{
		// Is target lock only on and player currently locked?
		if ( m_pcPlayer->Get_IsLockedOn() )
		{
			ResetLogic();
			m_bCanBeUsed = false;

			// Our trace locations
			const FVector k_v3Origin = m_pcPlayer->GetActorLocation();
			const FVector k_v3Target = m_pcPlayer->GetTargetLockData().ATargetLockedActor->GetActorLocation();

			// Things we don't want the trace to detect.
			TArray < AActor* > apcActorsToIgnore;
			apcActorsToIgnore.Append( m_pcSpellManager->GetCurrentSpellsArray() );
			apcActorsToIgnore.Add( m_pcPlayer );

			// Stored hit results
			FHitResult sHitResults;

			// The trace.
			const bool k_bHit = UKismetSystemLibrary::LineTraceSingleForObjects
			(
				GetWorld(),
				k_v3Origin,
				k_v3Target,
				m_sTypes,
				false,
				apcActorsToIgnore,
				EDrawDebugTrace::None,
				sHitResults,
				true
			);

			// Did we hit anything?
			if ( k_bHit )
			{
				// Is this actor valid?
				if (sHitResults.Actor.IsValid() )
				{
					if (ABaseNpc* BaseNpc = Cast<ABaseNpc>(sHitResults.GetActor()) )
					{
						// This is going to be the previous target
						//m_pcPreviousTarget = BaseNpc;
						m_pcCurrentTarget = BaseNpc;
						if ( UDamageComponent* pDamageComp = BaseNpc->FindComponentByClass<UDamageComponent>() )
						{
							if ( m_sStats.VFX_On_Hit) const UParticleSystemComponent* pHitFX = UGameplayStatics::SpawnEmitterAtLocation( GetWorld(), m_sStats.VFX_On_Hit, pDamageComp->GetOwner()->GetActorLocation(), FRotator::ZeroRotator, FVector(1,1,1), true );
							pDamageComp->ReceiveDamage( m_sStats.Main_Target_Damage );
						}

						SetCanPoolUse( false );
						
						FindSubTargets();
					}
				}
			}			
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Hit blocked."))
	}
}

void ACLightning::FindSubTargets()
{
	if ( m_iCurrentCounter < m_sStats.Fork_Max_Amount )
	{
		// Things we want to ignore as potential targets.
		TArray < AActor* > apcActorsToIgnore;		
		apcActorsToIgnore.Add( m_pcCurrentTarget );

		// Since we don't want the previous target to be considered we check if it's not 0;
		if (!m_iCurrentCounter)
		{
			apcActorsToIgnore.Add( m_pcPreviousTarget );
		}

		// Arrays for our Query and Post Query data.
		TArray<AActor*> apcQueriedActors;
		TArray<AActor*> apcValidActors;
		
		const bool k_bHit = UKismetSystemLibrary::SphereOverlapActors(GetWorld(), m_pcCurrentTarget->GetActorLocation(), m_fRadius, m_sTypes, ABaseNpc::StaticClass(), apcActorsToIgnore, apcQueriedActors );
		
		bool bFoundTarget = false;
		if (k_bHit )
		{
			for (auto actor : apcQueriedActors)
			{
				if ( IsValid(actor) )
				{
					FHitResult sResult;
					const bool bHit = UKismetSystemLibrary::LineTraceSingleForObjects(GetWorld(), m_pcCurrentTarget->GetActorLocation(), actor->GetActorLocation(), m_sTypes, false, apcActorsToIgnore, EDrawDebugTrace::Persistent, sResult, true, FColor::Red, FColor::Green);
					if ( bHit )
					{
						apcValidActors.Add( actor );
						bFoundTarget = true;
					}
				}
			}
		}

		if (bFoundTarget)
		{
			if ( !m_sStats.Prioritize_Closest )
			{
				ShuffleArray( apcValidActors );

				if (IsValid(apcValidActors[0]))
				{
					m_pcPreviousTarget = m_pcCurrentTarget;
					m_pcCurrentTarget = apcValidActors[0];

					GetWorldTimerManager().SetTimer(m_sTriggerTimer, this, &ACLightning::DelayedRecursiveCall, m_sStats.Delay_Damage_Time, false);
				}				
			}
			else
			{
				TArray<AActor*> apcSorted;
				OrderArray(m_pcCurrentTarget, apcValidActors, apcSorted);

				if (IsValid(apcSorted[0]))
				{
					m_pcPreviousTarget = m_pcCurrentTarget;
					m_pcCurrentTarget = apcSorted[0];
					
					GetWorldTimerManager().SetTimer(m_sTriggerTimer, this, &ACLightning::DelayedRecursiveCall, m_sStats.Delay_Damage_Time, false);
				}				
			}
		}
		else SpellCompletion();
	}
	else SpellCompletion();
}

void ACLightning::DelayedRecursiveCall()
{
	m_iCurrentCounter++;
	m_fRadius -= m_sStats.Fork_Range_Decrement;
	
	if ( UDamageComponent* pDamageComp = m_pcCurrentTarget->FindComponentByClass<UDamageComponent>() )
	{
		if ( m_sStats.VFX_On_Hit) UGameplayStatics::SpawnEmitterAtLocation( GetWorld(), m_sStats.VFX_On_Hit, pDamageComp->GetOwner()->GetActorLocation(), FRotator::ZeroRotator, FVector(1,1,1), true );
		pDamageComp->ReceiveDamage( m_sStats.Fork_Damage );
	}
	
	FindSubTargets();
}

void ACLightning::ResetLogic()
{
	// Resets current counter to 0.
	m_iCurrentCounter			= 0;
	// Resets radius to it's original range.
	m_fRadius					= m_sStats.Fork_Range;
	// Resets our actor pointers to null.
	m_pcCurrentTarget			= nullptr;
	m_pcPreviousTarget			= nullptr;
	SetCanPoolUse				( true );
	// Cancel any previous recursive calls.
	GetWorldTimerManager().ClearTimer(m_sTriggerTimer);
}

void ACLightning::SpellCompletion()
{
	m_bCanBeUsed = true;
	ResetLogic();
}


void ACLightning::SpellFailure()
{
	
}


void ACLightning::ShuffleArray(TArray<AActor*> array) const
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

void ACLightning::OrderArray(AActor* pOrigin, TArray<AActor*> apToSort, TArray<AActor*>& apSorted)
{
	apToSort.Sort([pOrigin](const AActor& A, const AActor& B)
	{
		const float fDistanceA = A.GetDistanceTo(pOrigin);
		const float fDistanceB = B.GetDistanceTo(pOrigin);
		return fDistanceA > fDistanceB;
	});
	apSorted = apToSort;
}

void ACLightning::VFireEvent()
{
	FireLightning();
}

// Setters
void ACLightning::SetSpellManager(ASpellManager* pManager)
{
	m_pcSpellManager = pManager;
}

void ACLightning::SetPlayer(ACPlayer* pPlayer)
{
	m_pcPlayer = pPlayer;
}

void ACLightning::SetStats(FCChainLightningStatsStruct sStats)
{
	m_sStats = sStats;
}
