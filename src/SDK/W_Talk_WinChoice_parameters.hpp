#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Talk_WinChoice

#include "Basic.hpp"

#include "DarwinGame_structs.hpp"


namespace SDK::Params
{

// Function W_Talk_WinChoice.W_Talk_WinChoice_C.GetEventType
// 0x0020 (0x0020 - 0x0000)
struct W_Talk_WinChoice_C_GetEventType final
{
public:
	EEventType                                    ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventSystemManager*                    CallFunc_GetInstance_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventExecuter*                         CallFunc_GetEventExecuter_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEventType                                    CallFunc_GetCurrentEventType_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Talk_WinChoice_C_GetEventType) == 0x000008, "Wrong alignment on W_Talk_WinChoice_C_GetEventType");
static_assert(sizeof(W_Talk_WinChoice_C_GetEventType) == 0x000020, "Wrong size on W_Talk_WinChoice_C_GetEventType");
static_assert(offsetof(W_Talk_WinChoice_C_GetEventType, ReturnValue) == 0x000000, "Member 'W_Talk_WinChoice_C_GetEventType::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Talk_WinChoice_C_GetEventType, CallFunc_GetInstance_ReturnValue) == 0x000008, "Member 'W_Talk_WinChoice_C_GetEventType::CallFunc_GetInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Talk_WinChoice_C_GetEventType, CallFunc_GetEventExecuter_ReturnValue) == 0x000010, "Member 'W_Talk_WinChoice_C_GetEventType::CallFunc_GetEventExecuter_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Talk_WinChoice_C_GetEventType, CallFunc_GetCurrentEventType_ReturnValue) == 0x000018, "Member 'W_Talk_WinChoice_C_GetEventType::CallFunc_GetCurrentEventType_ReturnValue' has a wrong offset!");

}
