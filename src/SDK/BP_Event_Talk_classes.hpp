#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Event_Talk

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Event_Talk.BP_Event_Talk_C
// 0x0008 (0x00E0 - 0x00D8)
class UBP_Event_Talk_C final : public UEventStateBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Enter();
	void Exit();
	void ExecuteUbergraph_BP_Event_Talk(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Event_Talk_C">();
	}
	static class UBP_Event_Talk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Event_Talk_C>();
	}
};
static_assert(alignof(UBP_Event_Talk_C) == 0x000008, "Wrong alignment on UBP_Event_Talk_C");
static_assert(sizeof(UBP_Event_Talk_C) == 0x0000E0, "Wrong size on UBP_Event_Talk_C");
static_assert(offsetof(UBP_Event_Talk_C, UberGraphFrame) == 0x0000D8, "Member 'UBP_Event_Talk_C::UberGraphFrame' has a wrong offset!");

}
