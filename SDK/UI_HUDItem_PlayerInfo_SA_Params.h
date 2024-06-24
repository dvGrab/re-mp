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
	 * Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.SetMoneyOnlyMode
	 */
	struct UUI_HUDItem_PlayerInfo_SA_C_SetMoneyOnlyMode_Params
	{
	public:
		bool                                                       MakeMoneyOnly;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5G24[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetWeaponImage
	 */
	struct UUI_HUDItem_PlayerInfo_SA_C_GetWeaponImage_Params
	{
	public:
		class UImage*                                              WeaponImage;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetTimeText
	 */
	struct UUI_HUDItem_PlayerInfo_SA_C_GetTimeText_Params
	{
	public:
		class UTextBlock*                                          TimeText;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetMoneyText
	 */
	struct UUI_HUDItem_PlayerInfo_SA_C_GetMoneyText_Params
	{
	public:
		class UTextBlock*                                          MoneyText;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetHealthBar
	 */
	struct UUI_HUDItem_PlayerInfo_SA_C_GetHealthBar_Params
	{
	public:
		class UProgressBar*                                        HealthBar;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetBreathMeter
	 */
	struct UUI_HUDItem_PlayerInfo_SA_C_GetBreathMeter_Params
	{
	public:
		class UProgressBar*                                        BreathMeter;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetArmorBar
	 */
	struct UUI_HUDItem_PlayerInfo_SA_C_GetArmorBar_Params
	{
	public:
		class UProgressBar*                                        ArmorBar;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetWantedStarsBox
	 */
	struct UUI_HUDItem_PlayerInfo_SA_C_GetWantedStarsBox_Params
	{
	public:
		class UHorizontalBox*                                      WantedStarsBox;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetRightWeaponArrow
	 */
	struct UUI_HUDItem_PlayerInfo_SA_C_GetRightWeaponArrow_Params
	{
	public:
		class UImage*                                              RightWeaponArrow;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetLeftWeaponArrow
	 */
	struct UUI_HUDItem_PlayerInfo_SA_C_GetLeftWeaponArrow_Params
	{
	public:
		class UImage*                                              LeftWeaponArrow;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetAmmoText
	 */
	struct UUI_HUDItem_PlayerInfo_SA_C_GetAmmoText_Params
	{
	public:
		class UTextBlock*                                          AmmoText;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.SetupStars
	 */
	struct UUI_HUDItem_PlayerInfo_SA_C_SetupStars_Params
	{	};

	/**
	 * Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.Tick
	 */
	struct UUI_HUDItem_PlayerInfo_SA_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.CustomFunction
	 */
	struct UUI_HUDItem_PlayerInfo_SA_C_CustomFunction_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.ExecuteUbergraph_UI_HUDItem_PlayerInfo_SA
	 */
	struct UUI_HUDItem_PlayerInfo_SA_C_ExecuteUbergraph_UI_HUDItem_PlayerInfo_SA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
