////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer February 2020 - Module 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "DoorButton.h"
#include "Door.h"
#include "Interactable.h"
#include "GCAA/Player/CPlayer.h"


#define DEBUGLOG(text) UE_LOG(LogTemp, Warning, TEXT(text));

// Sets default values
ADoorButton::ADoorButton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Locked = false;
	Box->OnComponentBeginOverlap.AddDynamic ( this, &ADoorButton::OnOverlapBegin );
	Box->OnComponentEndOverlap.AddDynamic ( this, &ADoorButton::OnOverlapEnd );
	StaticMesh->SetupAttachment ( ECRootComponent );

}

// Called when the game starts or when spawned
void ADoorButton::BeginPlay()
{
	Super::BeginPlay();

	FPlayerInteractingDelegate::FPlayerInteracting.AddUObject ( this, &ADoorButton::RespondToInteractionCommand );


}

// Called every frame
void ADoorButton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//////////////////////////////////////////////////////////////////////////
// This operation attempts to perform an unlock operation by searching the
// player inventory for all required keys.
//////////////////////////////////////////////////////////////////////////
void ADoorButton::AttemptToUnlock ()
{
	// If door is locked check the player inventory for the correct key to unlock the door.
	if (Locked)
	{
		UE_LOG ( LogTemp, Warning, TEXT ( "DOOR BUTTON - LOOKING FOR KEYS" ) );
		// Find the player character and cast to ACPlayer
		ACharacter* pCharacter = UGameplayStatics::GetPlayerCharacter ( this, 0 );
		ACPlayer* pPlayer = Cast<ACPlayer> ( pCharacter );
		
		// Check that all the keys required to unlock this door are in the players inventory.
		bool bPlayerHasCorrectKeys = true;
		for (FName currentKey: KeyNames)
		{
			FString cCurrentKeyAsString = currentKey.ToString ();

			if (cCurrentKeyAsString.Len () > 0)
			{
				//Seach the player inventory 

				bool bCurrentKeyFound = false;
				if (pPlayer->pPlayerInventory)
				{
					bCurrentKeyFound = pPlayer->pPlayerInventory->SearchForItemInInventory ( currentKey );
				}
				else
				{
					DEBUGLOG ( "Player Inventory is null" );
				}

				if (!bCurrentKeyFound)
				{
					// A key required was not found in the players inventory.  Exit the loop now.
					bPlayerHasCorrectKeys = false;
					break;
				}
			}
		}

		if (bPlayerHasCorrectKeys)
		{
			UE_LOG ( LogTemp, Warning, TEXT ( "DOOR BUTTON - PLAYER HAS CORRECT KEY - UNLOCKING" ) );

			// Proceed to locate and operate all connected doors.
			InteractWithAllConnectedEnvironmentItems ();

			// Door now unlocked and cannot be locked again.
			Locked = false;
		}
		else
		{
			UE_LOG ( LogTemp, Warning, TEXT ( "DOOR BUTTON - DOOR IS LOCKED" ));
			// Display a timed message to the player that the door is locked.
			pMessageToPlayerUI_DoorIsLocked = CreateWidget<UMessageToPlayerUI> ( GetWorld (), UI_MessageToPlayer );
			if (pMessageToPlayerUI_DoorIsLocked)
			{
				pMessageToPlayerUI_DoorIsLocked->DisplayDoorIsLockedMessage();
			}



		}
	}
	else
	{
		// Door is not locked - proceed to locate and operate all connected doors.
		InteractWithAllConnectedEnvironmentItems ();
	}
}


void  ADoorButton::OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult )
{
	if (CheckThatOtherActorIsPlayer ( OtherActor ))
	{
		UE_LOG ( LogTemp, Warning, TEXT ( "DOOR BUTTON - OVERLAP START" ) );

		DisplayInteractionWidget ();
		bWaitingToInteract = true;
	}
}

void ADoorButton::OnOverlapEnd ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex )
{
	if (CheckThatOtherActorIsPlayer ( OtherActor ))
	{

		UE_LOG ( LogTemp, Warning, TEXT ( "DOOR BUTTON - OVERLAP END" ) );
		RemoveInteractionWidget ();
		bWaitingToInteract = false;
	}

}

void ADoorButton::RespondToInteractionCommand ()
{
	if (bWaitingToInteract)
	{
		AttemptToUnlock ();
		RemoveInteractionWidget ();
	}
}

void ADoorButton::OverrideDoorLock (bool bOpen)
{
	Locked = false;

	if (bOpen)
	{
		InteractWithAllConnectedEnvironmentItems ();
	}
}