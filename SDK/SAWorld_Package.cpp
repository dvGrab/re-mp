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
	 * 		Name   -> Function SAWorld.SAWorld_C.SetTimeOfDay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Hours                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASAWorld_C::SetTimeOfDay(float Hours)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAWorld.SAWorld_C.SetTimeOfDay");
		
		ASAWorld_C_SetTimeOfDay_Params params {};
		params.Hours = Hours;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SAWorld.SAWorld_C.SetWeatherEffects
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CloudCoverage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RainAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SandstormAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Wind                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WindDir                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ExtraSunny                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASAWorld_C::SetWeatherEffects(float CloudCoverage, float RainAmount, float SandstormAmount, float Wind, const struct FVector& WindDir, float ExtraSunny)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAWorld.SAWorld_C.SetWeatherEffects");
		
		ASAWorld_C_SetWeatherEffects_Params params {};
		params.CloudCoverage = CloudCoverage;
		params.RainAmount = RainAmount;
		params.SandstormAmount = SandstormAmount;
		params.Wind = Wind;
		params.WindDir = WindDir;
		params.ExtraSunny = ExtraSunny;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SAWorld.SAWorld_C.SetEnvironmentEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Foggyness                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HeatHaze                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LightningFlash                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RIOT                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASAWorld_C::SetEnvironmentEffects(float Foggyness, float HeatHaze, float LightningFlash, float RIOT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAWorld.SAWorld_C.SetEnvironmentEffects");
		
		ASAWorld_C_SetEnvironmentEffects_Params params {};
		params.Foggyness = Foggyness;
		params.HeatHaze = HeatHaze;
		params.LightningFlash = LightningFlash;
		params.RIOT = RIOT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SAWorld.SAWorld_C.SetLightColors
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FColor                                      ambient                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FColor                                      directional                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASAWorld_C::SetLightColors(const struct FColor& ambient, const struct FColor& directional)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAWorld.SAWorld_C.SetLightColors");
		
		ASAWorld_C_SetLightColors_Params params {};
		params.ambient = ambient;
		params.directional = directional;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SAWorld.SAWorld_C.SetSkyColors
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FColor                                      skyBottom                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FColor                                      skyTop                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASAWorld_C::SetSkyColors(const struct FColor& skyBottom, const struct FColor& skyTop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAWorld.SAWorld_C.SetSkyColors");
		
		ASAWorld_C_SetSkyColors_Params params {};
		params.skyBottom = skyBottom;
		params.skyTop = skyTop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SAWorld.SAWorld_C.SetStreetlightAmount
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              LightAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LightDistance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DecalFadeDistance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASAWorld_C::SetStreetlightAmount(float LightAmount, float LightDistance, float DecalFadeDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAWorld.SAWorld_C.SetStreetlightAmount");
		
		ASAWorld_C_SetStreetlightAmount_Params params {};
		params.LightAmount = LightAmount;
		params.LightDistance = LightDistance;
		params.DecalFadeDistance = DecalFadeDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SAWorld.SAWorld_C.SetWeatherImpactEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              RoadWetness                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WaveAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASAWorld_C::SetWeatherImpactEffects(float RoadWetness, float WaveAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAWorld.SAWorld_C.SetWeatherImpactEffects");
		
		ASAWorld_C_SetWeatherImpactEffects_Params params {};
		params.RoadWetness = RoadWetness;
		params.WaveAmount = WaveAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SAWorld.SAWorld_C.SetupScalability
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AGTAScalability*                             ToSetup                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASAWorld_C::SetupScalability(class AGTAScalability* ToSetup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAWorld.SAWorld_C.SetupScalability");
		
		ASAWorld_C_SetupScalability_Params params {};
		params.ToSetup = ToSetup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SAWorld.SAWorld_C.SetLocationEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              UnderwaterAmt                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TunnelAmt                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASAWorld_C::SetLocationEffects(float UnderwaterAmt, float TunnelAmt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAWorld.SAWorld_C.SetLocationEffects");
		
		ASAWorld_C_SetLocationEffects_Params params {};
		params.UnderwaterAmt = UnderwaterAmt;
		params.TunnelAmt = TunnelAmt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SAWorld.SAWorld_C.SetAdrenaline
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASAWorld_C::SetAdrenaline(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAWorld.SAWorld_C.SetAdrenaline");
		
		ASAWorld_C_SetAdrenaline_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SAWorld.SAWorld_C.ExecuteUbergraph_SAWorld
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASAWorld_C::ExecuteUbergraph_SAWorld(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAWorld.SAWorld_C.ExecuteUbergraph_SAWorld");
		
		ASAWorld_C_ExecuteUbergraph_SAWorld_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function SAWorld.SAWorld_C.UpdateTimeOfDay__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASAWorld_C::UpdateTimeOfDay__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SAWorld.SAWorld_C.UpdateTimeOfDay__DelegateSignature");
		
		ASAWorld_C_UpdateTimeOfDay__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASAWorld_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASAWorld_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SAWorld.SAWorld_C");
		return ptr;
	}

}


