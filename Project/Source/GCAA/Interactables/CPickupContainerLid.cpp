////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "CPickupContainerLid.h"
#include "CPickup.h"

// Sets default values for this component's properties
UCPickupContainerLid::UCPickupContainerLid ()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	RotationAmount					  = 0.0f;
	bIsClosed						  = true;
	AssociatedContainerNumber		  = 0;

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UCPickupContainerLid::BeginPlay ()
{
	Super::BeginPlay ();

	if (CurveFloatLidOpening)
	{
		FOnTimelineFloat RotationProgressFunction;
		RotationProgressFunction.BindUFunction ( this, FName ( "HandleRotationProgress" ) );
		cMyTimeline.AddInterpFloat ( CurveFloatLidOpening, RotationProgressFunction );

		FOnTimelineEvent TimelineFinish;
		TimelineFinish.BindUFunction ( this, FName ( "FinishFunction" ) );
		cMyTimeline.SetTimelineFinishedFunc ( TimelineFinish );
	}
	cMyTimeline.SetLooping ( false );

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void  UCPickupContainerLid::FinishFunction ()
{
	
	if (!bIsClosed)
	{
		// Search the world for a matching associated container number
		for (TActorIterator<ACPickup> pIterator ( GetWorld () ); pIterator; ++pIterator)
		{
			// Cast pIterator to Container type.
			ACPickup* cPickup = Cast<ACPickup> ( *pIterator );

			//If matching container numbers found, call the cPickup attempt to collect function
			//which is the superclass of all pickups in the game.
			if ((cPickup->ContainerNumber == AssociatedContainerNumber) && AssociatedContainerNumber > 0)
			{
				cPickup->AttemptToCollect ();
			}
		}
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void  UCPickupContainerLid::PerformLidMovement ()
{
	if (!cMyTimeline.IsPlaying ())
	{
		if (bIsClosed)
		{
			// Define start and target rotation values.
			fStartRotation = fTargetRotation = GetComponentRotation ().Roll;
			fTargetRotation += RotationAmount;
		}
		else
		{
			// Swap over teh start and target roation values to close the lid.
			float fTemporaryRotation = fStartRotation;
			fStartRotation = fTargetRotation;
			fTargetRotation = fTemporaryRotation;
		}
		cMyTimeline.PlayFromStart ();
		bIsClosed = !bIsClosed;
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void  UCPickupContainerLid::HandleRotationProgress ( float Value )
{

	// This function is called by the float curve and defines how the lid rotation is perfromed.
	FRotator cRotation;
	cRotation = GetComponentRotation ();
	float fNewRoll = FMath::Lerp ( fStartRotation, fTargetRotation, Value );
	cRotation.Roll = fNewRoll;
	SetRelativeRotation ( cRotation );

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Called every frame
void UCPickupContainerLid::TickComponent ( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent ( DeltaTime, TickType, ThisTickFunction );

	//Advancing the timeline in every tick
	cMyTimeline.TickTimeline ( DeltaTime );

}








