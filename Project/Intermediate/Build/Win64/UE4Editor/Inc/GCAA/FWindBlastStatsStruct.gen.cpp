// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/Structures/FWindBlastStatsStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFWindBlastStatsStruct() {}
// Cross Module References
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FWindBlastStatsStruct();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
class UScriptStruct* FWindBlastStatsStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GCAA_API uint32 Get_Z_Construct_UScriptStruct_FWindBlastStatsStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWindBlastStatsStruct, Z_Construct_UPackage__Script_GCAA(), TEXT("WindBlastStatsStruct"), sizeof(FWindBlastStatsStruct), Get_Z_Construct_UScriptStruct_FWindBlastStatsStruct_Hash());
	}
	return Singleton;
}
template<> GCAA_API UScriptStruct* StaticStruct<FWindBlastStatsStruct>()
{
	return FWindBlastStatsStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWindBlastStatsStruct(FWindBlastStatsStruct::StaticStruct, TEXT("/Script/GCAA"), TEXT("WindBlastStatsStruct"), false, nullptr, nullptr);
static struct FScriptStruct_GCAA_StaticRegisterNativesFWindBlastStatsStruct
{
	FScriptStruct_GCAA_StaticRegisterNativesFWindBlastStatsStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WindBlastStatsStruct")),new UScriptStruct::TCppStructOps<FWindBlastStatsStruct>);
	}
} ScriptStruct_GCAA_StaticRegisterNativesFWindBlastStatsStruct;
	struct Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Query_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_OffSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance_OffSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_Angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min_Angle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Use_Target_Cap_MetaData[];
#endif
		static void NewProp_Use_Target_Cap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Use_Target_Cap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_Targets_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Max_Targets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stun_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stun_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Show_Debug_MetaData[];
#endif
		static void NewProp_Show_Debug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Show_Debug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Debug_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Debug_Duration;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Structures/FWindBlastStatsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWindBlastStatsStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Cool_Down_MetaData[] = {
		{ "Category", "WindBlastStatsStruct" },
		{ "Comment", "/** The cool down of the spell in seconds. **/" },
		{ "ModuleRelativePath", "Structures/FWindBlastStatsStruct.h" },
		{ "ToolTip", "The cool down of the spell in seconds. *" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Cool_Down = { "Cool_Down", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindBlastStatsStruct, Cool_Down), METADATA_PARAMS(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Cool_Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Cool_Down_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Query_Radius_MetaData[] = {
		{ "Category", "WindBlastStatsStruct" },
		{ "Comment", "/**\n\x09*The target querying uses a sphere around the player to check for enemies, this sets the radius of that sphere.\n\x09*It's worth noting that the code filters out any target that isn't in front of the player.\n\x09*It will further check in a cone in front of the player as well.\n\x09*/" },
		{ "ModuleRelativePath", "Structures/FWindBlastStatsStruct.h" },
		{ "ToolTip", "The target querying uses a sphere around the player to check for enemies, this sets the radius of that sphere.\nIt's worth noting that the code filters out any target that isn't in front of the player.\nIt will further check in a cone in front of the player as well." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Query_Radius = { "Query_Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindBlastStatsStruct, Query_Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Query_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Query_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Distance_OffSet_MetaData[] = {
		{ "Category", "WindBlastStatsStruct" },
		{ "Comment", "/** This is the multiplier at which the target is displaced, in units. **/" },
		{ "ModuleRelativePath", "Structures/FWindBlastStatsStruct.h" },
		{ "ToolTip", "This is the multiplier at which the target is displaced, in units. *" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Distance_OffSet = { "Distance_OffSet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindBlastStatsStruct, Distance_OffSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Distance_OffSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Distance_OffSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Min_Angle_MetaData[] = {
		{ "Category", "WindBlastStatsStruct" },
		{ "Comment", "/**\n\x09*The min angle for acceptable targets. Targets directly in front of the player are at a value of 1.\n\x09*So this should be something like 0.3f. Set debug info bellow to visually see in-game.\n\x09*/" },
		{ "ModuleRelativePath", "Structures/FWindBlastStatsStruct.h" },
		{ "ToolTip", "The min angle for acceptable targets. Targets directly in front of the player are at a value of 1.\nSo this should be something like 0.3f. Set debug info bellow to visually see in-game." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Min_Angle = { "Min_Angle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindBlastStatsStruct, Min_Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Min_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Min_Angle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Use_Target_Cap_MetaData[] = {
		{ "Category", "WindBlastStatsStruct" },
		{ "Comment", "/** Should the spell only have a limited amount of enemy it can push back? **/" },
		{ "ModuleRelativePath", "Structures/FWindBlastStatsStruct.h" },
		{ "ToolTip", "Should the spell only have a limited amount of enemy it can push back? *" },
	};
#endif
	void Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Use_Target_Cap_SetBit(void* Obj)
	{
		((FWindBlastStatsStruct*)Obj)->Use_Target_Cap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Use_Target_Cap = { "Use_Target_Cap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWindBlastStatsStruct), &Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Use_Target_Cap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Use_Target_Cap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Use_Target_Cap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Max_Targets_MetaData[] = {
		{ "Category", "WindBlastStatsStruct" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If it should be capped, how many targets it should affect in total. **/" },
		{ "ModuleRelativePath", "Structures/FWindBlastStatsStruct.h" },
		{ "ToolTip", "If it should be capped, how many targets it should affect in total. *" },
		{ "UIMax", "50" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Max_Targets = { "Max_Targets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindBlastStatsStruct, Max_Targets), METADATA_PARAMS(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Max_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Max_Targets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Stun_Duration_MetaData[] = {
		{ "Category", "WindBlastStatsStruct" },
		{ "Comment", "/** How long in seconds before the enemy can resume behavior? **/" },
		{ "ModuleRelativePath", "Structures/FWindBlastStatsStruct.h" },
		{ "ToolTip", "How long in seconds before the enemy can resume behavior? *" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Stun_Duration = { "Stun_Duration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindBlastStatsStruct, Stun_Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Stun_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Stun_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Show_Debug_MetaData[] = {
		{ "Category", "WindBlastStatsStruct" },
		{ "Comment", "/**\n\x09*Settings this to true will show visual debug information in-game.\n\x09*This is useful when it comes to seeing the offset location, angle ect.\n\x09*/" },
		{ "ModuleRelativePath", "Structures/FWindBlastStatsStruct.h" },
		{ "ToolTip", "Settings this to true will show visual debug information in-game.\nThis is useful when it comes to seeing the offset location, angle ect." },
	};
#endif
	void Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Show_Debug_SetBit(void* Obj)
	{
		((FWindBlastStatsStruct*)Obj)->Show_Debug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Show_Debug = { "Show_Debug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWindBlastStatsStruct), &Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Show_Debug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Show_Debug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Show_Debug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Debug_Duration_MetaData[] = {
		{ "Category", "WindBlastStatsStruct" },
		{ "Comment", "/** How long should the debug stay on the screen, in seconds. **/" },
		{ "ModuleRelativePath", "Structures/FWindBlastStatsStruct.h" },
		{ "ToolTip", "How long should the debug stay on the screen, in seconds. *" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Debug_Duration = { "Debug_Duration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindBlastStatsStruct, Debug_Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Debug_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Debug_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "WindBlastStatsStruct" },
		{ "Comment", "/** Animation for the spell. */" },
		{ "ModuleRelativePath", "Structures/FWindBlastStatsStruct.h" },
		{ "ToolTip", "Animation for the spell." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindBlastStatsStruct, Animation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Skill_Icon_MetaData[] = {
		{ "Category", "WindBlastStatsStruct" },
		{ "Comment", "/** The icon that will be displayed on the UI.*/" },
		{ "ModuleRelativePath", "Structures/FWindBlastStatsStruct.h" },
		{ "ToolTip", "The icon that will be displayed on the UI." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Skill_Icon = { "Skill_Icon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindBlastStatsStruct, Skill_Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Skill_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Skill_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_VFX_On_Hit_MetaData[] = {
		{ "Category", "WindBlastStatsStruct" },
		{ "Comment", "/* Particle system to play when spell hits something. */" },
		{ "ModuleRelativePath", "Structures/FWindBlastStatsStruct.h" },
		{ "ToolTip", "Particle system to play when spell hits something." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_VFX_On_Hit = { "VFX_On_Hit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindBlastStatsStruct, VFX_On_Hit), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_VFX_On_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_VFX_On_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Cool_Down,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Query_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Distance_OffSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Min_Angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Use_Target_Cap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Max_Targets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Stun_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Show_Debug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Debug_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_Skill_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::NewProp_VFX_On_Hit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
		nullptr,
		&NewStructOps,
		"WindBlastStatsStruct",
		sizeof(FWindBlastStatsStruct),
		alignof(FWindBlastStatsStruct),
		Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWindBlastStatsStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWindBlastStatsStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GCAA();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WindBlastStatsStruct"), sizeof(FWindBlastStatsStruct), Get_Z_Construct_UScriptStruct_FWindBlastStatsStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWindBlastStatsStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWindBlastStatsStruct_Hash() { return 2793131159U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
