﻿/**
 * Name: GTASA
 * Version: 0.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACameraRig_Crane.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACameraRig_Crane::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D054F0
	 * 		Name   -> Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class USplineComponent* ACameraRig_Rail::GetRailSplineComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent");
		
		ACameraRig_Rail_GetRailSplineComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACameraRig_Rail.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACameraRig_Rail::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D05740
	 * 		Name   -> Function CinematicCamera.CineCameraActor.GetCineCameraComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCineCameraComponent* ACineCameraActor::GetCineCameraComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraActor.GetCineCameraComponent");
		
		ACineCameraActor_GetCineCameraComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACineCameraActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACineCameraActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D06130
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.SetLensPresetByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InPresetName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCineCameraComponent::SetLensPresetByName(const class FString& InPresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetLensPresetByName");
		
		UCineCameraComponent_SetLensPresetByName_Params params {};
		params.InPresetName = InPresetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D063A0
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InPresetName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCineCameraComponent::SetFilmbackPresetByName(const class FString& InPresetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName");
		
		UCineCameraComponent_SetFilmbackPresetByName_Params params {};
		params.InPresetName = InPresetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D06780
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InFocalLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCineCameraComponent::SetCurrentFocalLength(float InFocalLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength");
		
		UCineCameraComponent_SetCurrentFocalLength_Params params {};
		params.InFocalLength = InFocalLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D066A0
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UCineCameraComponent::GetVerticalFieldOfView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView");
		
		UCineCameraComponent_GetVerticalFieldOfView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D05E40
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<struct FNamedLensPreset> UCineCameraComponent::STATIC_GetLensPresetsCopy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy");
		
		UCineCameraComponent_GetLensPresetsCopy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D06230
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetLensPresetName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UCineCameraComponent::GetLensPresetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetName");
		
		UCineCameraComponent_GetLensPresetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D06710
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UCineCameraComponent::GetHorizontalFieldOfView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView");
		
		UCineCameraComponent_GetHorizontalFieldOfView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D05FC0
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<struct FNamedFilmbackPreset> UCineCameraComponent::STATIC_GetFilmbackPresetsCopy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy");
		
		UCineCameraComponent_GetFilmbackPresetsCopy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D06560
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UCineCameraComponent::GetFilmbackPresetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName");
		
		UCineCameraComponent_GetFilmbackPresetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D064A0
	 * 		Name   -> Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UCineCameraComponent::GetDefaultFilmbackPresetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName");
		
		UCineCameraComponent_GetDefaultFilmbackPresetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCineCameraComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCineCameraComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return ptr;
	}

}


