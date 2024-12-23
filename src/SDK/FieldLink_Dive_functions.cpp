#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FieldLink_Dive

#include "Basic.hpp"

#include "FieldLink_Dive_classes.hpp"
#include "FieldLink_Dive_parameters.hpp"


namespace SDK
{

// Function FieldLink_Dive.FieldLink_Dive_C.Enter_Air
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFieldLink_Dive_C::Enter_Air()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldLink_Dive_C", "Enter_Air");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FieldLink_Dive.FieldLink_Dive_C.Enter_Ground
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFieldLink_Dive_C::Enter_Ground()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldLink_Dive_C", "Enter_Ground");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FieldLink_Dive.FieldLink_Dive_C.Exit
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFieldLink_Dive_C::Exit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldLink_Dive_C", "Exit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FieldLink_Dive.FieldLink_Dive_C.Button_A
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRelease                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldLink_Dive_C::Button_A(bool bRelease)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldLink_Dive_C", "Button_A");

	Params::FieldLink_Dive_C_Button_A Parms{};

	Parms.bRelease = bRelease;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FieldLink_Dive.FieldLink_Dive_C.ExecuteUbergraph_FieldLink_Dive
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldLink_Dive_C::ExecuteUbergraph_FieldLink_Dive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FieldLink_Dive_C", "ExecuteUbergraph_FieldLink_Dive");

	Params::FieldLink_Dive_C_ExecuteUbergraph_FieldLink_Dive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

