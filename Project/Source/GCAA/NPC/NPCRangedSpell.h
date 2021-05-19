// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "NPCRangedSpell.generated.h"


class USphereComponent;
class UProjectileMovementComponent;
UCLASS()
class GCAA_API ANPCRangedSpell : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANPCRangedSpell();
	
	UPROPERTY(EditAnywhere, Category = "Components")
		class UStaticMeshComponent* BulletMesh;

	UPROPERTY(EditAnywhere, Category = "Components")
		class UProjectileMovementComponent* BulletMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true"))
		class UDamageComponent* DamageableComponent;
	
	//makes the box component for melee damage
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Combat | MeleeCollision", meta = (AllowPrivateAccess = "true"));
	USphereComponent* CollisionComp;
	
	//overlap attack functions
	/** called when projectile hits something */
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* const OverlappedComponent, AActor* const HitActor, UPrimitiveComponent* OtherComponent, int const BodyIndex, bool const FromSweep, FHitResult const& SweepResult);
	
protected:

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
