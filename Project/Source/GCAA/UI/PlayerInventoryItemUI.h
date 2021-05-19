////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of the Player Inventory Item UI
//
// Current Limitations:
// None.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "PlayerInventoryItemUI.generated.h"

class UTextBlock;
UCLASS()
class GCAA_API UPlayerInventoryItemUI : public UUserWidget
{
	GENERATED_BODY ()

public:

	virtual void NativeConstruct () override;
	virtual void NativeTick ( const FGeometry& MyGeometry, float InDeltaTime );

	UFUNCTION(BlueprintCallable, Category = "Functions")
	void InventoryItemButtonClicked ();

	UPROPERTY ( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UButton* itemNameButton = nullptr;

	UPROPERTY ( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UTextBlock* itemNameBP = nullptr;

	FName itemName;
};
