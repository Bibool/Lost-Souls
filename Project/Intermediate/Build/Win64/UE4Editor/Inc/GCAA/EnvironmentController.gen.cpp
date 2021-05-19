// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/DynamicEnvironment/EnvironmentController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvironmentController() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_AEnvironmentController_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_AEnvironmentController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AEnvironmentController::StaticRegisterNativesAEnvironmentController()
	{
	}
	UClass* Z_Construct_UClass_AEnvironmentController_NoRegister()
	{
		return AEnvironmentController::StaticClass();
	}
	struct Z_Construct_UClass_AEnvironmentController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ECRootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ECRootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Box;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Activator_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Activator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UI_MessageToPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UI_MessageToPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnvironmentController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicEnvironment/EnvironmentController.h" },
		{ "ModuleRelativePath", "DynamicEnvironment/EnvironmentController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentController_Statics::NewProp_ECRootComponent_MetaData[] = {
		{ "Category", "EnvironmentController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DynamicEnvironment/EnvironmentController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnvironmentController_Statics::NewProp_ECRootComponent = { "ECRootComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnvironmentController, ECRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnvironmentController_Statics::NewProp_ECRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentController_Statics::NewProp_ECRootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentController_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "EnvironmentController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DynamicEnvironment/EnvironmentController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnvironmentController_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnvironmentController, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnvironmentController_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentController_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentController_Statics::NewProp_Box_MetaData[] = {
		{ "Category", "EnvironmentController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DynamicEnvironment/EnvironmentController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnvironmentController_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnvironmentController, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnvironmentController_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentController_Statics::NewProp_Box_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentController_Statics::NewProp_Activator_MetaData[] = {
		{ "Category", "Configure" },
		{ "ModuleRelativePath", "DynamicEnvironment/EnvironmentController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEnvironmentController_Statics::NewProp_Activator = { "Activator", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnvironmentController, Activator), METADATA_PARAMS(Z_Construct_UClass_AEnvironmentController_Statics::NewProp_Activator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentController_Statics::NewProp_Activator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentController_Statics::NewProp_UI_MessageToPlayer_MetaData[] = {
		{ "Category", "Configure" },
		{ "ModuleRelativePath", "DynamicEnvironment/EnvironmentController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnvironmentController_Statics::NewProp_UI_MessageToPlayer = { "UI_MessageToPlayer", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnvironmentController, UI_MessageToPlayer), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnvironmentController_Statics::NewProp_UI_MessageToPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentController_Statics::NewProp_UI_MessageToPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnvironmentController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentController_Statics::NewProp_ECRootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentController_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentController_Statics::NewProp_Box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentController_Statics::NewProp_Activator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentController_Statics::NewProp_UI_MessageToPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnvironmentController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnvironmentController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnvironmentController_Statics::ClassParams = {
		&AEnvironmentController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnvironmentController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnvironmentController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnvironmentController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnvironmentController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnvironmentController, 2912717960);
	template<> GCAA_API UClass* StaticClass<AEnvironmentController>()
	{
		return AEnvironmentController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnvironmentController(Z_Construct_UClass_AEnvironmentController, &AEnvironmentController::StaticClass, TEXT("/Script/GCAA"), TEXT("AEnvironmentController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnvironmentController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
