////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of a Pickup Container Lid.
//
// Current Limitations:
// None
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "CPickupContainerLid.generated.h"

UCLASS( ClassGroup = (Custom), meta = (BlueprintSpawnableComponent) )
class GCAA_API UCPickupContainerLid : public USceneComponent
{
	GENERATED_BODY ()

public:
	// Sets default values for this component's properties
	UCPickupContainerLid ();

	//Curve float reference for the rotation.
	UPROPERTY ( EditAnywhere, Category = "Configure" )
		UCurveFloat* CurveFloatLidOpening;

	//Amount of rotation to perform for the CurveFloatYaw
	UPROPERTY ( EditAnywhere, Category = "Configure", meta = (ClampMin = "0.0", ClampMax = "180.0", UIMin = "0", UIMax = "180") )
		float RotationAmount;

	bool bIsClosed;

	int AssociatedContainerNumber;

protected:
	// Called when the game starts
	virtual void BeginPlay () override;

	//The function that will handle every tick of the curve.
	UFUNCTION ()
		void  HandleRotationProgress ( float Value );

	UFUNCTION ()
	void FinishFunction ();

	/* The movement timeline */
	FTimeline cMyTimeline;

	float fStartRotation;
	float fTargetRotation;
	
public:

	virtual void TickComponent ( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

	UFUNCTION ()
	void PerformLidMovement ();

};
