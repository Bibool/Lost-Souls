///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GCAA/Interfaces/PoolStatusIdentifier.h"

#include "Spell.generated.h"

class ACPlayer;
class USphereComponent;
class ASpellManager;

UCLASS()
class GCAA_API ASpell : public AActor, public IPoolStatusIdentifier
{
	GENERATED_BODY()
	
public:	
	ASpell();

	UPROPERTY( EditAnywhere )
	UStaticMeshComponent* StaticMeshComponent;
	UPROPERTY( EditAnywhere )
	USphereComponent* CollisionSphereComponent;
	UPROPERTY( EditAnywhere )
	UParticleSystemComponent* PSSystemComponent;

	// Sets the CSpellManager
	void SetManager( ASpellManager* pcSpellManager );

	// Sets the ACPlayer Reference
	void SetCPlayer( ACPlayer* pcPlayer );

	// Called by the CSpellManager when a spell has been requested
	void Fire();

	// Functions that sets the stats of the spell (if applicable)
	void SetSelfDestroyTime( float fTime );
protected:
	virtual void Tick( float DeltaTime ) override;
	virtual void BeginPlay() override;

	// Override the default Destroyed function since we use a pool method	
	virtual void Destroyed() override;

	void Sleep();

	// Had to be changed to virtual so child classes can override it. E.g: CBasicSpell
	virtual void Awake();

	// Virtual function that HAS to be overriden since it's pure virtual.
	virtual void VFireEvent() override;
	
	// Fires off in Tick. Any logic that should be in tick should be in here.
	virtual void FireLogic(float DeltaTime) {};
	
	// If spells requires additional setting up, this can be set in the spells.
	virtual void AdditionalAwakeLogic() {};
	
	// Fires off on a enemy collision.
	virtual void CollisionLogic( AActor* otherActor ) {};
	
	// Fires off on a non-enemy collision.
	virtual void NonEnemyCollisionLogic( UPrimitiveComponent* OtherComp, const FHitResult& Hit ) {};

	// Fires off when collision ends.
	virtual void CollisionEndLogic( AActor* otherActor ) { };

	// Fires off on BeginPlay. Initializes values on the spell.
	virtual void Initialize() {};

	// Can the spell be fired off?
	bool					m_bCanFire;

	// The current rotation to aim at.
	FRotator				m_sCurrentRotationOfCamera;

	// Time in seconds before the spell times off.
	float					m_fSelfDestructTime;

	// The Timer that calls the self destruct.
	FTimerHandle			m_sDelayedDestructionTimer;

	// Should it be even allowed to self destruct?
	bool					m_bCanAutoDestroy;

	// Used to avoid multiple collision calls.
	bool					m_bIsInCollision;

	// Pointer to the current player.
	UPROPERTY()
	ACPlayer*				m_pcPlayer;

	// Pointer to the current spell manager.
	UPROPERTY()
	ASpellManager*			m_pcSpellManager;

	UFUNCTION()
	void OnHit( class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit );

	UFUNCTION()
	void OnOverlapBegin( class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult );

	UFUNCTION()
	void OnOverlapEnd( class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex );
};
