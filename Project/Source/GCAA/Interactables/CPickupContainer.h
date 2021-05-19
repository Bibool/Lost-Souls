////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of a Pickup Container.
//
// Current Limitations:
// None
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPickupContainerLid.h"
#include "Components/BoxComponent.h"
#include "../UI/MessageToPlayerUI.h"
#include "GCAA/Player/CPlayer.h"
#include "CPickupContainer.generated.h"

UCLASS()
class GCAA_API ACPickupContainer : public AActor
{
	GENERATED_BODY ()

public:
	// Sets default values for this actor's properties
	ACPickupContainer ();

	void PerformInteract ();
	void PerformInteract_Implementation ();

	UPROPERTY ( EditAnywhere )
		USceneComponent* ECRootComponent;

	UPROPERTY ( EditAnywhere )
		UStaticMeshComponent* ContainerStaticMesh;

	UPROPERTY ( EditAnywhere )
		UStaticMeshComponent* LidStaticMesh;

	UPROPERTY ( EditAnywhere )
		UCPickupContainerLid* ContainerLid;

	UPROPERTY ( EditAnywhere )
		UBoxComponent* Box;

	UPROPERTY ( EditAnywhere, Category = "Configure" )
		TSubclassOf<UUserWidget> UI_MessageToPlayer;
	UMessageToPlayerUI* pMessageToPlayerUI;

	UPROPERTY ( EditAnywhere, Category = "Configure" )
	int ContainerNumber;

	UFUNCTION ()
		void OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult );

	UFUNCTION ()
		void OnOverlapEnd ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex );

	bool CheckThatOtherActorIsPlayer ( AActor* OtherActor );

protected:

	virtual void BeginPlay () override;

	void FinishFunction ();

	void DisplayInteractionWidget ();

	void RemoveInteractionWidget ();

	bool bWaitingToInteract;

public:

	virtual void Tick ( float DeltaTime ) override;

	void RespondToInteractionCommand ();

	bool IsContainerClosed ();

};
