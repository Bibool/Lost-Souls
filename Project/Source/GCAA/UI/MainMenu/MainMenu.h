///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									MSc Video Game Development :: Mehak Hussain											 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Blueprint/UserWidget.h"
#include "CoreMinimal.h"
#include "MainMenu.generated.h"

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