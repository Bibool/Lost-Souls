// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/SniperAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSniperAttack() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_USniperAttack_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_USniperAttack();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void USniperAttack::StaticRegisterNativesUSniperAttack()
	{
	}
	UClass* Z_Construct_UClass_USniperAttack_NoRegister()
	{
		return USniperAttack::StaticClass();
	}
	struct Z_Construct_UClass_USniperAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USniperAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USniperAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NPC/SniperAttack.h" },
		{ "ModuleRelativePath", "NPC/SniperAttack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USniperAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USniperAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USniperAttack_Statics::ClassParams = {
		&USniperAttack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USniperAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USniperAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USniperAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USniperAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USniperAttack, 3707770179);
	template<> GCAA_API UClass* StaticClass<USniperAttack>()
	{
		return USniperAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USniperAttack(Z_Construct_UClass_USniperAttack, &USniperAttack::StaticClass, TEXT("/Script/GCAA"), TEXT("USniperAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USniperAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
