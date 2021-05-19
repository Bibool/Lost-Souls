// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/MissileImpactCameraShake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMissileImpactCameraShake() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UMissileImpactCameraShake_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UMissileImpactCameraShake();
	ENGINE_API UClass* Z_Construct_UClass_UMatineeCameraShake();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UMissileImpactCameraShake::StaticRegisterNativesUMissileImpactCameraShake()
	{
	}
	UClass* Z_Construct_UClass_UMissileImpactCameraShake_NoRegister()
	{
		return UMissileImpactCameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UMissileImpactCameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMissileImpactCameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMatineeCameraShake,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMissileImpactCameraShake_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NPC/MissileImpactCameraShake.h" },
		{ "ModuleRelativePath", "NPC/MissileImpactCameraShake.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMissileImpactCameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMissileImpactCameraShake>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMissileImpactCameraShake_Statics::ClassParams = {
		&UMissileImpactCameraShake::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMissileImpactCameraShake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMissileImpactCameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMissileImpactCameraShake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMissileImpactCameraShake_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMissileImpactCameraShake, 4237196489);
	template<> GCAA_API UClass* StaticClass<UMissileImpactCameraShake>()
	{
		return UMissileImpactCameraShake::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMissileImpactCameraShake(Z_Construct_UClass_UMissileImpactCameraShake, &UMissileImpactCameraShake::StaticClass, TEXT("/Script/GCAA"), TEXT("UMissileImpactCameraShake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMissileImpactCameraShake);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
