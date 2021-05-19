///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "FCBasicSpellStatsStruct.generated.h"

USTRUCT( BlueprintType )
struct FCBasicSpellStatsStruct
{
	GENERATED_BODY()

	/* Cool Down of spell */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Cool_Down;

	/* Damage of spell */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Damage;

	/* Time in seconds before it times out if it hasn't hit anything. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Self_Destruct_Time;

	/* How fast is the projectile */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Projectile_Speed;

	/** Animation for the spell. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	UAnimMontage* Animation_Left;

	/** Animation for the spell. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	UAnimMontage* Animation_Right;

	/* Particle system to play when spell hits something. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	UParticleSystem* VFX_On_Hit;
	
};