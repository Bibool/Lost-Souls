// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/Structures/FCBasicSpellStatsStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCBasicSpellStatsStruct() {}
// Cross Module References
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FCBasicSpellStatsStruct();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
class UScriptStruct* FCBasicSpellStatsStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GCAA_API uint32 Get_Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct, Z_Construct_UPackage__Script_GCAA(), TEXT("CBasicSpellStatsStruct"), sizeof(FCBasicSpellStatsStruct), Get_Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Hash());
	}
	return Singleton;
}
template<> GCAA_API UScriptStruct* StaticStruct<FCBasicSpellStatsStruct>()
{
	return FCBasicSpellStatsStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCBasicSpellStatsStruct(FCBasicSpellStatsStruct::StaticStruct, TEXT("/Script/GCAA"), TEXT("CBasicSpellStatsStruct"), false, nullptr, nullptr);
static struct FScriptStruct_GCAA_StaticRegisterNativesFCBasicSpellStatsStruct
{
	FScriptStruct_GCAA_StaticRegisterNativesFCBasicSpellStatsStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CBasicSpellStatsStruct")),new UScriptStruct::TCppStructOps<FCBasicSpellStatsStruct>);
	}
} ScriptStruct_GCAA_StaticRegisterNativesFCBasicSpellStatsStruct;
	struct Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cool_Down_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cool_Down;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Self_Destruct_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Self_Destruct_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectile_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Projectile_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_Left_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation_Left;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_Right_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation_Right;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VFX_On_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VFX_On_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Structures/FCBasicSpellStatsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCBasicSpellStatsStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Cool_Down_MetaData[] = {
		{ "Category", "CBasicSpellStatsStruct" },
		{ "Comment", "/* Cool Down of spell */" },
		{ "ModuleRelativePath", "Structures/FCBasicSpellStatsStruct.h" },
		{ "ToolTip", "Cool Down of spell" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Cool_Down = { "Cool_Down", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCBasicSpellStatsStruct, Cool_Down), METADATA_PARAMS(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Cool_Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Cool_Down_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "CBasicSpellStatsStruct" },
		{ "Comment", "/* Damage of spell */" },
		{ "ModuleRelativePath", "Structures/FCBasicSpellStatsStruct.h" },
		{ "ToolTip", "Damage of spell" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCBasicSpellStatsStruct, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Self_Destruct_Time_MetaData[] = {
		{ "Category", "CBasicSpellStatsStruct" },
		{ "Comment", "/* Time in seconds before it times out if it hasn't hit anything. */" },
		{ "ModuleRelativePath", "Structures/FCBasicSpellStatsStruct.h" },
		{ "ToolTip", "Time in seconds before it times out if it hasn't hit anything." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Self_Destruct_Time = { "Self_Destruct_Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCBasicSpellStatsStruct, Self_Destruct_Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Self_Destruct_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Self_Destruct_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Projectile_Speed_MetaData[] = {
		{ "Category", "CBasicSpellStatsStruct" },
		{ "Comment", "/* How fast is the projectile */" },
		{ "ModuleRelativePath", "Structures/FCBasicSpellStatsStruct.h" },
		{ "ToolTip", "How fast is the projectile" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Projectile_Speed = { "Projectile_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCBasicSpellStatsStruct, Projectile_Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Projectile_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Projectile_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Animation_Left_MetaData[] = {
		{ "Category", "CBasicSpellStatsStruct" },
		{ "Comment", "/** Animation for the spell. */" },
		{ "ModuleRelativePath", "Structures/FCBasicSpellStatsStruct.h" },
		{ "ToolTip", "Animation for the spell." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Animation_Left = { "Animation_Left", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCBasicSpellStatsStruct, Animation_Left), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Animation_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Animation_Left_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Animation_Right_MetaData[] = {
		{ "Category", "CBasicSpellStatsStruct" },
		{ "Comment", "/** Animation for the spell. */" },
		{ "ModuleRelativePath", "Structures/FCBasicSpellStatsStruct.h" },
		{ "ToolTip", "Animation for the spell." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Animation_Right = { "Animation_Right", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCBasicSpellStatsStruct, Animation_Right), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Animation_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Animation_Right_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_VFX_On_Hit_MetaData[] = {
		{ "Category", "CBasicSpellStatsStruct" },
		{ "Comment", "/* Particle system to play when spell hits something. */" },
		{ "ModuleRelativePath", "Structures/FCBasicSpellStatsStruct.h" },
		{ "ToolTip", "Particle system to play when spell hits something." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_VFX_On_Hit = { "VFX_On_Hit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCBasicSpellStatsStruct, VFX_On_Hit), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_VFX_On_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_VFX_On_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Cool_Down,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Self_Destruct_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Projectile_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Animation_Left,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_Animation_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::NewProp_VFX_On_Hit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
		nullptr,
		&NewStructOps,
		"CBasicSpellStatsStruct",
		sizeof(FCBasicSpellStatsStruct),
		alignof(FCBasicSpellStatsStruct),
		Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCBasicSpellStatsStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GCAA();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CBasicSpellStatsStruct"), sizeof(FCBasicSpellStatsStruct), Get_Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCBasicSpellStatsStruct_Hash() { return 3334224949U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
