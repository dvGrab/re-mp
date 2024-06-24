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
	 * 		Name   -> Function BP_VertexBaked_Prop.BP_VertexBaked_Prop_C.ShouldForceInstanceBakedColors
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool ABP_VertexBaked_Prop_C::ShouldForceInstanceBakedColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VertexBaked_Prop.BP_VertexBaked_Prop_C.ShouldForceInstanceBakedColors");
		
		ABP_VertexBaked_Prop_C_ShouldForceInstanceBakedColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_VertexBaked_Prop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VertexBaked_Prop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VertexBaked_Prop.BP_VertexBaked_Prop_C");
		return ptr;
	}

}


