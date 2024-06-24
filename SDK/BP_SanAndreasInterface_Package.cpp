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
	 * 		Name   -> Function BP_SanAndreasInterface.BP_SanAndreasInterface_C.SpawnExplosion
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGTAExplosionType                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGTAExplosionSurface                               Surface                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SurfaceNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DebrisCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ExplodingActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuppressLight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class AGTAExplosion* UBP_SanAndreasInterface_C::SpawnExplosion(const struct FVector& Location, EGTAExplosionType Type, EGTAExplosionSurface Surface, const struct FVector& SurfaceNormal, float Scale, int32_t DebrisCount, class AActor* ExplodingActor, bool bSuppressLight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SanAndreasInterface.BP_SanAndreasInterface_C.SpawnExplosion");
		
		UBP_SanAndreasInterface_C_SpawnExplosion_Params params {};
		params.Location = Location;
		params.Type = Type;
		params.Surface = Surface;
		params.SurfaceNormal = SurfaceNormal;
		params.Scale = Scale;
		params.DebrisCount = DebrisCount;
		params.ExplodingActor = ExplodingActor;
		params.bSuppressLight = bSuppressLight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_SanAndreasInterface.BP_SanAndreasInterface_C.GetScalabilityClass
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UClass* UBP_SanAndreasInterface_C::GetScalabilityClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SanAndreasInterface.BP_SanAndreasInterface_C.GetScalabilityClass");
		
		UBP_SanAndreasInterface_C_GetScalabilityClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SanAndreasInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SanAndreasInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SanAndreasInterface.BP_SanAndreasInterface_C");
		return ptr;
	}

}


