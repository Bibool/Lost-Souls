// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/DynamicEnvironment/EnvironmentItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvironmentItem() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_AEnvironmentItem_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_AEnvironmentItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	void AEnvironmentItem::StaticRegisterNativesAEnvironmentItem()
	{
	}
	UClass* Z_Construct_UClass_AEnvironmentItem_NoRegister()
	{
		return AEnvironmentItem::StaticClass();
	}
	struct Z_Construct_UClass_AEnvironmentItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Activator_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Activator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnvironmentItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicEnvironment/EnvironmentItem.h" },
		{ "ModuleRelativePath", "DynamicEnvironment/EnvironmentItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentItem_Statics::NewProp_Activator_MetaData[] = {
		{ "Category", "Configure" },
		{ "ModuleRelativePath", "DynamicEnvironment/EnvironmentItem.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEnvironmentItem_Statics::NewProp_Activator = { "Activator", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnvironmentItem, Activator), METADATA_PARAMS(Z_Construct_UClass_AEnvironmentItem_Statics::NewProp_Activator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentItem_Statics::NewProp_Activator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentItem_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "EnvironmentItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DynamicEnvironment/EnvironmentItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnvironmentItem_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnvironmentItem, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnvironmentItem_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentItem_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnvironmentItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentItem_Statics::NewProp_Activator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentItem_Statics::NewProp_StaticMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnvironmentItem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AEnvironmentItem, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnvironmentItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnvironmentItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnvironmentItem_Statics::ClassParams = {
		&AEnvironmentItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnvironmentItem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentItem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnvironmentItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnvironmentItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnvironmentItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnvironmentItem, 2502900702);
	template<> GCAA_API UClass* StaticClass<AEnvironmentItem>()
	{
		return AEnvironmentItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnvironmentItem(Z_Construct_UClass_AEnvironmentItem, &AEnvironmentItem::StaticClass, TEXT("/Script/GCAA"), TEXT("AEnvironmentItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnvironmentItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
