////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of the Options Menu.
//
// Current Limitations:
// None.
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
#include "CreditMenuUI.h"
#include "OptionsMenuUI.generated.h"

class UPauseMenuUI;

UCLASS()
class GCAA_API UOptionsMenuUI : public UUserWidget
{
	GENERATED_BODY()

	UOptionsMenuUI ( const FObjectInitializer& ObjectInitializer );

	virtual void NativeConstruct () override;
	virtual void NativeTick ( const FGeometry& MyGeometry, float InDeltaTime ) override;

	UFUNCTION ( BlueprintCallable, Category = "Functions" )
	void CreditsButtonClicked ();

	UFUNCTION ( BlueprintCallable, Category = "Functions" )
	void ReturnButtonClicked ();

	TSubclassOf<class UUserWidget> CreditMenuClass;
	UCreditMenuUI* pCreditMenu;

	UPauseMenuUI* pReturnPtr = nullptr;

public:

	void RestoreVisibility ();

	void HideVisibility ();

	void AddReturnPointer ( UPauseMenuUI* ptrToReturnMenu );

};
