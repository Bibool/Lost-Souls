// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/FCFireBallStatsStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCFireBallStatsStruct() {}
// Cross Module References
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FCFireBallStatsStruct();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FCFireBallStatsStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GCAA_API uint32 Get_Z_Construct_UScriptStruct_FCFireBallStatsStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCFireBallStatsStruct, Z_Construct_UPackage__Script_GCAA(), TEXT("CFireBallStatsStruct"), sizeof(FCFireBallStatsStruct), Get_Z_Construct_UScriptStruct_FCFireBallStatsStruct_Hash());
	}
	return Singleton;
}
template<> GCAA_API UScriptStruct* StaticStruct<FCFireBallStatsStruct>()
{
	return FCFireBallStatsStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCFireBallStatsStruct(FCFireBallStatsStruct::StaticStruct, TEXT("/Script/GCAA"), TEXT("CFireBallStatsStruct"), false, nullptr, nullptr);
static struct FScriptStruct_GCAA_StaticRegisterNativesFCFireBallStatsStruct
{
	FScriptStruct_GCAA_StaticRegisterNativesFCFireBallStatsStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CFireBallStatsStruct")),new UScriptStruct::TCppStructOps<FCFireBallStatsStruct>);
	}
} ScriptStruct_GCAA_StaticRegisterNativesFCFireBallStatsStruct;
	struct Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Splash_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Splash_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Has_AOE_Damage_MetaData[];
#endif
		static void NewProp_Has_AOE_Damage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Has_AOE_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_AOE_Cap_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Target_AOE_Cap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Self_Destruct_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Self_Destruct_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectile_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Projectile_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AOE_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AOE_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cool_Down_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cool_Down;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS_Explosion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PS_Explosion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Explosion_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Explosion_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUpgraded_MetaData[];
#endif
		static void NewProp_bIsUpgraded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUpgraded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FCFireBallStatsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCFireBallStatsStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Main_Target_Damage_MetaData[] = {
		{ "Category", "CFireBallStatsStruct" },
		{ "Comment", "/* Damage done to the main target */" },
		{ "ModuleRelativePath", "FCFireBallStatsStruct.h" },
		{ "ToolTip", "Damage done to the main target" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Main_Target_Damage = { "Main_Target_Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCFireBallStatsStruct, Main_Target_Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Main_Target_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Main_Target_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Splash_Damage_MetaData[] = {
		{ "Category", "CFireBallStatsStruct" },
		{ "Comment", "/* Damage done to AOE (non main) targets*/" },
		{ "ModuleRelativePath", "FCFireBallStatsStruct.h" },
		{ "ToolTip", "Damage done to AOE (non main) targets" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Splash_Damage = { "Splash_Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCFireBallStatsStruct, Splash_Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Splash_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Splash_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Has_AOE_Damage_MetaData[] = {
		{ "Category", "CFireBallStatsStruct" },
		{ "Comment", "/* Should the fireball do damage to more than 1 target */" },
		{ "ModuleRelativePath", "FCFireBallStatsStruct.h" },
		{ "ToolTip", "Should the fireball do damage to more than 1 target" },
	};
#endif
	void Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Has_AOE_Damage_SetBit(void* Obj)
	{
		((FCFireBallStatsStruct*)Obj)->Has_AOE_Damage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Has_AOE_Damage = { "Has_AOE_Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCFireBallStatsStruct), &Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Has_AOE_Damage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Has_AOE_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Has_AOE_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Target_AOE_Cap_MetaData[] = {
		{ "Category", "CFireBallStatsStruct" },
		{ "Comment", "/* How many targets should the aoe hit - Not implemented */" },
		{ "ModuleRelativePath", "FCFireBallStatsStruct.h" },
		{ "ToolTip", "How many targets should the aoe hit - Not implemented" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Target_AOE_Cap = { "Target_AOE_Cap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCFireBallStatsStruct, Target_AOE_Cap), METADATA_PARAMS(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Target_AOE_Cap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Target_AOE_Cap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Self_Destruct_Time_MetaData[] = {
		{ "Category", "CFireBallStatsStruct" },
		{ "Comment", "/* How long before it naturally times out */" },
		{ "ModuleRelativePath", "FCFireBallStatsStruct.h" },
		{ "ToolTip", "How long before it naturally times out" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Self_Destruct_Time = { "Self_Destruct_Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCFireBallStatsStruct, Self_Destruct_Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Self_Destruct_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Self_Destruct_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Projectile_Speed_MetaData[] = {
		{ "Category", "CFireBallStatsStruct" },
		{ "Comment", "/* How fast it moves*/" },
		{ "ModuleRelativePath", "FCFireBallStatsStruct.h" },
		{ "ToolTip", "How fast it moves" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Projectile_Speed = { "Projectile_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCFireBallStatsStruct, Projectile_Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Projectile_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Projectile_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_AOE_Radius_MetaData[] = {
		{ "Category", "CFireBallStatsStruct" },
		{ "Comment", "/* How wide is the aoe radius on impact */" },
		{ "ModuleRelativePath", "FCFireBallStatsStruct.h" },
		{ "ToolTip", "How wide is the aoe radius on impact" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_AOE_Radius = { "AOE_Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCFireBallStatsStruct, AOE_Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_AOE_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_AOE_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Cool_Down_MetaData[] = {
		{ "Category", "CFireBallStatsStruct" },
		{ "Comment", "/* The Cooldown of the ability */" },
		{ "ModuleRelativePath", "FCFireBallStatsStruct.h" },
		{ "ToolTip", "The Cooldown of the ability" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Cool_Down = { "Cool_Down", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCFireBallStatsStruct, Cool_Down), METADATA_PARAMS(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Cool_Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Cool_Down_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_PS_Explosion_MetaData[] = {
		{ "Category", "CFireBallStatsStruct" },
		{ "Comment", "/* The Size of the Explosion VFX */" },
		{ "ModuleRelativePath", "FCFireBallStatsStruct.h" },
		{ "ToolTip", "The Size of the Explosion VFX" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_PS_Explosion = { "PS_Explosion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCFireBallStatsStruct, PS_Explosion), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_PS_Explosion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_PS_Explosion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Explosion_Scale_MetaData[] = {
		{ "Category", "CFireBallStatsStruct" },
		{ "Comment", "/* The Size of the Explosion VFX */" },
		{ "ModuleRelativePath", "FCFireBallStatsStruct.h" },
		{ "ToolTip", "The Size of the Explosion VFX" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Explosion_Scale = { "Explosion_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCFireBallStatsStruct, Explosion_Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Explosion_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Explosion_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_bIsUpgraded_MetaData[] = {
		{ "ModuleRelativePath", "FCFireBallStatsStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_bIsUpgraded_SetBit(void* Obj)
	{
		((FCFireBallStatsStruct*)Obj)->bIsUpgraded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_bIsUpgraded = { "bIsUpgraded", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCFireBallStatsStruct), &Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_bIsUpgraded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_bIsUpgraded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_bIsUpgraded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Main_Target_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Splash_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Has_AOE_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Target_AOE_Cap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Self_Destruct_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Projectile_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_AOE_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Cool_Down,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_PS_Explosion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_Explosion_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::NewProp_bIsUpgraded,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
		nullptr,
		&NewStructOps,
		"CFireBallStatsStruct",
		sizeof(FCFireBallStatsStruct),
		alignof(FCFireBallStatsStruct),
		Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCFireBallStatsStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCFireBallStatsStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GCAA();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CFireBallStatsStruct"), sizeof(FCFireBallStatsStruct), Get_Z_Construct_UScriptStruct_FCFireBallStatsStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCFireBallStatsStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCFireBallStatsStruct_Hash() { return 3269153519U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
