#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Parkour

#include "Basic.hpp"

#include "GA_Parkour_classes.hpp"
#include "GA_Parkour_parameters.hpp"


namespace SDK
{

// Function GA_Parkour.GA_Parkour_C.ExecuteUbergraph_GA_Parkour
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Parkour_C::ExecuteUbergraph_GA_Parkour(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Parkour_C", "ExecuteUbergraph_GA_Parkour");

	Params::GA_Parkour_C_ExecuteUbergraph_GA_Parkour Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Parkour.GA_Parkour_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Parkour_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Parkour_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Parkour.GA_Parkour_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Parkour_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Parkour_C", "K2_OnEndAbility");

	Params::GA_Parkour_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Parkour.GA_Parkour_C.OnCompleted_F6D99E3E4B00D6B616AA3BB892C64D8D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Parkour_C::OnCompleted_F6D99E3E4B00D6B616AA3BB892C64D8D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Parkour_C", "OnCompleted_F6D99E3E4B00D6B616AA3BB892C64D8D");

	Params::GA_Parkour_C_OnCompleted_F6D99E3E4B00D6B616AA3BB892C64D8D Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Parkour.GA_Parkour_C.OnBlendOut_F6D99E3E4B00D6B616AA3BB892C64D8D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Parkour_C::OnBlendOut_F6D99E3E4B00D6B616AA3BB892C64D8D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Parkour_C", "OnBlendOut_F6D99E3E4B00D6B616AA3BB892C64D8D");

	Params::GA_Parkour_C_OnBlendOut_F6D99E3E4B00D6B616AA3BB892C64D8D Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Parkour.GA_Parkour_C.OnInterrupted_F6D99E3E4B00D6B616AA3BB892C64D8D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Parkour_C::OnInterrupted_F6D99E3E4B00D6B616AA3BB892C64D8D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Parkour_C", "OnInterrupted_F6D99E3E4B00D6B616AA3BB892C64D8D");

	Params::GA_Parkour_C_OnInterrupted_F6D99E3E4B00D6B616AA3BB892C64D8D Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Parkour.GA_Parkour_C.OnCancelled_F6D99E3E4B00D6B616AA3BB892C64D8D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Parkour_C::OnCancelled_F6D99E3E4B00D6B616AA3BB892C64D8D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Parkour_C", "OnCancelled_F6D99E3E4B00D6B616AA3BB892C64D8D");

	Params::GA_Parkour_C_OnCancelled_F6D99E3E4B00D6B616AA3BB892C64D8D Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Parkour.GA_Parkour_C.EventReceived_F6D99E3E4B00D6B616AA3BB892C64D8D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Parkour_C::EventReceived_F6D99E3E4B00D6B616AA3BB892C64D8D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Parkour_C", "EventReceived_F6D99E3E4B00D6B616AA3BB892C64D8D");

	Params::GA_Parkour_C_EventReceived_F6D99E3E4B00D6B616AA3BB892C64D8D Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}
