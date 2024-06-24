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
	 * 		Name   -> Function BPF_ConstructScalability.BPF_ConstructScalability_C.GetScalabilityClass
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AGTAWorldSettings*                           WorldSettings                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ReturnClass                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPF_ConstructScalability_C::STATIC_GetScalabilityClass(class AGTAWorldSettings* WorldSettings, class UObject* __WorldContext, class UClass** ReturnClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPF_ConstructScalability.BPF_ConstructScalability_C.GetScalabilityClass");
		
		UBPF_ConstructScalability_C_GetScalabilityClass_Params params {};
		params.WorldSettings = WorldSettings;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnClass != nullptr)
			*ReturnClass = params.ReturnClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPF_ConstructScalability_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPF_ConstructScalability_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPF_ConstructScalability.BPF_ConstructScalability_C");
		return ptr;
	}

}


