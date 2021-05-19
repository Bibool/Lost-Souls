////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "MessageToPlayerUI.h"

UMessageToPlayerUI::UMessageToPlayerUI ( const FObjectInitializer& ObjectInitializer ) : Super ( ObjectInitializer )
{
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UMessageToPlayerUI::NativeConstruct ()
{
	Super::NativeConstruct ();

	bSetupWidgetTimerLatch = false;
	fTimedMessageDisplayTime = 3.0f;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UMessageToPlayerUI::NativeTick ( const FGeometry& MyGeometry, float InDeltaTime )
{
	Super::NativeTick ( MyGeometry, InDeltaTime );

	if (bSetupWidgetTimerLatch)
	{
		FTimerDelegate TimerDel;
		FTimerHandle TimerHandle;

		TimerDel.BindUFunction ( this, FName ( "RemoveTimedMessage" ) );

		GetWorld()->GetTimerManager ().SetTimer ( TimerHandle, TimerDel, fTimedMessageDisplayTime, false );

		bSetupWidgetTimerLatch = false;
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UMessageToPlayerUI::RemoveTimedMessage ()
{
	RemoveFromViewport ();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UMessageToPlayerUI::DisplayInteractMessage ()
{
	theMessageToPlayer->SetText ( FText::FromName ( "Press 'X' to Interact" ) );

	AddToViewport ();

	bSetupWidgetTimerLatch = true;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UMessageToPlayerUI::DisplayPickupMessage (FString cCollectedItem)
{
	FString cFinalStringToDisplay;
	cFinalStringToDisplay.Append ( cCollectedItem );
	cFinalStringToDisplay.Append ( " collected" );

	theMessageToPlayer->SetText ( FText::FromName ( *cFinalStringToDisplay ) );

	AddToViewport ();

	bSetupWidgetTimerLatch = true;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UMessageToPlayerUI::DisplayDoorIsLockedMessage()
{
	theMessageToPlayer->SetText ( FText::FromName ( "Door is locked" ) );

	AddToViewport ();

	bSetupWidgetTimerLatch = true;

}

