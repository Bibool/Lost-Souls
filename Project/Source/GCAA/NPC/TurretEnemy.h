// Fill out your copyright notice in the Description page of Project Settings.

// Class by Mehak Hussain

#pragma once

#include "CoreMinimal.h"
#include "BaseNpc.h"
#include "TurretEnemy.generated.h"

class UCapsuleComponent;
class ACPlayer;
class AAIProjectileBase;

UCLASS()
class GCAA_API ATurretEnemy : public ABaseNpc
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATurretEnemy();

	virtual void BaseAttack() override;
	
	void TurretRotation(FVector LookAtTarget);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = ( AllowPrivateAccess = "true" ))
		class UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = ( AllowPrivateAccess = "true" ))
		USceneComponent* ProjectileSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile Type", meta = ( AllowPrivateAccess = "true" ))
		TSubclassOf<AAIProjectileBase> ProjectileClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = ( AllowPrivateAccess = "true" ))
		class UStaticMeshComponent* TurretMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = ( AllowPrivateAccess = "true" ))
		float FireRate = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = ( AllowPrivateAccess = "true" ))
		float FireRange;

	FTimerHandle FireRateTimerHandle;

	ACPlayer* PlayerCharacter;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
