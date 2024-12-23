#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AS_RotateToInteractTarget

#include "Basic.hpp"


namespace SDK::Params
{

// Function AS_RotateToInteractTarget.AS_RotateToInteractTarget_C.Received_NotifyTick
// 0x0020 (0x0020 - 0x0000)
struct AS_RotateToInteractTarget_C_Received_NotifyTick final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrameDeltaTime;                                    // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AS_RotateToInteractTarget_C_Received_NotifyTick) == 0x000008, "Wrong alignment on AS_RotateToInteractTarget_C_Received_NotifyTick");
static_assert(sizeof(AS_RotateToInteractTarget_C_Received_NotifyTick) == 0x000020, "Wrong size on AS_RotateToInteractTarget_C_Received_NotifyTick");
static_assert(offsetof(AS_RotateToInteractTarget_C_Received_NotifyTick, MeshComp) == 0x000000, "Member 'AS_RotateToInteractTarget_C_Received_NotifyTick::MeshComp' has a wrong offset!");
static_assert(offsetof(AS_RotateToInteractTarget_C_Received_NotifyTick, Animation) == 0x000008, "Member 'AS_RotateToInteractTarget_C_Received_NotifyTick::Animation' has a wrong offset!");
static_assert(offsetof(AS_RotateToInteractTarget_C_Received_NotifyTick, FrameDeltaTime) == 0x000010, "Member 'AS_RotateToInteractTarget_C_Received_NotifyTick::FrameDeltaTime' has a wrong offset!");
static_assert(offsetof(AS_RotateToInteractTarget_C_Received_NotifyTick, ReturnValue) == 0x000014, "Member 'AS_RotateToInteractTarget_C_Received_NotifyTick::ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_RotateToInteractTarget_C_Received_NotifyTick, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AS_RotateToInteractTarget_C_Received_NotifyTick::CallFunc_GetOwner_ReturnValue' has a wrong offset!");

// Function AS_RotateToInteractTarget.AS_RotateToInteractTarget_C.GetNotifyName
// 0x0010 (0x0010 - 0x0000)
struct AS_RotateToInteractTarget_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(AS_RotateToInteractTarget_C_GetNotifyName) == 0x000008, "Wrong alignment on AS_RotateToInteractTarget_C_GetNotifyName");
static_assert(sizeof(AS_RotateToInteractTarget_C_GetNotifyName) == 0x000010, "Wrong size on AS_RotateToInteractTarget_C_GetNotifyName");
static_assert(offsetof(AS_RotateToInteractTarget_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'AS_RotateToInteractTarget_C_GetNotifyName::ReturnValue' has a wrong offset!");

}

