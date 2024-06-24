/**
 * Name: GTA-SA-DEF
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
	 * 		Name   -> Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.UpdateCloudInterp
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_VolumetricCloud_Base_C::UpdateCloudInterp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.UpdateCloudInterp");
		
		ABP_VolumetricCloud_Base_C_UpdateCloudInterp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.Flush
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_VolumetricCloud_Base_C::Flush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.Flush");
		
		ABP_VolumetricCloud_Base_C_Flush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.UpdateQualityLevel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentQualityLevel                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VolumetricCloud_Base_C::UpdateQualityLevel(int32_t CurrentQualityLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.UpdateQualityLevel");
		
		ABP_VolumetricCloud_Base_C_UpdateQualityLevel_Params params {};
		params.CurrentQualityLevel = CurrentQualityLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_VolumetricCloud_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.UserConstructionScript");
		
		ABP_VolumetricCloud_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.SetQualityLevel
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            quality                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VolumetricCloud_Base_C::SetQualityLevel(int32_t quality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.SetQualityLevel");
		
		ABP_VolumetricCloud_Base_C_SetQualityLevel_Params params {};
		params.quality = quality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.SetColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Intensity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              raleigh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkyAtmosphereComponent*                     AtmosphereComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VolumetricCloud_Base_C::SetColor(const struct FLinearColor& Color, float Intensity, float raleigh, class USkyAtmosphereComponent* AtmosphereComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.SetColor");
		
		ABP_VolumetricCloud_Base_C_SetColor_Params params {};
		params.Color = Color;
		params.Intensity = Intensity;
		params.raleigh = raleigh;
		params.AtmosphereComponent = AtmosphereComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.SetExtinction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VolumetricCloud_Base_C::SetExtinction(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.SetExtinction");
		
		ABP_VolumetricCloud_Base_C_SetExtinction_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.SetSkyParams
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              SunIntensity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoonIntensity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VolumetricCloud_Base_C::SetSkyParams(float SunIntensity, float MoonIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.SetSkyParams");
		
		ABP_VolumetricCloud_Base_C_SetSkyParams_Params params {};
		params.SunIntensity = SunIntensity;
		params.MoonIntensity = MoonIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.UpdateCloudiness
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              SunAmt                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CloudAmt                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VolumetricCloud_Base_C::UpdateCloudiness(float SunAmt, float CloudAmt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.UpdateCloudiness");
		
		ABP_VolumetricCloud_Base_C_UpdateCloudiness_Params params {};
		params.SunAmt = SunAmt;
		params.CloudAmt = CloudAmt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VolumetricCloud_Base_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.ReceiveTick");
		
		ABP_VolumetricCloud_Base_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.SetEmission
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VolumetricCloud_Base_C::SetEmission(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.SetEmission");
		
		ABP_VolumetricCloud_Base_C_SetEmission_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.ExecuteUbergraph_BP_VolumetricCloud_Base
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VolumetricCloud_Base_C::ExecuteUbergraph_BP_VolumetricCloud_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C.ExecuteUbergraph_BP_VolumetricCloud_Base");
		
		ABP_VolumetricCloud_Base_C_ExecuteUbergraph_BP_VolumetricCloud_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_VolumetricCloud_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VolumetricCloud_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VolumetricCloud_Base.BP_VolumetricCloud_Base_C");
		return ptr;
	}

}


