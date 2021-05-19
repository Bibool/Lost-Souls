// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/ChooseAttackTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChooseAttackTask() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UChooseAttackTask_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UChooseAttackTask();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UChooseAttackTask::StaticRegisterNativesUChooseAttackTask()
	{
	}
	UClass* Z_Construct_UClass_UChooseAttackTask_NoRegister()
	{
		return UChooseAttackTask::StaticClass();
	}
	struct Z_Construct_UClass_UChooseAttackTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChooseAttackTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooseAttackTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NPC/ChooseAttackTask.h" },
		{ "ModuleRelativePath", "NPC/ChooseAttackTask.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChooseAttackTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChooseAttackTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChooseAttackTask_Statics::ClassParams = {
		&UChooseAttackTask::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChooseAttackTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChooseAttackTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChooseAttackTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChooseAttackTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChooseAttackTask, 4240142432);
	template<> GCAA_API UClass* StaticClass<UChooseAttackTask>()
	{
		return UChooseAttackTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChooseAttackTask(Z_Construct_UClass_UChooseAttackTask, &UChooseAttackTask::StaticClass, TEXT("/Script/GCAA"), TEXT("UChooseAttackTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChooseAttackTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
