#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LeftMenu_7

#include "Basic.hpp"

#include "W_LeftMenu_7_classes.hpp"
#include "W_LeftMenu_7_parameters.hpp"


namespace SDK
{

// Function W_LeftMenu_7.W_LeftMenu_7_C.ExecuteUbergraph_W_LeftMenu_7
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LeftMenu_7_C::ExecuteUbergraph_W_LeftMenu_7(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LeftMenu_7_C", "ExecuteUbergraph_W_LeftMenu_7");

	Params::W_LeftMenu_7_C_ExecuteUbergraph_W_LeftMenu_7 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_LeftMenu_7.W_LeftMenu_7_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_LeftMenu_7_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LeftMenu_7_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_LeftMenu_7.W_LeftMenu_7_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_LeftMenu_7_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_LeftMenu_7_C", "PreConstruct");

	Params::W_LeftMenu_7_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
