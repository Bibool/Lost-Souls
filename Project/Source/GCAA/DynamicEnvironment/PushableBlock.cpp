////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "PushableBlock.h"
#include "Engine/EngineTypes.h"
#include "Engine.h"
#include "GCAA/Player/CPlayer.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Math/Vector.h"
#include "GenericPlatform/GenericPlatformMath.h"
#include "Math/UnrealMathUtility.h"
#include "Sound/SoundBase.h"

// Sets default values
APushableBlock::APushableBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = StaticMesh;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent> ( TEXT ( "StaticMesh" ) );

	ImpulseMultiplier = 10000.0f;
	ReducedWalkSpeed = 10.0f;

	TriggerBox = CreateDefaultSubobject<UBoxComponent> ( TEXT ( "Box" ) );
	TriggerBox->SetupAttachment ( StaticMesh );
	TriggerBox->SetGenerateOverlapEvents ( true );
	TriggerBox->OnComponentBeginOverlap.AddDynamic ( this, &APushableBlock::OnOverlapBegin );
	TriggerBox->OnComponentEndOverlap.AddDynamic ( this, &APushableBlock::OnOverlapEnd );

	this->SetActorTickEnabled(false);

	PhyConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent> ( TEXT ( "PhysicsConstraint" ) );
	PhyConstraint->SetupAttachment ( StaticMesh );

	////////////////////////////////////////////////
	// Sound Variables
	fPushBlockTimeShiftDefault = 0.325f;
	fPushBlockTimeShift = fPushBlockTimeShiftDefault;
	fPreviousWorldTime = 0.0f;
	fPushBlockTimer = 1.0f;
	////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Called when the game starts or when spawned
void APushableBlock::BeginPlay()
{
	Super::BeginPlay();

	// Ticking will only occur when the block is being pushed.
	this->SetActorTickEnabled ( false );
	
	// Event responder when the pushing angle is too great - snap player out of pushing.
	FPlayerExitsPushingDelegate::FExitPushing.AddUObject ( this, &APushableBlock::ExitPushAllowedActions );

	AActor* pCharacter = UGameplayStatics::GetPlayerCharacter ( this, 0 );
	ACPlayer* pPlayer = Cast<ACPlayer> ( pCharacter );

	// The capsure radius is enlarged when the pushing state is entered, then reverted back on exit from pushing.
	UCapsuleComponent* UCap = pPlayer->GetCapsuleComponent ();
	float outRad = UCap->GetUnscaledCapsuleRadius ();
	fCapRadius = outRad;

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool APushableBlock::FireTracesToLocatePushableBlockFlatSurface ( FVector& theSurfaceNormal, bool bDisplayDebug )
{

	// Retrieve all the necessary player vector/location info and set up the ray start and end points before the casting begins.

	AActor* pCharacter = UGameplayStatics::GetPlayerCharacter ( this, 0 );

	ACPlayer* pPlayer = Cast<ACPlayer> ( pCharacter );
	FVector cforwardVec = pPlayer->GetActorForwardVector ();

	FRotator cPlayersRotation = UKismetMathLibrary::MakeRotFromX ( cforwardVec );
	FVector cStartLocation = pPlayer->GetActorLocation ();
	cStartLocation = pPlayer->GetActorLocation () + (cPlayersRotation.Vector () * 10.0f);
	FVector cRayEndPoint = cStartLocation + cPlayersRotation.Vector () * 200.0f;

	// Generate the ray traces to find the required component.
	TArray<FHitResult> OutHits;
	const TArray<AActor*> inActs;
	bool isHit = UKismetSystemLibrary::SphereTraceMulti ( GetWorld (), cStartLocation, cRayEndPoint, 5.0f, TraceTypeQuery1, false, 
		inActs, EDrawDebugTrace::None, OutHits, true, FColor::Red, FColor::Green, -1.0f );
		
	bool bFoundStaticMesh = false;
	theSurfaceNormal = FVector::ZeroVector;

	if (isHit)
	{
		// loop through TArray of hits until the Box component is found.  The box component was found to be more reliable to return
		// a usable impact normal rather than the static mesh component.   The static mesh is intermittently returning a positive Z
		// vector upwards.
		for (auto& Hit : OutHits)
		{
			if (GEngine)
			{
				if (bDisplayDebug)
				{
					UE_LOG ( LogTemp, Warning, TEXT ( "PUSHABLE BLOCKS - All Hit Information (SPHERE): %s" ), *Hit.ToString () );
				}

				if (Hit.Actor == this && Hit.Component->GetFName () == "Box")
				{
					if (bDisplayDebug)
					{
						UE_LOG ( LogTemp, Warning, TEXT ( "PUSHABLE BLOCKS - Found the box component" ) );
					}
				
					theSurfaceNormal = Hit.ImpactNormal;
					bFoundStaticMesh = true;
					
					//DrawDebugSphere ( GetWorld (), Hit.ImpactPoint, 30.0f, 5.0f, FColor::Purple, true );
				}
			}
		}
	}
	return bFoundStaticMesh;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void APushableBlock::OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult )
{

	// Check this is the player overlapping as could be an NPC.
	AActor* pCharacter = UGameplayStatics::GetPlayerCharacter ( this, 0 );
	ACPlayer* pPlayer = Cast<ACPlayer> ( pCharacter );
	FVector cforwardVec = pPlayer->GetActorForwardVector ();

	if (OtherActor == pCharacter)
	{
		// Get the impact normal from the block.
		FVector cSurfNorm;
		FireTracesToLocatePushableBlockFlatSurface ( cSurfNorm, true );
		cSurfNorm.Normalize ();

        // Define the surface normal vector for debugging.
		//FVector cSurfNormStart = this->GetActorLocation ();
		//FVector cSurfNormEnd = cSurfNormStart + (cSurfNorm * 200.0f);
		//DrawDebugLine ( GetWorld (), cSurfNormStart, cSurfNormEnd, FColor::Yellow, true, 5.0f, 0, 1.f );

		// calculate the dot product between the players forward vector and the impact surface normal from the pushable block
		cforwardVec.Normalize();
		cSurfNorm.Normalize ();
		float fDotProd = FVector::DotProduct ( cforwardVec, cSurfNorm );
		float fAcosOfDotProduct = FMath::Acos ( fDotProd );
		float fDegreesResult = FMath::RadiansToDegrees ( fAcosOfDotProduct );

		//UE_LOG ( LogTemp, Warning, TEXT ( "DOT PRODUCT %f = %f = %f" ), fDotProd, fAcosOfDotProduct , fDegreesResult);
		
		// Use the result of the above calculation to determine if the player is at too sleep an angle (yaw) to allow pushing to commence.
		// ie, player needs to be face on to the block - give or take configurable property fMaxAllowedAngleToPushInDegrees.
		if (fDegreesResult > (180.0f - pPlayer->fMaxAllowedAngleToPushInDegrees))    // 180 degrees is face on to the cubes flat surfcace.
		{
			// Enable the tick to allow further continuous monitoring of the player angle relevant to the block surface.
			this->SetActorTickEnabled ( true );

			// allow the push to occur.
			//UE_LOG ( LogTemp, Warning, TEXT ( "PUSH ALLOWED!" ) );
			pPlayer->bIsPushing = true;
			
			// The capsule radius is doubled to accomodate the player leaning forward whilst pushing.
			UCapsuleComponent* UCap = pPlayer->GetCapsuleComponent ();
			UCap->SetCapsuleRadius ( fCapRadius * 2.0f );

			// The players walk speed is reduced to simulate realism that the pushing block is heavy.
			pPlayer->GetCharacterMovement ()->MaxWalkSpeed = ReducedWalkSpeed;

		}
		else
		{
			ExitPushAllowedActions ();
			//UE_LOG ( LogTemp, Error, TEXT ( "Angle not within margin.   " ) );

		}
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
void APushableBlock::ExitPushAllowedActions ()
{
	// This operation is called when a decision has been made to exit the pushing state.

	AActor* pCharacter = UGameplayStatics::GetPlayerCharacter ( this, 0 );
	ACPlayer* pPlayer = Cast<ACPlayer> ( pCharacter );
	pPlayer->bIsPushing = false;

	// Set capsule back to normal size.
	UCapsuleComponent* UCap = pPlayer->GetCapsuleComponent ();
	UCap->SetCapsuleRadius (fCapRadius);

	// Revert player walk speed back to normal
	pPlayer->SetWalkSpeed ();

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void APushableBlock::OnOverlapEnd ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex )
{
	// Check this is the player that is ending the overlapping.
	
	AActor* pCharacter = UGameplayStatics::GetPlayerCharacter ( this, 0 );
	if (OtherActor == pCharacter)
	{
		this->SetActorTickEnabled ( false );
		UE_LOG ( LogTemp, Warning, TEXT ( "PUSH BLOCK - END OVERLAP" ) );
		ExitPushAllowedActions ();
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

void APushableBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Get required values from the player.
	AActor* pCharacter = UGameplayStatics::GetPlayerCharacter ( this, 0 );
	ACPlayer* pPlayer = Cast<ACPlayer> ( pCharacter );
	FVector cForwardVector = pPlayer->GetActorForwardVector ();
	FVector cVelocity = pPlayer->GetVelocity ();
	
	if (pPlayer->bIsPushing)
	{

		// Only add an impulse to the block only if the player is moving forward.
		float fDotSpeed = FVector::DotProduct ( cVelocity, cForwardVector );
		if (fDotSpeed > 0.0f)
		{
			StaticMesh->AddImpulse ( pPlayer->GetActorForwardVector () * ImpulseMultiplier );
		}

		// Get impact normal back from the block being pushed.
		FVector cSurfNorm;
		FireTracesToLocatePushableBlockFlatSurface ( cSurfNorm, false );
		cSurfNorm.Normalize ();

		// Draw YELLOW surface normal from flat block face.
		//FVector cSurfNormStart = this->GetActorLocation ();
		//FVector cSurfNormEnd = cSurfNormStart + (cSurfNorm * 200.0f);
		//DrawDebugLine ( GetWorld (), cSurfNormStart, cSurfNormEnd, FColor::Yellow, true, 5.0f, 0, 1.f );

		// Pass the result of the impact normal detection to the player class.
		pPlayer->cPushingBlockImpactNormal = cSurfNorm;

		// Sound when player push block
		PlayPushBlockAudio();
	}
	else
	{
		// Experimental for the block dropping from a height.  Not required for prototype.
		//FVector zOnly = FVector ( 0.0f, 0.0f, -1.0f );
		// Add a constant z impulse so the block falls correctly.
		//StaticMesh->AddImpulse ( zOnly * (ImpulseMultiplier * 10.0f) );

	}
}

void APushableBlock::PlayPushBlockAudio()
{
	// Only call the function each period of time for the footsteps, prevent multiple calls
	if (GetWorld()->GetRealTimeSeconds() - fPreviousWorldTime > fPushBlockTimeShift)
	{
		UGameplayStatics::SpawnSound2D(this, PushSound, 0.25f, 0.5f, 4.5f);
		fPreviousWorldTime = GetWorld()->GetRealTimeSeconds();
	}
}
