#pragma once

/**
 * Name: GTASA
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
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetMeshComp
	 */
	struct ABP_Vehicle_Cinematic_Base_C_GetMeshComp_Params
	{
	public:
		class USkinnedMeshComponent*                               MeshComp;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSpecialLightMaterial
	 */
	struct ABP_Vehicle_Cinematic_Base_C_GetSpecialLightMaterial_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M74C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstanceConstant*                           On_Mat;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceConstant*                           Off_Mat;                                                 // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.UpdateMaterialForSpecialLight
	 */
	struct ABP_Vehicle_Cinematic_Base_C_UpdateMaterialForSpecialLight_Params
	{
	public:
		EFSpecialLightType                                         LightType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOn;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetLicenseBaseScale
	 */
	struct ABP_Vehicle_Cinematic_Base_C_GetLicenseBaseScale_Params
	{
	public:
		struct FVector2D                                           Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.Setup Heli Spot Light
	 */
	struct ABP_Vehicle_Cinematic_Base_C_Setup_Heli_Spot_Light_Params
	{
	public:
		class UBP_HelicopterSpotLight_C*                           SpotLight;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Target;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                SocketName;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSirenClass
	 */
	struct ABP_Vehicle_Cinematic_Base_C_GetSirenClass_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9TQF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              LightClass;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Socket;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetupSpecialLight
	 */
	struct ABP_Vehicle_Cinematic_Base_C_SetupSpecialLight_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULocalLightComponent*                                LightComp;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FlipX;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q9SS[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSpecialLightPointer
	 */
	struct ABP_Vehicle_Cinematic_Base_C_GetSpecialLightPointer_Params
	{
	public:
		EFSpecialLightType                                         Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M27L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPointLightComponent*                                Light;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.UpdateSpecialLight
	 */
	struct ABP_Vehicle_Cinematic_Base_C_UpdateSpecialLight_Params
	{
	public:
		EFSpecialLightType                                         LightType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldEnable;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZMJK[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSpecialLightInfo
	 */
	struct ABP_Vehicle_Cinematic_Base_C_GetSpecialLightInfo_Params
	{
	public:
		EFSpecialLightType                                         LightType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JVI5[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                SocketName;                                              // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2V34[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ComponentClass;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetTaxiLight
	 */
	struct ABP_Vehicle_Cinematic_Base_C_SetTaxiLight_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetLicensePlateMI
	 */
	struct ABP_Vehicle_Cinematic_Base_C_GetLicensePlateMI_Params
	{
	public:
		class UMaterialInstanceConstant*                           Out_MI;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetLicensePlateScale
	 */
	struct ABP_Vehicle_Cinematic_Base_C_GetLicensePlateScale_Params
	{
	public:
		struct FVector2D                                           OutScale;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetLicensePlate
	 */
	struct ABP_Vehicle_Cinematic_Base_C_SetLicensePlate_Params
	{
	public:
		class FString                                              WithText;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetupHeadlightOption
	 */
	struct ABP_Vehicle_Cinematic_Base_C_SetupHeadlightOption_Params
	{
	public:
		struct FGTAHeadlightSetting                                Setting;                                                 // 0x0000(0x0014)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetMaterialsAsScorched
	 */
	struct ABP_Vehicle_Cinematic_Base_C_SetMaterialsAsScorched_Params
	{
	public:
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UPrimitiveComponent*                                 Mesh;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetVehicleLightMaterials
	 */
	struct ABP_Vehicle_Cinematic_Base_C_GetVehicleLightMaterials_Params
	{
	public:
		int32_t                                                    Light_Index;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_990V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstanceConstant*                           On_Material;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceConstant*                           Off_Material;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetLightMaterials
	 */
	struct ABP_Vehicle_Cinematic_Base_C_GetLightMaterials_Params
	{
	public:
		int32_t                                                    LightIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U96L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstanceConstant*                           OnMaterial;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceConstant*                           OffMaterial;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSearchMaterials
	 */
	struct ABP_Vehicle_Cinematic_Base_C_GetSearchMaterials_Params
	{
	public:
		TArray<class UMaterialInstanceConstant*>                   Materials;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.IsBodyMaterial
	 */
	struct ABP_Vehicle_Cinematic_Base_C_IsBodyMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Mat;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsBody;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0S6M[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.EnableLight
	 */
	struct ABP_Vehicle_Cinematic_Base_C_EnableLight_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H9SL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULocalLightComponent*                                LightComp;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    materialIndex;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OGHY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstanceConstant*                           Material_On;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceConstant*                           Material_Off;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetupLight
	 */
	struct ABP_Vehicle_Cinematic_Base_C_SetupLight_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULocalLightComponent*                                LightComp;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FlipX;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DQCP[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    materialIndex;                                           // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceConstant*                           MaterialSearch;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetCarLights
	 */
	struct ABP_Vehicle_Cinematic_Base_C_SetCarLights_Params
	{
	public:
		bool                                                       bLeftHeadlight;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRightHeadlight;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLeftTaillight;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRightTaillight;                                         // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       useDimLeftTailLight;                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       useDimRightTailLight;                                    // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetupVehicleBP
	 */
	struct ABP_Vehicle_Cinematic_Base_C_SetupVehicleBP_Params
	{	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetScorched
	 */
	struct ABP_Vehicle_Cinematic_Base_C_SetScorched_Params
	{
	public:
		bool                                                       scorched;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.BoneSetAsDamaged
	 */
	struct ABP_Vehicle_Cinematic_Base_C_BoneSetAsDamaged_Params
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDamaged;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetSpecialCarLights
	 */
	struct ABP_Vehicle_Cinematic_Base_C_SetSpecialCarLights_Params
	{
	public:
		EFSpecialLightType                                         LightToModify;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bEnable;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.MeshBrokenNearby
	 */
	struct ABP_Vehicle_Cinematic_Base_C_MeshBrokenNearby_Params
	{
	public:
		struct FVector                                             EventLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.CheckIfPhysStateCanBeDestroyed
	 */
	struct ABP_Vehicle_Cinematic_Base_C_CheckIfPhysStateCanBeDestroyed_Params
	{	};

	/**
	 * Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.ExecuteUbergraph_BP_Vehicle_Cinematic_Base
	 */
	struct ABP_Vehicle_Cinematic_Base_C_ExecuteUbergraph_BP_Vehicle_Cinematic_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
