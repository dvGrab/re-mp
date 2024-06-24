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
	 * 		Name   -> Function BP_Streetlight_Spot.BP_Streetlight_Spot_C.GetLights
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class ULocalLightComponent*>                Light                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_Streetlight_Spot_C::GetLights(TArray<class ULocalLightComponent*>* Light)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Streetlight_Spot.BP_Streetlight_Spot_C.GetLights");
		
		ABP_Streetlight_Spot_C_GetLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Light != nullptr)
			*Light = params.Light;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Streetlight_Spot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Streetlight_Spot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Streetlight_Spot.BP_Streetlight_Spot_C");
		return ptr;
	}

}


