#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BossFinishBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "DarwinGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BossFinishBase.BP_BossFinishBase_C
// 0x0058 (0x0280 - 0x0228)
class ABP_BossFinishBase_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    LS_Actor;                                          // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequencePlayer*                   LS_PlayerSystem;                                   // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PostIndex;                                         // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24C[0x4];                                      // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              CEV_Timer;                                         // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          UsePostPcFlag;                                     // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_261[0x7];                                      // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 BossActor_Ref;                                     // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UsePostBossCameraFlag;                             // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_271[0x7];                                      // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraComponent*                       UseCameraComponent;                                // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BossFinishBase(int32 EntryPoint);
	void ReceiveBeginPlay();
	void CEV_PlayStart();
	void Post_ClearPostMaterial();
	void Pre_UsePostMaterial();
	void Delegate_FisnishOnStop();
	void FC_SetStartPosition();
	void FC_PC_Pause();
	void FC_PC_Resume();
	void FC_PostDestroys();
	void FC_UsePostMaterial();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BossFinishBase_C">();
	}
	static class ABP_BossFinishBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BossFinishBase_C>();
	}
};
static_assert(alignof(ABP_BossFinishBase_C) == 0x000008, "Wrong alignment on ABP_BossFinishBase_C");
static_assert(sizeof(ABP_BossFinishBase_C) == 0x000280, "Wrong size on ABP_BossFinishBase_C");
static_assert(offsetof(ABP_BossFinishBase_C, UberGraphFrame) == 0x000228, "Member 'ABP_BossFinishBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BossFinishBase_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_BossFinishBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_BossFinishBase_C, LS_Actor) == 0x000238, "Member 'ABP_BossFinishBase_C::LS_Actor' has a wrong offset!");
static_assert(offsetof(ABP_BossFinishBase_C, LS_PlayerSystem) == 0x000240, "Member 'ABP_BossFinishBase_C::LS_PlayerSystem' has a wrong offset!");
static_assert(offsetof(ABP_BossFinishBase_C, PostIndex) == 0x000248, "Member 'ABP_BossFinishBase_C::PostIndex' has a wrong offset!");
static_assert(offsetof(ABP_BossFinishBase_C, CEV_Timer) == 0x000250, "Member 'ABP_BossFinishBase_C::CEV_Timer' has a wrong offset!");
static_assert(offsetof(ABP_BossFinishBase_C, UsePostPcFlag) == 0x000260, "Member 'ABP_BossFinishBase_C::UsePostPcFlag' has a wrong offset!");
static_assert(offsetof(ABP_BossFinishBase_C, BossActor_Ref) == 0x000268, "Member 'ABP_BossFinishBase_C::BossActor_Ref' has a wrong offset!");
static_assert(offsetof(ABP_BossFinishBase_C, UsePostBossCameraFlag) == 0x000270, "Member 'ABP_BossFinishBase_C::UsePostBossCameraFlag' has a wrong offset!");
static_assert(offsetof(ABP_BossFinishBase_C, UseCameraComponent) == 0x000278, "Member 'ABP_BossFinishBase_C::UseCameraComponent' has a wrong offset!");

}
