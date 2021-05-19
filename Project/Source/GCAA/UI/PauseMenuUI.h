////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of the Pause Menu.
//
// Current Limitations:
// None.
//
// Design Notes:
//
// A late requirement was for the pause menu tree of UI panels to be transulcent.  This did not work with the
// existing design as the panels simply overlaid each other as the user traversed down the tree and were not
// being removed as is required with 'see through' panels.  The system therefore was modified to use a 'return
// pointer' for a sub menu to allow its parent menu to be referenced to call 'Restore Visbility' on the parent
// menu.  The Hide visiblity is called by 'this' to remove the panel before a sub menu is displayed.
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OptionsMenuUI.h"
#include "JournalMenuUI.h"
#include "PlayerInventoryUI.h"
#include "PauseMenuUI.generated.h"

UCLASS()
class GCAA_API UPauseMenuUI : public UUserWidget
{
	GENERATED_BODY()

	UPauseMenuUI ( const FObjectInitializer& ObjectInitializer );

	virtual void NativeConstruct () override;

	virtual void NativeTick ( const FGeometry& MyGeometry, float InDeltaTime ) override;

	UFUNCTION ( BlueprintCallable, Category = "Functions" )
	void ResumeButtonClicked ();

	UFUNCTION ( BlueprintCallable, Category = "Functions" )
	void OptionsButtonClicked ();

	UFUNCTION ( BlueprintCallable, Category = "Functions" )
	void JournalButtonClicked ();

	TSubclassOf<class UUserWidget> OptionsMenuClass;
	UOptionsMenuUI* pOptionsMenu;

	TSubclassOf<class UUserWidget> JournalMenuClass;
	UJournalMenuUI* pJournalMenu;

	UPlayerInventoryUI* pPlayerInv = nullptr;

public:

	// See design notes above
	void RestoreVisibility ();
	void HideVisibility ();

	// Pointer to player inventory to allow removal of the inventory when a sub menu selected.
	void AddPointerToPlayerInventory ( UPlayerInventoryUI* pPlayerInvInput );

};
