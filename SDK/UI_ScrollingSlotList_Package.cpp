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
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnOptionPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_SlotButton_C*                            PressedButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScrollingSlotList_C::OnOptionPressed(class UUI_SlotButton_C* PressedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnOptionPressed");
		
		UUI_ScrollingSlotList_C_OnOptionPressed_Params params {};
		params.PressedButton = PressedButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetVersionText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ScrollingSlotList_C::SetVersionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetVersionText");
		
		UUI_ScrollingSlotList_C_SetVersionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnMouseWheel
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUI_ScrollingSlotList_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnMouseWheel");
		
		UUI_ScrollingSlotList_C_OnMouseWheel_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUI_ScrollingSlotList_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnMouseButtonDown");
		
		UUI_ScrollingSlotList_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnMouseMove
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUI_ScrollingSlotList_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnMouseMove");
		
		UUI_ScrollingSlotList_C_OnMouseMove_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.UpdateControllerFocusVisability
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ScrollingSlotList_C::UpdateControllerFocusVisability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.UpdateControllerFocusVisability");
		
		UUI_ScrollingSlotList_C_UpdateControllerFocusVisability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.IsCurrentInputController
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UUI_ScrollingSlotList_C::IsCurrentInputController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.IsCurrentInputController");
		
		UUI_ScrollingSlotList_C_IsCurrentInputController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.FocusSpecificSlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               WasValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_SlotButton_C*                            SelectedSlotButton                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScrollingSlotList_C::FocusSpecificSlot(int32_t SlotIndex, bool* WasValid, class UUI_SlotButton_C** SelectedSlotButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.FocusSpecificSlot");
		
		UUI_ScrollingSlotList_C_FocusSpecificSlot_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WasValid != nullptr)
			*WasValid = params.WasValid;
		if (SelectedSlotButton != nullptr)
			*SelectedSlotButton = params.SelectedSlotButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.GrabSpecificOptionFocus
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        PropertyName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     FocusedWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScrollingSlotList_C::GrabSpecificOptionFocus(const class FName& PropertyName, class UWidget** FocusedWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.GrabSpecificOptionFocus");
		
		UUI_ScrollingSlotList_C_GrabSpecificOptionFocus_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FocusedWidget != nullptr)
			*FocusedWidget = params.FocusedWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.ClearSlotList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ScrollingSlotList_C::ClearSlotList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.ClearSlotList");
		
		UUI_ScrollingSlotList_C_ClearSlotList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetFocusToFirstEntry
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ScrollingSlotList_C::SetFocusToFirstEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetFocusToFirstEntry");
		
		UUI_ScrollingSlotList_C_SetFocusToFirstEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetupNavigation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ScrollingSlotList_C::SetupNavigation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetupNavigation");
		
		UUI_ScrollingSlotList_C_SetupNavigation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.Grab Slot Focus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceIgnoreSound                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_SlotButton_C*                            SelectedSlotButton                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScrollingSlotList_C::Grab_Slot_Focus(bool ForceIgnoreSound, class UUI_SlotButton_C** SelectedSlotButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.Grab Slot Focus");
		
		UUI_ScrollingSlotList_C_Grab_Slot_Focus_Params params {};
		params.ForceIgnoreSound = ForceIgnoreSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedSlotButton != nullptr)
			*SelectedSlotButton = params.SelectedSlotButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.UpdateFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ScrollingSlotList_C::UpdateFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.UpdateFocus");
		
		UUI_ScrollingSlotList_C_UpdateFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.UpdateSelectedSlot
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_SlotButton_C*                            SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FromHover                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ScrollingSlotList_C::UpdateSelectedSlot(class UUI_SlotButton_C* SelectedItem, bool FromHover)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.UpdateSelectedSlot");
		
		UUI_ScrollingSlotList_C_UpdateSelectedSlot_Params params {};
		params.SelectedItem = SelectedItem;
		params.FromHover = FromHover;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ScrollingSlotList_C::SetMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetMenu");
		
		UUI_ScrollingSlotList_C_SetMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.AddSlotItem
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_SlotButton_C*                            Slot_Item                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGTAOptionsItemTemplate                     Options                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UGameterSettings*                            SettingsObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScrollingSlotList_C::AddSlotItem(class UUI_SlotButton_C* Slot_Item, const struct FGTAOptionsItemTemplate& Options, class UGameterSettings* SettingsObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.AddSlotItem");
		
		UUI_ScrollingSlotList_C_AddSlotItem_Params params {};
		params.Slot_Item = Slot_Item;
		params.Options = Options;
		params.SettingsObject = SettingsObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.CreateScrollingListItems
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DEBUG_ALL_ITEMS                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ScrollingSlotList_C::CreateScrollingListItems(bool DEBUG_ALL_ITEMS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.CreateScrollingListItems");
		
		UUI_ScrollingSlotList_C_CreateScrollingListItems_Params params {};
		params.DEBUG_ALL_ITEMS = DEBUG_ALL_ITEMS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.ScrollingList Init
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ScrollingSlotList_C::ScrollingList_Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.ScrollingList Init");
		
		UUI_ScrollingSlotList_C_ScrollingList_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_ScrollingSlotList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.Construct");
		
		UUI_ScrollingSlotList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnSynchronizeProperties
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_ScrollingSlotList_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnSynchronizeProperties");
		
		UUI_ScrollingSlotList_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScrollingSlotList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.Tick");
		
		UUI_ScrollingSlotList_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.DelayedSetFocusToFirst
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ScrollingSlotList_C::DelayedSetFocusToFirst()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.DelayedSetFocusToFirst");
		
		UUI_ScrollingSlotList_C_DelayedSetFocusToFirst_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SlotButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_SlotButton_C*                            ButtonSentFrom                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScrollingSlotList_C::SlotButtonPressed(unsigned char InteractionType, int32_t BoundValue, class UUI_SlotButton_C* ButtonSentFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SlotButtonPressed");
		
		UUI_ScrollingSlotList_C_SlotButtonPressed_Params params {};
		params.InteractionType = InteractionType;
		params.BoundValue = BoundValue;
		params.ButtonSentFrom = ButtonSentFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.ExecuteUbergraph_UI_ScrollingSlotList
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScrollingSlotList_C::ExecuteUbergraph_UI_ScrollingSlotList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.ExecuteUbergraph_UI_ScrollingSlotList");
		
		UUI_ScrollingSlotList_C_ExecuteUbergraph_UI_ScrollingSlotList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnDeselectedTab__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ScrollingSlotList_C::OnDeselectedTab__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnDeselectedTab__DelegateSignature");
		
		UUI_ScrollingSlotList_C_OnDeselectedTab__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnSelectedTab__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_ScrollingSlotList_C::OnSelectedTab__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnSelectedTab__DelegateSignature");
		
		UUI_ScrollingSlotList_C_OnSelectedTab__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ScrollingSlotList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ScrollingSlotList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ScrollingSlotList.UI_ScrollingSlotList_C");
		return ptr;
	}

}


