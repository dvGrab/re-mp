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
	 * WidgetBlueprintGeneratedClass UI_HUDItem_Text.UI_HUDItem_Text_C
	 * Size -> 0x00A4 (FullSize[0x04E0] - InheritedSize[0x043C])
	 */
	class UUI_HUDItem_Text_C : public UUI_HUDItem_Base_C
	{
	public:
		unsigned char                                              UnknownData_YUEQ[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UImage*                                              Background;                                              // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_1;                                         // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MainCanvas;                                              // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGTAScalableRichTextBlock*                           ScalableTextBox;                                         // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDataTable*                                          OverrideTextStyleSet;                                    // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         ExtraItem;                                               // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         ExtraText;                                               // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                             OriginalHorizontalBoxMargin;                             // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TextIsScaled;                                            // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TYM9[0x7];                                   // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                LastScaledText;                                          // 0x0498(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LastScaledText_1;                                        // 0x04B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    frameWaitForText;                                        // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    framesWaitedForText;                                     // 0x04CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TextStartedFrames;                                       // 0x04D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H28K[0x4];                                   // 0x04D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGTAScalableRichTextBlock*                           ScaledExtraText;                                         // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ScaleTextDown();
		void CalcRightSideBackground(float* Right);
		void SetBackgroundSize(float Bottom, float Right);
		void ResizeTextToFitReasonably(float TextSize, float ExtraTextSizeMult, float DesiredSize);
		void UpdateBoxSize();
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
		void ExecuteUbergraph_UI_HUDItem_Text(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
