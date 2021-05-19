///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "GCAA/Structures/FSpellIdentifierStruct.h"

#include "Fireball.generated.h"

class USphereComponent;
class ASpellManager;

UCLASS()
class GCAA_API AFireball : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFireball();

	
	virtual void Tick( float DeltaTime ) override;
	virtual void Destroyed() override;
	void SetManager( ASpellManager* pcSpellManager );

	void Fire();



	UPROPERTY( EditAnywhere )
		UStaticMeshComponent* staticMesh;
	UPROPERTY( EditAnywhere )
		USphereComponent* CollisionComp;

	void Sleep();

	// Setters
	
	void SetSpeed(float fSpeed);
	void SetSelfDestroyTime( float fTime );
	void SetIdentifier( FSpellIdentifierStruct id );
	//void SetIdentifier( ASpellManager::SSpellIdentifier identifier );

	// Getters
	FSpellIdentifierStruct GetIdentifier();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void Awake();

private:
	ASpellManager* mpcSpellManager;
	FSpellIdentifierStruct sIdentifier;
	bool bCanFire;
	FRotator CurrentRotationOfCamera;
	float SpeedMulti;
	float SelfDestructTime;
	FTimerHandle DelayedDestructionTimer;
	
	UFUNCTION()
		void OnHit( UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit );
	

public:	
	// Called every frame

};
