////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer February 2020 - Module 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class is an abstract super class for all controllable items in the environment, eg. doors, moving platforms.
//
// All sub classes of this class must implement the pure virtual function PerformInteract_Implementation.
//
// Current Limitations:
//   None
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Interactable.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnvironmentItem.generated.h"

UCLASS()
class GCAA_API AEnvironmentItem : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnvironmentItem();

	void PerformInteract ();
	virtual void PerformInteract_Implementation () PURE_VIRTUAL ( IInteractable::PerformInteract );

	UPROPERTY ( EditAnywhere, Category = "Configure" )
	FName Activator;

	UPROPERTY ( VisibleAnywhere )
	UStaticMeshComponent* StaticMesh;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay () override;
		
	/* Start and target positions for the items movement*/
	FVector cStartLocation;
	FVector cTargetLocation;

	/* The movement timeline */
	FTimeline cMyTimeline;

};
