#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_NPCMoveTo

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "DarwinGame_structs.hpp"


namespace SDK::Params
{

// Function BTTask_NPCMoveTo.BTTask_NPCMoveTo_C.ExecuteUbergraph_BTTask_NPCMoveTo
// 0x00A8 (0x00A8 - 0x0000)
struct BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetBlackboardValueAsVector_ReturnValue;   // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	EPathFollowingResult                          Temp_byte_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UAIAsyncTaskBlueprintProxy*             CallFunc_CreateMoveToProxyObject_ReturnValue;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult_1;               // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANPCBase*                               K2Node_DynamicCast_AsNPCBase;                      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          CallFunc_GetAIController_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	struct FST_NPCDataAIParam                     CallFunc_GetNPCAiParam_ReturnValue;                // 0x0070(0x0038)()
};
static_assert(alignof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo) == 0x000008, "Wrong alignment on BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo");
static_assert(sizeof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo) == 0x0000A8, "Wrong size on BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo");
static_assert(offsetof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo, EntryPoint) == 0x000000, "Member 'BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo, CallFunc_GetBlackboardValueAsVector_ReturnValue) == 0x000004, "Member 'BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo::CallFunc_GetBlackboardValueAsVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo, K2Node_CustomEvent_MovementResult) == 0x000010, "Member 'BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo::K2Node_CustomEvent_MovementResult' has a wrong offset!");
static_assert(offsetof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo, Temp_byte_Variable) == 0x000024, "Member 'BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo, K2Node_SwitchEnum_CmpSuccess) == 0x000025, "Member 'BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo, CallFunc_CreateMoveToProxyObject_ReturnValue) == 0x000028, "Member 'BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo::CallFunc_CreateMoveToProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo, K2Node_CustomEvent_MovementResult_1) == 0x000031, "Member 'BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo::K2Node_CustomEvent_MovementResult_1' has a wrong offset!");
static_assert(offsetof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo, K2Node_Event_OwnerController) == 0x000038, "Member 'BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo, K2Node_Event_ControlledPawn) == 0x000040, "Member 'BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo, K2Node_DynamicCast_AsNPCBase) == 0x000048, "Member 'BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo::K2Node_DynamicCast_AsNPCBase' has a wrong offset!");
static_assert(offsetof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo, CallFunc_GetAIController_ReturnValue) == 0x000058, "Member 'BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo::CallFunc_GetAIController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo, K2Node_CreateDelegate_OutputDelegate_1) == 0x000060, "Member 'BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo, CallFunc_GetNPCAiParam_ReturnValue) == 0x000070, "Member 'BTTask_NPCMoveTo_C_ExecuteUbergraph_BTTask_NPCMoveTo::CallFunc_GetNPCAiParam_ReturnValue' has a wrong offset!");

// Function BTTask_NPCMoveTo.BTTask_NPCMoveTo_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTTask_NPCMoveTo_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_NPCMoveTo_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTTask_NPCMoveTo_C_ReceiveExecuteAI");
static_assert(sizeof(BTTask_NPCMoveTo_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTTask_NPCMoveTo_C_ReceiveExecuteAI");
static_assert(offsetof(BTTask_NPCMoveTo_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTTask_NPCMoveTo_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_NPCMoveTo_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTTask_NPCMoveTo_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

// Function BTTask_NPCMoveTo.BTTask_NPCMoveTo_C.OnSuccess_2ECBD2D846B1883797C14CB28BE6CBDF
// 0x0001 (0x0001 - 0x0000)
struct BTTask_NPCMoveTo_C_OnSuccess_2ECBD2D846B1883797C14CB28BE6CBDF final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_NPCMoveTo_C_OnSuccess_2ECBD2D846B1883797C14CB28BE6CBDF) == 0x000001, "Wrong alignment on BTTask_NPCMoveTo_C_OnSuccess_2ECBD2D846B1883797C14CB28BE6CBDF");
static_assert(sizeof(BTTask_NPCMoveTo_C_OnSuccess_2ECBD2D846B1883797C14CB28BE6CBDF) == 0x000001, "Wrong size on BTTask_NPCMoveTo_C_OnSuccess_2ECBD2D846B1883797C14CB28BE6CBDF");
static_assert(offsetof(BTTask_NPCMoveTo_C_OnSuccess_2ECBD2D846B1883797C14CB28BE6CBDF, MovementResult) == 0x000000, "Member 'BTTask_NPCMoveTo_C_OnSuccess_2ECBD2D846B1883797C14CB28BE6CBDF::MovementResult' has a wrong offset!");

// Function BTTask_NPCMoveTo.BTTask_NPCMoveTo_C.OnFail_2ECBD2D846B1883797C14CB28BE6CBDF
// 0x0001 (0x0001 - 0x0000)
struct BTTask_NPCMoveTo_C_OnFail_2ECBD2D846B1883797C14CB28BE6CBDF final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_NPCMoveTo_C_OnFail_2ECBD2D846B1883797C14CB28BE6CBDF) == 0x000001, "Wrong alignment on BTTask_NPCMoveTo_C_OnFail_2ECBD2D846B1883797C14CB28BE6CBDF");
static_assert(sizeof(BTTask_NPCMoveTo_C_OnFail_2ECBD2D846B1883797C14CB28BE6CBDF) == 0x000001, "Wrong size on BTTask_NPCMoveTo_C_OnFail_2ECBD2D846B1883797C14CB28BE6CBDF");
static_assert(offsetof(BTTask_NPCMoveTo_C_OnFail_2ECBD2D846B1883797C14CB28BE6CBDF, MovementResult) == 0x000000, "Member 'BTTask_NPCMoveTo_C_OnFail_2ECBD2D846B1883797C14CB28BE6CBDF::MovementResult' has a wrong offset!");

}
