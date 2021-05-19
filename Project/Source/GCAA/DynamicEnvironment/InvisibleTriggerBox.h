////////////////////////////////////////////////////////////////////////////////////////////////////////////
// (C) Gamer Camp / Dave O'Dwyer May 2021 - Module 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////
// This class defines an individual instance of an invisible trigger box.
//
// Current Limitations:
// None
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentController.h"
#include "InvisibleTriggerBox.generated.h"

UENUM ()
enum EInvisibleTriggerBoxMode
{
	OneShot UMETA ( DisplayName = "OneShot" ),
	EntryAndExit UMETA ( DisplayName = "EntryAndExit" ),
	EntryOnly UMETA ( DisplayName = "EntryOnly" )
};

UCLASS()
class GCAA_API AInvisibleTriggerBox : public AEnvironmentController
{
	GENERATED_BODY()
	
public:

	AInvisibleTriggerBox ();

	UPROPERTY ( EditAnywhere, Category = "Configure" )
	TEnumAsByte<EInvisibleTriggerBoxMode> OperatingMode;

	UFUNCTION ()
	void OnOverlapBegin ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult );

	UFUNCTION ()
	void OnOverlapEnd ( UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex );

	// Called every frame
	virtual void Tick ( float DeltaTime ) override;

private:

	bool bOneShotLatch;

};
