#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Event_Talk

#include "Basic.hpp"

#include "BP_Event_Talk_classes.hpp"
#include "BP_Event_Talk_parameters.hpp"


namespace SDK
{

// Function BP_Event_Talk.BP_Event_Talk_C.Enter
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_Event_Talk_C::Enter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Event_Talk_C", "Enter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Event_Talk.BP_Event_Talk_C.Exit
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_Event_Talk_C::Exit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Event_Talk_C", "Exit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Event_Talk.BP_Event_Talk_C.ExecuteUbergraph_BP_Event_Talk
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Event_Talk_C::ExecuteUbergraph_BP_Event_Talk(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Event_Talk_C", "ExecuteUbergraph_BP_Event_Talk");

	Params::BP_Event_Talk_C_ExecuteUbergraph_BP_Event_Talk Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
