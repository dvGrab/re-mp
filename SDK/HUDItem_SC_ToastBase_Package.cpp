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
	 * 		Name   -> Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.CustomFunctionWithObject
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Object                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDItem_SC_ToastBase_C::CustomFunctionWithObject(const class FString& FunctionName, class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.CustomFunctionWithObject");
		
		UHUDItem_SC_ToastBase_C_CustomFunctionWithObject_Params params {};
		params.FunctionName = FunctionName;
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.SetContentText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDItem_SC_ToastBase_C::SetContentText(const class FText& Text, const struct FLinearColor& FontColorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.SetContentText");
		
		UHUDItem_SC_ToastBase_C_SetContentText_Params params {};
		params.Text = Text;
		params.FontColorOverride = FontColorOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.CustomFunction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUDItem_SC_ToastBase_C::CustomFunction(const class FString& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.CustomFunction");
		
		UHUDItem_SC_ToastBase_C_CustomFunction_Params params {};
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.ExecuteUbergraph_HUDItem_SC_ToastBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDItem_SC_ToastBase_C::ExecuteUbergraph_HUDItem_SC_ToastBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.ExecuteUbergraph_HUDItem_SC_ToastBase");
		
		UHUDItem_SC_ToastBase_C_ExecuteUbergraph_HUDItem_SC_ToastBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDItem_SC_ToastBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDItem_SC_ToastBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C");
		return ptr;
	}

}


