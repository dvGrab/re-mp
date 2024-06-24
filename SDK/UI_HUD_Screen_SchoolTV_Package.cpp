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
	 * 		Name   -> Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.CustomBoolReturnFunction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool UUI_HUD_Screen_SchoolTV_C::CustomBoolReturnFunction(const class FString& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.CustomBoolReturnFunction");
		
		UUI_HUD_Screen_SchoolTV_C_CustomBoolReturnFunction_Params params {};
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.UpdateBlackFade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_Screen_SchoolTV_C::UpdateBlackFade(float dT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.UpdateBlackFade");
		
		UUI_HUD_Screen_SchoolTV_C_UpdateBlackFade_Params params {};
		params.dT = dT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.GetMainIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UImage*                                      Image1                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_Screen_SchoolTV_C::GetMainIcon(class UImage** Image1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.GetMainIcon");
		
		UUI_HUD_Screen_SchoolTV_C_GetMainIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Image1 != nullptr)
			*Image1 = params.Image1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_Screen_SchoolTV_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.Tick");
		
		UUI_HUD_Screen_SchoolTV_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.CustomFunctionWithFloat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              floatNum                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_Screen_SchoolTV_C::CustomFunctionWithFloat(const class FString& FunctionName, float floatNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.CustomFunctionWithFloat");
		
		UUI_HUD_Screen_SchoolTV_C_CustomFunctionWithFloat_Params params {};
		params.FunctionName = FunctionName;
		params.floatNum = floatNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.ExecuteUbergraph_UI_HUD_Screen_SchoolTV
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_Screen_SchoolTV_C::ExecuteUbergraph_UI_HUD_Screen_SchoolTV(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.ExecuteUbergraph_UI_HUD_Screen_SchoolTV");
		
		UUI_HUD_Screen_SchoolTV_C_ExecuteUbergraph_UI_HUD_Screen_SchoolTV_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUD_Screen_SchoolTV_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUD_Screen_SchoolTV_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C");
		return ptr;
	}

}


