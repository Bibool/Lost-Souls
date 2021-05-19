////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer February 2020 - Module 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of a Door Button.
// A Door Button is the controller which sits between the Player and the Environment Item (eg. door or platform).
// The Door Button can be made to lock, in which case interaction will not be allowed unless all the key names 
// are held in the player inventory.
//
// Current Limitations:
//   None.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once
#include "Components/BoxComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnvironmentController.h"
#include "Containers/Array.h"
#include "DoorButton.generated.h"

UCLASS()
class GCAA_API ADoorButton : public AEnvironmentController
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoorButton();

	// Door number used in conjunction with OverrideDoorLock to allow external system to locate the door they want to unlock.
	UPROPERTY ( EditAnywhere, Category = "Configure" )
	int DoorNumber;

	UPROPERTY ( EditAnywhere, Category = "Configure" )
	TArray<FName> KeyNames;

	UPROPERTY ( EditAnywhere, Category = "Configure" )
	bool Locked;

	UFUNCTION ()
	void OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult );

	UFUNCTION ()
	void OnOverlapEnd ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex );

	UMessageToPlayerUI* pMessageToPlayerUI_DoorIsLocked;

	// Called every frame
	virtual void Tick ( float DeltaTime ) override;
	
	// This function is called by an external system (such as the NPC's) when a door is required to unlock.
	// bOpen can be set to true to open the door once it is unlocked.
	void OverrideDoorLock (bool bOpen);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	void RespondToInteractionCommand ();

private: 

	// Interogates the player inventory to check that all keys specified to unlock the door are held by the player.
	void AttemptToUnlock ();
	
};
