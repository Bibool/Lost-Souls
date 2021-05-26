//////////////////////////////////
//		Brandon Middleton		//
//			MantleNpc			//
//////////////////////////////////
#pragma once

#include "CoreMinimal.h"
#include "MovingNpc.h"
#include "MantleNpc.generated.h"

/**
 * 
 */
UCLASS()
class GCAA_API AMantleNpc : public AMovingNpc
{
	GENERATED_BODY()

public:

	//Getter
	AMantleNpc();

	//Overriden functions from the BaseNpc Class
	virtual void BaseAttack() override;
	virtual void BeginPlay() override;

	virtual void StopActions()override;
	virtual void AllowActions()override;

	//attack start and end function 
	virtual void AttackStart()override;
	virtual void AttackEnd()override;

	//functions which are used as special attacks for this mantle npc
	//the charge and stop charge attacks are used for when the mantle npc is
	//far away and needs to close some distance 
	void chargeAttack();
	void stopCharge();
	void shotGunAttack(); // close ranged attack which shouts projectiles which are spread out
	void explosionAttack(); // used as a final last attack where the npc explodes dealing damage in a radius 

	void lineTrace(); // was used to help find out if the npc has hit an object while charging
	//switched out to use a simpler method which gets the navigable radius 

	FVector getChargeDistance(); //to calculate where the npc should charge
	//
	// was used in conjuction with the line trace function 
	bool getHitObject(); 
	void setHitObject(bool i);

	//bools which are switched on and off to check if the npc can charge (so it cant charge while its in the middle of charging)
	bool getCanCharge();
	void setCanCharge(bool i);
	
	// Not being used to turn collisions on and off
	UFUNCTION()
	void DisableCollisionTimer();

	//function to play a sound while charging which is called in a behaviour tree task 
	void  playChargeSound();

private:

	//on overlap functions 
	UFUNCTION()
		void OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverLapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	
	//Was used to help know when collisions should be switched on and off
	FTimerHandle AttackTimer;

	//number of shots the npc will shoot 
	UPROPERTY(EditAnywhere, Category = "AI | Shooting");
	int m_numberOfShots;

	UPROPERTY(EditAnywhere, Category = "AI | Shooting");
	TSubclassOf<class AAIBullet> BulletBP; //right now just for testing it can shoot a ranged projectile 

	//was used with the line trace function 
	bool hitObject;

	UPROPERTY()
		FTimerHandle UnusedHandle;

	//sound for shooting attack 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Shooting", meta = (AllowPrivateAccess = "true"));
	class USoundBase* ShootSound;
	

	//bool to see if it can charge or not
	bool canCharge;
	
	UPROPERTY(EditAnywhere, Category = "AI | Combat");
	TSubclassOf<class APyroxenesExplosion> Explosion; // the explosion which will be spawned as this npc should blow up on contact with the player
	
	//line trace distance
	UPROPERTY(EditAnywhere, Category = "AI | Charge")
		float traceDistance;

	//collision box which should be enabled when its charging 
	UPROPERTY(EditAnywhere, Category = "AI | Charge")
		class UBoxComponent* ChargeCollision = nullptr;

	//the mantle npc was going to have a shield but that was cut
	UPROPERTY(EditAnywhere, Category = "AI | Charge")
		class UBoxComponent* ShieldCollider = nullptr;


	//charge sound
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Charge", meta = (AllowPrivateAccess = "true"));
	class USoundBase* ChargeSound;
	

	//where the npc should charge too
	FVector ChargeDestination;

	float minHealthForExplosion;
};
