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
	 * 		Name   -> Function DoubleCreditBox.DoubleCreditBox_C.SetTextValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text1                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Text2                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSlateFontInfo                              Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UDoubleCreditBox_C::SetTextValues(const class FText& Text1, const class FText& Text2, const struct FSlateFontInfo& Font)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoubleCreditBox.DoubleCreditBox_C.SetTextValues");
		
		UDoubleCreditBox_C_SetTextValues_Params params {};
		params.Text1 = Text1;
		params.Text2 = Text2;
		params.Font = Font;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function DoubleCreditBox.DoubleCreditBox_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDoubleCreditBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoubleCreditBox.DoubleCreditBox_C.Construct");
		
		UDoubleCreditBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function DoubleCreditBox.DoubleCreditBox_C.DelayedTextAdd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text1                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Text2                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSlateFontInfo                              Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UDoubleCreditBox_C::DelayedTextAdd(const class FText& Text1, const class FText& Text2, const struct FSlateFontInfo& Font)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoubleCreditBox.DoubleCreditBox_C.DelayedTextAdd");
		
		UDoubleCreditBox_C_DelayedTextAdd_Params params {};
		params.Text1 = Text1;
		params.Text2 = Text2;
		params.Font = Font;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function DoubleCreditBox.DoubleCreditBox_C.ExecuteUbergraph_DoubleCreditBox
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDoubleCreditBox_C::ExecuteUbergraph_DoubleCreditBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoubleCreditBox.DoubleCreditBox_C.ExecuteUbergraph_DoubleCreditBox");
		
		UDoubleCreditBox_C_ExecuteUbergraph_DoubleCreditBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDoubleCreditBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoubleCreditBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DoubleCreditBox.DoubleCreditBox_C");
		return ptr;
	}

}


