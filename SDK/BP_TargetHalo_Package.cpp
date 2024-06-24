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
	 * 		Name   -> Function BP_TargetHalo.BP_TargetHalo_C.UpdateTargetComponent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMeshComponent*                              Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETargetHighlightType                               HighlightType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TargetHalo_C::UpdateTargetComponent(class UMeshComponent* Component, ETargetHighlightType HighlightType, float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TargetHalo.BP_TargetHalo_C.UpdateTargetComponent");
		
		ABP_TargetHalo_C_UpdateTargetComponent_Params params {};
		params.Component = Component;
		params.HighlightType = HighlightType;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_TargetHalo.BP_TargetHalo_C.SetupTargetComponent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMeshComponent*                              Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETargetHighlightType                               HighlightType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InitialAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TargetHalo_C::SetupTargetComponent(class UMeshComponent* Component, ETargetHighlightType HighlightType, float InitialAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TargetHalo.BP_TargetHalo_C.SetupTargetComponent");
		
		ABP_TargetHalo_C_SetupTargetComponent_Params params {};
		params.Component = Component;
		params.HighlightType = HighlightType;
		params.InitialAlpha = InitialAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TargetHalo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TargetHalo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TargetHalo.BP_TargetHalo_C");
		return ptr;
	}

}


