// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/MessageToPlayerManager/MessageToPlayerManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMessageToPlayerManager() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UMessageToPlayerManager_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UMessageToPlayerManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UMessageToPlayerManager::StaticRegisterNativesUMessageToPlayerManager()
	{
	}
	UClass* Z_Construct_UClass_UMessageToPlayerManager_NoRegister()
	{
		return UMessageToPlayerManager::StaticClass();
	}
	struct Z_Construct_UClass_UMessageToPlayerManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMessageToPlayerManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageToPlayerManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MessageToPlayerManager/MessageToPlayerManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MessageToPlayerManager/MessageToPlayerManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMessageToPlayerManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMessageToPlayerManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMessageToPlayerManager_Statics::ClassParams = {
		&UMessageToPlayerManager::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMessageToPlayerManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageToPlayerManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMessageToPlayerManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMessageToPlayerManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMessageToPlayerManager, 4278234538);
	template<> GCAA_API UClass* StaticClass<UMessageToPlayerManager>()
	{
		return UMessageToPlayerManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMessageToPlayerManager(Z_Construct_UClass_UMessageToPlayerManager, &UMessageToPlayerManager::StaticClass, TEXT("/Script/GCAA"), TEXT("UMessageToPlayerManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMessageToPlayerManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
