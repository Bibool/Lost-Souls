// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/MissileAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMissileAttack() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UMissileAttack_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UMissileAttack();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UMissileAttack::StaticRegisterNativesUMissileAttack()
	{
	}
	UClass* Z_Construct_UClass_UMissileAttack_NoRegister()
	{
		return UMissileAttack::StaticClass();
	}
	struct Z_Construct_UClass_UMissileAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMissileAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMissileAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NPC/MissileAttack.h" },
		{ "ModuleRelativePath", "NPC/MissileAttack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMissileAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMissileAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMissileAttack_Statics::ClassParams = {
		&UMissileAttack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMissileAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMissileAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMissileAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMissileAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMissileAttack, 488257109);
	template<> GCAA_API UClass* StaticClass<UMissileAttack>()
	{
		return UMissileAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMissileAttack(Z_Construct_UClass_UMissileAttack, &UMissileAttack::StaticClass, TEXT("/Script/GCAA"), TEXT("UMissileAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMissileAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
