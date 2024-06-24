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
	 * 		Name   -> Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.ProcessCheckpointType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECheckpointType                                    CheckpointType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Marker_Cylinder_C::ProcessCheckpointType(ECheckpointType CheckpointType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.ProcessCheckpointType");
		
		ABP_Marker_Cylinder_C_ProcessCheckpointType_Params params {};
		params.CheckpointType = CheckpointType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Marker_Cylinder_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.ReceiveTick");
		
		ABP_Marker_Cylinder_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Marker_Cylinder_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.ReceiveBeginPlay");
		
		ABP_Marker_Cylinder_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.SetMarkerColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FColor                                      withColor                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Marker_Cylinder_C::SetMarkerColor(const struct FColor& withColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.SetMarkerColor");
		
		ABP_Marker_Cylinder_C_SetMarkerColor_Params params {};
		params.withColor = withColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.ExecuteUbergraph_BP_Marker_Cylinder
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Marker_Cylinder_C::ExecuteUbergraph_BP_Marker_Cylinder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.ExecuteUbergraph_BP_Marker_Cylinder");
		
		ABP_Marker_Cylinder_C_ExecuteUbergraph_BP_Marker_Cylinder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Marker_Cylinder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Marker_Cylinder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Marker_Cylinder.BP_Marker_Cylinder_C");
		return ptr;
	}

}


