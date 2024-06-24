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
	 * 		Name   -> Function BP_GTASA_Tag.BP_GTASA_Tag_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_GTASA_Tag_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GTASA_Tag.BP_GTASA_Tag_C.ReceiveBeginPlay");
		
		ABP_GTASA_Tag_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_GTASA_Tag.BP_GTASA_Tag_C.ExecuteUbergraph_BP_GTASA_Tag
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GTASA_Tag_C::ExecuteUbergraph_BP_GTASA_Tag(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GTASA_Tag.BP_GTASA_Tag_C.ExecuteUbergraph_BP_GTASA_Tag");
		
		ABP_GTASA_Tag_C_ExecuteUbergraph_BP_GTASA_Tag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GTASA_Tag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GTASA_Tag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GTASA_Tag.BP_GTASA_Tag_C");
		return ptr;
	}

}


