////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of the Journal Menu Item.
//
// Current Limitations:
// None
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "JournalItemUI.generated.h"

struct GCAA_API FJournalItemClickedDelegate
{
	DECLARE_MULTICAST_DELEGATE_OneParam ( FJournalItemClickedDelegateSignature, int )
	static FJournalItemClickedDelegateSignature FJournalItemUpdate;
};

class UTextBlock;
UCLASS()
class GCAA_API UJournalItemUI : public UUserWidget
{
	GENERATED_BODY()
	
public:

	virtual void NativeConstruct () override;
	virtual void NativeTick ( const FGeometry& MyGeometry, float InDeltaTime );

	UFUNCTION ( BlueprintCallable, Category = "Functions" )
	void JournalItemButtonClicked ();

	UPROPERTY ( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UButton* itemNameButton = nullptr;

	UPROPERTY ( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UTextBlock* itemNameBP = nullptr;

	FName itemName;

	int iEntryNumber;

};
