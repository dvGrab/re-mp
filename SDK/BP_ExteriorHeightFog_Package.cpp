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
	 * 		Name   -> Function BP_ExteriorHeightFog.BP_ExteriorHeightFog_C.TimeChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEditor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ExteriorHeightFog_C::TimeChanged(bool bEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExteriorHeightFog.BP_ExteriorHeightFog_C.TimeChanged");
		
		ABP_ExteriorHeightFog_C_TimeChanged_Params params {};
		params.bEditor = bEditor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_ExteriorHeightFog.BP_ExteriorHeightFog_C.ExecuteUbergraph_BP_ExteriorHeightFog
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExteriorHeightFog_C::ExecuteUbergraph_BP_ExteriorHeightFog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExteriorHeightFog.BP_ExteriorHeightFog_C.ExecuteUbergraph_BP_ExteriorHeightFog");
		
		ABP_ExteriorHeightFog_C_ExecuteUbergraph_BP_ExteriorHeightFog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ExteriorHeightFog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ExteriorHeightFog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExteriorHeightFog.BP_ExteriorHeightFog_C");
		return ptr;
	}

}


