#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Action_Link

#include "Basic.hpp"

#include "Action_Link_classes.hpp"
#include "Action_Link_parameters.hpp"


namespace SDK
{

// Function Action_Link.Action_Link_C.Enter_Ground
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAction_Link_C::Enter_Ground()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Link_C", "Enter_Ground");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Action_Link.Action_Link_C.Enter_Air
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAction_Link_C::Enter_Air()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Link_C", "Enter_Air");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Action_Link.Action_Link_C.Cancel
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAction_Link_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Link_C", "Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Action_Link.Action_Link_C.Exit
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAction_Link_C::Exit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Link_C", "Exit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Action_Link.Action_Link_C.Button_B
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRelease                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Link_C::Button_B(bool bRelease)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Link_C", "Button_B");

	Params::Action_Link_C_Button_B Parms{};

	Parms.bRelease = bRelease;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Action_Link.Action_Link_C.Button_L
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRelease                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Link_C::Button_L(bool bRelease)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Link_C", "Button_L");

	Params::Action_Link_C_Button_L Parms{};

	Parms.bRelease = bRelease;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Action_Link.Action_Link_C.Button_X
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRelease                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Link_C::Button_X(bool bRelease)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Link_C", "Button_X");

	Params::Action_Link_C_Button_X Parms{};

	Parms.bRelease = bRelease;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Action_Link.Action_Link_C.Button_Y
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRelease                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Link_C::Button_Y(bool bRelease)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Link_C", "Button_Y");

	Params::Action_Link_C_Button_Y Parms{};

	Parms.bRelease = bRelease;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Action_Link.Action_Link_C.Button_A
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRelease                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Link_C::Button_A(bool bRelease)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Link_C", "Button_A");

	Params::Action_Link_C_Button_A Parms{};

	Parms.bRelease = bRelease;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Action_Link.Action_Link_C.Button_R
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRelease                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Link_C::Button_R(bool bRelease)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Link_C", "Button_R");

	Params::Action_Link_C_Button_R Parms{};

	Parms.bRelease = bRelease;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Action_Link.Action_Link_C.ExecuteUbergraph_Action_Link
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Link_C::ExecuteUbergraph_Action_Link(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Link_C", "ExecuteUbergraph_Action_Link");

	Params::Action_Link_C_ExecuteUbergraph_Action_Link Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

