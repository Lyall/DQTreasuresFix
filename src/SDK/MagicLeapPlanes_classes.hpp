#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapPlanes

#include "Basic.hpp"

#include "MagicLeapPlanes_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class MagicLeapPlanes.MagicLeapPlanesComponent
// 0x0070 (0x0270 - 0x0200)
class UMagicLeapPlanesComponent final : public USceneComponent
{
public:
	TArray<EMagicLeapPlaneQueryFlags>             QueryFlags;                                        // 0x0200(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                          SearchVolume;                                      // 0x0210(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxResults;                                        // 0x0218(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinHolePerimeter;                                  // 0x021C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinPlaneArea;                                      // 0x0220(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMagicLeapPlaneQueryType                      QueryType;                                         // 0x0224(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_225[0x3];                                      // 0x0225(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SimilarityThreshold;                               // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22C[0x4];                                      // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(bool bSuccess, TArray<struct FMagicLeapPlaneResult>& Planes, TArray<struct FMagicLeapPlaneBoundaries>& Polygons)> OnPlanesQueryResult;                               // 0x0230(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	TMulticastInlineDelegate<void(bool bSuccess, struct FGuid& QueryHandle, EMagicLeapPlaneQueryType QueryType, TArray<struct FMagicLeapPlaneResult>& NewPlanes, TArray<struct FGuid>& RemovedPlaneIDs, TArray<struct FMagicLeapPlaneBoundaries>& NewPolygons, TArray<struct FGuid>& RemovedPolygonIDs)> OnPersistentPlanesQueryResult;                     // 0x0240(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                         Pad_250[0x20];                                     // 0x0250(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool RequestPlanesAsync();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapPlanesComponent">();
	}
	static class UMagicLeapPlanesComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapPlanesComponent>();
	}
};
static_assert(alignof(UMagicLeapPlanesComponent) == 0x000010, "Wrong alignment on UMagicLeapPlanesComponent");
static_assert(sizeof(UMagicLeapPlanesComponent) == 0x000270, "Wrong size on UMagicLeapPlanesComponent");
static_assert(offsetof(UMagicLeapPlanesComponent, QueryFlags) == 0x000200, "Member 'UMagicLeapPlanesComponent::QueryFlags' has a wrong offset!");
static_assert(offsetof(UMagicLeapPlanesComponent, SearchVolume) == 0x000210, "Member 'UMagicLeapPlanesComponent::SearchVolume' has a wrong offset!");
static_assert(offsetof(UMagicLeapPlanesComponent, MaxResults) == 0x000218, "Member 'UMagicLeapPlanesComponent::MaxResults' has a wrong offset!");
static_assert(offsetof(UMagicLeapPlanesComponent, MinHolePerimeter) == 0x00021C, "Member 'UMagicLeapPlanesComponent::MinHolePerimeter' has a wrong offset!");
static_assert(offsetof(UMagicLeapPlanesComponent, MinPlaneArea) == 0x000220, "Member 'UMagicLeapPlanesComponent::MinPlaneArea' has a wrong offset!");
static_assert(offsetof(UMagicLeapPlanesComponent, QueryType) == 0x000224, "Member 'UMagicLeapPlanesComponent::QueryType' has a wrong offset!");
static_assert(offsetof(UMagicLeapPlanesComponent, SimilarityThreshold) == 0x000228, "Member 'UMagicLeapPlanesComponent::SimilarityThreshold' has a wrong offset!");
static_assert(offsetof(UMagicLeapPlanesComponent, OnPlanesQueryResult) == 0x000230, "Member 'UMagicLeapPlanesComponent::OnPlanesQueryResult' has a wrong offset!");
static_assert(offsetof(UMagicLeapPlanesComponent, OnPersistentPlanesQueryResult) == 0x000240, "Member 'UMagicLeapPlanesComponent::OnPersistentPlanesQueryResult' has a wrong offset!");

// Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
// 0x0000 (0x0030 - 0x0030)
class UMagicLeapPlanesFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FGuid AddPersistentQuery(EMagicLeapPlaneQueryType PersistentQueryType);
	static bool CreateTracker();
	static bool DestroyTracker();
	static struct FTransform GetContentScale(const class AActor* ContentActor, const struct FMagicLeapPlaneResult& PlaneResult);
	static bool IsTrackerValid();
	static bool PlanesPersistentQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FGuid& Handle, const TDelegate<void(bool bSuccess, struct FGuid& QueryHandle, EMagicLeapPlaneQueryType QueryType, TArray<struct FMagicLeapPlaneResult>& NewPlanes, TArray<struct FGuid>& RemovedPlaneIDs, TArray<struct FMagicLeapPlaneBoundaries>& NewPolygons, TArray<struct FGuid>& RemovedPolygonIDs)>& ResultDelegate);
	static bool PlanesQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const TDelegate<void(bool bSuccess, TArray<struct FMagicLeapPlaneResult>& Planes, TArray<struct FMagicLeapPlaneBoundaries>& Polygons)>& ResultDelegate);
	static void RemoveFlagsNotInQuery(const TArray<EMagicLeapPlaneQueryFlags>& InQueryFlags, const TArray<EMagicLeapPlaneQueryFlags>& InResultFlags, TArray<EMagicLeapPlaneQueryFlags>* OutFlags);
	static bool RemovePersistentQuery(const struct FGuid& Handle);
	static void ReorderPlaneFlags(const TArray<EMagicLeapPlaneQueryFlags>& InPriority, const TArray<EMagicLeapPlaneQueryFlags>& InFlagsToReorder, TArray<EMagicLeapPlaneQueryFlags>* OutReorderedFlags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapPlanesFunctionLibrary">();
	}
	static class UMagicLeapPlanesFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapPlanesFunctionLibrary>();
	}
};
static_assert(alignof(UMagicLeapPlanesFunctionLibrary) == 0x000008, "Wrong alignment on UMagicLeapPlanesFunctionLibrary");
static_assert(sizeof(UMagicLeapPlanesFunctionLibrary) == 0x000030, "Wrong size on UMagicLeapPlanesFunctionLibrary");

}
