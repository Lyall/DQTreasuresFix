#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Action_Field

#include "Basic.hpp"

#include "Action_Field_classes.hpp"
#include "Action_Field_parameters.hpp"


namespace SDK
{

// Function Action_Field.Action_Field_C.Button_Down
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRelease                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Field_C::Button_Down(bool bRelease)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Field_C", "Button_Down");

	Params::Action_Field_C_Button_Down Parms{};

	Parms.bRelease = bRelease;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Action_Field.Action_Field_C.ExecuteUbergraph_Action_Field
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Field_C::ExecuteUbergraph_Action_Field(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Field_C", "ExecuteUbergraph_Action_Field");

	Params::Action_Field_C_ExecuteUbergraph_Action_Field Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Action_Field.Action_Field_C.Enter_Ground
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAction_Field_C::Enter_Ground()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Field_C", "Enter_Ground");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Action_Field.Action_Field_C.Enter_Air
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAction_Field_C::Enter_Air()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Field_C", "Enter_Air");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Action_Field.Action_Field_C.Cancel
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAction_Field_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Field_C", "Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Action_Field.Action_Field_C.OnLand
// (Event, Protected, BlueprintEvent)

void UAction_Field_C::OnLand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Field_C", "OnLand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Action_Field.Action_Field_C.Exit
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAction_Field_C::Exit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Field_C", "Exit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Action_Field.Action_Field_C.Button_B
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRelease                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Field_C::Button_B(bool bRelease)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Field_C", "Button_B");

	Params::Action_Field_C_Button_B Parms{};

	Parms.bRelease = bRelease;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Action_Field.Action_Field_C.Button_L
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRelease                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Field_C::Button_L(bool bRelease)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Field_C", "Button_L");

	Params::Action_Field_C_Button_L Parms{};

	Parms.bRelease = bRelease;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Action_Field.Action_Field_C.EndInteract
// (BlueprintCallable, BlueprintEvent)

void UAction_Field_C::EndInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Field_C", "EndInteract");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Action_Field.Action_Field_C.Button_X
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRelease                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Field_C::Button_X(bool bRelease)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Field_C", "Button_X");

	Params::Action_Field_C_Button_X Parms{};

	Parms.bRelease = bRelease;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Action_Field.Action_Field_C.Button_Y
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRelease                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Field_C::Button_Y(bool bRelease)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Field_C", "Button_Y");

	Params::Action_Field_C_Button_Y Parms{};

	Parms.bRelease = bRelease;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Action_Field.Action_Field_C.Button_A
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRelease                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Field_C::Button_A(bool bRelease)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Field_C", "Button_A");

	Params::Action_Field_C_Button_A Parms{};

	Parms.bRelease = bRelease;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Action_Field.Action_Field_C.Button_Up
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRelease                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Field_C::Button_Up(bool bRelease)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Action_Field_C", "Button_Up");

	Params::Action_Field_C_Button_Up Parms{};

	Parms.bRelease = bRelease;

	UObject::ProcessEvent(Func, &Parms);
}

}

