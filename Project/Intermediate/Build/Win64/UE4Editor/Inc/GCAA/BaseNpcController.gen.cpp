// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/BaseNpcController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseNpcController() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_ABaseNpcController_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ABaseNpcController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseNpcController::execon_updated)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_updated_actors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->on_updated(Z_Param_Out_updated_actors);
		P_NATIVE_END;
	}
	void ABaseNpcController::StaticRegisterNativesABaseNpcController()
	{
		UClass* Class = ABaseNpcController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "on_updated", &ABaseNpcController::execon_updated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseNpcController_on_updated_Statics
	{
		struct BaseNpcController_eventon_updated_Parms
		{
			TArray<AActor*> updated_actors;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_updated_actors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_updated_actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_updated_actors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseNpcController_on_updated_Statics::NewProp_updated_actors_Inner = { "updated_actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseNpcController_on_updated_Statics::NewProp_updated_actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABaseNpcController_on_updated_Statics::NewProp_updated_actors = { "updated_actors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseNpcController_eventon_updated_Parms, updated_actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ABaseNpcController_on_updated_Statics::NewProp_updated_actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseNpcController_on_updated_Statics::NewProp_updated_actors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseNpcController_on_updated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseNpcController_on_updated_Statics::NewProp_updated_actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseNpcController_on_updated_Statics::NewProp_updated_actors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseNpcController_on_updated_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//blackboard component \n" },
		{ "ModuleRelativePath", "NPC/BaseNpcController.h" },
		{ "ToolTip", "blackboard component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseNpcController_on_updated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseNpcController, nullptr, "on_updated", nullptr, nullptr, sizeof(BaseNpcController_eventon_updated_Parms), Z_Construct_UFunction_ABaseNpcController_on_updated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseNpcController_on_updated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseNpcController_on_updated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseNpcController_on_updated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseNpcController_on_updated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseNpcController_on_updated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseNpcController_NoRegister()
	{
		return ABaseNpcController::StaticClass();
	}
	struct Z_Construct_UClass_ABaseNpcController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loseSightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_loseSightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_peripheralVisionAngleDegree_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_peripheralVisionAngleDegree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_autoSuccessRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_autoSuccessRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hearingRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_hearingRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseNpcController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseNpcController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseNpcController_on_updated, "on_updated" }, // 264571765
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNpcController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NPC/BaseNpcController.h" },
		{ "ModuleRelativePath", "NPC/BaseNpcController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNpcController_Statics::NewProp_BlackboardComponent_MetaData[] = {
		{ "Comment", "// hearing sense, in the future this will be moved into a different controller\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC/BaseNpcController.h" },
		{ "ToolTip", "hearing sense, in the future this will be moved into a different controller" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseNpcController_Statics::NewProp_BlackboardComponent = { "BlackboardComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNpcController, BlackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseNpcController_Statics::NewProp_BlackboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpcController_Statics::NewProp_BlackboardComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNpcController_Statics::NewProp_sightRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI | Sense | SightSense" },
		{ "ModuleRelativePath", "NPC/BaseNpcController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseNpcController_Statics::NewProp_sightRadius = { "sightRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNpcController, sightRadius), METADATA_PARAMS(Z_Construct_UClass_ABaseNpcController_Statics::NewProp_sightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpcController_Statics::NewProp_sightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNpcController_Statics::NewProp_loseSightRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI | Sense | SightSense" },
		{ "ModuleRelativePath", "NPC/BaseNpcController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseNpcController_Statics::NewProp_loseSightRadius = { "loseSightRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNpcController, loseSightRadius), METADATA_PARAMS(Z_Construct_UClass_ABaseNpcController_Statics::NewProp_loseSightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpcController_Statics::NewProp_loseSightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNpcController_Statics::NewProp_peripheralVisionAngleDegree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI | Sense | SightSense" },
		{ "ModuleRelativePath", "NPC/BaseNpcController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseNpcController_Statics::NewProp_peripheralVisionAngleDegree = { "peripheralVisionAngleDegree", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNpcController, peripheralVisionAngleDegree), METADATA_PARAMS(Z_Construct_UClass_ABaseNpcController_Statics::NewProp_peripheralVisionAngleDegree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpcController_Statics::NewProp_peripheralVisionAngleDegree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNpcController_Statics::NewProp_maxAge_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI | Sense | SightSense" },
		{ "ModuleRelativePath", "NPC/BaseNpcController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseNpcController_Statics::NewProp_maxAge = { "maxAge", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNpcController, maxAge), METADATA_PARAMS(Z_Construct_UClass_ABaseNpcController_Statics::NewProp_maxAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpcController_Statics::NewProp_maxAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNpcController_Statics::NewProp_autoSuccessRange_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI | Sense | SightSense" },
		{ "ModuleRelativePath", "NPC/BaseNpcController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseNpcController_Statics::NewProp_autoSuccessRange = { "autoSuccessRange", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNpcController, autoSuccessRange), METADATA_PARAMS(Z_Construct_UClass_ABaseNpcController_Statics::NewProp_autoSuccessRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpcController_Statics::NewProp_autoSuccessRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNpcController_Statics::NewProp_hearingRange_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI | Sense | HearingSense" },
		{ "ModuleRelativePath", "NPC/BaseNpcController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseNpcController_Statics::NewProp_hearingRange = { "hearingRange", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNpcController, hearingRange), METADATA_PARAMS(Z_Construct_UClass_ABaseNpcController_Statics::NewProp_hearingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpcController_Statics::NewProp_hearingRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseNpcController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNpcController_Statics::NewProp_BlackboardComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNpcController_Statics::NewProp_sightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNpcController_Statics::NewProp_loseSightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNpcController_Statics::NewProp_peripheralVisionAngleDegree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNpcController_Statics::NewProp_maxAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNpcController_Statics::NewProp_autoSuccessRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNpcController_Statics::NewProp_hearingRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseNpcController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseNpcController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseNpcController_Statics::ClassParams = {
		&ABaseNpcController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseNpcController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpcController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseNpcController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNpcController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseNpcController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseNpcController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseNpcController, 500979128);
	template<> GCAA_API UClass* StaticClass<ABaseNpcController>()
	{
		return ABaseNpcController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseNpcController(Z_Construct_UClass_ABaseNpcController, &ABaseNpcController::StaticClass, TEXT("/Script/GCAA"), TEXT("ABaseNpcController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseNpcController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
