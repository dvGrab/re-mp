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
	 * BlueprintGeneratedClass BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C
	 * Size -> 0x0290 (FullSize[0x1548] - InheritedSize[0x12B8])
	 */
	class ABP_GTA_ProceduralSky_C : public AGTATimeOfDay
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x12B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Dummy;                                                   // 0x12C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                SkyMesh;                                                 // 0x12C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x12D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FRotator                                            MoonDirection;                                           // 0x12D8(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SunHeight;                                               // 0x12E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeatherData                                        WeatherSettings;                                         // 0x12E8(0x0068) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            SkyMaterialInst;                                         // 0x1350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceConstant*                           SkyMaterial;                                             // 0x1358(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADirectionalLight*                                   SunLightSource;                                          // 0x1360(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADirectionalLight*                                   MoonLightSource;                                         // 0x1368(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ExteriorHeightFog_C*                             HeightFog;                                               // 0x1370(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASkyLight*                                           SkyLight;                                                // 0x1378(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Saturation;                                              // 0x1380(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CloudsBloom;                                             // 0x1384(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CloudsFluffy;                                            // 0x1388(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UVHorizon;                                               // 0x138C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UVRoundness;                                             // 0x1390(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UVScale;                                                 // 0x1394(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FogDirectionalInScattering;                              // 0x1398(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FogDensity;                                              // 0x139C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        UVBaseLayerPosition;                                     // 0x13A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        UVBaseLayerSize;                                         // 0x13B0(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        UVSecondLayerSize;                                       // 0x13C0(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        UVSecondLayerPosition;                                   // 0x13D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture*                                            CloudsLayer1;                                            // 0x13E0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture*                                            CloudsLayer2;                                            // 0x13E8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HorizonTilt;                                             // 0x13F0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           WindForce;                                               // 0x13F4(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunRadius;                                               // 0x13FC(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunShineMult;                                            // 0x1400(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunSaturation;                                           // 0x1404(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunMaxAltitude;                                          // 0x1408(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunAzimuth;                                              // 0x140C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunVisibleDuration;                                      // 0x1410(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SunDirectionTimeOfDay;                                   // 0x1414(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C2XA[0x3];                                   // 0x1415(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            SunDirection;                                            // 0x1418(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      StarsBrightness;                                         // 0x1424(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoonBightness;                                           // 0x1428(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoonRadius;                                              // 0x142C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoonClouds;                                              // 0x1430(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoonShine;                                               // 0x1434(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoonRoll;                                                // 0x1438(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoonVisibleDuration;                                     // 0x143C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MoonSyncedToSun;                                         // 0x1440(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UO3M[0x3];                                   // 0x1441(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            MoonRotation;                                            // 0x1444(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FRotator                                            MoonChangeSpeed;                                         // 0x1450(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      WorldRotation;                                           // 0x145C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WorldRotationSpeed;                                      // 0x1460(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I4G4[0x4];                                   // 0x1464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            WorldLayerTexture;                                       // 0x1468(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WorldLayerFog;                                           // 0x1470(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WorldLayerDepth;                                         // 0x1474(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        WorldLayerColor;                                         // 0x1478(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SkyLightRecaptureTime;                                   // 0x1488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SkyLightIntensity;                                       // 0x148C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SkyLightLightning;                                       // 0x1490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseWorldSpaceRotation;                                   // 0x1494(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8WHE[0x3];                                   // 0x1495(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLightningPlayed;                                       // 0x1498(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      SunContributionToFog;                                    // 0x14A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MobileNightBoost;                                        // 0x14AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ExteriorPostProcess_C*                           GTAPostProcess;                                          // 0x14B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RandomCloudOffset;                                       // 0x14B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CloudDensity;                                            // 0x14BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurDeltaSeconds;                                         // 0x14C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunMinElevation;                                         // 0x14C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightningAmount;                                         // 0x14C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LightningColor;                                          // 0x14CC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M3VG[0x4];                                   // 0x14DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_WetRoads_C*                                      WetRoadActor;                                            // 0x14E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RoadWetnessAmount;                                       // 0x14E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LastInterval;                                            // 0x14EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CapturedSkyHSV;                                          // 0x14F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumSkyCaptures;                                          // 0x14FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SkyCumulativeDiff;                                       // 0x1500(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BegunPlay;                                               // 0x1504(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3Z1F[0x3];                                   // 0x1505(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        SkyLowerHemiColor;                                       // 0x1508(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FramesSinceSunMoved;                                     // 0x1518(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        OccludedSkyColor;                                        // 0x151C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HPM9[0x4];                                   // 0x152C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceConstant*                           SkyMaterial_NoClouds;                                    // 0x1530(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnabledCloudMaterial;                                   // 0x1538(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TASK[0x3];                                   // 0x1539(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MoonCycleState;                                          // 0x153C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoonBrightnessMultiplier;                                // 0x1540(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoonBaseSize;                                            // 0x1544(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class ASkyLight* GetSkyLightActor();
		struct FRotator GetMoonDirection();
		bool EnableCloudMaterial(bool bEnabled);
		void UpdateSkyVisibility();
		void UpdateLatentRotation(class USceneComponent* Component, const struct FRotator& NewRotation);
		void CheckSkyCapture(bool bForce);
		void SetRoadWetness(float Wetness);
		void GetSkyHSV(struct FVector* HSV);
		void SetCloudSettings(float ambient, float ShadowSize, float Translucency, float Background, float CloudDensity, float CloudWindSpeed);
		void UpdateClouds(float DeltaTime);
		void GetSunDirectionAtTime(float Time, struct FRotator* Rtation);
		void UpdateLightning();
		void SetTimeCycleDuration(float RealTimeMinutes);
		void UpdateMoon(float DeltaTime);
		void UpdateSunParameters();
		void UpdateSkyLight();
		void UpdateExternalActors();
		void UpdateNightParameters();
		void UpdateLayersParameters(float DeltaTime);
		void UpdateCloudsParameters();
		void UpdateHorizonParameters();
		void UpdateCurves();
		void UpdateSkyParameters(float DeltaTime);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void SetTimeOfDay(float TimeOfDay);
		void PostConstructionScript();
		void TimeChanged(bool bEditor);
		void PreviewWeatherChanged(EGTAWeather NewWeather);
		void RecaptureSkyNextFrame();
		void DoSkyCapture();
		void ResetRealTimeSky();
		void CycleMoonSize();
		void ExecuteUbergraph_BP_GTA_ProceduralSky(int32_t EntryPoint);
		void OnLightningPlayed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
