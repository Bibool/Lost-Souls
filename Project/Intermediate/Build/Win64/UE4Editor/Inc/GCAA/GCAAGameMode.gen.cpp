// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/GCAAGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGCAAGameMode() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_AGCAAGameMode_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_AGCAAGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void AGCAAGameMode::StaticRegisterNativesAGCAAGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGCAAGameMode_NoRegister()
	{
		return AGCAAGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGCAAGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGCAAGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGCAAGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GCAAGameMode.h" },
		{ "ModuleRelativePath", "GCAAGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGCAAGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGCAAGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGCAAGameMode_Statics::ClassParams = {
		&AGCAAGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGCAAGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGCAAGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGCAAGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGCAAGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGCAAGameMode, 2213423978);
	template<> GCAA_API UClass* StaticClass<AGCAAGameMode>()
	{
		return AGCAAGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGCAAGameMode(Z_Construct_UClass_AGCAAGameMode, &AGCAAGameMode::StaticClass, TEXT("/Script/GCAA"), TEXT("AGCAAGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGCAAGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
