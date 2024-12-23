#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Dodge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Dodge.GA_Dodge_C
// 0x0020 (0x0440 - 0x0420)
class UGA_Dodge_C final : public UActionGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AGPACharacter*                          Character;                                         // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PrevRootScale;                                     // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            EffectHandle;                                      // 0x0434(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Dodge(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void EventReceived_25BCB00D4EF3AAD01972C7ABFA2D04C5(const struct FGameplayEventData& Payload);
	void OnCompleted_89F155064F1FEAF37E66A9AF566FDFFC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_89F155064F1FEAF37E66A9AF566FDFFC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_89F155064F1FEAF37E66A9AF566FDFFC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_89F155064F1FEAF37E66A9AF566FDFFC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void EventReceived_89F155064F1FEAF37E66A9AF566FDFFC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void isSwim(bool* isSwim_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Dodge_C">();
	}
	static class UGA_Dodge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Dodge_C>();
	}
};
static_assert(alignof(UGA_Dodge_C) == 0x000008, "Wrong alignment on UGA_Dodge_C");
static_assert(sizeof(UGA_Dodge_C) == 0x000440, "Wrong size on UGA_Dodge_C");
static_assert(offsetof(UGA_Dodge_C, UberGraphFrame) == 0x000420, "Member 'UGA_Dodge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Dodge_C, Character) == 0x000428, "Member 'UGA_Dodge_C::Character' has a wrong offset!");
static_assert(offsetof(UGA_Dodge_C, PrevRootScale) == 0x000430, "Member 'UGA_Dodge_C::PrevRootScale' has a wrong offset!");
static_assert(offsetof(UGA_Dodge_C, EffectHandle) == 0x000434, "Member 'UGA_Dodge_C::EffectHandle' has a wrong offset!");

}

