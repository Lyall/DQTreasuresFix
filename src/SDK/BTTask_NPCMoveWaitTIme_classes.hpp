#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_NPCMoveWaitTIme

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BTTask_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_NPCMoveWaitTIme.BTTask_NPCMoveWaitTIme_C
// 0x0008 (0x0118 - 0x0110)
class UBTTask_NPCMoveWaitTIme_C final : public UBTTask_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BTTask_NPCMoveWaitTIme_C;           // 0x0110(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BTTask_NPCMoveWaitTIme(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_NPCMoveWaitTIme_C">();
	}
	static class UBTTask_NPCMoveWaitTIme_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_NPCMoveWaitTIme_C>();
	}
};
static_assert(alignof(UBTTask_NPCMoveWaitTIme_C) == 0x000008, "Wrong alignment on UBTTask_NPCMoveWaitTIme_C");
static_assert(sizeof(UBTTask_NPCMoveWaitTIme_C) == 0x000118, "Wrong size on UBTTask_NPCMoveWaitTIme_C");
static_assert(offsetof(UBTTask_NPCMoveWaitTIme_C, UberGraphFrame_BTTask_NPCMoveWaitTIme_C) == 0x000110, "Member 'UBTTask_NPCMoveWaitTIme_C::UberGraphFrame_BTTask_NPCMoveWaitTIme_C' has a wrong offset!");

}

