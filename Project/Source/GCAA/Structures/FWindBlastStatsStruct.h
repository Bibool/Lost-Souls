///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "FWindBlastStatsStruct.generated.h"

USTRUCT( BlueprintType )
struct FWindBlastStatsStruct
{
	GENERATED_BODY()

	/** The cool down of the spell in seconds. **/
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Cool_Down;

	/**
	*The target querying uses a sphere around the player to check for enemies, this sets the radius of that sphere.
	*It's worth noting that the code filters out any target that isn't in front of the player.
	*It will further check in a cone in front of the player as well.
	*/
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Query_Radius;

	/** This is the multiplier at which the target is displaced, in units. **/
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Distance_OffSet;

	/**
	*The min angle for acceptable targets. Targets directly in front of the player are at a value of 1.
	*So this should be something like 0.3f. Set debug info bellow to visually see in-game.
	*/	
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Min_Angle;

	/** Should the spell only have a limited amount of enemy it can push back? **/
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	bool Use_Target_Cap;

	/** If it should be capped, how many targets it should affect in total. **/
	UPROPERTY( EditAnywhere, BlueprintReadWrite, meta=(ClampMin = "0", ClampMax = "50", UIMin = "0", UIMax = "50") )
	int Max_Targets;

	/** How long in seconds before the enemy can resume behavior? **/
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Stun_Duration;

	/**
	*Settings this to true will show visual debug information in-game.
	*This is useful when it comes to seeing the offset location, angle ect.
	*/
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	bool Show_Debug;

	/** How long should the debug stay on the screen, in seconds. **/
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Debug_Duration;

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
