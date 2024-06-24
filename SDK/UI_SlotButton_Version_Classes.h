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
	 * WidgetBlueprintGeneratedClass UI_SlotButton_Version.UI_SlotButton_Version_C
	 * Size -> 0x0028 (FullSize[0x0600] - InheritedSize[0x05D8])
	 */
	class UUI_SlotButton_Version_C : public UUI_SlotButton_C
	{
	public:
		class UImage*                                              Image;                                                   // 0x05D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           LeftScale;                                               // 0x05E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            MainSizeBox;                                             // 0x05E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SlotButton;                                              // 0x05F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          VersionText;                                             // 0x05F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void UpdateTextColor();
		void OverrideMainText(const class FText& NewText);
		void SetMainText(const class FText& InText);
		void SetHeight(float NewHeight);
		void GetSlotButton(class UButton** SlotButton);
		void SetBackgroundColor(const struct FSlateColor& InColor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
