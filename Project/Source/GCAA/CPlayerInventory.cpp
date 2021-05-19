// Fill out your copyright notice in the Description page of Project Settings.

#include "CPlayerInventory.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
//#include "MessageToPlayerManager/MessageToPlayerText.h"
#include "MessageToPlayerManager/MessageToPlayerManager.h"
#include "CGameMode.h"

// Sets default values for this component's properties
UCPlayerInventory::UCPlayerInventory( const FObjectInitializer& OI ) : Super (OI)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// Defaults values for interface properties.
	iMaxNumberOfItems		= 20;
	fDropCheckRayCastLength = 200.0f;
	fDropCheckHeightOffset	= 50.0f;
	fDropCheckRayCastOffset = 50.0f;
	fDropStartAngle			= 90.0f;
	fDropAngleIncrement		= 60.0f;
	fDropDistanceModifier	= 2.0f;
}

// Called when the game starts
void UCPlayerInventory::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG ( LogTemp, Warning, TEXT ( "Instance of inventory created..." ) );

	// Listener event handler to trigger adding items to inventory.
	FAttemptToCollectInventoryPickupDelegate::FAttemptPickup.AddUObject ( this, &UCPlayerInventory::AddItemToInventory );
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This operation returns a true if the ToFind input is found in the players inventory.  False if not.
////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool UCPlayerInventory::SearchForItemInInventory ( FName ToFind )
{
	for (ACPickup* pickup : aPlayerInventory)
	{

		if (ToFind == pickup->PickupName)
		//if (ToFind.ToString() == pickup->PickupName)    // FString variant
		{
			UE_LOG ( LogTemp, Warning, TEXT ( "INVENTORY - KEY FOUND" ) );
			return true;
		}
	}
	return false;
}

// Called every frame
void UCPlayerInventory::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This operation adds an item to the player inventory if the inventory is not full.  The item is removed
// from the game world by setting the various properties shown.
//
// Future improvement - can be changed to return a boolean to signal success or failure of the add operation.
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UCPlayerInventory::AddItemToInventory ( ACPickup* ToAdd )
{
	if (aPlayerInventory.Num() < iMaxNumberOfItems)
	{
		aPlayerInventory.Add ( ToAdd );

		UE_LOG ( LogTemp, Warning, TEXT ( "PICKUP ADDED TO INVENTORY, size = %d" ), aPlayerInventory.Num() );
		
		// Set properties to "remove" the item from the game world.
		ToAdd->SetActorEnableCollision ( false );
		ToAdd->SetActorTickEnabled ( false );
		ToAdd->SetActorHiddenInGame ( true );
		
		// Display a timed message to player of what they have collected.
		pMessageToPlayerUI = CreateWidget<UMessageToPlayerUI> ( GetWorld (), UI_MessageToPlayer );
		if (pMessageToPlayerUI)
		{
			pMessageToPlayerUI->DisplayPickupMessage (ToAdd->PickupName.ToString());
		}
		
		// If the pickup was initially in a container (such as a chest), we can now set the ContainerNumber to 0
		// which disconnects the association with a container.  This will  avoid checking again if the container 
		// is open to allow the pickup to be collected (ie. after the pickup may have been subseqently dropped
		// and being picked up again).
		ToAdd->ContainerNumber = 0;

	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Return a const PlayerInventory - eg. for the UI to read.
////////////////////////////////////////////////////////////////////////////////////////////////////////////
const TArray<ACPickup*> UCPlayerInventory::GetPlayerInventory ()
{
	// TODO: insert return statement here
	return aPlayerInventory;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Return a const PlayerInventory - eg. for the UI to read.
////////////////////////////////////////////////////////////////////////////////////////////////////////////
const int UCPlayerInventory::GetPlayerInventorySize()
{
	// TODO: insert return statement here
	return aPlayerInventory.Num ();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This operation fires a series of raycasts from the player until a successfull drop zone is found for items
// in the players inventory.
//
// All the properties used in this operaton are configurable for changes to the player height, inventory item size etc.
//
// Returns true and a valid cDropDirection if a successfull drop zone is found.
// Returns false and a zero valued cDropDirection if no successfull drop zone is found.
////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool UCPlayerInventory::CheckForValidDropDirection ( FVector& cDropDirection )
{
	// Get Player Pawn Location and forward vector.
	AActor* pPlayer = UGameplayStatics::GetPlayerPawn ( this, 0 );
	FVector cforwardVec = pPlayer->GetActorForwardVector ();
	
	bool validPositionFound = false;

	// Construct a rotator from the players forward vector and add on the first increment of the DropStartAngle
	// to be tested.
	FRotator cTestPlayersRotation = UKismetMathLibrary::MakeRotFromX ( cforwardVec );
	cTestPlayersRotation.Yaw = cTestPlayersRotation.Yaw + fDropStartAngle;

	//Ensure the while loop exits when the next drop zone available is too close to the players forward Vector.
	float ftotalAngleAmountTested = fDropStartAngle;
	while (ftotalAngleAmountTested < (360.0 - fDropAngleIncrement))
	{

		// Calculate next start and end locations of ray cast to test.
		FVector cStartLocation = pPlayer->GetActorLocation ();
		cStartLocation = pPlayer->GetActorLocation () + (cTestPlayersRotation.Vector() * fDropCheckRayCastOffset);

		// Subtract the height offset property where the item is to be dropped.
		cStartLocation.Z -= fDropCheckHeightOffset;
		FVector cRayEndPoint = cStartLocation + cTestPlayersRotation.Vector() * fDropCheckRayCastLength;

		// Setup next collision ray trace.
		FCollisionQueryParams CollisionParameters;
		FHitResult Hit = FHitResult ( ForceInit );
		bool hitResult = GetWorld ()->LineTraceSingleByChannel ( Hit, cStartLocation, cRayEndPoint, ECollisionChannel::ECC_WorldStatic, CollisionParameters );
		
		if (!hitResult)
		{
			// No obstacle in this direction - item can be dropped.
			//DrawDebugLine ( GetWorld (), cStartLocation, cRayEndPoint, FColor::Green, true, -1, 0, 1.f );
			cDropDirection = cTestPlayersRotation.Vector();
			return true;
		}
		else
		{
			// Ray cast has hit an obstacle therefore not a valid drop direction.
			//DrawDebugLine ( GetWorld (), cStartLocation, cRayEndPoint, FColor::Red, true, -1, 0, 1.f );
		}

		// Increment values ready for next ray cast test.
		cTestPlayersRotation.Yaw += fDropAngleIncrement;
		ftotalAngleAmountTested += fDropAngleIncrement;
	}
	
	// If no place around player that is clear to drop an item then return false.
	cDropDirection = FVector::ZeroVector;
	return false;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This public operation is called when an item is required to be dropped by the player.
// When a valid drop direction has been found, this operation performs the commands to place and reactive
// the item in the game world.
//
// Currently no action is taken if a valid drop direction is not found.
//
// Future improvement - can be changed to return a boolean to signal success or failure of the drop operation.
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void UCPlayerInventory::RemoveLastItemCollectedFromInventory ()
{
	if (aPlayerInventory.Num () > 0)
	{
		FVector cDropVector;
		if (CheckForValidDropDirection ( cDropVector ))
		{
			// Valid location has been found so drop item
			ACPickup* cItemToRemove = aPlayerInventory.Last ();
			aPlayerInventory.Remove ( cItemToRemove );

			// Get details of pickup bounds.
			FVector cItemOrigin;
			FVector cItemBounds;
			cItemToRemove->GetActorBounds ( false, cItemOrigin, cItemBounds );

			// Calculation put down location from the drop direction vector previously calculated.
			AActor* pPlayer = UGameplayStatics::GetPlayerPawn ( this, 0 );
			FTransform cPutDownTransform = pPlayer->GetTransform () + FTransform ( cDropVector * cItemBounds.GetMax () * fDropDistanceModifier);
			
			// Modify put down location with the configurable height offset.
			FVector cPutDownLocation = cPutDownTransform.GetLocation ();
			cPutDownLocation.Z -= fDropCheckHeightOffset;
			cItemToRemove->SetActorLocation ( cPutDownLocation );

			// Set properties to "replace" the item back into the game world.
			cItemToRemove->SetActorEnableCollision ( true );
			cItemToRemove->SetActorTickEnabled ( true );
			cItemToRemove->SetActorHiddenInGame ( false );

			UE_LOG ( LogTemp, Warning, TEXT ( "PICKUP DROPPED FROM INVENTORY, size = %d" ), aPlayerInventory.Num () );
		
			// Raise event to trigger UI update etc.
			//OnUpdateInventory.Broadcast ( aPlayerInventory );
		}
		else
		{
			// no action at present.  Player will not be able to drop item.
			UE_LOG ( LogTemp, Warning, TEXT ( "PICKUP - NO VALID DROP LOCATION FOUND" ) );
		}
	}
}
