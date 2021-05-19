////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer February 2020 - Module 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of a Lever.
//
// Current Limitations:
//   None.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Components/BoxComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnvironmentController.h"
#include "Engine.h"
#include "Lever.generated.h"

UCLASS()

class GCAA_API ALever : public  AEnvironmentController
{
	GENERATED_BODY ()

public:
	// Sets default values for this actor's properties
	ALever ();

	UPROPERTY ( EditAnywhere )
		UStaticMeshComponent* LeverBaseStaticMesh;

	//Curve used to provide animation on the levers movement.
	UPROPERTY ( EditAnywhere, Category = "Configure" )
	UCurveFloat* CurveFloat;

	// Operation called when player overlaps this object.
	UFUNCTION ()
	void OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult );

	UFUNCTION ()
	void OnOverlapEnd ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex );

	// Called every frame
	virtual void Tick ( float DeltaTime ) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay () override;

	//The function that will handle every tick of the rotation curve.
	UFUNCTION ()
	void HandleRotationProgress ( float Value );
	
	
	void RespondToInteractionCommand ();
	
	
	
	
	float StartRotation;
	float TargetRotation;

	/* The movement timeline */
	FTimeline cMyTimeline;

private:

	// Flag used to skip swapping of the rotation values on first use of the lever.
	bool bFirstPassDone;

};
