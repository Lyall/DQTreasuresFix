#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ground_Dive

#include "Basic.hpp"

#include "Ground_Dive_classes.hpp"
#include "Ground_Dive_parameters.hpp"


namespace SDK
{

// Function Ground_Dive.Ground_Dive_C.Enter
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGround_Dive_C::Enter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ground_Dive_C", "Enter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ground_Dive.Ground_Dive_C.Exit
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGround_Dive_C::Exit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ground_Dive_C", "Exit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ground_Dive.Ground_Dive_C.Update
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGround_Dive_C::Update(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ground_Dive_C", "Update");

	Params::Ground_Dive_C_Update Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ground_Dive.Ground_Dive_C.ExecuteUbergraph_Ground_Dive
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGround_Dive_C::ExecuteUbergraph_Ground_Dive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ground_Dive_C", "ExecuteUbergraph_Ground_Dive");

	Params::Ground_Dive_C_ExecuteUbergraph_Ground_Dive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

