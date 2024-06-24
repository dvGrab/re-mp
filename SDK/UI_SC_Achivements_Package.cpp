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
	 * 		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.TakeFocus
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UUI_SC_Achivements_C::TakeFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.TakeFocus");
		
		UUI_SC_Achivements_C_TakeFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.WrapNavigation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SC_Achivements_C::WrapNavigation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.WrapNavigation");
		
		UUI_SC_Achivements_C_WrapNavigation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.SetupNavigation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SC_Achivements_C::SetupNavigation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.SetupNavigation");
		
		UUI_SC_Achivements_C_SetupNavigation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.RefreshList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SC_Achivements_C::RefreshList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.RefreshList");
		
		UUI_SC_Achivements_C_RefreshList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.CheckCreation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SC_Achivements_C::CheckCreation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.CheckCreation");
		
		UUI_SC_Achivements_C_CheckCreation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.CreateScrollingListItems
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DEBUG_ALL_ITEMS                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SC_Achivements_C::CreateScrollingListItems(bool DEBUG_ALL_ITEMS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.CreateScrollingListItems");
		
		UUI_SC_Achivements_C_CreateScrollingListItems_Params params {};
		params.DEBUG_ALL_ITEMS = DEBUG_ALL_ITEMS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SC_Achivements_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.PreConstruct");
		
		UUI_SC_Achivements_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_SC_Achivements_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.Construct");
		
		UUI_SC_Achivements_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SC_Achivements_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.Tick");
		
		UUI_SC_Achivements_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.OnSynchronizeProperties
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_SC_Achivements_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.OnSynchronizeProperties");
		
		UUI_SC_Achivements_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.ExecuteUbergraph_UI_SC_Achivements
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SC_Achivements_C::ExecuteUbergraph_UI_SC_Achivements(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.ExecuteUbergraph_UI_SC_Achivements");
		
		UUI_SC_Achivements_C_ExecuteUbergraph_UI_SC_Achivements_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SC_Achivements_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SC_Achivements_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SC_Achivements.UI_SC_Achivements_C");
		return ptr;
	}

}


