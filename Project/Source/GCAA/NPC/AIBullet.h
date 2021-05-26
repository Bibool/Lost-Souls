///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									MSc Video Game Development :: Mehak Hussain											 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									              -ABOUT AIBULLET-														    //
// + This Actor was made for handling the creation of the Bullet used by the Erosion Enemy for its secondary Sniper Attack. //
// + It contains the components needed to create the Actor alongside the damage component and effects used on collision.    //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "AIBullet.generated.h"

UCLASS()
class GCAA_API AAIBullet : public AActor
{
	GENERATED_BODY()

private:
	// Function to set the collision.
	UFUNCTION()
	void	OnOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& hitResult);

	// Function to set the particle effects used when collided
	void	ExplodeOnImpact();

	// Calls the damage component in order to cause damage to Player
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = ( AllowPrivateAccess = "true" ))
		class	UDamageComponent* DamageableComponent;

	// How much damage is dealt to the Player by the Sniper Bullet
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage", meta = ( AllowPrivateAccess = "true" ));
	float	fDamageAmount;

public:
	// Sets default values for this actors properties
	AAIBullet(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Sphere collision component for the Bullet
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision", meta = ( AllowPrivateAccess = "true" ));
	class USphereComponent* CollisionComponent;

	// Projectile movement component for the Bullet
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = ( AllowPrivateAccess = "true" ));
	class UProjectileMovementComponent* ProjectileMovementComponent;

	// Sets particle effect on Collision
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Particles", meta = ( AllowPrivateAccess = "true" ));
	class UParticleSystem* ExplosionSystem;

	// Function to call the particle effect on impact
	class UParticleSystemComponent* PlayExplosion(class UParticleSystem* explosion);
};
