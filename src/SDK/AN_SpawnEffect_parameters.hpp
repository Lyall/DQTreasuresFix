#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_SpawnEffect

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AN_SpawnEffect.AN_SpawnEffect_C.Received_Notify
// 0x0040 (0x0040 - 0x0000)
struct AN_SpawnEffect_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_EffectManager_C*                    CallFunc_GetEffectManager_EffectManager;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AEffectBase*                            CallFunc_SpawnAttachComponent_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEffectBase*                            CallFunc_SpawnEffect_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AN_SpawnEffect_C_Received_Notify) == 0x000008, "Wrong alignment on AN_SpawnEffect_C_Received_Notify");
static_assert(sizeof(AN_SpawnEffect_C_Received_Notify) == 0x000040, "Wrong size on AN_SpawnEffect_C_Received_Notify");
static_assert(offsetof(AN_SpawnEffect_C_Received_Notify, MeshComp) == 0x000000, "Member 'AN_SpawnEffect_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AN_SpawnEffect_C_Received_Notify, Animation) == 0x000008, "Member 'AN_SpawnEffect_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AN_SpawnEffect_C_Received_Notify, ReturnValue) == 0x000010, "Member 'AN_SpawnEffect_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_SpawnEffect_C_Received_Notify, CallFunc_NotEqual_NameName_ReturnValue) == 0x000011, "Member 'AN_SpawnEffect_C_Received_Notify::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_SpawnEffect_C_Received_Notify, CallFunc_GetSocketLocation_ReturnValue) == 0x000014, "Member 'AN_SpawnEffect_C_Received_Notify::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_SpawnEffect_C_Received_Notify, CallFunc_GetEffectManager_EffectManager) == 0x000020, "Member 'AN_SpawnEffect_C_Received_Notify::CallFunc_GetEffectManager_EffectManager' has a wrong offset!");
static_assert(offsetof(AN_SpawnEffect_C_Received_Notify, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'AN_SpawnEffect_C_Received_Notify::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_SpawnEffect_C_Received_Notify, CallFunc_SpawnAttachComponent_ReturnValue) == 0x000030, "Member 'AN_SpawnEffect_C_Received_Notify::CallFunc_SpawnAttachComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_SpawnEffect_C_Received_Notify, CallFunc_SpawnEffect_ReturnValue) == 0x000038, "Member 'AN_SpawnEffect_C_Received_Notify::CallFunc_SpawnEffect_ReturnValue' has a wrong offset!");

}
