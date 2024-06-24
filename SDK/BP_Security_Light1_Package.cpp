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
	 * 		Name   -> Function BP_Security_Light1.BP_Security_Light1_C.ChangedLightSwitch
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bOn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsEditor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Security_Light1_C::ChangedLightSwitch(bool bOn, bool bIsEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Security_Light1.BP_Security_Light1_C.ChangedLightSwitch");
		
		ABP_Security_Light1_C_ChangedLightSwitch_Params params {};
		params.bOn = bOn;
		params.bIsEditor = bIsEditor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Security_Light1.BP_Security_Light1_C.ExecuteUbergraph_BP_Security_Light1
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Security_Light1_C::ExecuteUbergraph_BP_Security_Light1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Security_Light1.BP_Security_Light1_C.ExecuteUbergraph_BP_Security_Light1");
		
		ABP_Security_Light1_C_ExecuteUbergraph_BP_Security_Light1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Security_Light1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Security_Light1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Security_Light1.BP_Security_Light1_C");
		return ptr;
	}

}


