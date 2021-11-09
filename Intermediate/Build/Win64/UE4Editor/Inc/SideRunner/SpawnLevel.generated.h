// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SIDERUNNER_SpawnLevel_generated_h
#error "SpawnLevel.generated.h already included, missing '#pragma once' in SpawnLevel.h"
#endif
#define SIDERUNNER_SpawnLevel_generated_h

#define SideRunner_Source_SideRunner_SpawnLevel_h_14_SPARSE_DATA
#define SideRunner_Source_SideRunner_SpawnLevel_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execSpawnLevel);


#define SideRunner_Source_SideRunner_SpawnLevel_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execSpawnLevel);


#define SideRunner_Source_SideRunner_SpawnLevel_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnLevel(); \
	friend struct Z_Construct_UClass_ASpawnLevel_Statics; \
public: \
	DECLARE_CLASS(ASpawnLevel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideRunner"), NO_API) \
	DECLARE_SERIALIZER(ASpawnLevel)


#define SideRunner_Source_SideRunner_SpawnLevel_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASpawnLevel(); \
	friend struct Z_Construct_UClass_ASpawnLevel_Statics; \
public: \
	DECLARE_CLASS(ASpawnLevel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideRunner"), NO_API) \
	DECLARE_SERIALIZER(ASpawnLevel)


#define SideRunner_Source_SideRunner_SpawnLevel_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnLevel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnLevel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnLevel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnLevel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnLevel(ASpawnLevel&&); \
	NO_API ASpawnLevel(const ASpawnLevel&); \
public:


#define SideRunner_Source_SideRunner_SpawnLevel_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnLevel(ASpawnLevel&&); \
	NO_API ASpawnLevel(const ASpawnLevel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnLevel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnLevel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnLevel)


#define SideRunner_Source_SideRunner_SpawnLevel_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Level1() { return STRUCT_OFFSET(ASpawnLevel, Level1); } \
	FORCEINLINE static uint32 __PPO__Level2() { return STRUCT_OFFSET(ASpawnLevel, Level2); } \
	FORCEINLINE static uint32 __PPO__Level3() { return STRUCT_OFFSET(ASpawnLevel, Level3); } \
	FORCEINLINE static uint32 __PPO__Level4() { return STRUCT_OFFSET(ASpawnLevel, Level4); } \
	FORCEINLINE static uint32 __PPO__Level5() { return STRUCT_OFFSET(ASpawnLevel, Level5); }


#define SideRunner_Source_SideRunner_SpawnLevel_h_11_PROLOG
#define SideRunner_Source_SideRunner_SpawnLevel_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideRunner_Source_SideRunner_SpawnLevel_h_14_PRIVATE_PROPERTY_OFFSET \
	SideRunner_Source_SideRunner_SpawnLevel_h_14_SPARSE_DATA \
	SideRunner_Source_SideRunner_SpawnLevel_h_14_RPC_WRAPPERS \
	SideRunner_Source_SideRunner_SpawnLevel_h_14_INCLASS \
	SideRunner_Source_SideRunner_SpawnLevel_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideRunner_Source_SideRunner_SpawnLevel_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideRunner_Source_SideRunner_SpawnLevel_h_14_PRIVATE_PROPERTY_OFFSET \
	SideRunner_Source_SideRunner_SpawnLevel_h_14_SPARSE_DATA \
	SideRunner_Source_SideRunner_SpawnLevel_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SideRunner_Source_SideRunner_SpawnLevel_h_14_INCLASS_NO_PURE_DECLS \
	SideRunner_Source_SideRunner_SpawnLevel_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDERUNNER_API UClass* StaticClass<class ASpawnLevel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideRunner_Source_SideRunner_SpawnLevel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
