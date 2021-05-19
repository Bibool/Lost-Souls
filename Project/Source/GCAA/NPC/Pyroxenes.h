// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//Brandon Middleton
//Npc class based from moving npc class which should blow up as its main attack 
#include "CoreMinimal.h"
#include "MovingNpc.h"
#include "Pyroxenes.generated.h"

UCLASS()
class GCAA_API APyroxenes : public AMovingNpc
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APyroxenes();
	UPROPERTY(EditAnywhere, Category = "AI | Combat");
	TSubclassOf<class APyroxenesExplosion> Explosion; // the explosion which will be spawned as this npc should blow up on contact with the player

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FloatingAI)
	//class UFloatingAI* FloatingAI; //floating ai made by mia 

	UPROPERTY(EditAnywhere, Category = "AI | Components")
	class UStaticMeshComponent* BodyMesh; // has a seperate body mesh and head mesh for now, in the future these will be skeletal meshes

	UPROPERTY(EditAnywhere, Category = "AI | Components")
	class UStaticMeshComponent* HeadMesh;
	
	virtual void BaseAttack();
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void AttackStart();
	virtual void AttackEnd();
};
