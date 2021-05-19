// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CUpgradeSystemWidget.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API UCUpgradeSystemWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* UpgradeSystemLabel;

	UPROPERTY(meta = (BindWidget))
		class UButton* UpgradeSkill;

	UPROPERTY(meta = (BindWidget))
		class UButton* UpgradeDamage;

	UPROPERTY(meta = (BindWidget))
		class UButton* QuitUpgradeMenu;

	

	void NativeConstruct() override;

public:

	// Called when the QuitUpgradeMenu Button is clicked
	UFUNCTION()
	void VQuitUpgradeMenu();

	
	// Called when the UpgradeSkill Button is clicked
	UFUNCTION()
	void VUpgradeSkill();

	// Called when the Upgrade Damage Button is clicked
	UFUNCTION()
	void VUpgradeDamage();

	UPROPERTY()
		class ACPlayer* pPlayer;

	
};
