// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GCAA/DynamicEnvironment/EnvironmentController.h"
#include "NpcSpawner.h"
#include "SpawnerTrigger.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API ASpawnerTrigger : public AEnvironmentController
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASpawnerTrigger();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class", meta = (AllowPrivateAccess = "true"))
		ANpcSpawner* Spawner;
	
	UPROPERTY(EditAnywhere, Category = "Configure")
		bool Locked;

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* thisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UMessageToPlayerUI* pMessageToPlayerUI_DoorIsLocked;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void RespondToInteractionCommand();

private:

	// Interogates the player inventory to check that all keys specified to unlock the door are held by the player.
	void AttemptToUnlock();

};
