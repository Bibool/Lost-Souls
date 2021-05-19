////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "PlayerInventoryUI.h"
#include "Components/ScrollBox.h"
#include "Components/VerticalBox.h"
#include "../CPlayerInventory.h"
#include "PlayerInventoryItemUI.h"
#include "../Interactables/CPickup.h"

UPlayerInventoryUI::UPlayerInventoryUI (const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	ConstructorHelpers::FClassFinder<UPlayerInventoryItemUI> ItemClassFinder ( TEXT ( "/Game/Blueprints/UI/UI_InventoryItem" ) );
	
	if (ItemClassFinder.Succeeded ())
	{
		ItemClass = ItemClassFinder.Class;
	}
	else
	{
		UE_LOG ( LogTemp, Warning, TEXT ( "Could not find the BP for UI_InventoryItem!" ) );
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void  UPlayerInventoryUI::NativeConstruct () 
{
	Super::NativeConstruct ();
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UPlayerInventoryUI::NativeTick ( const FGeometry& MyGeometry, float InDeltaTime )
{
	Super::NativeTick ( MyGeometry, InDeltaTime );
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UPlayerInventoryUI::UpdateInventory ( UCPlayerInventory* pPlayerInventory )
{
		
	if (UScrollBox* ScrollBox = Cast<UScrollBox> ( GetWidgetFromName ( "InventoryScrollBox" ) ))
	{
		UE_LOG ( LogTemp, Warning, TEXT ( "DETECTED SCROLL BOX (FOR CREATING)" ) );

		for (int i = 0; i < pPlayerInventory->aPlayerInventory.Num(); i++)
		//for (ACPickup* pACPickup : pPlayerInventory->aPlayerInventory)
		{
			pItem = CreateWidget<UPlayerInventoryItemUI> ( GetWorld ()->GetFirstPlayerController (), ItemClass );
			pItem->itemName = pPlayerInventory->aPlayerInventory[i]->PickupName;
			ScrollBox->AddChild ( pItem );
		}
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UPlayerInventoryUI::ClearInventory ()
{
	if (UScrollBox* ScrollBox = Cast<UScrollBox> ( GetWidgetFromName ( "InventoryScrollBox" ) ))
	{
		UE_LOG ( LogTemp, Warning, TEXT ( "DETECTED SCROLL BOX (FOR CLEARING)" ) );

		pItem = NULL;

		ScrollBox->ClearChildren ();

	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UPlayerInventoryUI::RestoreVisibility ()
{
	this->AddToViewport ();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UPlayerInventoryUI::HideVisibility ()
{
	this->RemoveFromParent ();
}
