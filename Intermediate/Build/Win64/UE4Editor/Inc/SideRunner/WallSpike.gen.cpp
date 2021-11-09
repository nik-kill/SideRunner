// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideRunner/WallSpike.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWallSpike() {}
// Cross Module References
	SIDERUNNER_API UClass* Z_Construct_UClass_AWallSpike_NoRegister();
	SIDERUNNER_API UClass* Z_Construct_UClass_AWallSpike();
	SIDERUNNER_API UClass* Z_Construct_UClass_ASpikes();
	UPackage* Z_Construct_UPackage__Script_SideRunner();
// End Cross Module References
	void AWallSpike::StaticRegisterNativesAWallSpike()
	{
	}
	UClass* Z_Construct_UClass_AWallSpike_NoRegister()
	{
		return AWallSpike::StaticClass();
	}
	struct Z_Construct_UClass_AWallSpike_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWallSpike_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpikes,
		(UObject* (*)())Z_Construct_UPackage__Script_SideRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWallSpike_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WallSpike.h" },
		{ "ModuleRelativePath", "WallSpike.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWallSpike_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWallSpike>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWallSpike_Statics::ClassParams = {
		&AWallSpike::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWallSpike_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWallSpike_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWallSpike()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWallSpike_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWallSpike, 1273912525);
	template<> SIDERUNNER_API UClass* StaticClass<AWallSpike>()
	{
		return AWallSpike::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWallSpike(Z_Construct_UClass_AWallSpike, &AWallSpike::StaticClass, TEXT("/Script/SideRunner"), TEXT("AWallSpike"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWallSpike);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
