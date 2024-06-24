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
	 * 		Name   -> Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.GetChannelMultipliers
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FVector ABP_ExteriorWindowLights_C::GetChannelMultipliers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.GetChannelMultipliers");
		
		ABP_ExteriorWindowLights_C_GetChannelMultipliers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.ToColorAndIntensity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FLinearColor                                FullColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BaseIntensity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                NormalizedColor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewIntensity                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExteriorWindowLights_C::ToColorAndIntensity(const struct FLinearColor& FullColor, float BaseIntensity, struct FLinearColor* NormalizedColor, float* NewIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.ToColorAndIntensity");
		
		ABP_ExteriorWindowLights_C_ToColorAndIntensity_Params params {};
		params.FullColor = FullColor;
		params.BaseIntensity = BaseIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NormalizedColor != nullptr)
			*NormalizedColor = params.NormalizedColor;
		if (NewIntensity != nullptr)
			*NewIntensity = params.NewIntensity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.SetupRectLight
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                NewLightColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Trx                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		class URectLightComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class URectLightComponent* ABP_ExteriorWindowLights_C::SetupRectLight(float Width, float Height, const struct FLinearColor& NewLightColor, const struct FTransform& Trx, class URectLightComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.SetupRectLight");
		
		ABP_ExteriorWindowLights_C_SetupRectLight_Params params {};
		params.Width = Width;
		params.Height = Height;
		params.NewLightColor = NewLightColor;
		params.Trx = Trx;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.SetupPointLight
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                NewLightColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Trx                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		class UPointLightComponent*                        Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UPointLightComponent* ABP_ExteriorWindowLights_C::SetupPointLight(float Width, float Height, const struct FLinearColor& NewLightColor, const struct FTransform& Trx, class UPointLightComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.SetupPointLight");
		
		ABP_ExteriorWindowLights_C_SetupPointLight_Params params {};
		params.Width = Width;
		params.Height = Height;
		params.NewLightColor = NewLightColor;
		params.Trx = Trx;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.ConstructLight
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            detailSetting                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Trx                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                lightColor                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class ULightComponent* ABP_ExteriorWindowLights_C::ConstructLight(int32_t detailSetting, const struct FTransform& Trx, const struct FLinearColor& lightColor, float Width, float Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.ConstructLight");
		
		ABP_ExteriorWindowLights_C_ConstructLight_Params params {};
		params.detailSetting = detailSetting;
		params.Trx = Trx;
		params.lightColor = lightColor;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.ParamsFromEmissiveMat
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceConstant*                   WindowMIC                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Multiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FWindowLightCollectionParameters            Params                                                     (Parm, OutParm, NoDestructor)
	 * 		bool                                               bValid                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ExteriorWindowLights_C::ParamsFromEmissiveMat(class UMaterialInstanceConstant* WindowMIC, float Multiplier, struct FWindowLightCollectionParameters* Params, bool* bValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.ParamsFromEmissiveMat");
		
		ABP_ExteriorWindowLights_C_ParamsFromEmissiveMat_Params params {};
		params.WindowMIC = WindowMIC;
		params.Multiplier = Multiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Params != nullptr)
			*Params = params.Params;
		if (bValid != nullptr)
			*bValid = params.bValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.ParamsFromWindowMat
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceConstant*                   WindowMIC                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Multiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FWindowLightCollectionParameters            Params                                                     (Parm, OutParm, NoDestructor)
	 * 		bool                                               bValid                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ExteriorWindowLights_C::ParamsFromWindowMat(class UMaterialInstanceConstant* WindowMIC, float Multiplier, struct FWindowLightCollectionParameters* Params, bool* bValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.ParamsFromWindowMat");
		
		ABP_ExteriorWindowLights_C_ParamsFromWindowMat_Params params {};
		params.WindowMIC = WindowMIC;
		params.Multiplier = Multiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Params != nullptr)
			*Params = params.Params;
		if (bValid != nullptr)
			*bValid = params.bValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.GetWindowMaterialColorMult
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UMaterialInstanceConstant*                   WindowMIC                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUseInverseAlphaModulate                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTexture2D*                                  BaseColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExteriorWindowLights_C::GetWindowMaterialColorMult(class UMaterialInstanceConstant* WindowMIC, struct FLinearColor* Out, bool* bUseInverseAlphaModulate, class UTexture2D** BaseColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.GetWindowMaterialColorMult");
		
		ABP_ExteriorWindowLights_C_GetWindowMaterialColorMult_Params params {};
		params.WindowMIC = WindowMIC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
		if (bUseInverseAlphaModulate != nullptr)
			*bUseInverseAlphaModulate = params.bUseInverseAlphaModulate;
		if (BaseColor != nullptr)
			*BaseColor = params.BaseColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.IsEmissiveWindowMaterial
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInterface*                          Mat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGTAMaterialData*                            UserData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FWindowLightCollectionParameters            Params                                                     (Parm, OutParm, NoDestructor)
	 */
	bool ABP_ExteriorWindowLights_C::IsEmissiveWindowMaterial(class UMaterialInterface* Mat, class UGTAMaterialData* UserData, struct FWindowLightCollectionParameters* Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.IsEmissiveWindowMaterial");
		
		ABP_ExteriorWindowLights_C_IsEmissiveWindowMaterial_Params params {};
		params.Mat = Mat;
		params.UserData = UserData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Params != nullptr)
			*Params = params.Params;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ExteriorWindowLights_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ExteriorWindowLights_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExteriorWindowLights.BP_ExteriorWindowLights_C");
		return ptr;
	}

}


