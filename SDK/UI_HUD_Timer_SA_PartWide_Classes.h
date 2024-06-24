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
	 * WidgetBlueprintGeneratedClass UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C
	 * Size -> 0x00F0 (FullSize[0x052C] - InheritedSize[0x043C])
	 */
	class UUI_HUD_Timer_SA_PartWide_C : public UUI_HUDItem_Base_C
	{
	public:
		unsigned char                                              UnknownData_E39I[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_104;                                               // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           LeftTextScaleBox;                                        // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MainCanvas;                                              // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      MainHorizontalBox;                                       // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      RichText;                                                // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      RichText2;                                               // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           TextScaleBox_2;                                          // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUserWidget*                                         ExtraItem;                                               // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                TestString;                                              // 0x0488(0x0018) Edit, BlueprintVisible
		class FText                                                TestString2;                                             // 0x04A0(0x0018) Edit, BlueprintVisible
		class UDataTable*                                          OverrideTextStyleSet;                                    // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHorizontalAlignment                                       LeftTextAlignment;                                       // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VI4N[0x7];                                   // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      DefaultFont;                                             // 0x04C8(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		class UClass*                                              BarClass;                                                // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BarSizeOverride;                                         // 0x0528(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetTextColor(class URichTextBlock* RichTextObject, const struct FLinearColor& NewColor);
		void CreateBar(ESlateSizeRule SizeRule);
		void CreateOrUpdateBar(float Value);
		void UpdateTimerText(const class FText& Text, class URichTextBlock* TextObject, bool SetColor, const struct FLinearColor& Color);
		void OnSynchronizeProperties();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void SetContentText(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void SetContentPercentOffset(float X, float Y);
		void SetPosition(float X, float Y, float Xmax, float Ymax);
		void SetImage(class UTexture2D* Texture);
		void SetImageColor(const struct FLinearColor& Color, bool forceVisible);
		void CustomFunctionWithFloat(const class FString& FunctionName, float floatNum);
		void CustomFunction(const class FString& FunctionName);
		void SetContentTextAdditional(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void Reset();
		void Construct();
		void ExecuteUbergraph_UI_HUD_Timer_SA_PartWide(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
