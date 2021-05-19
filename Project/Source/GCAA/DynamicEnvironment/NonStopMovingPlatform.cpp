////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NonStopMovingPlatform.h"

ANonStopMovingPlatform::ANonStopMovingPlatform ()
{
	bNonStopMovementIsRunning = false;
	this->SetActorTickEnabled ( false );
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ANonStopMovingPlatform::BeginPlay ()
{
	Super::BeginPlay ();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ANonStopMovingPlatform::Tick ( float DeltaTime )
{
	Super::Tick ( DeltaTime );

	
	if (!bNonStopMovementIsRunning && !cMyTimeline.IsPlaying ())
	{
		// Disable the tick when the platform is not in use.
		this->SetActorTickEnabled ( false );
	}
	else if (bNonStopMovementIsRunning && !cMyTimeline.IsPlaying ())
	{
		// Conditions correct to trigger movement of the plaform.
		PerformOneMovementAction ();
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ANonStopMovingPlatform::PerformInteract_Implementation ()
{
	if (!bNonStopMovementIsRunning)
	{
		// kick off non-stop movement.
		this->SetActorTickEnabled ( true );
		bNonStopMovementIsRunning = true;
	}
	else
	{
		// shut down non stop movement.
		bNonStopMovementIsRunning = false;
	}
}
