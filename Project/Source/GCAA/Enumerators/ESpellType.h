// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ESpellType.generated.h"

UENUM()
enum class ESpellType
{
	Default			 UMETA( DisplayName = "Basic attack" ),
	Fireball		 UMETA( DisplayName = "Fireball" ),
	Lightning		 UMETA( DisplayName = "Chain Lightning" ),
	Blink			 UMETA( DisplayName = "Blink" ),
	WindBlast		 UMETA( DisplayName = "WindBlast" ),
	Heal			 UMETA( DisplayName = "Heal" ),	
};