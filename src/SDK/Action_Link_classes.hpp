#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Action_Link

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Action_Link.Action_Link_C
// 0x0010 (0x0140 - 0x0130)
class UAction_Link_C final : public UActionStateBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Executed;                                          // 0x0138(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSuccessed;                                        // 0x0139(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Canceled;                                          // 0x013A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Enter_Ground();
	void Enter_Air();
	void Cancel();
	void Exit();
	void Button_B(bool bRelease);
	void Button_L(bool bRelease);
	void Button_X(bool bRelease);
	void Button_Y(bool bRelease);
	void Button_A(bool bRelease);
	void Button_R(bool bRelease);
	void ExecuteUbergraph_Action_Link(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Action_Link_C">();
	}
	static class UAction_Link_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAction_Link_C>();
	}
};
static_assert(alignof(UAction_Link_C) == 0x000008, "Wrong alignment on UAction_Link_C");
static_assert(sizeof(UAction_Link_C) == 0x000140, "Wrong size on UAction_Link_C");
static_assert(offsetof(UAction_Link_C, UberGraphFrame) == 0x000130, "Member 'UAction_Link_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAction_Link_C, Executed) == 0x000138, "Member 'UAction_Link_C::Executed' has a wrong offset!");
static_assert(offsetof(UAction_Link_C, bSuccessed) == 0x000139, "Member 'UAction_Link_C::bSuccessed' has a wrong offset!");
static_assert(offsetof(UAction_Link_C, Canceled) == 0x00013A, "Member 'UAction_Link_C::Canceled' has a wrong offset!");

}
