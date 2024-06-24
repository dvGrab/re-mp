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
	 * 		Name   -> Function BP_RotatingColoredSpotLight.BP_RotatingColoredSpotLight_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_RotatingColoredSpotLight_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RotatingColoredSpotLight.BP_RotatingColoredSpotLight_C.ReceiveBeginPlay");
		
		UBP_RotatingColoredSpotLight_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_RotatingColoredSpotLight.BP_RotatingColoredSpotLight_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RotatingColoredSpotLight_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RotatingColoredSpotLight.BP_RotatingColoredSpotLight_C.ReceiveTick");
		
		UBP_RotatingColoredSpotLight_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_RotatingColoredSpotLight.BP_RotatingColoredSpotLight_C.ExecuteUbergraph_BP_RotatingColoredSpotLight
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RotatingColoredSpotLight_C::ExecuteUbergraph_BP_RotatingColoredSpotLight(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RotatingColoredSpotLight.BP_RotatingColoredSpotLight_C.ExecuteUbergraph_BP_RotatingColoredSpotLight");
		
		UBP_RotatingColoredSpotLight_C_ExecuteUbergraph_BP_RotatingColoredSpotLight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RotatingColoredSpotLight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RotatingColoredSpotLight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RotatingColoredSpotLight.BP_RotatingColoredSpotLight_C");
		return ptr;
	}

}


