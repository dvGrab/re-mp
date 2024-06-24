/**
 * Name: GTA-SA-DEF
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
	 * 		Name   -> Function BP_lamotsig2_la.BP_lamotsig2_la_C.GetLights
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class ULocalLightComponent*>                Light                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_lamotsig2_la_C::GetLights(TArray<class ULocalLightComponent*>* Light)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_lamotsig2_la.BP_lamotsig2_la_C.GetLights");
		
		ABP_lamotsig2_la_C_GetLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Light != nullptr)
			*Light = params.Light;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_lamotsig2_la_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_lamotsig2_la_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_lamotsig2_la.BP_lamotsig2_la_C");
		return ptr;
	}

}


