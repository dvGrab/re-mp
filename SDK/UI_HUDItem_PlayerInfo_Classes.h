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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C
	 * Size -> 0x00C1 (FullSize[0x04FD] - InheritedSize[0x043C])
	 */
	class UUI_HUDItem_PlayerInfo_C : public UUI_HUDItem_Base_C
	{
	public:
		unsigned char                                              UnknownData_YH97[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UImage*>                                      WantedStars;                                             // 0x0448(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       IsBlinking;                                              // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KVAF[0x3];                                   // 0x0459(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeSinceBlink;                                          // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LastWantedLevel;                                         // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LastParoleLevel;                                         // 0x0464(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateColor                                         WantedStarColorOff;                                      // 0x0468(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         WantedStarColorOn;                                       // 0x0490(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         WantedStarColorParole;                                   // 0x04B8(0x0028) Edit, BlueprintVisible
		float                                                      WantedStarBlinkOnTime;                                   // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WantedStarBlinkOffTime;                                  // 0x04E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DoStarsStayOn;                                           // 0x04E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AFIY[0x3];                                   // 0x04E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        MoneyTextColor;                                          // 0x04EC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMoneyOnlyMode;                                         // 0x04FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetMoneyOnlyMode(bool MakeMoneyOnly);
		void UpdateTextWithNumber(class UTextBlock* InText, int32_t Number, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits);
		void GetArmorText(class UTextBlock** ArmorText);
		void GetHealthText(class UTextBlock** HealthText);
		void GetWeaponImage(class UImage** WeaponImage);
		void GetTimeText(class UTextBlock** TimeText);
		void GetMoneyText(class UTextBlock** MoneyText);
		void GetHealthBar(class UProgressBar** HealthBar);
		void GetBreathMeter(class UProgressBar** BreathMeter);
		void GetArmorBar(class UProgressBar** ArmorBar);
		void GetWantedStarsBox(class UHorizontalBox** WantedStarsBox);
		void GetRightWeaponArrow(class UImage** RightWeaponArrow);
		void GetLeftWeaponArrow(class UImage** LeftWeaponArrow);
		void GetAmmoText(class UTextBlock** AmmoText);
		void SetupStars();
		void UpdateWantedBlink(float dT);
		void UpdateWantedLevel(int32_t Wanted, int32_t Parole, bool DoBlink);
		void SetBarSizeAndFill(class UProgressBar* ProgressBar, float BarPercent, float BarWidth);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void SetImage(class UTexture2D* Texture);
		void SetContentText(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void SetFillBarSizeAndFill(float FillBarPct, float FillBarSize);
		void SetSecondFillBarSizeAndFill(float FillBarPct, float FillBarSize);
		void SetTotalWidgetColor(const struct FLinearColor& Color);
		void SetThirdFillBarSizeAndFill(float FillBarPct, float FillBarSize);
		void SetWantedLevel(int32_t numStars, int32_t numParole, bool bIsBlinking);
		void SetThirdImage(class UTexture2D* Texture);
		void SetThirdImageColor(const struct FLinearColor& Color);
		void SetFourthImage(class UTexture2D* Texture);
		void SetFourthImageColor(const struct FLinearColor& Color);
		void SetContentTextAdditional(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void SetContentTextThree(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void SetContentTextFour(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void SetContentTextFive(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void ExecuteUbergraph_UI_HUDItem_PlayerInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
