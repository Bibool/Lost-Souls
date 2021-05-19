// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/CanNpcMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanNpcMove() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UCanNpcMove_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UCanNpcMove();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UCanNpcMove::StaticRegisterNativesUCanNpcMove()
	{
	}
	UClass* Z_Construct_UClass_UCanNpcMove_NoRegister()
	{
		return UCanNpcMove::StaticClass();
	}
	struct Z_Construct_UClass_UCanNpcMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCanNpcMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanNpcMove_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NPC/CanNpcMove.h" },
		{ "ModuleRelativePath", "NPC/CanNpcMove.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCanNpcMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanNpcMove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCanNpcMove_Statics::ClassParams = {
		&UCanNpcMove::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCanNpcMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCanNpcMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCanNpcMove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCanNpcMove_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCanNpcMove, 2520732817);
	template<> GCAA_API UClass* StaticClass<UCanNpcMove>()
	{
		return UCanNpcMove::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCanNpcMove(Z_Construct_UClass_UCanNpcMove, &UCanNpcMove::StaticClass, TEXT("/Script/GCAA"), TEXT("UCanNpcMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCanNpcMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
