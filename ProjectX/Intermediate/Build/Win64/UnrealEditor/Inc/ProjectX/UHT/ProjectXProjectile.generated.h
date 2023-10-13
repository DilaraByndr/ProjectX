// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectXProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROJECTX_ProjectXProjectile_generated_h
#error "ProjectXProjectile.generated.h already included, missing '#pragma once' in ProjectXProjectile.h"
#endif
#define PROJECTX_ProjectXProjectile_generated_h

#define FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_SPARSE_DATA
#define FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_ACCESSORS
#define FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectXProjectile(); \
	friend struct Z_Construct_UClass_AProjectXProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectXProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectX"), NO_API) \
	DECLARE_SERIALIZER(AProjectXProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAProjectXProjectile(); \
	friend struct Z_Construct_UClass_AProjectXProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectXProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectX"), NO_API) \
	DECLARE_SERIALIZER(AProjectXProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectXProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectXProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectXProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectXProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectXProjectile(AProjectXProjectile&&); \
	NO_API AProjectXProjectile(const AProjectXProjectile&); \
public: \
	NO_API virtual ~AProjectXProjectile();


#define FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectXProjectile(AProjectXProjectile&&); \
	NO_API AProjectXProjectile(const AProjectXProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectXProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectXProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectXProjectile) \
	NO_API virtual ~AProjectXProjectile();


#define FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_12_PROLOG
#define FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_SPARSE_DATA \
	FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_RPC_WRAPPERS \
	FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_ACCESSORS \
	FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_INCLASS \
	FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_SPARSE_DATA \
	FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_ACCESSORS \
	FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTX_API UClass* StaticClass<class AProjectXProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_asliceren_Desktop_ProjectX_Source_ProjectX_ProjectXProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
