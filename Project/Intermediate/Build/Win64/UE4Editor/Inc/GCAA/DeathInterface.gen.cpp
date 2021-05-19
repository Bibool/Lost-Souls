// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/Interfaces/DeathInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathInterface() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UDeathInterface_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UDeathInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UDeathInterface::StaticRegisterNativesUDeathInterface()
	{
	}
	UClass* Z_Construct_UClass_UDeathInterface_NoRegister()
	{
		return UDeathInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDeathInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeathInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/DeathInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeathInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDeathInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeathInterface_Statics::ClassParams = {
		&UDeathInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDeathInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeathInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeathInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeathInterface, 558394108);
	template<> GCAA_API UClass* StaticClass<UDeathInterface>()
	{
		return UDeathInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeathInterface(Z_Construct_UClass_UDeathInterface, &UDeathInterface::StaticClass, TEXT("/Script/GCAA"), TEXT("UDeathInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeathInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
