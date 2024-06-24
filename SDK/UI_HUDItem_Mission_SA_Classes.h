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
	 * WidgetBlueprintGeneratedClass UI_HUDItem_Mission_SA.UI_HUDItem_Mission_SA_C
	 * Size -> 0x003C (FullSize[0x0494] - InheritedSize[0x0458])
	 */
	class UUI_HUDItem_Mission_SA_C : public UUI_HUDItem_FullScreenText_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0458(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BackgroundImage;                                         // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        ContentCanvas;                                           // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUDItem_MultiLineLargeText_C*                    multiline_richtext;                                      // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      BackgroundVerticalPadding;                               // 0x0478(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BackgroundHorizontalPadding;                             // 0x047C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                             BackgroundOriginalMargins;                               // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ExtraBottomPadding;                                      // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateText();
		void GetMainContentCanvasSlot(class UCanvasPanelSlot** ContentCanvasSlot);
		void GetRichText(class URichTextBlock** Text);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void SetContentText(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void ExecuteUbergraph_UI_HUDItem_Mission_SA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
