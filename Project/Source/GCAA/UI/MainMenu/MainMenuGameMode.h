///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									MSc Video Game Development :: Mehak Hussain											 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenuGameMode.generated.h"

UCLASS()
class GCAA_API AMainMenuGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Category = "Config")
		TSubclassOf<UUserWidget> MainMenuWidgetClass;

	virtual void BeginPlay() override;
};