////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines the Player Journal - a record of all journal entries currently held by the player.
//
// The core data structure providing the inventory is a TArray of pointers to ACJournal named aPlayerJournalCollected.
//
// Current Limitations:
//   None
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Interactables/CJournalPickup.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CPlayerJournal.generated.h"

struct GCAA_API FJournalItemAdded
{
	DECLARE_MULTICAST_DELEGATE_OneParam ( FJournalItemAddedSignature, int )
	static FJournalItemAddedSignature FJournalItemHasBeenAdded;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GCAA_API UCPlayerJournal : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCPlayerJournal();

	//Adds the Pikcup item 'ToAdd' to the inventory.
	UFUNCTION ()
	void AddItemToJournal ( ACJournalPickup* ToAdd );

	UFUNCTION ()
    ACJournalPickup* SearchForItemInJournal ( int ToFind );

	// Max number of entries in the journal
	UPROPERTY ( EditAnywhere, Category = Configure, meta = (ClampMin = "0", ClampMax = "100", UIMin = "0", UIMax = "100") )
	int NumberOfJournalEntries;

	UPROPERTY ( EditAnywhere, Category = Configure )
	FName MissingJournalEntryText;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	

	// Return a read only reference to the Player Journal - eg. for UI to read.
	UFUNCTION ()
	const TArray<ACJournalPickup*> GetPlayerJournal ();

	UPROPERTY ()
	TArray<ACJournalPickup*> aPlayerJournalCollected;
		
};
