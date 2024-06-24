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
	 * WidgetBlueprintGeneratedClass WeaponWheelItem.WeaponWheelItem_C
	 * Size -> 0x0060 (FullSize[0x02F0] - InheritedSize[0x0290])
	 */
	class UWeaponWheelItem_C : public UUI_DesignTimeUserWidget
	{
	public:
		class UCanvasPanel*                                        MainCanvas;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MainImage;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            MainSizeBox;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MainText;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLinearColor                                        AvailableColor;                                          // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        UnavailableColor;                                        // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              WeaponNameString;                                        // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              AmmoString;                                              // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash

	public:
		void Set_Image_Material_for_Item(class UMaterialInterface* NewParam, bool Enabled, const class FString& string, const class FString& extraString);
		void SetText(const class FString& string);
		void HideImage();
		void Set_Image(class UTexture2D* Texture, bool Enabled, const class FString& string, const class FString& extraString);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
