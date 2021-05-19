// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//Brandon Middleton
//Moving Npc which is a child of base npc, this class has the ability to move and follow a patrol path 

#include "CoreMinimal.h"
#include "BaseNpc.h"
#include "MovingNpc.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API AMovingNpc : public ABaseNpc
{
	GENERATED_BODY()
public:
	
	AMovingNpc();
	virtual void BaseAttack() override;
	virtual void BeginPlay() override;
	virtual void VOnDeath() override;
	float getWalkSpeed()const;
	float getRunSpeed() const;
	//patrol path
	TSubclassOf<APatrolPath> getPatrolPathClass(); //default patrol path class
	APatrolPath* GetPatrolPath(); //patrol path which is set to follow 
	bool getPatrollingNpc(); //gets the bool which checks if the npc is following a patrol path or not
	void setPatrolPath(APatrolPath* path);
	bool getSpawnRandomPath(); //gets the bool which checks if the patrol path should be spawned or not 
	void setSpawnRandomPath(bool i) { i = spawnRandomPath; } //sets the bool which checks if the patrol path should be spawned or not 

	virtual void StopActions() override;
	virtual void AllowActions() override;
	
protected:


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Stats", meta = (AllowPrivateAccess = "true")) 
		float walkSpeed; //walk speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Stats", meta = (AllowPrivateAccess = "true"))
		float runSpeed; //run speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Path", meta = (AllowPrivateAccess = "true"))
		bool	patrollingNpc; //bool which checks if the npc should be  patrolling 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Path", meta = (AllowPrivateAccess = "true"))
		APatrolPath* PatrolPath;  //the patrol path being set
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Path", meta = (AllowPrivateAccess = "true"))
		bool	spawnRandomPath; //bool which checks if the npc should spawn a random patrol path 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Path", meta = (AllowPrivateAccess = "true"))
		TSubclassOf<APatrolPath>PatrolPathClass; //default patrol path class which is used to help spawn a random path 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Path", meta = (AllowPrivateAccess = "true"))
		int	numOfPatrolPoints; //int which says how many points should be in the patrol path 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Path", meta = (AllowPrivateAccess = "true"))
		float pathSpawnRadius; //float which sets the radius of how far the random patrol path should be 
};
