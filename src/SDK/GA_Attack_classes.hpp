#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Attack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DarwinGame_structs.hpp"
#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Attack.GA_Attack_C
// 0x0050 (0x0470 - 0x0420)
class UGA_Attack_C final : public UActionGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FString>                         EffectHandleIDList;                                // 0x0428(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FString>                         AttackCollisionIDList;                             // 0x0438(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                           TimeHandle;                                        // 0x0448(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AGPACharacter*                          Character;                                         // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MagicalAttackData                  MagicalData;                                       // 0x0458(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsCallBroadcast;                                   // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Attack(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnCompleted_FC9069564BFAEF0FB3CBA5A4DA33C276(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_FC9069564BFAEF0FB3CBA5A4DA33C276(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_FC9069564BFAEF0FB3CBA5A4DA33C276(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_FC9069564BFAEF0FB3CBA5A4DA33C276(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void EventReceived_FC9069564BFAEF0FB3CBA5A4DA33C276(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void DeleteAttackCollision();
	void DeleteAllAttackCollision();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Attack_C">();
	}
	static class UGA_Attack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Attack_C>();
	}
};
static_assert(alignof(UGA_Attack_C) == 0x000008, "Wrong alignment on UGA_Attack_C");
static_assert(sizeof(UGA_Attack_C) == 0x000470, "Wrong size on UGA_Attack_C");
static_assert(offsetof(UGA_Attack_C, UberGraphFrame) == 0x000420, "Member 'UGA_Attack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Attack_C, EffectHandleIDList) == 0x000428, "Member 'UGA_Attack_C::EffectHandleIDList' has a wrong offset!");
static_assert(offsetof(UGA_Attack_C, AttackCollisionIDList) == 0x000438, "Member 'UGA_Attack_C::AttackCollisionIDList' has a wrong offset!");
static_assert(offsetof(UGA_Attack_C, TimeHandle) == 0x000448, "Member 'UGA_Attack_C::TimeHandle' has a wrong offset!");
static_assert(offsetof(UGA_Attack_C, Character) == 0x000450, "Member 'UGA_Attack_C::Character' has a wrong offset!");
static_assert(offsetof(UGA_Attack_C, MagicalData) == 0x000458, "Member 'UGA_Attack_C::MagicalData' has a wrong offset!");
static_assert(offsetof(UGA_Attack_C, IsCallBroadcast) == 0x000468, "Member 'UGA_Attack_C::IsCallBroadcast' has a wrong offset!");

}
