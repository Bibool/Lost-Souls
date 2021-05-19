// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//Brandon Middleton
//Base npc class which is used to make more npcs

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PatrolPath.h"
#include "BehaviorTree/BehaviorTree.h"
#include "GCAA/Interfaces/DeathInterface.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"

#include "BaseNpc.generated.h"


class UWidgetComponent;
class UBaseHealthUI;
class ANpcSpawner;
UCLASS()
class GCAA_API ABaseNpc : public ACharacter, public IDeathInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseNpc();

	//Base attack function which is overriden in child classes
	virtual void BaseAttack();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void setSpawner(ANpcSpawner* npcSpawnerClass);
	
	//Getters
	bool getMovingNpc();
	bool getIsActive();
	
	//getters for health stats
	float getCurrentHealth() const;
	float getMaxHealth() const;
	void  setHealth(float const new_health);

	//Mia
	bool getIsTargettingPlayer();
	void setIsTargettingPlayer(bool i);

	//gets the attack range 
	float getAttackRange() const;

	//on death function
	virtual void VOnDeath()override;

	//gets the anim montage 
	virtual UAnimMontage* getMontage() const;

	//attack start and end function 
	virtual void AttackStart();
	virtual void AttackEnd();

	virtual void StopActions();
	virtual void AllowActions();
	//applying damage function
	void applyDamageUI();

	void SetRotation(FRotator LookAt);

	void enableOrDisableMeleeCollision();
	//take damage function
	UFUNCTION()
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
	
	//overlap attack functions
	UFUNCTION()
	void onAttackOverlapBegin(UPrimitiveComponent* const OverlappedComponent, AActor* const HitActor, UPrimitiveComponent* OtherComponent, int const BodyIndex, bool const FromSweep, FHitResult const& SweepResult);

	UFUNCTION()
	void onAttackOverlapEnd(UPrimitiveComponent* const OverlappedComponent, AActor* const HitActor, UPrimitiveComponent* OtherComponent, int const BodyIndex);

	//gets the behavior tree
	UBehaviorTree* GetBehaviorTree() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//bool which checks if the npc can move or not 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Path", meta = (AllowPrivateAccess = "true"))
	bool	movingNpc;

	//float which sets the npcs attack range 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Combat", meta = (AllowPrivateAccess = "true"))
	float	attackRange;

	float	attackRangeDefault;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true"))
	class UDamageComponent* DamageableComponent;

	
	//float for the max health
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Stats", meta = (AllowPrivateAccess = "true"))
	float maxHealth;

	//currebt health float
	float currentHealth;

	//damage amount function
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Combat | Damage", meta = (AllowPrivateAccess = "true"));
	float damageAmount;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Combat", meta = (AllowPrivateAccess = "true"))
	bool isActive;

	UPROPERTY()
	UBehaviorTreeComponent* BehaviorTreeComponent; //blackboard component

		//makes the anim montage component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Animation", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* Attackmontage;

	//makes the box component for melee damage
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Combat | MeleeCollision", meta = (AllowPrivateAccess = "true"));
	class UBoxComponent* meleeCollision;

	ANpcSpawner* npcSpawner;

private:
	
	// makes the widget component on the npc 
	UWidgetComponent* widget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Widget", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UBaseHealthUI> widgetClass;

	//makes the behavior tree component 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Brain", meta = (AllowPrivateAccess = "true"))
	UBehaviorTree* BehaviorTree;	

	float startingAttackRange;
	bool isMeleeCollisionEnabled;

	bool isTargettingPlayer;
};
