// Class by Mehak Hussain

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AIProjectileBase.generated.h"

class UProjectileMovementComponent;

UCLASS()
class GCAA_API AAIProjectileBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAIProjectileBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = ( AllowPrivateAccess = "true" ))
		UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = ( AllowPrivateAccess = "true" ))
		UStaticMeshComponent* ProjectileMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Move", meta = ( AllowPrivateAccess = "true" ))
		float MovementSpeed = 1300;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = ( AllowPrivateAccess = "true" ))
		class UDamageComponent* DamageableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup", meta = ( AllowPrivateAccess = "true" ));
		float damageAmount; // How much damage is dealt to the Player by the Turret Projectiles

	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = ( AllowPrivateAccess = "true" ))
		UParticleSystemComponent* ParticleTrail;
};