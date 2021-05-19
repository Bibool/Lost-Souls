// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/Pyroxenes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyroxenes() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_APyroxenes_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_APyroxenes();
	GCAA_API UClass* Z_Construct_UClass_AMovingNpc();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GCAA_API UClass* Z_Construct_UClass_APyroxenesExplosion_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UFloatingAI_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APyroxenes::StaticRegisterNativesAPyroxenes()
	{
	}
	UClass* Z_Construct_UClass_APyroxenes_NoRegister()
	{
		return APyroxenes::StaticClass();
	}
	struct Z_Construct_UClass_APyroxenes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Explosion_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Explosion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingAI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingAI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APyroxenes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMovingNpc,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyroxenes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC/Pyroxenes.h" },
		{ "ModuleRelativePath", "NPC/Pyroxenes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyroxenes_Statics::NewProp_Explosion_MetaData[] = {
		{ "Category", "AI | Combat" },
		{ "ModuleRelativePath", "NPC/Pyroxenes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APyroxenes_Statics::NewProp_Explosion = { "Explosion", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyroxenes, Explosion), Z_Construct_UClass_APyroxenesExplosion_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APyroxenes_Statics::NewProp_Explosion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APyroxenes_Statics::NewProp_Explosion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyroxenes_Statics::NewProp_FloatingAI_MetaData[] = {
		{ "Category", "FloatingAI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC/Pyroxenes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APyroxenes_Statics::NewProp_FloatingAI = { "FloatingAI", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyroxenes, FloatingAI), Z_Construct_UClass_UFloatingAI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APyroxenes_Statics::NewProp_FloatingAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APyroxenes_Statics::NewProp_FloatingAI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyroxenes_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "Category", "AI | Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC/Pyroxenes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APyroxenes_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyroxenes, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APyroxenes_Statics::NewProp_BodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APyroxenes_Statics::NewProp_BodyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APyroxenes_Statics::NewProp_HeadMesh_MetaData[] = {
		{ "Category", "AI | Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC/Pyroxenes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APyroxenes_Statics::NewProp_HeadMesh = { "HeadMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APyroxenes, HeadMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APyroxenes_Statics::NewProp_HeadMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APyroxenes_Statics::NewProp_HeadMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APyroxenes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyroxenes_Statics::NewProp_Explosion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyroxenes_Statics::NewProp_FloatingAI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyroxenes_Statics::NewProp_BodyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APyroxenes_Statics::NewProp_HeadMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APyroxenes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APyroxenes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APyroxenes_Statics::ClassParams = {
		&APyroxenes::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APyroxenes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APyroxenes_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APyroxenes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APyroxenes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APyroxenes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APyroxenes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APyroxenes, 3438587508);
	template<> GCAA_API UClass* StaticClass<APyroxenes>()
	{
		return APyroxenes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APyroxenes(Z_Construct_UClass_APyroxenes, &APyroxenes::StaticClass, TEXT("/Script/GCAA"), TEXT("APyroxenes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APyroxenes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
