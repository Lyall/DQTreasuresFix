#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Sign_IconExp

#include "Basic.hpp"

#include "W_Sign_IconExp_classes.hpp"
#include "W_Sign_IconExp_parameters.hpp"


namespace SDK
{

// Function W_Sign_IconExp.W_Sign_IconExp_C.SetExpValue
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Sign_IconExp_C::SetExpValue(int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Sign_IconExp_C", "SetExpValue");

	Params::W_Sign_IconExp_C_SetExpValue Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Sign_IconExp.W_Sign_IconExp_C.WidgetAnimationEvt_In_Out_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UW_Sign_IconExp_C::WidgetAnimationEvt_In_Out_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Sign_IconExp_C", "WidgetAnimationEvt_In_Out_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Sign_IconExp.W_Sign_IconExp_C.ExecuteUbergraph_W_Sign_IconExp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Sign_IconExp_C::ExecuteUbergraph_W_Sign_IconExp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Sign_IconExp_C", "ExecuteUbergraph_W_Sign_IconExp");

	Params::W_Sign_IconExp_C_ExecuteUbergraph_W_Sign_IconExp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
