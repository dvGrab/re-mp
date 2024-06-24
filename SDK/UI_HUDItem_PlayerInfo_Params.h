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
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetMoneyOnlyMode
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetMoneyOnlyMode_Params
	{
	public:
		bool                                                       MakeMoneyOnly;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.UpdateTextWithNumber
	 */
	struct UUI_HUDItem_PlayerInfo_C_UpdateTextWithNumber_Params
	{
	public:
		class UTextBlock*                                          InText;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Number;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MinimumIntegralDigits;                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaximumIntegralDigits;                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetArmorText
	 */
	struct UUI_HUDItem_PlayerInfo_C_GetArmorText_Params
	{
	public:
		class UTextBlock*                                          ArmorText;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetHealthText
	 */
	struct UUI_HUDItem_PlayerInfo_C_GetHealthText_Params
	{
	public:
		class UTextBlock*                                          HealthText;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetWeaponImage
	 */
	struct UUI_HUDItem_PlayerInfo_C_GetWeaponImage_Params
	{
	public:
		class UImage*                                              WeaponImage;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetTimeText
	 */
	struct UUI_HUDItem_PlayerInfo_C_GetTimeText_Params
	{
	public:
		class UTextBlock*                                          TimeText;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetMoneyText
	 */
	struct UUI_HUDItem_PlayerInfo_C_GetMoneyText_Params
	{
	public:
		class UTextBlock*                                          MoneyText;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetHealthBar
	 */
	struct UUI_HUDItem_PlayerInfo_C_GetHealthBar_Params
	{
	public:
		class UProgressBar*                                        HealthBar;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetBreathMeter
	 */
	struct UUI_HUDItem_PlayerInfo_C_GetBreathMeter_Params
	{
	public:
		class UProgressBar*                                        BreathMeter;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetArmorBar
	 */
	struct UUI_HUDItem_PlayerInfo_C_GetArmorBar_Params
	{
	public:
		class UProgressBar*                                        ArmorBar;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetWantedStarsBox
	 */
	struct UUI_HUDItem_PlayerInfo_C_GetWantedStarsBox_Params
	{
	public:
		class UHorizontalBox*                                      WantedStarsBox;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetRightWeaponArrow
	 */
	struct UUI_HUDItem_PlayerInfo_C_GetRightWeaponArrow_Params
	{
	public:
		class UImage*                                              RightWeaponArrow;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetLeftWeaponArrow
	 */
	struct UUI_HUDItem_PlayerInfo_C_GetLeftWeaponArrow_Params
	{
	public:
		class UImage*                                              LeftWeaponArrow;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetAmmoText
	 */
	struct UUI_HUDItem_PlayerInfo_C_GetAmmoText_Params
	{
	public:
		class UTextBlock*                                          AmmoText;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetupStars
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetupStars_Params
	{	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.UpdateWantedBlink
	 */
	struct UUI_HUDItem_PlayerInfo_C_UpdateWantedBlink_Params
	{
	public:
		float                                                      dT;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.UpdateWantedLevel
	 */
	struct UUI_HUDItem_PlayerInfo_C_UpdateWantedLevel_Params
	{
	public:
		int32_t                                                    Wanted;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Parole;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DoBlink;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T6OR[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetBarSizeAndFill
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetBarSizeAndFill_Params
	{
	public:
		class UProgressBar*                                        ProgressBar;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BarPercent;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BarWidth;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.Construct
	 */
	struct UUI_HUDItem_PlayerInfo_C_Construct_Params
	{	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.Tick
	 */
	struct UUI_HUDItem_PlayerInfo_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetImage
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetImage_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetContentText
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetContentText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        FontColorOverride;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetFillBarSizeAndFill
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetFillBarSizeAndFill_Params
	{
	public:
		float                                                      FillBarPct;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FillBarSize;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetSecondFillBarSizeAndFill
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetSecondFillBarSizeAndFill_Params
	{
	public:
		float                                                      FillBarPct;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FillBarSize;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetTotalWidgetColor
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetTotalWidgetColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetThirdFillBarSizeAndFill
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetThirdFillBarSizeAndFill_Params
	{
	public:
		float                                                      FillBarPct;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FillBarSize;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetWantedLevel
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetWantedLevel_Params
	{
	public:
		int32_t                                                    numStars;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    numParole;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsBlinking;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetThirdImage
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetThirdImage_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetThirdImageColor
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetThirdImageColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetFourthImage
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetFourthImage_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetFourthImageColor
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetFourthImageColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetContentTextAdditional
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetContentTextAdditional_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        FontColorOverride;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetContentTextThree
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetContentTextThree_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        FontColorOverride;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetContentTextFour
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetContentTextFour_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        FontColorOverride;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetContentTextFive
	 */
	struct UUI_HUDItem_PlayerInfo_C_SetContentTextFive_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        FontColorOverride;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.ExecuteUbergraph_UI_HUDItem_PlayerInfo
	 */
	struct UUI_HUDItem_PlayerInfo_C_ExecuteUbergraph_UI_HUDItem_PlayerInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
