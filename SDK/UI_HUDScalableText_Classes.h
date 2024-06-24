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
	 * WidgetBlueprintGeneratedClass UI_HUDScalableText.UI_HUDScalableText_C
	 * Size -> 0x0070 (FullSize[0x0300] - InheritedSize[0x0290])
	 */
	class UUI_HUDScalableText_C : public UUI_DesignTimeUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UGTAScalableRichTextBlock*                           MainScalableText;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           TextScaleBox;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateFontInfo                                      Font;                                                    // 0x02A8(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash

	public:
		void GetTextScaleBox(class UScaleBox** ScaleBox);
		void GetTextContentObject(class UGTAScalableRichTextBlock** MainButtonText);
		void Construct();
		void OnSynchronizeProperties();
		void ExecuteUbergraph_UI_HUDScalableText(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
