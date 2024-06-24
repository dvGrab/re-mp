#pragma once

/**
 * Name: GTA-SA-DEF
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
	 * BlueprintGeneratedClass BP_TowerLight.BP_TowerLight_C
	 * Size -> 0x0048 (FullSize[0x0328] - InheritedSize[0x02E0])
	 */
	class ABP_TowerLight_C : public ABP_PointLight_Exterior_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FColor                                              BulbColor;                                               // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BulbBrightness;                                          // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FreqAdjust;                                              // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0DK0[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            ColorMID;                                                // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         ColorCurve;                                              // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeOffset;                                              // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeSpeed;                                               // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentColor;                                            // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxCoronaIntensity;                                      // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightRadius;                                             // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHideWhenOff;                                            // 0x0324(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bFullyDynamic;                                           // 0x0325(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bRandomizeOffset;                                        // 0x0326(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bNoMesh;                                                 // 0x0327(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		struct FColor GetCoronaColor();
		void ConstructMID();
		void GetColorAmt(float* CurveColor);
		void UpdateColors(float Current);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ChangedLightSwitch(bool bOn, bool bIsEditor);
		void ExecuteUbergraph_BP_TowerLight(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
