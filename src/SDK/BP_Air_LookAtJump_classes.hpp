#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Air_LookAtJump

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Air_Jump_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Air_LookAtJump.BP_Air_LookAtJump_C
// 0x0008 (0x01B8 - 0x01B0)
class UBP_Air_LookAtJump_C final : public UBP_Air_Jump_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Air_LookAtJump_C;                // 0x01B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Exit();
	void ExecuteUbergraph_BP_Air_LookAtJump(int32 EntryPoint);

	struct FVector CalculateJumpVelocity() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Air_LookAtJump_C">();
	}
	static class UBP_Air_LookAtJump_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Air_LookAtJump_C>();
	}
};
static_assert(alignof(UBP_Air_LookAtJump_C) == 0x000008, "Wrong alignment on UBP_Air_LookAtJump_C");
static_assert(sizeof(UBP_Air_LookAtJump_C) == 0x0001B8, "Wrong size on UBP_Air_LookAtJump_C");
static_assert(offsetof(UBP_Air_LookAtJump_C, UberGraphFrame_BP_Air_LookAtJump_C) == 0x0001B0, "Member 'UBP_Air_LookAtJump_C::UberGraphFrame_BP_Air_LookAtJump_C' has a wrong offset!");

}
