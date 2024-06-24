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
	 * 		Name   -> Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.UpdateSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ExteriorPostProcess_C::UpdateSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.UpdateSettings");
		
		ABP_ExteriorPostProcess_C_UpdateSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_ExteriorPostProcess_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.ReceiveBeginPlay");
		
		ABP_ExteriorPostProcess_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExteriorPostProcess_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.ReceiveTick");
		
		ABP_ExteriorPostProcess_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.ExecuteUbergraph_BP_ExteriorPostProcess
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExteriorPostProcess_C::ExecuteUbergraph_BP_ExteriorPostProcess(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.ExecuteUbergraph_BP_ExteriorPostProcess");
		
		ABP_ExteriorPostProcess_C_ExecuteUbergraph_BP_ExteriorPostProcess_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ExteriorPostProcess_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ExteriorPostProcess_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExteriorPostProcess.BP_ExteriorPostProcess_C");
		return ptr;
	}

}


