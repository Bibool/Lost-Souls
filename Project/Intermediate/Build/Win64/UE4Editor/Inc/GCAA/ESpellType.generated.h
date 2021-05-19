// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_ESpellType_generated_h
#error "ESpellType.generated.h already included, missing '#pragma once' in ESpellType.h"
#endif
#define GCAA_ESpellType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_Enumerators_ESpellType_h


#define FOREACH_ENUM_ESPELLTYPE(op) \
	op(ESpellType::Default) \
	op(ESpellType::Fireball) \
	op(ESpellType::Lightning) \
	op(ESpellType::Blink) \
	op(ESpellType::WindBlast) \
	op(ESpellType::Heal) 

enum class ESpellType;
template<> GCAA_API UEnum* StaticEnum<ESpellType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
