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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Should_Fork_MetaData[];
#endif
		static void NewProp_Should_Fork_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Should_Fork;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Self_Destruct_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Self_Destruct_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectile_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Projectile_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cool_Down_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cool_Down;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Should_Fork_MetaData[] = {
		{ "Category", "CChainLightningStatsStruct" },
		{ "Comment", "/* Should it be able to fork to other targets */" },
		{ "ModuleRelativePath", "Structures/FCChainLightningStatsStruct.h" },
		{ "ToolTip", "Should it be able to fork to other targets" },
	};
#endif
	void Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Should_Fork_SetBit(void* Obj)
	{
		((FCChainLightningStatsStruct*)Obj)->Should_Fork = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Should_Fork = { "Should_Fork", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCChainLightningStatsStruct), &Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Should_Fork_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Should_Fork_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Should_Fork_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Self_Destruct_Time_MetaData[] = {
		{ "Category", "CChainLightningStatsStruct" },
		{ "Comment", "/* Time before the it times out before hitting an enemy */" },
		{ "ModuleRelativePath", "Structures/FCChainLightningStatsStruct.h" },
		{ "ToolTip", "Time before the it times out before hitting an enemy" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Self_Destruct_Time = { "Self_Destruct_Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCChainLightningStatsStruct, Self_Destruct_Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Self_Destruct_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Self_Destruct_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Projectile_Speed_MetaData[] = {
		{ "Category", "CChainLightningStatsStruct" },
		{ "Comment", "/* How fast is the projectile */" },
		{ "ModuleRelativePath", "Structures/FCChainLightningStatsStruct.h" },
		{ "ToolTip", "How fast is the projectile" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Projectile_Speed = { "Projectile_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCChainLightningStatsStruct, Projectile_Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Projectile_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Projectile_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Cool_Down_MetaData[] = {
		{ "Category", "CChainLightningStatsStruct" },
		{ "Comment", "/* Cooldown of the spell */" },
		{ "ModuleRelativePath", "Structures/FCChainLightningStatsStruct.h" },
		{ "ToolTip", "Cooldown of the spell" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Cool_Down = { "Cool_Down", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCChainLightningStatsStruct, Cool_Down), METADATA_PARAMS(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Cool_Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Cool_Down_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Main_Target_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Should_Fork,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Max_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Fork_Range_Decrement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Self_Destruct_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Projectile_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Statics::NewProp_Cool_Down,
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
	uint32 Get_Z_Construct_UScriptStruct_FCChainLightningStatsStruct_Hash() { return 3459072956U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
