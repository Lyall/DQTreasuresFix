#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Magic

#include "Basic.hpp"

#include "GA_Magic_classes.hpp"
#include "GA_Magic_parameters.hpp"


namespace SDK
{

// Function GA_Magic.GA_Magic_C.ExecuteUbergraph_GA_Magic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Magic_C::ExecuteUbergraph_GA_Magic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Magic_C", "ExecuteUbergraph_GA_Magic");

	Params::GA_Magic_C_ExecuteUbergraph_GA_Magic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Magic.GA_Magic_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Magic_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Magic_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Magic.GA_Magic_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Magic_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Magic_C", "K2_OnEndAbility");

	Params::GA_Magic_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Magic.GA_Magic_C.OnCompleted_7335D72A48845E85938324AFDA8E71A2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Magic_C::OnCompleted_7335D72A48845E85938324AFDA8E71A2(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Magic_C", "OnCompleted_7335D72A48845E85938324AFDA8E71A2");

	Params::GA_Magic_C_OnCompleted_7335D72A48845E85938324AFDA8E71A2 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Magic.GA_Magic_C.OnBlendOut_7335D72A48845E85938324AFDA8E71A2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Magic_C::OnBlendOut_7335D72A48845E85938324AFDA8E71A2(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Magic_C", "OnBlendOut_7335D72A48845E85938324AFDA8E71A2");

	Params::GA_Magic_C_OnBlendOut_7335D72A48845E85938324AFDA8E71A2 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Magic.GA_Magic_C.OnInterrupted_7335D72A48845E85938324AFDA8E71A2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Magic_C::OnInterrupted_7335D72A48845E85938324AFDA8E71A2(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Magic_C", "OnInterrupted_7335D72A48845E85938324AFDA8E71A2");

	Params::GA_Magic_C_OnInterrupted_7335D72A48845E85938324AFDA8E71A2 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Magic.GA_Magic_C.OnCancelled_7335D72A48845E85938324AFDA8E71A2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Magic_C::OnCancelled_7335D72A48845E85938324AFDA8E71A2(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Magic_C", "OnCancelled_7335D72A48845E85938324AFDA8E71A2");

	Params::GA_Magic_C_OnCancelled_7335D72A48845E85938324AFDA8E71A2 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Magic.GA_Magic_C.EventReceived_7335D72A48845E85938324AFDA8E71A2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Magic_C::EventReceived_7335D72A48845E85938324AFDA8E71A2(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Magic_C", "EventReceived_7335D72A48845E85938324AFDA8E71A2");

	Params::GA_Magic_C_EventReceived_7335D72A48845E85938324AFDA8E71A2 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Magic.GA_Magic_C.IsRampage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             actionDetailID                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Rampage_0                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Magic_C::IsRampage(class FName actionDetailID, bool* Rampage_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Magic_C", "IsRampage");

	Params::GA_Magic_C_IsRampage Parms{};

	Parms.actionDetailID = actionDetailID;

	UObject::ProcessEvent(Func, &Parms);

	if (Rampage_0 != nullptr)
		*Rampage_0 = Parms.Rampage_0;
}

}
