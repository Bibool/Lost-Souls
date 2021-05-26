///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									MSc Video Game Development :: Mehak Hussain											 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//												-ABOUT AIMISSILE-														 //
//+ This Actor was made for handling the creation of the Missiles used by the Erosion Enemy as its primary attack.		 //
//+ It contains the components needed to create the Actor alongside the damage component, setting its target,			 //
//  visual effects and most importantly creating a Missile like trajectory.												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "AIMissile.generated.h"

class ACPlayer;

DECLARE_DELEGATE_OneParam(fShakeDelegate, float);

UCLASS()
class GCAA_API AAIMissile : public AActor
{
	GENERATED_BODY()

private:
	// Missiles lifetime Variables
	float			fLifetimeCountdown;
	bool			bCanBeDestroyed;

	// Function that contains the particle effects used when collided
	void			ImpactParticles();

	// Function that contains the audio effects used when collided
	void			ImpactAudio();

	// Radius in where the camera shake works
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Shake", meta = ( AllowPrivateAccess = "true" ));
	float			fShakeRadius;

	void			SpawnImpactDecal();

	float			fDecalPositionZ;

	FTimerHandle	DecalTimer;

	// Function to set the collision
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& hitResult);

	// Calls the damage component in order to cause damage to Player
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = ( AllowPrivateAccess = "true" ))
	class UDamageComponent* DamageableComponent;

	// How much damage is dealt to the Player by the Missiles
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage", meta = ( AllowPrivateAccess = "true" ));
	float				fDamageAmount;

	// How far we want the Missile to launch upwards
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Launch Height", meta = ( AllowPrivateAccess = "true" ));
	float				fUpwardsLaunchAmount;

	ACPlayer*			PlayerInWorld;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UMatineeCameraShake> CamShake;

public:	
	// Sets default values for this actors properties
	AAIMissile(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Sphere collision component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision", meta = ( AllowPrivateAccess = "true" ));
	class USphereComponent*				CollisionComponent;

	// Static Mesh Component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	class UStaticMeshComponent*			MissileMesh;

	// Projectile Movement Component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = ( AllowPrivateAccess = "true" ));
	class UProjectileMovementComponent* ProjectileMovement;

	// Particle system
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Particles", meta = ( AllowPrivateAccess = "true" ));
	class UParticleSystemComponent*		MissileParticles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Particles", meta = ( AllowPrivateAccess = "true" ));
	class UParticleSystem*				ExplosionSystem;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Audio")
	USoundBase*							InitiateMissileSound;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Decal")
	UMaterialInterface*					Decal;

	UPROPERTY(EditDefaultsOnly, Category = "Audio")
	class USoundBase*					ExplosionSound;

	class UAudioComponent*				PlayExplosionSound(class USoundBase* sound);

	class UParticleSystemComponent*		PlayExplosion(class UParticleSystem* explosion);
};