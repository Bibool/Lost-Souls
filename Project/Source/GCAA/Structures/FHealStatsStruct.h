///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "FHealStatsStruct.generated.h"

USTRUCT( BlueprintType )
struct FHealStatsStruct
{
	GENERATED_BODY()

	/* Amount of health healed per tick. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Heal_Amount;

	/** Speed in seconds in which the heal ticks.
	 * For example, if set to 0.2, while the player holds the button, every 0.2s -
	 * - the player which will be healed by given amount.
	 */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Tick_Speed;

	/** Instead of using tick system, use a gradual increase to full health?
	 * TRUE: Will regenerate to max HP at given speed.
	 * FALSE: Will gain HP every given time while holding.
	 */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	bool Use_Gradual_Regeneration;

	/** How fast should it regenerate to max HP. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Regeneration_Speed;

	/** How much should the player movement be impacted while healing. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Movement_Penalty;

	/** Should the spell automatically end when full life is reached? */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	bool Automagically_End_Spell;
	
	/** Animation for the spell. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	UAnimMontage* Animation;	
	
	/** The icon that will be displayed on the UI.*/
    UPROPERTY( EditAnywhere, BlueprintReadWrite )
    UTexture2D* Skill_Icon;
    
    /* Particle system to play while healing.
     * TODO: Implement this. */
    UPROPERTY( EditAnywhere, BlueprintReadWrite )
    UParticleSystem* VFX_On_Heal;
};