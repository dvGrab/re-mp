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
	 * 		Name   -> Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.ForceDialogClose
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ConfirmationDialog_Controller_C::ForceDialogClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.ForceDialogClose");
		
		UUI_ConfirmationDialog_Controller_C_ForceDialogClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.ForceDialogCancel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ConfirmationDialog_Controller_C::ForceDialogCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.ForceDialogCancel");
		
		UUI_ConfirmationDialog_Controller_C_ForceDialogCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.OnSelectionPicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Confirmed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               WasForced                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ConfirmationDialog_Controller_C::OnSelectionPicked(bool Confirmed, bool WasForced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.OnSelectionPicked");
		
		UUI_ConfirmationDialog_Controller_C_OnSelectionPicked_Params params {};
		params.Confirmed = Confirmed;
		params.WasForced = WasForced;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ConfirmationDialog_Controller_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.PreConstruct");
		
		UUI_ConfirmationDialog_Controller_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_ConfirmationDialog_Controller_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.Construct");
		
		UUI_ConfirmationDialog_Controller_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ConfirmationDialog_Controller_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.Tick");
		
		UUI_ConfirmationDialog_Controller_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.ExecuteUbergraph_UI_ConfirmationDialog_Controller
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ConfirmationDialog_Controller_C::ExecuteUbergraph_UI_ConfirmationDialog_Controller(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.ExecuteUbergraph_UI_ConfirmationDialog_Controller");
		
		UUI_ConfirmationDialog_Controller_C_ExecuteUbergraph_UI_ConfirmationDialog_Controller_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ConfirmationDialog_Controller_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ConfirmationDialog_Controller_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C");
		return ptr;
	}

}


