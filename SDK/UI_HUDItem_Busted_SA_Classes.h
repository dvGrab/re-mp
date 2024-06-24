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
	 * WidgetBlueprintGeneratedClass UI_HUDItem_Busted_SA.UI_HUDItem_Busted_SA_C
	 * Size -> 0x0020 (FullSize[0x0478] - InheritedSize[0x0458])
	 */
	class UUI_HUDItem_Busted_SA_C : public UUI_HUDItem_FullScreenText_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0458(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_375;                                               // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      RichText;                                                // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           TextScaleBox;                                            // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void GetMainContentCanvasSlot(class UCanvasPanelSlot** ContentCanvasSlot);
		void GetRichText(class URichTextBlock** Text);
		void Construct();
		void ExecuteUbergraph_UI_HUDItem_Busted_SA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
