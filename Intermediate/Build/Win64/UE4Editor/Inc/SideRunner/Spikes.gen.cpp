// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideRunner/Spikes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpikes() {}
// Cross Module References
	SIDERUNNER_API UClass* Z_Construct_UClass_ASpikes_NoRegister();
	SIDERUNNER_API UClass* Z_Construct_UClass_ASpikes();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SideRunner();
// End Cross Module References
	void ASpikes::StaticRegisterNativesASpikes()
	{
	}
	UClass* Z_Construct_UClass_ASpikes_NoRegister()
	{
		return ASpikes::StaticClass();
	}
	struct Z_Construct_UClass_ASpikes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpikes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SideRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpikes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Spikes.h" },
		{ "ModuleRelativePath", "Spikes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpikes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpikes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpikes_Statics::ClassParams = {
		&ASpikes::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpikes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpikes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpikes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpikes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpikes, 2459087069);
	template<> SIDERUNNER_API UClass* StaticClass<ASpikes>()
	{
		return ASpikes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpikes(Z_Construct_UClass_ASpikes, &ASpikes::StaticClass, TEXT("/Script/SideRunner"), TEXT("ASpikes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpikes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
