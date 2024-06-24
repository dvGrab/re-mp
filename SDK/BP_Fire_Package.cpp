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
	 * 		Name   -> Function BP_Fire.BP_Fire_C.GetSystem
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             System                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Fire_C::GetSystem(class UParticleSystem** System, float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fire.BP_Fire_C.GetSystem");
		
		ABP_Fire_C_GetSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (System != nullptr)
			*System = params.System;
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Fire.BP_Fire_C.Extinguish
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_Fire_C::Extinguish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fire.BP_Fire_C.Extinguish");
		
		ABP_Fire_C_Extinguish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Fire.BP_Fire_C.BndEvt__FX_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    PSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Fire_C::BndEvt__FX_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fire.BP_Fire_C.BndEvt__FX_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature");
		
		ABP_Fire_C_BndEvt__FX_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature_Params params {};
		params.PSystem = PSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Fire.BP_Fire_C.KillAgain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Fire_C::KillAgain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fire.BP_Fire_C.KillAgain");
		
		ABP_Fire_C_KillAgain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Fire.BP_Fire_C.ExecuteUbergraph_BP_Fire
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Fire_C::ExecuteUbergraph_BP_Fire(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fire.BP_Fire_C.ExecuteUbergraph_BP_Fire");
		
		ABP_Fire_C_ExecuteUbergraph_BP_Fire_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Fire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Fire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Fire.BP_Fire_C");
		return ptr;
	}

}


