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
	 * WidgetBlueprintGeneratedClass Transition_LoadingTemplate.Transition_LoadingTemplate_C
	 * Size -> 0x009A (FullSize[0x0360] - InheritedSize[0x02C6])
	 */
	class UTransition_LoadingTemplate_C : public UTransition_Base_C
	{
	public:
		unsigned char                                              UnknownData_5Z19[0x2];                                   // 0x02C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             BlockingButton;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        FadeIn1;                                                 // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        FadeIn2;                                                 // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        FinalFadeIn;                                             // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image1;                                                  // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image1_5;                                                // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LoadingBackground_2;                                     // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LoadingImage;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        ProgressBarContainer;                                    // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		unsigned char                                              RandomImages[0x10];                                      // 0x0318(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FSlateColor                                         StartingColor;                                           // 0x0328(0x0028) Edit, BlueprintVisible
		class UClass*                                              ProgressBarClass;                                        // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DidImageLoad;                                            // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q5F0[0x3];                                   // 0x0359(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeLoading;                                             // 0x035C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetSecondaryUnderImage(EGTATransitionState State, class UCanvasPanel** OutCanvas);
		void CreateProgressBar(class ULoadingProgressBar_base_C** BarCreated);
		void GetNextState(EGTATransitionState CurrentState, EGTATransitionState* NextState);
		void SetInitialColor();
		void Get_Random_Image();
		bool IsOpaque();
		void UpdateToCurrentState();
		void Update(float dT);
		void GetCurrentFadeCanvas(EGTATransitionState State, class UCanvasPanel** OutCanvas);
		void OnLoaded_1285F34942B424F426C90880E454E273(class UObject* Loaded);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void SetProgress(float Value);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_Transition_LoadingTemplate(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
