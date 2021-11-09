// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideRunner/SideRunnerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSideRunnerGameMode() {}
// Cross Module References
	SIDERUNNER_API UClass* Z_Construct_UClass_ASideRunnerGameMode_NoRegister();
	SIDERUNNER_API UClass* Z_Construct_UClass_ASideRunnerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SideRunner();
// End Cross Module References
	void ASideRunnerGameMode::StaticRegisterNativesASideRunnerGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASideRunnerGameMode_NoRegister()
	{
		return ASideRunnerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASideRunnerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASideRunnerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SideRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideRunnerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SideRunnerGameMode.h" },
		{ "ModuleRelativePath", "SideRunnerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASideRunnerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASideRunnerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASideRunnerGameMode_Statics::ClassParams = {
		&ASideRunnerGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASideRunnerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASideRunnerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASideRunnerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASideRunnerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASideRunnerGameMode, 2078893587);
	template<> SIDERUNNER_API UClass* StaticClass<ASideRunnerGameMode>()
	{
		return ASideRunnerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASideRunnerGameMode(Z_Construct_UClass_ASideRunnerGameMode, &ASideRunnerGameMode::StaticClass, TEXT("/Script/SideRunner"), TEXT("ASideRunnerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASideRunnerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
