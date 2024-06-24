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
	 * 		Name   -> Function UI_HUDItem_Busted_GTA3.UI_HUDItem_Busted_GTA3_C.GetMainContentCanvasSlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UCanvasPanelSlot*                            ContentCanvasSlot                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_Busted_GTA3_C::GetMainContentCanvasSlot(class UCanvasPanelSlot** ContentCanvasSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Busted_GTA3.UI_HUDItem_Busted_GTA3_C.GetMainContentCanvasSlot");
		
		UUI_HUDItem_Busted_GTA3_C_GetMainContentCanvasSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ContentCanvasSlot != nullptr)
			*ContentCanvasSlot = params.ContentCanvasSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_Busted_GTA3.UI_HUDItem_Busted_GTA3_C.GetRichText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class URichTextBlock*                              Text                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_Busted_GTA3_C::GetRichText(class URichTextBlock** Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Busted_GTA3.UI_HUDItem_Busted_GTA3_C.GetRichText");
		
		UUI_HUDItem_Busted_GTA3_C_GetRichText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_Busted_GTA3.UI_HUDItem_Busted_GTA3_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_HUDItem_Busted_GTA3_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Busted_GTA3.UI_HUDItem_Busted_GTA3_C.Construct");
		
		UUI_HUDItem_Busted_GTA3_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_Busted_GTA3.UI_HUDItem_Busted_GTA3_C.ExecuteUbergraph_UI_HUDItem_Busted_GTA3
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_Busted_GTA3_C::ExecuteUbergraph_UI_HUDItem_Busted_GTA3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Busted_GTA3.UI_HUDItem_Busted_GTA3_C.ExecuteUbergraph_UI_HUDItem_Busted_GTA3");
		
		UUI_HUDItem_Busted_GTA3_C_ExecuteUbergraph_UI_HUDItem_Busted_GTA3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUDItem_Busted_GTA3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUDItem_Busted_GTA3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_Busted_GTA3.UI_HUDItem_Busted_GTA3_C");
		return ptr;
	}

}


