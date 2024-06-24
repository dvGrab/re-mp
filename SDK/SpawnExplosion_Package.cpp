/**
 * Name: GTASA
 * Version: 0.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SpawnExplosion.SpawnExplosion_C.GetInvScale
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     InScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InvScale                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnExplosion_C::STATIC_GetInvScale(const struct FVector& InScale, class UObject* __WorldContext, struct FVector* InvScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnExplosion.SpawnExplosion_C.GetInvScale");
		
		USpawnExplosion_C_GetInvScale_Params params {};
		params.InScale = InScale;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InvScale != nullptr)
			*InvScale = params.InvScale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SpawnExplosion.SpawnExplosion_C.SetupSpawnedExplosion
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AGTAExplosion*                               Explosion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ExplodingActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticleSystem*                             DebrisTemplate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuppressLight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnExplosion_C::STATIC_SetupSpawnedExplosion(class AGTAExplosion* Explosion, class AActor* ExplodingActor, class UParticleSystem* DebrisTemplate, bool bSuppressLight, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnExplosion.SpawnExplosion_C.SetupSpawnedExplosion");
		
		USpawnExplosion_C_SetupSpawnedExplosion_Params params {};
		params.Explosion = Explosion;
		params.ExplodingActor = ExplodingActor;
		params.DebrisTemplate = DebrisTemplate;
		params.bSuppressLight = bSuppressLight;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SpawnExplosion.SpawnExplosion_C.DetermineExplosionTransform
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Normal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ExplodingActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Trx                                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void USpawnExplosion_C::STATIC_DetermineExplosionTransform(const struct FVector& Location, const struct FVector& Normal, float Scale, class AActor* ExplodingActor, class UObject* __WorldContext, struct FTransform* Trx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnExplosion.SpawnExplosion_C.DetermineExplosionTransform");
		
		USpawnExplosion_C_DetermineExplosionTransform_Params params {};
		params.Location = Location;
		params.Normal = Normal;
		params.Scale = Scale;
		params.ExplodingActor = ExplodingActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Trx != nullptr)
			*Trx = params.Trx;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SpawnExplosion.SpawnExplosion_C.Get Explosion to Spawn
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTAExplosionType                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGTAExplosionSurface                               Surface                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ExplodingActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticleSystem*                             DebrisParticle                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnExplosion_C::STATIC_Get_Explosion_to_Spawn(EGTAExplosionType Type, EGTAExplosionSurface Surface, class AActor* ExplodingActor, class UObject* __WorldContext, class UClass** Actor, class UParticleSystem** DebrisParticle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnExplosion.SpawnExplosion_C.Get Explosion to Spawn");
		
		USpawnExplosion_C_Get_Explosion_to_Spawn_Params params {};
		params.Type = Type;
		params.Surface = Surface;
		params.ExplodingActor = ExplodingActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
		if (DebrisParticle != nullptr)
			*DebrisParticle = params.DebrisParticle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnExplosion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnExplosion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpawnExplosion.SpawnExplosion_C");
		return ptr;
	}

}


