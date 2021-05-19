// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/AnimNotifies/Spells/LightningCastNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightningCastNotify() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_ULightningCastNotify_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ULightningCastNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void ULightningCastNotify::StaticRegisterNativesULightningCastNotify()
	{
	}
	UClass* Z_Construct_UClass_ULightningCastNotify_NoRegister()
	{
		return ULightningCastNotify::StaticClass();
	}
	struct Z_Construct_UClass_ULightningCastNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightningCastNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightningCastNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifies/Spells/LightningCastNotify.h" },
		{ "ModuleRelativePath", "AnimNotifies/Spells/LightningCastNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightningCastNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightningCastNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightningCastNotify_Statics::ClassParams = {
		&ULightningCastNotify::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightningCastNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightningCastNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightningCastNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightningCastNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightningCastNotify, 3808580156);
	template<> GCAA_API UClass* StaticClass<ULightningCastNotify>()
	{
		return ULightningCastNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightningCastNotify(Z_Construct_UClass_ULightningCastNotify, &ULightningCastNotify::StaticClass, TEXT("/Script/GCAA"), TEXT("ULightningCastNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightningCastNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
