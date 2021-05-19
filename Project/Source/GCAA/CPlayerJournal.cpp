////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "CPlayerJournal.h"
#include "Interactables/CPickup.h"
#include "Interactables/CJournalPickup.h"
#include "EngineUtils.h"

FJournalItemAdded::FJournalItemAddedSignature FJournalItemAdded::FJournalItemHasBeenAdded;

// Sets default values for this component's properties
UCPlayerJournal::UCPlayerJournal()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
		
	aPlayerJournalCollected.Init (nullptr,0);

	MissingJournalEntryText = "   ???";

}

// Called when the game starts
void UCPlayerJournal::BeginPlay()
{
	Super::BeginPlay();

	// Listener event handler to trigger adding items to inventory.
	FAttemptToCollectJournalPickupDelegate::FJournalPickup.AddUObject ( this, &UCPlayerJournal::AddItemToJournal );
	//UE_LOG ( LogTemp, Warning, TEXT ( "Instance of journal created..." ));

	// Search for any journal entries which are automatically collected at game startup.
	for (TActorIterator<ACJournalPickup> pIterator ( GetWorld () ); pIterator; ++pIterator)
	{
		// Cast pIterator to ACJournalPickup
		ACJournalPickup* cJournalActorFound = Cast<ACJournalPickup> ( *pIterator );

		if (cJournalActorFound->AutoPickupAtStart)
		{
			//UE_LOG ( LogTemp, Warning, TEXT ( "Found an auto pickup..." ) );

			FAttemptToCollectJournalPickupDelegate::FJournalPickup.Broadcast ( cJournalActorFound );
		}
	}
		
}


// Called every frame
void UCPlayerJournal::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Return a const PlayerJournal - eg. for the UI to read.
////////////////////////////////////////////////////////////////////////////////////////////////////////////
const TArray<ACJournalPickup*> UCPlayerJournal::GetPlayerJournal ()
{
	// TODO: insert return statement here
	return aPlayerJournalCollected;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

void UCPlayerJournal::AddItemToJournal ( ACJournalPickup* ToAdd )
{
	
	aPlayerJournalCollected.Add ( ToAdd );

	UE_LOG ( LogTemp, Warning, TEXT ( "PICKUP ADDED TO JOURNAL, size = %d" ), aPlayerJournalCollected.Num () );

	// Set properties to "remove" the item from the game world.
	ToAdd->SetActorEnableCollision ( false );
	ToAdd->SetActorTickEnabled ( false );
	ToAdd->SetActorHiddenInGame ( true );

	// For those journal entries collected which are not auto added to the journal at the start we need to pause
	// game and display journal UI
	if (ToAdd->AutoPickupAtStart == false)
	{

		UE_LOG ( LogTemp, Warning, TEXT ( "UCPlayerJournal::AddItemToJournal::JOURNAL ENTRY NUMBER TO DISPLAY= %d" ), ToAdd->JournalEntryNumber );

		// Raise and event for any listeners, for example the cPlayer to pause game and display journal page.
		FJournalItemAdded::FJournalItemHasBeenAdded.Broadcast ( ToAdd->JournalEntryNumber );
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This operation returns a true if the ToFind input is found in the players journal.  False if not.
////////////////////////////////////////////////////////////////////////////////////////////////////////////
ACJournalPickup* UCPlayerJournal::SearchForItemInJournal ( int ToFind )
{
	for (ACJournalPickup* journalEntry : aPlayerJournalCollected)
	{
		if (ToFind == journalEntry->JournalEntryNumber)
		{
			return journalEntry;
		}
	}
	return nullptr;
}
