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
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.SetupButtonNavigation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmationDialog_C::SetupButtonNavigation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.SetupButtonNavigation");
		
		UConfirmationDialog_C_SetupButtonNavigation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.ForceDialogClose
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmationDialog_C::ForceDialogClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.ForceDialogClose");
		
		UConfirmationDialog_C_ForceDialogClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.OnSelectionHovered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmationDialog_C::OnSelectionHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.OnSelectionHovered");
		
		UConfirmationDialog_C_OnSelectionHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.OnSelectionPicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Confirmed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               WasForced                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfirmationDialog_C::OnSelectionPicked(bool Confirmed, bool WasForced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.OnSelectionPicked");
		
		UConfirmationDialog_C_OnSelectionPicked_Params params {};
		params.Confirmed = Confirmed;
		params.WasForced = WasForced;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.IsUsingController
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UConfirmationDialog_C::IsUsingController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.IsUsingController");
		
		UConfirmationDialog_C_IsUsingController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.UpdateControllerFocus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmationDialog_C::UpdateControllerFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.UpdateControllerFocus");
		
		UConfirmationDialog_C_UpdateControllerFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.ForceDialogCancel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmationDialog_C::ForceDialogCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.ForceDialogCancel");
		
		UConfirmationDialog_C_ForceDialogCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.InitButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FJoinedButtonTemplateModifiers              ButtonStyle                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UUI_Button_Base_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfirmationDialog_C::InitButton(const struct FJoinedButtonTemplateModifiers& ButtonStyle, class UUI_Button_Base_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.InitButton");
		
		UConfirmationDialog_C_InitButton_Params params {};
		params.ButtonStyle = ButtonStyle;
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.GrabFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmationDialog_C::GrabFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.GrabFocus");
		
		UConfirmationDialog_C_GrabFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.InitConfirmationDialog
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmationDialog_C::InitConfirmationDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.InitConfirmationDialog");
		
		UConfirmationDialog_C_InitConfirmationDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.SetTextValues
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ConfirmText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        CancelText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               ShouldRemoveCancel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfirmationDialog_C::SetTextValues(const class FText& Message, const class FText& ConfirmText, const class FText& CancelText, bool ShouldRemoveCancel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.SetTextValues");
		
		UConfirmationDialog_C_SetTextValues_Params params {};
		params.Message = Message;
		params.ConfirmText = ConfirmText;
		params.CancelText = CancelText;
		params.ShouldRemoveCancel = ShouldRemoveCancel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UConfirmationDialog_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.Construct");
		
		UConfirmationDialog_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.OnSynchronizeProperties
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UConfirmationDialog_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.OnSynchronizeProperties");
		
		UConfirmationDialog_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      Interaction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfirmationDialog_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature(unsigned char Interaction, int32_t BoundValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature");
		
		UConfirmationDialog_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature_Params params {};
		params.Interaction = Interaction;
		params.BoundValue = BoundValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      Interaction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfirmationDialog_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature(unsigned char Interaction, int32_t BoundValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature");
		
		UConfirmationDialog_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature_Params params {};
		params.Interaction = Interaction;
		params.BoundValue = BoundValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.ForceButtonsSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmationDialog_C::ForceButtonsSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.ForceButtonsSelected");
		
		UConfirmationDialog_C_ForceButtonsSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.ForceButtonsHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmationDialog_C::ForceButtonsHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.ForceButtonsHovered");
		
		UConfirmationDialog_C_ForceButtonsHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.ForceButtonsNormal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UConfirmationDialog_C::ForceButtonsNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.ForceButtonsNormal");
		
		UConfirmationDialog_C_ForceButtonsNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfirmationDialog_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.Tick");
		
		UConfirmationDialog_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.ExecuteUbergraph_ConfirmationDialog
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfirmationDialog_C::ExecuteUbergraph_ConfirmationDialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.ExecuteUbergraph_ConfirmationDialog");
		
		UConfirmationDialog_C_ExecuteUbergraph_ConfirmationDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.ConfirmationCallback__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DidAccept                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfirmationDialog_C::ConfirmationCallback__DelegateSignature(bool DidAccept)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.ConfirmationCallback__DelegateSignature");
		
		UConfirmationDialog_C_ConfirmationCallback__DelegateSignature_Params params {};
		params.DidAccept = DidAccept;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConfirmationDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConfirmationDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConfirmationDialog.ConfirmationDialog_C");
		return ptr;
	}

}


