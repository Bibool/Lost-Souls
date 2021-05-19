////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of a Journal Pickup.
//
// Current Limitations:
// None
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "CPickup.h"
#include "CJournalPickup.generated.h"

class ACPickup;

 // Static event for journal pickup collection.  
struct GCAA_API FAttemptToCollectJournalPickupDelegate
{
	DECLARE_MULTICAST_DELEGATE_OneParam ( FAttemptToCollectJournalPickupSignature, ACJournalPickup* )
	static FAttemptToCollectJournalPickupSignature FJournalPickup;
};

UCLASS()
class GCAA_API ACJournalPickup : public ACPickup
{
	GENERATED_BODY()
	
	ACJournalPickup ();
	
protected:

	virtual void BeginPlay () override;

public:

	virtual void Tick ( float DeltaTime ) override;

	UPROPERTY ( EditAnywhere, Category = "Configure" )
	int JournalEntryNumber;
	
	UPROPERTY ( EditAnywhere, Category = "Configure" )
	bool AutoPickupAtStart;

	void OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult ) override;
};
