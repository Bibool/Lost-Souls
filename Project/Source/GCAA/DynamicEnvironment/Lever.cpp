////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer February 2020 - Module 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Lever.h"
#include "EnvironmentItem.h"
#include "Interactable.h"
#include "GCAA/Player/CPlayer.h"

//#include "Vector.h"

// Sets default values
ALever::ALever ()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Box->OnComponentBeginOverlap.AddDynamic ( this, &ALever::OnOverlapBegin );
	Box->OnComponentEndOverlap.AddDynamic ( this, &ALever::OnOverlapEnd );

	LeverBaseStaticMesh = CreateDefaultSubobject<UStaticMeshComponent> ( TEXT ( "LeverBaseStaticMesh" ) );
	LeverBaseStaticMesh->SetupAttachment( ECRootComponent );
	StaticMesh->SetupAttachment ( LeverBaseStaticMesh );
	StartRotation	= 0.0;
	TargetRotation	= -80.0;
	bFirstPassDone = false;







}

// Called when the game starts or when spawned
void ALever::BeginPlay ()
{
	Super::BeginPlay ();

	FPlayerInteractingDelegate::FPlayerInteracting.AddUObject ( this, &ALever::RespondToInteractionCommand );

	/*Check curve from BP is valid */
	if (CurveFloat)
	{
		FOnTimelineFloat MovementProgressFunction;
		MovementProgressFunction.BindUFunction ( this, FName ( "HandleRotationProgress" ) );

		//Setting up the loop status and the function that is going to fire when the timeline ticks
		cMyTimeline.AddInterpFloat ( CurveFloat, MovementProgressFunction );
		cMyTimeline.SetLooping ( false );
	}
}

// Called every frame
void ALever::Tick ( float DeltaTime )
{
	Super::Tick ( DeltaTime );

	//Advancing the timeline in every tick
	cMyTimeline.TickTimeline ( DeltaTime );

}

//////////////////////////////////////////////////////////////////////////
// Operation called when player overlaps this object.
//
//////////////////////////////////////////////////////////////////////////
void  ALever::OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult )
{

	if (CheckThatOtherActorIsPlayer ( OtherActor ))
	{
		DisplayInteractionWidget ();
		bWaitingToInteract = true;
	}
}

void ALever::OnOverlapEnd ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex )
{
	if (CheckThatOtherActorIsPlayer ( OtherActor ))
	{
		RemoveInteractionWidget ();
		bWaitingToInteract = false;
	}

}

//////////////////////////////////////////////////////////////////////////
// Operation specified by the timeline for Curve rotation of the lever.
//////////////////////////////////////////////////////////////////////////
void  ALever::HandleRotationProgress ( float Value )
{
	FRotator cRotation;

	cRotation = GetActorRotation ();
	float fNewPitch = FMath::Lerp ( StartRotation, TargetRotation, Value );
	cRotation.Pitch = fNewPitch;
	SetActorRotation ( cRotation );
}

void ALever::RespondToInteractionCommand ()
{
	if (bWaitingToInteract)
	{

		// Ignore interation if lever is currently transitioning
		if (!cMyTimeline.IsPlaying ())
		{

			FRotator ctt = GetActorRotation ();
			//UE_LOG ( LogTemp, Warning, TEXT ( "(1)ROT.YAW=%f" ), ctt.Yaw );

			// First pass don't swap the start/target rotation values.
			if (bFirstPassDone)
			{
				float fTempRotationValue;
				fTempRotationValue = TargetRotation;
				TargetRotation = StartRotation;
				StartRotation = fTempRotationValue;

			}
		}

		cMyTimeline.PlayFromStart ();

		// Latch this flag and then start/target rotations will always swap per interaction.
		bFirstPassDone = true;

		InteractWithAllConnectedEnvironmentItems ();
	
		RemoveInteractionWidget ();
	}

}



