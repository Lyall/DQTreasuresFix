#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_MonsterBattle

#include "Basic.hpp"

#include "DarwinGame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Action_MonsterBattle.BP_Action_MonsterBattle_C.GetTagFromActionID
// 0x0003 (0x0003 - 0x0000)
struct BP_Action_MonsterBattle_C_GetTagFromActionID final
{
public:
	EActionClassType                              Selection;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalTag;                                          // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Action_MonsterBattle_C_GetTagFromActionID) == 0x000001, "Wrong alignment on BP_Action_MonsterBattle_C_GetTagFromActionID");
static_assert(sizeof(BP_Action_MonsterBattle_C_GetTagFromActionID) == 0x000003, "Wrong size on BP_Action_MonsterBattle_C_GetTagFromActionID");
static_assert(offsetof(BP_Action_MonsterBattle_C_GetTagFromActionID, Selection) == 0x000000, "Member 'BP_Action_MonsterBattle_C_GetTagFromActionID::Selection' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_GetTagFromActionID, LocalTag) == 0x000001, "Member 'BP_Action_MonsterBattle_C_GetTagFromActionID::LocalTag' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_GetTagFromActionID, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'BP_Action_MonsterBattle_C_GetTagFromActionID::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_Action_MonsterBattle.BP_Action_MonsterBattle_C.ExecuteUbergraph_BP_Action_MonsterBattle
// 0x00F8 (0x00F8 - 0x0000)
struct BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetRunninngActionOverViewID_ReturnValue;  // 0x0004(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ICharacterInterface>   K2Node_DynamicCast_AsCharacter_Interface;          // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EActionClassType                              CallFunc_GetClassTypeFromOverViewID_ReturnValue;   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ExecuteAbility_ReturnValue;               // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMonsterBoss*                           K2Node_DynamicCast_AsMonster_Boss;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ICharacterInterface>   K2Node_DynamicCast_AsCharacter_Interface_1;        // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ICharacterInterface>   K2Node_DynamicCast_AsCharacter_Interface_2;        // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ExecuteAbility_ReturnValue_1;             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          Temp_object_Variable;                              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDarwinAnimInstance*                    K2Node_DynamicCast_AsDarwin_Anim_Instance;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ERootMotionMode                               CallFunc_GetRootMode_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICharacterInterface>   K2Node_DynamicCast_AsCharacter_Interface_3;        // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ICharacterInterface>   K2Node_DynamicCast_AsCharacter_Interface_4;        // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ICharacterInterface>   K2Node_DynamicCast_AsCharacter_Interface_5;        // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMonster*                               K2Node_DynamicCast_AsMonster;                      // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetRunninngActionOverViewID_ReturnValue_1; // 0x00E8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindBattleMotionData_ReturnValue;         // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle) == 0x000008, "Wrong alignment on BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle");
static_assert(sizeof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle) == 0x0000F8, "Wrong size on BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, EntryPoint) == 0x000000, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, CallFunc_GetRunninngActionOverViewID_ReturnValue) == 0x000004, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::CallFunc_GetRunninngActionOverViewID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_AsCharacter_Interface) == 0x000010, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_AsCharacter_Interface' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, CallFunc_GetClassTypeFromOverViewID_ReturnValue) == 0x000021, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::CallFunc_GetClassTypeFromOverViewID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, CallFunc_ExecuteAbility_ReturnValue) == 0x000022, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::CallFunc_ExecuteAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_SwitchEnum_CmpSuccess) == 0x000023, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_AsMonster_Boss) == 0x000028, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_AsMonster_Boss' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_AsCharacter_Interface_1) == 0x000038, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_AsCharacter_Interface_1' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_bSuccess_2) == 0x000048, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_AsCharacter_Interface_2) == 0x000050, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_AsCharacter_Interface_2' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_bSuccess_3) == 0x000060, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, CallFunc_ExecuteAbility_ReturnValue_1) == 0x000061, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::CallFunc_ExecuteAbility_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, Temp_object_Variable) == 0x000068, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_AsDarwin_Anim_Instance) == 0x000070, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_AsDarwin_Anim_Instance' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_bSuccess_4) == 0x000078, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, CallFunc_GetRootMode_ReturnValue) == 0x000079, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::CallFunc_GetRootMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, CallFunc_GetOwner_ReturnValue) == 0x000080, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_AsCharacter_Interface_3) == 0x000088, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_AsCharacter_Interface_3' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_bSuccess_5) == 0x000098, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_AsCharacter_Interface_4) == 0x0000A0, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_AsCharacter_Interface_4' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_bSuccess_6) == 0x0000B0, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_AsCharacter_Interface_5) == 0x0000B8, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_AsCharacter_Interface_5' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_bSuccess_7) == 0x0000C8, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_AsMonster) == 0x0000D0, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_AsMonster' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, K2Node_DynamicCast_bSuccess_8) == 0x0000D8, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, CallFunc_GetAnimInstance_ReturnValue) == 0x0000E0, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, CallFunc_GetRunninngActionOverViewID_ReturnValue_1) == 0x0000E8, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::CallFunc_GetRunninngActionOverViewID_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle, CallFunc_FindBattleMotionData_ReturnValue) == 0x0000F0, "Member 'BP_Action_MonsterBattle_C_ExecuteUbergraph_BP_Action_MonsterBattle::CallFunc_FindBattleMotionData_ReturnValue' has a wrong offset!");

}
