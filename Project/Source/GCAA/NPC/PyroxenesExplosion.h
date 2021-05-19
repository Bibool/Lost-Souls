// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//Brandon Middleton 
//Explosion class which is spawned when the pyroxenes npc attacks
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PyroxenesExplosion.generated.h"


UCLASS()
class GCAA_API APyroxenesExplosion : public AActor
{
	GENERATED_BODY()
	
public:	
	APyroxenesExplosion();

	UFUNCTION()
	void onAttackOverlapBegin(UPrimitiveComponent* const OverlappedComponent, AActor* const HitActor, UPrimitiveComponent* OtherComponent, int const BodyIndex, bool const FromSweep, FHitResult const& SweepResult);
	//
	UFUNCTION()
	void onAttackOverlapEnd(UPrimitiveComponent* const OverlappedComponent, AActor* const HitActor, UPrimitiveComponent* OtherComponent, int const BodyIndex);
	
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
	
	void onDeath();
protected:
	virtual void BeginPlay() override;

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true"))
		class UDamageComponent* DamageableComponent;
	
	// Called every frame
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup", meta = (AllowPrivateAccess = "true"));
	float damageAmount; // how much damage is dealt

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup", meta = (AllowPrivateAccess = "true"));
	float lifeSpan; // how long the explosion will last, this will not be used in the future 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup", meta = (AllowPrivateAccess = "true"));
	float SphereRadius = 500.0f; //how large the explosion is

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup", meta = (AllowPrivateAccess = "true"));
	class USphereComponent* ExplosionRadius; // 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup", meta = (AllowPrivateAccess = "true"));
	class UParticleSystem* ExplosionVfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup", meta = (AllowPrivateAccess = "true"));
	class USoundCue* ExplosionSound;
	virtual void Tick(float DeltaTime) override;

};