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
	 * 		Name   -> Function BP_PointLight_Exterior.BP_PointLight_Exterior_C.GetCoronaColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	struct FColor ABP_PointLight_Exterior_C::GetCoronaColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PointLight_Exterior.BP_PointLight_Exterior_C.GetCoronaColor");
		
		ABP_PointLight_Exterior_C_GetCoronaColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PointLight_Exterior_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PointLight_Exterior_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PointLight_Exterior.BP_PointLight_Exterior_C");
		return ptr;
	}

}


