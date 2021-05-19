///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "FCFireBallStatsStruct.generated.h"

USTRUCT( BlueprintType )
struct FCFireBallStatsStruct
{
	GENERATED_BODY()
	// Any stats that affect the Fireball should be in here.

	/* Damage done to the main target */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float	Main_Target_Damage;

	/* Damage done to AOE (non main) targets*/
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float	Splash_Damage;

	/* Should the fireball do damage to more than 1 target */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	bool	Has_AOE_Damage;

	/* How many targets should the aoe hit - Not implemented */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	int		Target_AOE_Cap;

	/* How long before it naturally times out */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float	Self_Destruct_Time;

	/* How fast it moves*/
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float	Projectile_Speed;

	/* How wide is the aoe radius on impact */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float	AOE_Radius;

	/* The Cooldown of the ability */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float	Cool_Down;

	/* The Size of the Explosion VFX */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	UParticleSystem* PS_Explosion;
	
	/* The Size of the Explosion VFX */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	FVector	Explosion_Scale;

	/** Animation for the spell. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	UAnimMontage* Animation;
	
	/** The icon that will be displayed on the UI.*/
    UPROPERTY( EditAnywhere, BlueprintReadWrite )
    UTexture2D* Skill_Icon;

	UPROPERTY()
	bool	bIsUpgraded;
};
