////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of a Pressure Plate.
//
// Current Limitations:
// None
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentController.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "PressurePlate.generated.h"

UCLASS()
class GCAA_API APressurePlate : public AEnvironmentController
{
	GENERATED_BODY()
	
	// Sets default values for this actor's properties
	APressurePlate ();

public:

	UPROPERTY ( EditAnywhere )
	UStaticMeshComponent* PresurePlateStaticMesh;

	//Curve used to provide animation on the pressure plates movement.
	UPROPERTY ( EditAnywhere, Category = "Configure" )
	UCurveFloat* CurveFloat;

	// Door size can be taken from the mesh size eventually.
	UPROPERTY ( EditAnywhere, Category = "Configure", meta = (ClampMin = "0.0", ClampMax = "50.0", UIMin = "0", UIMax = "50") )
	float MovementDepth;
	
	UPROPERTY ( EditAnywhere, Category = "Configure" )
	bool PlayerCanTrigger;

	// Called every frame
	virtual void Tick ( float DeltaTime ) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay () override;

	UFUNCTION ()
	void HandleMovementProgress ( float Value );
	
	/* The movement timeline */
	FTimeline cMyTimeline;
	FVector cStartLocation;
	FVector cTargetLocation;

	// Operation called when player overlaps this object.
	UFUNCTION ()
	void OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult );

	// Operation called when player stops overlaping this object.
	UFUNCTION ()
	void OnOverlapEnd ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	bool bPushableBlockIsSittingOnPlateNow;

	void BeginOverlapActions ( );

	void EndOverlapActions ();

};
