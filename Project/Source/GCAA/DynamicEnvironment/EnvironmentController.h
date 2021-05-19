////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer February 2020 - Module 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class is a super class for all control items such as door buttons, levers, pressure plates etc.
//
// Current Limitations:
//   None.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once

#include "Components/BoxComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../UI/MessageToPlayerUI.h"
#include "EnvironmentController.generated.h"

UCLASS()
class GCAA_API AEnvironmentController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnvironmentController();

	UPROPERTY ( EditAnywhere )
		USceneComponent* ECRootComponent;

	UPROPERTY ( EditAnywhere )
		UStaticMeshComponent* StaticMesh;

	UPROPERTY ( EditAnywhere )
		UBoxComponent* Box;

	UPROPERTY ( EditAnywhere, Category = "Configure" )
		FName Activator;

	UPROPERTY ( EditAnywhere, Category = "Configure" )
		TSubclassOf<UUserWidget> UI_MessageToPlayer;
	UMessageToPlayerUI* pMessageToPlayerUI_Interact;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	// Calls the interface on all environment items (eg. doors, platforms) associated with this door button.
	void InteractWithAllConnectedEnvironmentItems ();

	bool CheckThatOtherActorIsPlayer ( AActor* OtherActor );

	void DisplayInteractionWidget ();

	void RemoveInteractionWidget ();
	
	


	bool bWaitingToInteract;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	


};
