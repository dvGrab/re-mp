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
	 * WidgetBlueprintGeneratedClass Transition_SimpleFade_SA.Transition_SimpleFade_SA_C
	 * Size -> 0x0092 (FullSize[0x0358] - InheritedSize[0x02C6])
	 */
	class UTransition_SimpleFade_SA_C : public UTransition_Base_C
	{
	public:
		unsigned char                                              UnknownData_MPZK[0x2];                                   // 0x02C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             BlockingButton;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        FadeIn1;                                                 // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              FadingImage;                                             // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MainCanvas;                                              // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           MainScaleBox;                                            // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            MainSizeBox;                                             // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUDItem_TitleText_C*                             TextObject;                                              // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UTexture2D*>                                  RandomImages;                                            // 0x0308(0x0010) Edit, BlueprintVisible
		struct FSlateColor                                         StartingColor;                                           // 0x0318(0x0028) Edit, BlueprintVisible
		bool                                                       ReadyToShowText;                                         // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F6XF[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LastString;                                              // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void UpdateTextPosition(float InLeft, float InTop, float InRight, float InBottom);
		float GetFadeOpacity(class UWidget* Canvas);
		void SetFadeOpacity(EGTATransitionState CurrentState, class UCanvasPanel* Canvas, float Alpha);
		class UUI_GTAHUDItem* GetHudItem();
		void GetNextState(EGTATransitionState CurrentState, EGTATransitionState* NextState);
		void SetInitialColor();
		bool IsOpaque();
		void UpdateToCurrentState();
		void Update(float dT);
		void GetCurrentFadeCanvas(EGTATransitionState State, class UCanvasPanel** OutCanvas);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void SetHudItemPosition(float X, float Y, float Xmax, float Ymax);
		void CustomFunctionFromString(const class FString& FunctionString);
		void ExecuteUbergraph_Transition_SimpleFade_SA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
