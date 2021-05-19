// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CMainPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API ACMainPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	//Refers to the UMG asset in the editor
	// HUDOverlayAsset - Hold all screen UI While game running
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> HUDOverlayAsset;

	// This variables holds the widget after its creation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* HUDOverlay;

protected:

	virtual void BeginPlay() override;
	
};
