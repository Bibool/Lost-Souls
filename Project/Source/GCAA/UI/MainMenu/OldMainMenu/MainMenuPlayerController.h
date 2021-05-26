///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									MSc Video Game Development :: Mehak Hussain											 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainMenuPlayerController.generated.h"

UCLASS()
class GCAA_API AMainMenuPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:

	AMainMenuPlayerController();
	
	virtual void SetupInputComponent() override;

	void OpenMainMenu();
};