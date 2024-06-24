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
	 * 		Name   -> Function BP_BridgeLight.BP_BridgeLight_C.GetCoronaColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	struct FColor ABP_BridgeLight_C::GetCoronaColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BridgeLight.BP_BridgeLight_C.GetCoronaColor");
		
		ABP_BridgeLight_C_GetCoronaColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BridgeLight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BridgeLight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BridgeLight.BP_BridgeLight_C");
		return ptr;
	}

}


