#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VolcanoGimmicks

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VolcanoGimmicks.BP_VolcanoGimmicks_C
// 0x00A0 (0x02C8 - 0x0228)
class ABP_VolcanoGimmicks_C final : public ABossGimmicks
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       FixedPos03;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       FixedPos02;                                        // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       FixedPos01;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       AreaCircle;                                        // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_VolcanoPillarSet6;                              // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_VolcanoPillarSet5;                              // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_VolcanoPillarSet4;                              // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_VolcanoPillarSet3;                              // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_VolcanoPillarSet2;                              // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_VolcanoPillarSet1;                              // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          GetBoss;                                           // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291[0x7];                                      // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMonsterBoss*                           MonsterBoss;                                       // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_VolcanoPillarSet_C*>         Pillers;                                           // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FVector>                        fixedpos;                                          // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          PlayingBgm;                                        // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C1[0x3];                                      // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BreakGimmickCount;                                 // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void HitCheckGimmick(const struct FVector& Location, float Radius);
	void HitCheckPillar(const struct FVector& Location, float Radius);
	void AddFixedPos(class UActorComponent* fixedpos_0);
	void HitCheckStepStones(const struct FVector& Location, float Radius);
	void AddPillar(class UChildActorComponent* self2);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Initialize();
	void Update();
	void HitGimmickCheck(const struct FVector& Location, float Radius);
	void ExecuteUbergraph_BP_VolcanoGimmicks(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VolcanoGimmicks_C">();
	}
	static class ABP_VolcanoGimmicks_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VolcanoGimmicks_C>();
	}
};
static_assert(alignof(ABP_VolcanoGimmicks_C) == 0x000008, "Wrong alignment on ABP_VolcanoGimmicks_C");
static_assert(sizeof(ABP_VolcanoGimmicks_C) == 0x0002C8, "Wrong size on ABP_VolcanoGimmicks_C");
static_assert(offsetof(ABP_VolcanoGimmicks_C, UberGraphFrame) == 0x000228, "Member 'ABP_VolcanoGimmicks_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, Box) == 0x000230, "Member 'ABP_VolcanoGimmicks_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, FixedPos03) == 0x000238, "Member 'ABP_VolcanoGimmicks_C::FixedPos03' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, FixedPos02) == 0x000240, "Member 'ABP_VolcanoGimmicks_C::FixedPos02' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, FixedPos01) == 0x000248, "Member 'ABP_VolcanoGimmicks_C::FixedPos01' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, AreaCircle) == 0x000250, "Member 'ABP_VolcanoGimmicks_C::AreaCircle' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, BP_VolcanoPillarSet6) == 0x000258, "Member 'ABP_VolcanoGimmicks_C::BP_VolcanoPillarSet6' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, BP_VolcanoPillarSet5) == 0x000260, "Member 'ABP_VolcanoGimmicks_C::BP_VolcanoPillarSet5' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, BP_VolcanoPillarSet4) == 0x000268, "Member 'ABP_VolcanoGimmicks_C::BP_VolcanoPillarSet4' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, BP_VolcanoPillarSet3) == 0x000270, "Member 'ABP_VolcanoGimmicks_C::BP_VolcanoPillarSet3' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, BP_VolcanoPillarSet2) == 0x000278, "Member 'ABP_VolcanoGimmicks_C::BP_VolcanoPillarSet2' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, BP_VolcanoPillarSet1) == 0x000280, "Member 'ABP_VolcanoGimmicks_C::BP_VolcanoPillarSet1' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, DefaultSceneRoot) == 0x000288, "Member 'ABP_VolcanoGimmicks_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, GetBoss) == 0x000290, "Member 'ABP_VolcanoGimmicks_C::GetBoss' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, MonsterBoss) == 0x000298, "Member 'ABP_VolcanoGimmicks_C::MonsterBoss' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, Pillers) == 0x0002A0, "Member 'ABP_VolcanoGimmicks_C::Pillers' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, fixedpos) == 0x0002B0, "Member 'ABP_VolcanoGimmicks_C::fixedpos' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, PlayingBgm) == 0x0002C0, "Member 'ABP_VolcanoGimmicks_C::PlayingBgm' has a wrong offset!");
static_assert(offsetof(ABP_VolcanoGimmicks_C, BreakGimmickCount) == 0x0002C4, "Member 'ABP_VolcanoGimmicks_C::BreakGimmickCount' has a wrong offset!");

}
