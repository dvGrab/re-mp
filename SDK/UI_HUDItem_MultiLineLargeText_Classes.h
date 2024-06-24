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
	 * WidgetBlueprintGeneratedClass UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C
	 * Size -> 0x00C4 (FullSize[0x0500] - InheritedSize[0x043C])
	 */
	class UUI_HUDItem_MultiLineLargeText_C : public UUI_HUDItem_Base_C
	{
	public:
		unsigned char                                              UnknownData_DGNA[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        MainCanvas;                                              // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      RichText;                                                // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDataTable*                                          OverrideTextStyleSet;                                    // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         ExtraItem;                                               // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         ExtraText;                                               // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateFontInfo                                      DefaultFont;                                             // 0x0470(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		class FText                                                TestString;                                              // 0x04C8(0x0018) Edit, BlueprintVisible
		EHorizontalAlignment                                       TextAlignment;                                           // 0x04E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9X45[0x7];                                   // 0x04E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                LastScaledText;                                          // 0x04E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateBoxSize();
		void UpdateTextBox();
		void UpdateMainText(const class FText& InText, const struct FLinearColor& SpecifiedColor);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void SetContentText(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void OnSynchronizeProperties();
		void SetContentPercentOffset(float X, float Y);
		void SetPosition(float X, float Y, float Xmax, float Ymax);
		void SetImage(class UTexture2D* Texture);
		void SetImageColor(const struct FLinearColor& Color, bool forceVisible);
		void ExecuteUbergraph_UI_HUDItem_MultiLineLargeText(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
