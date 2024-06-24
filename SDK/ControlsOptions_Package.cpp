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
	 * 		Name   -> Function ControlsOptions.ControlsOptions_C.SetFocusToFirstEntry
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UControlsOptions_C::SetFocusToFirstEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.SetFocusToFirstEntry");
		
		UControlsOptions_C_SetFocusToFirstEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ControlsOptions.ControlsOptions_C.HandleBack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UControlsOptions_C::HandleBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.HandleBack");
		
		UControlsOptions_C_HandleBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ControlsOptions.ControlsOptions_C.RemoveAdjustableControlsUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UControlsOptions_C::RemoveAdjustableControlsUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.RemoveAdjustableControlsUI");
		
		UControlsOptions_C_RemoveAdjustableControlsUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ControlsOptions.ControlsOptions_C.AdjustableControlsBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      Interaction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlsOptions_C::AdjustableControlsBack(unsigned char Interaction, int32_t BoundValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.AdjustableControlsBack");
		
		UControlsOptions_C_AdjustableControlsBack_Params params {};
		params.Interaction = Interaction;
		params.BoundValue = BoundValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ControlsOptions.ControlsOptions_C.CreateAdjustableControlsUI
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UControlsOptions_C::CreateAdjustableControlsUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.CreateAdjustableControlsUI");
		
		UControlsOptions_C_CreateAdjustableControlsUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ControlsOptions.ControlsOptions_C.RunSlotButtonFunction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlsOptions_C::RunSlotButtonFunction(const class FName& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.RunSlotButtonFunction");
		
		UControlsOptions_C_RunSlotButtonFunction_Params params {};
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ControlsOptions.ControlsOptions_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UControlsOptions_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.Construct");
		
		UControlsOptions_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ControlsOptions.ControlsOptions_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlsOptions_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.Tick");
		
		UControlsOptions_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ControlsOptions.ControlsOptions_C.RefreshAdjustableControls
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UControlsOptions_C::RefreshAdjustableControls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.RefreshAdjustableControls");
		
		UControlsOptions_C_RefreshAdjustableControls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ControlsOptions.ControlsOptions_C.ExecuteUbergraph_ControlsOptions
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlsOptions_C::ExecuteUbergraph_ControlsOptions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.ExecuteUbergraph_ControlsOptions");
		
		UControlsOptions_C_ExecuteUbergraph_ControlsOptions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlsOptions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlsOptions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ControlsOptions.ControlsOptions_C");
		return ptr;
	}

}


