#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Magic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DarwinGame_structs.hpp"
#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Magic.GA_Magic_C
// 0x0030 (0x0450 - 0x0420)
class UGA_Magic_C final : public UActionGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AGPACharacter*                          Character;                                         // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEffectBase*                            MagicEffect;                                       // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MagicalAttackData                  MagicalData;                                       // 0x0438(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          Rampage;                                           // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Magic(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnCompleted_7335D72A48845E85938324AFDA8E71A2(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_7335D72A48845E85938324AFDA8E71A2(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_7335D72A48845E85938324AFDA8E71A2(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_7335D72A48845E85938324AFDA8E71A2(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void EventReceived_7335D72A48845E85938324AFDA8E71A2(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void IsRampage(class FName actionDetailID, bool* Rampage_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Magic_C">();
	}
	static class UGA_Magic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Magic_C>();
	}
};
static_assert(alignof(UGA_Magic_C) == 0x000008, "Wrong alignment on UGA_Magic_C");
static_assert(sizeof(UGA_Magic_C) == 0x000450, "Wrong size on UGA_Magic_C");
static_assert(offsetof(UGA_Magic_C, UberGraphFrame) == 0x000420, "Member 'UGA_Magic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Magic_C, Character) == 0x000428, "Member 'UGA_Magic_C::Character' has a wrong offset!");
static_assert(offsetof(UGA_Magic_C, MagicEffect) == 0x000430, "Member 'UGA_Magic_C::MagicEffect' has a wrong offset!");
static_assert(offsetof(UGA_Magic_C, MagicalData) == 0x000438, "Member 'UGA_Magic_C::MagicalData' has a wrong offset!");
static_assert(offsetof(UGA_Magic_C, Rampage) == 0x000448, "Member 'UGA_Magic_C::Rampage' has a wrong offset!");

}

