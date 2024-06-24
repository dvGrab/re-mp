#pragma once

/**
 * Name: GTA-SA-DEF
 * Version: 0.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.GetChannelMultipliers
	 */
	struct ABP_ExteriorWindowLights_C_GetChannelMultipliers_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ETCG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.ToColorAndIntensity
	 */
	struct ABP_ExteriorWindowLights_C_ToColorAndIntensity_Params
	{
	public:
		struct FLinearColor                                        FullColor;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BaseIntensity;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        NormalizedColor;                                         // 0x0014(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewIntensity;                                            // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.SetupRectLight
	 */
	struct ABP_ExteriorWindowLights_C_SetupRectLight_Params
	{
	public:
		float                                                      Width;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Height;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        NewLightColor;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L5O0[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Trx;                                                     // 0x0020(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class URectLightComponent*                                 Component;                                               // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class URectLightComponent*                                 ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.SetupPointLight
	 */
	struct ABP_ExteriorWindowLights_C_SetupPointLight_Params
	{
	public:
		float                                                      Width;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Height;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        NewLightColor;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RROB[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Trx;                                                     // 0x0020(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class UPointLightComponent*                                Component;                                               // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPointLightComponent*                                ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.ConstructLight
	 */
	struct ABP_ExteriorWindowLights_C_ConstructLight_Params
	{
	public:
		int32_t                                                    detailSetting;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H17O[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Trx;                                                     // 0x0010(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        lightColor;                                              // 0x0040(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Width;                                                   // 0x0050(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Height;                                                  // 0x0054(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULightComponent*                                     ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.ParamsFromEmissiveMat
	 */
	struct ABP_ExteriorWindowLights_C_ParamsFromEmissiveMat_Params
	{
	public:
		class UMaterialInstanceConstant*                           WindowMIC;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Multiplier;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FJKN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWindowLightCollectionParameters                    Params;                                                  // 0x0010(0x0058)  (Parm, OutParm, NoDestructor)
		bool                                                       bValid;                                                  // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C43N[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.ParamsFromWindowMat
	 */
	struct ABP_ExteriorWindowLights_C_ParamsFromWindowMat_Params
	{
	public:
		class UMaterialInstanceConstant*                           WindowMIC;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Multiplier;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4LZU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWindowLightCollectionParameters                    Params;                                                  // 0x0010(0x0058)  (Parm, OutParm, NoDestructor)
		bool                                                       bValid;                                                  // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9QIC[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.GetWindowMaterialColorMult
	 */
	struct ABP_ExteriorWindowLights_C_GetWindowMaterialColorMult_Params
	{
	public:
		class UMaterialInstanceConstant*                           WindowMIC;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Out;                                                     // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bUseInverseAlphaModulate;                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WT0B[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          BaseColor;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExteriorWindowLights.BP_ExteriorWindowLights_C.IsEmissiveWindowMaterial
	 */
	struct ABP_ExteriorWindowLights_C_IsEmissiveWindowMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Mat;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGTAMaterialData*                                    UserData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FWindowLightCollectionParameters                    Params;                                                  // 0x0010(0x0058)  (Parm, OutParm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
