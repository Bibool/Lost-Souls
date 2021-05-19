// Fill out your copyright notice in the Description page of Project Settings.


#include "CUpgradeSystemWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "GCAA/Player/CPlayer.h"


void UCUpgradeSystemWidget::NativeConstruct()
{
	Super::NativeConstruct();

	UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(UGameplayStatics::GetPlayerController(GetWorld(),0), this);

	if (QuitUpgradeMenu)
	{
		QuitUpgradeMenu->OnClicked.AddUniqueDynamic(this, &UCUpgradeSystemWidget::VQuitUpgradeMenu);
	}

	if (UpgradeDamage)
	{
		UpgradeDamage->OnClicked.AddUniqueDynamic(this, &UCUpgradeSystemWidget::VUpgradeDamage);
	}

	if (UpgradeSkill)
	{
		UpgradeSkill->OnClicked.AddUniqueDynamic(this, &UCUpgradeSystemWidget::VUpgradeSkill);
	}
}

void UCUpgradeSystemWidget::VQuitUpgradeMenu()
{
	// Get the player controller - to be used to set the mouse on/off properties.
	APlayerController* const pPlayerController = Cast<APlayerController>(UGameplayStatics::GetPlayerController(this, 0));

	// Resume focus to game from UI
	FInputModeGameOnly cInputModeGame;
	pPlayerController->SetInputMode(cInputModeGame);

	// Turn the mouse off.
	if (pPlayerController)
	{
		pPlayerController->bShowMouseCursor = false;
		pPlayerController->bEnableClickEvents = false;
		pPlayerController->bEnableMouseOverEvents = false;
	}
	
	// Quit Menu and Continue game
	UGameplayStatics::SetGamePaused(GetWorld(), false);
	RemoveFromParent();
}

void UCUpgradeSystemWidget::VUpgradeSkill()
{
	// Call the Upgrade skill from CPlayer here

	AActor* pCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	ACPlayer* CPlayer = Cast<ACPlayer>(pCharacter);

	CPlayer->CallUpgradeSkillDelay();
}

void UCUpgradeSystemWidget::VUpgradeDamage()
{
	// Call the Upgrade Damage from CPlayer here

	AActor* pCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	ACPlayer* CPlayer = Cast<ACPlayer>(pCharacter);

	CPlayer->CallUpgradeSkillDamage();
}



