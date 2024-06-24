/**
 * Name: GTASA
 * Version: 0.0.1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.DFFExtraData.CheckAllReferences
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UDFFExtraData::CheckAllReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.DFFExtraData.CheckAllReferences");
		
		UDFFExtraData_CheckAllReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFFExtraData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFFExtraData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.DFFExtraData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.DistantHLODBuilder.BuildAtlas
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDistantHLODBuilder::BuildAtlas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.DistantHLODBuilder.BuildAtlas");
		
		UDistantHLODBuilder_BuildAtlas_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDistantHLODBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDistantHLODBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.DistantHLODBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC3D0
	 * 		Name   -> Function GTABase.GTAGameMode.GetGameterface
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UGameterface* AGTAGameMode::GetGameterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAGameMode.GetGameterface");
		
		AGTAGameMode_GetGameterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8750
	 * 		Name   -> Function GTABase.Gameterface.WasRightBumperButtonJustPressed
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGameterface::WasRightBumperButtonJustPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.WasRightBumperButtonJustPressed");
		
		UGameterface_WasRightBumperButtonJustPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8780
	 * 		Name   -> Function GTABase.Gameterface.WasLeftBumperButtonJustPressed
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGameterface::WasLeftBumperButtonJustPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.WasLeftBumperButtonJustPressed");
		
		UGameterface_WasLeftBumperButtonJustPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA87B0
	 * 		Name   -> Function GTABase.Gameterface.WasBackButtonJustPressed
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGameterface::WasBackButtonJustPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.WasBackButtonJustPressed");
		
		UGameterface_WasBackButtonJustPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA87E0
	 * 		Name   -> Function GTABase.Gameterface.WasAcceptButtonJustPressed
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGameterface::WasAcceptButtonJustPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.WasAcceptButtonJustPressed");
		
		UGameterface_WasAcceptButtonJustPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAA2C0
	 * 		Name   -> Function GTABase.Gameterface.UseSystemFont
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGameterface::UseSystemFont()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.UseSystemFont");
		
		UGameterface_UseSystemFont_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA5D70
	 * 		Name   -> Function GTABase.Gameterface.UseSocialClubInGameMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGameterface::UseSocialClubInGameMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.UseSocialClubInGameMenu");
		
		UGameterface_UseSocialClubInGameMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9D40
	 * 		Name   -> Function GTABase.Gameterface.UpdateMapCustomWaypoint
	 * 		Flags  -> (Native, Public)
	 */
	void UGameterface::UpdateMapCustomWaypoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.UpdateMapCustomWaypoint");
		
		UGameterface_UpdateMapCustomWaypoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA69E0
	 * 		Name   -> Function GTABase.Gameterface.TheTextGet
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      missionText                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UGameterface::TheTextGet(const class FString& Key, const class FString& missionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.TheTextGet");
		
		UGameterface_TheTextGet_Params params {};
		params.Key = Key;
		params.missionText = missionText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA5D90
	 * 		Name   -> Function GTABase.Gameterface.StopIntroMovie
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameterface::StopIntroMovie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.StopIntroMovie");
		
		UGameterface_StopIntroMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAA580
	 * 		Name   -> Function GTABase.Gameterface.StopCredits
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UGameterface::StopCredits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.StopCredits");
		
		UGameterface_StopCredits_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAB3F0
	 * 		Name   -> Function GTABase.Gameterface.StartTransition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      TransitionToStart                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::StartTransition(const class FString& TransitionToStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.StartTransition");
		
		UGameterface_StartTransition_Params params {};
		params.TransitionToStart = TransitionToStart;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA6BD0
	 * 		Name   -> Function GTABase.Gameterface.StartRemapping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            mappingID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* UGameterface::StartRemapping(int32_t mappingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.StartRemapping");
		
		UGameterface_StartRemapping_Params params {};
		params.mappingID = mappingID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9420
	 * 		Name   -> Function GTABase.Gameterface.StartNewGameFromMenu
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UGameterface::StartNewGameFromMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.StartNewGameFromMenu");
		
		UGameterface_StartNewGameFromMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAB530
	 * 		Name   -> Function GTABase.Gameterface.StartLoadingTransition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameterface::StartLoadingTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.StartLoadingTransition");
		
		UGameterface_StartLoadingTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA5EA0
	 * 		Name   -> Function GTABase.Gameterface.StartIntroMovie
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameterface::StartIntroMovie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.StartIntroMovie");
		
		UGameterface_StartIntroMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.Gameterface.SpawnExplosion
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGTAExplosionType                                  Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGTAExplosionSurface                               Surface                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SurfaceNormal                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DebrisCount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ExplodingActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuppressLight                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AGTAExplosion* UGameterface::SpawnExplosion(const struct FVector& Location, EGTAExplosionType Type, EGTAExplosionSurface Surface, const struct FVector& SurfaceNormal, float Scale, int32_t DebrisCount, class AActor* ExplodingActor, bool bSuppressLight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SpawnExplosion");
		
		UGameterface_SpawnExplosion_Params params {};
		params.Location = Location;
		params.Type = Type;
		params.Surface = Surface;
		params.SurfaceNormal = SurfaceNormal;
		params.Scale = Scale;
		params.DebrisCount = DebrisCount;
		params.ExplodingActor = ExplodingActor;
		params.bSuppressLight = bSuppressLight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA6100
	 * 		Name   -> Function GTABase.Gameterface.SocialClubSignUp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameterface::SocialClubSignUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SocialClubSignUp");
		
		UGameterface_SocialClubSignUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA6060
	 * 		Name   -> Function GTABase.Gameterface.SocialClubSignOut
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameterface::SocialClubSignOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SocialClubSignOut");
		
		UGameterface_SocialClubSignOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA61A0
	 * 		Name   -> Function GTABase.Gameterface.SocialClubSignIn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameterface::SocialClubSignIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SocialClubSignIn");
		
		UGameterface_SocialClubSignIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.Gameterface.SocialClubShowAchievements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameterface::SocialClubShowAchievements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SocialClubShowAchievements");
		
		UGameterface_SocialClubShowAchievements_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA6240
	 * 		Name   -> Function GTABase.Gameterface.SocialClubIsLinked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGameterface::SocialClubIsLinked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SocialClubIsLinked");
		
		UGameterface_SocialClubIsLinked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA6360
	 * 		Name   -> Function GTABase.Gameterface.SocialClubAreServicesAvailable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGameterface::SocialClubAreServicesAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SocialClubAreServicesAvailable");
		
		UGameterface_SocialClubAreServicesAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BABC60
	 * 		Name   -> Function GTABase.Gameterface.SnapToWorldZ
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Coord                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AdditionalZOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterface::STATIC_SnapToWorldZ(struct FVector* Coord, float AdditionalZOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SnapToWorldZ");
		
		UGameterface_SnapToWorldZ_Params params {};
		params.AdditionalZOffset = AdditionalZOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Coord != nullptr)
			*Coord = params.Coord;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA92A0
	 * 		Name   -> Function GTABase.Gameterface.SlotHasSave
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            slotnum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterface::SlotHasSave(int32_t slotnum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SlotHasSave");
		
		UGameterface_SlotHasSave_Params params {};
		params.slotnum = slotnum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAB680
	 * 		Name   -> Function GTABase.Gameterface.ShowHUDDrawer
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CreateIfNotMade                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::ShowHUDDrawer(bool Visible, bool CreateIfNotMade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ShowHUDDrawer");
		
		UGameterface_ShowHUDDrawer_Params params {};
		params.Visible = Visible;
		params.CreateIfNotMade = CreateIfNotMade;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAA5D0
	 * 		Name   -> Function GTABase.Gameterface.ShouldUseTransitionWarnings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              TimeBeforeWarning                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterface::ShouldUseTransitionWarnings(float* TimeBeforeWarning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ShouldUseTransitionWarnings");
		
		UGameterface_ShouldUseTransitionWarnings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeBeforeWarning != nullptr)
			*TimeBeforeWarning = params.TimeBeforeWarning;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA5D70
	 * 		Name   -> Function GTABase.Gameterface.ShouldShowFullOptions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGameterface::ShouldShowFullOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ShouldShowFullOptions");
		
		UGameterface_ShouldShowFullOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA5D50
	 * 		Name   -> Function GTABase.Gameterface.SetUserFocusToGameViewport
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UGameterface::STATIC_SetUserFocusToGameViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SetUserFocusToGameViewport");
		
		UGameterface_SetUserFocusToGameViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAA730
	 * 		Name   -> Function GTABase.Gameterface.SetTransitionStateFadeTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGTATransitionState                                StateToChange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToFade                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::SetTransitionStateFadeTime(EGTATransitionState StateToChange, float TimeToFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SetTransitionStateFadeTime");
		
		UGameterface_SetTransitionStateFadeTime_Params params {};
		params.StateToChange = StateToChange;
		params.TimeToFade = TimeToFade;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAA890
	 * 		Name   -> Function GTABase.Gameterface.SetMenuTransitionStateFadeTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGTATransitionState                                StateToChange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToFade                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::SetMenuTransitionStateFadeTime(EGTATransitionState StateToChange, float TimeToFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SetMenuTransitionStateFadeTime");
		
		UGameterface_SetMenuTransitionStateFadeTime_Params params {};
		params.StateToChange = StateToChange;
		params.TimeToFade = TimeToFade;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAB320
	 * 		Name   -> Function GTABase.Gameterface.SetLoadingTransitionProgress
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::SetLoadingTransitionProgress(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SetLoadingTransitionProgress");
		
		UGameterface_SetLoadingTransitionProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9830
	 * 		Name   -> Function GTABase.Gameterface.SetCustomWaypoint
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::SetCustomWaypoint(const struct FVector& position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SetCustomWaypoint");
		
		UGameterface_SetCustomWaypoint_Params params {};
		params.position = position;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA69C0
	 * 		Name   -> Function GTABase.Gameterface.SaveKeyboardMappings
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UGameterface::SaveKeyboardMappings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SaveKeyboardMappings");
		
		UGameterface_SaveKeyboardMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8E00
	 * 		Name   -> Function GTABase.Gameterface.SaveDataInSlot
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::SaveDataInSlot(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.SaveDataInSlot");
		
		UGameterface_SaveDataInSlot_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA93F0
	 * 		Name   -> Function GTABase.Gameterface.ResumeGameFromMenu
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGameterface::ResumeGameFromMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ResumeGameFromMenu");
		
		UGameterface_ResumeGameFromMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9F70
	 * 		Name   -> Function GTABase.Gameterface.RestartWithFreshMenu
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGameterface::RestartWithFreshMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.RestartWithFreshMenu");
		
		UGameterface_RestartWithFreshMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA76F0
	 * 		Name   -> Function GTABase.Gameterface.ReplaceGameSpecificImageTags
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FString                                      QueuedMessage                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::ReplaceGameSpecificImageTags(class FString* QueuedMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ReplaceGameSpecificImageTags");
		
		UGameterface_ReplaceGameSpecificImageTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QueuedMessage != nullptr)
			*QueuedMessage = params.QueuedMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA5EF0
	 * 		Name   -> Function GTABase.Gameterface.RefreshSocialClubAchivements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGameterface::RefreshSocialClubAchivements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.RefreshSocialClubAchivements");
		
		UGameterface_RefreshSocialClubAchivements_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA95B0
	 * 		Name   -> Function GTABase.Gameterface.RefreshMenuUserInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameterface::RefreshMenuUserInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.RefreshMenuUserInfo");
		
		UGameterface_RefreshMenuUserInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.Gameterface.PromptLogin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameterface::PromptLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.PromptLogin");
		
		UGameterface_PromptLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA6580
	 * 		Name   -> Function GTABase.Gameterface.PlayHapticEffectBP
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHapticEffectType                                  Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::PlayHapticEffectBP(EHapticEffectType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.PlayHapticEffectBP");
		
		UGameterface_PlayHapticEffectBP_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA5D70
	 * 		Name   -> Function GTABase.Gameterface.PlatformRequiresLogin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGameterface::PlatformRequiresLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.PlatformRequiresLogin");
		
		UGameterface_PlatformRequiresLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA68C0
	 * 		Name   -> Function GTABase.Gameterface.OnAudioTabChanged
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               wasSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::OnAudioTabChanged(bool wasSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.OnAudioTabChanged");
		
		UGameterface_OnAudioTabChanged_Params params {};
		params.wasSelected = wasSelected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9700
	 * 		Name   -> Function GTABase.Gameterface.MoveMenuToGameTab
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGTASaveTabState                                   tabState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterface::MoveMenuToGameTab(EGTASaveTabState tabState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.MoveMenuToGameTab");
		
		UGameterface_MoveMenuToGameTab_Params params {};
		params.tabState = tabState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9E70
	 * 		Name   -> Function GTABase.Gameterface.MissionRetryCallback
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               doRetry                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::MissionRetryCallback(bool doRetry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.MissionRetryCallback");
		
		UGameterface_MissionRetryCallback_Params params {};
		params.doRetry = doRetry;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9D20
	 * 		Name   -> Function GTABase.Gameterface.MenuMapExtra
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UGameterface::MenuMapExtra()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.MenuMapExtra");
		
		UGameterface_MenuMapExtra_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8D10
	 * 		Name   -> Function GTABase.Gameterface.LoadDataInSlot
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterface::LoadDataInSlot(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.LoadDataInSlot");
		
		UGameterface_LoadDataInSlot_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA96A0
	 * 		Name   -> Function GTABase.Gameterface.IsViewport4kOrGreater
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGameterface::IsViewport4kOrGreater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsViewport4kOrGreater");
		
		UGameterface_IsViewport4kOrGreater_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA5D20
	 * 		Name   -> Function GTABase.Gameterface.IsVeryWideScreen
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UGameterface::IsVeryWideScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsVeryWideScreen");
		
		UGameterface_IsVeryWideScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA90C0
	 * 		Name   -> Function GTABase.Gameterface.isSlotCheckpointSave
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            slotnum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterface::isSlotCheckpointSave(int32_t slotnum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.isSlotCheckpointSave");
		
		UGameterface_isSlotCheckpointSave_Params params {};
		params.slotnum = slotnum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA91B0
	 * 		Name   -> Function GTABase.Gameterface.isSlotAutoSave
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            slotnum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterface::isSlotAutoSave(int32_t slotnum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.isSlotAutoSave");
		
		UGameterface_isSlotAutoSave_Params params {};
		params.slotnum = slotnum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9440
	 * 		Name   -> Function GTABase.Gameterface.IsShowingControllerReconnectScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGameterface::IsShowingControllerReconnectScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsShowingControllerReconnectScreen");
		
		UGameterface_IsShowingControllerReconnectScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA5D70
	 * 		Name   -> Function GTABase.Gameterface.IsShowAllOptions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGameterface::IsShowAllOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsShowAllOptions");
		
		UGameterface_IsShowAllOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9F50
	 * 		Name   -> Function GTABase.Gameterface.IsReleaseBuild
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGameterface::IsReleaseBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsReleaseBuild");
		
		UGameterface_IsReleaseBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA93C0
	 * 		Name   -> Function GTABase.Gameterface.IsPlayingGame
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGameterface::IsPlayingGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsPlayingGame");
		
		UGameterface_IsPlayingGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA5D70
	 * 		Name   -> Function GTABase.Gameterface.IsJapaneseBuild
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UGameterface::STATIC_IsJapaneseBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsJapaneseBuild");
		
		UGameterface_IsJapaneseBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA5DB0
	 * 		Name   -> Function GTABase.Gameterface.IsIntroMoviePlaying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               AllowHandleStop                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterface::IsIntroMoviePlaying(bool AllowHandleStop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsIntroMoviePlaying");
		
		UGameterface_IsIntroMoviePlaying_Params params {};
		params.AllowHandleStop = AllowHandleStop;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAA5A0
	 * 		Name   -> Function GTABase.Gameterface.IsInCredits
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGameterface::IsInCredits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsInCredits");
		
		UGameterface_IsInCredits_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAAF30
	 * 		Name   -> Function GTABase.Gameterface.IsCurrentTransition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterface::IsCurrentTransition(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsCurrentTransition");
		
		UGameterface_IsCurrentTransition_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA5D70
	 * 		Name   -> Function GTABase.Gameterface.IsActiveControllerLoggedIn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGameterface::IsActiveControllerLoggedIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.IsActiveControllerLoggedIn");
		
		UGameterface_IsActiveControllerLoggedIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAAC50
	 * 		Name   -> Function GTABase.Gameterface.InterruptCurrentTransition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      TransitionToStart                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGTATransitionState                                startingState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               takeOldOpacity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::InterruptCurrentTransition(const class FString& TransitionToStart, EGTATransitionState startingState, bool takeOldOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.InterruptCurrentTransition");
		
		UGameterface_InterruptCurrentTransition_Params params {};
		params.TransitionToStart = TransitionToStart;
		params.startingState = startingState;
		params.takeOldOpacity = takeOldOpacity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAA9F0
	 * 		Name   -> Function GTABase.Gameterface.InterruptCurrentMenuTransition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      TransitionToStart                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGTATransitionState                                startingState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               takeOldOpacity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::InterruptCurrentMenuTransition(const class FString& TransitionToStart, EGTATransitionState startingState, bool takeOldOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.InterruptCurrentMenuTransition");
		
		UGameterface_InterruptCurrentMenuTransition_Params params {};
		params.TransitionToStart = TransitionToStart;
		params.startingState = startingState;
		params.takeOldOpacity = takeOldOpacity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9390
	 * 		Name   -> Function GTABase.Gameterface.HasSaveData
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGameterface::HasSaveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.HasSaveData");
		
		UGameterface_HasSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAB550
	 * 		Name   -> Function GTABase.Gameterface.HasCurrentTransitionScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               CheckOnlyInGameTransitions                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterface::HasCurrentTransitionScreen(bool CheckOnlyInGameTransitions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.HasCurrentTransitionScreen");
		
		UGameterface_HasCurrentTransitionScreen_Params params {};
		params.CheckOnlyInGameTransitions = CheckOnlyInGameTransitions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9680
	 * 		Name   -> Function GTABase.Gameterface.GrabFocus
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UGameterface::GrabFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GrabFocus");
		
		UGameterface_GrabFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BABE10
	 * 		Name   -> Function GTABase.Gameterface.GetWorldZ
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     FromCoord                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UGameterface::STATIC_GetWorldZ(const struct FVector& FromCoord, bool* success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetWorldZ");
		
		UGameterface_GetWorldZ_Params params {};
		params.FromCoord = FromCoord;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9600
	 * 		Name   -> Function GTABase.Gameterface.GetVersionString
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	class FString UGameterface::GetVersionString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetVersionString");
		
		UGameterface_GetVersionString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA7B60
	 * 		Name   -> Function GTABase.Gameterface.GetUVMappingForMenuTabPrev
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              U                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              V                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ULength                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VLength                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UGameterface::GetUVMappingForMenuTabPrev(float* U, float* V, float* ULength, float* VLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetUVMappingForMenuTabPrev");
		
		UGameterface_GetUVMappingForMenuTabPrev_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (U != nullptr)
			*U = params.U;
		if (V != nullptr)
			*V = params.V;
		if (ULength != nullptr)
			*ULength = params.ULength;
		if (VLength != nullptr)
			*VLength = params.VLength;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA7E20
	 * 		Name   -> Function GTABase.Gameterface.GetUVMappingForMenuTabNext
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              U                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              V                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ULength                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VLength                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UGameterface::GetUVMappingForMenuTabNext(float* U, float* V, float* ULength, float* VLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetUVMappingForMenuTabNext");
		
		UGameterface_GetUVMappingForMenuTabNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (U != nullptr)
			*U = params.U;
		if (V != nullptr)
			*V = params.V;
		if (ULength != nullptr)
			*ULength = params.ULength;
		if (VLength != nullptr)
			*VLength = params.VLength;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA7820
	 * 		Name   -> Function GTABase.Gameterface.GetUVImageForHUDMapping
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EHIDMapping                                        mapping                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              U                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              V                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ULength                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VLength                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UGameterface::GetUVImageForHUDMapping(EHIDMapping mapping, float* U, float* V, float* ULength, float* VLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetUVImageForHUDMapping");
		
		UGameterface_GetUVImageForHUDMapping_Params params {};
		params.mapping = mapping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (U != nullptr)
			*U = params.U;
		if (V != nullptr)
			*V = params.V;
		if (ULength != nullptr)
			*ULength = params.ULength;
		if (VLength != nullptr)
			*VLength = params.VLength;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA94C0
	 * 		Name   -> Function GTABase.Gameterface.GetUserNameAndImage
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      OutName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UGameterface::GetUserNameAndImage(class FString* OutName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetUserNameAndImage");
		
		UGameterface_GetUserNameAndImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAB620
	 * 		Name   -> Function GTABase.Gameterface.GetTransitionManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UUITransition* UGameterface::GetTransitionManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetTransitionManager");
		
		UGameterface_GetTransitionManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAA1A0
	 * 		Name   -> Function GTABase.Gameterface.GetTimeOfDay
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGameterface::GetTimeOfDay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetTimeOfDay");
		
		UGameterface_GetTimeOfDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8810
	 * 		Name   -> Function GTABase.Gameterface.GetStats
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              StatValues                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      CriminalRating                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UGameterface::GetStats(TArray<class FString>* StatValues, class FString* CriminalRating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetStats");
		
		UGameterface_GetStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatValues != nullptr)
			*StatValues = params.StatValues;
		if (CriminalRating != nullptr)
			*CriminalRating = params.CriminalRating;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA5F10
	 * 		Name   -> Function GTABase.Gameterface.GetSocialClubAchivements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<struct FSCAchive> UGameterface::GetSocialClubAchivements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetSocialClubAchivements");
		
		UGameterface_GetSocialClubAchivements_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.Gameterface.GetScalabilityClass
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	class UClass* UGameterface::GetScalabilityClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetScalabilityClass");
		
		UGameterface_GetScalabilityClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9010
	 * 		Name   -> Function GTABase.Gameterface.GetSaveDataNames
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	TArray<class FString> UGameterface::GetSaveDataNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetSaveDataNames");
		
		UGameterface_GetSaveDataNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8EE0
	 * 		Name   -> Function GTABase.Gameterface.GetSaveDataName
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UGameterface::GetSaveDataName(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetSaveDataName");
		
		UGameterface_GetSaveDataName_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA82A0
	 * 		Name   -> Function GTABase.Gameterface.GetRightStickValues
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::GetRightStickValues(float* X, float* Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetRightStickValues");
		
		UGameterface_GetRightStickValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAA500
	 * 		Name   -> Function GTABase.Gameterface.GetRageActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class URage* UGameterface::GetRageActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetRageActor");
		
		UGameterface_GetRageActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA6890
	 * 		Name   -> Function GTABase.Gameterface.GetRadioStationOffset
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	int32_t UGameterface::GetRadioStationOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetRadioStationOffset");
		
		UGameterface_GetRadioStationOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA67E0
	 * 		Name   -> Function GTABase.Gameterface.GetPlatformType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	EPlatformType UGameterface::STATIC_GetPlatformType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetPlatformType");
		
		UGameterface_GetPlatformType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8A80
	 * 		Name   -> Function GTABase.Gameterface.GetOptionTextSize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UGameterface::GetOptionTextSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetOptionTextSize");
		
		UGameterface_GetOptionTextSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8A40
	 * 		Name   -> Function GTABase.Gameterface.GetOptionHelpTextSize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UGameterface::GetOptionHelpTextSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetOptionHelpTextSize");
		
		UGameterface_GetOptionHelpTextSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAA2E0
	 * 		Name   -> Function GTABase.Gameterface.GetNextValidLanguageIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsLanguage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Forward                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            currentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGameterface::GetNextValidLanguageIndex(bool IsLanguage, bool Forward, int32_t currentIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetNextValidLanguageIndex");
		
		UGameterface_GetNextValidLanguageIndex_Params params {};
		params.IsLanguage = IsLanguage;
		params.Forward = Forward;
		params.currentIndex = currentIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA85F0
	 * 		Name   -> Function GTABase.Gameterface.GetMapZoomOut
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	float UGameterface::GetMapZoomOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetMapZoomOut");
		
		UGameterface_GetMapZoomOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8630
	 * 		Name   -> Function GTABase.Gameterface.GetMapZoomIn
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	float UGameterface::GetMapZoomIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetMapZoomIn");
		
		UGameterface_GetMapZoomIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA6D30
	 * 		Name   -> Function GTABase.Gameterface.GetMappingStringForButton
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            nButtonID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            whichType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UGameterface::GetMappingStringForButton(int32_t nButtonID, int32_t whichType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetMappingStringForButton");
		
		UGameterface_GetMappingStringForButton_Params params {};
		params.nButtonID = nButtonID;
		params.whichType = whichType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9910
	 * 		Name   -> Function GTABase.Gameterface.GetMapLegendNames
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	TArray<class FName> UGameterface::GetMapLegendNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetMapLegendNames");
		
		UGameterface_GetMapLegendNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9B10
	 * 		Name   -> Function GTABase.Gameterface.GetMapLegend
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UTexture2D*>                          Textures                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FText>                                Strings                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGameterface::GetMapLegend(TArray<class UTexture2D*>* Textures, TArray<class FText>* Strings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetMapLegend");
		
		UGameterface_GetMapLegend_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Textures != nullptr)
			*Textures = params.Textures;
		if (Strings != nullptr)
			*Strings = params.Strings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9990
	 * 		Name   -> Function GTABase.Gameterface.GetMapAreaName
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     WorldPosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::GetMapAreaName(const struct FVector& WorldPosition, class FString* OutName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetMapAreaName");
		
		UGameterface_GetMapAreaName_Params params {};
		params.WorldPosition = WorldPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8110
	 * 		Name   -> Function GTABase.Gameterface.GetLeftStickValues
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::GetLeftStickValues(float* X, float* Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetLeftStickValues");
		
		UGameterface_GetLeftStickValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9090
	 * 		Name   -> Function GTABase.Gameterface.GetLastSaveSlotIndex
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	int32_t UGameterface::GetLastSaveSlotIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetLastSaveSlotIndex");
		
		UGameterface_GetLastSaveSlotIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA7560
	 * 		Name   -> Function GTABase.Gameterface.GetKeyboardMappings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            whichType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FKeyboardDisplayStrings> UGameterface::GetKeyboardMappings(int32_t whichType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetKeyboardMappings");
		
		UGameterface_GetKeyboardMappings_Params params {};
		params.whichType = whichType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA77F0
	 * 		Name   -> Function GTABase.Gameterface.GetHIDTexture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UTexture2D* UGameterface::GetHIDTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetHIDTexture");
		
		UGameterface_GetHIDTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA6820
	 * 		Name   -> Function GTABase.Gameterface.GetGTAPlayerPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UGameterface::GetGTAPlayerPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetGTAPlayerPosition");
		
		UGameterface_GetGTAPlayerPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA6660
	 * 		Name   -> Function GTABase.Gameterface.GetGroundZCoord
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     FromCoord                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutCoord                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterface::GetGroundZCoord(const struct FVector& FromCoord, struct FVector* OutCoord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetGroundZCoord");
		
		UGameterface_GetGroundZCoord_Params params {};
		params.FromCoord = FromCoord;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCoord != nullptr)
			*OutCoord = params.OutCoord;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA95D0
	 * 		Name   -> Function GTABase.Gameterface.GetCurrentInputType
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	EGTAInputType UGameterface::GetCurrentInputType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetCurrentInputType");
		
		UGameterface_GetCurrentInputType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8430
	 * 		Name   -> Function GTABase.Gameterface.GetButtonMappingReleased
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHIDMapping                                        mapping                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterface::GetButtonMappingReleased(EHIDMapping mapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetButtonMappingReleased");
		
		UGameterface_GetButtonMappingReleased_Params params {};
		params.mapping = mapping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8670
	 * 		Name   -> Function GTABase.Gameterface.GetButtonMappingJustPressed
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHIDMapping                                        mapping                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterface::GetButtonMappingJustPressed(EHIDMapping mapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetButtonMappingJustPressed");
		
		UGameterface_GetButtonMappingJustPressed_Params params {};
		params.mapping = mapping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8510
	 * 		Name   -> Function GTABase.Gameterface.GetButtonMappingIsPressed
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHIDMapping                                        mapping                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterface::GetButtonMappingIsPressed(EHIDMapping mapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetButtonMappingIsPressed");
		
		UGameterface_GetButtonMappingIsPressed_Params params {};
		params.mapping = mapping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8AF0
	 * 		Name   -> Function GTABase.Gameterface.GetBriefString
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	class FString UGameterface::GetBriefString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetBriefString");
		
		UGameterface_GetBriefString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8C00
	 * 		Name   -> Function GTABase.Gameterface.GetAppropriateGamepadTab
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	int32_t UGameterface::GetAppropriateGamepadTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetAppropriateGamepadTab");
		
		UGameterface_GetAppropriateGamepadTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA94A0
	 * 		Name   -> Function GTABase.Gameterface.GetActiveControllerIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UGameterface::GetActiveControllerIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GetActiveControllerIndex");
		
		UGameterface_GetActiveControllerIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8B70
	 * 		Name   -> Function GTABase.Gameterface.GameHasGangsOverlay
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGameterface::GameHasGangsOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GameHasGangsOverlay");
		
		UGameterface_GameHasGangsOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8BA0
	 * 		Name   -> Function GTABase.Gameterface.GameHasFlightGamepadTab
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGameterface::GameHasFlightGamepadTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GameHasFlightGamepadTab");
		
		UGameterface_GameHasFlightGamepadTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8BD0
	 * 		Name   -> Function GTABase.Gameterface.GameHasBMXGamepadTab
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGameterface::GameHasBMXGamepadTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.GameHasBMXGamepadTab");
		
		UGameterface_GameHasBMXGamepadTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9FA0
	 * 		Name   -> Function GTABase.Gameterface.FreezeTime
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Hours                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Minutes                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::FreezeTime(int32_t Hours, int32_t Minutes, int32_t Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.FreezeTime");
		
		UGameterface_FreezeTime_Params params {};
		params.Hours = Hours;
		params.Minutes = Minutes;
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9D90
	 * 		Name   -> Function GTABase.Gameterface.ForceMapSwitchRefresh
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               MenuMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::ForceMapSwitchRefresh(bool MenuMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ForceMapSwitchRefresh");
		
		UGameterface_ForceMapSwitchRefresh_Params params {};
		params.MenuMode = MenuMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAA180
	 * 		Name   -> Function GTABase.Gameterface.ExitGame
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UGameterface::ExitGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ExitGame");
		
		UGameterface_ExitGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8AC0
	 * 		Name   -> Function GTABase.Gameterface.DoesLanguageUseLargerHeightSubtitles
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGameterface::DoesLanguageUseLargerHeightSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.DoesLanguageUseLargerHeightSubtitles");
		
		UGameterface_DoesLanguageUseLargerHeightSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA96D0
	 * 		Name   -> Function GTABase.Gameterface.DoesGameViewportHaveFocus
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGameterface::DoesGameViewportHaveFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.DoesGameViewportHaveFocus");
		
		UGameterface_DoesGameViewportHaveFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA69A0
	 * 		Name   -> Function GTABase.Gameterface.DeleteSavedKeyboardMappings
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UGameterface::DeleteSavedKeyboardMappings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.DeleteSavedKeyboardMappings");
		
		UGameterface_DeleteSavedKeyboardMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA8C30
	 * 		Name   -> Function GTABase.Gameterface.DeleteDataInSlot
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::DeleteDataInSlot(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.DeleteDataInSlot");
		
		UGameterface_DeleteDataInSlot_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAB230
	 * 		Name   -> Function GTABase.Gameterface.ContinueTransition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGTATransitionState                                toState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::ContinueTransition(EGTATransitionState toState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ContinueTransition");
		
		UGameterface_ContinueTransition_Params params {};
		params.toState = toState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAB140
	 * 		Name   -> Function GTABase.Gameterface.ContinueMenuTransition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGTATransitionState                                toState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::ContinueMenuTransition(EGTATransitionState toState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ContinueMenuTransition");
		
		UGameterface_ContinueMenuTransition_Params params {};
		params.toState = toState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAAF10
	 * 		Name   -> Function GTABase.Gameterface.CloseCurrentTransition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameterface::CloseCurrentTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.CloseCurrentTransition");
		
		UGameterface_CloseCurrentTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAAEB0
	 * 		Name   -> Function GTABase.Gameterface.CloseCurrentMenuTransition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameterface::CloseCurrentMenuTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.CloseCurrentMenuTransition");
		
		UGameterface_CloseCurrentMenuTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9810
	 * 		Name   -> Function GTABase.Gameterface.ClearCustomWaypoint
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UGameterface::ClearCustomWaypoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.ClearCustomWaypoint");
		
		UGameterface_ClearCustomWaypoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA6430
	 * 		Name   -> Function GTABase.Gameterface.CleanupCinematicActorOnEndPlay
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::CleanupCinematicActorOnEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.CleanupCinematicActorOnEndPlay");
		
		UGameterface_CleanupCinematicActorOnEndPlay_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAB800
	 * 		Name   -> Function GTABase.Gameterface.CheckWorldLine
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     finished                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     outCol                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     outNormal                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCheckBuildings                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCheckVehicles                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCheckPeds                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterface::STATIC_CheckWorldLine(const struct FVector& Start, const struct FVector& finished, struct FVector* outCol, struct FVector* outNormal, bool bCheckBuildings, bool bCheckVehicles, bool bCheckPeds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.CheckWorldLine");
		
		UGameterface_CheckWorldLine_Params params {};
		params.Start = Start;
		params.finished = finished;
		params.bCheckBuildings = bCheckBuildings;
		params.bCheckVehicles = bCheckVehicles;
		params.bCheckPeds = bCheckPeds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outCol != nullptr)
			*outCol = params.outCol;
		if (outNormal != nullptr)
			*outNormal = params.outNormal;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.Gameterface.CheckShowAllOptionsChanged
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameterface::CheckShowAllOptionsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.CheckShowAllOptionsChanged");
		
		UGameterface_CheckShowAllOptionsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA5EC0
	 * 		Name   -> Function GTABase.Gameterface.BPUpdateVolumeMixers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameterface::BPUpdateVolumeMixers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.BPUpdateVolumeMixers");
		
		UGameterface_BPUpdateVolumeMixers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAA1E0
	 * 		Name   -> Function GTABase.Gameterface.AutoDestroyedParticleSystem
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterface::AutoDestroyedParticleSystem(class UParticleSystemComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.AutoDestroyedParticleSystem");
		
		UGameterface_AutoDestroyedParticleSystem_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA80E0
	 * 		Name   -> Function GTABase.Gameterface.AreMultipleTouchesDown
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGameterface::AreMultipleTouchesDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.AreMultipleTouchesDown");
		
		UGameterface_AreMultipleTouchesDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9D60
	 * 		Name   -> Function GTABase.Gameterface.AllowMapJump
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UGameterface::AllowMapJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.AllowMapJump");
		
		UGameterface_AllowMapJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA97E0
	 * 		Name   -> Function GTABase.Gameterface.AllowCustomWaypointManagement
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UGameterface::AllowCustomWaypointManagement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.AllowCustomWaypointManagement");
		
		UGameterface_AllowCustomWaypointManagement_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9470
	 * 		Name   -> Function GTABase.Gameterface.AllowActiveControllerSet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGameterface::AllowActiveControllerSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Gameterface.AllowActiveControllerSet");
		
		UGameterface_AllowActiveControllerSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.Gameterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEntityLinker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEntityLinker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.EntityLinker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAOptionsList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAOptionsList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAOptionsList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAFidelityOption.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAFidelityOption::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAFidelityOption");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFA00
	 * 		Name   -> Function GTABase.GameterSettings.UpdateOutputMonitorInfo
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::UpdateOutputMonitorInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.UpdateOutputMonitorInfo");
		
		UGameterSettings_UpdateOutputMonitorInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB0440
	 * 		Name   -> Function GTABase.GameterSettings.UpdateFidelitySettings
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               SkipCallback                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FromDefaultsCall                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterSettings::UpdateFidelitySettings(bool SkipCallback, bool FromDefaultsCall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.UpdateFidelitySettings");
		
		UGameterSettings_UpdateFidelitySettings_Params params {};
		params.SkipCallback = SkipCallback;
		params.FromDefaultsCall = FromDefaultsCall;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB05B0
	 * 		Name   -> Function GTABase.GameterSettings.UpdateFidelityOptionToMatchSettings
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               RefreshSettings                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterSettings::UpdateFidelityOptionToMatchSettings(bool RefreshSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.UpdateFidelityOptionToMatchSettings");
		
		UGameterSettings_UpdateFidelityOptionToMatchSettings_Params params {};
		params.RefreshSettings = RefreshSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB0B60
	 * 		Name   -> Function GTABase.GameterSettings.UpdateDefaultVersion
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               SkipSave                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterSettings::UpdateDefaultVersion(bool SkipSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.UpdateDefaultVersion");
		
		UGameterSettings_UpdateDefaultVersion_Params params {};
		params.SkipSave = SkipSave;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB06E0
	 * 		Name   -> Function GTABase.GameterSettings.UpdateAllGraphicsSettings
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::UpdateAllGraphicsSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.UpdateAllGraphicsSettings");
		
		UGameterSettings_UpdateAllGraphicsSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB0700
	 * 		Name   -> Function GTABase.GameterSettings.SetupGlobalSettingsCallbacks
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::SetupGlobalSettingsCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.SetupGlobalSettingsCallbacks");
		
		UGameterSettings_SetupGlobalSettingsCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAF900
	 * 		Name   -> Function GTABase.GameterSettings.SetResolutionToDefault
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               doConfirmVideoMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterSettings::SetResolutionToDefault(bool doConfirmVideoMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.SetResolutionToDefault");
		
		UGameterSettings_SetResolutionToDefault_Params params {};
		params.doConfirmVideoMode = doConfirmVideoMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB19B0
	 * 		Name   -> Function GTABase.GameterSettings.SetIntValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterSettings::SetIntValue(const class FName& VariableName, int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.SetIntValue");
		
		UGameterSettings_SetIntValue_Params params {};
		params.VariableName = VariableName;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAF9E0
	 * 		Name   -> Function GTABase.GameterSettings.SetInitialScreenValues
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::SetInitialScreenValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.SetInitialScreenValues");
		
		UGameterSettings_SetInitialScreenValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1E30
	 * 		Name   -> Function GTABase.GameterSettings.SetFloatValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterSettings::SetFloatValue(const class FName& VariableName, float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.SetFloatValue");
		
		UGameterSettings_SetFloatValue_Params params {};
		params.VariableName = VariableName;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1760
	 * 		Name   -> Function GTABase.GameterSettings.SetBoolValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterSettings::SetBoolValue(const class FName& VariableName, bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.SetBoolValue");
		
		UGameterSettings_SetBoolValue_Params params {};
		params.VariableName = VariableName;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFA20
	 * 		Name   -> Function GTABase.GameterSettings.RevertOption
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        OptionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterSettings::RevertOption(const class FName& OptionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.RevertOption");
		
		UGameterSettings_RevertOption_Params params {};
		params.OptionName = OptionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB0C40
	 * 		Name   -> Function GTABase.GameterSettings.ResetSettingsToPlatformDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGTASettingsCategory                               Category                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SkipDisplayChanges                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SkipSave                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterSettings::ResetSettingsToPlatformDefault(EGTASettingsCategory Category, bool SkipDisplayChanges, bool SkipSave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.ResetSettingsToPlatformDefault");
		
		UGameterSettings_ResetSettingsToPlatformDefault_Params params {};
		params.Category = Category;
		params.SkipDisplayChanges = SkipDisplayChanges;
		params.SkipSave = SkipSave;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1730
	 * 		Name   -> Function GTABase.GameterSettings.ResetDefaultCheck
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameterSettings::ResetDefaultCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.ResetDefaultCheck");
		
		UGameterSettings_ResetDefaultCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAF7D0
	 * 		Name   -> Function GTABase.GameterSettings.RefreshSettingsOnFirstLoad
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               ForceReset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterSettings::RefreshSettingsOnFirstLoad(bool ForceReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.RefreshSettingsOnFirstLoad");
		
		UGameterSettings_RefreshSettingsOnFirstLoad_Params params {};
		params.ForceReset = ForceReset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFCE0
	 * 		Name   -> Function GTABase.GameterSettings.OnTextureQualitySet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnTextureQualitySet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnTextureQualitySet");
		
		UGameterSettings_OnTextureQualitySet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFD00
	 * 		Name   -> Function GTABase.GameterSettings.OnShadowSet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnShadowSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnShadowSet");
		
		UGameterSettings_OnShadowSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFC60
	 * 		Name   -> Function GTABase.GameterSettings.OnRTXSet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnRTXSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnRTXSet");
		
		UGameterSettings_OnRTXSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFFA0
	 * 		Name   -> Function GTABase.GameterSettings.OnResolutionSet
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               ApplySettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterSettings::OnResolutionSet(bool ApplySettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnResolutionSet");
		
		UGameterSettings_OnResolutionSet_Params params {};
		params.ApplySettings = ApplySettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFCC0
	 * 		Name   -> Function GTABase.GameterSettings.OnReflectionQualitySet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnReflectionQualitySet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnReflectionQualitySet");
		
		UGameterSettings_OnReflectionQualitySet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFC00
	 * 		Name   -> Function GTABase.GameterSettings.OnOutputMonitorSet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnOutputMonitorSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnOutputMonitorSet");
		
		UGameterSettings_OnOutputMonitorSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFD80
	 * 		Name   -> Function GTABase.GameterSettings.OnMotionBlurSet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnMotionBlurSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnMotionBlurSet");
		
		UGameterSettings_OnMotionBlurSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFD60
	 * 		Name   -> Function GTABase.GameterSettings.OnLensFlareSet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnLensFlareSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnLensFlareSet");
		
		UGameterSettings_OnLensFlareSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFC20
	 * 		Name   -> Function GTABase.GameterSettings.OnLanguageSet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnLanguageSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnLanguageSet");
		
		UGameterSettings_OnLanguageSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFEE0
	 * 		Name   -> Function GTABase.GameterSettings.OnFrameRateLimitSet
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               ApplySettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterSettings::OnFrameRateLimitSet(bool ApplySettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnFrameRateLimitSet");
		
		UGameterSettings_OnFrameRateLimitSet_Params params {};
		params.ApplySettings = ApplySettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFE00
	 * 		Name   -> Function GTABase.GameterSettings.OnFrameRateLimitPCSet
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               ApplySettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterSettings::OnFrameRateLimitPCSet(bool ApplySettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnFrameRateLimitPCSet");
		
		UGameterSettings_OnFrameRateLimitPCSet_Params params {};
		params.ApplySettings = ApplySettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFD20
	 * 		Name   -> Function GTABase.GameterSettings.OnDistanceScaleSet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnDistanceScaleSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnDistanceScaleSet");
		
		UGameterSettings_OnDistanceScaleSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB0080
	 * 		Name   -> Function GTABase.GameterSettings.OnDisplayModeSet
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               ApplySettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterSettings::OnDisplayModeSet(bool ApplySettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnDisplayModeSet");
		
		UGameterSettings_OnDisplayModeSet_Params params {};
		params.ApplySettings = ApplySettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GameterSettings.OnDisableTargetOutlineSet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnDisableTargetOutlineSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnDisableTargetOutlineSet");
		
		UGameterSettings_OnDisableTargetOutlineSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFD40
	 * 		Name   -> Function GTABase.GameterSettings.OnDepthOfFieldSet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnDepthOfFieldSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnDepthOfFieldSet");
		
		UGameterSettings_OnDepthOfFieldSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFC40
	 * 		Name   -> Function GTABase.GameterSettings.OnCloudQualitySet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnCloudQualitySet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnCloudQualitySet");
		
		UGameterSettings_OnCloudQualitySet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFBE0
	 * 		Name   -> Function GTABase.GameterSettings.OnClassicRadarSet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnClassicRadarSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnClassicRadarSet");
		
		UGameterSettings_OnClassicRadarSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFC80
	 * 		Name   -> Function GTABase.GameterSettings.OnCarReflectionMethodSet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnCarReflectionMethodSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnCarReflectionMethodSet");
		
		UGameterSettings_OnCarReflectionMethodSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFDA0
	 * 		Name   -> Function GTABase.GameterSettings.OnBloomSet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnBloomSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnBloomSet");
		
		UGameterSettings_OnBloomSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GameterSettings.OnAspectRatioSet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnAspectRatioSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnAspectRatioSet");
		
		UGameterSettings_OnAspectRatioSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFDE0
	 * 		Name   -> Function GTABase.GameterSettings.OnAOSet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnAOSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnAOSet");
		
		UGameterSettings_OnAOSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFDC0
	 * 		Name   -> Function GTABase.GameterSettings.OnAnisotropicSet
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::OnAnisotropicSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.OnAnisotropicSet");
		
		UGameterSettings_OnAnisotropicSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB0250
	 * 		Name   -> Function GTABase.GameterSettings.NormalizeInitialScreenSize
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGameterSettings::NormalizeInitialScreenSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.NormalizeInitialScreenSize");
		
		UGameterSettings_NormalizeInitialScreenSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB0160
	 * 		Name   -> Function GTABase.GameterSettings.IsOptionVisibleOnDevice
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Option                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterSettings::IsOptionVisibleOnDevice(const class FName& Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.IsOptionVisibleOnDevice");
		
		UGameterSettings_IsOptionVisibleOnDevice_Params params {};
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB0420
	 * 		Name   -> Function GTABase.GameterSettings.InitializeGlobalSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameterSettings::InitializeGlobalSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.InitializeGlobalSettings");
		
		UGameterSettings_InitializeGlobalSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1700
	 * 		Name   -> Function GTABase.GameterSettings.HasEverSetToDefault
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UGameterSettings::HasEverSetToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.HasEverSetToDefault");
		
		UGameterSettings_HasEverSetToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1F90
	 * 		Name   -> Function GTABase.GameterSettings.GTASaveSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterSettings::GTASaveSettings(const class FName& SettingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GTASaveSettings");
		
		UGameterSettings_GTASaveSettings_Params params {};
		params.SettingName = SettingName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB0A60
	 * 		Name   -> Function GTABase.GameterSettings.GetSelectionNamesForEmptyEntry
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        EntryName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FText> UGameterSettings::GetSelectionNamesForEmptyEntry(const class FName& EntryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetSelectionNamesForEmptyEntry");
		
		UGameterSettings_GetSelectionNamesForEmptyEntry_Params params {};
		params.EntryName = EntryName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAF8B0
	 * 		Name   -> Function GTABase.GameterSettings.GetScreenResolutionNames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class FText> UGameterSettings::GetScreenResolutionNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetScreenResolutionNames");
		
		UGameterSettings_GetScreenResolutionNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB0720
	 * 		Name   -> Function GTABase.GameterSettings.GetPostChangeConfirmationDialogTitle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        EntryName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        SettingName                                                (Parm, NativeAccessSpecifierPublic)
	 * 		class FText                                        ValueText                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	class FText UGameterSettings::GetPostChangeConfirmationDialogTitle(const class FName& EntryName, const class FText& SettingName, const class FText& ValueText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetPostChangeConfirmationDialogTitle");
		
		UGameterSettings_GetPostChangeConfirmationDialogTitle_Params params {};
		params.EntryName = EntryName;
		params.SettingName = SettingName;
		params.ValueText = ValueText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA5D70
	 * 		Name   -> Function GTABase.GameterSettings.GetPlatformToEmulate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EGTAPlatforms UGameterSettings::GetPlatformToEmulate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetPlatformToEmulate");
		
		UGameterSettings_GetPlatformToEmulate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GameterSettings.GetPlatformDefaults
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTAPlatforms                                      PlatformOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsEditor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UGameterSettings::GetPlatformDefaults(EGTAPlatforms PlatformOverride, bool IsEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetPlatformDefaults");
		
		UGameterSettings_GetPlatformDefaults_Params params {};
		params.PlatformOverride = PlatformOverride;
		params.IsEditor = IsEditor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB0290
	 * 		Name   -> Function GTABase.GameterSettings.GetPlatformDefaultRules
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UDefaultGameterSettings_Rules* UGameterSettings::GetPlatformDefaultRules()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetPlatformDefaultRules");
		
		UGameterSettings_GetPlatformDefaultRules_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB06A0
	 * 		Name   -> Function GTABase.GameterSettings.GetPCFidelitySetting
	 * 		Flags  -> (Final, Native, Public)
	 */
	int32_t UGameterSettings::GetPCFidelitySetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetPCFidelitySetting");
		
		UGameterSettings_GetPCFidelitySetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1B10
	 * 		Name   -> Function GTABase.GameterSettings.GetNumberValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGameterSettings::GetNumberValue(const class FName& VariableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetNumberValue");
		
		UGameterSettings_GetNumberValue_Params params {};
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB0E40
	 * 		Name   -> Function GTABase.GameterSettings.GetListOfFidelityOptionNamesFromSettings
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGTAPlatforms                                      PlatformOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsEditor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FText> UGameterSettings::GetListOfFidelityOptionNamesFromSettings(EGTAPlatforms PlatformOverride, bool IsEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetListOfFidelityOptionNamesFromSettings");
		
		UGameterSettings_GetListOfFidelityOptionNamesFromSettings_Params params {};
		params.PlatformOverride = PlatformOverride;
		params.IsEditor = IsEditor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1C50
	 * 		Name   -> Function GTABase.GameterSettings.GetIntValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGameterSettings::GetIntValue(const class FName& VariableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetIntValue");
		
		UGameterSettings_GetIntValue_Params params {};
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1D40
	 * 		Name   -> Function GTABase.GameterSettings.GetFloatValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UGameterSettings::GetFloatValue(const class FName& VariableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetFloatValue");
		
		UGameterSettings_GetFloatValue_Params params {};
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB11E0
	 * 		Name   -> Function GTABase.GameterSettings.GetFidelityOptionsNum
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTAPlatforms                                      PlatformOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsEditor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGameterSettings::GetFidelityOptionsNum(EGTAPlatforms PlatformOverride, bool IsEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetFidelityOptionsNum");
		
		UGameterSettings_GetFidelityOptionsNum_Params params {};
		params.PlatformOverride = PlatformOverride;
		params.IsEditor = IsEditor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB0FD0
	 * 		Name   -> Function GTABase.GameterSettings.GetFidelityOptionNames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGTAPlatforms                                      PlatformOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FText> UGameterSettings::GetFidelityOptionNames(EGTAPlatforms PlatformOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetFidelityOptionNames");
		
		UGameterSettings_GetFidelityOptionNames_Params params {};
		params.PlatformOverride = PlatformOverride;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1510
	 * 		Name   -> Function GTABase.GameterSettings.GetCurrentFidelityOption
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentSelection                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGTAPlatforms                                      PlatformOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsEditor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGTAFidelityOption* UGameterSettings::GetCurrentFidelityOption(int32_t CurrentSelection, EGTAPlatforms PlatformOverride, bool IsEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetCurrentFidelityOption");
		
		UGameterSettings_GetCurrentFidelityOption_Params params {};
		params.CurrentSelection = CurrentSelection;
		params.PlatformOverride = PlatformOverride;
		params.IsEditor = IsEditor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB18C0
	 * 		Name   -> Function GTABase.GameterSettings.GetBoolValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterSettings::GetBoolValue(const class FName& VariableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetBoolValue");
		
		UGameterSettings_GetBoolValue_Params params {};
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB1360
	 * 		Name   -> Function GTABase.GameterSettings.GetAllAvailableFidelityOptions
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTAPlatforms                                      PlatformOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsEditor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UGTAFidelityOption*> UGameterSettings::GetAllAvailableFidelityOptions(EGTAPlatforms PlatformOverride, bool IsEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.GetAllAvailableFidelityOptions");
		
		UGameterSettings_GetAllAvailableFidelityOptions_Params params {};
		params.PlatformOverride = PlatformOverride;
		params.IsEditor = IsEditor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFB00
	 * 		Name   -> Function GTABase.GameterSettings.FinalOptionCheck
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        OptionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameterSettings::FinalOptionCheck(const class FName& OptionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.FinalOptionCheck");
		
		UGameterSettings_FinalOptionCheck_Params params {};
		params.OptionName = OptionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB02C0
	 * 		Name   -> Function GTABase.GameterSettings.CheckSpecialOptionEnabled
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        OptionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ErrorCode                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameterSettings::CheckSpecialOptionEnabled(const class FName& OptionName, int32_t* ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.CheckSpecialOptionEnabled");
		
		UGameterSettings_CheckSpecialOptionEnabled_Params params {};
		params.OptionName = OptionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorCode != nullptr)
			*ErrorCode = params.ErrorCode;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB0270
	 * 		Name   -> Function GTABase.GameterSettings.CheckDisplayModeAndUpdateSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameterSettings::CheckDisplayModeAndUpdateSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GameterSettings.CheckDisplayModeAndUpdateSettings");
		
		UGameterSettings_CheckDisplayModeAndUpdateSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameterSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameterSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GameterSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDefaultGameterSettings_Rules.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultGameterSettings_Rules::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.DefaultGameterSettings_Rules");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGrungeProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGrungeProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GrungeProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGrungePlacementBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGrungePlacementBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GrungePlacementBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAActivityManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAActivityManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAActivityManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAActor.TimeChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEditor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAActor::TimeChanged(bool bEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAActor.TimeChanged");
		
		AGTAActor_TimeChanged_Params params {};
		params.bEditor = bEditor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4300
	 * 		Name   -> Function GTABase.GTAActor.SetScorched
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               scorched                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAActor::SetScorched(bool scorched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAActor.SetScorched");
		
		AGTAActor_SetScorched_Params params {};
		params.scorched = scorched;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAActor.SetDamaged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               damaged                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAActor::SetDamaged(bool damaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAActor.SetDamaged");
		
		AGTAActor_SetDamaged_Params params {};
		params.damaged = damaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB4420
	 * 		Name   -> Function GTABase.GTAActor.SetAlpha
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              withAlpha                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAActor::SetAlpha(float withAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAActor.SetAlpha");
		
		AGTAActor_SetAlpha_Params params {};
		params.withAlpha = withAlpha;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB43E0
	 * 		Name   -> Function GTABase.GTAActor.GetTimeOfDay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AGTAActor::GetTimeOfDay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAActor.GetTimeOfDay");
		
		AGTAActor_GetTimeOfDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB42E0
	 * 		Name   -> Function GTABase.GTAActor.CheckTreeFarShadowSetting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AGTAActor::CheckTreeFarShadowSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAActor.CheckTreeFarShadowSetting");
		
		AGTAActor_CheckTreeFarShadowSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAActor.AddCollisionEffects
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		float                                              impulseAmt                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Pos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Dir                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAActor::AddCollisionEffects(float impulseAmt, const struct FVector& Pos, const struct FVector& Dir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAActor.AddCollisionEffects");
		
		AGTAActor_AddCollisionEffects_Params params {};
		params.impulseAmt = impulseAmt;
		params.Pos = Pos;
		params.Dir = Dir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTASMActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTASMActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTASMActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTASKActor.GetOverrideSkeleton
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 */
	class USkeleton* AGTASKActor::GetOverrideSkeleton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASKActor.GetOverrideSkeleton");
		
		AGTASKActor_GetOverrideSkeleton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTASKActor.GetBoneTransformTweak
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FTransform                                  InTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        InBoneName                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OutShouldRemove                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TweakType                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform AGTASKActor::GetBoneTransformTweak(const struct FTransform& InTransform, const class FName& InBoneName, bool* OutShouldRemove, const class FName& TweakType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASKActor.GetBoneTransformTweak");
		
		AGTASKActor_GetBoneTransformTweak_Params params {};
		params.InTransform = InTransform;
		params.InBoneName = InBoneName;
		params.TweakType = TweakType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutShouldRemove != nullptr)
			*OutShouldRemove = params.OutShouldRemove;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTASKActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTASKActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTASKActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAAOSkeletalProxy.ConstructStatic
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAAOSkeletalProxy::ConstructStatic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAAOSkeletalProxy.ConstructStatic");
		
		AGTAAOSkeletalProxy_ConstructStatic_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAAOSkeletalProxy.ApplyVertexColor
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAAOSkeletalProxy::ApplyVertexColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAAOSkeletalProxy.ApplyVertexColor");
		
		AGTAAOSkeletalProxy_ApplyVertexColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAAOSkeletalProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAAOSkeletalProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAAOSkeletalProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB50D0
	 * 		Name   -> Function GTABase.GTASKProxyActor.CycleMe
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTASKProxyActor::CycleMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASKProxyActor.CycleMe");
		
		AGTASKProxyActor_CycleMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB50B0
	 * 		Name   -> Function GTABase.GTASKProxyActor.CycleAll
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTASKProxyActor::CycleAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASKProxyActor.CycleAll");
		
		AGTASKProxyActor_CycleAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTASKProxyActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTASKProxyActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTASKProxyActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5290
	 * 		Name   -> Function GTABase.GTAAudioComponent.GetPlaybackPosition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGTAAudioComponent::GetPlaybackPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAAudioComponent.GetPlaybackPosition");
		
		UGTAAudioComponent_GetPlaybackPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAAudioComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAAudioComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAAudioComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTABloodPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTABloodPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTABloodPool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB56F0
	 * 		Name   -> Function GTABase.GTABloodyFootprints.UpdateMeshSection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            MeshSection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTABloodyFootprints::UpdateMeshSection(int32_t MeshSection, float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTABloodyFootprints.UpdateMeshSection");
		
		AGTABloodyFootprints_UpdateMeshSection_Params params {};
		params.MeshSection = MeshSection;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTABloodyFootprints.OnFootprintTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            MeshSection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Lifetime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTABloodyFootprints::OnFootprintTick(int32_t MeshSection, float Lifetime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTABloodyFootprints.OnFootprintTick");
		
		AGTABloodyFootprints_OnFootprintTick_Params params {};
		params.MeshSection = MeshSection;
		params.Lifetime = Lifetime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTABloodyFootprints.OnFootprintAdded
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            MeshSection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTABloodyFootprints::OnFootprintAdded(int32_t MeshSection, float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTABloodyFootprints.OnFootprintAdded");
		
		AGTABloodyFootprints_OnFootprintAdded_Params params {};
		params.MeshSection = MeshSection;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB55E0
	 * 		Name   -> Function GTABase.GTABloodyFootprints.GetDecal
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            MeshSection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDecalComponent* AGTABloodyFootprints::GetDecal(int32_t MeshSection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTABloodyFootprints.GetDecal");
		
		AGTABloodyFootprints_GetDecal_Params params {};
		params.MeshSection = MeshSection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTABloodyFootprints.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTABloodyFootprints::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTABloodyFootprints");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5BC0
	 * 		Name   -> Function GTABase.GTACarRecordings.RestoreOriginalFile
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGTACarRecordings::RestoreOriginalFile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTACarRecordings.RestoreOriginalFile");
		
		UGTACarRecordings_RestoreOriginalFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5D00
	 * 		Name   -> Function GTABase.GTACarRecordings.InsertFile
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGTACarRecordings::InsertFile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTACarRecordings.InsertFile");
		
		UGTACarRecordings_InsertFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB5CE0
	 * 		Name   -> Function GTABase.GTACarRecordings.FlattenBetweenFrames
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGTACarRecordings::FlattenBetweenFrames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTACarRecordings.FlattenBetweenFrames");
		
		UGTACarRecordings_FlattenBetweenFrames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTACarRecordings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTACarRecordings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTACarRecordings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTACinematicDB.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTACinematicDB::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTACinematicDB");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTACollisionCache.ImportOldCache
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGTACollisionCache::ImportOldCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTACollisionCache.ImportOldCache");
		
		UGTACollisionCache_ImportOldCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB70D0
	 * 		Name   -> Function GTABase.GTACollisionCache.Clear
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGTACollisionCache::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTACollisionCache.Clear");
		
		UGTACollisionCache_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTACollisionCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTACollisionCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTACollisionCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTACollisionData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTACollisionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTACollisionData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTACollisionDataCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTACollisionDataCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTACollisionDataCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCollisionFileBackup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollisionFileBackup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.CollisionFileBackup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCollisionSectionContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollisionSectionContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.CollisionSectionContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB92D0
	 * 		Name   -> Function GTABase.GTACoronaComponent.UpdateCorona
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGTACoronaComponent::UpdateCorona(int32_t Index, const struct FVector& position, float Scale, const struct FColor& Color, float Intensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTACoronaComponent.UpdateCorona");
		
		UGTACoronaComponent_UpdateCorona_Params params {};
		params.Index = Index;
		params.position = position;
		params.Scale = Scale;
		params.Color = Color;
		params.Intensity = Intensity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB9200
	 * 		Name   -> Function GTABase.GTACoronaComponent.RemoveCorona
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGTACoronaComponent::RemoveCorona(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTACoronaComponent.RemoveCorona");
		
		UGTACoronaComponent_RemoveCorona_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BB95E0
	 * 		Name   -> Function GTABase.GTACoronaComponent.AddCorona
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGTACoronaComponent::AddCorona(const struct FVector& position, float Intensity, float Scale, const struct FColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTACoronaComponent.AddCorona");
		
		UGTACoronaComponent_AddCorona_Params params {};
		params.position = position;
		params.Intensity = Intensity;
		params.Scale = Scale;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTACoronaComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTACoronaComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTACoronaComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAClutterActor.DisallowSpawn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	bool AGTAClutterActor::DisallowSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAClutterActor.DisallowSpawn");
		
		AGTAClutterActor_DisallowSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAClutterActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAClutterActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAClutterActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTACustomEntity.GetStaticVolumetricStrength
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		float                                              intoAO                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              intoUplight                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTACustomEntity::GetStaticVolumetricStrength(float* intoAO, float* intoUplight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTACustomEntity.GetStaticVolumetricStrength");
		
		AGTACustomEntity_GetStaticVolumetricStrength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (intoAO != nullptr)
			*intoAO = params.intoAO;
		if (intoUplight != nullptr)
			*intoUplight = params.intoUplight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTACustomEntity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTACustomEntity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTACustomEntity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTACustomEntitySM.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTACustomEntitySM::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTACustomEntitySM");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTADecalHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTADecalHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTADecalHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAEffectLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAEffectLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAEffectLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAEnvEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAEnvEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAEnvEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAEnvLightingVolumeGrid.SetLevelBounds
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAEnvLightingVolumeGrid::SetLevelBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAEnvLightingVolumeGrid.SetLevelBounds");
		
		AGTAEnvLightingVolumeGrid_SetLevelBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB680
	 * 		Name   -> Function GTABase.GTAEnvLightingVolumeGrid.IsAsyncTaskPending
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	bool AGTAEnvLightingVolumeGrid::IsAsyncTaskPending()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAEnvLightingVolumeGrid.IsAsyncTaskPending");
		
		AGTAEnvLightingVolumeGrid_IsAsyncTaskPending_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBBB80
	 * 		Name   -> Function GTABase.GTAEnvLightingVolumeGrid.GetSkyVisibilityAtLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Pos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AGTAEnvLightingVolumeGrid::STATIC_GetSkyVisibilityAtLocation(class UObject* WorldContextObject, const struct FVector& Pos, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAEnvLightingVolumeGrid.GetSkyVisibilityAtLocation");
		
		AGTAEnvLightingVolumeGrid_GetSkyVisibilityAtLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Pos = Pos;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB7F0
	 * 		Name   -> Function GTABase.GTAEnvLightingVolumeGrid.GetDynamicLightingAtLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      forActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Pos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              outAO                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                outUplighting                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AGTAEnvLightingVolumeGrid::STATIC_GetDynamicLightingAtLocation(class AActor* forActor, const struct FVector& Pos, float Radius, float* outAO, struct FLinearColor* outUplighting, bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAEnvLightingVolumeGrid.GetDynamicLightingAtLocation");
		
		AGTAEnvLightingVolumeGrid_GetDynamicLightingAtLocation_Params params {};
		params.forActor = forActor;
		params.Pos = Pos;
		params.Radius = Radius;
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outAO != nullptr)
			*outAO = params.outAO;
		if (outUplighting != nullptr)
			*outUplighting = params.outUplighting;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAEnvLightingVolumeGrid.ConstructGrid
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAEnvLightingVolumeGrid::ConstructGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAEnvLightingVolumeGrid.ConstructGrid");
		
		AGTAEnvLightingVolumeGrid_ConstructGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB720
	 * 		Name   -> Function GTABase.GTAEnvLightingVolumeGrid.ClearAnyCachedDynamicLighting
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      forActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAEnvLightingVolumeGrid::STATIC_ClearAnyCachedDynamicLighting(class AActor* forActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAEnvLightingVolumeGrid.ClearAnyCachedDynamicLighting");
		
		AGTAEnvLightingVolumeGrid_ClearAnyCachedDynamicLighting_Params params {};
		params.forActor = forActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBB700
	 * 		Name   -> Function GTABase.GTAEnvLightingVolumeGrid.ClearAllCachedLighting
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void AGTAEnvLightingVolumeGrid::STATIC_ClearAllCachedLighting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAEnvLightingVolumeGrid.ClearAllCachedLighting");
		
		AGTAEnvLightingVolumeGrid_ClearAllCachedLighting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAEnvLightingVolumeGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAEnvLightingVolumeGrid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAEnvLightingVolumeGrid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTASkyOcclusionOverride.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTASkyOcclusionOverride::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTASkyOcclusionOverride");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC090
	 * 		Name   -> Function GTABase.GTAExplosion.SetupAttachedActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AGTAExplosion::SetupAttachedActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAExplosion.SetupAttachedActor");
		
		AGTAExplosion_SetupAttachedActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBC010
	 * 		Name   -> Function GTABase.GTAExplosion.EditorPreview
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAExplosion::EditorPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAExplosion.EditorPreview");
		
		AGTAExplosion_EditorPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAExplosion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAExplosion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAExplosion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAFire.GetSystem
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             System                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAFire::GetSystem(class UParticleSystem** System, float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAFire.GetSystem");
		
		AGTAFire_GetSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (System != nullptr)
			*System = params.System;
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAFire.Extinguish
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AGTAFire::Extinguish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAFire.Extinguish");
		
		AGTAFire_Extinguish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAFire.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAFire::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAFire");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFireBurningCluster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFireBurningCluster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.FireBurningCluster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAGameEngine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAGameEngine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAGameEngine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAClutterGrassType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAClutterGrassType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAClutterGrassType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAGrassProxy.ToggleViz
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAGrassProxy::ToggleViz()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAGrassProxy.ToggleViz");
		
		AGTAGrassProxy_ToggleViz_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAGrassProxy.SpawnInEditor
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAGrassProxy::SpawnInEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAGrassProxy.SpawnInEditor");
		
		AGTAGrassProxy_SpawnInEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAGrassProxy.Remove
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAGrassProxy::Remove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAGrassProxy.Remove");
		
		AGTAGrassProxy_Remove_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAGrassProxy.BuildAndSpawn
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAGrassProxy::BuildAndSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAGrassProxy.BuildAndSpawn");
		
		AGTAGrassProxy_BuildAndSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAGrassProxy.Build
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAGrassProxy::Build()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAGrassProxy.Build");
		
		AGTAGrassProxy_Build_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD440
	 * 		Name   -> Function GTABase.GTAGrassProxy.AddHelicopterGrassMovement
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Milliseconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StaticHeight                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GrassFlutterFactor                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAGrassProxy::STATIC_AddHelicopterGrassMovement(const struct FVector& position, float Milliseconds, float StaticHeight, float GrassFlutterFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAGrassProxy.AddHelicopterGrassMovement");
		
		AGTAGrassProxy_AddHelicopterGrassMovement_Params params {};
		params.position = position;
		params.Milliseconds = Milliseconds;
		params.StaticHeight = StaticHeight;
		params.GrassFlutterFactor = GrassFlutterFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBDA00
	 * 		Name   -> Function GTABase.GTAGrassProxy.AddGrassMovementInfluence
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAGrassProxy::STATIC_AddGrassMovementInfluence(const struct FVector& position, float Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAGrassProxy.AddGrassMovementInfluence");
		
		AGTAGrassProxy_AddGrassMovementInfluence_Params params {};
		params.position = position;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBD8A0
	 * 		Name   -> Function GTABase.GTAGrassProxy.AddFoliageMovementInfluence
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAGrassProxy::STATIC_AddFoliageMovementInfluence(const struct FVector& position, float Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAGrassProxy.AddFoliageMovementInfluence");
		
		AGTAGrassProxy_AddFoliageMovementInfluence_Params params {};
		params.position = position;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAGrassProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAGrassProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAGrassProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAGrassExcluder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAGrassExcluder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAGrassExcluder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAHaptics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAHaptics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAHaptics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BBF640
	 * 		Name   -> Function GTABase.GTAHUD.PrintString
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      pCharacters                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFont*                                       InFont                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EHUDTextJustify                                    justify                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               inShadow                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAHUD::STATIC_PrintString(float X, float Y, const struct FVector2D& Scale, const class FString& pCharacters, const struct FColor& Color, class UFont* InFont, EHUDTextJustify justify, bool inShadow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAHUD.PrintString");
		
		AGTAHUD_PrintString_Params params {};
		params.X = X;
		params.Y = Y;
		params.Scale = Scale;
		params.pCharacters = pCharacters;
		params.Color = Color;
		params.InFont = InFont;
		params.justify = justify;
		params.inShadow = inShadow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAIFPFileContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAIFPFileContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAIFPFileContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAJetpack.UpdateThrust
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              newThrustLeft                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              newThrustRight                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAJetpack::UpdateThrust(float newThrustLeft, float newThrustRight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAJetpack.UpdateThrust");
		
		AGTAJetpack_UpdateThrust_Params params {};
		params.newThrustLeft = newThrustLeft;
		params.newThrustRight = newThrustRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAJetpack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAJetpack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAJetpack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTALevelScriptActor.SetWeatherImpactEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              RoadWetness                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WaveAmount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTALevelScriptActor::SetWeatherImpactEffects(float RoadWetness, float WaveAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetWeatherImpactEffects");
		
		AGTALevelScriptActor_SetWeatherImpactEffects_Params params {};
		params.RoadWetness = RoadWetness;
		params.WaveAmount = WaveAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTALevelScriptActor.SetWeatherEffects
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CloudCoverage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RainAmount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SandstormAmount                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Wind                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WindDir                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ExtraSunny                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTALevelScriptActor::SetWeatherEffects(float CloudCoverage, float RainAmount, float SandstormAmount, float Wind, const struct FVector& WindDir, float ExtraSunny)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetWeatherEffects");
		
		AGTALevelScriptActor_SetWeatherEffects_Params params {};
		params.CloudCoverage = CloudCoverage;
		params.RainAmount = RainAmount;
		params.SandstormAmount = SandstormAmount;
		params.Wind = Wind;
		params.WindDir = WindDir;
		params.ExtraSunny = ExtraSunny;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTALevelScriptActor.SetWeather
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGTAWeather                                        weather1                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGTAWeather                                        weather2                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGTAWeatherRegion                                  region1                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGTAWeatherRegion                                  region2                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              interp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTALevelScriptActor::SetWeather(EGTAWeather weather1, EGTAWeather weather2, EGTAWeatherRegion region1, EGTAWeatherRegion region2, float interp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetWeather");
		
		AGTALevelScriptActor_SetWeather_Params params {};
		params.weather1 = weather1;
		params.weather2 = weather2;
		params.region1 = region1;
		params.region2 = region2;
		params.interp = interp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTALevelScriptActor.SetupScalability
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AGTAScalability*                             ToSetup                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTALevelScriptActor::SetupScalability(class AGTAScalability* ToSetup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetupScalability");
		
		AGTALevelScriptActor_SetupScalability_Params params {};
		params.ToSetup = ToSetup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTALevelScriptActor.SetTimeOfDay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Hours                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTALevelScriptActor::SetTimeOfDay(float Hours)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetTimeOfDay");
		
		AGTALevelScriptActor_SetTimeOfDay_Params params {};
		params.Hours = Hours;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTALevelScriptActor.SetStreetlightAmount
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              LightAmount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LightDistance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DecalFadeDistance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTALevelScriptActor::SetStreetlightAmount(float LightAmount, float LightDistance, float DecalFadeDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetStreetlightAmount");
		
		AGTALevelScriptActor_SetStreetlightAmount_Params params {};
		params.LightAmount = LightAmount;
		params.LightDistance = LightDistance;
		params.DecalFadeDistance = DecalFadeDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTALevelScriptActor.SetSkyColors
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FColor                                      skyBottom                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      skyTop                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTALevelScriptActor::SetSkyColors(const struct FColor& skyBottom, const struct FColor& skyTop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetSkyColors");
		
		AGTALevelScriptActor_SetSkyColors_Params params {};
		params.skyBottom = skyBottom;
		params.skyTop = skyTop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTALevelScriptActor.SetLocationEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              UnderwaterAmt                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TunnelAmt                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTALevelScriptActor::SetLocationEffects(float UnderwaterAmt, float TunnelAmt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetLocationEffects");
		
		AGTALevelScriptActor_SetLocationEffects_Params params {};
		params.UnderwaterAmt = UnderwaterAmt;
		params.TunnelAmt = TunnelAmt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTALevelScriptActor.SetLightColors
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FColor                                      ambient                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      directional                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTALevelScriptActor::SetLightColors(const struct FColor& ambient, const struct FColor& directional)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetLightColors");
		
		AGTALevelScriptActor_SetLightColors_Params params {};
		params.ambient = ambient;
		params.directional = directional;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTALevelScriptActor.SetEnvironmentEffects
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Foggyness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HeatHaze                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LightningFlash                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RIOT                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTALevelScriptActor::SetEnvironmentEffects(float Foggyness, float HeatHaze, float LightningFlash, float RIOT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetEnvironmentEffects");
		
		AGTALevelScriptActor_SetEnvironmentEffects_Params params {};
		params.Foggyness = Foggyness;
		params.HeatHaze = HeatHaze;
		params.LightningFlash = LightningFlash;
		params.RIOT = RIOT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTALevelScriptActor.SetCCTV
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTALevelScriptActor::SetCCTV(int32_t Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetCCTV");
		
		AGTALevelScriptActor_SetCCTV_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTALevelScriptActor.SetAdrenaline
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTALevelScriptActor::SetAdrenaline(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALevelScriptActor.SetAdrenaline");
		
		AGTALevelScriptActor_SetAdrenaline_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTALevelScriptActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTALevelScriptActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTALevelScriptActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1710
	 * 		Name   -> Function GTABase.GTALightBase.SetFarCorona
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              WithIntensity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WithSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTALightBase::SetFarCorona(float WithIntensity, float WithSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALightBase.SetFarCorona");
		
		AGTALightBase_SetFarCorona_Params params {};
		params.WithIntensity = WithIntensity;
		params.WithSize = WithSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1590
	 * 		Name   -> Function GTABase.GTALightBase.SetDecalComponentSize
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UDecalComponent*                             Decal                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     newSize                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTALightBase::STATIC_SetDecalComponentSize(class UDecalComponent* Decal, const struct FVector& newSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALightBase.SetDecalComponentSize");
		
		AGTALightBase_SetDecalComponentSize_Params params {};
		params.Decal = Decal;
		params.newSize = newSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTALightBase.GetProximityCooldownTime
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 */
	float AGTALightBase::GetProximityCooldownTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALightBase.GetProximityCooldownTime");
		
		AGTALightBase_GetProximityCooldownTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTALightBase.GetCoronaPosition
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent, Const)
	 */
	struct FVector AGTALightBase::GetCoronaPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALightBase.GetCoronaPosition");
		
		AGTALightBase_GetCoronaPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTALightBase.GetCoronaColor
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent, Const)
	 */
	struct FColor AGTALightBase::GetCoronaColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALightBase.GetCoronaColor");
		
		AGTALightBase_GetCoronaColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTALightBase.ChangedLightSwitch
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bOn                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsEditor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTALightBase::ChangedLightSwitch(bool bOn, bool bIsEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTALightBase.ChangedLightSwitch");
		
		AGTALightBase_ChangedLightSwitch_Params params {};
		params.bOn = bOn;
		params.bIsEditor = bIsEditor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTALightBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTALightBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTALightBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTASpotLight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTASpotLight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTASpotLight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAPointLight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAPointLight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAPointLight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTARectLight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTARectLight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTARectLight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1C20
	 * 		Name   -> Function GTABase.GTAHeightFog.UpdateColors
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void AGTAHeightFog::UpdateColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAHeightFog.UpdateColors");
		
		AGTAHeightFog_UpdateColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAHeightFog.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAHeightFog::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAHeightFog");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAWindowLight.SetupLights
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeOfDay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAWindowLight::SetupLights(float TimeOfDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWindowLight.SetupLights");
		
		AGTAWindowLight_SetupLights_Params params {};
		params.TimeOfDay = TimeOfDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC1CD0
	 * 		Name   -> Function GTABase.GTAWindowLight.GetAttenuationMult
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	float AGTAWindowLight::GetAttenuationMult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWindowLight.GetAttenuationMult");
		
		AGTAWindowLight_GetAttenuationMult_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAWindowLight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAWindowLight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAWindowLight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTALightTriggerVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTALightTriggerVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTALightTriggerVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAMirrorBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAMirrorBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAMirrorBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAMarkerActor.StartDissolve
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPickedUp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAMarkerActor::StartDissolve(bool bPickedUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.StartDissolve");
		
		AGTAMarkerActor_StartDissolve_Params params {};
		params.bPickedUp = bPickedUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAMarkerActor.SetPickupLight
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bOn                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAMarkerActor::SetPickupLight(bool bOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetPickupLight");
		
		AGTAMarkerActor_SetPickupLight_Params params {};
		params.bOn = bOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAMarkerActor.SetPickupFlags
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsWeapon                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsOutOfStock                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsPurchase                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ShowMoney                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAMarkerActor::SetPickupFlags(bool IsWeapon, bool IsOutOfStock, bool IsPurchase, bool ShowMoney)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetPickupFlags");
		
		AGTAMarkerActor_SetPickupFlags_Params params {};
		params.IsWeapon = IsWeapon;
		params.IsOutOfStock = IsOutOfStock;
		params.IsPurchase = IsPurchase;
		params.ShowMoney = ShowMoney;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAMarkerActor.SetPickupColor
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FColor                                      Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAMarkerActor::SetPickupColor(const struct FColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetPickupColor");
		
		AGTAMarkerActor_SetPickupColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAMarkerActor.SetMarkerOutline
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FColor                                      withColor                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAMarkerActor::SetMarkerOutline(const struct FColor& withColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetMarkerOutline");
		
		AGTAMarkerActor_SetMarkerOutline_Params params {};
		params.withColor = withColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAMarkerActor.SetMarkerMesh
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UStaticMesh*                                 withMesh                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAMarkerActor::SetMarkerMesh(class UStaticMesh* withMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetMarkerMesh");
		
		AGTAMarkerActor_SetMarkerMesh_Params params {};
		params.withMesh = withMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAMarkerActor.SetMarkerColor
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FColor                                      withColor                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAMarkerActor::SetMarkerColor(const struct FColor& withColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetMarkerColor");
		
		AGTAMarkerActor_SetMarkerColor_Params params {};
		params.withColor = withColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAMarkerActor.SetMarkerCameraGlow
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShouldGlow                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsMainHidden                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAMarkerActor::SetMarkerCameraGlow(bool bShouldGlow, bool bIsMainHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetMarkerCameraGlow");
		
		AGTAMarkerActor_SetMarkerCameraGlow_Params params {};
		params.bShouldGlow = bShouldGlow;
		params.bIsMainHidden = bIsMainHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAMarkerActor.SetGroundLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     withLocation                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAMarkerActor::SetGroundLocation(const struct FVector& withLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetGroundLocation");
		
		AGTAMarkerActor_SetGroundLocation_Params params {};
		params.withLocation = withLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAMarkerActor.SetCheckpointType
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Cpt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAMarkerActor::SetCheckpointType(int32_t Cpt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAMarkerActor.SetCheckpointType");
		
		AGTAMarkerActor_SetCheckpointType_Params params {};
		params.Cpt = Cpt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAMarkerActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAMarkerActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAMarkerActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAMaterialData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAMaterialData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAMaterialData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnpackedMaterialDataBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnpackedMaterialDataBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.UnpackedMaterialDataBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAParticleInitialLocationScale.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAParticleInitialLocationScale::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAParticleInitialLocationScale");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAParticleRotationOverLife.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAParticleRotationOverLife::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAParticleRotationOverLife");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAParticleAddColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAParticleAddColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAParticleAddColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAPerParticleSpawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAPerParticleSpawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAPerParticleSpawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAParticleWind.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAParticleWind::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAParticleWind");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAFixToWaterPlane.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAFixToWaterPlane::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAFixToWaterPlane");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleGTABase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleGTABase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.ParticleModuleGTABase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleKillAtOpacity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleKillAtOpacity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.ParticleModuleKillAtOpacity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTABounceFloor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTABounceFloor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTABounceFloor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAFireTopology.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAFireTopology::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAFireTopology");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAColorScale.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAColorScale::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAColorScale");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAFollowTerrainVelocity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAFollowTerrainVelocity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAFollowTerrainVelocity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPathRegion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathRegion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.PathRegion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4BD0
	 * 		Name   -> Function GTABase.GTAPathfindNodes.VCImportRegion
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGTAPathfindNodes::VCImportRegion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPathfindNodes.VCImportRegion");
		
		UGTAPathfindNodes_VCImportRegion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4B60
	 * 		Name   -> Function GTABase.GTAPathfindNodes.VCImportRawNodes
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGTAPathfindNodes::VCImportRawNodes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPathfindNodes.VCImportRawNodes");
		
		UGTAPathfindNodes_VCImportRawNodes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4BF0
	 * 		Name   -> Function GTABase.GTAPathfindNodes.GTA3ImportRegion
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGTAPathfindNodes::GTA3ImportRegion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPathfindNodes.GTA3ImportRegion");
		
		UGTAPathfindNodes_GTA3ImportRegion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAPathfindNodes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAPathfindNodes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAPathfindNodes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomInstancedMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomInstancedMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.CustomInstancedMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAPathfindVisualization.SnapToNodeIndex
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AGTAPathfindVisualization::SnapToNodeIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPathfindVisualization.SnapToNodeIndex");
		
		AGTAPathfindVisualization_SnapToNodeIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAPathfindVisualization.SetReversePoint
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AGTAPathfindVisualization::SetReversePoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPathfindVisualization.SetReversePoint");
		
		AGTAPathfindVisualization_SetReversePoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAPathfindVisualization.SetDebugPoint
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AGTAPathfindVisualization::SetDebugPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPathfindVisualization.SetDebugPoint");
		
		AGTAPathfindVisualization_SetDebugPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC4D50
	 * 		Name   -> Function GTABase.GTAPathfindVisualization.RunMeshGenVisualization
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AGTAPathfindVisualization::RunMeshGenVisualization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPathfindVisualization.RunMeshGenVisualization");
		
		AGTAPathfindVisualization_RunMeshGenVisualization_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAPathfindVisualization.DoFloodFill
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AGTAPathfindVisualization::DoFloodFill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPathfindVisualization.DoFloodFill");
		
		AGTAPathfindVisualization_DoFloodFill_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAPathfindVisualization.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAPathfindVisualization::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAPathfindVisualization");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPathsIplContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathsIplContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.PathsIplContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAPathfindVizRaw.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAPathfindVizRaw::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAPathfindVizRaw");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.FloodPath.RebuildPathUVs
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UFloodPath::RebuildPathUVs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.FloodPath.RebuildPathUVs");
		
		UFloodPath_RebuildPathUVs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.FloodPath.OptimizePaths
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UFloodPath::OptimizePaths()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.FloodPath.OptimizePaths");
		
		UFloodPath_OptimizePaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.FloodPath.CheckDebugPoint
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UFloodPath::CheckDebugPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.FloodPath.CheckDebugPoint");
		
		UFloodPath_CheckDebugPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFloodPath.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFloodPath::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.FloodPath");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC69F0
	 * 		Name   -> Function GTABase.GTAClothingTable.GetShirtMaskTexture
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	class UTexture* UGTAClothingTable::GetShirtMaskTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAClothingTable.GetShirtMaskTexture");
		
		UGTAClothingTable_GetShirtMaskTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC69D0
	 * 		Name   -> Function GTABase.GTAClothingTable.ConvertOldData
	 * 		Flags  -> (Native, Public)
	 */
	void UGTAClothingTable::ConvertOldData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAClothingTable.ConvertOldData");
		
		UGTAClothingTable_ConvertOldData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAClothingTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAClothingTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAClothingTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC6BB0
	 * 		Name   -> Function GTABase.GTAPlayerActor.UseBoneTweaks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AGTAPlayerActor::UseBoneTweaks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPlayerActor.UseBoneTweaks");
		
		AGTAPlayerActor_UseBoneTweaks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAPlayerActor.SetupPlayerMorph
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UGTAPoseableComponent*                       forComp                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              withFatness                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              withRippedness                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAPlayerActor::SetupPlayerMorph(class UGTAPoseableComponent* forComp, float withFatness, float withRippedness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPlayerActor.SetupPlayerMorph");
		
		AGTAPlayerActor_SetupPlayerMorph_Params params {};
		params.forComp = forComp;
		params.withFatness = withFatness;
		params.withRippedness = withRippedness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC6BD0
	 * 		Name   -> Function GTABase.GTAPlayerActor.GetSkeletalMesh
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	class USkeletalMesh* AGTAPlayerActor::GetSkeletalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPlayerActor.GetSkeletalMesh");
		
		AGTAPlayerActor_GetSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC6B80
	 * 		Name   -> Function GTABase.GTAPlayerActor.GetMeshForAttachment
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	class UGTAPoseableComponent* AGTAPlayerActor::GetMeshForAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPlayerActor.GetMeshForAttachment");
		
		AGTAPlayerActor_GetMeshForAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAPlayerActor.GetClothingTable
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	class UGTAClothingTable* AGTAPlayerActor::GetClothingTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPlayerActor.GetClothingTable");
		
		AGTAPlayerActor_GetClothingTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAPlayerActor.GetBodyPart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USkinnedMeshComponent* AGTAPlayerActor::GetBodyPart(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPlayerActor.GetBodyPart");
		
		AGTAPlayerActor_GetBodyPart_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAPlayerActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAPlayerActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAPlayerActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTACheatManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTACheatManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTACheatManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC6F80
	 * 		Name   -> Function GTABase.GTAPlayerController.ClearUserFocus
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void AGTAPlayerController::ClearUserFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPlayerController.ClearUserFocus");
		
		AGTAPlayerController_ClearUserFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BAFEE0
	 * 		Name   -> Function GTABase.GTAPoseableComponent.UnbindClothFromMasterPoseComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bRestoreSimulationSpace                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGTAPoseableComponent::UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.UnbindClothFromMasterPoseComponent");
		
		UGTAPoseableComponent_UnbindClothFromMasterPoseComponent_Params params {};
		params.bRestoreSimulationSpace = bRestoreSimulationSpace;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC8170
	 * 		Name   -> Function GTABase.GTAPoseableComponent.SuspendClothingSimulation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGTAPoseableComponent::SuspendClothingSimulation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.SuspendClothingSimulation");
		
		UGTAPoseableComponent_SuspendClothingSimulation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC81D0
	 * 		Name   -> Function GTABase.GTAPoseableComponent.SetMorphTargetWeight
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        forMorph                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Weight                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGTAPoseableComponent::SetMorphTargetWeight(const class FName& forMorph, float Weight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.SetMorphTargetWeight");
		
		UGTAPoseableComponent_SetMorphTargetWeight_Params params {};
		params.forMorph = forMorph;
		params.Weight = Weight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC8140
	 * 		Name   -> Function GTABase.GTAPoseableComponent.ResumeClothingSimulation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGTAPoseableComponent::ResumeClothingSimulation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.ResumeClothingSimulation");
		
		UGTAPoseableComponent_ResumeClothingSimulation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC80F0
	 * 		Name   -> Function GTABase.GTAPoseableComponent.ResetClothTeleportMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGTAPoseableComponent::ResetClothTeleportMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.ResetClothTeleportMode");
		
		UGTAPoseableComponent_ResetClothTeleportMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC8110
	 * 		Name   -> Function GTABase.GTAPoseableComponent.IsClothingSimulationSuspended
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGTAPoseableComponent::IsClothingSimulationSuspended()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.IsClothingSimulationSuspended");
		
		UGTAPoseableComponent_IsClothingSimulationSuspended_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC80D0
	 * 		Name   -> Function GTABase.GTAPoseableComponent.GetClothingSimulationInteractor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UClothingSimulationInteractor* UGTAPoseableComponent::GetClothingSimulationInteractor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.GetClothingSimulationInteractor");
		
		UGTAPoseableComponent_GetClothingSimulationInteractor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC8190
	 * 		Name   -> Function GTABase.GTAPoseableComponent.ForceClothNextUpdateTeleportAndReset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGTAPoseableComponent::ForceClothNextUpdateTeleportAndReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.ForceClothNextUpdateTeleportAndReset");
		
		UGTAPoseableComponent_ForceClothNextUpdateTeleportAndReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC81B0
	 * 		Name   -> Function GTABase.GTAPoseableComponent.ForceClothNextUpdateTeleport
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGTAPoseableComponent::ForceClothNextUpdateTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.ForceClothNextUpdateTeleport");
		
		UGTAPoseableComponent_ForceClothNextUpdateTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAPoseableComponent.BindClothToMasterPoseComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGTAPoseableComponent::BindClothToMasterPoseComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPoseableComponent.BindClothToMasterPoseComponent");
		
		UGTAPoseableComponent_BindClothToMasterPoseComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAPoseableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAPoseableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAPoseableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAPoseableMeshComponent_BlendTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAPoseableMeshComponent_BlendTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAPoseableMeshComponent_BlendTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTABlendableSKActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTABlendableSKActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTABlendableSKActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAPostLightReplacer.PreviewInEditor
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAPostLightReplacer::PreviewInEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPostLightReplacer.PreviewInEditor");
		
		AGTAPostLightReplacer_PreviewInEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAPostLightReplacer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAPostLightReplacer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAPostLightReplacer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC8950
	 * 		Name   -> Function GTABase.GTAPostProcessVolume.UpdateColorOptions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AGTAPostProcessVolume::UpdateColorOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPostProcessVolume.UpdateColorOptions");
		
		AGTAPostProcessVolume_UpdateColorOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC8970
	 * 		Name   -> Function GTABase.GTAPostProcessVolume.SetCameraParameters
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinearColor                                withValue                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAPostProcessVolume::SetCameraParameters(const struct FLinearColor& withValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPostProcessVolume.SetCameraParameters");
		
		AGTAPostProcessVolume_SetCameraParameters_Params params {};
		params.withValue = withValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC8A70
	 * 		Name   -> Function GTABase.GTAPostProcessVolume.SetAutoExposure
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              withValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAPostProcessVolume::SetAutoExposure(float withValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAPostProcessVolume.SetAutoExposure");
		
		AGTAPostProcessVolume_SetAutoExposure_Params params {};
		params.withValue = withValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAPostProcessVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAPostProcessVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAPostProcessVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTARadar.SwitchedMode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bMenuMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTARadar::SwitchedMode(bool bMenuMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.SwitchedMode");
		
		AGTARadar_SwitchedMode_Params params {};
		params.bMenuMode = bMenuMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC96D0
	 * 		Name   -> Function GTABase.GTARadar.SetupMenu
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     playerDirection                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              zoomAmt                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTARadar::SetupMenu(const struct FVector& position, const struct FVector& playerDirection, float zoomAmt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.SetupMenu");
		
		AGTARadar_SetupMenu_Params params {};
		params.position = position;
		params.playerDirection = playerDirection;
		params.zoomAmt = zoomAmt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC9690
	 * 		Name   -> Function GTABase.GTARadar.IsActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AGTARadar::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.IsActive");
		
		AGTARadar_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTARadar.GetReferencePoints
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     MinRef                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     MaxRef                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTARadar::GetReferencePoints(struct FVector* MinRef, struct FVector* MaxRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.GetReferencePoints");
		
		AGTARadar_GetReferencePoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinRef != nullptr)
			*MinRef = params.MinRef;
		if (MaxRef != nullptr)
			*MaxRef = params.MaxRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC96B0
	 * 		Name   -> Function GTABase.GTARadar.GetRadarState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ERadarState AGTARadar::GetRadarState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.GetRadarState");
		
		AGTARadar_GetRadarState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC9630
	 * 		Name   -> Function GTABase.GTARadar.GetMapZoomedOutPositionBounds
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 */
	struct FVector4 AGTARadar::GetMapZoomedOutPositionBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.GetMapZoomedOutPositionBounds");
		
		AGTARadar_GetMapZoomedOutPositionBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC9660
	 * 		Name   -> Function GTABase.GTARadar.GetMapZoomedInPositionBounds
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 */
	struct FVector4 AGTARadar::GetMapZoomedInPositionBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.GetMapZoomedInPositionBounds");
		
		AGTARadar_GetMapZoomedInPositionBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC92B0
	 * 		Name   -> Function GTABase.GTARadar.GetMapZoomBounds
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              MinZoom                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxZoom                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTARadar::GetMapZoomBounds(float* MinZoom, float* MaxZoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.GetMapZoomBounds");
		
		AGTARadar_GetMapZoomBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinZoom != nullptr)
			*MinZoom = params.MinZoom;
		if (MaxZoom != nullptr)
			*MaxZoom = params.MaxZoom;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC9440
	 * 		Name   -> Function GTABase.GTARadar.GetMapPositionBoundsWithZoom
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              CurrentZoom                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Bounds                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTARadar::GetMapPositionBoundsWithZoom(float CurrentZoom, struct FVector4* Bounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.GetMapPositionBoundsWithZoom");
		
		AGTARadar_GetMapPositionBoundsWithZoom_Params params {};
		params.CurrentZoom = CurrentZoom;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bounds != nullptr)
			*Bounds = params.Bounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC9280
	 * 		Name   -> Function GTABase.GTARadar.GetGTARadarActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class AGTARadar* AGTARadar::STATIC_GetGTARadarActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.GetGTARadarActor");
		
		AGTARadar_GetGTARadarActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTARadar.FetchRadarComponents
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UPrimitiveComponent*>                 Components                                                 (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AGTARadar::FetchRadarComponents(TArray<class UPrimitiveComponent*>* Components)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.FetchRadarComponents");
		
		AGTARadar_FetchRadarComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC98E0
	 * 		Name   -> Function GTABase.GTARadar.ConvertToWorldSpace
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     RadarPos                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector AGTARadar::ConvertToWorldSpace(const struct FVector& RadarPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.ConvertToWorldSpace");
		
		AGTARadar_ConvertToWorldSpace_Params params {};
		params.RadarPos = RadarPos;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC9A30
	 * 		Name   -> Function GTABase.GTARadar.ConvertToRadarSpace
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     WorldPos                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector AGTARadar::ConvertToRadarSpace(const struct FVector& WorldPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTARadar.ConvertToRadarSpace");
		
		AGTARadar_ConvertToRadarSpace_Params params {};
		params.WorldPos = WorldPos;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTARadar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTARadar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTARadar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD5B00
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.UpdateLanguage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUI_DesignTimeUserWidget::UpdateLanguage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.UpdateLanguage");
		
		UUI_DesignTimeUserWidget_UpdateLanguage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD6070
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.TryToResolveSocialClubOnce
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUI_DesignTimeUserWidget::TryToResolveSocialClubOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.TryToResolveSocialClubOnce");
		
		UUI_DesignTimeUserWidget_TryToResolveSocialClubOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD6280
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.TakeFocus
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	bool UUI_DesignTimeUserWidget::TakeFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.TakeFocus");
		
		UUI_DesignTimeUserWidget_TakeFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD56F0
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.SetLocalizedStringsifNeeded
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_DesignTimeUserWidget::SetLocalizedStringsifNeeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.SetLocalizedStringsifNeeded");
		
		UUI_DesignTimeUserWidget_SetLocalizedStringsifNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD5CC0
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.PlayMenuSoundNative
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_DesignTimeUserWidget::PlayMenuSoundNative(float Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.PlayMenuSoundNative");
		
		UUI_DesignTimeUserWidget_PlayMenuSoundNative_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD62B0
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.OnSynchronizeProperties
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UUI_DesignTimeUserWidget::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.OnSynchronizeProperties");
		
		UUI_DesignTimeUserWidget_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD5B80
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.LaunchGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Game                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_DesignTimeUserWidget::LaunchGame(const class FString& Game)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.LaunchGame");
		
		UUI_DesignTimeUserWidget_LaunchGame_Params params {};
		params.Game = Game;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD61F0
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.IsWindowInForeground
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUI_DesignTimeUserWidget::IsWindowInForeground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.IsWindowInForeground");
		
		UUI_DesignTimeUserWidget_IsWindowInForeground_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD6220
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.IsPlayingMovie
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	bool UUI_DesignTimeUserWidget::IsPlayingMovie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.IsPlayingMovie");
		
		UUI_DesignTimeUserWidget_IsPlayingMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD6250
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.HandleBack
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	bool UUI_DesignTimeUserWidget::HandleBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.HandleBack");
		
		UUI_DesignTimeUserWidget_HandleBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD60B0
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.GetWorldSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class AWorldSettings* UUI_DesignTimeUserWidget::GetWorldSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.GetWorldSettings");
		
		UUI_DesignTimeUserWidget_GetWorldSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD56D0
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.GetPlayerControlerIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UUI_DesignTimeUserWidget::STATIC_GetPlayerControlerIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.GetPlayerControlerIndex");
		
		UUI_DesignTimeUserWidget_GetPlayerControlerIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD5710
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.GetLocalizedStringFromKey
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUI_DesignTimeUserWidget::GetLocalizedStringFromKey(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.GetLocalizedStringFromKey");
		
		UUI_DesignTimeUserWidget_GetLocalizedStringFromKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD56B0
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.GetLastUserIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UUI_DesignTimeUserWidget::STATIC_GetLastUserIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.GetLastUserIndex");
		
		UUI_DesignTimeUserWidget_GetLastUserIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD58D0
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.GetImageFilename
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UUI_DesignTimeUserWidget::GetImageFilename()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.GetImageFilename");
		
		UUI_DesignTimeUserWidget_GetImageFilename_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCDD50
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.GetGameterface
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UGameterface* UUI_DesignTimeUserWidget::GetGameterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.GetGameterface");
		
		UUI_DesignTimeUserWidget_GetGameterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD59A0
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.FindUVsFromMapping
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		EHIDMapping                                        mapping                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 UUI_DesignTimeUserWidget::FindUVsFromMapping(EHIDMapping mapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.FindUVsFromMapping");
		
		UUI_DesignTimeUserWidget_FindUVsFromMapping_Params params {};
		params.mapping = mapping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD6120
	 * 		Name   -> Function GTABase.UI_DesignTimeUserWidget.ClearUserFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AGTAPlayerController*                        PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_DesignTimeUserWidget::ClearUserFocus(class AGTAPlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_DesignTimeUserWidget.ClearUserFocus");
		
		UUI_DesignTimeUserWidget_ClearUserFocus_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_DesignTimeUserWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_DesignTimeUserWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.UI_DesignTimeUserWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Radar.SetUVs
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBox2D                                      newUVs                                                     (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUI_Radar::SetUVs(const struct FBox2D& newUVs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.SetUVs");
		
		UUI_Radar_SetUVs_Params params {};
		params.newUVs = newUVs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCA250
	 * 		Name   -> Function GTABase.UI_Radar.SetupMap
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InitialPosition                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InitialZoom                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_Radar::SetupMap(struct FVector* InitialPosition, float* InitialZoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.SetupMap");
		
		UUI_Radar_SetupMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitialPosition != nullptr)
			*InitialPosition = params.InitialPosition;
		if (InitialZoom != nullptr)
			*InitialZoom = params.InitialZoom;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCA230
	 * 		Name   -> Function GTABase.UI_Radar.ResizeMap
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_Radar::ResizeMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.ResizeMap");
		
		UUI_Radar_ResizeMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCA0B0
	 * 		Name   -> Function GTABase.UI_Radar.RenderMap
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              zoomAmt                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UUI_Radar::RenderMap(const struct FVector& position, float zoomAmt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.RenderMap");
		
		UUI_Radar_RenderMap_Params params {};
		params.position = position;
		params.zoomAmt = zoomAmt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCA4E0
	 * 		Name   -> Function GTABase.UI_Radar.GetWorldPosition
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   MousePosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UUI_Radar::GetWorldPosition(const struct FVector2D& MousePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.GetWorldPosition");
		
		UUI_Radar_GetWorldPosition_Params params {};
		params.MousePosition = MousePosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC9E60
	 * 		Name   -> Function GTABase.UI_Radar.GetCurrentUVs
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FBox2D UUI_Radar::GetCurrentUVs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.GetCurrentUVs");
		
		UUI_Radar_GetCurrentUVs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC9FA0
	 * 		Name   -> Function GTABase.UI_Radar.DoMapJump
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   MousePosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_Radar::DoMapJump(const struct FVector2D& MousePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.DoMapJump");
		
		UUI_Radar_DoMapJump_Params params {};
		params.MousePosition = MousePosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.UI_Radar.CloseMap
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUI_Radar::CloseMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.CloseMap");
		
		UUI_Radar_CloseMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC9EA0
	 * 		Name   -> Function GTABase.UI_Radar.AddCustomWaypoint
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   MousePosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_Radar::AddCustomWaypoint(const struct FVector2D& MousePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Radar.AddCustomWaypoint");
		
		UUI_Radar_AddCustomWaypoint_Params params {};
		params.MousePosition = MousePosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Radar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Radar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.UI_Radar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTARadioStream.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTARadioStream::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTARadioStream");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTASoundWaveProcedural.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTASoundWaveProcedural::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTASoundWaveProcedural");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCB7A0
	 * 		Name   -> Function GTABase.SoundNodeProceduralWavePlayer.StreamingAssetsLoadedCallback
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USoundNodeProceduralWavePlayer::StreamingAssetsLoadedCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.SoundNodeProceduralWavePlayer.StreamingAssetsLoadedCallback");
		
		USoundNodeProceduralWavePlayer_StreamingAssetsLoadedCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCB780
	 * 		Name   -> Function GTABase.SoundNodeProceduralWavePlayer.PreloadedAssetsLoadedCallback
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USoundNodeProceduralWavePlayer::PreloadedAssetsLoadedCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.SoundNodeProceduralWavePlayer.PreloadedAssetsLoadedCallback");
		
		USoundNodeProceduralWavePlayer_PreloadedAssetsLoadedCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundNodeProceduralWavePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundNodeProceduralWavePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.SoundNodeProceduralWavePlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTARoadSign.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTARoadSign::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTARoadSign");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTARopes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTARopes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTARopes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAScalability.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAScalability::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAScalability");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCCA70
	 * 		Name   -> Function GTABase.GTAScalableRichTextBlock.ForceRefreshProperties
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UGTAScalableRichTextBlock::ForceRefreshProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAScalableRichTextBlock.ForceRefreshProperties");
		
		UGTAScalableRichTextBlock_ForceRefreshProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAScalableRichTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAScalableRichTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAScalableRichTextBlock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTASceneCaptureComponent2D.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTASceneCaptureComponent2D::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTASceneCaptureComponent2D");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTASceneCaptureComponentCube.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTASceneCaptureComponentCube::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTASceneCaptureComponentCube");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCD060
	 * 		Name   -> Function GTABase.GTARTCaptureBase.UnregisterCoronaByID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTARTCaptureBase::STATIC_UnregisterCoronaByID(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTARTCaptureBase.UnregisterCoronaByID");
		
		AGTARTCaptureBase_UnregisterCoronaByID_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCD140
	 * 		Name   -> Function GTABase.GTARTCaptureBase.RegisterCoronaWithParams
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                withColor                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WithSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WithBrightness                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AGTARTCaptureBase::STATIC_RegisterCoronaWithParams(const struct FVector& position, const struct FLinearColor& withColor, float WithSize, float WithBrightness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTARTCaptureBase.RegisterCoronaWithParams");
		
		AGTARTCaptureBase_RegisterCoronaWithParams_Params params {};
		params.position = position;
		params.withColor = withColor;
		params.WithSize = WithSize;
		params.WithBrightness = WithBrightness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCCE80
	 * 		Name   -> Function GTABase.GTARTCaptureBase.RegisterCoronaUsingLight
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULightComponent*                             ForLight                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WithSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AGTARTCaptureBase::STATIC_RegisterCoronaUsingLight(class ULightComponent* ForLight, float WithSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTARTCaptureBase.RegisterCoronaUsingLight");
		
		AGTARTCaptureBase_RegisterCoronaUsingLight_Params params {};
		params.ForLight = ForLight;
		params.WithSize = WithSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTARTCaptureBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTARTCaptureBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTARTCaptureBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTARTCapture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTARTCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTARTCapture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTASceneProbeListing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTASceneProbeListing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTASceneProbeListing");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCE7D0
	 * 		Name   -> Function GTABase.GTASingleton.SetShadowResolutionScale
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULightComponent*                             onComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              newResolution                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGTASingleton::STATIC_SetShadowResolutionScale(class ULightComponent* onComponent, float newResolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.SetShadowResolutionScale");
		
		UGTASingleton_SetShadowResolutionScale_Params params {};
		params.onComponent = onComponent;
		params.newResolution = newResolution;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCE660
	 * 		Name   -> Function GTABase.GTASingleton.SetShadowRenderDistance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULightComponent*                             onComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              newRenderDistance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGTASingleton::STATIC_SetShadowRenderDistance(class ULightComponent* onComponent, float newRenderDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.SetShadowRenderDistance");
		
		UGTASingleton_SetShadowRenderDistance_Params params {};
		params.onComponent = onComponent;
		params.newRenderDistance = newRenderDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCEFF0
	 * 		Name   -> Function GTABase.GTASingleton.SetPostProcessSceneColorTint
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class APostProcessVolume*                          Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                withTint                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGTASingleton::STATIC_SetPostProcessSceneColorTint(class APostProcessVolume* Volume, const struct FLinearColor& withTint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.SetPostProcessSceneColorTint");
		
		UGTASingleton_SetPostProcessSceneColorTint_Params params {};
		params.Volume = Volume;
		params.withTint = withTint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCE470
	 * 		Name   -> Function GTABase.GTASingleton.SetMaxDrawDistance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULightComponent*                             onComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              newMaxDrawDistance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              fadeStartPercent                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGTASingleton::STATIC_SetMaxDrawDistance(class ULightComponent* onComponent, float newMaxDrawDistance, float fadeStartPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.SetMaxDrawDistance");
		
		UGTASingleton_SetMaxDrawDistance_Params params {};
		params.onComponent = onComponent;
		params.newMaxDrawDistance = newMaxDrawDistance;
		params.fadeStartPercent = fadeStartPercent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCE940
	 * 		Name   -> Function GTABase.GTASingleton.SetLightingChannels
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             onComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               channel0                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               channel1                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               channel2                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGTASingleton::STATIC_SetLightingChannels(class USceneComponent* onComponent, bool channel0, bool channel1, bool channel2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.SetLightingChannels");
		
		UGTASingleton_SetLightingChannels_Params params {};
		params.onComponent = onComponent;
		params.channel0 = channel0;
		params.channel1 = channel1;
		params.channel2 = channel2;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCECB0
	 * 		Name   -> Function GTABase.GTASingleton.ResetSettingsToDefault
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGTASettingsCategory                               Category                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGTASingleton::STATIC_ResetSettingsToDefault(EGTASettingsCategory Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.ResetSettingsToDefault");
		
		UGTASingleton_ResetSettingsToDefault_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCDE90
	 * 		Name   -> Function GTABase.GTASingleton.RemoveCurveData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCurveBase*                                  toCurve                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              atTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGTASingleton::STATIC_RemoveCurveData(class UCurveBase* toCurve, float atTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.RemoveCurveData");
		
		UGTASingleton_RemoveCurveData_Params params {};
		params.toCurve = toCurve;
		params.atTime = atTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCED80
	 * 		Name   -> Function GTABase.GTASingleton.GetUncheckedSettings
	 * 		Flags  -> (Final, Native, Static, Public)
	 */
	class UGameterSettings* UGTASingleton::STATIC_GetUncheckedSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.GetUncheckedSettings");
		
		UGTASingleton_GetUncheckedSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCEDB0
	 * 		Name   -> Function GTABase.GTASingleton.GetSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ForceRefresh                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceUpdateAudio                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               forceNoChanges                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameterSettings* UGTASingleton::STATIC_GetSettings(bool ForceRefresh, bool bForceUpdateAudio, bool forceNoChanges)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.GetSettings");
		
		UGTASingleton_GetSettings_Params params {};
		params.ForceRefresh = ForceRefresh;
		params.bForceUpdateAudio = bForceUpdateAudio;
		params.forceNoChanges = forceNoChanges;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BC80D0
	 * 		Name   -> Function GTABase.GTASingleton.GetRulesOverrideValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UClass* UGTASingleton::STATIC_GetRulesOverrideValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.GetRulesOverrideValue");
		
		UGTASingleton_GetRulesOverrideValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCDB80
	 * 		Name   -> Function GTABase.GTASingleton.GetGTAWorldZ
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     OfLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               successful                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UGTASingleton::STATIC_GetGTAWorldZ(const struct FVector& OfLocation, bool* successful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.GetGTAWorldZ");
		
		UGTASingleton_GetGTAWorldZ_Params params {};
		params.OfLocation = OfLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (successful != nullptr)
			*successful = params.successful;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCDD70
	 * 		Name   -> Function GTABase.GTASingleton.GetGTAWorldSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AGTAWorldSettings* UGTASingleton::STATIC_GetGTAWorldSettings(class UObject* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.GetGTAWorldSettings");
		
		UGTASingleton_GetGTAWorldSettings_Params params {};
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCD9C0
	 * 		Name   -> Function GTABase.GTASingleton.GetGTAWaterZ
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     OfLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               successful                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UGTASingleton::STATIC_GetGTAWaterZ(const struct FVector& OfLocation, bool* successful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.GetGTAWaterZ");
		
		UGTASingleton_GetGTAWaterZ_Params params {};
		params.OfLocation = OfLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (successful != nullptr)
			*successful = params.successful;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCDD50
	 * 		Name   -> Function GTABase.GTASingleton.GetGameterface
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UGameterface* UGTASingleton::STATIC_GetGameterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.GetGameterface");
		
		UGTASingleton_GetGameterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCEFB0
	 * 		Name   -> Function GTABase.GTASingleton.GetCurrentCutscene
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FName UGTASingleton::STATIC_GetCurrentCutscene()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.GetCurrentCutscene");
		
		UGTASingleton_GetCurrentCutscene_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA5D70
	 * 		Name   -> Function GTABase.GTASingleton.AreGameSettingRulesOverwritten
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UGTASingleton::STATIC_AreGameSettingRulesOverwritten()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.AreGameSettingRulesOverwritten");
		
		UGTASingleton_AreGameSettingRulesOverwritten_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCDFE0
	 * 		Name   -> Function GTABase.GTASingleton.AddFloatCurveData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCurveFloat*                                 toCurve                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              atTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              withFloat                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              timeGranularity                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGTASingleton::STATIC_AddFloatCurveData(class UCurveFloat* toCurve, float atTime, float withFloat, float timeGranularity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.AddFloatCurveData");
		
		UGTASingleton_AddFloatCurveData_Params params {};
		params.toCurve = toCurve;
		params.atTime = atTime;
		params.withFloat = withFloat;
		params.timeGranularity = timeGranularity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCE230
	 * 		Name   -> Function GTABase.GTASingleton.AddColorCurveData
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UCurveLinearColor*                           toCurve                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              atTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                withColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              timeGranularity                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGTASingleton::STATIC_AddColorCurveData(class UCurveLinearColor* toCurve, float atTime, const struct FLinearColor& withColor, float timeGranularity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASingleton.AddColorCurveData");
		
		UGTASingleton_AddColorCurveData_Params params {};
		params.toCurve = toCurve;
		params.atTime = atTime;
		params.withColor = withColor;
		params.timeGranularity = timeGranularity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTASingleton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTASingleton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTASingleton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTASkeletalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTASkeletalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTASkeletalComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTASkeletalUserData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTASkeletalUserData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTASkeletalUserData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTASkidmarks.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTASkidmarks::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTASkidmarks");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.StartMenuSFX
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Menu_Base::StartMenuSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.StartMenuSFX");
		
		UUI_Menu_Base_StartMenuSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.StartMenuRadio
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Station                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_Menu_Base::StartMenuRadio(int32_t Station)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.StartMenuRadio");
		
		UUI_Menu_Base_StartMenuRadio_Params params {};
		params.Station = Station;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.StartMenuDialog
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Menu_Base::StartMenuDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.StartMenuDialog");
		
		UUI_Menu_Base_StartMenuDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA96D0
	 * 		Name   -> Function GTABase.UI_Menu_Base.ShouldShowGangsInMap
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	bool UUI_Menu_Base::ShouldShowGangsInMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.ShouldShowGangsInMap");
		
		UUI_Menu_Base_ShouldShowGangsInMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.SetVersionNumber
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      VersionNum                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_Menu_Base::SetVersionNumber(const class FString& VersionNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.SetVersionNumber");
		
		UUI_Menu_Base_SetVersionNumber_Params params {};
		params.VersionNum = VersionNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.SetTemplate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UGTAMainMenuUITemplate*                      InTemplate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IncludeSaveTab                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_Menu_Base::SetTemplate(class UGTAMainMenuUITemplate* InTemplate, bool IncludeSaveTab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.SetTemplate");
		
		UUI_Menu_Base_SetTemplate_Params params {};
		params.InTemplate = InTemplate;
		params.IncludeSaveTab = IncludeSaveTab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.SetMenuToSpecificGameTab
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTASaveTabState                                   toState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_Menu_Base::SetMenuToSpecificGameTab(EGTASaveTabState toState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.SetMenuToSpecificGameTab");
		
		UUI_Menu_Base_SetMenuToSpecificGameTab_Params params {};
		params.toState = toState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.SetMenuToMissionRetry
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Menu_Base::SetMenuToMissionRetry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.SetMenuToMissionRetry");
		
		UUI_Menu_Base_SetMenuToMissionRetry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.SetKeyListeningDialog
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bTurnOn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* UUI_Menu_Base::SetKeyListeningDialog(bool bTurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.SetKeyListeningDialog");
		
		UUI_Menu_Base_SetKeyListeningDialog_Params params {};
		params.bTurnOn = bTurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.SaveDataInSlotEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_Menu_Base::SaveDataInSlotEvent(bool success, int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.SaveDataInSlotEvent");
		
		UUI_Menu_Base_SaveDataInSlotEvent_Params params {};
		params.success = success;
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.LoadDataInSlotEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_Menu_Base::LoadDataInSlotEvent(bool success, int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.LoadDataInSlotEvent");
		
		UUI_Menu_Base_LoadDataInSlotEvent_Params params {};
		params.success = success;
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.GrabFocus
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Menu_Base::GrabFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.GrabFocus");
		
		UUI_Menu_Base_GrabFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD6750
	 * 		Name   -> Function GTABase.UI_Menu_Base.GetRightSidePosOfWidgetInsideScaleBox
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UUI_Menu_Base::GetRightSidePosOfWidgetInsideScaleBox(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.GetRightSidePosOfWidgetInsideScaleBox");
		
		UUI_Menu_Base_GetRightSidePosOfWidgetInsideScaleBox_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD66C0
	 * 		Name   -> Function GTABase.UI_Menu_Base.GetLeftSideOfFullSizeBox
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UUI_Menu_Base::GetLeftSideOfFullSizeBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.GetLeftSideOfFullSizeBox");
		
		UUI_Menu_Base_GetLeftSideOfFullSizeBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.EndMenuSFX
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Menu_Base::EndMenuSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.EndMenuSFX");
		
		UUI_Menu_Base_EndMenuSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.EndMenuRadio
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Menu_Base::EndMenuRadio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.EndMenuRadio");
		
		UUI_Menu_Base_EndMenuRadio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.EndMenuDialogue
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Menu_Base::EndMenuDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.EndMenuDialogue");
		
		UUI_Menu_Base_EndMenuDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.DeleteDataInSlotEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_Menu_Base::DeleteDataInSlotEvent(bool success, int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.DeleteDataInSlotEvent");
		
		UUI_Menu_Base_DeleteDataInSlotEvent_Params params {};
		params.success = success;
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.CustomFunctionWithBoolReturn
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Handled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_Menu_Base::CustomFunctionWithBoolReturn(const class FString& FunctionString, bool* Handled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.CustomFunctionWithBoolReturn");
		
		UUI_Menu_Base_CustomFunctionWithBoolReturn_Params params {};
		params.FunctionString = FunctionString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Handled != nullptr)
			*Handled = params.Handled;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.CustomFunctionFromStringWithText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        UsableText                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_Menu_Base::CustomFunctionFromStringWithText(const class FString& FunctionString, const class FText& UsableText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.CustomFunctionFromStringWithText");
		
		UUI_Menu_Base_CustomFunctionFromStringWithText_Params params {};
		params.FunctionString = FunctionString;
		params.UsableText = UsableText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_Menu_Base.CustomFunctionFromString
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_Menu_Base::CustomFunctionFromString(const class FString& FunctionString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_Menu_Base.CustomFunctionFromString");
		
		UUI_Menu_Base_CustomFunctionFromString_Params params {};
		params.FunctionString = FunctionString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Menu_Base.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Menu_Base::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.UI_Menu_Base");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTASocialClub.OnRageBPEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            EventId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGTASocialClub::OnRageBPEvent(int32_t EventId, int32_t Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASocialClub.OnRageBPEvent");
		
		UGTASocialClub_OnRageBPEvent_Params params {};
		params.EventId = EventId;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTASocialClub.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTASocialClub::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTASocialClub");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD0480
	 * 		Name   -> Function GTABase.GTASoundBank.StreamingAssetsLoadedCallback
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGTASoundBank::StreamingAssetsLoadedCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASoundBank.StreamingAssetsLoadedCallback");
		
		UGTASoundBank_StreamingAssetsLoadedCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD04A0
	 * 		Name   -> Function GTABase.GTASoundBank.AssetsLoadedCallback
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGTASoundBank::AssetsLoadedCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTASoundBank.AssetsLoadedCallback");
		
		UGTASoundBank_AssetsLoadedCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTASoundBank.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTASoundBank::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTASoundBank");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTASoundPak.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTASoundPak::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTASoundPak");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAStaticMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAStaticMeshActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAStaticMeshActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD0790
	 * 		Name   -> Function GTABase.GTAAssetProcessor.ProcessedStreamRequest
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGTAStreamRequest                           request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGTAAssetProcessor::ProcessedStreamRequest(const struct FGTAStreamRequest& request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAAssetProcessor.ProcessedStreamRequest");
		
		UGTAAssetProcessor_ProcessedStreamRequest_Params params {};
		params.request = request;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAAssetProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAAssetProcessor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAAssetProcessor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTATargetHalo.UpdateTargetComponent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UMeshComponent*                              Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETargetHighlightType                               HighlightType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTATargetHalo::UpdateTargetComponent(class UMeshComponent* Component, ETargetHighlightType HighlightType, float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATargetHalo.UpdateTargetComponent");
		
		AGTATargetHalo_UpdateTargetComponent_Params params {};
		params.Component = Component;
		params.HighlightType = HighlightType;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTATargetHalo.SetupTargetComponent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UMeshComponent*                              Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETargetHighlightType                               HighlightType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InitialAlpha                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTATargetHalo::SetupTargetComponent(class UMeshComponent* Component, ETargetHighlightType HighlightType, float InitialAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATargetHalo.SetupTargetComponent");
		
		AGTATargetHalo_SetupTargetComponent_Params params {};
		params.Component = Component;
		params.HighlightType = HighlightType;
		params.InitialAlpha = InitialAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTATargetHalo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTATargetHalo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTATargetHalo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTATerrainDB.UpdateAll
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGTATerrainDB::UpdateAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATerrainDB.UpdateAll");
		
		UGTATerrainDB_UpdateAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTATerrainDB.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTATerrainDB::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTATerrainDB");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTATexLookup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTATexLookup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTATexLookup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTACloudCover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTACloudCover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTACloudCover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTATimeOfDay.SnagCurveTimes
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTATimeOfDay::SnagCurveTimes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.SnagCurveTimes");
		
		AGTATimeOfDay_SnagCurveTimes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTATimeOfDay.ShiftTimeForward
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTATimeOfDay::ShiftTimeForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.ShiftTimeForward");
		
		AGTATimeOfDay_ShiftTimeForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTATimeOfDay.ShiftTimeBackward
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTATimeOfDay::ShiftTimeBackward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.ShiftTimeBackward");
		
		AGTATimeOfDay_ShiftTimeBackward_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD1B20
	 * 		Name   -> Function GTABase.GTATimeOfDay.SetWaterZ
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              ZValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTATimeOfDay::SetWaterZ(float ZValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.SetWaterZ");
		
		AGTATimeOfDay_SetWaterZ_Params params {};
		params.ZValue = ZValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTATimeOfDay.SaveCurrentValues
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTATimeOfDay::SaveCurrentValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.SaveCurrentValues");
		
		AGTATimeOfDay_SaveCurrentValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD1CD0
	 * 		Name   -> Function GTABase.GTATimeOfDay.Sample
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AGTATimeOfDay::Sample()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.Sample");
		
		AGTATimeOfDay_Sample_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD1BF0
	 * 		Name   -> Function GTABase.GTATimeOfDay.RotateSun
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    TargetRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGTATimeOfDay::RotateSun(const struct FRotator& TargetRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.RotateSun");
		
		AGTATimeOfDay_RotateSun_Params params {};
		params.TargetRotation = TargetRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTATimeOfDay.RerunConstruction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AGTATimeOfDay::RerunConstruction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.RerunConstruction");
		
		AGTATimeOfDay_RerunConstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTATimeOfDay.RemoveCurrentValues
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTATimeOfDay::RemoveCurrentValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.RemoveCurrentValues");
		
		AGTATimeOfDay_RemoveCurrentValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTATimeOfDay.PreviewWeatherChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EGTAWeather                                        NewWeather                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTATimeOfDay::PreviewWeatherChanged(EGTAWeather NewWeather)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.PreviewWeatherChanged");
		
		AGTATimeOfDay_PreviewWeatherChanged_Params params {};
		params.NewWeather = NewWeather;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD1AF0
	 * 		Name   -> Function GTABase.GTATimeOfDay.GetUnderwaterMID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UMaterialInstanceDynamic* AGTATimeOfDay::GetUnderwaterMID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.GetUnderwaterMID");
		
		AGTATimeOfDay_GetUnderwaterMID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTATimeOfDay.GetSkyLightActor
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 */
	class ASkyLight* AGTATimeOfDay::GetSkyLightActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.GetSkyLightActor");
		
		AGTATimeOfDay_GetSkyLightActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTATimeOfDay.GetMoonDirection
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent, Const)
	 */
	struct FRotator AGTATimeOfDay::GetMoonDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.GetMoonDirection");
		
		AGTATimeOfDay_GetMoonDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTATimeOfDay.EnableCloudMaterial
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AGTATimeOfDay::EnableCloudMaterial(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.EnableCloudMaterial");
		
		AGTATimeOfDay_EnableCloudMaterial_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTATimeOfDay.CycleMoonSize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AGTATimeOfDay::CycleMoonSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.CycleMoonSize");
		
		AGTATimeOfDay_CycleMoonSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTATimeOfDay.CullCurves
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTATimeOfDay::CullCurves()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.CullCurves");
		
		AGTATimeOfDay_CullCurves_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTATimeOfDay.CopyValuesForward
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTATimeOfDay::CopyValuesForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.CopyValuesForward");
		
		AGTATimeOfDay_CopyValuesForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTATimeOfDay.CopyValuesBackward
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTATimeOfDay::CopyValuesBackward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.CopyValuesBackward");
		
		AGTATimeOfDay_CopyValuesBackward_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTATimeOfDay.CopyBaseValues
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTATimeOfDay::CopyBaseValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.CopyBaseValues");
		
		AGTATimeOfDay_CopyBaseValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTATimeOfDay.CleanCurves
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTATimeOfDay::CleanCurves()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATimeOfDay.CleanCurves");
		
		AGTATimeOfDay_CleanCurves_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTATimeOfDay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTATimeOfDay::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTATimeOfDay");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD2FD0
	 * 		Name   -> Function GTABase.GTATrafficLightCache.ClearForRebuild
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGTATrafficLightCache::ClearForRebuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTATrafficLightCache.ClearForRebuild");
		
		UGTATrafficLightCache_ClearForRebuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTATrafficLightCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTATrafficLightCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTATrafficLightCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetWidgetTranslationPercent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetWidgetTranslationPercent(float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetWidgetTranslationPercent");
		
		UUI_GTAHUDItem_SetWidgetTranslationPercent_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetWantedLevel
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            numStars                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            numParole                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsBlinking                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetWantedLevel(int32_t numStars, int32_t numParole, bool bIsBlinking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetWantedLevel");
		
		UUI_GTAHUDItem_SetWantedLevel_Params params {};
		params.numStars = numStars;
		params.numParole = numParole;
		params.bIsBlinking = bIsBlinking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetVisible
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetVisible");
		
		UUI_GTAHUDItem_SetVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetTotalWidgetColor
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetTotalWidgetColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetTotalWidgetColor");
		
		UUI_GTAHUDItem_SetTotalWidgetColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetThirdImageColor
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetThirdImageColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetThirdImageColor");
		
		UUI_GTAHUDItem_SetThirdImageColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetThirdImage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetThirdImage(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetThirdImage");
		
		UUI_GTAHUDItem_SetThirdImage_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetThirdFillBarSizeAndFill
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FillBarPct                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FillBarSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetThirdFillBarSizeAndFill(float FillBarPct, float FillBarSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetThirdFillBarSizeAndFill");
		
		UUI_GTAHUDItem_SetThirdFillBarSizeAndFill_Params params {};
		params.FillBarPct = FillBarPct;
		params.FillBarSize = FillBarSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetSixthImageColor
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetSixthImageColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSixthImageColor");
		
		UUI_GTAHUDItem_SetSixthImageColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetSixthImage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetSixthImage(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSixthImage");
		
		UUI_GTAHUDItem_SetSixthImage_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetSecondImageOffsets
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              xMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              yMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Xmax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Ymax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetSecondImageOffsets(float xMin, float yMin, float Xmax, float Ymax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSecondImageOffsets");
		
		UUI_GTAHUDItem_SetSecondImageOffsets_Params params {};
		params.xMin = xMin;
		params.yMin = yMin;
		params.Xmax = Xmax;
		params.Ymax = Ymax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetSecondImageFillAmount
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FillAmmount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetSecondImageFillAmount(float FillAmmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSecondImageFillAmount");
		
		UUI_GTAHUDItem_SetSecondImageFillAmount_Params params {};
		params.FillAmmount = FillAmmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetSecondImageFill
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                FillColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FillAmmount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetSecondImageFill(class UTexture2D* Texture, const struct FLinearColor& FillColor, float FillAmmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSecondImageFill");
		
		UUI_GTAHUDItem_SetSecondImageFill_Params params {};
		params.Texture = Texture;
		params.FillColor = FillColor;
		params.FillAmmount = FillAmmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetSecondImageColor
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetSecondImageColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSecondImageColor");
		
		UUI_GTAHUDItem_SetSecondImageColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetSecondImageAnchors
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              xMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Xmax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              yMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Ymax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetSecondImageAnchors(float xMin, float Xmax, float yMin, float Ymax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSecondImageAnchors");
		
		UUI_GTAHUDItem_SetSecondImageAnchors_Params params {};
		params.xMin = xMin;
		params.Xmax = Xmax;
		params.yMin = yMin;
		params.Ymax = Ymax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetSecondImage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetSecondImage(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSecondImage");
		
		UUI_GTAHUDItem_SetSecondImage_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetSecondFillBarSizeAndFill
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FillBarPct                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FillBarSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetSecondFillBarSizeAndFill(float FillBarPct, float FillBarSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetSecondFillBarSizeAndFill");
		
		UUI_GTAHUDItem_SetSecondFillBarSizeAndFill_Params params {};
		params.FillBarPct = FillBarPct;
		params.FillBarSize = FillBarSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPressed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetPressed(bool IsPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetPressed");
		
		UUI_GTAHUDItem_SetPressed_Params params {};
		params.IsPressed = IsPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetPosition
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Xmax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Ymax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetPosition(float X, float Y, float Xmax, float Ymax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetPosition");
		
		UUI_GTAHUDItem_SetPosition_Params params {};
		params.X = X;
		params.Y = Y;
		params.Xmax = Xmax;
		params.Ymax = Ymax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetMappingImage
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Tex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              U                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              V                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ULength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetMappingImage(class UTexture2D* Tex, float U, float V, float ULength, float VLength, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetMappingImage");
		
		UUI_GTAHUDItem_SetMappingImage_Params params {};
		params.Tex = Tex;
		params.U = U;
		params.V = V;
		params.ULength = ULength;
		params.VLength = VLength;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetImageWithSpriteSheet
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              U                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              V                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ULength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetImageWithSpriteSheet(class UTexture2D* Texture, float U, float V, float ULength, float VLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetImageWithSpriteSheet");
		
		UUI_GTAHUDItem_SetImageWithSpriteSheet_Params params {};
		params.Texture = Texture;
		params.U = U;
		params.V = V;
		params.ULength = ULength;
		params.VLength = VLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetImageOffsets
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              xMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              yMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Xmax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Ymax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetImageOffsets(float xMin, float yMin, float Xmax, float Ymax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetImageOffsets");
		
		UUI_GTAHUDItem_SetImageOffsets_Params params {};
		params.xMin = xMin;
		params.yMin = yMin;
		params.Xmax = Xmax;
		params.Ymax = Ymax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetImageMaterial
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetImageMaterial(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetImageMaterial");
		
		UUI_GTAHUDItem_SetImageMaterial_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetImageColor
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               forceVisible                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetImageColor(const struct FLinearColor& Color, bool forceVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetImageColor");
		
		UUI_GTAHUDItem_SetImageColor_Params params {};
		params.Color = Color;
		params.forceVisible = forceVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetImageAnchors
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              xMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Xmax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              yMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Ymax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetImageAnchors(float xMin, float Xmax, float yMin, float Ymax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetImageAnchors");
		
		UUI_GTAHUDItem_SetImageAnchors_Params params {};
		params.xMin = xMin;
		params.Xmax = Xmax;
		params.yMin = yMin;
		params.Ymax = Ymax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetImage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetImage(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetImage");
		
		UUI_GTAHUDItem_SetImage_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetFourthImageColor
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetFourthImageColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetFourthImageColor");
		
		UUI_GTAHUDItem_SetFourthImageColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetFourthImage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetFourthImage(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetFourthImage");
		
		UUI_GTAHUDItem_SetFourthImage_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetFillBarSizeAndFill
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FillBarPct                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FillBarSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetFillBarSizeAndFill(float FillBarPct, float FillBarSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetFillBarSizeAndFill");
		
		UUI_GTAHUDItem_SetFillBarSizeAndFill_Params params {};
		params.FillBarPct = FillBarPct;
		params.FillBarSize = FillBarSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetFifthImageColor
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetFifthImageColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetFifthImageColor");
		
		UUI_GTAHUDItem_SetFifthImageColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetFifthImage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetFifthImage(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetFifthImage");
		
		UUI_GTAHUDItem_SetFifthImage_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetContentTextThree
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                FontColorOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetContentTextThree(const class FText& Text, const struct FLinearColor& FontColorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetContentTextThree");
		
		UUI_GTAHUDItem_SetContentTextThree_Params params {};
		params.Text = Text;
		params.FontColorOverride = FontColorOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetContentTextFour
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                FontColorOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetContentTextFour(const class FText& Text, const struct FLinearColor& FontColorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetContentTextFour");
		
		UUI_GTAHUDItem_SetContentTextFour_Params params {};
		params.Text = Text;
		params.FontColorOverride = FontColorOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetContentTextFive
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                FontColorOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetContentTextFive(const class FText& Text, const struct FLinearColor& FontColorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetContentTextFive");
		
		UUI_GTAHUDItem_SetContentTextFive_Params params {};
		params.Text = Text;
		params.FontColorOverride = FontColorOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetContentTextAnchors
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              xMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Xmax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              yMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Ymax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetContentTextAnchors(float xMin, float Xmax, float yMin, float Ymax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetContentTextAnchors");
		
		UUI_GTAHUDItem_SetContentTextAnchors_Params params {};
		params.xMin = xMin;
		params.Xmax = Xmax;
		params.yMin = yMin;
		params.Ymax = Ymax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetContentTextAdditional
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                FontColorOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetContentTextAdditional(const class FText& Text, const struct FLinearColor& FontColorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetContentTextAdditional");
		
		UUI_GTAHUDItem_SetContentTextAdditional_Params params {};
		params.Text = Text;
		params.FontColorOverride = FontColorOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetContentText
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                FontColorOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetContentText(const class FText& Text, const struct FLinearColor& FontColorOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetContentText");
		
		UUI_GTAHUDItem_SetContentText_Params params {};
		params.Text = Text;
		params.FontColorOverride = FontColorOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetContentPercentOffset
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetContentPercentOffset(float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetContentPercentOffset");
		
		UUI_GTAHUDItem_SetContentPercentOffset_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.SetAnchorsInDrawer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              minX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              maxX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              minY                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              maxY                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::SetAnchorsInDrawer(float minX, float maxX, float minY, float maxY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.SetAnchorsInDrawer");
		
		UUI_GTAHUDItem_SetAnchorsInDrawer_Params params {};
		params.minX = minX;
		params.maxX = maxX;
		params.minY = minY;
		params.maxY = maxY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.RefreshAfterSettingsChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_GTAHUDItem::RefreshAfterSettingsChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.RefreshAfterSettingsChange");
		
		UUI_GTAHUDItem_RefreshAfterSettingsChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.OverrideMappingImageLocation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              XMinOverride                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              XMaxOverride                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              YMinOverride                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              YMaxOverride                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::OverrideMappingImageLocation(float XMinOverride, float XMaxOverride, float YMinOverride, float YMaxOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.OverrideMappingImageLocation");
		
		UUI_GTAHUDItem_OverrideMappingImageLocation_Params params {};
		params.XMinOverride = XMinOverride;
		params.XMaxOverride = XMaxOverride;
		params.YMinOverride = YMinOverride;
		params.YMaxOverride = YMaxOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.GetPosition
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Xmax                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Ymax                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::GetPosition(float* X, float* Y, float* Xmax, float* Ymax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.GetPosition");
		
		UUI_GTAHUDItem_GetPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
		if (Xmax != nullptr)
			*Xmax = params.Xmax;
		if (Ymax != nullptr)
			*Ymax = params.Ymax;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunctionWithStrings
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Strings                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::CustomFunctionWithStrings(const class FString& FunctionName, TArray<class FString> Strings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunctionWithStrings");
		
		UUI_GTAHUDItem_CustomFunctionWithStrings_Params params {};
		params.FunctionName = FunctionName;
		params.Strings = Strings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunctionWithObjects
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSlotImageStruct>                    Objects                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::CustomFunctionWithObjects(const class FString& FunctionName, TArray<struct FSlotImageStruct> Objects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunctionWithObjects");
		
		UUI_GTAHUDItem_CustomFunctionWithObjects_Params params {};
		params.FunctionName = FunctionName;
		params.Objects = Objects;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunctionWithObject
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::CustomFunctionWithObject(const class FString& FunctionName, class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunctionWithObject");
		
		UUI_GTAHUDItem_CustomFunctionWithObject_Params params {};
		params.FunctionName = FunctionName;
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunctionWithInteger
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            integer                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::CustomFunctionWithInteger(const class FString& FunctionName, int32_t integer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunctionWithInteger");
		
		UUI_GTAHUDItem_CustomFunctionWithInteger_Params params {};
		params.FunctionName = FunctionName;
		params.integer = integer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunctionWithFloats
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Floats                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::CustomFunctionWithFloats(const class FString& FunctionName, TArray<float> Floats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunctionWithFloats");
		
		UUI_GTAHUDItem_CustomFunctionWithFloats_Params params {};
		params.FunctionName = FunctionName;
		params.Floats = Floats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunctionWithFloat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              floatNum                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::CustomFunctionWithFloat(const class FString& FunctionName, float floatNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunctionWithFloat");
		
		UUI_GTAHUDItem_CustomFunctionWithFloat_Params params {};
		params.FunctionName = FunctionName;
		params.floatNum = floatNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunctionWithColors
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        Colors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::CustomFunctionWithColors(const class FString& FunctionName, TArray<struct FLinearColor> Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunctionWithColors");
		
		UUI_GTAHUDItem_CustomFunctionWithColors_Params params {};
		params.FunctionName = FunctionName;
		params.Colors = Colors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunctionWithColor
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::CustomFunctionWithColor(const class FString& FunctionName, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunctionWithColor");
		
		UUI_GTAHUDItem_CustomFunctionWithColor_Params params {};
		params.FunctionName = FunctionName;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.CustomFunction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDItem::CustomFunction(const class FString& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomFunction");
		
		UUI_GTAHUDItem_CustomFunction_Params params {};
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD33A0
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.CustomBoolReturnFunction
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_GTAHUDItem::CustomBoolReturnFunction(const class FString& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.CustomBoolReturnFunction");
		
		UUI_GTAHUDItem_CustomBoolReturnFunction_Params params {};
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDItem.ClearDataOnHide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_GTAHUDItem::ClearDataOnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDItem.ClearDataOnHide");
		
		UUI_GTAHUDItem_ClearDataOnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GTAHUDItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GTAHUDItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.UI_GTAHUDItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDDrawer.UpdateItemsForSettings
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Setting                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDDrawer::UpdateItemsForSettings(const class FString& Setting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDDrawer.UpdateItemsForSettings");
		
		UUI_GTAHUDDrawer_UpdateItemsForSettings_Params params {};
		params.Setting = Setting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDDrawer.SetVisible
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDDrawer::SetVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDDrawer.SetVisible");
		
		UUI_GTAHUDDrawer_SetVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD4940
	 * 		Name   -> Function GTABase.UI_GTAHUDDrawer.SetScreenSize
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              screenWidth                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              screenHeight                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_GTAHUDDrawer::SetScreenSize(float screenWidth, float screenHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDDrawer.SetScreenSize");
		
		UUI_GTAHUDDrawer_SetScreenSize_Params params {};
		params.screenWidth = screenWidth;
		params.screenHeight = screenHeight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD4AB0
	 * 		Name   -> Function GTABase.UI_GTAHUDDrawer.SetHUDDrawerScale
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              HudMultX                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HudMultY                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDDrawer::SetHUDDrawerScale(float HudMultX, float HudMultY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDDrawer.SetHUDDrawerScale");
		
		UUI_GTAHUDDrawer_SetHUDDrawerScale_Params params {};
		params.HudMultX = HudMultX;
		params.HudMultY = HudMultY;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDDrawer.RemoveGTAHUDItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ForName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUI_GTAHUDDrawer::RemoveGTAHUDItem(const class FName& ForName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDDrawer.RemoveGTAHUDItem");
		
		UUI_GTAHUDDrawer_RemoveGTAHUDItem_Params params {};
		params.ForName = ForName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDDrawer.GetScreenMultAndOverrideSize
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              SizeMult                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WidthOverride                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HeightOverride                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_GTAHUDDrawer::GetScreenMultAndOverrideSize(float* SizeMult, float* WidthOverride, float* HeightOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDDrawer.GetScreenMultAndOverrideSize");
		
		UUI_GTAHUDDrawer_GetScreenMultAndOverrideSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SizeMult != nullptr)
			*SizeMult = params.SizeMult;
		if (WidthOverride != nullptr)
			*WidthOverride = params.WidthOverride;
		if (HeightOverride != nullptr)
			*HeightOverride = params.HeightOverride;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_GTAHUDDrawer.GetGTAHUDItem
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ForName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CreateIfNotFound                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUI_GTAHUDItem* UUI_GTAHUDDrawer::GetGTAHUDItem(const class FName& ForName, bool CreateIfNotFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_GTAHUDDrawer.GetGTAHUDItem");
		
		UUI_GTAHUDDrawer_GetGTAHUDItem_Params params {};
		params.ForName = ForName;
		params.CreateIfNotFound = CreateIfNotFound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GTAHUDDrawer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GTAHUDDrawer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.UI_GTAHUDDrawer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAImageDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAImageDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAImageDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAMainMenuUITemplate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAMainMenuUITemplate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAMainMenuUITemplate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UI_LoadingScreen.SetImageWithTexture
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            gameNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_LoadingScreen::SetImageWithTexture(int32_t gameNumber, class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UI_LoadingScreen.SetImageWithTexture");
		
		UUI_LoadingScreen_SetImageWithTexture_Params params {};
		params.gameNumber = gameNumber;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_LoadingScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LoadingScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.UI_LoadingScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAUpgradePart.SetupLights
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AGTAUpgradePart::SetupLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAUpgradePart.SetupLights");
		
		AGTAUpgradePart_SetupLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAUpgradePart.EnableLights
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnableLightsL                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnableLightsR                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAUpgradePart::EnableLights(bool bEnableLightsL, bool bEnableLightsR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAUpgradePart.EnableLights");
		
		AGTAUpgradePart_EnableLights_Params params {};
		params.bEnableLightsL = bEnableLightsL;
		params.bEnableLightsR = bEnableLightsR;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAUpgradePart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAUpgradePart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAUpgradePart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVehicle.UpdateEngineOn
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewEngineOn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::UpdateEngineOn(bool bNewEngineOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.UpdateEngineOn");
		
		AGTAVehicle_UpdateEngineOn_Params params {};
		params.bNewEngineOn = bNewEngineOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD7FF0
	 * 		Name   -> Function GTABase.GTAVehicle.ShowExtraComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::ShowExtraComponent(const class FName& BoneName, bool Visible, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.ShowExtraComponent");
		
		AGTAVehicle_ShowExtraComponent_Params params {};
		params.BoneName = BoneName;
		params.Visible = Visible;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVehicle.Show1stPersonElements
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AGTAVehicle::Show1stPersonElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.Show1stPersonElements");
		
		AGTAVehicle_Show1stPersonElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVehicle.SetupVehicleBP
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGTAVehicle::SetupVehicleBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetupVehicleBP");
		
		AGTAVehicle_SetupVehicleBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVehicle.SetupHeadlightOption
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGTAHeadlightSetting                        Setting                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::SetupHeadlightOption(const struct FGTAHeadlightSetting& Setting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetupHeadlightOption");
		
		AGTAVehicle_SetupHeadlightOption_Params params {};
		params.Setting = Setting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVehicle.SetTaxiLight
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::SetTaxiLight(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetTaxiLight");
		
		AGTAVehicle_SetTaxiLight_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVehicle.SetSpecialCarLights
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EFSpecialLightType                                 LightToModify                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::SetSpecialCarLights(EFSpecialLightType LightToModify, bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetSpecialCarLights");
		
		AGTAVehicle_SetSpecialCarLights_Params params {};
		params.LightToModify = LightToModify;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVehicle.SetLicensePlateDesign
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Param                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::SetLicensePlateDesign(int32_t Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetLicensePlateDesign");
		
		AGTAVehicle_SetLicensePlateDesign_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVehicle.SetLicensePlate
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      WithText                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::SetLicensePlate(const class FString& WithText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetLicensePlate");
		
		AGTAVehicle_SetLicensePlate_Params params {};
		params.WithText = WithText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD86A0
	 * 		Name   -> Function GTABase.GTAVehicle.SetDirtiness
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              dirtinessAlpha                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::SetDirtiness(float dirtinessAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetDirtiness");
		
		AGTAVehicle_SetDirtiness_Params params {};
		params.dirtinessAlpha = dirtinessAlpha;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD81F0
	 * 		Name   -> Function GTABase.GTAVehicle.SetDamagedPart
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            frameID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDamaged                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::SetDamagedPart(int32_t frameID, bool bDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetDamagedPart");
		
		AGTAVehicle_SetDamagedPart_Params params {};
		params.frameID = frameID;
		params.bDamaged = bDamaged;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVehicle.SetCopterSpotLight
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              brightnessPercent                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::SetCopterSpotLight(class AActor* Target, float brightnessPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetCopterSpotLight");
		
		AGTAVehicle_SetCopterSpotLight_Params params {};
		params.Target = Target;
		params.brightnessPercent = brightnessPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD8350
	 * 		Name   -> Function GTABase.GTAVehicle.SetColorEntry
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ColorIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MetallicOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::SetColorEntry(int32_t Index, int32_t ColorIndex, float MetallicOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetColorEntry");
		
		AGTAVehicle_SetColorEntry_Params params {};
		params.Index = Index;
		params.ColorIndex = ColorIndex;
		params.MetallicOverride = MetallicOverride;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD8540
	 * 		Name   -> Function GTABase.GTAVehicle.SetColor
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::SetColor(int32_t Index, const struct FColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetColor");
		
		AGTAVehicle_SetColor_Params params {};
		params.Index = Index;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVehicle.SetCarLights
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLeftHeadlight                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRightHeadlight                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLeftTaillight                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRightTaillight                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               useDimLeftTailLight                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               useDimRightTailLight                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::SetCarLights(bool bLeftHeadlight, bool bRightHeadlight, bool bLeftTaillight, bool bRightTaillight, bool useDimLeftTailLight, bool useDimRightTailLight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetCarLights");
		
		AGTAVehicle_SetCarLights_Params params {};
		params.bLeftHeadlight = bLeftHeadlight;
		params.bRightHeadlight = bRightHeadlight;
		params.bLeftTaillight = bLeftTaillight;
		params.bRightTaillight = bRightTaillight;
		params.useDimLeftTailLight = useDimLeftTailLight;
		params.useDimRightTailLight = useDimRightTailLight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD8CA0
	 * 		Name   -> Function GTABase.GTAVehicle.SetBoneDamaged
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDamaged                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::SetBoneDamaged(const class FName& BoneName, bool bDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.SetBoneDamaged");
		
		AGTAVehicle_SetBoneDamaged_Params params {};
		params.BoneName = BoneName;
		params.bDamaged = bDamaged;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVehicle.MeshBrokenNearby
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     EventLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::MeshBrokenNearby(const struct FVector& EventLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.MeshBrokenNearby");
		
		AGTAVehicle_MeshBrokenNearby_Params params {};
		params.EventLocation = EventLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD8770
	 * 		Name   -> Function GTABase.GTAVehicle.IsComponentVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AGTAVehicle::IsComponentVisible(class USceneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.IsComponentVisible");
		
		AGTAVehicle_IsComponentVisible_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD88F0
	 * 		Name   -> Function GTABase.GTAVehicle.InitializeColors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInterface*                          remapMaterial                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::InitializeColors(class UMaterialInterface* remapMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.InitializeColors");
		
		AGTAVehicle_InitializeColors_Params params {};
		params.remapMaterial = remapMaterial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVehicle.Hide1stPersonElements
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AGTAVehicle::Hide1stPersonElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.Hide1stPersonElements");
		
		AGTAVehicle_Hide1stPersonElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD7FC0
	 * 		Name   -> Function GTABase.GTAVehicle.GetVehicleData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGTAVehicleUserData* AGTAVehicle::GetVehicleData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.GetVehicleData");
		
		AGTAVehicle_GetVehicleData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD8C00
	 * 		Name   -> Function GTABase.GTAVehicle.GetPlateRenderDistance
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	float AGTAVehicle::GetPlateRenderDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.GetPlateRenderDistance");
		
		AGTAVehicle_GetPlateRenderDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD8C80
	 * 		Name   -> Function GTABase.GTAVehicle.GetPhysicsMesh
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	class USkeletalMeshComponent* AGTAVehicle::GetPhysicsMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.GetPhysicsMesh");
		
		AGTAVehicle_GetPhysicsMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVehicle.GetHeadlightDecalMIC
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLeftHeadlight                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRightHeadlight                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsPlayerOccupied                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInstanceConstant* AGTAVehicle::GetHeadlightDecalMIC(bool bLeftHeadlight, bool bRightHeadlight, bool bIsPlayerOccupied)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.GetHeadlightDecalMIC");
		
		AGTAVehicle_GetHeadlightDecalMIC_Params params {};
		params.bLeftHeadlight = bLeftHeadlight;
		params.bRightHeadlight = bRightHeadlight;
		params.bIsPlayerOccupied = bIsPlayerOccupied;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVehicle.GetAttachedFX
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UParticleSystemComponent* AGTAVehicle::GetAttachedFX(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.GetAttachedFX");
		
		AGTAVehicle_GetAttachedFX_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVehicle.ExtraComponentShown
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::ExtraComponentShown(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.ExtraComponentShown");
		
		AGTAVehicle_ExtraComponentShown_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVehicle.CreateVelocityGloveComponent
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Center                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UStaticMeshComponent* AGTAVehicle::CreateVelocityGloveComponent(const struct FVector& Center)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.CreateVelocityGloveComponent");
		
		AGTAVehicle_CreateVelocityGloveComponent_Params params {};
		params.Center = Center;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD89D0
	 * 		Name   -> Function GTABase.GTAVehicle.CreatePointLightComponentUsingClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      ComponentToCreate                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPointLightComponent* AGTAVehicle::CreatePointLightComponentUsingClass(class UClass* ComponentToCreate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.CreatePointLightComponentUsingClass");
		
		AGTAVehicle_CreatePointLightComponentUsingClass_Params params {};
		params.ComponentToCreate = ComponentToCreate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD8BB0
	 * 		Name   -> Function GTABase.GTAVehicle.CleanupPhysState
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void AGTAVehicle::CleanupPhysState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.CleanupPhysState");
		
		AGTAVehicle_CleanupPhysState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVehicle.BoneSetAsDamaged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDamaged                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVehicle::BoneSetAsDamaged(const class FName& BoneName, bool bDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicle.BoneSetAsDamaged");
		
		AGTAVehicle_BoneSetAsDamaged_Params params {};
		params.BoneName = BoneName;
		params.bDamaged = bDamaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAVehicle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAVehicle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAVehicle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAVehicleUserData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAVehicleUserData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAVehicleUserData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAVehicleCinematic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAVehicleCinematic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAVehicleCinematic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAVehicleColorDB.Alphabetize
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UGTAVehicleColorDB::Alphabetize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVehicleColorDB.Alphabetize");
		
		UGTAVehicleColorDB_Alphabetize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAVehicleColorDB.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAVehicleColorDB::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAVehicleColorDB");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9BE0
	 * 		Name   -> Function GTABase.GTAViewportClient.InitTransition
	 * 		Flags  -> (Final, Native, Private)
	 */
	class UUITransition* UGTAViewportClient::InitTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAViewportClient.InitTransition");
		
		UGTAViewportClient_InitTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9C70
	 * 		Name   -> Function GTABase.GTAViewportClient.GetViewportClient
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      ForWorld                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGTAViewportClient* UGTAViewportClient::STATIC_GetViewportClient(class UWorld* ForWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAViewportClient.GetViewportClient");
		
		UGTAViewportClient_GetViewportClient_Params params {};
		params.ForWorld = ForWorld;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9C10
	 * 		Name   -> Function GTABase.GTAViewportClient.GetTransitionManager
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UUITransition* UGTAViewportClient::STATIC_GetTransitionManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAViewportClient.GetTransitionManager");
		
		UGTAViewportClient_GetTransitionManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9BC0
	 * 		Name   -> Function GTABase.GTAViewportClient.DestroyTransition
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGTAViewportClient::DestroyTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAViewportClient.DestroyTransition");
		
		UGTAViewportClient_DestroyTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAViewportClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAViewportClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAViewportClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVolumetricCloud.UpdateCloudiness
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              SunAmt                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CloudAmt                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVolumetricCloud::UpdateCloudiness(float SunAmt, float CloudAmt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVolumetricCloud.UpdateCloudiness");
		
		AGTAVolumetricCloud_UpdateCloudiness_Params params {};
		params.SunAmt = SunAmt;
		params.CloudAmt = CloudAmt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVolumetricCloud.SetSkyParams
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              SunIntensity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MoonIntensity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVolumetricCloud::SetSkyParams(float SunIntensity, float MoonIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVolumetricCloud.SetSkyParams");
		
		AGTAVolumetricCloud_SetSkyParams_Params params {};
		params.SunIntensity = SunIntensity;
		params.MoonIntensity = MoonIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVolumetricCloud.SetQualityLevel
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            quality                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVolumetricCloud::SetQualityLevel(int32_t quality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVolumetricCloud.SetQualityLevel");
		
		AGTAVolumetricCloud_SetQualityLevel_Params params {};
		params.quality = quality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVolumetricCloud.SetExtinction
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVolumetricCloud::SetExtinction(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVolumetricCloud.SetExtinction");
		
		AGTAVolumetricCloud_SetExtinction_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVolumetricCloud.SetEmission
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVolumetricCloud::SetEmission(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVolumetricCloud.SetEmission");
		
		AGTAVolumetricCloud_SetEmission_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAVolumetricCloud.SetColor
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              raleigh                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkyAtmosphereComponent*                     AtmosphereComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAVolumetricCloud::SetColor(const struct FLinearColor& Color, float Intensity, float raleigh, class USkyAtmosphereComponent* AtmosphereComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVolumetricCloud.SetColor");
		
		AGTAVolumetricCloud_SetColor_Params params {};
		params.Color = Color;
		params.Intensity = Intensity;
		params.raleigh = raleigh;
		params.AtmosphereComponent = AtmosphereComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9F20
	 * 		Name   -> Function GTABase.GTAVolumetricCloud.IsHDRActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AGTAVolumetricCloud::IsHDRActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAVolumetricCloud.IsHDRActive");
		
		AGTAVolumetricCloud_IsHDRActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAVolumetricCloud.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAVolumetricCloud::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAVolumetricCloud");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA1C0
	 * 		Name   -> Function GTABase.GTAWater.GetGTAWaterActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class AGTAWater* AGTAWater::STATIC_GetGTAWaterActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWater.GetGTAWaterActor");
		
		AGTAWater_GetGTAWaterActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAWater.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAWater::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAWater");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAWeapon.StopSpin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AGTAWeapon::StopSpin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWeapon.StopSpin");
		
		AGTAWeapon_StopSpin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA290
	 * 		Name   -> Function GTABase.GTAWeapon.SetFlashAmount
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAWeapon::SetFlashAmount(float amt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWeapon.SetFlashAmount");
		
		AGTAWeapon_SetFlashAmount_Params params {};
		params.amt = amt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAWeapon.SetEffect
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            effectNo                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              amt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAWeapon::SetEffect(int32_t effectNo, float amt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWeapon.SetEffect");
		
		AGTAWeapon_SetEffect_Params params {};
		params.effectNo = effectNo;
		params.amt = amt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAWeapon.SetBarrelRotation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAWeapon::SetBarrelRotation(float amt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWeapon.SetBarrelRotation");
		
		AGTAWeapon_SetBarrelRotation_Params params {};
		params.amt = amt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA6890
	 * 		Name   -> Function GTABase.GTAWeapon.GetFlashMaterialIndex
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	int32_t AGTAWeapon::GetFlashMaterialIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWeapon.GetFlashMaterialIndex");
		
		AGTAWeapon_GetFlashMaterialIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAWeapon.AttachWeaponEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    fxComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AGTAWeapon::AttachWeaponEffect(class UParticleSystemComponent* fxComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWeapon.AttachWeaponEffect");
		
		AGTAWeapon_AttachWeaponEffect_Params params {};
		params.fxComp = fxComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAWeapon.AddSpin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AGTAWeapon*                                  srcWeapon                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGTAWeapon::AddSpin(class AGTAWeapon* srcWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWeapon.AddSpin");
		
		AGTAWeapon_AddSpin_Params params {};
		params.srcWeapon = srcWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAWeapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAWeapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAWeapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDAA80
	 * 		Name   -> Function GTABase.GTAWindowLights.MICHasBoolParameterSet
	 * 		Flags  -> (Final, Native, Static, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInstanceConstant*                   MIC                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AGTAWindowLights::STATIC_MICHasBoolParameterSet(class UMaterialInstanceConstant* MIC, const class FName& ParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWindowLights.MICHasBoolParameterSet");
		
		AGTAWindowLights_MICHasBoolParameterSet_Params params {};
		params.MIC = MIC;
		params.ParameterName = ParameterName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAWindowLights.IsEmissiveWindowMaterial
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInterface*                          Mat                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGTAMaterialData*                            UserData                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FWindowLightCollectionParameters            Params                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool AGTAWindowLights::IsEmissiveWindowMaterial(class UMaterialInterface* Mat, class UGTAMaterialData* UserData, struct FWindowLightCollectionParameters* Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWindowLights.IsEmissiveWindowMaterial");
		
		AGTAWindowLights_IsEmissiveWindowMaterial_Params params {};
		params.Mat = Mat;
		params.UserData = UserData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Params != nullptr)
			*Params = params.Params;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAWindowLights.GetChannelMultipliers
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
	 */
	struct FVector AGTAWindowLights::GetChannelMultipliers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWindowLights.GetChannelMultipliers");
		
		AGTAWindowLights_GetChannelMultipliers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA9B0
	 * 		Name   -> Function GTABase.GTAWindowLights.GetAverageTextureColor
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture*                                    forTexture                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor AGTAWindowLights::STATIC_GetAverageTextureColor(class UTexture* forTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWindowLights.GetAverageTextureColor");
		
		AGTAWindowLights_GetAverageTextureColor_Params params {};
		params.forTexture = forTexture;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.GTAWindowLights.ConstructLight
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            detailSetting                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Trx                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                lightColor                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULightComponent* AGTAWindowLights::ConstructLight(int32_t detailSetting, const struct FTransform& Trx, const struct FLinearColor& lightColor, float Width, float Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWindowLights.ConstructLight");
		
		AGTAWindowLights_ConstructLight_Params params {};
		params.detailSetting = detailSetting;
		params.Trx = Trx;
		params.lightColor = lightColor;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWindowLights.Build
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAWindowLights::Build()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWindowLights.Build");
		
		AGTAWindowLights_Build_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAWindowLights.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAWindowLights::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAWindowLights");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDBB70
	 * 		Name   -> Function GTABase.GTAWorldComposition.ProcessedStreamRequest
	 * 		Flags  -> (Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGTAStreamRequest                           request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGTAWorldComposition::ProcessedStreamRequest(const struct FGTAStreamRequest& request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.ProcessedStreamRequest");
		
		UGTAWorldComposition_ProcessedStreamRequest_Params params {};
		params.request = request;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldComposition.LoadAllHLODMaps
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGTAWorldComposition::LoadAllHLODMaps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.LoadAllHLODMaps");
		
		UGTAWorldComposition_LoadAllHLODMaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldComposition.GenerateQuadrantHLODs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGTAWorldComposition::GenerateQuadrantHLODs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.GenerateQuadrantHLODs");
		
		UGTAWorldComposition_GenerateQuadrantHLODs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldComposition.GenerateDistantSectionHLODs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGTAWorldComposition::GenerateDistantSectionHLODs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.GenerateDistantSectionHLODs");
		
		UGTAWorldComposition_GenerateDistantSectionHLODs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldComposition.GenerateAllWorldComp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGTAWorldComposition::GenerateAllWorldComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.GenerateAllWorldComp");
		
		UGTAWorldComposition_GenerateAllWorldComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldComposition.GenerateAllStreetLights
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGTAWorldComposition::GenerateAllStreetLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.GenerateAllStreetLights");
		
		UGTAWorldComposition_GenerateAllStreetLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldComposition.GenerateAllProxyLighting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGTAWorldComposition::GenerateAllProxyLighting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.GenerateAllProxyLighting");
		
		UGTAWorldComposition_GenerateAllProxyLighting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldComposition.GenerateAllMeshProxies
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGTAWorldComposition::GenerateAllMeshProxies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.GenerateAllMeshProxies");
		
		UGTAWorldComposition_GenerateAllMeshProxies_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldComposition.GenerateAllHeadlightRibbons
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGTAWorldComposition::GenerateAllHeadlightRibbons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.GenerateAllHeadlightRibbons");
		
		UGTAWorldComposition_GenerateAllHeadlightRibbons_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldComposition.BuildAllMapData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGTAWorldComposition::BuildAllMapData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldComposition.BuildAllMapData");
		
		UGTAWorldComposition_BuildAllMapData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAWorldComposition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAWorldComposition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAWorldComposition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAWorldBoundsExtender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAWorldBoundsExtender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAWorldBoundsExtender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldSettings.WorstTextureUsage
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAWorldSettings::WorstTextureUsage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.WorstTextureUsage");
		
		AGTAWorldSettings_WorstTextureUsage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldSettings.WorstMapData
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAWorldSettings::WorstMapData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.WorstMapData");
		
		AGTAWorldSettings_WorstMapData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldSettings.VertexColorSize
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAWorldSettings::VertexColorSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.VertexColorSize");
		
		AGTAWorldSettings_VertexColorSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldSettings.ToggleOnlyCastFarShadows
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAWorldSettings::ToggleOnlyCastFarShadows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.ToggleOnlyCastFarShadows");
		
		AGTAWorldSettings_ToggleOnlyCastFarShadows_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldSettings.ResetLODs
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAWorldSettings::ResetLODs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.ResetLODs");
		
		AGTAWorldSettings_ResetLODs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldSettings.OscillateLODs
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAWorldSettings::OscillateLODs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.OscillateLODs");
		
		AGTAWorldSettings_OscillateLODs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldSettings.HighVertCounts
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAWorldSettings::HighVertCounts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.HighVertCounts");
		
		AGTAWorldSettings_HighVertCounts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDD690
	 * 		Name   -> Function GTABase.GTAWorldSettings.GetCoronaComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bDynamic                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpClose                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGTACoronaComponent* AGTAWorldSettings::GetCoronaComponent(bool bDynamic, bool bUpClose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.GetCoronaComponent");
		
		AGTAWorldSettings_GetCoronaComponent_Params params {};
		params.bDynamic = bDynamic;
		params.bUpClose = bUpClose;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldSettings.FixLODs
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAWorldSettings::FixLODs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.FixLODs");
		
		AGTAWorldSettings_FixLODs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldSettings.FindDefaultMat
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAWorldSettings::FindDefaultMat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.FindDefaultMat");
		
		AGTAWorldSettings_FindDefaultMat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.GTAWorldSettings.CycleFarShadowModes
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AGTAWorldSettings::CycleFarShadowModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.GTAWorldSettings.CycleFarShadowModes");
		
		AGTAWorldSettings_CycleFarShadowModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAWorldSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAWorldSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAWorldSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIMGFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIMGFile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.IMGFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTAUE4MapCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTAUE4MapCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAUE4MapCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIMGFileUserData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIMGFileUserData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.IMGFileUserData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCollisionExcludeList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollisionExcludeList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.CollisionExcludeList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACollisionMaterialViz.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACollisionMaterialViz::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.CollisionMaterialViz");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.IPLMapActor.GetStaticVolumetricStrength
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		float                                              intoAO                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              intoUplight                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIPLMapActor::GetStaticVolumetricStrength(float* intoAO, float* intoUplight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.IPLMapActor.GetStaticVolumetricStrength");
		
		AIPLMapActor_GetStaticVolumetricStrength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (intoAO != nullptr)
			*intoAO = params.intoAO;
		if (intoUplight != nullptr)
			*intoUplight = params.intoUplight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDEF90
	 * 		Name   -> Function GTABase.IPLMapActor.CopyVertexLighting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMeshComponent*                              ToComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSwapToDynamic                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIPLMapActor::CopyVertexLighting(class UMeshComponent* ToComponent, bool bSwapToDynamic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.IPLMapActor.CopyVertexLighting");
		
		AIPLMapActor_CopyVertexLighting_Params params {};
		params.ToComponent = ToComponent;
		params.bSwapToDynamic = bSwapToDynamic;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.IPLMapActor.ChangedLightSwitch
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bOn                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsEditor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AIPLMapActor::ChangedLightSwitch(bool bOn, bool bIsEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.IPLMapActor.ChangedLightSwitch");
		
		AIPLMapActor_ChangedLightSwitch_Params params {};
		params.bOn = bOn;
		params.bIsEditor = bIsEditor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIPLMapActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIPLMapActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.IPLMapActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.DynamicIPLMapActor.ShouldForceInstanceBakedColors
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 */
	bool ADynamicIPLMapActor::ShouldForceInstanceBakedColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.ShouldForceInstanceBakedColors");
		
		ADynamicIPLMapActor_ShouldForceInstanceBakedColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.DynamicIPLMapActor.SetupBroken
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     impulseSrc                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     impulseVelocity                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  floorTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ADynamicIPLMapActor::SetupBroken(const struct FVector& impulseSrc, const struct FVector& impulseVelocity, const struct FTransform& floorTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.SetupBroken");
		
		ADynamicIPLMapActor_SetupBroken_Params params {};
		params.impulseSrc = impulseSrc;
		params.impulseVelocity = impulseVelocity;
		params.floorTransform = floorTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.DynamicIPLMapActor.SetupBreakableInGTA
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	bool ADynamicIPLMapActor::SetupBreakableInGTA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.SetupBreakableInGTA");
		
		ADynamicIPLMapActor_SetupBreakableInGTA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.DynamicIPLMapActor.SetEffect
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            effectNo                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              amt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADynamicIPLMapActor::SetEffect(int32_t effectNo, float amt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.SetEffect");
		
		ADynamicIPLMapActor_SetEffect_Params params {};
		params.effectNo = effectNo;
		params.amt = amt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.DynamicIPLMapActor.OnUpdatedDamageAmount
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ADynamicIPLMapActor::OnUpdatedDamageAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.OnUpdatedDamageAmount");
		
		ADynamicIPLMapActor_OnUpdatedDamageAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF630
	 * 		Name   -> Function GTABase.DynamicIPLMapActor.GetTrafficState
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            lightState                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            walkState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADynamicIPLMapActor::GetTrafficState(bool* Enabled, int32_t* lightState, int32_t* walkState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.GetTrafficState");
		
		ADynamicIPLMapActor_GetTrafficState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Enabled != nullptr)
			*Enabled = params.Enabled;
		if (lightState != nullptr)
			*lightState = params.lightState;
		if (walkState != nullptr)
			*walkState = params.walkState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.DynamicIPLMapActor.GetPhysicsFloorC
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UStaticMeshComponent* ADynamicIPLMapActor::GetPhysicsFloorC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.GetPhysicsFloorC");
		
		ADynamicIPLMapActor_GetPhysicsFloorC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.DynamicIPLMapActor.EntityRemoved
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADynamicIPLMapActor::EntityRemoved(int32_t reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.EntityRemoved");
		
		ADynamicIPLMapActor_EntityRemoved_Params params {};
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.DynamicIPLMapActor.EntityLinked
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShouldBeVisible                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADynamicIPLMapActor::EntityLinked(bool bShouldBeVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.EntityLinked");
		
		ADynamicIPLMapActor_EntityLinked_Params params {};
		params.bShouldBeVisible = bShouldBeVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.DynamicIPLMapActor.Dislodged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADynamicIPLMapActor::Dislodged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.Dislodged");
		
		ADynamicIPLMapActor_Dislodged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF850
	 * 		Name   -> Function GTABase.DynamicIPLMapActor.BreakableImpulseFactor
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	float ADynamicIPLMapActor::BreakableImpulseFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.BreakableImpulseFactor");
		
		ADynamicIPLMapActor_BreakableImpulseFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF290
	 * 		Name   -> Function GTABase.DynamicIPLMapActor.AddRandomOutwardVelocityToAllBodies
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InPrimitive                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              amt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADynamicIPLMapActor::AddRandomOutwardVelocityToAllBodies(class USkeletalMeshComponent* InPrimitive, float amt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.AddRandomOutwardVelocityToAllBodies");
		
		ADynamicIPLMapActor_AddRandomOutwardVelocityToAllBodies_Params params {};
		params.InPrimitive = InPrimitive;
		params.amt = amt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF3F0
	 * 		Name   -> Function GTABase.DynamicIPLMapActor.AddImpulseAtLocationForAllBodiesBelow
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InPrimitive                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Impulse                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADynamicIPLMapActor::AddImpulseAtLocationForAllBodiesBelow(class USkeletalMeshComponent* InPrimitive, const struct FVector& Impulse, const struct FVector& position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.DynamicIPLMapActor.AddImpulseAtLocationForAllBodiesBelow");
		
		ADynamicIPLMapActor_AddImpulseAtLocationForAllBodiesBelow_Params params {};
		params.InPrimitive = InPrimitive;
		params.Impulse = Impulse;
		params.position = position;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADynamicIPLMapActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADynamicIPLMapActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.DynamicIPLMapActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDFDA0
	 * 		Name   -> Function GTABase.MeshBevellingDataBase.Unbevel
	 * 		Flags  -> (Native, Public)
	 */
	void UMeshBevellingDataBase::Unbevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.MeshBevellingDataBase.Unbevel");
		
		UMeshBevellingDataBase_Unbevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDFDC0
	 * 		Name   -> Function GTABase.MeshBevellingDataBase.Bevel
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		bool                                               bSkipBuild                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshBevellingDataBase::Bevel(bool bSkipBuild)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.MeshBevellingDataBase.Bevel");
		
		UMeshBevellingDataBase_Bevel_Params params {};
		params.bSkipBuild = bSkipBuild;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshBevellingDataBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshBevellingDataBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.MeshBevellingDataBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE0040
	 * 		Name   -> Function GTABase.ProcTextData.ConstructText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UProceduralMeshComponent*                    onComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInstanceConstant*                   UsingMIC                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Scale                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCentered                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHorizontalLeft                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LineScaling                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProcTextData::ConstructText(class UProceduralMeshComponent* onComponent, class UMaterialInstanceConstant* UsingMIC, const class FString& Text, const struct FVector2D& Scale, bool bCentered, bool bHorizontalLeft, float LineScaling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.ProcTextData.ConstructText");
		
		UProcTextData_ConstructText_Params params {};
		params.onComponent = onComponent;
		params.UsingMIC = UsingMIC;
		params.Text = Text;
		params.Scale = Scale;
		params.bCentered = bCentered;
		params.bHorizontalLeft = bHorizontalLeft;
		params.LineScaling = LineScaling;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProcTextData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProcTextData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.ProcTextData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE0510
	 * 		Name   -> Function GTABase.Rage.SetSocialclubMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGTASocialClub*                              sc                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URage::SetSocialclubMenu(class UGTASocialClub* sc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.Rage.SetSocialclubMenu");
		
		URage_SetSocialclubMenu_Params params {};
		params.sc = sc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.Rage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URageEditorMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URageEditorMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.RageEditorMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URageSaveData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URageSaveData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.RageSaveData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStreetDecalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStreetDecalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.StreetDecalComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.StreetLightMapActor.SetWalkLight
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            withState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AStreetLightMapActor::SetWalkLight(int32_t withState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.SetWalkLight");
		
		AStreetLightMapActor_SetWalkLight_Params params {};
		params.withState = withState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.StreetLightMapActor.SetupImpostorComponent
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AStreetLightMapActor::SetupImpostorComponent(class UStaticMeshComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.SetupImpostorComponent");
		
		AStreetLightMapActor_SetupImpostorComponent_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.StreetLightMapActor.SetTrafficLight
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            withState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AStreetLightMapActor::SetTrafficLight(int32_t withState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.SetTrafficLight");
		
		AStreetLightMapActor_SetTrafficLight_Params params {};
		params.withState = withState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE1040
	 * 		Name   -> Function GTABase.StreetLightMapActor.SetLowQualityLights
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsLow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AStreetLightMapActor::SetLowQualityLights(bool bIsLow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.SetLowQualityLights");
		
		AStreetLightMapActor_SetLowQualityLights_Params params {};
		params.bIsLow = bIsLow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE0DE0
	 * 		Name   -> Function GTABase.StreetLightMapActor.SetLightVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULightComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsVisible                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AStreetLightMapActor::SetLightVisibility(class ULightComponent* Component, bool bIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.SetLightVisibility");
		
		AStreetLightMapActor_SetLightVisibility_Params params {};
		params.Component = Component;
		params.bIsVisible = bIsVisible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.StreetLightMapActor.SetLights
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bLightsOn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceForEditor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AStreetLightMapActor::SetLights(bool bLightsOn, bool bForceForEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.SetLights");
		
		AStreetLightMapActor_SetLights_Params params {};
		params.bLightsOn = bLightsOn;
		params.bForceForEditor = bForceForEditor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE1120
	 * 		Name   -> Function GTABase.StreetLightMapActor.SetHasTrafficLights
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bTrafficSignal                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWalkSignal                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AStreetLightMapActor::SetHasTrafficLights(bool bTrafficSignal, bool bWalkSignal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.SetHasTrafficLights");
		
		AStreetLightMapActor_SetHasTrafficLights_Params params {};
		params.bTrafficSignal = bTrafficSignal;
		params.bWalkSignal = bWalkSignal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.StreetLightMapActor.SetAsLowQualityLightTemplate
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AStreetLightMapActor::SetAsLowQualityLightTemplate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.SetAsLowQualityLightTemplate");
		
		AStreetLightMapActor_SetAsLowQualityLightTemplate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE1020
	 * 		Name   -> Function GTABase.StreetLightMapActor.RerollLights
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AStreetLightMapActor::RerollLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.RerollLights");
		
		AStreetLightMapActor_RerollLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.StreetLightMapActor.RemoveDecal
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AStreetLightMapActor::RemoveDecal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.RemoveDecal");
		
		AStreetLightMapActor_RemoveDecal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.StreetLightMapActor.EnableViz
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AStreetLightMapActor::EnableViz()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.EnableViz");
		
		AStreetLightMapActor_EnableViz_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA4F10
	 * 		Name   -> Function GTABase.StreetLightMapActor.BuildDecal
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AStreetLightMapActor::BuildDecal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.StreetLightMapActor.BuildDecal");
		
		AStreetLightMapActor_BuildDecal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStreetLightMapActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStreetLightMapActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.StreetLightMapActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA9F50
	 * 		Name   -> Function GTABase.UITransition.UseTransitionObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUITransition::UseTransitionObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.UseTransitionObject");
		
		UUITransition_UseTransitionObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE27E0
	 * 		Name   -> Function GTABase.UITransition.StartMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ScreenClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGTATransitionState                                startingState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NameToCreateWith                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransition::StartMenu(class APlayerController* OwningPlayer, class UClass* ScreenClass, EGTATransitionState startingState, const class FString& NameToCreateWith)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.StartMenu");
		
		UUITransition_StartMenu_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.ScreenClass = ScreenClass;
		params.startingState = startingState;
		params.NameToCreateWith = NameToCreateWith;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE2C00
	 * 		Name   -> Function GTABase.UITransition.Start
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ScreenClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGTATransitionState                                startingState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NameToCreateWith                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransition::Start(class APlayerController* OwningPlayer, class UClass* ScreenClass, EGTATransitionState startingState, const class FString& NameToCreateWith)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.Start");
		
		UUITransition_Start_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.ScreenClass = ScreenClass;
		params.startingState = startingState;
		params.NameToCreateWith = NameToCreateWith;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE1DC0
	 * 		Name   -> Function GTABase.UITransition.SetTransitionStateFadeTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGTATransitionState                                StateToChange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToFade                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransition::SetTransitionStateFadeTime(EGTATransitionState StateToChange, float TimeToFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.SetTransitionStateFadeTime");
		
		UUITransition_SetTransitionStateFadeTime_Params params {};
		params.StateToChange = StateToChange;
		params.TimeToFade = TimeToFade;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE1C20
	 * 		Name   -> Function GTABase.UITransition.SetMenuTransitionStateFadeTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGTATransitionState                                StateToChange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToFade                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransition::SetMenuTransitionStateFadeTime(EGTATransitionState StateToChange, float TimeToFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.SetMenuTransitionStateFadeTime");
		
		UUITransition_SetMenuTransitionStateFadeTime_Params params {};
		params.StateToChange = StateToChange;
		params.TimeToFade = TimeToFade;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE15D0
	 * 		Name   -> Function GTABase.UITransition.IsOpaque
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UUITransition::IsOpaque()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.IsOpaque");
		
		UUITransition_IsOpaque_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE22D0
	 * 		Name   -> Function GTABase.UITransition.InterruptCurrentTransition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ScreenClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGTATransitionState                                startingState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NameToCreateWith                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               takeOldOpacity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransition::InterruptCurrentTransition(class APlayerController* OwningPlayer, class UClass* ScreenClass, EGTATransitionState startingState, const class FString& NameToCreateWith, bool takeOldOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.InterruptCurrentTransition");
		
		UUITransition_InterruptCurrentTransition_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.ScreenClass = ScreenClass;
		params.startingState = startingState;
		params.NameToCreateWith = NameToCreateWith;
		params.takeOldOpacity = takeOldOpacity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE1F60
	 * 		Name   -> Function GTABase.UITransition.InterruptCurrentMenuTransition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ScreenClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGTATransitionState                                startingState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NameToCreateWith                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               takeOldOpacity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransition::InterruptCurrentMenuTransition(class APlayerController* OwningPlayer, class UClass* ScreenClass, EGTATransitionState startingState, const class FString& NameToCreateWith, bool takeOldOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.InterruptCurrentMenuTransition");
		
		UUITransition_InterruptCurrentMenuTransition_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.ScreenClass = ScreenClass;
		params.startingState = startingState;
		params.NameToCreateWith = NameToCreateWith;
		params.takeOldOpacity = takeOldOpacity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE1630
	 * 		Name   -> Function GTABase.UITransition.GetState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EGTATransitionState UUITransition::GetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.GetState");
		
		UUITransition_GetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE1600
	 * 		Name   -> Function GTABase.UITransition.GetIsFading
	 * 		Flags  -> (Final, Native, Public)
	 */
	bool UUITransition::GetIsFading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.GetIsFading");
		
		UUITransition_GetIsFading_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE1870
	 * 		Name   -> Function GTABase.UITransition.CustomFunctionOnTransitionWithString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransition::CustomFunctionOnTransitionWithString(const class FString& FunctionString, const class FString& VariableString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.CustomFunctionOnTransitionWithString");
		
		UUITransition_CustomFunctionOnTransitionWithString_Params params {};
		params.FunctionString = FunctionString;
		params.VariableString = VariableString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE1660
	 * 		Name   -> Function GTABase.UITransition.CustomFunctionOnTransitionWithColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransition::CustomFunctionOnTransitionWithColor(const class FString& FunctionString, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.CustomFunctionOnTransitionWithColor");
		
		UUITransition_CustomFunctionOnTransitionWithColor_Params params {};
		params.FunctionString = FunctionString;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE1AC0
	 * 		Name   -> Function GTABase.UITransition.CustomFunctionOnTransition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransition::CustomFunctionOnTransition(const class FString& FunctionString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.CustomFunctionOnTransition");
		
		UUITransition_CustomFunctionOnTransition_Params params {};
		params.FunctionString = FunctionString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE2640
	 * 		Name   -> Function GTABase.UITransition.ContinueMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGTATransitionState                                toState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransition::ContinueMenu(EGTATransitionState toState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.ContinueMenu");
		
		UUITransition_ContinueMenu_Params params {};
		params.toState = toState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE2710
	 * 		Name   -> Function GTABase.UITransition.Continue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGTATransitionState                                toState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransition::Continue(EGTATransitionState toState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransition.Continue");
		
		UUITransition_Continue_Params params {};
		params.toState = toState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUITransition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUITransition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.UITransition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UITransitionScreen.SetProgress
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransitionScreen::SetProgress(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.SetProgress");
		
		UUITransitionScreen_SetProgress_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UITransitionScreen.SetHudItemPosition
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Xmax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Ymax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransitionScreen::SetHudItemPosition(float X, float Y, float Xmax, float Ymax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.SetHudItemPosition");
		
		UUITransitionScreen_SetHudItemPosition_Params params {};
		params.X = X;
		params.Y = Y;
		params.Xmax = Xmax;
		params.Ymax = Ymax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UITransitionScreen.OverrideBackgroundColor
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                ToColor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransitionScreen::OverrideBackgroundColor(const struct FLinearColor& ToColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.OverrideBackgroundColor");
		
		UUITransitionScreen_OverrideBackgroundColor_Params params {};
		params.ToColor = ToColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA96D0
	 * 		Name   -> Function GTABase.UITransitionScreen.IsOpaque
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	bool UUITransitionScreen::IsOpaque()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.IsOpaque");
		
		UUITransitionScreen_IsOpaque_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE34A0
	 * 		Name   -> Function GTABase.UITransitionScreen.GetState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EGTATransitionState UUITransitionScreen::GetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.GetState");
		
		UUITransitionScreen_GetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BA97E0
	 * 		Name   -> Function GTABase.UITransitionScreen.GetIsFading
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	bool UUITransitionScreen::GetIsFading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.GetIsFading");
		
		UUITransitionScreen_GetIsFading_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE3430
	 * 		Name   -> Function GTABase.UITransitionScreen.GetHudItem
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	class UUI_GTAHUDItem* UUITransitionScreen::GetHudItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.GetHudItem");
		
		UUITransitionScreen_GetHudItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BCDD50
	 * 		Name   -> Function GTABase.UITransitionScreen.GetGameterface
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UGameterface* UUITransitionScreen::GetGameterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.GetGameterface");
		
		UUITransitionScreen_GetGameterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE33F0
	 * 		Name   -> Function GTABase.UITransitionScreen.GetDialogVolumeMultiplier
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	float UUITransitionScreen::GetDialogVolumeMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.GetDialogVolumeMultiplier");
		
		UUITransitionScreen_GetDialogVolumeMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE3460
	 * 		Name   -> Function GTABase.UITransitionScreen.GetCurrentFadeOpacity
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	float UUITransitionScreen::GetCurrentFadeOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.GetCurrentFadeOpacity");
		
		UUITransitionScreen_GetCurrentFadeOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UITransitionScreen.ForceCurrentFadeOpacity
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              newOpacity                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransitionScreen::ForceCurrentFadeOpacity(float newOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.ForceCurrentFadeOpacity");
		
		UUITransitionScreen_ForceCurrentFadeOpacity_Params params {};
		params.newOpacity = newOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UITransitionScreen.CustomFunctionFromStringWithString
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransitionScreen::CustomFunctionFromStringWithString(const class FString& FunctionString, const class FString& VariableString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.CustomFunctionFromStringWithString");
		
		UUITransitionScreen_CustomFunctionFromStringWithString_Params params {};
		params.FunctionString = FunctionString;
		params.VariableString = VariableString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UITransitionScreen.CustomFunctionFromStringWithColor
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransitionScreen::CustomFunctionFromStringWithColor(const class FString& FunctionString, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.CustomFunctionFromStringWithColor");
		
		UUITransitionScreen_CustomFunctionFromStringWithColor_Params params {};
		params.FunctionString = FunctionString;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UITransitionScreen.CustomFunctionFromString
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      FunctionString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransitionScreen::CustomFunctionFromString(const class FString& FunctionString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.CustomFunctionFromString");
		
		UUITransitionScreen_CustomFunctionFromString_Params params {};
		params.FunctionString = FunctionString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE3300
	 * 		Name   -> Function GTABase.UITransitionScreen.Continue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EGTATransitionState                                toState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransitionScreen::Continue(EGTATransitionState toState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.Continue");
		
		UUITransitionScreen_Continue_Params params {};
		params.toState = toState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UITransitionScreen.BP_SetTransitionStateFadeTime
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                StateToChange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToFade                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUITransitionScreen::BP_SetTransitionStateFadeTime(EGTATransitionState StateToChange, float TimeToFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.BP_SetTransitionStateFadeTime");
		
		UUITransitionScreen_BP_SetTransitionStateFadeTime_Params params {};
		params.StateToChange = StateToChange;
		params.TimeToFade = TimeToFade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function GTABase.UITransitionScreen.BP_Continue
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUITransitionScreen::BP_Continue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.BP_Continue");
		
		UUITransitionScreen_BP_Continue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD6220
	 * 		Name   -> Function GTABase.UITransitionScreen.AllowBackwardsTransition
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	bool UUITransitionScreen::AllowBackwardsTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UITransitionScreen.AllowBackwardsTransition");
		
		UUITransitionScreen_AllowBackwardsTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUITransitionScreen.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUITransitionScreen::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.UITransitionScreen");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE3EA0
	 * 		Name   -> Function GTABase.UVImage.SetUVs
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FBox2D                                      InUVs                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUVImage::SetUVs(const struct FBox2D& InUVs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GTABase.UVImage.SetUVs");
		
		UUVImage_SetUVs_Params params {};
		params.InUVs = InUVs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.UVImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAVertexSettingsOverride.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAVertexSettingsOverride::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAVertexSettingsOverride");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGTALightingProbeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGTALightingProbeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTALightingProbeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTALightingProbe.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTALightingProbe::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTALightingProbe");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGTAVertexLightSphere.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGTAVertexLightSphere::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GTABase.GTAVertexLightSphere");
		return ptr;
	}

}


