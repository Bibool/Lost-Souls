// Fill out your copyright notice in the Description page of Project Settings.


#include "CMainPlayerController.h"
#include "Blueprint/UserWidget.h"

void ACMainPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// Create Asset
	if (HUDOverlayAsset)
	{
		HUDOverlay = CreateWidget<UUserWidget>(this, HUDOverlayAsset);
	}

	// Add Asset 
	// Set it Visible
	HUDOverlay->AddToViewport();
	HUDOverlay->SetVisibility(ESlateVisibility::Visible);
}