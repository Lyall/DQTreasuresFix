#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Damage

#include "Basic.hpp"

#include "GA_Damage_classes.hpp"
#include "GA_Damage_parameters.hpp"


namespace SDK
{

// Function GA_Damage.GA_Damage_C.ExecuteUbergraph_GA_Damage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Damage_C::ExecuteUbergraph_GA_Damage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Damage_C", "ExecuteUbergraph_GA_Damage");

	Params::GA_Damage_C_ExecuteUbergraph_GA_Damage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Damage.GA_Damage_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Damage_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Damage_C", "K2_OnEndAbility");

	Params::GA_Damage_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Damage.GA_Damage_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Damage_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Damage_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Damage.GA_Damage_C.OnCompleted_25391CAE4141FEF67F9286BF5760C0DE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Damage_C::OnCompleted_25391CAE4141FEF67F9286BF5760C0DE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Damage_C", "OnCompleted_25391CAE4141FEF67F9286BF5760C0DE");

	Params::GA_Damage_C_OnCompleted_25391CAE4141FEF67F9286BF5760C0DE Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Damage.GA_Damage_C.OnBlendOut_25391CAE4141FEF67F9286BF5760C0DE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Damage_C::OnBlendOut_25391CAE4141FEF67F9286BF5760C0DE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Damage_C", "OnBlendOut_25391CAE4141FEF67F9286BF5760C0DE");

	Params::GA_Damage_C_OnBlendOut_25391CAE4141FEF67F9286BF5760C0DE Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Damage.GA_Damage_C.OnInterrupted_25391CAE4141FEF67F9286BF5760C0DE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Damage_C::OnInterrupted_25391CAE4141FEF67F9286BF5760C0DE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Damage_C", "OnInterrupted_25391CAE4141FEF67F9286BF5760C0DE");

	Params::GA_Damage_C_OnInterrupted_25391CAE4141FEF67F9286BF5760C0DE Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Damage.GA_Damage_C.OnCancelled_25391CAE4141FEF67F9286BF5760C0DE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Damage_C::OnCancelled_25391CAE4141FEF67F9286BF5760C0DE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Damage_C", "OnCancelled_25391CAE4141FEF67F9286BF5760C0DE");

	Params::GA_Damage_C_OnCancelled_25391CAE4141FEF67F9286BF5760C0DE Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Damage.GA_Damage_C.EventReceived_25391CAE4141FEF67F9286BF5760C0DE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Damage_C::EventReceived_25391CAE4141FEF67F9286BF5760C0DE(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Damage_C", "EventReceived_25391CAE4141FEF67F9286BF5760C0DE");

	Params::GA_Damage_C_EventReceived_25391CAE4141FEF67F9286BF5760C0DE Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}

