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
	 * 		Name   -> Function AdjustableControls_ListeningDialog.AdjustableControls_ListeningDialog_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UAdjustableControls_ListeningDialog_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdjustableControls_ListeningDialog.AdjustableControls_ListeningDialog_C.Construct");
		
		UAdjustableControls_ListeningDialog_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function AdjustableControls_ListeningDialog.AdjustableControls_ListeningDialog_C.OnSynchronizeProperties
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAdjustableControls_ListeningDialog_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdjustableControls_ListeningDialog.AdjustableControls_ListeningDialog_C.OnSynchronizeProperties");
		
		UAdjustableControls_ListeningDialog_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function AdjustableControls_ListeningDialog.AdjustableControls_ListeningDialog_C.ExecuteUbergraph_AdjustableControls_ListeningDialog
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAdjustableControls_ListeningDialog_C::ExecuteUbergraph_AdjustableControls_ListeningDialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdjustableControls_ListeningDialog.AdjustableControls_ListeningDialog_C.ExecuteUbergraph_AdjustableControls_ListeningDialog");
		
		UAdjustableControls_ListeningDialog_C_ExecuteUbergraph_AdjustableControls_ListeningDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdjustableControls_ListeningDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdjustableControls_ListeningDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AdjustableControls_ListeningDialog.AdjustableControls_ListeningDialog_C");
		return ptr;
	}

}


