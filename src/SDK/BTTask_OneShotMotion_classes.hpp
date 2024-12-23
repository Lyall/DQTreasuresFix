#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_OneShotMotion

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BTTask_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_OneShotMotion.BTTask_OneShotMotion_C
// 0x0008 (0x0118 - 0x0110)
class UBTTask_OneShotMotion_C final : public UBTTask_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BTTask_OneShotMotion_C;             // 0x0110(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BTTask_OneShotMotion(int32 EntryPoint);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_OneShotMotion_C">();
	}
	static class UBTTask_OneShotMotion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_OneShotMotion_C>();
	}
};
static_assert(alignof(UBTTask_OneShotMotion_C) == 0x000008, "Wrong alignment on UBTTask_OneShotMotion_C");
static_assert(sizeof(UBTTask_OneShotMotion_C) == 0x000118, "Wrong size on UBTTask_OneShotMotion_C");
static_assert(offsetof(UBTTask_OneShotMotion_C, UberGraphFrame_BTTask_OneShotMotion_C) == 0x000110, "Member 'UBTTask_OneShotMotion_C::UberGraphFrame_BTTask_OneShotMotion_C' has a wrong offset!");

}

