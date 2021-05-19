////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer February 2020 - Module 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an instance of a Moving Platform.
// A CurveVector is provided to allow movement to occur in 3 dimensions, x,y,z.
// In addition a CurveFloat property allows rotation to occur (yaw axis only) by the RotationAmount
//
// Current Limitations:
//   Rotation is provided on the Yaw axis only.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Engine.h"
#include "EnvironmentItem.h"
#include "GameFramework/Actor.h"
#include "CoreMinimal.h"
#include "MovingPlatform.generated.h"

UCLASS()
class GCAA_API AMovingPlatform : public AEnvironmentItem
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AMovingPlatform ();

	// Interface function which performs the actual platform movement function.
	virtual void PerformInteract_Implementation () override;

	//Curve used to provide animation on the platforms movement.
	UPROPERTY ( EditAnywhere, Category = "Configure" )
	UCurveFloat* CurveFloat;

	//Distances for the plaform to move in the three x,y,z axis.
	UPROPERTY ( EditAnywhere, Category = "Configure" )
	float MovementDistance;

	//Curve float reference for the rotation.
	UPROPERTY ( EditAnywhere, Category = "Configure" )
	UCurveFloat* CurveFloatYaw;

	//Amount of rotation to perform for the CurveFloatYaw
	UPROPERTY ( EditAnywhere, Category = "Configure", meta = (ClampMin = "0.0", ClampMax = "360.0", UIMin = "0", UIMax = "360") )
	float RotationAmount;
	
	UPROPERTY ( EditAnywhere, Category = "Configure" )
	bool VerticalMovement;

	/*Is the plaform at its starting position - can be read but not editable in blueprints*/
	UPROPERTY ( BlueprintReadOnly, Category = "Configure" )
	bool atStart;

	// Called every frame
	virtual void Tick ( float DeltaTime ) override;

	//////////////////////////////////////////////////
	// Sound
	// MovingPlatform Sound 
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* MovingPlatformSound;
	bool bMovingPlatformSoundActivated;
	void PlayMovingPlatformSound();
	//////////////////////////////////////////////////

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay () override;

	//The function that will handle every tick of the curve.
	UFUNCTION ()
	void HandleMovementProgress ( float Value );

	//The function that will handle every tick of the curve.
	UFUNCTION ()
	void  HandleRotationProgress ( float Value );


	



	UFUNCTION ()
	void  PerformOneMovementAction();




private:

	/* Start and target rotation values for the items movement*/
	float fStartRotation;
	float fTargetRotation;

};
