////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer February 2020 - Module 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of a collectable key.
//
// Current Limitations:
//   None.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "CPickup.h"
#include "GameFramework/Actor.h"
#include "CKeyPickup.generated.h"

class ACPickup;

// Static event for inventory pickup collection.  
struct GCAA_API FAttemptToCollectInventoryPickupDelegate
{
	DECLARE_MULTICAST_DELEGATE_OneParam ( FAttemptToCollectInventoryPickupSignature, ACPickup* )
	static FAttemptToCollectInventoryPickupSignature FAttemptPickup;
};

UCLASS()
class GCAA_API ACKeyPickup : public ACPickup
{
	GENERATED_BODY ()

public:

		// Sets default values for this actor's properties
	ACKeyPickup ();

	/////////////////////////////////////////////
	// Sound
	// Collection Sound 
	UPROPERTY(EditAnywhere, Category = "sound")
		class USoundBase* CollectionSound;
	bool bCollectionSoundActivated;
	void PlayCollectionAudio();
	/////////////////////////////////////////////
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay () override;

public:
	// Called every frame
	virtual void Tick ( float DeltaTime ) override;


	void OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult ) override;


	virtual void AttemptToCollect () override;

};
