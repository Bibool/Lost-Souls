////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines the Pause Menu class.
//
// Current Limitations:
// Not implemented for prototype.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "PauseMenuUI.h"
#include "PlayerInventoryUI.h"
#include "UObject/NoExportTypes.h"
#include "../CPlayerInventory.h"
#include "PauseMenu.generated.h"

UCLASS(Blueprintable, BlueprintType)
class GCAA_API UPauseMenu : public UObject
{
	GENERATED_BODY ()

public:

	UPauseMenu ();
	
	void Initialise ();

	UCPlayerInventory* pPlayerInventory;

	UPROPERTY ( EditAnywhere, Category = "UI" )
	TSubclassOf<UUserWidget> UI_PauseMenu;
	UPROPERTY ()
	UPauseMenuUI* pPauseMenuUI;

	UPROPERTY ( EditAnywhere, Category = "UI" )
	TSubclassOf<UUserWidget> UI_Inventory;
	UPROPERTY ()
	UPlayerInventoryUI* pInventoryUI;

private:

	void PauseGameAndDisplayOptionsMenu ();

	void ResumeGameFromOptionsMenu ();

	bool bGameIsPaused;
};
