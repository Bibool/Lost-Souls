// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenu.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI", meta = (BindWidget))
		class UButton* QuitBtn;

protected:
	//UPROPERTY(BlueprintReadWrite, meta = ( BindWidget ))
	//	class UButton* PlayBtn;



	virtual void NativeConstruct() override;

	UFUNCTION()
		void OnPlayClicked();

	UFUNCTION()
		void OnQuitClicked();
};