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
	 * WidgetBlueprintGeneratedClass RadioWheelItem.RadioWheelItem_C
	 * Size -> 0x0130 (FullSize[0x03C0] - InheritedSize[0x0290])
	 */
	class URadioWheelItem_C : public UUI_DesignTimeUserWidget
	{
	public:
		class UImage*                                              Background;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MainCanvas;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MainImage;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            MainSizeBox;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MainText;                                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RingBackground;                                          // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FRadioWheelColors                                   Colors;                                                  // 0x02C0(0x00F0) Edit, BlueprintVisible, HasGetValueTypeHash
		class FString                                              TextValue;                                               // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash

	public:
		void SetSelected(bool IsSelected);
		void IsImageHidden(bool* IsHidden);
		void HideImage();
		void SetImage(class UTexture2D* Texture);
		void SetText(const class FString& NewString);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
