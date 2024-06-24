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
	 * 		Name   -> Function BP_Radar_SA.BP_Radar_SA_C.TurnOnCastShadow
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Radar_SA_C::TurnOnCastShadow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Radar_SA.BP_Radar_SA_C.TurnOnCastShadow");
		
		ABP_Radar_SA_C_TurnOnCastShadow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Radar_SA.BP_Radar_SA_C.FetchRadarComponents
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UPrimitiveComponent*>                 Components                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_Radar_SA_C::FetchRadarComponents(TArray<class UPrimitiveComponent*>* Components)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Radar_SA.BP_Radar_SA_C.FetchRadarComponents");
		
		ABP_Radar_SA_C_FetchRadarComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Radar_SA.BP_Radar_SA_C.GetReferencePoints
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     MinRef                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     MaxRef                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Radar_SA_C::GetReferencePoints(struct FVector* MinRef, struct FVector* MaxRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Radar_SA.BP_Radar_SA_C.GetReferencePoints");
		
		ABP_Radar_SA_C_GetReferencePoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinRef != nullptr)
			*MinRef = params.MinRef;
		if (MaxRef != nullptr)
			*MaxRef = params.MaxRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Radar_SA.BP_Radar_SA_C.GetRadarComponents
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UPrimitiveComponent*>                 RadarComps                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_Radar_SA_C::GetRadarComponents(TArray<class UPrimitiveComponent*>* RadarComps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Radar_SA.BP_Radar_SA_C.GetRadarComponents");
		
		ABP_Radar_SA_C_GetRadarComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RadarComps != nullptr)
			*RadarComps = params.RadarComps;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Radar_SA.BP_Radar_SA_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Radar_SA_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Radar_SA.BP_Radar_SA_C.ReceiveBeginPlay");
		
		ABP_Radar_SA_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Radar_SA.BP_Radar_SA_C.SwitchedMode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bMenuMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Radar_SA_C::SwitchedMode(bool bMenuMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Radar_SA.BP_Radar_SA_C.SwitchedMode");
		
		ABP_Radar_SA_C_SwitchedMode_Params params {};
		params.bMenuMode = bMenuMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Radar_SA.BP_Radar_SA_C.ExecuteUbergraph_BP_Radar_SA
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Radar_SA_C::ExecuteUbergraph_BP_Radar_SA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Radar_SA.BP_Radar_SA_C.ExecuteUbergraph_BP_Radar_SA");
		
		ABP_Radar_SA_C_ExecuteUbergraph_BP_Radar_SA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Radar_SA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Radar_SA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Radar_SA.BP_Radar_SA_C");
		return ptr;
	}

}


