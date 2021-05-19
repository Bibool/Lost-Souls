///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//									(C) Gamer Camp / Abdallah Boutrif (A.B)												 //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "FBlinkStatsStruct.generated.h"

USTRUCT( BlueprintType )
struct FBlinkStatsStruct
{
	GENERATED_BODY()
	
	/* Distance at which the player can blink */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Distance;

	/* Cool Down of spell */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Cool_Down;

	/* How fast do charges regenerate */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Recharge_Rate;
	
	/* How many total charges of the spell */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	int Max_Charges;

	/* Is the player allowed to blink against non surfaces? */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	bool Grounded_Only;

	/* Should it blink towards the camera's direction or players? */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	bool Camera_Direction;
	
	/* Higher zooms out, lower zooms in */
    UPROPERTY( EditAnywhere, BlueprintReadWrite )
    float Warp_Effect_Strength;
	
	/* Curve used for the effect*/
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	UCurveFloat* CurveFloat;

	/* Time in Seconds before the player actually teleports */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	float Delay_Before_Blink;

	/** Animation for the spell. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	UAnimMontage* Animation;	
	
	/** The icon that will be displayed on the UI.*/
    UPROPERTY( EditAnywhere, BlueprintReadWrite )
    UTexture2D* Skill_Icon;

	/* Particle effect to play when the blink starts. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	UParticleSystem* VFX_Blink_Start;

	/* Particle effect to play when the blink end. */
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
	UParticleSystem* VFX_Blink_End;
};