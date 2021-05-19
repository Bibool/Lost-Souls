////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of the Player Inventory UI
//
// Current Limitations:
// None.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../CPlayerInventory.h"
#include "PlayerInventoryItemUI.h"

#include "PlayerInventoryUI.generated.h"

UCLASS()
class GCAA_API UPlayerInventoryUI : public UUserWidget
{
	GENERATED_BODY()

public:

	UPlayerInventoryUI ( const FObjectInitializer& ObjectInitializer );

	virtual void NativeConstruct () override;

	virtual void NativeTick ( const FGeometry& MyGeometry, float InDeltaTime ) override;
	
	void UpdateInventory ( UCPlayerInventory *pPlayerInventory);

	void ClearInventory ();

	TSubclassOf<class UUserWidget> ItemClass;
	UPlayerInventoryItemUI* pItem;

	void RestoreVisibility ();

	void HideVisibility ();

};
