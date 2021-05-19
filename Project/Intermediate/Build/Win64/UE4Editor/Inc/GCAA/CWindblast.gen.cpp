// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/SpellManager/Spells/CWindblast.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCWindblast() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_ACWindblast_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ACWindblast();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FActorDistanceData();
	GCAA_API UScriptStruct* Z_Construct_UScriptStruct_FWindBlastStatsStruct();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	GCAA_API UClass* Z_Construct_UClass_ASpellManager_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ACPlayer_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeline();
	GCAA_API UClass* Z_Construct_UClass_UPoolStatusIdentifier_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACWindblast::execRestoreNPCState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestoreNPCState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACWindblast::execTimelineComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimelineComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACWindblast::execApplyDisplacement)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDisplacement(Z_Param_Value);
		P_NATIVE_END;
	}
	void ACWindblast::StaticRegisterNativesACWindblast()
	{
		UClass* Class = ACWindblast::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDisplacement", &ACWindblast::execApplyDisplacement },
			{ "RestoreNPCState", &ACWindblast::execRestoreNPCState },
			{ "TimelineComplete", &ACWindblast::execTimelineComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACWindblast_ApplyDisplacement_Statics
	{
		struct CWindblast_eventApplyDisplacement_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACWindblast_ApplyDisplacement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CWindblast_eventApplyDisplacement_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACWindblast_ApplyDisplacement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACWindblast_ApplyDisplacement_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACWindblast_ApplyDisplacement_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\x09\x09\x09\x09\x09\x09\x09\x09\n// Called in the timeline, lerps the location (Displaces) the target actors.\x09\x09\x09\x09  //\n//\n" },
		{ "ModuleRelativePath", "SpellManager/Spells/CWindblast.h" },
		{ "ToolTip", "Called in the timeline, lerps the location (Displaces) the target actors." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACWindblast_ApplyDisplacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACWindblast, nullptr, "ApplyDisplacement", nullptr, nullptr, sizeof(CWindblast_eventApplyDisplacement_Parms), Z_Construct_UFunction_ACWindblast_ApplyDisplacement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACWindblast_ApplyDisplacement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACWindblast_ApplyDisplacement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACWindblast_ApplyDisplacement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACWindblast_ApplyDisplacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACWindblast_ApplyDisplacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACWindblast_RestoreNPCState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACWindblast_RestoreNPCState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "SpellManager/Spells/CWindblast.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACWindblast_RestoreNPCState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACWindblast, nullptr, "RestoreNPCState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACWindblast_RestoreNPCState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACWindblast_RestoreNPCState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACWindblast_RestoreNPCState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACWindblast_RestoreNPCState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACWindblast_TimelineComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACWindblast_TimelineComplete_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// CB Function when the timeline has completed. Or when the lerp has reached desired offset.  //\n//\n" },
		{ "ModuleRelativePath", "SpellManager/Spells/CWindblast.h" },
		{ "ToolTip", "CB Function when the timeline has completed. Or when the lerp has reached desired offset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACWindblast_TimelineComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACWindblast, nullptr, "TimelineComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACWindblast_TimelineComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACWindblast_TimelineComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACWindblast_TimelineComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACWindblast_TimelineComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACWindblast_NoRegister()
	{
		return ACWindblast::StaticClass();
	}
	struct Z_Construct_UClass_ACWindblast_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_apsTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_apsTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_apsTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sSpellStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_sSpellStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sRestoreControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_sRestoreControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcSpellManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcSpellManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sMoveBackWardTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_sMoveBackWardTimeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACWindblast_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACWindblast_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACWindblast_ApplyDisplacement, "ApplyDisplacement" }, // 2615391284
		{ &Z_Construct_UFunction_ACWindblast_RestoreNPCState, "RestoreNPCState" }, // 4242278462
		{ &Z_Construct_UFunction_ACWindblast_TimelineComplete, "TimelineComplete" }, // 1629606552
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWindblast_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpellManager/Spells/CWindblast.h" },
		{ "ModuleRelativePath", "SpellManager/Spells/CWindblast.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACWindblast_Statics::NewProp_m_apsTargets_Inner = { "m_apsTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorDistanceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWindblast_Statics::NewProp_m_apsTargets_MetaData[] = {
		{ "Comment", "// Are the targets being moved?\x09\n" },
		{ "ModuleRelativePath", "SpellManager/Spells/CWindblast.h" },
		{ "ToolTip", "Are the targets being moved?" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACWindblast_Statics::NewProp_m_apsTargets = { "m_apsTargets", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWindblast, m_apsTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACWindblast_Statics::NewProp_m_apsTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWindblast_Statics::NewProp_m_apsTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWindblast_Statics::NewProp_m_sSpellStats_MetaData[] = {
		{ "Comment", "// TArray of our target data.\x09\n" },
		{ "ModuleRelativePath", "SpellManager/Spells/CWindblast.h" },
		{ "ToolTip", "TArray of our target data." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACWindblast_Statics::NewProp_m_sSpellStats = { "m_sSpellStats", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWindblast, m_sSpellStats), Z_Construct_UScriptStruct_FWindBlastStatsStruct, METADATA_PARAMS(Z_Construct_UClass_ACWindblast_Statics::NewProp_m_sSpellStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWindblast_Statics::NewProp_m_sSpellStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWindblast_Statics::NewProp_m_sRestoreControl_MetaData[] = {
		{ "Comment", "// Member copy of our stats.\x09\n" },
		{ "ModuleRelativePath", "SpellManager/Spells/CWindblast.h" },
		{ "ToolTip", "Member copy of our stats." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACWindblast_Statics::NewProp_m_sRestoreControl = { "m_sRestoreControl", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWindblast, m_sRestoreControl), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ACWindblast_Statics::NewProp_m_sRestoreControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWindblast_Statics::NewProp_m_sRestoreControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWindblast_Statics::NewProp_m_pcSpellManager_MetaData[] = {
		{ "Comment", "// Timer for restoring NPC state.\n" },
		{ "ModuleRelativePath", "SpellManager/Spells/CWindblast.h" },
		{ "ToolTip", "Timer for restoring NPC state." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACWindblast_Statics::NewProp_m_pcSpellManager = { "m_pcSpellManager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWindblast, m_pcSpellManager), Z_Construct_UClass_ASpellManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACWindblast_Statics::NewProp_m_pcSpellManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWindblast_Statics::NewProp_m_pcSpellManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWindblast_Statics::NewProp_m_pcPlayer_MetaData[] = {
		{ "Comment", "// Pointer to the manager.\x09\x09\x09_deprecated_    \n" },
		{ "ModuleRelativePath", "SpellManager/Spells/CWindblast.h" },
		{ "ToolTip", "Pointer to the manager.                        _deprecated_" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACWindblast_Statics::NewProp_m_pcPlayer = { "m_pcPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWindblast, m_pcPlayer), Z_Construct_UClass_ACPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACWindblast_Statics::NewProp_m_pcPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWindblast_Statics::NewProp_m_pcPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACWindblast_Statics::NewProp_m_sMoveBackWardTimeline_MetaData[] = {
		{ "Comment", "// Pointer to the player.\x09\x09\x09_deprecated_ \n" },
		{ "ModuleRelativePath", "SpellManager/Spells/CWindblast.h" },
		{ "ToolTip", "Pointer to the player.                 _deprecated_" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACWindblast_Statics::NewProp_m_sMoveBackWardTimeline = { "m_sMoveBackWardTimeline", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACWindblast, m_sMoveBackWardTimeline), Z_Construct_UScriptStruct_FTimeline, METADATA_PARAMS(Z_Construct_UClass_ACWindblast_Statics::NewProp_m_sMoveBackWardTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACWindblast_Statics::NewProp_m_sMoveBackWardTimeline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACWindblast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWindblast_Statics::NewProp_m_apsTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWindblast_Statics::NewProp_m_apsTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWindblast_Statics::NewProp_m_sSpellStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWindblast_Statics::NewProp_m_sRestoreControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWindblast_Statics::NewProp_m_pcSpellManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWindblast_Statics::NewProp_m_pcPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACWindblast_Statics::NewProp_m_sMoveBackWardTimeline,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACWindblast_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPoolStatusIdentifier_NoRegister, (int32)VTABLE_OFFSET(ACWindblast, IPoolStatusIdentifier), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACWindblast_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACWindblast>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACWindblast_Statics::ClassParams = {
		&ACWindblast::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACWindblast_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACWindblast_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACWindblast_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACWindblast_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACWindblast()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACWindblast_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACWindblast, 540460544);
	template<> GCAA_API UClass* StaticClass<ACWindblast>()
	{
		return ACWindblast::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACWindblast(Z_Construct_UClass_ACWindblast, &ACWindblast::StaticClass, TEXT("/Script/GCAA"), TEXT("ACWindblast"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACWindblast);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
