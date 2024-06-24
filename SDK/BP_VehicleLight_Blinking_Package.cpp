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
	 * 		Name   -> Function BP_VehicleLight_Blinking.BP_VehicleLight_Blinking_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_VehicleLight_Blinking_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleLight_Blinking.BP_VehicleLight_Blinking_C.ReceiveBeginPlay");
		
		UBP_VehicleLight_Blinking_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_VehicleLight_Blinking.BP_VehicleLight_Blinking_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VehicleLight_Blinking_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleLight_Blinking.BP_VehicleLight_Blinking_C.ReceiveTick");
		
		UBP_VehicleLight_Blinking_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_VehicleLight_Blinking.BP_VehicleLight_Blinking_C.ExecuteUbergraph_BP_VehicleLight_Blinking
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VehicleLight_Blinking_C::ExecuteUbergraph_BP_VehicleLight_Blinking(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VehicleLight_Blinking.BP_VehicleLight_Blinking_C.ExecuteUbergraph_BP_VehicleLight_Blinking");
		
		UBP_VehicleLight_Blinking_C_ExecuteUbergraph_BP_VehicleLight_Blinking_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_VehicleLight_Blinking_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_VehicleLight_Blinking_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleLight_Blinking.BP_VehicleLight_Blinking_C");
		return ptr;
	}

}


