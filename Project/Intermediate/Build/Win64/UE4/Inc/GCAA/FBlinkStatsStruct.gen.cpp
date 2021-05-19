// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/Structures/FBlinkStatsStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBlinkStatsStruct() {}
// Cross Module References
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FBlinkStatsStruct();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
class UScriptStruct* FBlinkStatsStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GCAA_API uint32 Get_Z_Construct_UScriptStruct_FBlinkStatsStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlinkStatsStruct, Z_Construct_UPackage__Script_GCAA(), TEXT("BlinkStatsStruct"), sizeof(FBlinkStatsStruct), Get_Z_Construct_UScriptStruct_FBlinkStatsStruct_Hash());
	}
	return Singleton;
}
template<> GCAA_API UScriptStruct* StaticStruct<FBlinkStatsStruct>()
{
	return FBlinkStatsStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlinkStatsStruct(FBlinkStatsStruct::StaticStruct, TEXT("/Script/GCAA"), TEXT("BlinkStatsStruct"), false, nullptr, nullptr);
static struct FScriptStruct_GCAA_StaticRegisterNativesFBlinkStatsStruct
{
	FScriptStruct_GCAA_StaticRegisterNativesFBlinkStatsStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlinkStatsStruct")),new UScriptStruct::TCppStructOps<FBlinkStatsStruct>);
	}
} ScriptStruct_GCAA_StaticRegisterNativesFBlinkStatsStruct;
	struct Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cool_Down_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cool_Down;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Recharge_Rate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Recharge_Rate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_Charges_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Max_Charges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grounded_Only_MetaData[];
#endif
		static void NewProp_Grounded_Only_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Grounded_Only;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_Direction_MetaData[];
#endif
		static void NewProp_Camera_Direction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Camera_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delay_Before_Blink_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay_Before_Blink;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Structures/FBlinkStatsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlinkStatsStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "BlinkStatsStruct" },
		{ "Comment", "/* Distance at which the player can blink */" },
		{ "ModuleRelativePath", "Structures/FBlinkStatsStruct.h" },
		{ "ToolTip", "Distance at which the player can blink" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlinkStatsStruct, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Cool_Down_MetaData[] = {
		{ "Category", "BlinkStatsStruct" },
		{ "Comment", "/* Cool Down of spell */" },
		{ "ModuleRelativePath", "Structures/FBlinkStatsStruct.h" },
		{ "ToolTip", "Cool Down of spell" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Cool_Down = { "Cool_Down", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlinkStatsStruct, Cool_Down), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Cool_Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Cool_Down_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Recharge_Rate_MetaData[] = {
		{ "Category", "BlinkStatsStruct" },
		{ "Comment", "/* How fast do charges regenerate */" },
		{ "ModuleRelativePath", "Structures/FBlinkStatsStruct.h" },
		{ "ToolTip", "How fast do charges regenerate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Recharge_Rate = { "Recharge_Rate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlinkStatsStruct, Recharge_Rate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Recharge_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Recharge_Rate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Max_Charges_MetaData[] = {
		{ "Category", "BlinkStatsStruct" },
		{ "Comment", "/* How many total charges of the spell */" },
		{ "ModuleRelativePath", "Structures/FBlinkStatsStruct.h" },
		{ "ToolTip", "How many total charges of the spell" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Max_Charges = { "Max_Charges", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlinkStatsStruct, Max_Charges), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Max_Charges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Max_Charges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Grounded_Only_MetaData[] = {
		{ "Category", "BlinkStatsStruct" },
		{ "Comment", "/* Is the player allowed to blink against non surfaces? */" },
		{ "ModuleRelativePath", "Structures/FBlinkStatsStruct.h" },
		{ "ToolTip", "Is the player allowed to blink against non surfaces?" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Grounded_Only_SetBit(void* Obj)
	{
		((FBlinkStatsStruct*)Obj)->Grounded_Only = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Grounded_Only = { "Grounded_Only", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBlinkStatsStruct), &Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Grounded_Only_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Grounded_Only_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Grounded_Only_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Camera_Direction_MetaData[] = {
		{ "Category", "BlinkStatsStruct" },
		{ "Comment", "/* Should it blink towards the camera's direction or players? */" },
		{ "ModuleRelativePath", "Structures/FBlinkStatsStruct.h" },
		{ "ToolTip", "Should it blink towards the camera's direction or players?" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Camera_Direction_SetBit(void* Obj)
	{
		((FBlinkStatsStruct*)Obj)->Camera_Direction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Camera_Direction = { "Camera_Direction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBlinkStatsStruct), &Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Camera_Direction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Camera_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Camera_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_CurveFloat_MetaData[] = {
		{ "Category", "BlinkStatsStruct" },
		{ "Comment", "/* Curve used for the effect*/" },
		{ "ModuleRelativePath", "Structures/FBlinkStatsStruct.h" },
		{ "ToolTip", "Curve used for the effect" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_CurveFloat = { "CurveFloat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlinkStatsStruct, CurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_CurveFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_CurveFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Delay_Before_Blink_MetaData[] = {
		{ "Category", "BlinkStatsStruct" },
		{ "Comment", "/* Time in Seconds before the player actually teleports */" },
		{ "ModuleRelativePath", "Structures/FBlinkStatsStruct.h" },
		{ "ToolTip", "Time in Seconds before the player actually teleports" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Delay_Before_Blink = { "Delay_Before_Blink", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlinkStatsStruct, Delay_Before_Blink), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Delay_Before_Blink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Delay_Before_Blink_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Cool_Down,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Recharge_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Max_Charges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Grounded_Only,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Camera_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_CurveFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::NewProp_Delay_Before_Blink,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
		nullptr,
		&NewStructOps,
		"BlinkStatsStruct",
		sizeof(FBlinkStatsStruct),
		alignof(FBlinkStatsStruct),
		Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlinkStatsStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlinkStatsStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GCAA();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlinkStatsStruct"), sizeof(FBlinkStatsStruct), Get_Z_Construct_UScriptStruct_FBlinkStatsStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlinkStatsStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlinkStatsStruct_Hash() { return 3344680562U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
