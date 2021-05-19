// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/NPCRangedSpell.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCRangedSpell() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_ANPCRangedSpell_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ANPCRangedSpell();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void ANPCRangedSpell::StaticRegisterNativesANPCRangedSpell()
	{
	}
	UClass* Z_Construct_UClass_ANPCRangedSpell_NoRegister()
	{
		return ANPCRangedSpell::StaticClass();
	}
	struct Z_Construct_UClass_ANPCRangedSpell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCRangedSpell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCRangedSpell_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NPC/NPCRangedSpell.h" },
		{ "ModuleRelativePath", "NPC/NPCRangedSpell.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCRangedSpell_Statics::NewProp_BulletMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC/NPCRangedSpell.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCRangedSpell_Statics::NewProp_BulletMesh = { "BulletMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCRangedSpell, BulletMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPCRangedSpell_Statics::NewProp_BulletMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCRangedSpell_Statics::NewProp_BulletMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCRangedSpell_Statics::NewProp_BulletMovement_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPC/NPCRangedSpell.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCRangedSpell_Statics::NewProp_BulletMovement = { "BulletMovement", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCRangedSpell, BulletMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPCRangedSpell_Statics::NewProp_BulletMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCRangedSpell_Statics::NewProp_BulletMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCRangedSpell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCRangedSpell_Statics::NewProp_BulletMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCRangedSpell_Statics::NewProp_BulletMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCRangedSpell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCRangedSpell>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANPCRangedSpell_Statics::ClassParams = {
		&ANPCRangedSpell::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANPCRangedSpell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPCRangedSpell_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPCRangedSpell_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCRangedSpell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPCRangedSpell()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANPCRangedSpell_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPCRangedSpell, 3863945686);
	template<> GCAA_API UClass* StaticClass<ANPCRangedSpell>()
	{
		return ANPCRangedSpell::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPCRangedSpell(Z_Construct_UClass_ANPCRangedSpell, &ANPCRangedSpell::StaticClass, TEXT("/Script/GCAA"), TEXT("ANPCRangedSpell"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCRangedSpell);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
