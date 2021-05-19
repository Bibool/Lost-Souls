// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/ChangeToWalkSpeed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChangeToWalkSpeed() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UChangeToWalkSpeed_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UChangeToWalkSpeed();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UChangeToWalkSpeed::StaticRegisterNativesUChangeToWalkSpeed()
	{
	}
	UClass* Z_Construct_UClass_UChangeToWalkSpeed_NoRegister()
	{
		return UChangeToWalkSpeed::StaticClass();
	}
	struct Z_Construct_UClass_UChangeToWalkSpeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChangeToWalkSpeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChangeToWalkSpeed_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "NPC/ChangeToWalkSpeed.h" },
		{ "ModuleRelativePath", "NPC/ChangeToWalkSpeed.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChangeToWalkSpeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChangeToWalkSpeed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChangeToWalkSpeed_Statics::ClassParams = {
		&UChangeToWalkSpeed::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChangeToWalkSpeed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChangeToWalkSpeed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChangeToWalkSpeed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChangeToWalkSpeed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChangeToWalkSpeed, 2627859105);
	template<> GCAA_API UClass* StaticClass<UChangeToWalkSpeed>()
	{
		return UChangeToWalkSpeed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChangeToWalkSpeed(Z_Construct_UClass_UChangeToWalkSpeed, &UChangeToWalkSpeed::StaticClass, TEXT("/Script/GCAA"), TEXT("UChangeToWalkSpeed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChangeToWalkSpeed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
