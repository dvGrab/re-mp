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
	 * WidgetBlueprintGeneratedClass UI_SlotButton_Message.UI_SlotButton_Message_C
	 * Size -> 0x003A (FullSize[0x0612] - InheritedSize[0x05D8])
	 */
	class UUI_SlotButton_Message_C : public UUI_SlotButton_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UScaleBox*                                           LeftScale;                                               // 0x05E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             MainButton;                                              // 0x05E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            MainSizeBox;                                             // 0x05F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          OptionNameText;                                          // 0x05F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           RightScale;                                              // 0x0600(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RightText;                                               // 0x0608(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       JustLeftMessage;                                         // 0x0610(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DidConstruct;                                            // 0x0611(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetFont(const struct FSlateFontInfo& NewFont);
		void OverrideAltText(const class FText& NewText);
		void SetHeight(float NewHeight);
		void GetSlotButton(class UButton** SlotButton);
		void UpdateTextColor();
		void UpdateBGColor();
		void SetSelectedBackgroundColor(const struct FSlateColor& InColor);
		void OverrideMainText(const class FText& NewText);
		void InitSlotButton(class UGameterSettings* SettingsObject);
		void SetBackgroundColor(const struct FSlateColor& InColor);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void InteractedWithSelectionSlot(unsigned char InteractionType, int32_t BoundValue, class UUI_SlotButton_C* SlotButton);
		void Construct();
		void SetJustLeftMessage(bool JustLeft);
		void ExecuteUbergraph_UI_SlotButton_Message(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
