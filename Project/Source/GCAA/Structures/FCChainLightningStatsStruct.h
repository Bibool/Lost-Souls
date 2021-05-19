///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "FCChainLightningStatsStruct.generated.h"


USTRUCT( BlueprintType )
struct FCChainLightningStatsStruct
{
	GENERATED_BODY()

	/* Damage done to the main target */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float	Main_Target_Damage;

	/* Damage done to forked targets */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float	Fork_Damage;
	
	/* How many times it can fork between targets */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	int		Fork_Max_Amount;

	/* The initial Radius on impact to find targets in */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float	Fork_Range;

	/* The value that gets removed from the range each time it bounces*/
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float	Fork_Range_Decrement;

	/* Cooldown of the spell */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float	Cool_Down;

	/* Should the bounce choose a random valid target
	 * or find the closest target?
	*/
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	bool	Prioritize_Closest;

	/** Delay before the sub targets get damaged. In seconds.*/
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float	Delay_Damage_Time;

	/** Animation for the spell. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	UAnimMontage* Animation;	

	/** The icon that will be displayed on the UI.*/
    UPROPERTY( EditAnywhere, BlueprintReadWrite )
    UTexture2D* Skill_Icon;

	/* Particle system to play when spell hits something. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	UParticleSystem* VFX_On_Hit;
};
