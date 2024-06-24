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
	 * 		Name   -> Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.SetFootprintAlpha
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Mesh_Section                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BloodyFootprint_Base_C::SetFootprintAlpha(int32_t Mesh_Section, float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.SetFootprintAlpha");
		
		ABP_BloodyFootprint_Base_C_SetFootprintAlpha_Params params {};
		params.Mesh_Section = Mesh_Section;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.OnFootprintTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            MeshSection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Lifetime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BloodyFootprint_Base_C::OnFootprintTick(int32_t MeshSection, float Lifetime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.OnFootprintTick");
		
		ABP_BloodyFootprint_Base_C_OnFootprintTick_Params params {};
		params.MeshSection = MeshSection;
		params.Lifetime = Lifetime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.OnFootprintAdded
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            MeshSection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BloodyFootprint_Base_C::OnFootprintAdded(int32_t MeshSection, float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.OnFootprintAdded");
		
		ABP_BloodyFootprint_Base_C_OnFootprintAdded_Params params {};
		params.MeshSection = MeshSection;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.ExecuteUbergraph_BP_BloodyFootprint_Base
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BloodyFootprint_Base_C::ExecuteUbergraph_BP_BloodyFootprint_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.ExecuteUbergraph_BP_BloodyFootprint_Base");
		
		ABP_BloodyFootprint_Base_C_ExecuteUbergraph_BP_BloodyFootprint_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BloodyFootprint_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BloodyFootprint_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C");
		return ptr;
	}

}


