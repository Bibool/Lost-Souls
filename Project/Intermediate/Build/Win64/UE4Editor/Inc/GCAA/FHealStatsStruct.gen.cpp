// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/Structures/FHealStatsStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFHealStatsStruct() {}
// Cross Module References
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FHealStatsStruct();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
class UScriptStruct* FHealStatsStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GCAA_API uint32 Get_Z_Construct_UScriptStruct_FHealStatsStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHealStatsStruct, Z_Construct_UPackage__Script_GCAA(), TEXT("HealStatsStruct"), sizeof(FHealStatsStruct), Get_Z_Construct_UScriptStruct_FHealStatsStruct_Hash());
	}
	return Singleton;
}
template<> GCAA_API UScriptStruct* StaticStruct<FHealStatsStruct>()
{
	return FHealStatsStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHealStatsStruct(FHealStatsStruct::StaticStruct, TEXT("/Script/GCAA"), TEXT("HealStatsStruct"), false, nullptr, nullptr);
static struct FScriptStruct_GCAA_StaticRegisterNativesFHealStatsStruct
{
	FScriptStruct_GCAA_StaticRegisterNativesFHealStatsStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HealStatsStruct")),new UScriptStruct::TCppStructOps<FHealStatsStruct>);
	}
} ScriptStruct_GCAA_StaticRegisterNativesFHealStatsStruct;
	struct Z_Construct_UScriptStruct_FHealStatsStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Heal_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Heal_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tick_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tick_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Use_Gradual_Regeneration_MetaData[];
#endif
		static void NewProp_Use_Gradual_Regeneration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Use_Gradual_Regeneration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Regeneration_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Regeneration_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movement_Penalty_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Movement_Penalty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Automagically_End_Spell_MetaData[];
#endif
		static void NewProp_Automagically_End_Spell_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Automagically_End_Spell;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skill_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skill_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VFX_On_Heal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VFX_On_Heal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealStatsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Structures/FHealStatsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHealStatsStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Heal_Amount_MetaData[] = {
		{ "Category", "HealStatsStruct" },
		{ "Comment", "/* Amount of health healed per tick. */" },
		{ "ModuleRelativePath", "Structures/FHealStatsStruct.h" },
		{ "ToolTip", "Amount of health healed per tick." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Heal_Amount = { "Heal_Amount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealStatsStruct, Heal_Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Heal_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Heal_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Tick_Speed_MetaData[] = {
		{ "Category", "HealStatsStruct" },
		{ "Comment", "/** Speed in seconds in which the heal ticks.\n\x09 * For example, if set to 0.2, while the player holds the button, every 0.2s -\n\x09 * - the player which will be healed by given amount.\n\x09 */" },
		{ "ModuleRelativePath", "Structures/FHealStatsStruct.h" },
		{ "ToolTip", "Speed in seconds in which the heal ticks.\nFor example, if set to 0.2, while the player holds the button, every 0.2s -\n- the player which will be healed by given amount." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Tick_Speed = { "Tick_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealStatsStruct, Tick_Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Tick_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Tick_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Use_Gradual_Regeneration_MetaData[] = {
		{ "Category", "HealStatsStruct" },
		{ "Comment", "/** Instead of using tick system, use a gradual increase to full health?\n\x09 * TRUE: Will regenerate to max HP at given speed.\n\x09 * FALSE: Will gain HP every given time while holding.\n\x09 */" },
		{ "ModuleRelativePath", "Structures/FHealStatsStruct.h" },
		{ "ToolTip", "Instead of using tick system, use a gradual increase to full health?\nTRUE: Will regenerate to max HP at given speed.\nFALSE: Will gain HP every given time while holding." },
	};
#endif
	void Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Use_Gradual_Regeneration_SetBit(void* Obj)
	{
		((FHealStatsStruct*)Obj)->Use_Gradual_Regeneration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Use_Gradual_Regeneration = { "Use_Gradual_Regeneration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHealStatsStruct), &Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Use_Gradual_Regeneration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Use_Gradual_Regeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Use_Gradual_Regeneration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Regeneration_Speed_MetaData[] = {
		{ "Category", "HealStatsStruct" },
		{ "Comment", "/** How fast should it regenerate to max HP. */" },
		{ "ModuleRelativePath", "Structures/FHealStatsStruct.h" },
		{ "ToolTip", "How fast should it regenerate to max HP." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Regeneration_Speed = { "Regeneration_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealStatsStruct, Regeneration_Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Regeneration_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Regeneration_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Movement_Penalty_MetaData[] = {
		{ "Category", "HealStatsStruct" },
		{ "Comment", "/** How much should the player movement be impacted while healing. */" },
		{ "ModuleRelativePath", "Structures/FHealStatsStruct.h" },
		{ "ToolTip", "How much should the player movement be impacted while healing." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Movement_Penalty = { "Movement_Penalty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealStatsStruct, Movement_Penalty), METADATA_PARAMS(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Movement_Penalty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Movement_Penalty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Automagically_End_Spell_MetaData[] = {
		{ "Category", "HealStatsStruct" },
		{ "Comment", "/** Should the spell automatically end when full life is reached? */" },
		{ "ModuleRelativePath", "Structures/FHealStatsStruct.h" },
		{ "ToolTip", "Should the spell automatically end when full life is reached?" },
	};
#endif
	void Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Automagically_End_Spell_SetBit(void* Obj)
	{
		((FHealStatsStruct*)Obj)->Automagically_End_Spell = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Automagically_End_Spell = { "Automagically_End_Spell", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHealStatsStruct), &Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Automagically_End_Spell_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Automagically_End_Spell_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Automagically_End_Spell_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "HealStatsStruct" },
		{ "Comment", "/** Animation for the spell. */" },
		{ "ModuleRelativePath", "Structures/FHealStatsStruct.h" },
		{ "ToolTip", "Animation for the spell." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealStatsStruct, Animation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Skill_Icon_MetaData[] = {
		{ "Category", "HealStatsStruct" },
		{ "Comment", "/** The icon that will be displayed on the UI.*/" },
		{ "ModuleRelativePath", "Structures/FHealStatsStruct.h" },
		{ "ToolTip", "The icon that will be displayed on the UI." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Skill_Icon = { "Skill_Icon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealStatsStruct, Skill_Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Skill_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Skill_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_VFX_On_Heal_MetaData[] = {
		{ "Category", "HealStatsStruct" },
		{ "Comment", "/* Particle system to play while healing.\n     * TODO: Implement this. */" },
		{ "ModuleRelativePath", "Structures/FHealStatsStruct.h" },
		{ "ToolTip", "Particle system to play while healing.\n    * TODO: Implement this." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_VFX_On_Heal = { "VFX_On_Heal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHealStatsStruct, VFX_On_Heal), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_VFX_On_Heal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_VFX_On_Heal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHealStatsStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Heal_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Tick_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Use_Gradual_Regeneration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Regeneration_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Movement_Penalty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Automagically_End_Spell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_Skill_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHealStatsStruct_Statics::NewProp_VFX_On_Heal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHealStatsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
		nullptr,
		&NewStructOps,
		"HealStatsStruct",
		sizeof(FHealStatsStruct),
		alignof(FHealStatsStruct),
		Z_Construct_UScriptStruct_FHealStatsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealStatsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHealStatsStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHealStatsStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GCAA();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HealStatsStruct"), sizeof(FHealStatsStruct), Get_Z_Construct_UScriptStruct_FHealStatsStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHealStatsStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHealStatsStruct_Hash() { return 4107942550U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
