// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NpcSpawner.generated.h"

class ADoorButton;
class ABaseNpc;

UCLASS()
class GCAA_API ANpcSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANpcSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



	void onNpcDeath();

	


private:
	
	int enemiesAlive;

	bool waveSpawned;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class", meta = (AllowPrivateAccess = "true"))
	TArray <TSubclassOf<ABaseNpc>> BaseNPCClass;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class", meta = (AllowPrivateAccess = "true"))
	ADoorButton* DoorActor;

	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class", meta = (AllowPrivateAccess = "true"))
	//TArray <TSubclassOf<ADoor>> BaseNPCClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Class", meta = (AllowPrivateAccess = "true"))
	bool SpawnOnBeginPlay;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class", meta = (AllowPrivateAccess = "true"))
	int numOfEnemies;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class", meta = (AllowPrivateAccess = "true"))
	int enemiesIncreasedPerWave;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class", meta = (AllowPrivateAccess = "true"))
	int numOfWaves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class", meta = (AllowPrivateAccess = "true"))
	float spawnRadius;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Class", meta = (AllowPrivateAccess = "true"))
	int wavesRemaining;
	

	
	void setenemiesAlive(int i);
	int getEnemiesAlive();
	void checkIfnextWave();
	void spawnWave();

	//ABaseNpc* BaseNPC;
	
	

};
