// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDERUNNER_SideRunnerCharacter_generated_h
#error "SideRunnerCharacter.generated.h already included, missing '#pragma once' in SideRunnerCharacter.h"
#endif
#define SIDERUNNER_SideRunnerCharacter_generated_h

#define SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_SPARSE_DATA
#define SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_RPC_WRAPPERS
#define SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASideRunnerCharacter(); \
	friend struct Z_Construct_UClass_ASideRunnerCharacter_Statics; \
public: \
	DECLARE_CLASS(ASideRunnerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideRunner"), NO_API) \
	DECLARE_SERIALIZER(ASideRunnerCharacter)


#define SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASideRunnerCharacter(); \
	friend struct Z_Construct_UClass_ASideRunnerCharacter_Statics; \
public: \
	DECLARE_CLASS(ASideRunnerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideRunner"), NO_API) \
	DECLARE_SERIALIZER(ASideRunnerCharacter)


#define SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASideRunnerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASideRunnerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASideRunnerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASideRunnerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASideRunnerCharacter(ASideRunnerCharacter&&); \
	NO_API ASideRunnerCharacter(const ASideRunnerCharacter&); \
public:


#define SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASideRunnerCharacter(ASideRunnerCharacter&&); \
	NO_API ASideRunnerCharacter(const ASideRunnerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASideRunnerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASideRunnerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASideRunnerCharacter)


#define SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASideRunnerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ASideRunnerCharacter, FollowCamera); }


#define SideRunner_Source_SideRunner_SideRunnerCharacter_h_9_PROLOG
#define SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_SPARSE_DATA \
	SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_RPC_WRAPPERS \
	SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_INCLASS \
	SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_SPARSE_DATA \
	SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	SideRunner_Source_SideRunner_SideRunnerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDERUNNER_API UClass* StaticClass<class ASideRunnerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideRunner_Source_SideRunner_SideRunnerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
