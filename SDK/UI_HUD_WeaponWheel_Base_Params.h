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
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.GetWeaponWheelItemOffset
	 */
	struct UUI_HUD_WeaponWheel_Base_C_GetWeaponWheelItemOffset_Params
	{
	public:
		float                                                      NewParam;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.GetRadioWheelItemOffset
	 */
	struct UUI_HUD_WeaponWheel_Base_C_GetRadioWheelItemOffset_Params
	{
	public:
		float                                                      NewParam;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupDynamicMat
	 */
	struct UUI_HUD_WeaponWheel_Base_C_SetupDynamicMat_Params
	{	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.AddTextToImages
	 */
	struct UUI_HUD_WeaponWheel_Base_C_AddTextToImages_Params
	{
	public:
		TArray<class FString>                                      Array;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupStrings
	 */
	struct UUI_HUD_WeaponWheel_Base_C_SetupStrings_Params
	{
	public:
		TArray<class FString>                                      Images;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupNewText
	 */
	struct UUI_HUD_WeaponWheel_Base_C_SetupNewText_Params
	{
	public:
		class FString                                              string;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Length;                                                  // 0x0014(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.UpdateSelection
	 */
	struct UUI_HUD_WeaponWheel_Base_C_UpdateSelection_Params
	{	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetSelection
	 */
	struct UUI_HUD_WeaponWheel_Base_C_SetSelection_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.Setup New Image
	 */
	struct UUI_HUD_WeaponWheel_Base_C_Setup_New_Image_Params
	{
	public:
		class UObject*                                             Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Length;                                                  // 0x000C(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Enabled;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F2RX[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              string;                                                  // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              extraString;                                             // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UUserWidget*                                         ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupSections
	 */
	struct UUI_HUD_WeaponWheel_Base_C_SetupSections_Params
	{
	public:
		int32_t                                                    NumSections;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupImages
	 */
	struct UUI_HUD_WeaponWheel_Base_C_SetupImages_Params
	{
	public:
		TArray<struct FSlotImageStruct>                            Images;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.Tick
	 */
	struct UUI_HUD_WeaponWheel_Base_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.OnSynchronizeProperties
	 */
	struct UUI_HUD_WeaponWheel_Base_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.Construct
	 */
	struct UUI_HUD_WeaponWheel_Base_C_Construct_Params
	{	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.CustomFunctionWithObjects
	 */
	struct UUI_HUD_WeaponWheel_Base_C_CustomFunctionWithObjects_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<struct FSlotImageStruct>                            Objects;                                                 // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.CustomFunctionWithInteger
	 */
	struct UUI_HUD_WeaponWheel_Base_C_CustomFunctionWithInteger_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    integer;                                                 // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.CustomFunctionWithStrings
	 */
	struct UUI_HUD_WeaponWheel_Base_C_CustomFunctionWithStrings_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<class FString>                                      Strings;                                                 // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.CustomFunctionWithFloat
	 */
	struct UUI_HUD_WeaponWheel_Base_C_CustomFunctionWithFloat_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      floatNum;                                                // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.ExecuteUbergraph_UI_HUD_WeaponWheel_Base
	 */
	struct UUI_HUD_WeaponWheel_Base_C_ExecuteUbergraph_UI_HUD_WeaponWheel_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
