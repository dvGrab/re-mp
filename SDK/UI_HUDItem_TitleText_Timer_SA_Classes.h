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
	 * WidgetBlueprintGeneratedClass UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C
	 * Size -> 0x00EC (FullSize[0x0528] - InheritedSize[0x043C])
	 */
	class UUI_HUDItem_TitleText_Timer_SA_C : public UUI_HUDItem_Base_C
	{
	public:
		unsigned char                                              UnknownData_IJR2[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        MainCanvas;                                              // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBoxContainer;                                    // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDataTable*                                          OverrideTextStyleSet;                                    // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         ExtraItem;                                               // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateFontInfo                                      DefaultFont;                                             // 0x0468(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		EHorizontalAlignment                                       TextAlignment;                                           // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U3AA[0x7];                                   // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                TestString;                                              // 0x04C8(0x0018) Edit, BlueprintVisible
		float                                                      BarSizeOverride;                                         // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        L;                                                       // 0x04E4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GX7P[0x4];                                   // 0x04F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TextClass;                                               // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                TestString2;                                             // 0x0500(0x0018) Edit, BlueprintVisible
		bool                                                       UsingWideElements;                                       // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HDCK[0x7];                                   // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WideTextClass;                                           // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HideAdditional();
		void CreateNewVerticalEntry();
		void UpdateStrings(const class FString& Selection, TArray<class FString> TargetArray);
		void SetElementNum(int32_t NumItems, bool NeedsWideElement);
		void Set_Text_for_Element(int32_t Index, bool IsMainText, const class FText& TextValue, bool SetColor, const struct FLinearColor& Color);
		void UpdateTimerText(const class FText& InText, const struct FLinearColor& SpecifiedColor, class URichTextBlock* TextToUpdate);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void SetContentText(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void OnSynchronizeProperties();
		void SetContentPercentOffset(float X, float Y);
		void SetPosition(float X, float Y, float Xmax, float Ymax);
		void SetImage(class UTexture2D* Texture);
		void SetImageColor(const struct FLinearColor& Color, bool forceVisible);
		void CustomFunctionWithFloat(const class FString& FunctionName, float floatNum);
		void CustomFunction(const class FString& FunctionName);
		void SetContentTextAdditional(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void CustomFunctionWithStrings(const class FString& FunctionName, TArray<class FString> Strings);
		void CustomFunctionWithInteger(const class FString& FunctionName, int32_t integer);
		void CustomFunctionWithColor(const class FString& FunctionName, const struct FLinearColor& Color);
		void CustomFunctionWithColors(const class FString& FunctionName, TArray<struct FLinearColor> Colors);
		void ExecuteUbergraph_UI_HUDItem_TitleText_Timer_SA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
