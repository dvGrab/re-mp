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
	 * 		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.SetMoneyOnlyMode
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               MakeMoneyOnly                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUDItem_PlayerInfo_SA_C::SetMoneyOnlyMode(bool MakeMoneyOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.SetMoneyOnlyMode");
		
		UUI_HUDItem_PlayerInfo_SA_C_SetMoneyOnlyMode_Params params {};
		params.MakeMoneyOnly = MakeMoneyOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetWeaponImage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UImage*                                      WeaponImage                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_PlayerInfo_SA_C::GetWeaponImage(class UImage** WeaponImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetWeaponImage");
		
		UUI_HUDItem_PlayerInfo_SA_C_GetWeaponImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponImage != nullptr)
			*WeaponImage = params.WeaponImage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetTimeText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UTextBlock*                                  TimeText                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_PlayerInfo_SA_C::GetTimeText(class UTextBlock** TimeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetTimeText");
		
		UUI_HUDItem_PlayerInfo_SA_C_GetTimeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeText != nullptr)
			*TimeText = params.TimeText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetMoneyText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UTextBlock*                                  MoneyText                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_PlayerInfo_SA_C::GetMoneyText(class UTextBlock** MoneyText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetMoneyText");
		
		UUI_HUDItem_PlayerInfo_SA_C_GetMoneyText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MoneyText != nullptr)
			*MoneyText = params.MoneyText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetHealthBar
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UProgressBar*                                HealthBar                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_PlayerInfo_SA_C::GetHealthBar(class UProgressBar** HealthBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetHealthBar");
		
		UUI_HUDItem_PlayerInfo_SA_C_GetHealthBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HealthBar != nullptr)
			*HealthBar = params.HealthBar;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetBreathMeter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UProgressBar*                                BreathMeter                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_PlayerInfo_SA_C::GetBreathMeter(class UProgressBar** BreathMeter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetBreathMeter");
		
		UUI_HUDItem_PlayerInfo_SA_C_GetBreathMeter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BreathMeter != nullptr)
			*BreathMeter = params.BreathMeter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetArmorBar
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UProgressBar*                                ArmorBar                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_PlayerInfo_SA_C::GetArmorBar(class UProgressBar** ArmorBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetArmorBar");
		
		UUI_HUDItem_PlayerInfo_SA_C_GetArmorBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArmorBar != nullptr)
			*ArmorBar = params.ArmorBar;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetWantedStarsBox
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UHorizontalBox*                              WantedStarsBox                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_PlayerInfo_SA_C::GetWantedStarsBox(class UHorizontalBox** WantedStarsBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetWantedStarsBox");
		
		UUI_HUDItem_PlayerInfo_SA_C_GetWantedStarsBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WantedStarsBox != nullptr)
			*WantedStarsBox = params.WantedStarsBox;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetRightWeaponArrow
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UImage*                                      RightWeaponArrow                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_PlayerInfo_SA_C::GetRightWeaponArrow(class UImage** RightWeaponArrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetRightWeaponArrow");
		
		UUI_HUDItem_PlayerInfo_SA_C_GetRightWeaponArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RightWeaponArrow != nullptr)
			*RightWeaponArrow = params.RightWeaponArrow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetLeftWeaponArrow
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UImage*                                      LeftWeaponArrow                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_PlayerInfo_SA_C::GetLeftWeaponArrow(class UImage** LeftWeaponArrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetLeftWeaponArrow");
		
		UUI_HUDItem_PlayerInfo_SA_C_GetLeftWeaponArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LeftWeaponArrow != nullptr)
			*LeftWeaponArrow = params.LeftWeaponArrow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetAmmoText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UTextBlock*                                  AmmoText                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_PlayerInfo_SA_C::GetAmmoText(class UTextBlock** AmmoText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetAmmoText");
		
		UUI_HUDItem_PlayerInfo_SA_C_GetAmmoText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoText != nullptr)
			*AmmoText = params.AmmoText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.SetupStars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_HUDItem_PlayerInfo_SA_C::SetupStars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.SetupStars");
		
		UUI_HUDItem_PlayerInfo_SA_C_SetupStars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_PlayerInfo_SA_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.Tick");
		
		UUI_HUDItem_PlayerInfo_SA_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.CustomFunction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_PlayerInfo_SA_C::CustomFunction(const class FString& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.CustomFunction");
		
		UUI_HUDItem_PlayerInfo_SA_C_CustomFunction_Params params {};
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.ExecuteUbergraph_UI_HUDItem_PlayerInfo_SA
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDItem_PlayerInfo_SA_C::ExecuteUbergraph_UI_HUDItem_PlayerInfo_SA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.ExecuteUbergraph_UI_HUDItem_PlayerInfo_SA");
		
		UUI_HUDItem_PlayerInfo_SA_C_ExecuteUbergraph_UI_HUDItem_PlayerInfo_SA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUDItem_PlayerInfo_SA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUDItem_PlayerInfo_SA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C");
		return ptr;
	}

}


