#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Damage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Damage.GA_Damage_C
// 0x0018 (0x0438 - 0x0420)
class UGA_Damage_C final : public UActionGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   StartSection;                                      // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGPACharacter*                          Character;                                         // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Damage(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_25391CAE4141FEF67F9286BF5760C0DE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_25391CAE4141FEF67F9286BF5760C0DE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_25391CAE4141FEF67F9286BF5760C0DE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_25391CAE4141FEF67F9286BF5760C0DE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void EventReceived_25391CAE4141FEF67F9286BF5760C0DE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Damage_C">();
	}
	static class UGA_Damage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Damage_C>();
	}
};
static_assert(alignof(UGA_Damage_C) == 0x000008, "Wrong alignment on UGA_Damage_C");
static_assert(sizeof(UGA_Damage_C) == 0x000438, "Wrong size on UGA_Damage_C");
static_assert(offsetof(UGA_Damage_C, UberGraphFrame) == 0x000420, "Member 'UGA_Damage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Damage_C, StartSection) == 0x000428, "Member 'UGA_Damage_C::StartSection' has a wrong offset!");
static_assert(offsetof(UGA_Damage_C, Character) == 0x000430, "Member 'UGA_Damage_C::Character' has a wrong offset!");

}

