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
	 * 		Name   -> Function WeaponWheelItem.WeaponWheelItem_C.Set Image Material for Item
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInterface*                          NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      string                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      extraString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWeaponWheelItem_C::Set_Image_Material_for_Item(class UMaterialInterface* NewParam, bool Enabled, const class FString& string, const class FString& extraString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponWheelItem.WeaponWheelItem_C.Set Image Material for Item");
		
		UWeaponWheelItem_C_Set_Image_Material_for_Item_Params params {};
		params.NewParam = NewParam;
		params.Enabled = Enabled;
		params.string = string;
		params.extraString = extraString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function WeaponWheelItem.WeaponWheelItem_C.SetText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      string                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWeaponWheelItem_C::SetText(const class FString& string)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponWheelItem.WeaponWheelItem_C.SetText");
		
		UWeaponWheelItem_C_SetText_Params params {};
		params.string = string;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function WeaponWheelItem.WeaponWheelItem_C.HideImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponWheelItem_C::HideImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponWheelItem.WeaponWheelItem_C.HideImage");
		
		UWeaponWheelItem_C_HideImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function WeaponWheelItem.WeaponWheelItem_C.Set Image
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      string                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      extraString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWeaponWheelItem_C::Set_Image(class UTexture2D* Texture, bool Enabled, const class FString& string, const class FString& extraString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponWheelItem.WeaponWheelItem_C.Set Image");
		
		UWeaponWheelItem_C_Set_Image_Params params {};
		params.Texture = Texture;
		params.Enabled = Enabled;
		params.string = string;
		params.extraString = extraString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponWheelItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponWheelItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponWheelItem.WeaponWheelItem_C");
		return ptr;
	}

}


