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
	 * WidgetBlueprintGeneratedClass UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C
	 * Size -> 0x0104 (FullSize[0x0540] - InheritedSize[0x043C])
	 */
	class UUI_HUD_HealthBar_SA_Part_C : public UUI_HUDItem_Base_C
	{
	public:
		unsigned char                                              UnknownData_T7BZ[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_HUDBar_C*                                        Bar;                                                     // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           BarScaleBox;                                             // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MainCanvas;                                              // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      MainHorizontalBox;                                       // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      RichText;                                                // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      RichText2;                                               // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           RightTextScaleBox;                                       // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUserWidget*                                         ExtraItem;                                               // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                TestString;                                              // 0x0488(0x0018) Edit, BlueprintVisible
		class UDataTable*                                          OverrideTextStyleSet;                                    // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHorizontalAlignment                                       LeftTextAlignment;                                       // 0x04A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OQPS[0x7];                                   // 0x04A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      DefaultFont;                                             // 0x04B0(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		class UClass*                                              BarClass;                                                // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BarSizeOverride;                                         // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        PrimaryBarColor;                                         // 0x0514(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SecondaryBarColor;                                       // 0x0524(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHorizontalAlignment                                       RightTextAlignment;                                      // 0x0534(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VAWG[0x3];                                   // 0x0535(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          BoarderImageOverride;                                    // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetBarColor(const struct FLinearColor& Color);
		void SetTextColor(class URichTextBlock* RichTextObject, const struct FLinearColor& NewColor);
		void UpdateBar(float Value);
		void UpdateTimerText(const class FText& Text, class URichTextBlock* TextObject, bool SetColor, const struct FLinearColor& Color);
		void Construct();
		void OnSynchronizeProperties();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void SetContentText(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void SetContentPercentOffset(float X, float Y);
		void SetPosition(float X, float Y, float Xmax, float Ymax);
		void SetImage(class UTexture2D* Texture);
		void SetImageColor(const struct FLinearColor& Color, bool forceVisible);
		void CustomFunctionWithFloat(const class FString& FunctionName, float floatNum);
		void CustomFunction(const class FString& FunctionName);
		void Reset();
		void SetContentTextAdditional(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void ExecuteUbergraph_UI_HUD_HealthBar_SA_Part(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
