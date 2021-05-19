// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/NPCHealthBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCHealthBar() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UNPCHealthBar_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UNPCHealthBar();
	GCAA_API UClass* Z_Construct_UClass_UBaseHealthUI();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UNPCHealthBar::StaticRegisterNativesUNPCHealthBar()
	{
	}
	UClass* Z_Construct_UClass_UNPCHealthBar_NoRegister()
	{
		return UNPCHealthBar::StaticClass();
	}
	struct Z_Construct_UClass_UNPCHealthBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNPCHealthBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseHealthUI,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCHealthBar_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NPC/NPCHealthBar.h" },
		{ "ModuleRelativePath", "NPC/NPCHealthBar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNPCHealthBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCHealthBar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNPCHealthBar_Statics::ClassParams = {
		&UNPCHealthBar::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNPCHealthBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCHealthBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNPCHealthBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNPCHealthBar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNPCHealthBar, 2094740321);
	template<> GCAA_API UClass* StaticClass<UNPCHealthBar>()
	{
		return UNPCHealthBar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNPCHealthBar(Z_Construct_UClass_UNPCHealthBar, &UNPCHealthBar::StaticClass, TEXT("/Script/GCAA"), TEXT("UNPCHealthBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCHealthBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
