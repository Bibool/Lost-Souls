////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer February 2020 - Module 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of a collectable item (Pickup).
//
// Current Limitations:
//   None.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
//#include "CPickupContainer.h"
#include "CPickup.generated.h"


class ACPickupContainer;

UENUM ()
enum class EPickupType
{
	Key,
	JournalEntry
};



UCLASS()
class GCAA_API ACPickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPickup();

	UPROPERTY ( EditAnywhere )
	USceneComponent* PickupRootComponent;

	UPROPERTY ( VisibleAnywhere )
	UStaticMeshComponent* StaticMesh;

	UPROPERTY ( VisibleAnywhere, BlueprintReadWrite )
	UBoxComponent* Box;

	// The identifier for the pickup so it can be identified - such as in a player inventory.
	UPROPERTY ( EditAnywhere, BlueprintReadWrite, Category = "Configure" )
	FName PickupName;


	UPROPERTY ( EditAnywhere, Category = "Configure" )
	int ContainerNumber;


	EPickupType PickupType;

	// Called every frame
	virtual void Tick ( float DeltaTime ) override;

	UFUNCTION ()
	virtual void OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult ) PURE_VIRTUAL ( , );

	virtual void AttemptToCollect () PURE_VIRTUAL(,);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay () override;

	

	//ACPickupContainer* IsPickupContainerFound ( int ContNumber );

	//bool IsPickupContainerOpen ( ACPickupContainer* theContainer );

};
