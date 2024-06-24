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
	 * 		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateCCTV
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_LightingSubLevel_C::UpdateCCTV(int32_t Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateCCTV");
		
		UBI_LightingSubLevel_C_UpdateCCTV_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateAdrenaline
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_LightingSubLevel_C::UpdateAdrenaline(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateAdrenaline");
		
		UBI_LightingSubLevel_C_UpdateAdrenaline_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateLocationEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Underwater                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Tunnel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_LightingSubLevel_C::UpdateLocationEffects(float Underwater, float Tunnel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateLocationEffects");
		
		UBI_LightingSubLevel_C_UpdateLocationEffects_Params params {};
		params.Underwater = Underwater;
		params.Tunnel = Tunnel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.SetupScalability
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AGTAScalability*                             Scalability                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_LightingSubLevel_C::SetupScalability(class AGTAScalability* Scalability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.SetupScalability");
		
		UBI_LightingSubLevel_C_SetupScalability_Params params {};
		params.Scalability = Scalability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateWeatherImpact
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              RoadWetness                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WaveAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_LightingSubLevel_C::UpdateWeatherImpact(float RoadWetness, float WaveAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateWeatherImpact");
		
		UBI_LightingSubLevel_C_UpdateWeatherImpact_Params params {};
		params.RoadWetness = RoadWetness;
		params.WaveAmount = WaveAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateSkyColors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FColor                                      skyTop                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FColor                                      skyBottom                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_LightingSubLevel_C::UpdateSkyColors(const struct FColor& skyTop, const struct FColor& skyBottom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateSkyColors");
		
		UBI_LightingSubLevel_C_UpdateSkyColors_Params params {};
		params.skyTop = skyTop;
		params.skyBottom = skyBottom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateLightColors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FColor                                      directional                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FColor                                      ambient                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_LightingSubLevel_C::UpdateLightColors(const struct FColor& directional, const struct FColor& ambient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateLightColors");
		
		UBI_LightingSubLevel_C_UpdateLightColors_Params params {};
		params.directional = directional;
		params.ambient = ambient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.Update Environment Effects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Foggyness                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Heat_Haze                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Lightning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RIOT                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_LightingSubLevel_C::Update_Environment_Effects(float Foggyness, float Heat_Haze, float Lightning, float RIOT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.Update Environment Effects");
		
		UBI_LightingSubLevel_C_Update_Environment_Effects_Params params {};
		params.Foggyness = Foggyness;
		params.Heat_Haze = Heat_Haze;
		params.Lightning = Lightning;
		params.RIOT = RIOT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateWeatherEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Cloud                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rain                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Sandstorm                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WindDir                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WindPower                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ExtraSunny                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_LightingSubLevel_C::UpdateWeatherEffects(float Cloud, float Rain, float Sandstorm, const struct FVector& WindDir, float WindPower, float ExtraSunny)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateWeatherEffects");
		
		UBI_LightingSubLevel_C_UpdateWeatherEffects_Params params {};
		params.Cloud = Cloud;
		params.Rain = Rain;
		params.Sandstorm = Sandstorm;
		params.WindDir = WindDir;
		params.WindPower = WindPower;
		params.ExtraSunny = ExtraSunny;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateTimeOfDay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_LightingSubLevel_C::UpdateTimeOfDay(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_LightingSubLevel.BI_LightingSubLevel_C.UpdateTimeOfDay");
		
		UBI_LightingSubLevel_C_UpdateTimeOfDay_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_LightingSubLevel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_LightingSubLevel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_LightingSubLevel.BI_LightingSubLevel_C");
		return ptr;
	}

}


