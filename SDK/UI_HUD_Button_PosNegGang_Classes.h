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
	 * WidgetBlueprintGeneratedClass UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C
	 * Size -> 0x00AD (FullSize[0x04E9] - InheritedSize[0x043C])
	 */
	class UUI_HUD_Button_PosNegGang_C : public UUI_HUDItem_Base_C
	{
	public:
		unsigned char                                              UnknownData_S6FX[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Hide;                                                    // 0x0448(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Show;                                                    // 0x0450(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        ButtonCanvas;                                            // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        HelpCanvas;                                              // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon;                                                    // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon2;                                                   // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        TextCanvas;                                              // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMaterial*                                           SpriteMaterial;                                          // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              CurrentMappingWidget[0x28];                              // 0x0488(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FTimerHandle                                        MappingTImerHandle;                                      // 0x04B0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              CurrentTextContent[0x28];                                // 0x04B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FTimerHandle                                        TextTImerHandle;                                         // 0x04E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       IgnoreTextTimer;                                         // 0x04E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Reset_Text_Content_Timer();
		void GetTextContent(class UUI_HUDText_C** Text);
		void DestroyTextContent();
		void CreateOrGetTextContent(class UUI_HUDText_C** Output);
		void Set_Main_Text(const class FText& Text, const struct FLinearColor& Color);
		void GetMappingWidget(class UUI_HUD_MappingImage_C** Output);
		class UUI_HUD_MappingImage_C* CreateOrGetMappingWidget();
		void DestroyMappingWidget();
		void SetTextValue(const class FText& InText, const struct FLinearColor& LinearColor, class UTextBlock* Target);
		void SetSpecificImageLocation(class UCanvasPanelSlot* Slot, float xMin, float yMin, float Xmax, float Ymax, bool Debug);
		void Set_Icon_Anchors(class UCanvasPanelSlot* Slot, const struct FAnchors& DefaultAnchor, float xMin, float Xmax, float yMin, float Ymax);
		void SetHelpImage(class UTexture2D* InTexture, float U, float V, float ULength, float VLength, const struct FLinearColor& InColor);
		void StartShowHide(bool DoShow);
		void SetImage(class UTexture2D* Texture);
		void SetImageColor(const struct FLinearColor& Color, bool forceVisible);
		void SetMappingImage(class UTexture2D* Tex, float U, float V, float ULength, float VLength, const struct FLinearColor& Color);
		void Construct();
		void OverrideMappingImageLocation(float XMinOverride, float XMaxOverride, float YMinOverride, float YMaxOverride);
		void SetSecondImageColor(const struct FLinearColor& Color);
		void SetImageOffsets(float xMin, float yMin, float Xmax, float Ymax);
		void SetImageAnchors(float xMin, float Xmax, float yMin, float Ymax);
		void SetContentText(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void SetContentTextAnchors(float xMin, float Xmax, float yMin, float Ymax);
		void SetImageWithSpriteSheet(class UTexture2D* Texture, float U, float V, float ULength, float VLength);
		void CheckMapping();
		void CheckTextContent();
		void ExecuteUbergraph_UI_HUD_Button_PosNegGang(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
