// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/TurretAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurretAIController() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_ATurretAIController_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ATurretAIController();
	GCAA_API UClass* Z_Construct_UClass_ABaseNpcController();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	GCAA_API UClass* Z_Construct_UClass_ATurretEnemy_NoRegister();
// End Cross Module References
	void ATurretAIController::StaticRegisterNativesATurretAIController()
	{
	}
	UClass* Z_Construct_UClass_ATurretAIController_NoRegister()
	{
		return ATurretAIController::StaticClass();
	}
	struct Z_Construct_UClass_ATurretAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretEnemy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurretAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseNpcController,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurretAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NPC/TurretAIController.h" },
		{ "ModuleRelativePath", "NPC/TurretAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurretAIController_Statics::NewProp_TurretEnemy_MetaData[] = {
		{ "Category", "TurretAIController" },
		{ "ModuleRelativePath", "NPC/TurretAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurretAIController_Statics::NewProp_TurretEnemy = { "TurretEnemy", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurretAIController, TurretEnemy), Z_Construct_UClass_ATurretEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurretAIController_Statics::NewProp_TurretEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurretAIController_Statics::NewProp_TurretEnemy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurretAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurretAIController_Statics::NewProp_TurretEnemy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurretAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurretAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATurretAIController_Statics::ClassParams = {
		&ATurretAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATurretAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATurretAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATurretAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATurretAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATurretAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATurretAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATurretAIController, 3116910409);
	template<> GCAA_API UClass* StaticClass<ATurretAIController>()
	{
		return ATurretAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATurretAIController(Z_Construct_UClass_ATurretAIController, &ATurretAIController::StaticClass, TEXT("/Script/GCAA"), TEXT("ATurretAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurretAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
