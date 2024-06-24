﻿/**
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
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetMeshComp
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class USkinnedMeshComponent*                       MeshComp                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Vehicle_Cinematic_Base_C::GetMeshComp(class USkinnedMeshComponent** MeshComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetMeshComp");
		
		ABP_Vehicle_Cinematic_Base_C_GetMeshComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshComp != nullptr)
			*MeshComp = params.MeshComp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSpecialLightMaterial
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceConstant*                   On_Mat                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceConstant*                   Off_Mat                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Vehicle_Cinematic_Base_C::GetSpecialLightMaterial(int32_t Index, class UMaterialInstanceConstant** On_Mat, class UMaterialInstanceConstant** Off_Mat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSpecialLightMaterial");
		
		ABP_Vehicle_Cinematic_Base_C_GetSpecialLightMaterial_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (On_Mat != nullptr)
			*On_Mat = params.On_Mat;
		if (Off_Mat != nullptr)
			*Off_Mat = params.Off_Mat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.UpdateMaterialForSpecialLight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EFSpecialLightType                                 LightType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Vehicle_Cinematic_Base_C::UpdateMaterialForSpecialLight(EFSpecialLightType LightType, bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.UpdateMaterialForSpecialLight");
		
		ABP_Vehicle_Cinematic_Base_C_UpdateMaterialForSpecialLight_Params params {};
		params.LightType = LightType;
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetLicenseBaseScale
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector2D                                   Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Vehicle_Cinematic_Base_C::GetLicenseBaseScale(struct FVector2D* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetLicenseBaseScale");
		
		ABP_Vehicle_Cinematic_Base_C_GetLicenseBaseScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.Setup Heli Spot Light
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_HelicopterSpotLight_C*                   SpotLight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Vehicle_Cinematic_Base_C::Setup_Heli_Spot_Light(class UBP_HelicopterSpotLight_C* SpotLight, class AActor* Target, const class FName& SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.Setup Heli Spot Light");
		
		ABP_Vehicle_Cinematic_Base_C_Setup_Heli_Spot_Light_Params params {};
		params.SpotLight = SpotLight;
		params.Target = Target;
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSirenClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      LightClass                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Socket                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Vehicle_Cinematic_Base_C::GetSirenClass(bool Left, class UClass** LightClass, class FName* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSirenClass");
		
		ABP_Vehicle_Cinematic_Base_C_GetSirenClass_Params params {};
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LightClass != nullptr)
			*LightClass = params.LightClass;
		if (Socket != nullptr)
			*Socket = params.Socket;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetupSpecialLight
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULocalLightComponent*                        LightComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FlipX                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Vehicle_Cinematic_Base_C::SetupSpecialLight(const class FName& SocketName, class ULocalLightComponent* LightComp, bool FlipX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetupSpecialLight");
		
		ABP_Vehicle_Cinematic_Base_C_SetupSpecialLight_Params params {};
		params.SocketName = SocketName;
		params.LightComp = LightComp;
		params.FlipX = FlipX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSpecialLightPointer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EFSpecialLightType                                 Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPointLightComponent*                        Light                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Vehicle_Cinematic_Base_C::GetSpecialLightPointer(EFSpecialLightType Type, class UPointLightComponent** Light)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSpecialLightPointer");
		
		ABP_Vehicle_Cinematic_Base_C_GetSpecialLightPointer_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Light != nullptr)
			*Light = params.Light;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.UpdateSpecialLight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EFSpecialLightType                                 LightType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Vehicle_Cinematic_Base_C::UpdateSpecialLight(EFSpecialLightType LightType, bool ShouldEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.UpdateSpecialLight");
		
		ABP_Vehicle_Cinematic_Base_C_UpdateSpecialLight_Params params {};
		params.LightType = LightType;
		params.ShouldEnable = ShouldEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSpecialLightInfo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EFSpecialLightType                                 LightType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        SocketName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ComponentClass                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Vehicle_Cinematic_Base_C::GetSpecialLightInfo(EFSpecialLightType LightType, bool* success, class FName* SocketName, class UClass** ComponentClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSpecialLightInfo");
		
		ABP_Vehicle_Cinematic_Base_C_GetSpecialLightInfo_Params params {};
		params.LightType = LightType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (SocketName != nullptr)
			*SocketName = params.SocketName;
		if (ComponentClass != nullptr)
			*ComponentClass = params.ComponentClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetTaxiLight
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Vehicle_Cinematic_Base_C::SetTaxiLight(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetTaxiLight");
		
		ABP_Vehicle_Cinematic_Base_C_SetTaxiLight_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetLicensePlateMI
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UMaterialInstanceConstant*                   Out_MI                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Vehicle_Cinematic_Base_C::GetLicensePlateMI(class UMaterialInstanceConstant** Out_MI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetLicensePlateMI");
		
		ABP_Vehicle_Cinematic_Base_C_GetLicensePlateMI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out_MI != nullptr)
			*Out_MI = params.Out_MI;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetLicensePlateScale
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector2D                                   OutScale                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Vehicle_Cinematic_Base_C::GetLicensePlateScale(struct FVector2D* OutScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetLicensePlateScale");
		
		ABP_Vehicle_Cinematic_Base_C_GetLicensePlateScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutScale != nullptr)
			*OutScale = params.OutScale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetLicensePlate
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      WithText                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Vehicle_Cinematic_Base_C::SetLicensePlate(const class FString& WithText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetLicensePlate");
		
		ABP_Vehicle_Cinematic_Base_C_SetLicensePlate_Params params {};
		params.WithText = WithText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetupHeadlightOption
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGTAHeadlightSetting                        Setting                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_Vehicle_Cinematic_Base_C::SetupHeadlightOption(const struct FGTAHeadlightSetting& Setting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetupHeadlightOption");
		
		ABP_Vehicle_Cinematic_Base_C_SetupHeadlightOption_Params params {};
		params.Setting = Setting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetMaterialsAsScorched
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UPrimitiveComponent*                         Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Vehicle_Cinematic_Base_C::SetMaterialsAsScorched(TArray<class UMaterialInterface*>* Materials, class UPrimitiveComponent* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetMaterialsAsScorched");
		
		ABP_Vehicle_Cinematic_Base_C_SetMaterialsAsScorched_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Materials != nullptr)
			*Materials = params.Materials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetVehicleLightMaterials
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Light_Index                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceConstant*                   On_Material                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceConstant*                   Off_Material                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Vehicle_Cinematic_Base_C::GetVehicleLightMaterials(int32_t Light_Index, class UMaterialInstanceConstant** On_Material, class UMaterialInstanceConstant** Off_Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetVehicleLightMaterials");
		
		ABP_Vehicle_Cinematic_Base_C_GetVehicleLightMaterials_Params params {};
		params.Light_Index = Light_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (On_Material != nullptr)
			*On_Material = params.On_Material;
		if (Off_Material != nullptr)
			*Off_Material = params.Off_Material;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetLightMaterials
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            LightIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceConstant*                   OnMaterial                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceConstant*                   OffMaterial                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Vehicle_Cinematic_Base_C::GetLightMaterials(int32_t LightIndex, class UMaterialInstanceConstant** OnMaterial, class UMaterialInstanceConstant** OffMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetLightMaterials");
		
		ABP_Vehicle_Cinematic_Base_C_GetLightMaterials_Params params {};
		params.LightIndex = LightIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OnMaterial != nullptr)
			*OnMaterial = params.OnMaterial;
		if (OffMaterial != nullptr)
			*OffMaterial = params.OffMaterial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSearchMaterials
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMaterialInstanceConstant*>           Materials                                                  (Parm, OutParm)
	 */
	void ABP_Vehicle_Cinematic_Base_C::GetSearchMaterials(TArray<class UMaterialInstanceConstant*>* Materials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSearchMaterials");
		
		ABP_Vehicle_Cinematic_Base_C_GetSearchMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Materials != nullptr)
			*Materials = params.Materials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.IsBodyMaterial
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInterface*                          Mat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsBody                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Vehicle_Cinematic_Base_C::IsBodyMaterial(class UMaterialInterface* Mat, bool* IsBody)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.IsBodyMaterial");
		
		ABP_Vehicle_Cinematic_Base_C_IsBodyMaterial_Params params {};
		params.Mat = Mat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBody != nullptr)
			*IsBody = params.IsBody;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.EnableLight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ULocalLightComponent*                        LightComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            materialIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceConstant*                   Material_On                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceConstant*                   Material_Off                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Vehicle_Cinematic_Base_C::EnableLight(bool IsEnabled, class ULocalLightComponent* LightComp, int32_t materialIndex, class UMaterialInstanceConstant* Material_On, class UMaterialInstanceConstant* Material_Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.EnableLight");
		
		ABP_Vehicle_Cinematic_Base_C_EnableLight_Params params {};
		params.IsEnabled = IsEnabled;
		params.LightComp = LightComp;
		params.materialIndex = materialIndex;
		params.Material_On = Material_On;
		params.Material_Off = Material_Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetupLight
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULocalLightComponent*                        LightComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FlipX                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            materialIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceConstant*                   MaterialSearch                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Vehicle_Cinematic_Base_C::SetupLight(const class FName& SocketName, class ULocalLightComponent* LightComp, bool FlipX, int32_t* materialIndex, class UMaterialInstanceConstant* MaterialSearch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetupLight");
		
		ABP_Vehicle_Cinematic_Base_C_SetupLight_Params params {};
		params.SocketName = SocketName;
		params.LightComp = LightComp;
		params.FlipX = FlipX;
		params.MaterialSearch = MaterialSearch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (materialIndex != nullptr)
			*materialIndex = params.materialIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetCarLights
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLeftHeadlight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRightHeadlight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeftTaillight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRightTaillight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               useDimLeftTailLight                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               useDimRightTailLight                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Vehicle_Cinematic_Base_C::SetCarLights(bool bLeftHeadlight, bool bRightHeadlight, bool bLeftTaillight, bool bRightTaillight, bool useDimLeftTailLight, bool useDimRightTailLight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetCarLights");
		
		ABP_Vehicle_Cinematic_Base_C_SetCarLights_Params params {};
		params.bLeftHeadlight = bLeftHeadlight;
		params.bRightHeadlight = bRightHeadlight;
		params.bLeftTaillight = bLeftTaillight;
		params.bRightTaillight = bRightTaillight;
		params.useDimLeftTailLight = useDimLeftTailLight;
		params.useDimRightTailLight = useDimRightTailLight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetupVehicleBP
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Vehicle_Cinematic_Base_C::SetupVehicleBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetupVehicleBP");
		
		ABP_Vehicle_Cinematic_Base_C_SetupVehicleBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetScorched
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               scorched                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Vehicle_Cinematic_Base_C::SetScorched(bool scorched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetScorched");
		
		ABP_Vehicle_Cinematic_Base_C_SetScorched_Params params {};
		params.scorched = scorched;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.BoneSetAsDamaged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDamaged                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Vehicle_Cinematic_Base_C::BoneSetAsDamaged(const class FName& BoneName, bool bDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.BoneSetAsDamaged");
		
		ABP_Vehicle_Cinematic_Base_C_BoneSetAsDamaged_Params params {};
		params.BoneName = BoneName;
		params.bDamaged = bDamaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetSpecialCarLights
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EFSpecialLightType                                 LightToModify                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Vehicle_Cinematic_Base_C::SetSpecialCarLights(EFSpecialLightType LightToModify, bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetSpecialCarLights");
		
		ABP_Vehicle_Cinematic_Base_C_SetSpecialCarLights_Params params {};
		params.LightToModify = LightToModify;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.MeshBrokenNearby
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     EventLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Vehicle_Cinematic_Base_C::MeshBrokenNearby(const struct FVector& EventLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.MeshBrokenNearby");
		
		ABP_Vehicle_Cinematic_Base_C_MeshBrokenNearby_Params params {};
		params.EventLocation = EventLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.CheckIfPhysStateCanBeDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Vehicle_Cinematic_Base_C::CheckIfPhysStateCanBeDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.CheckIfPhysStateCanBeDestroyed");
		
		ABP_Vehicle_Cinematic_Base_C_CheckIfPhysStateCanBeDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.ExecuteUbergraph_BP_Vehicle_Cinematic_Base
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Vehicle_Cinematic_Base_C::ExecuteUbergraph_BP_Vehicle_Cinematic_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.ExecuteUbergraph_BP_Vehicle_Cinematic_Base");
		
		ABP_Vehicle_Cinematic_Base_C_ExecuteUbergraph_BP_Vehicle_Cinematic_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Vehicle_Cinematic_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Vehicle_Cinematic_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C");
		return ptr;
	}

}


