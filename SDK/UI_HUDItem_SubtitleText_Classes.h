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
	 * WidgetBlueprintGeneratedClass UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C
	 * Size -> 0x003C (FullSize[0x0478] - InheritedSize[0x043C])
	 */
	class UUI_HUDItem_SubtitleText_C : public UUI_HUDItem_Base_C
	{
	public:
		unsigned char                                              UnknownData_1COA[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UHorizontalBox*                                      HorizontalBox_1;                                         // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MainCanvas;                                              // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGTAScalableRichTextBlock*                           ScalableTextBox;                                         // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDataTable*                                          OverrideTextStyleSet;                                    // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         ExtraItem;                                               // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         ExtraText;                                               // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCurrentTextObject(class URichTextBlock** TextBox);
		void UpdateMainText(const class FText& InText, const struct FLinearColor& SpecifiedColor);
		void CreateOrUpdateAdditionalText(const class FText& NewText, const struct FLinearColor& Color);
		void RemoveAdditionalText();
		void CreateAdditionalText();
		void CreateBar();
		void RemoveProgressBar();
		void CreateOrUpdateProgressBar(TArray<float>* Info, const struct FLinearColor& Color);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void SetImageColor(const struct FLinearColor& Color, bool forceVisible);
		void SetContentText(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void OnSynchronizeProperties();
		void SetContentPercentOffset(float X, float Y);
		void CustomFunctionWithFloats(const class FString& FunctionName, TArray<float> Floats);
		void CustomFunctionWithColor(const class FString& FunctionName, const struct FLinearColor& Color);
		void CustomFunctionWithFloat(const class FString& FunctionName, float floatNum);
		void SetContentTextAdditional(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void RefreshAfterSettingsChange();
		void ClearDataOnHide();
		void ExecuteUbergraph_UI_HUDItem_SubtitleText(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
