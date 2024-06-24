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
	 * 		Name   -> Function BP_COL_Tree.BP_COL_Tree_C.GetStaticVolumetricStrength
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		float                                              intoAO                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              intoUplight                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_COL_Tree_C::GetStaticVolumetricStrength(float* intoAO, float* intoUplight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_COL_Tree.BP_COL_Tree_C.GetStaticVolumetricStrength");
		
		ABP_COL_Tree_C_GetStaticVolumetricStrength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (intoAO != nullptr)
			*intoAO = params.intoAO;
		if (intoUplight != nullptr)
			*intoUplight = params.intoUplight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_COL_Tree.BP_COL_Tree_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_COL_Tree_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_COL_Tree.BP_COL_Tree_C.ReceiveBeginPlay");
		
		ABP_COL_Tree_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_COL_Tree.BP_COL_Tree_C.ExecuteUbergraph_BP_COL_Tree
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_COL_Tree_C::ExecuteUbergraph_BP_COL_Tree(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_COL_Tree.BP_COL_Tree_C.ExecuteUbergraph_BP_COL_Tree");
		
		ABP_COL_Tree_C_ExecuteUbergraph_BP_COL_Tree_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_COL_Tree_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_COL_Tree_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_COL_Tree.BP_COL_Tree_C");
		return ptr;
	}

}


