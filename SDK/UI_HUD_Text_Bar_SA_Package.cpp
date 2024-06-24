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
	 * 		Name   -> Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.SetStatName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_HUD_Text_Bar_SA_C::SetStatName(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.SetStatName");
		
		UUI_HUD_Text_Bar_SA_C_SetStatName_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.SetBarPercent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_Text_Bar_SA_C::SetBarPercent(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.SetBarPercent");
		
		UUI_HUD_Text_Bar_SA_C_SetBarPercent_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_HUD_Text_Bar_SA_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.Construct");
		
		UUI_HUD_Text_Bar_SA_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.ExecuteUbergraph_UI_HUD_Text_Bar_SA
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_Text_Bar_SA_C::ExecuteUbergraph_UI_HUD_Text_Bar_SA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.ExecuteUbergraph_UI_HUD_Text_Bar_SA");
		
		UUI_HUD_Text_Bar_SA_C_ExecuteUbergraph_UI_HUD_Text_Bar_SA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUD_Text_Bar_SA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUD_Text_Bar_SA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C");
		return ptr;
	}

}


