#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FieldAction

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DarwinGame_structs.hpp"
#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FieldAction.GA_FieldAction_C
// 0x0008 (0x04D0 - 0x04C8)
class UGA_FieldAction_C final : public UFieldActionAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_FieldAction(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_DCD3FE904671D0E9627A0B9F0A3591B3(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_DCD3FE904671D0E9627A0B9F0A3591B3(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_DCD3FE904671D0E9627A0B9F0A3591B3(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_DCD3FE904671D0E9627A0B9F0A3591B3(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void EventReceived_DCD3FE904671D0E9627A0B9F0A3591B3(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_60B2395E474534A1D70442B620EE6C40(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_60B2395E474534A1D70442B620EE6C40(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_60B2395E474534A1D70442B620EE6C40(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_60B2395E474534A1D70442B620EE6C40(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void EventReceived_60B2395E474534A1D70442B620EE6C40(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FieldAction_C">();
	}
	static class UGA_FieldAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FieldAction_C>();
	}
};
static_assert(alignof(UGA_FieldAction_C) == 0x000008, "Wrong alignment on UGA_FieldAction_C");
static_assert(sizeof(UGA_FieldAction_C) == 0x0004D0, "Wrong size on UGA_FieldAction_C");
static_assert(offsetof(UGA_FieldAction_C, UberGraphFrame) == 0x0004C8, "Member 'UGA_FieldAction_C::UberGraphFrame' has a wrong offset!");

}
