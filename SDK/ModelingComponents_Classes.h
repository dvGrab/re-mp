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
	 * Class ModelingComponents.BaseCreateFromSelectedToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UBaseCreateFromSelectedToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_O8GH[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.OnAcceptHandleSourcesProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UOnAcceptHandleSourcesProperties : public UInteractiveToolPropertySet
	{
	public:
		EHandleSourcesMethod                                       OnToolAccept;                                            // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AU6J[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
	{
	public:
		EBaseCreateFromSelectedTargetType                          WriteOutputTo;                                           // 0x0068(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ALQU[0x3];                                   // 0x0069(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_4EFN[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OutputName;                                              // 0x0070(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OutputAsset;                                             // 0x0080(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.TransformInputsToolProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UTransformInputsToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bShowTransformUI;                                        // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToWorldGrid;                                        // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QF8D[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseCreateFromSelectedTool
	 * Size -> 0x0060 (FullSize[0x00F0] - InheritedSize[0x0090])
	 */
	class UBaseCreateFromSelectedTool : public UMultiSelectionTool
	{
	public:
		unsigned char                                              UnknownData_BOSM[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformInputsToolProperties*                      TransformProperties;                                     // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBaseCreateFromSelectedHandleSourceProperties*       HandleSourcesProperties;                                 // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UTransformProxy*>                             TransformProxies;                                        // 0x00B0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UTransformGizmo*>                             TransformGizmos;                                         // 0x00C0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FVector>                                     TransformInitialScales;                                  // 0x00D0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M054[0x10];                                  // 0x00E0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseDynamicMeshComponent
	 * Size -> 0x0050 (FullSize[0x04C0] - InheritedSize[0x0470])
	 */
	class UBaseDynamicMeshComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_ZPI0[0x50];                                  // 0x0470(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseMeshProcessingToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBaseMeshProcessingToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseMeshProcessingTool
	 * Size -> 0x0378 (FullSize[0x0400] - InheritedSize[0x0088])
	 */
	class UBaseMeshProcessingTool : public USingleSelectionTool
	{
	public:
		unsigned char                                              UnknownData_N40N[0x28];                                  // 0x0088(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZU3X[0x348];                                 // 0x00B8(0x0348) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseVoxelTool
	 * Size -> 0x0018 (FullSize[0x0108] - InheritedSize[0x00F0])
	 */
	class UBaseVoxelTool : public UBaseCreateFromSelectedTool
	{
	public:
		class UVoxelProperties*                                    VoxProperties;                                           // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DPK1[0x10];                                  // 0x00F8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.CollectSurfacePathMechanic
	 * Size -> 0x0520 (FullSize[0x0550] - InheritedSize[0x0030])
	 */
	class UCollectSurfacePathMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_76C1[0x520];                                 // 0x0030(0x0520) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.ConstructionPlaneMechanic
	 * Size -> 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
	 */
	class UConstructionPlaneMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_TXVY[0x98];                                  // 0x0030(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformGizmo*                                     PlaneTransformGizmo;                                     // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTransformProxy*                                     PlaneTransformProxy;                                     // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L76R[0x10];                                  // 0x00D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USingleClickInputBehavior*                           ClickToSetPlaneBehavior;                                 // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.CurveControlPointsMechanic
	 * Size -> 0x0620 (FullSize[0x0650] - InheritedSize[0x0030])
	 */
	class UCurveControlPointsMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_0P54[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USingleClickInputBehavior*                           ClickBehavior;                                           // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMouseHoverBehavior*                                 HoverBehavior;                                           // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7AVR[0x498];                                 // 0x0050(0x0498) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APreviewGeometryActor*                               PreviewGeometryActor;                                    // 0x04E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPointSetComponent*                                  DrawnControlPoints;                                      // 0x04F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULineSetComponent*                                   DrawnControlSegments;                                    // 0x04F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPointSetComponent*                                  PreviewPoint;                                            // 0x0500(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULineSetComponent*                                   PreviewSegment;                                          // 0x0508(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OXVR[0x78];                                  // 0x0510(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformProxy*                                     PointTransformProxy;                                     // 0x0588(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTransformGizmo*                                     PointTransformGizmo;                                     // 0x0590(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I0N8[0xB8];                                  // 0x0598(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.DynamicMeshReplacementChangeTarget
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UDynamicMeshReplacementChangeTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_EL2C[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.LineSetComponent
	 * Size -> 0x0060 (FullSize[0x04D0] - InheritedSize[0x0470])
	 */
	class ULineSetComponent : public UMeshComponent
	{
	public:
		class UMaterialInterface*                                  LineMaterial;                                            // 0x0470(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FBoxSphereBounds                                    Bounds;                                                  // 0x0478(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bBoundsDirty;                                            // 0x0494(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LYBP[0x3B];                                  // 0x0495(0x003B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshCommandChangeTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshCommandChangeTarget : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UMeshOpPreviewWithBackgroundCompute : public UObject
	{
	public:
		unsigned char                                              UnknownData_4ARR[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          StandardMaterials;                                       // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  OverrideMaterial;                                        // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  WorkingMaterial;                                         // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJ6M[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshReplacementCommandChangeTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshReplacementCommandChangeTarget : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshVertexCommandChangeTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshVertexCommandChangeTarget : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MultiTransformer
	 * Size -> 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
	 */
	class UMultiTransformer : public UObject
	{
	public:
		unsigned char                                              UnknownData_5MU4[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInteractiveGizmoManager*                            GizmoManager;                                            // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K0YT[0x68];                                  // 0x0078(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformGizmo*                                     TransformGizmo;                                          // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTransformProxy*                                     TransformProxy;                                          // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WSK[0x50];                                  // 0x00F0(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.OctreeDynamicMeshComponent
	 * Size -> 0x0110 (FullSize[0x05D0] - InheritedSize[0x04C0])
	 */
	class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
	{
	public:
		unsigned char                                              UnknownData_EBTM[0x10];                                  // 0x04C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bExplicitShowWireframe;                                  // 0x04D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F3KK[0xFF];                                  // 0x04D1(0x00FF) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PlaneDistanceFromHitMechanic
	 * Size -> 0x0480 (FullSize[0x04B0] - InheritedSize[0x0030])
	 */
	class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_ON16[0x480];                                 // 0x0030(0x0480) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PointSetComponent
	 * Size -> 0x0060 (FullSize[0x04D0] - InheritedSize[0x0470])
	 */
	class UPointSetComponent : public UMeshComponent
	{
	public:
		class UMaterialInterface*                                  PointMaterial;                                           // 0x0470(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FBoxSphereBounds                                    Bounds;                                                  // 0x0478(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bBoundsDirty;                                            // 0x0494(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EWVL[0x3B];                                  // 0x0495(0x003B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PreviewMesh
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UPreviewMesh : public UObject
	{
	public:
		unsigned char                                              UnknownData_UJXC[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bBuildSpatialDataStructure;                              // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawOnTop;                                              // 0x0041(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00S6[0xE];                                   // 0x0042(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USimpleDynamicMeshComponent*                         DynamicMeshComponent;                                    // 0x0050(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KWE4[0x88];                                  // 0x0058(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PolyEditPreviewMesh
	 * Size -> 0x03F0 (FullSize[0x04D0] - InheritedSize[0x00E0])
	 */
	class UPolyEditPreviewMesh : public UPreviewMesh
	{
	public:
		unsigned char                                              UnknownData_HIRF[0x3F0];                                 // 0x00E0(0x03F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PolygonSelectionMechanicProperties
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UPolygonSelectionMechanicProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bSelectFaces;                                            // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectEdges;                                            // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectVertices;                                         // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreferProjectedElement;                                 // 0x0063(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectDownRay;                                          // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreOcclusion;                                        // 0x0065(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CT2A[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PolygonSelectionMechanic
	 * Size -> 0x0640 (FullSize[0x0670] - InheritedSize[0x0030])
	 */
	class UPolygonSelectionMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_G2XD[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPolygonSelectionMechanicProperties*                 Properties;                                              // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CVLP[0x308];                                 // 0x0058(0x0308) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APreviewGeometryActor*                               PreviewGeometryActor;                                    // 0x0360(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTriangleSetComponent*                               DrawnTriangleSetComponent;                               // 0x0368(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OW64[0x50];                                  // 0x0370(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  HighlightedFaceMaterial;                                 // 0x03C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B8AG[0x2A8];                                 // 0x03C8(0x02A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PreviewGeometryActor
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class APreviewGeometryActor : public AInternalToolFrameworkActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PreviewGeometry
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UPreviewGeometry : public UObject
	{
	public:
		class APreviewGeometryActor*                               ParentActor;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class ULineSetComponent*>              LineSets;                                                // 0x0030(0x0050) ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		bool SetLineSetVisibility(const class FString& LineSetIdentifier, bool bVisible);
		bool SetLineSetMaterial(const class FString& LineSetIdentifier, class UMaterialInterface* NewMaterial);
		void SetAllLineSetsMaterial(class UMaterialInterface* Material);
		bool RemoveLineSet(const class FString& LineSetIdentifier, bool bDestroy);
		void RemoveAllLineSets(bool bDestroy);
		class APreviewGeometryActor* GetActor();
		class ULineSetComponent* FindLineSet(const class FString& LineSetIdentifier);
		void Disconnect();
		void CreateInWorld(class UWorld* World, const struct FTransform& WithTransform);
		class ULineSetComponent* AddLineSet(const class FString& LineSetIdentifier);
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PreviewMeshActor
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class APreviewMeshActor : public AInternalToolFrameworkActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SimpleDynamicMeshComponent
	 * Size -> 0x0150 (FullSize[0x0610] - InheritedSize[0x04C0])
	 */
	class USimpleDynamicMeshComponent : public UBaseDynamicMeshComponent
	{
	public:
		unsigned char                                              UnknownData_U6NX[0x30];                                  // 0x04C0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bExplicitShowWireframe;                                  // 0x04F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6PDL[0x4F];                                  // 0x04F1(0x004F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDrawOnTop;                                              // 0x0540(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2BF6[0xCF];                                  // 0x0541(0x00CF) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
	{
	public:
		ESpaceCurveControlPointTransformMode                       TransformMode;                                           // 0x0060(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SYI[0x3];                                   // 0x0061(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ESpaceCurveControlPointOriginMode                          TransformOrigin;                                         // 0x0064(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0TEH[0x3];                                   // 0x0065(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      Softness;                                                // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESpaceCurveControlPointFalloffType                         SoftFalloff;                                             // 0x006C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R293[0x3];                                   // 0x006D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SpaceCurveDeformationMechanic
	 * Size -> 0x0280 (FullSize[0x02B0] - InheritedSize[0x0030])
	 */
	class USpaceCurveDeformationMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_STC6[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USingleClickInputBehavior*                           ClickBehavior;                                           // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMouseHoverBehavior*                                 HoverBehavior;                                           // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RXTW[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpaceCurveDeformationMechanicPropertySet*           TransformProperties;                                     // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KSRT[0xF8];                                  // 0x0070(0x00F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APreviewGeometryActor*                               PreviewGeometryActor;                                    // 0x0168(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPointSetComponent*                                  RenderPoints;                                            // 0x0170(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULineSetComponent*                                   RenderSegments;                                          // 0x0178(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E48J[0x38];                                  // 0x0180(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformProxy*                                     PointTransformProxy;                                     // 0x01B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTransformGizmo*                                     PointTransformGizmo;                                     // 0x01C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8318[0xE8];                                  // 0x01C8(0x00E8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SpatialCurveDistanceMechanic
	 * Size -> 0x03C0 (FullSize[0x03F0] - InheritedSize[0x0030])
	 */
	class USpatialCurveDistanceMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_VZ20[0x3C0];                                 // 0x0030(0x03C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.TriangleSetComponent
	 * Size -> 0x00E0 (FullSize[0x0550] - InheritedSize[0x0470])
	 */
	class UTriangleSetComponent : public UMeshComponent
	{
	public:
		struct FBoxSphereBounds                                    Bounds;                                                  // 0x0470(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bBoundsDirty;                                            // 0x048C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EXRD[0xC3];                                  // 0x048D(0x00C3) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.UVLayoutPreviewProperties
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bVisible;                                                // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GBNV[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScaleFactor;                                             // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUVLayoutPreviewSide                                       WhichSide;                                               // 0x0068(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PGO6[0x3];                                   // 0x0069(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bShowWireframe;                                          // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BK53[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Shift;                                                   // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.UVLayoutPreview
	 * Size -> 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
	 */
	class UUVLayoutPreview : public UObject
	{
	public:
		class UUVLayoutPreviewProperties*                          Settings;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTriangleSetComponent*                               TriangleComponent;                                       // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowBackingRectangle;                                   // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LGP9[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  BackingRectangleMaterial;                                // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0TW[0xF0];                                  // 0x0050(0x00F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.VoxelProperties
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UVoxelProperties : public UInteractiveToolPropertySet
	{
	public:
		int32_t                                                    VoxelCount;                                              // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoSimplify;                                           // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveInternalSurfaces;                                 // 0x0065(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BSUZ[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SimplifyMaxErrorFactor;                                  // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     CubeRootMinComponentVolume;                              // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.WeightMapSetProperties
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	class UWeightMapSetProperties : public UInteractiveToolPropertySet
	{
	public:
		class FName                                                WeightMap;                                               // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      WeightMapsList;                                          // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bInvertWeightMap;                                        // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G64R[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)

	public:
		TArray<class FString> GetWeightMapsFunc();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
