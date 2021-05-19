////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "PressurePlate.h"
#include "PushableBlock.h"
#include "EnvironmentItem.h"
#include "Interactable.h"
#include "Engine.h"
#include "GCAA/Player/CPlayer.h"

// Sets default values
APressurePlate::APressurePlate ()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Box->OnComponentBeginOverlap.AddDynamic ( this, &APressurePlate::OnOverlapBegin );
	Box->OnComponentEndOverlap.AddDynamic ( this, &APressurePlate::OnOverlapEnd );
	StaticMesh->SetupAttachment ( ECRootComponent );
	MovementDepth = 20.0f;

	bPushableBlockIsSittingOnPlateNow = false;
	PlayerCanTrigger = false;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
void APressurePlate::BeginPlay ()
{
	Super::BeginPlay ();

	/*Check curve from BP is valid */
	if (CurveFloat)
	{
		FOnTimelineFloat MovementProgressFunction;
		MovementProgressFunction.BindUFunction ( this, FName ( "HandleMovementProgress" ) );

		//Setting up the loop status and the function that is going to fire when the timeline ticks
		cMyTimeline.AddInterpFloat ( CurveFloat, MovementProgressFunction );
		cMyTimeline.SetLooping ( false );
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void APressurePlate::Tick ( float DeltaTime )
{
	Super::Tick ( DeltaTime );

	//Advancing the timeline in every tick
	cMyTimeline.TickTimeline ( DeltaTime );
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void APressurePlate::BeginOverlapActions ()
{

	cStartLocation = cTargetLocation = GetActorLocation ();
	cTargetLocation.Z -= MovementDepth;
	cMyTimeline.PlayFromStart ();

	// Call the superclass operation to determine the interacions required on this pressure plate having
	// been pressed.
	InteractWithAllConnectedEnvironmentItems ();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void APressurePlate::EndOverlapActions ()
{
	// Swap over start and target locations to release the pressure plate.
	FVector FTemporary = cStartLocation;
	cStartLocation = cTargetLocation;
	cTargetLocation = FTemporary;

	if (!cMyTimeline.IsPlaying ())
	{
		cMyTimeline.PlayFromStart ();
	}

	// Call the superclass operation to determine the interacions required on this pressure plate having
	// been released.
	InteractWithAllConnectedEnvironmentItems ();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void  APressurePlate::OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult )
{

	// A pressure plate can be activated by the player or a pushable block starting overlap.
	UE_LOG ( LogTemp, Warning, TEXT ( "PRESSURE PLATE - BEGIN OVERLAP" ) );

	AActor* pCharacter = UGameplayStatics::GetPlayerCharacter ( this, 0 );
	AActor* pPushableBlock = Cast<APushableBlock> (OtherActor);

	// Lever design requried a function to make the player not able to trigger the pressure plate due to close distance from pressure plate to door.
	if ((OtherActor == pCharacter) && PlayerCanTrigger)
	{
		UE_LOG ( LogTemp, Warning, TEXT ( "PLAYER CAN TRIGGER" ) );

		// Player cannot interact with the pressure plate if a pushable block is currently sat on it.
		if (!bPushableBlockIsSittingOnPlateNow)
		{
			ACPlayer* pPlayer = Cast<ACPlayer> ( pCharacter );
			BeginOverlapActions ();
		}
	}

	if (OtherActor == pPushableBlock)
	{
		UE_LOG ( LogTemp, Warning, TEXT ( "(activated by pushable block!)" ) );
		bPushableBlockIsSittingOnPlateNow = true;
		BeginOverlapActions ();
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void  APressurePlate::OnOverlapEnd ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG ( LogTemp, Warning, TEXT ( "PRESSURE PLATE - END OVERLAP" ) );

	AActor* pCharacter = UGameplayStatics::GetPlayerCharacter ( this, 0 );
	AActor* pPushableBlock = Cast<APushableBlock> ( OtherActor );

	// Player cannot interact with the pressure plate if a pushable block is currently sat on it.
	if (OtherActor == pCharacter && !bPushableBlockIsSittingOnPlateNow && PlayerCanTrigger)
	{
		EndOverlapActions ();
	}

	if (OtherActor == pPushableBlock)
	{
		UE_LOG ( LogTemp, Warning, TEXT ( "(deactivated by pushable block!)" ) );
		bPushableBlockIsSittingOnPlateNow = false;
		EndOverlapActions ();
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void  APressurePlate::HandleMovementProgress ( float Value )
{
	//Setting up the new location of our actor
	FVector NewLocation = FMath::Lerp ( cStartLocation, cTargetLocation, Value );
	SetActorLocation ( NewLocation );
}
