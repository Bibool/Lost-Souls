////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of a Message to the player.
// A message to the player might be such as 'Red Key collected' or 'Press 'x' to interact'.
//
// Current Limitations:
// The message names should not be hard coded into the .cpp file.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"
#include "MessageToPlayerUI.generated.h"

UCLASS()
class GCAA_API UMessageToPlayerUI : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY ( EditAnywhere, BlueprintReadWrite, meta = (BindWidget) )
	UTextBlock* theMessageToPlayer = nullptr;

	UMessageToPlayerUI ( const FObjectInitializer& ObjectInitializer );

	virtual void NativeConstruct () override;

	virtual void NativeTick ( const FGeometry& MyGeometry, float InDeltaTime ) override;

	void DisplayInteractMessage ();

	void DisplayPickupMessage ( FString cCollectedItem );

	void DisplayDoorIsLockedMessage ();

private:

	bool bSetupWidgetTimerLatch;
	
	float fTimedMessageDisplayTime;

	UFUNCTION ()
	void RemoveTimedMessage ();
};
