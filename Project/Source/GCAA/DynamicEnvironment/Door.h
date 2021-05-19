////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer February 2020 - Module 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of a Door item.
//
// Current Limitations:
//  - Door can only start in closed state - modify later if gameplay requires pre-opened doors.
//  - Door size could be automatically taken from the mesh size.
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Engine.h"
#include "EnvironmentItem.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

UENUM()
enum EDoorMovementDirection
{
	Up UMETA ( DisplayName = "Up" ),
	Left UMETA ( DisplayName = "Left" ),
	Right UMETA ( DisplayName = "Right" )
};

UCLASS()
class GCAA_API ADoor : public AEnvironmentItem
{
	GENERATED_BODY ()

public:
	ADoor ();

	// Interface function which performs the actual door open/close function.
	virtual void PerformInteract_Implementation () override;

	// Door size can be taken from the mesh size eventually.
	UPROPERTY ( EditAnywhere, Category = "Configure", meta = (ClampMin = "0.0", ClampMax = "2000.0", UIMin = "0", UIMax = "2000") )
	float DoorSize;

	//The direction the door will move in when operated.
	UPROPERTY ( EditAnywhere, Category = "Configure" )
	TEnumAsByte<EDoorMovementDirection> DoorMovementDirection;

	//Curve used to provide animation on the doors movement.
	UPROPERTY ( EditAnywhere, Category = "Configure" )
	UCurveFloat* CurveFloat;

	//Is the door open - can be read but not editable in blueprints
	UPROPERTY ( BlueprintReadOnly, Category = "Configure" )
	bool IsOpen;

	////////////////////////////////////////////
	// OpenDoor Sound 
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* OpenDoorSound;
	bool bOpenDoorSoundActivated;
	void PlayOpenDoorSound();
	////////////////////////////////////////////

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay () override;
		
	//The function that will handle every tick of the movement curve.
	UFUNCTION ()
	void HandleMovementProgress ( float Value );

};
