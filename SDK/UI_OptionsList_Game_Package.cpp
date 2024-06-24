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
	 * 		Name   -> Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateSaveEntryAndBind
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SaveName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            ValueToBind                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Game_C::CreateSaveEntryAndBind(const class FString& SaveName, int32_t ValueToBind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateSaveEntryAndBind");
		
		UUI_OptionsList_Game_C_CreateSaveEntryAndBind_Params params {};
		params.SaveName = SaveName;
		params.ValueToBind = ValueToBind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Game.UI_OptionsList_Game_C.GetCurrentMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Menu_Base_BP_C*                          OutMenu                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Game_C::GetCurrentMenu(class UUI_Menu_Base_BP_C** OutMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Game.UI_OptionsList_Game_C.GetCurrentMenu");
		
		UUI_OptionsList_Game_C_GetCurrentMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMenu != nullptr)
			*OutMenu = params.OutMenu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Game.UI_OptionsList_Game_C.SaveButtonPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_SlotButton_C*                            SlotButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Game_C::SaveButtonPressed(unsigned char InteractionType, int32_t BoundValue, class UUI_SlotButton_C* SlotButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Game.UI_OptionsList_Game_C.SaveButtonPressed");
		
		UUI_OptionsList_Game_C_SaveButtonPressed_Params params {};
		params.InteractionType = InteractionType;
		params.BoundValue = BoundValue;
		params.SlotButton = SlotButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Game.UI_OptionsList_Game_C.BindSlotButtonToSave
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_SlotButton_C*                            Slot_Button                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ValueToBind                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Game_C::BindSlotButtonToSave(class UUI_SlotButton_C* Slot_Button, int32_t ValueToBind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Game.UI_OptionsList_Game_C.BindSlotButtonToSave");
		
		UUI_OptionsList_Game_C_BindSlotButtonToSave_Params params {};
		params.Slot_Button = Slot_Button;
		params.ValueToBind = ValueToBind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateNewEntry
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGTAOptionsItemTemplate                     Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UGameterSettings*                            SettingsObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsShownBecauseDebug                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_SlotButton_C*                            NewItem                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Game_C::CreateNewEntry(const struct FGTAOptionsItemTemplate& Option, class UGameterSettings* SettingsObject, bool IsShownBecauseDebug, class UUI_SlotButton_C** NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateNewEntry");
		
		UUI_OptionsList_Game_C_CreateNewEntry_Params params {};
		params.Option = Option;
		params.SettingsObject = SettingsObject;
		params.IsShownBecauseDebug = IsShownBecauseDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewItem != nullptr)
			*NewItem = params.NewItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateScrollingListItems
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DEBUG_ALL_ITEMS                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_OptionsList_Game_C::CreateScrollingListItems(bool DEBUG_ALL_ITEMS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateScrollingListItems");
		
		UUI_OptionsList_Game_C_CreateScrollingListItems_Params params {};
		params.DEBUG_ALL_ITEMS = DEBUG_ALL_ITEMS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Game.UI_OptionsList_Game_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Game_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Game.UI_OptionsList_Game_C.Tick");
		
		UUI_OptionsList_Game_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Game.UI_OptionsList_Game_C.ExecuteUbergraph_UI_OptionsList_Game
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Game_C::ExecuteUbergraph_UI_OptionsList_Game(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Game.UI_OptionsList_Game_C.ExecuteUbergraph_UI_OptionsList_Game");
		
		UUI_OptionsList_Game_C_ExecuteUbergraph_UI_OptionsList_Game_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_OptionsList_Game_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_OptionsList_Game_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_OptionsList_Game.UI_OptionsList_Game_C");
		return ptr;
	}

}


