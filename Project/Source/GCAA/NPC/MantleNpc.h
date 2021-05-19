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

	
	void chargeAttack();
	void stopCharge();
	void jumpAttack();
	void shotGunAttack();
	void explosionAttack();

	void lineTrace();

	FVector getChargeDistance();
	bool getHitObject();
	void setHitObject(bool i);

	bool getCanCharge();
	void setCanCharge(bool i);
	

	UFUNCTION()
	void TimerFunction();

	void  playChargeSound();

private:

	FTimerHandle AttackTimer;
	
	UPROPERTY(EditAnywhere, Category = "AI | Shooting");
	int m_numberOfShots;

	UPROPERTY(EditAnywhere, Category = "AI | Shooting");
	TSubclassOf<class AAIBullet> BulletBP; //right now just for testing it can shoot a ranged projectile 

	bool hitObject;

	UPROPERTY()
		FTimerHandle UnusedHandle;

	UPROPERTY(EditAnywhere, Category = "AI | Shooting")
		float fDodgeDistance;

	UPROPERTY(EditAnywhere, Category = "AI | Shooting")
		float fDodgeCooldown;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Shooting", meta = (AllowPrivateAccess = "true"));
	class USoundBase* ShootSound;
	UPROPERTY()
		bool bCanDodge;

	UPROPERTY(EditAnywhere)
		float fDodgeStop;

	UFUNCTION()
		void ResetDodge();

	bool canCharge;
	
	UPROPERTY(EditAnywhere, Category = "AI | Combat");
	TSubclassOf<class APyroxenesExplosion> Explosion; // the explosion which will be spawned as this npc should blow up on contact with the player
	

	UPROPERTY(EditAnywhere, Category = "AI | Charge")
		float traceDistance;

	UPROPERTY(EditAnywhere, Category = "AI | Charge")
		class UBoxComponent* ChargeCollision = nullptr;

	UPROPERTY(EditAnywhere, Category = "AI | Charge")
		class UBoxComponent* ShieldCollider = nullptr;

	UFUNCTION()
		void OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverLapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Charge", meta = (AllowPrivateAccess = "true"));
	class USoundBase* ChargeSound;
	

	
	FVector ChargeDestination;

};
