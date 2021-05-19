// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/Structures/FCChainLightningStatsStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCChainLightningStatsStruct() {}
// Cross Module References
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FCChainLightningStatsStruct();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
class UScriptStruct* FCChainLightningStatsStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GCAA_API uint32 Get_Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCChainLightningStatsStruct, Z_Construct_UPackage__Script_GCAA(), TEXT("CChainLightningStatsStruct"), sizeof(FCChainLightningStatsStruct), Get_Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Hash());
	}
	return Singleton;
}
template<> GCAA_API UScriptStruct* StaticStruct<FCChainLightningStatsStruct>()
{
	return FCChainLightningStatsStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCChainLightningStatsStruct(FCChainLightningStatsStruct::StaticStruct, TEXT("/Script/GCAA"), TEXT("CChainLightningStatsStruct"), false, nullptr, nullptr);
static struct FScriptStruct_GCAA_StaticRegisterNativesFCChainLightningStatsStruct
{
	FScriptStruct_GCAA_StaticRegisterNativesFCChainLightningStatsStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CChainLightningStatsStruct")),new UScriptStruct::TCppStructOps<FCChainLightningStatsStruct>);
	}
} ScriptStruct_GCAA_StaticRegisterNativesFCChainLightningStatsStruct;
	struct Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Main_Target_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Main_Target_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fork_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Fork_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fork_Max_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Fork_Max_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fork_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Fork_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fork_Range_Decrement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Fork_Range_Decrement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cool_Down_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cool_Down;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prioritize_Closest_MetaData[];
#endif
		static void NewProp_Prioritize_Closest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Prioritize_Closest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delay_Damage_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay_Damage_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skill_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skill_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VFX_On_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VFX_On_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Structures/FCChainLightningStatsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCChainLightningStatsStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Main_Target_Damage_MetaData[] = {
		{ "Category", "CChainLightningStatsStruct" },
		{ "Comment", "/* Damage done to the main target */" },
		{ "ModuleRelativePath", "Structures/FCChainLightningStatsStruct.h" },
		{ "ToolTip", "Damage done to the main target" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Main_Target_Damage = { "Main_Target_Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCChainLightningStatsStruct, Main_Target_Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Main_Target_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Main_Target_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Damage_MetaData[] = {
		{ "Category", "CChainLightningStatsStruct" },
		{ "Comment", "/* Damage done to forked targets */" },
		{ "ModuleRelativePath", "Structures/FCChainLightningStatsStruct.h" },
		{ "ToolTip", "Damage done to forked targets" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Damage = { "Fork_Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCChainLightningStatsStruct, Fork_Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Max_Amount_MetaData[] = {
		{ "Category", "CChainLightningStatsStruct" },
		{ "Comment", "/* How many times it can fork between targets */" },
		{ "ModuleRelativePath", "Structures/FCChainLightningStatsStruct.h" },
		{ "ToolTip", "How many times it can fork between targets" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Max_Amount = { "Fork_Max_Amount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCChainLightningStatsStruct, Fork_Max_Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Max_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Max_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Range_MetaData[] = {
		{ "Category", "CChainLightningStatsStruct" },
		{ "Comment", "/* The initial Radius on impact to find targets in */" },
		{ "ModuleRelativePath", "Structures/FCChainLightningStatsStruct.h" },
		{ "ToolTip", "The initial Radius on impact to find targets in" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Range = { "Fork_Range", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCChainLightningStatsStruct, Fork_Range), METADATA_PARAMS(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Range_Decrement_MetaData[] = {
		{ "Category", "CChainLightningStatsStruct" },
		{ "Comment", "/* The value that gets removed from the range each time it bounces*/" },
		{ "ModuleRelativePath", "Structures/FCChainLightningStatsStruct.h" },
		{ "ToolTip", "The value that gets removed from the range each time it bounces" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Range_Decrement = { "Fork_Range_Decrement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCChainLightningStatsStruct, Fork_Range_Decrement), METADATA_PARAMS(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Range_Decrement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Range_Decrement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Cool_Down_MetaData[] = {
		{ "Category", "CChainLightningStatsStruct" },
		{ "Comment", "/* Cooldown of the spell */" },
		{ "ModuleRelativePath", "Structures/FCChainLightningStatsStruct.h" },
		{ "ToolTip", "Cooldown of the spell" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Cool_Down = { "Cool_Down", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCChainLightningStatsStruct, Cool_Down), METADATA_PARAMS(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Cool_Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Cool_Down_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Prioritize_Closest_MetaData[] = {
		{ "Category", "CChainLightningStatsStruct" },
		{ "Comment", "/* Should the bounce choose a random valid target\n\x09 * or find the closest target?\n\x09*/" },
		{ "ModuleRelativePath", "Structures/FCChainLightningStatsStruct.h" },
		{ "ToolTip", "Should the bounce choose a random valid target\n       * or find the closest target?" },
	};
#endif
	void Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Prioritize_Closest_SetBit(void* Obj)
	{
		((FCChainLightningStatsStruct*)Obj)->Prioritize_Closest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Prioritize_Closest = { "Prioritize_Closest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCChainLightningStatsStruct), &Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Prioritize_Closest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Prioritize_Closest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Prioritize_Closest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Delay_Damage_Time_MetaData[] = {
		{ "Category", "CChainLightningStatsStruct" },
		{ "Comment", "/** Delay before the sub targets get damaged. In seconds.*/" },
		{ "ModuleRelativePath", "Structures/FCChainLightningStatsStruct.h" },
		{ "ToolTip", "Delay before the sub targets get damaged. In seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Delay_Damage_Time = { "Delay_Damage_Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCChainLightningStatsStruct, Delay_Damage_Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Delay_Damage_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Delay_Damage_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "CChainLightningStatsStruct" },
		{ "Comment", "/** Animation for the spell. */" },
		{ "ModuleRelativePath", "Structures/FCChainLightningStatsStruct.h" },
		{ "ToolTip", "Animation for the spell." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCChainLightningStatsStruct, Animation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Skill_Icon_MetaData[] = {
		{ "Category", "CChainLightningStatsStruct" },
		{ "Comment", "/** The icon that will be displayed on the UI.*/" },
		{ "ModuleRelativePath", "Structures/FCChainLightningStatsStruct.h" },
		{ "ToolTip", "The icon that will be displayed on the UI." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Skill_Icon = { "Skill_Icon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCChainLightningStatsStruct, Skill_Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Skill_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Skill_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_VFX_On_Hit_MetaData[] = {
		{ "Category", "CChainLightningStatsStruct" },
		{ "Comment", "/* Particle system to play when spell hits something. */" },
		{ "ModuleRelativePath", "Structures/FCChainLightningStatsStruct.h" },
		{ "ToolTip", "Particle system to play when spell hits something." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_VFX_On_Hit = { "VFX_On_Hit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCChainLightningStatsStruct, VFX_On_Hit), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_VFX_On_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_VFX_On_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Main_Target_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Max_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Range_Decrement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Cool_Down,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Prioritize_Closest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Delay_Damage_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Skill_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_VFX_On_Hit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
		nullptr,
		&NewStructOps,
		"CChainLightningStatsStruct",
		sizeof(FCChainLightningStatsStruct),
		alignof(FCChainLightningStatsStruct),
		Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCChainLightningStatsStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GCAA();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CChainLightningStatsStruct"), sizeof(FCChainLightningStatsStruct), Get_Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Hash() { return 954587841U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
