// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDERUNNER_Spikes_generated_h
#error "Spikes.generated.h already included, missing '#pragma once' in Spikes.h"
#endif
#define SIDERUNNER_Spikes_generated_h

#define SideRunner_Source_SideRunner_Spikes_h_12_SPARSE_DATA
#define SideRunner_Source_SideRunner_Spikes_h_12_RPC_WRAPPERS
#define SideRunner_Source_SideRunner_Spikes_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SideRunner_Source_SideRunner_Spikes_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpikes(); \
	friend struct Z_Construct_UClass_ASpikes_Statics; \
public: \
	DECLARE_CLASS(ASpikes, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideRunner"), NO_API) \
	DECLARE_SERIALIZER(ASpikes)


#define SideRunner_Source_SideRunner_Spikes_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpikes(); \
	friend struct Z_Construct_UClass_ASpikes_Statics; \
public: \
	DECLARE_CLASS(ASpikes, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideRunner"), NO_API) \
	DECLARE_SERIALIZER(ASpikes)


#define SideRunner_Source_SideRunner_Spikes_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpikes(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpikes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpikes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpikes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpikes(ASpikes&&); \
	NO_API ASpikes(const ASpikes&); \
public:


#define SideRunner_Source_SideRunner_Spikes_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpikes(ASpikes&&); \
	NO_API ASpikes(const ASpikes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpikes); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpikes); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpikes)


#define SideRunner_Source_SideRunner_Spikes_h_12_PRIVATE_PROPERTY_OFFSET
#define SideRunner_Source_SideRunner_Spikes_h_9_PROLOG
#define SideRunner_Source_SideRunner_Spikes_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideRunner_Source_SideRunner_Spikes_h_12_PRIVATE_PROPERTY_OFFSET \
	SideRunner_Source_SideRunner_Spikes_h_12_SPARSE_DATA \
	SideRunner_Source_SideRunner_Spikes_h_12_RPC_WRAPPERS \
	SideRunner_Source_SideRunner_Spikes_h_12_INCLASS \
	SideRunner_Source_SideRunner_Spikes_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideRunner_Source_SideRunner_Spikes_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideRunner_Source_SideRunner_Spikes_h_12_PRIVATE_PROPERTY_OFFSET \
	SideRunner_Source_SideRunner_Spikes_h_12_SPARSE_DATA \
	SideRunner_Source_SideRunner_Spikes_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SideRunner_Source_SideRunner_Spikes_h_12_INCLASS_NO_PURE_DECLS \
	SideRunner_Source_SideRunner_Spikes_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDERUNNER_API UClass* StaticClass<class ASpikes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideRunner_Source_SideRunner_Spikes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
