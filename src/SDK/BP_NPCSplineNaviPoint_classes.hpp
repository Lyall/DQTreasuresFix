#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPCSplineNaviPoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "DarwinGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPCSplineNaviPoint.BP_NPCSplineNaviPoint_C
// 0x0098 (0x02C0 - 0x0228)
class ABP_NPCSplineNaviPoint_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                   TextRender;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        arrow;                                             // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             TargetDataTable;                                   // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CSVHeader;                                         // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 CSVRowData;                                        // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsExit;                                            // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_279[0x3];                                      // 0x0279(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DestinationPointID;                                // 0x027C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   StartFlagName;                                     // 0x0284(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EndFlagName;                                       // 0x028C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Range;                                             // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OutRange;                                          // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENPCAiMovedState                              MovedState;                                        // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A1[0x3];                                      // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SerifuID;                                          // 0x02A4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   WorkPointName;                                     // 0x02AC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WorkLocation;                                      // 0x02B4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_NPCSplineNaviPoint(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();
	void Get_Current_Location_and_RotationLocal(float Length, bool Loop, struct FVector* Location, struct FVector* Direction, struct FRotator* Rotation);
	void GetSplineLength(float* Length);
	void IsArrived(float Length, bool* IsArrived_0);
	void ConvertToCSVString(class FName KeyName, const struct FVector& Vector, const struct FRotator& Rotate, float RangeValue, float OutRangeValue, class FName Start, float Speed_, float Acceleration, ENPCAiMovedState MoveState, class FName EndFlagName_, class FName TalkEvent_ID, int32 EmoteID, class FName Fukidashi_ID, class FString* CSVRowString);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCSplineNaviPoint_C">();
	}
	static class ABP_NPCSplineNaviPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPCSplineNaviPoint_C>();
	}
};
static_assert(alignof(ABP_NPCSplineNaviPoint_C) == 0x000008, "Wrong alignment on ABP_NPCSplineNaviPoint_C");
static_assert(sizeof(ABP_NPCSplineNaviPoint_C) == 0x0002C0, "Wrong size on ABP_NPCSplineNaviPoint_C");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, UberGraphFrame) == 0x000228, "Member 'ABP_NPCSplineNaviPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, TextRender) == 0x000230, "Member 'ABP_NPCSplineNaviPoint_C::TextRender' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, arrow) == 0x000238, "Member 'ABP_NPCSplineNaviPoint_C::arrow' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, Spline) == 0x000240, "Member 'ABP_NPCSplineNaviPoint_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, DefaultSceneRoot) == 0x000248, "Member 'ABP_NPCSplineNaviPoint_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, TargetDataTable) == 0x000250, "Member 'ABP_NPCSplineNaviPoint_C::TargetDataTable' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, CSVHeader) == 0x000258, "Member 'ABP_NPCSplineNaviPoint_C::CSVHeader' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, CSVRowData) == 0x000268, "Member 'ABP_NPCSplineNaviPoint_C::CSVRowData' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, IsExit) == 0x000278, "Member 'ABP_NPCSplineNaviPoint_C::IsExit' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, DestinationPointID) == 0x00027C, "Member 'ABP_NPCSplineNaviPoint_C::DestinationPointID' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, StartFlagName) == 0x000284, "Member 'ABP_NPCSplineNaviPoint_C::StartFlagName' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, EndFlagName) == 0x00028C, "Member 'ABP_NPCSplineNaviPoint_C::EndFlagName' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, Range) == 0x000294, "Member 'ABP_NPCSplineNaviPoint_C::Range' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, OutRange) == 0x000298, "Member 'ABP_NPCSplineNaviPoint_C::OutRange' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, Speed) == 0x00029C, "Member 'ABP_NPCSplineNaviPoint_C::Speed' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, MovedState) == 0x0002A0, "Member 'ABP_NPCSplineNaviPoint_C::MovedState' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, SerifuID) == 0x0002A4, "Member 'ABP_NPCSplineNaviPoint_C::SerifuID' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, WorkPointName) == 0x0002AC, "Member 'ABP_NPCSplineNaviPoint_C::WorkPointName' has a wrong offset!");
static_assert(offsetof(ABP_NPCSplineNaviPoint_C, WorkLocation) == 0x0002B4, "Member 'ABP_NPCSplineNaviPoint_C::WorkLocation' has a wrong offset!");

}

