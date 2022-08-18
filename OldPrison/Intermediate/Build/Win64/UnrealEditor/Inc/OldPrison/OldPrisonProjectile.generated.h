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
#ifdef OLDPRISON_OldPrisonProjectile_generated_h
#error "OldPrisonProjectile.generated.h already included, missing '#pragma once' in OldPrisonProjectile.h"
#endif
#define OLDPRISON_OldPrisonProjectile_generated_h

#define FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_15_SPARSE_DATA
#define FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOldPrisonProjectile(); \
	friend struct Z_Construct_UClass_AOldPrisonProjectile_Statics; \
public: \
	DECLARE_CLASS(AOldPrisonProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OldPrison"), NO_API) \
	DECLARE_SERIALIZER(AOldPrisonProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAOldPrisonProjectile(); \
	friend struct Z_Construct_UClass_AOldPrisonProjectile_Statics; \
public: \
	DECLARE_CLASS(AOldPrisonProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OldPrison"), NO_API) \
	DECLARE_SERIALIZER(AOldPrisonProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOldPrisonProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOldPrisonProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOldPrisonProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOldPrisonProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOldPrisonProjectile(AOldPrisonProjectile&&); \
	NO_API AOldPrisonProjectile(const AOldPrisonProjectile&); \
public:


#define FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOldPrisonProjectile(AOldPrisonProjectile&&); \
	NO_API AOldPrisonProjectile(const AOldPrisonProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOldPrisonProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOldPrisonProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOldPrisonProjectile)


#define FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_12_PROLOG
#define FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_15_SPARSE_DATA \
	FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_15_RPC_WRAPPERS \
	FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_15_INCLASS \
	FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_15_SPARSE_DATA \
	FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OLDPRISON_API UClass* StaticClass<class AOldPrisonProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OldPrison_Source_OldPrison_OldPrisonProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
