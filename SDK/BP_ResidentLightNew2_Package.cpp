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
	 * 		Name   -> Function BP_ResidentLightNew2.BP_ResidentLightNew2_C.ChangedLightSwitch
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bOn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsEditor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ResidentLightNew2_C::ChangedLightSwitch(bool bOn, bool bIsEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResidentLightNew2.BP_ResidentLightNew2_C.ChangedLightSwitch");
		
		ABP_ResidentLightNew2_C_ChangedLightSwitch_Params params {};
		params.bOn = bOn;
		params.bIsEditor = bIsEditor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_ResidentLightNew2.BP_ResidentLightNew2_C.ExecuteUbergraph_BP_ResidentLightNew2
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ResidentLightNew2_C::ExecuteUbergraph_BP_ResidentLightNew2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ResidentLightNew2.BP_ResidentLightNew2_C.ExecuteUbergraph_BP_ResidentLightNew2");
		
		ABP_ResidentLightNew2_C_ExecuteUbergraph_BP_ResidentLightNew2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ResidentLightNew2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ResidentLightNew2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ResidentLightNew2.BP_ResidentLightNew2_C");
		return ptr;
	}

}


