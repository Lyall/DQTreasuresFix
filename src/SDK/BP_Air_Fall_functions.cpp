#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Air_Fall

#include "Basic.hpp"

#include "BP_Air_Fall_classes.hpp"
#include "BP_Air_Fall_parameters.hpp"


namespace SDK
{

// Function BP_Air_Fall.BP_Air_Fall_C.Enter
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_Air_Fall_C::Enter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Air_Fall_C", "Enter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Air_Fall.BP_Air_Fall_C.Exit
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_Air_Fall_C::Exit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Air_Fall_C", "Exit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Air_Fall.BP_Air_Fall_C.Button_Y
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRelease                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Air_Fall_C::Button_Y(bool bRelease)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Air_Fall_C", "Button_Y");

	Params::BP_Air_Fall_C_Button_Y Parms{};

	Parms.bRelease = bRelease;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Air_Fall.BP_Air_Fall_C.Update
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Air_Fall_C::Update(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Air_Fall_C", "Update");

	Params::BP_Air_Fall_C_Update Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Air_Fall.BP_Air_Fall_C.ExecuteUbergraph_BP_Air_Fall
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Air_Fall_C::ExecuteUbergraph_BP_Air_Fall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Air_Fall_C", "ExecuteUbergraph_BP_Air_Fall");

	Params::BP_Air_Fall_C_ExecuteUbergraph_BP_Air_Fall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

