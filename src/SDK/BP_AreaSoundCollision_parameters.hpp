#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AreaSoundCollision

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AreaSoundCollision.BP_AreaSoundCollision_C.UserConstructionScript
// 0x0080 (0x0080 - 0x0000)
struct BP_AreaSoundCollision_C_UserConstructionScript final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0xF];                                        // 0x0001(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                             Temp_struct_Variable_1;                            // 0x0040(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class UBoxComponent*                          CallFunc_AddComponent_ReturnValue;                 // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       CallFunc_AddComponent_ReturnValue_1;               // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AreaSoundCollision_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_AreaSoundCollision_C_UserConstructionScript");
static_assert(sizeof(BP_AreaSoundCollision_C_UserConstructionScript) == 0x000080, "Wrong size on BP_AreaSoundCollision_C_UserConstructionScript");
static_assert(offsetof(BP_AreaSoundCollision_C_UserConstructionScript, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'BP_AreaSoundCollision_C_UserConstructionScript::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_AreaSoundCollision_C_UserConstructionScript, Temp_struct_Variable) == 0x000010, "Member 'BP_AreaSoundCollision_C_UserConstructionScript::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_AreaSoundCollision_C_UserConstructionScript, Temp_struct_Variable_1) == 0x000040, "Member 'BP_AreaSoundCollision_C_UserConstructionScript::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AreaSoundCollision_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x000070, "Member 'BP_AreaSoundCollision_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AreaSoundCollision_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue_1) == 0x000078, "Member 'BP_AreaSoundCollision_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue_1' has a wrong offset!");

}
