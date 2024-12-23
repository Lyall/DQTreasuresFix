#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Attack

#include "Basic.hpp"

#include "GA_Attack_classes.hpp"
#include "GA_Attack_parameters.hpp"


namespace SDK
{

// Function GA_Attack.GA_Attack_C.ExecuteUbergraph_GA_Attack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Attack_C::ExecuteUbergraph_GA_Attack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_C", "ExecuteUbergraph_GA_Attack");

	Params::GA_Attack_C_ExecuteUbergraph_GA_Attack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Attack.GA_Attack_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Attack_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Attack.GA_Attack_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Attack_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_C", "K2_OnEndAbility");

	Params::GA_Attack_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Attack.GA_Attack_C.OnCompleted_FC9069564BFAEF0FB3CBA5A4DA33C276
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Attack_C::OnCompleted_FC9069564BFAEF0FB3CBA5A4DA33C276(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_C", "OnCompleted_FC9069564BFAEF0FB3CBA5A4DA33C276");

	Params::GA_Attack_C_OnCompleted_FC9069564BFAEF0FB3CBA5A4DA33C276 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Attack.GA_Attack_C.OnBlendOut_FC9069564BFAEF0FB3CBA5A4DA33C276
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Attack_C::OnBlendOut_FC9069564BFAEF0FB3CBA5A4DA33C276(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_C", "OnBlendOut_FC9069564BFAEF0FB3CBA5A4DA33C276");

	Params::GA_Attack_C_OnBlendOut_FC9069564BFAEF0FB3CBA5A4DA33C276 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Attack.GA_Attack_C.OnInterrupted_FC9069564BFAEF0FB3CBA5A4DA33C276
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Attack_C::OnInterrupted_FC9069564BFAEF0FB3CBA5A4DA33C276(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_C", "OnInterrupted_FC9069564BFAEF0FB3CBA5A4DA33C276");

	Params::GA_Attack_C_OnInterrupted_FC9069564BFAEF0FB3CBA5A4DA33C276 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Attack.GA_Attack_C.OnCancelled_FC9069564BFAEF0FB3CBA5A4DA33C276
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Attack_C::OnCancelled_FC9069564BFAEF0FB3CBA5A4DA33C276(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_C", "OnCancelled_FC9069564BFAEF0FB3CBA5A4DA33C276");

	Params::GA_Attack_C_OnCancelled_FC9069564BFAEF0FB3CBA5A4DA33C276 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Attack.GA_Attack_C.EventReceived_FC9069564BFAEF0FB3CBA5A4DA33C276
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Attack_C::EventReceived_FC9069564BFAEF0FB3CBA5A4DA33C276(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_C", "EventReceived_FC9069564BFAEF0FB3CBA5A4DA33C276");

	Params::GA_Attack_C_EventReceived_FC9069564BFAEF0FB3CBA5A4DA33C276 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Attack.GA_Attack_C.DeleteAttackCollision
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Attack_C::DeleteAttackCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_C", "DeleteAttackCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Attack.GA_Attack_C.DeleteAllAttackCollision
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Attack_C::DeleteAllAttackCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Attack_C", "DeleteAllAttackCollision");

	UObject::ProcessEvent(Func, nullptr);
}

}

