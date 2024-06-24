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
	 * 		Name   -> Function BP_SpawnedBreakable.BP_SpawnedBreakable_C.SetupBreakableInGTA
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_SpawnedBreakable_C::SetupBreakableInGTA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpawnedBreakable.BP_SpawnedBreakable_C.SetupBreakableInGTA");
		
		ABP_SpawnedBreakable_C_SetupBreakableInGTA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SpawnedBreakable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SpawnedBreakable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawnedBreakable.BP_SpawnedBreakable_C");
		return ptr;
	}

}


