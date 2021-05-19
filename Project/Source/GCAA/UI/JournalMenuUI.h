////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of the Journal Menu.
//
// Current Limitations:
// None
//
// A late requirement was for the pause menu tree of UI panels to be transulcent.  This did not work with the
// existing design as the panels simply overlaid each other as the user traversed down the tree and were not
// being removed as is required with 'see through' panels.  The system therefore was modified to use a 'return
// pointer' for a sub menu to allow its parent menu to be referenced to call 'Restore Visbility' on the parent
// menu.  The Hide visiblity is called by 'this' to remove the panel before a sub menu is displayed.
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "../Interactables/CPickup.h"
#include "Engine.h"
#include "JournalItemUI.h"
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "JournalMenuUI.generated.h"

class UPauseMenuUI;

UCLASS()
class GCAA_API UJournalMenuUI : public UUserWidget
{
	GENERATED_BODY()

public:

	UJournalMenuUI ( const FObjectInitializer& ObjectInitializer );

	virtual void NativeConstruct () override;

	virtual void NativeTick ( const FGeometry& MyGeometry, float InDeltaTime ) override;

	void UpdateJournal ( int iJournalEntryToSelect );

	TSubclassOf<class UUserWidget> ItemClass;
	UJournalItemUI* pItem;

	UPROPERTY ( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UImage* JournalImageBP = nullptr;

	UPROPERTY ( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	bool JournalMenuWasDisplayedInstantlyOnPickup;

	UFUNCTION ( BlueprintCallable, Category = "Functions" )
	void ReturnButtonClicked ();

	UFUNCTION ( BlueprintCallable, Category = "Functions" )
	void UpdateJournalPage ( int iPageToDisplay );

	UPauseMenuUI* pReturnPtr = nullptr;

public:

	void AddReturnPointer ( UPauseMenuUI* ptrToReturnMenu );

};
