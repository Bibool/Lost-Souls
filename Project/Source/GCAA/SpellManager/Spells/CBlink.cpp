///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "CBlink.h"

#include "DrawDebugHelpers.h"
#include "GCAA/Player/CPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/TimelineComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "NavigationSystem.h"

// Sets default values
ACBlink::ACBlink()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	m_bHit = false;
	
	SetSpellType( ESpellType::Blink );
}

// Called when the game starts or when spawned
void ACBlink::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACBlink::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	m_sTimelineForward.TickTimeline( DeltaTime );
	m_sTimelineReverse.TickTimeline( DeltaTime );

	if (mpcPlayer )
	{
		CanScaleWall();
	}
}


void ACBlink::ZoomIn(float Value) const
{
	float fFOV = FMath::Lerp( mpcPlayer->GetFollowCamera()->FieldOfView, m_sSpellStats.Warp_Effect_Strength, Value );
	mpcPlayer->GetFollowCamera()->SetFieldOfView( fFOV );
}

void ACBlink::ZoomOut(float Value) const
{
	float fFOV = FMath::Lerp( mpcPlayer->GetFollowCamera()->FieldOfView, mpcPlayer->GetFOV(), Value );
	mpcPlayer->GetFollowCamera()->SetFieldOfView( fFOV );
}

void ACBlink::PlayFromReverse()
{
	m_sTimelineReverse.PlayFromStart();
}


void ACBlink::Blink()
{
	bool bTriedToblink = true;

	if (m_iBlinkCharges != 0)
	{	
		bTriedToblink = AttemptTeleport();
	}	
	else
	{
		BlinkFail();
	}
	
	if ( !bTriedToblink )
	{
		BlinkFail();
		UE_LOG( LogTemp, Warning, TEXT( "Teleport Failed." ) );
	}			
}

void ACBlink::DelayedAction()
{
	m_sTimelineForward.Stop();
	m_sTimelineForward.SetNewTime( 0 );
	m_sTimelineReverse.PlayFromStart();
	if ( m_sSpellStats.VFX_Blink_End) const UParticleSystemComponent* pHitFX = UGameplayStatics::SpawnEmitterAtLocation( GetWorld(), m_sSpellStats.VFX_Blink_End, GetActorLocation(), FRotator::ZeroRotator, FVector(1,1,1), true );
}

void ACBlink::BlinkFail()
{
	GetWorldTimerManager().ClearTimer( mpcPlayer->GetBlinkTimer() );
	mpcPlayer->SetCanBlink( false );
}


#pragma region Recharge_Logic

void ACBlink::ChargeLogic()
{
	if (GetWorldTimerManager().GetTimerRemaining( m_sCounterRecharge ) <= 0)
	{
		GetWorldTimerManager().SetTimer( m_sCounterRecharge, this, &ACBlink::AddOneCharge, m_sSpellStats.Recharge_Rate, false );
	}
}

void ACBlink::AddOneCharge()
{
	m_iBlinkCharges++;
	mpcPlayer->UpdateChargesTXTUI();
	
	if (m_iBlinkCharges != m_sSpellStats.Max_Charges)
	{
		ChargeLogic();
	}
}

void ACBlink::AddExtraCharge()
{
	m_iBlinkCharges++;
}

#pragma endregion

#pragma region Deprecated_Functions

void ACBlink::GetPlayer()
{
	// A quick check to query UEngine for the current player, then cast it to our class.
	AActor* playerActor = UGameplayStatics::GetPlayerPawn( GetWorld(), 0 );
	mpcPlayer = Cast<ACPlayer>( playerActor );
}

void ACBlink::VFireEvent()
{
	Blink();
}

void ACBlink::TeleportToLocation_Camera(FVector v3Location)
{
	const FVector v3TeleportLocation = v3Location - (FVector( mpcPlayer->GetFollowCamera()->GetRelativeLocation().X, mpcPlayer->GetFollowCamera()->GetRelativeLocation().Y, 0 ));
	mpcPlayer->SetActorLocation( v3TeleportLocation );
}

void ACBlink::TeleportToLocation_Player(FVector v3Location)
{
	const FVector v3TeleportLocation = v3Location - (FVector( mpcPlayer->GetFollowCamera()->GetRelativeLocation().X, mpcPlayer->GetFollowCamera()->GetRelativeLocation().Y, 0 ));
	mpcPlayer->SetActorLocation( v3TeleportLocation );
}

bool ACBlink::TraceToTeleportTarget_Player()
{
	//bool bTraceResult;
	const FVector v3CurrentLocation = mpcPlayer->GetActorLocation();

	// Same thing for our forward vector, will we be using the cameras or the players?
	const FVector v3CurrentForwardVector = mpcPlayer->GetActorForwardVector();

	// Either way, we then calculate the multiplied forward vector to get our depth.
	const FVector v3MultipliedForwardVector = v3CurrentForwardVector * m_sSpellStats.Distance;


	const FVector v3CalculatedDepth = v3CurrentLocation + v3MultipliedForwardVector;


	FHitResult sHitResult;
	const bool bHit = GetWorld()->LineTraceSingleByChannel( sHitResult, v3CurrentLocation, v3CalculatedDepth, ECC_Visibility );
	
	if ( bHit )
	{
		FHitResult sHitResult2;
		FVector v3Downwards = FVector( sHitResult.Location ) + (FVector( 0, 0, -1 ) * m_sSpellStats.Distance);
		const bool bHit2 = GetWorld()->LineTraceSingleByChannel( sHitResult2, sHitResult.Location, v3Downwards, ECC_Visibility );		
		const float fDotProduct = UKismetMathLibrary::Dot_VectorVector( sHitResult2.Normal, FVector( 0, 0, 1 ) );
		m_bHit = fDotProduct > 0.9f;

		if ( m_bHit )
		{
			m_v3TeleportLocation = sHitResult2.Location;
			UNavigationSystemV1::K2_ProjectPointToNavigation( GetWorld(), sHitResult2.Location, m_v3ProjectedLocation, nullptr, nullptr, FVector( 0, 0, 0 ) );
		}
		
	}
	else
	{
		FHitResult sHitResult2;
		FVector v3Downwards = v3CalculatedDepth + (FVector( 0, 0, -1 ) * m_sSpellStats.Distance);
		const bool bHit2 = GetWorld()->LineTraceSingleByChannel( sHitResult2, v3CalculatedDepth, v3Downwards, ECC_Visibility );
		const float fDotProduct = UKismetMathLibrary::Dot_VectorVector( sHitResult2.Normal, FVector( 0, 0, 1 ) );
		m_bHit = fDotProduct > 0.9f;

		if (m_bHit)
		{
			m_v3TeleportLocation = sHitResult2.Location;
			UNavigationSystemV1::K2_ProjectPointToNavigation( GetWorld(), sHitResult2.Location, m_v3ProjectedLocation, nullptr, nullptr, FVector( 0, 0, 0 ) );
		}
	}

	return m_bHit;
}

bool ACBlink::TeleportToLocation()
{
	bool bCouldTeleport = false;
	const FVector v3TeleportLocation = m_v3ProjectedLocation - (FVector( mpcPlayer->GetFollowCamera()->GetRelativeLocation().X, mpcPlayer->GetFollowCamera()->GetRelativeLocation().Y, 0 ));

	m_sTimelineForward.PlayFromStart();
	GetWorldTimerManager().SetTimer( m_sTimer, this, &ACBlink::DelayedAction, m_sSpellStats.Delay_Before_Blink, false );	
	bCouldTeleport = mpcPlayer->TeleportTo( v3TeleportLocation, mpcPlayer->GetActorRotation()  );

	if (bCouldTeleport)
	{
		m_iBlinkCharges--;
		mpcPlayer->SetBlinkCD( m_sSpellStats.Cool_Down );
		ChargeLogic();
	}
	return bCouldTeleport;
}

bool ACBlink::TraceToTeleportTarget_Camera()
{
	bool bTeleport = false;
	// Our current location depends on the origin, is it the player or the camera?
	const FVector v3CurrentLocation = mpcPlayer->GetFollowCamera()->GetComponentLocation();

	// Same thing for our forward vector, will we be using the cameras or the players?
	const FVector v3CurrentForwardVector = mpcPlayer->GetFollowCamera()->GetForwardVector();

	// Either way, we then calculate the multiplied forward vector to get our depth.
	const FVector v3MultipliedForwardVector = v3CurrentForwardVector * m_sSpellStats.Distance;

	
	const FVector v3CalculatedDepth = v3CurrentLocation + v3MultipliedForwardVector;


	FHitResult sHitResult;

	GetWorld()->LineTraceSingleByChannel( sHitResult, v3CurrentLocation, v3CalculatedDepth, ECC_Visibility );
	
	const float fDotProduct = UKismetMathLibrary::Dot_VectorVector( sHitResult.Normal, FVector( 0, 0, 1 ) );

	m_bHit = fDotProduct > 0.9f;
	
	if ( m_bHit )
	{
		m_v3TeleportLocation = sHitResult.Location;
		UNavigationSystemV1::K2_ProjectPointToNavigation( GetWorld(), sHitResult.Location, m_v3ProjectedLocation, nullptr, nullptr, FVector(0,0,0) );

		bTeleport =  TeleportToLocation();
	}
	else
	{
		bTeleport = false;
	}	
	// returns if it can tp or not	
	return bTeleport;
}

void ACBlink::Teleport()
{
	switch (m_eTeleportType)
	{
		case TeleportType::Distance:

			if (!m_sSpellStats.Grounded_Only)
			{
				m_sTimelineForward.PlayFromStart();
				m_v3FinalLocation = m_vDepthLocation;
				m_v3FinalLocation.Z = mpcPlayer->GetActorLocation().Z;
				GetWorldTimerManager().SetTimer( m_sTimer, this, &ACBlink::DelayedAction, m_sSpellStats.Delay_Before_Blink, false );
				m_bCouldBlink = true;

				m_iBlinkCharges--;
				mpcPlayer->SetBlinkCD( m_sSpellStats.Cool_Down );

				ChargeLogic();
			}
			else
			{
				BlinkFail();
			}
			break;

		case TeleportType::Target:

			if (!m_sSpellStats.Grounded_Only)
			{
				m_sTimelineForward.PlayFromStart();
				m_v3FinalLocation = m_vHitLocation;
				m_v3FinalLocation.Z = mpcPlayer->GetActorLocation().Z;
				GetWorldTimerManager().SetTimer( m_sTimer, this, &ACBlink::DelayedAction, m_sSpellStats.Delay_Before_Blink, false );
				m_bCouldBlink = true;

				m_iBlinkCharges--;
				mpcPlayer->SetBlinkCD( m_sSpellStats.Cool_Down );
				ChargeLogic();
			}
			break;
	}
}

void ACBlink::LineTrace()
{
	if (m_sSpellStats.Camera_Direction)
	{
		TraceToTeleportTarget_Camera();
	}
	else
	{
		TraceToTeleportTarget_Player();
	}
}

#pragma endregion

ACBlink::SBlinkData ACBlink::TraceBlinkTarget()
{
	SBlinkData sBlinkData;

	const FVector v3TraceStart = mpcPlayer->GetFollowCamera()->GetComponentLocation();
	const FVector v3TraceEnd = (v3TraceStart) + (mpcPlayer->GetFollowCamera()->GetForwardVector() * m_sSpellStats.Distance);

	FHitResult sHitResult;
	sBlinkData.bBlockingHit = GetWorld()->LineTraceSingleByChannel( sHitResult, v3TraceStart, v3TraceEnd, ECC_Visibility );
	sBlinkData.v3ImpactLocation = sHitResult.ImpactPoint;
	sBlinkData.v3ImpactNormal = sHitResult.ImpactNormal;

	if ( sBlinkData.bBlockingHit )
	{		
		m_v3BlinkLocation = sHitResult.Location + FVector( 0, 0, mpcPlayer->GetCapsuleComponent()->GetScaledCapsuleHalfHeight() );
	}
	else
	{
		m_v3BlinkLocation = v3TraceEnd;		
	}
	
	return sBlinkData;	
}


void ACBlink::CanScaleWall()
{
	SBlinkData fBlinkData = TraceBlinkTarget();

	if (!fBlinkData.bBlockingHit)
	{
		m_bCanScaleWall = false;
	}
	else
	{
		if (fBlinkData.v3ImpactNormal.Z > 0.1)
		{
			m_bCanScaleWall = false;
		}
		else
		{
			UKismetMathLibrary::Vector_Normalize( fBlinkData.v3ImpactNormal, 0.0001f );
			FHitResult sHitResult;
			const float fInversedWallScaled = 35.f * -1.25f;
			const FVector v3CalculatedNormal = fBlinkData.v3ImpactNormal * fInversedWallScaled;
			
			const FVector v3TraceEnd = fBlinkData.v3ImpactLocation + v3CalculatedNormal;
			const FVector v3TraceStart = v3TraceEnd + FVector( 0, 0, mpcPlayer->GetCapsuleComponent()->GetScaledCapsuleHalfHeight() * 2 );

			SLedgeData sLedgeData;
			sLedgeData.v3TraceStart = sHitResult.ImpactPoint;
			sLedgeData.v3TraceEnd = sHitResult.TraceEnd;
			sLedgeData.fScaleHeight =  mpcPlayer->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
			
			m_v3WallBlinkLocation = sHitResult.ImpactPoint + FVector( 0, 0, mpcPlayer->GetCapsuleComponent()->GetScaledCapsuleHalfHeight() * 1 );		
			
			if ( m_bHit )
			{
				if ( !IsLedgeInReach( sLedgeData ) )
				{			
					m_bCanScaleWall = true;
				}
				else
				{
					m_bCanScaleWall = false;
				}
			}
			else
			{
				m_bCanScaleWall = false;
			}
		}
	}
}

bool ACBlink::IsLedgeInReach(SLedgeData sLedgeData)
{
	return sLedgeData.v3TraceStart.Z - sLedgeData.v3TraceEnd.Z <= sLedgeData.fScaleHeight;
}

bool ACBlink::AttemptTeleport()
{
	bool bTeleportSuccess = false;
	
	if (!m_bCanScaleWall)
	{
		bTeleportSuccess= mpcPlayer->TeleportTo( m_v3BlinkLocation, mpcPlayer->GetActorRotation() );
		if ( m_sSpellStats.VFX_Blink_Start) const UParticleSystemComponent* pHitFX = UGameplayStatics::SpawnEmitterAtLocation( GetWorld(), m_sSpellStats.VFX_Blink_Start, GetActorLocation(), FRotator::ZeroRotator, FVector(1,1,1), true );

		if (bTeleportSuccess)
		{
			UE_LOG( LogTemp, Warning, TEXT( "Wall teleport success." ) );
			
			BlinkExtraLogic();
		}
	}
	else
	{
		bTeleportSuccess = mpcPlayer->TeleportTo( m_v3WallBlinkLocation, mpcPlayer->GetActorRotation() );

		if (bTeleportSuccess)
		{
			UE_LOG( LogTemp, Warning, TEXT( "Distance teleport success." ) );
			
			BlinkExtraLogic();
		}
	}

	return bTeleportSuccess;
}

void ACBlink::BlinkExtraLogic()
{

	
	m_sTimelineForward.PlayFromStart();
	GetWorldTimerManager().SetTimer( m_sTimer, this, &ACBlink::DelayedAction, m_sSpellStats.Delay_Before_Blink, false );
	m_iBlinkCharges--;
	mpcPlayer->SetBlinkCD( m_sSpellStats.Cool_Down );
	
	mpcPlayer->UpdateChargesPBUI();
	mpcPlayer->UpdateChargesTXTUI();
	mpcPlayer->UpdateBlinkUI();
	ChargeLogic();
}


#pragma region Setters

void ACBlink::SetSpellManager(ASpellManager* pSpellManager)
{
	mpcSpellManager = pSpellManager;
}

void ACBlink::SetPlayer(ACPlayer* pPlayer)
{
	mpcPlayer = pPlayer;
}

void ACBlink::SetStats(FBlinkStatsStruct sStats)
{
	m_sSpellStats = sStats;
	m_iBlinkCharges = m_sSpellStats.Max_Charges;

	if (m_sSpellStats.CurveFloat)
	{

		FOnTimelineFloat MovementProgressFunction;
		MovementProgressFunction.BindUFunction( this, FName( "ZoomIn" ) );

		m_sTimelineForward.AddInterpFloat( m_sSpellStats.CurveFloat, MovementProgressFunction );
		m_sTimelineForward.SetLooping( false );

		FOnTimelineFloat MovementProgressFunctionReverse;
		MovementProgressFunction.BindUFunction( this, FName( "ZoomOut" ) );

		m_sTimelineReverse.AddInterpFloat( m_sSpellStats.CurveFloat, MovementProgressFunction );
		m_sTimelineReverse.SetLooping( false );
	}
}

#pragma endregion



#pragma region Getters

FBlinkStatsStruct ACBlink::GetStats() const
{
	return m_sSpellStats;
}

FTimerHandle ACBlink::GetAbilityTimer() const
{
	return m_sTimer;
}

FTimerHandle ACBlink::GetRechargeTimer() const
{
	return m_sCounterRecharge;
}

int ACBlink::GetCurrentCharges() const
{
	return m_iBlinkCharges;
}

#pragma endregion 