////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of a Non-Stop moving platform.
//
// Current Limitations:
// None
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "MovingPlatform.h"
#include "NonStopMovingPlatform.generated.h"

UCLASS()
class GCAA_API ANonStopMovingPlatform : public AMovingPlatform
{
	GENERATED_BODY()
	
	ANonStopMovingPlatform ();

	// Interface function which performs the actual platform movement function.
	virtual void PerformInteract_Implementation () override;

	virtual void Tick ( float DeltaTime ) override;
	virtual void BeginPlay () override;
protected:
    // Flag to indicate the platform is currently traversing.
	bool bNonStopMovementIsRunning;
};
