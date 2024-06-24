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
	 * 		Name   -> Function LightningPreset.LightningPreset_C.ApplyOnMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	void ULightningPreset_C::ApplyOnMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LightningPreset.LightningPreset_C.ApplyOnMaterial");
		
		ULightningPreset_C_ApplyOnMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightningPreset_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightningPreset_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightningPreset.LightningPreset_C");
		return ptr;
	}

}


