////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer February 2020 - Module 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines the Player Inventory - a record of all items currently held by the player.
//
// The core data structure providing the inventory is a TArray of pointers to ACPickups named PlayerInventory.
//
// Current Limitations:
//   None
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Interactables/CPickup.h"
#include "Interactables/CKeyPickup.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UI/MessageToPlayerUI.h"
#include "CPlayerInventory.generated.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam( FUpdateInventoryDelegate, const TArray<ACPickup*>&, InventoryItems );

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GCAA_API UCPlayerInventory : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCPlayerInventory(const FObjectInitializer& OI);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//Adds the Pikcup item 'ToAdd' to the inventory.
	UFUNCTION ()
	void AddItemToInventory ( ACPickup * ToAdd );

	//Removes the last item added to the player inventory.
	UFUNCTION ()
	void RemoveLastItemCollectedFromInventory ();

	// Returns a boolean result if the pickup named 'ToFind' is stored by the PlayerInventory.
	UFUNCTION ()
	bool SearchForItemInInventory ( FName ToFind );

	// The maximum number of items the Player Inventory can hold.
	UPROPERTY ( EditAnywhere, Category = DropConfigure, meta = (ClampMin = "0.0", ClampMax = "40.0", UIMin = "0", UIMax = "40") )
	int iMaxNumberOfItems;

	// The distance from the player to the end of the ray cast used to drop items.
	UPROPERTY ( EditAnywhere, Category = DropConfigure, meta = (ClampMin = "0.0", ClampMax = "400.0", UIMin = "0", UIMax = "400") )
	float fDropCheckRayCastLength;

	// The offset from the player to the start of the ray cast used to drop items.
	UPROPERTY ( EditAnywhere, Category = DropConfigure, meta = (ClampMin = "0.0", ClampMax = "100.0", UIMin = "0", UIMax = "100") )
	float fDropCheckRayCastOffset;

	// The offset from the players position to where the item is requried to be dropped.
	UPROPERTY ( EditAnywhere, Category = DropConfigure, meta = (ClampMin = "0.0", ClampMax = "100.0", UIMin = "0", UIMax = "100") )
	float fDropCheckHeightOffset;

	// The angle from the players forward direction vector to the first ray cast direction for dropping items.
	UPROPERTY ( EditAnywhere, Category = DropConfigure, meta = (ClampMin = "0.0", ClampMax = "180.0", UIMin = "0", UIMax = "180") )
	float fDropStartAngle;

	// The angle to increment by after the first ray cast has been made fro dropping items.
	UPROPERTY ( EditAnywhere, Category = DropConfigure, meta = (ClampMin = "0.0", ClampMax = "90.0", UIMin = "0", UIMax = "90") )
	float fDropAngleIncrement;

	// A modifier value to determine the drop position from the player that the item is dropped at.
	UPROPERTY ( EditAnywhere, Category = DropConfigure, meta = (ClampMin = "0.0", ClampMax = "10.0", UIMin = "0", UIMax = "10") )
	float fDropDistanceModifier;

	// Return a read only reference to the Player Inventory - eg. for UI to read.
	UFUNCTION ()
	const TArray<ACPickup*> GetPlayerInventory ();

	UFUNCTION ()
	const int GetPlayerInventorySize ();

	UPROPERTY ( EditAnywhere, Category = "Configure" )
	TSubclassOf<UUserWidget> UI_MessageToPlayer;
	UMessageToPlayerUI* pMessageToPlayerUI;

	// this should be private.

	UPROPERTY ()
	TArray<ACPickup*> aPlayerInventory;

private:

	UFUNCTION ()
	bool CheckForValidDropDirection ( FVector& cDropVector );

};
