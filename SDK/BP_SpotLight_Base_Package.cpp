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
	 * 		Name   -> Function BP_SpotLight_Base.BP_SpotLight_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_SpotLight_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpotLight_Base.BP_SpotLight_Base_C.ReceiveBeginPlay");
		
		ABP_SpotLight_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_SpotLight_Base.BP_SpotLight_Base_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpotLight_Base_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpotLight_Base.BP_SpotLight_Base_C.ReceiveEndPlay");
		
		ABP_SpotLight_Base_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_SpotLight_Base.BP_SpotLight_Base_C.ExecuteUbergraph_BP_SpotLight_Base
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpotLight_Base_C::ExecuteUbergraph_BP_SpotLight_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpotLight_Base.BP_SpotLight_Base_C.ExecuteUbergraph_BP_SpotLight_Base");
		
		ABP_SpotLight_Base_C_ExecuteUbergraph_BP_SpotLight_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SpotLight_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SpotLight_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpotLight_Base.BP_SpotLight_Base_C");
		return ptr;
	}

}


