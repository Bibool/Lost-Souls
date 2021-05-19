// Fill out your copyright notice in the Description page of Project Settings.


#include "JournalMenuUI.h"
#include "..\Interactables\CJournalPickup.h"
#include "GCAA/Player/CPlayer.h"
#include "JournalItemUI.h"
#include "Components/ScrollBox.h"

UJournalMenuUI::UJournalMenuUI ( const FObjectInitializer& ObjectInitializer ) : Super ( ObjectInitializer )
{
	ConstructorHelpers::FClassFinder<UJournalItemUI> ItemClassFinder ( TEXT ( "/Game/Blueprints/UI/UI_JournalItem" ) );

	if (ItemClassFinder.Succeeded ())
	{
		ItemClass = ItemClassFinder.Class;
	}
	else
	{
		UE_LOG ( LogTemp, Warning, TEXT ( "Could not find the BP for UI_JournalItem!" ) );
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UJournalMenuUI::NativeConstruct ()
{
	Super::NativeConstruct ();

	UE_LOG ( LogTemp, Warning, TEXT ( "NATIVE CONSTRUCT FOR JOURNAL MENU CALLED." ) );

	// Listener event handler to trigger journal image updates.
	FJournalItemClickedDelegate::FJournalItemUpdate.AddUObject ( this, &UJournalMenuUI::UpdateJournalPage );
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UJournalMenuUI::NativeTick ( const FGeometry& MyGeometry, float InDeltaTime )
{
	Super::NativeTick ( MyGeometry, InDeltaTime );

	if (!UGameplayStatics::IsGamePaused ( GetWorld () ))
	{
		this->RemoveFromParent ();

	}

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UJournalMenuUI::UpdateJournal (int iJournalEntryToSelect)
{
	// This operation constructs the journal entries list within the UI scroll box, formating the entries
	// correctly as required by UI.

	AActor* pCharacter = UGameplayStatics::GetPlayerCharacter ( this, 0 );
	ACPlayer* pPlayer = Cast<ACPlayer> ( pCharacter );

	// Check the journal scroll box is present.
	if (UScrollBox* ScrollBox = Cast<UScrollBox> ( GetWidgetFromName ( "JournalScrollBox" ) ))
	{

		TArray<int> aPlayerJournal;

		// Construct journal to fixed size
		int iNumOfJounalEntries = (pPlayer->pPlayerJournal->NumberOfJournalEntries);

		for (int i = 0; i < iNumOfJounalEntries; i++)
		{
			// Construct the text string for each journal entry.

			aPlayerJournal.Add ( i );

			pItem = CreateWidget<UJournalItemUI> ( GetWorld ()->GetFirstPlayerController (), ItemClass );
			pItem->iEntryNumber = i + 1;

			int j = pItem->iEntryNumber;

			// Add leading 0's for the journal number display.
			FString cItemName;
			if (i > 8)
			{
				cItemName.Append ( "0" );
			}
			else
			{
				cItemName.Append ( "00" );
			}
			cItemName.Append ( FString::FromInt ( i+1 ) );
			cItemName.Append ( "  -  ");

			// Check if player has collected this journal entry already, if so use to pickupname string.
			ACJournalPickup* pJP;
			pJP = pPlayer->pPlayerJournal->SearchForItemInJournal ( i + 1 );
			if (pJP)
			{
				cItemName.Append(pJP->PickupName.ToString());
			}
			else
			{
				// use blueprint configurable text for missing journal entry.	
				cItemName.Append ( pPlayer->pPlayerJournal->MissingJournalEntryText.ToString () );
			}

			// Set widget name to final string and add to scroll box.
			pItem->itemName = *cItemName;
			ScrollBox->AddChild ( pItem );

			if (i+1 == iJournalEntryToSelect)
			{
				UE_LOG ( LogTemp, Warning, TEXT ( "iJournalEntryToSelect=%d" ), iJournalEntryToSelect );
				pItem->JournalItemButtonClicked ();
			}
		}
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UJournalMenuUI::UpdateJournalPage ( int iPageToDisplay )
{
	// This operation displays the correct journal page entry for input parameter iPageToDisplay.

	// Hard coded paths need to be refactored out!
	FString Path = FString ( "/Game/Blueprints/UI/Assets/JournalPage" );
	FString PathMissing = FString ( "/Game/Blueprints/UI/Assets/JournalPageMissing" );
	FString PathNotCollectedYet = FString ( "/Game/Blueprints/UI/Assets/JournalPageNotCollectedYet" );

	FString EntryNumber;
	if (iPageToDisplay > 9)
	{
		EntryNumber.Append ( "0" );
	}
	else
	{
		EntryNumber.Append ( "00" );
	}

	Path.Append ( EntryNumber );
	Path.Append ( FString::FromInt ( iPageToDisplay ) );

	// Load the journal image corresponding to this entry.
	UTexture2D* Texture = Cast<UTexture2D> ( StaticLoadObject ( UTexture2D::StaticClass (), NULL, *Path ) );

	if (!Texture)
	{
		// Jornal entry asset is missing - display appropriate message.
		UTexture2D* TextureMissing = Cast<UTexture2D> ( StaticLoadObject ( UTexture2D::StaticClass (), NULL, *PathMissing ) );
		if (TextureMissing)
		{
			JournalImageBP->SetBrushFromTexture ( TextureMissing );
		}
	}
	else
	{
		// If the journal entry has been collected then display its contents, otherwise display a '???' journal entry.
		AActor* pCharacter = UGameplayStatics::GetPlayerCharacter ( this, 0 );
		ACPlayer* pPlayer = Cast<ACPlayer> ( pCharacter );
		ACJournalPickup* pJP;
		pJP = pPlayer->pPlayerJournal->SearchForItemInJournal ( iPageToDisplay);
		if (pJP)
		{
			JournalImageBP->SetBrushFromTexture ( Texture );
		}
		else
		{
			UTexture2D* TextureNotCollectedYet = Cast<UTexture2D> ( StaticLoadObject ( UTexture2D::StaticClass (), NULL, *PathNotCollectedYet ) );
			if (TextureNotCollectedYet)
			{
				JournalImageBP->SetBrushFromTexture ( TextureNotCollectedYet );
			}
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void UJournalMenuUI::ReturnButtonClicked ()
{
	// If the journal was displayed by collecting a journal pickup rather than though the Pause menu, then need to instanly resume game play.
	if (JournalMenuWasDisplayedInstantlyOnPickup)
	{
		this->RemoveFromParent ();

		AActor* pCharacter = UGameplayStatics::GetPlayerCharacter ( this, 0 );
		ACPlayer* pPlayer = Cast<ACPlayer> ( pCharacter );
		pPlayer->ResumeGameFromJournalMenu ();

	}
	else
	{
		if (pReturnPtr)
		{
			pReturnPtr->RestoreVisibility ();

		}
		this->RemoveFromParent ();
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void  UJournalMenuUI::AddReturnPointer ( UPauseMenuUI* ptrToReturnMenu )
{
	pReturnPtr = ptrToReturnMenu;
}
