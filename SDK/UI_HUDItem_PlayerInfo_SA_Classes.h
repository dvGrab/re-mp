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
	 * WidgetBlueprintGeneratedClass UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C
	 * Size -> 0x00D3 (FullSize[0x05D0] - InheritedSize[0x04FD])
	 */
	class UUI_HUDItem_PlayerInfo_SA_C : public UUI_HUDItem_PlayerInfo_C
	{
	public:
		unsigned char                                              UnknownData_95C0[0x3];                                   // 0x04FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0500(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScaleBox*                                           AmmoScaleBox;                                            // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          AmmoText;                                                // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        ArmorBar;                                                // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BorderImage;                                             // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        BreathMeter;                                             // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        HealthBar;                                               // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LeftWeaponArrow;                                         // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           MoneyScaleBox;                                           // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MoneyText;                                               // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RightWeaponArrow;                                        // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Star1;                                                   // 0x0558(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Star2;                                                   // 0x0560(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Star3;                                                   // 0x0568(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Star4;                                                   // 0x0570(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Star5;                                                   // 0x0578(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Star6;                                                   // 0x0580(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           TimeScaleBox;                                            // 0x0588(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TimeText;                                                // 0x0590(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      WantedStarsBox;                                          // 0x0598(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              WeaponImage;                                             // 0x05A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           WeaponScaleBox;                                          // 0x05A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FAnchors                                            InitialMoneyAnchor;                                      // 0x05B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FAnchors                                            InitialTimeAnchor;                                       // 0x05C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void SetMoneyOnlyMode(bool MakeMoneyOnly);
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
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void CustomFunction(const class FString& FunctionName);
		void ExecuteUbergraph_UI_HUDItem_PlayerInfo_SA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
