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
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	//A pointer to the NPCs that are included in the spawner 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class", meta = (AllowPrivateAccess = "true"))
		TArray <TSubclassOf<ABaseNpc>> BaseNPCClass;

	//A pointer to Daves door button which can call a function to unlock a door
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class", meta = (AllowPrivateAccess = "true"))
		ADoorButton* DoorActor;

	//A bool which says if the spawner should start as soon as the game starts
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Class", meta = (AllowPrivateAccess = "true"))
		bool SpawnOnBeginPlay;
	//the number of enemies that should spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class", meta = (AllowPrivateAccess = "true"))
		int numOfEnemies;
	
	//how many enemies should spawn on top of the previous waves amount
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class", meta = (AllowPrivateAccess = "true"))
		int enemiesIncreasedPerWave;

	//the number of waves in total
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class", meta = (AllowPrivateAccess = "true"))
		int numOfWaves;

	//the spawn raidus which says how far the enemies can spawn away from the spawners origin
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class", meta = (AllowPrivateAccess = "true"))
		float spawnRadius;

	//an int for checking how many waves are left
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Class", meta = (AllowPrivateAccess = "true"))
		int wavesRemaining;

	void setEnemiesAlive(int i); //sets the amount of enemies that are alive
	int getEnemiesAlive(); //gets the amount of enemies that are alive
	void checkIfnextWave(); //function to check if the next wave can be spawned
	void spawnWave(); //function to spawn the next wave

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	//the amount of enemies alive
	int enemiesAlive;

	//bool for if a wave is currently set or not
	bool waveSpawned;
};
