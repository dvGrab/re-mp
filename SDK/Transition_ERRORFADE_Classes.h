﻿#pragma once

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
	 * WidgetBlueprintGeneratedClass Transition_ERRORFADE.Transition_ERRORFADE_C
	 * Size -> 0x005A (FullSize[0x0320] - InheritedSize[0x02C6])
	 */
	class UTransition_ERRORFADE_C : public UTransition_Base_C
	{
	public:
		unsigned char                                              UnknownData_7QZT[0x2];                                   // 0x02C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UButton*                                             BlockingButton;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        FadeIn1;                                                 // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image1;                                                  // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UTexture2D*>                                  RandomImages;                                            // 0x02E8(0x0010) Edit, BlueprintVisible
		struct FSlateColor                                         StartingColor;                                           // 0x02F8(0x0028) Edit, BlueprintVisible

	public:
		void GetNextState(EGTATransitionState CurrentState, EGTATransitionState* NextState);
		void SetInitialColor();
		bool IsOpaque();
		void UpdateToCurrentState();
		void Update(float dT);
		void GetCurrentFadeCanvas(EGTATransitionState State, class UCanvasPanel** OutCanvas);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_Transition_ERRORFADE(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif