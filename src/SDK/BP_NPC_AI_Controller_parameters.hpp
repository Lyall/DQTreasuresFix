#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC_AI_Controller

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "DarwinGame_structs.hpp"


namespace SDK::Params
{

// Function BP_NPC_AI_Controller.BP_NPC_AI_Controller_C.ExecuteUbergraph_BP_NPC_AI_Controller
// 0x0110 (0x0110 - 0x0000)
struct BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class ACharacter*                       K2Node_Event_NPCActor;                             // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RunBehaviorTree_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ANPCBase*                               K2Node_DynamicCast_AsNPCBase;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_NPCDataAIParam                     CallFunc_GetNPCAiParam_ReturnValue;                // 0x0030(0x0038)()
	ENPCAiType                                    CallFunc_GetNPCAiType_ReturnValue;                 // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x0084(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_2;            // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_3;            // 0x0094(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_4;            // 0x009C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_5;            // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_6;            // 0x00AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_7;            // 0x00B4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_8;            // 0x00BC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_9;            // 0x00C4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_10;           // 0x00CC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_11;           // 0x00D4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_12;           // 0x00DC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_13;           // 0x00E4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_14;           // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   CallFunc_UseBlackboard_BlackboardComponent;        // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UseBlackboard_ReturnValue;                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller) == 0x000008, "Wrong alignment on BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller");
static_assert(sizeof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller) == 0x000110, "Wrong size on BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, EntryPoint) == 0x000000, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, K2Node_Event_NPCActor) == 0x000008, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::K2Node_Event_NPCActor' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_RunBehaviorTree_ReturnValue) == 0x000010, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_RunBehaviorTree_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, K2Node_DynamicCast_AsNPCBase) == 0x000018, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::K2Node_DynamicCast_AsNPCBase' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000024, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_GetNPCAiParam_ReturnValue) == 0x000030, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_GetNPCAiParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_GetNPCAiType_ReturnValue) == 0x000068, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_GetNPCAiType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00006C, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_MakeLiteralName_ReturnValue) == 0x00007C, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_MakeLiteralName_ReturnValue_1) == 0x000084, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_MakeLiteralName_ReturnValue_2) == 0x00008C, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_MakeLiteralName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_MakeLiteralName_ReturnValue_3) == 0x000094, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_MakeLiteralName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_MakeLiteralName_ReturnValue_4) == 0x00009C, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_MakeLiteralName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_MakeLiteralName_ReturnValue_5) == 0x0000A4, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_MakeLiteralName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_MakeLiteralName_ReturnValue_6) == 0x0000AC, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_MakeLiteralName_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_MakeLiteralName_ReturnValue_7) == 0x0000B4, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_MakeLiteralName_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_MakeLiteralName_ReturnValue_8) == 0x0000BC, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_MakeLiteralName_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_MakeLiteralName_ReturnValue_9) == 0x0000C4, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_MakeLiteralName_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_MakeLiteralName_ReturnValue_10) == 0x0000CC, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_MakeLiteralName_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_MakeLiteralName_ReturnValue_11) == 0x0000D4, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_MakeLiteralName_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_MakeLiteralName_ReturnValue_12) == 0x0000DC, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_MakeLiteralName_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_MakeLiteralName_ReturnValue_13) == 0x0000E4, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_MakeLiteralName_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_GetPlayerPawn_ReturnValue) == 0x0000F0, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_MakeLiteralName_ReturnValue_14) == 0x0000F8, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_MakeLiteralName_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_UseBlackboard_BlackboardComponent) == 0x000100, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_UseBlackboard_BlackboardComponent' has a wrong offset!");
static_assert(offsetof(BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller, CallFunc_UseBlackboard_ReturnValue) == 0x000108, "Member 'BP_NPC_AI_Controller_C_ExecuteUbergraph_BP_NPC_AI_Controller::CallFunc_UseBlackboard_ReturnValue' has a wrong offset!");

// Function BP_NPC_AI_Controller.BP_NPC_AI_Controller_C.NPCAiInit
// 0x0008 (0x0008 - 0x0000)
struct BP_NPC_AI_Controller_C_NPCAiInit final
{
public:
	const class ACharacter*                       NPCActor;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPC_AI_Controller_C_NPCAiInit) == 0x000008, "Wrong alignment on BP_NPC_AI_Controller_C_NPCAiInit");
static_assert(sizeof(BP_NPC_AI_Controller_C_NPCAiInit) == 0x000008, "Wrong size on BP_NPC_AI_Controller_C_NPCAiInit");
static_assert(offsetof(BP_NPC_AI_Controller_C_NPCAiInit, NPCActor) == 0x000000, "Member 'BP_NPC_AI_Controller_C_NPCAiInit::NPCActor' has a wrong offset!");

}
