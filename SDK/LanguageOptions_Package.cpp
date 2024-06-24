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
	 * 		Name   -> Function LanguageOptions.LanguageOptions_C.Should Refresh on Option Update
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RequiresOptionRefresh                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        PropertyNameToSelect                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULanguageOptions_C::Should_Refresh_on_Option_Update(bool RequiresOptionRefresh, const class FName& PropertyNameToSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanguageOptions.LanguageOptions_C.Should Refresh on Option Update");
		
		ULanguageOptions_C_Should_Refresh_on_Option_Update_Params params {};
		params.RequiresOptionRefresh = RequiresOptionRefresh;
		params.PropertyNameToSelect = PropertyNameToSelect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function LanguageOptions.LanguageOptions_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ULanguageOptions_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanguageOptions.LanguageOptions_C.Construct");
		
		ULanguageOptions_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function LanguageOptions.LanguageOptions_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULanguageOptions_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanguageOptions.LanguageOptions_C.Tick");
		
		ULanguageOptions_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function LanguageOptions.LanguageOptions_C.ExecuteUbergraph_LanguageOptions
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULanguageOptions_C::ExecuteUbergraph_LanguageOptions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LanguageOptions.LanguageOptions_C.ExecuteUbergraph_LanguageOptions");
		
		ULanguageOptions_C_ExecuteUbergraph_LanguageOptions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULanguageOptions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULanguageOptions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LanguageOptions.LanguageOptions_C");
		return ptr;
	}

}


