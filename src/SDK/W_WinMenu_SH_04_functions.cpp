#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_WinMenu_SH_04

#include "Basic.hpp"

#include "W_WinMenu_SH_04_classes.hpp"
#include "W_WinMenu_SH_04_parameters.hpp"


namespace SDK
{

// Function W_WinMenu_SH_04.W_WinMenu_SH_04_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_WinMenu_SH_04_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WinMenu_SH_04_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_WinMenu_SH_04.W_WinMenu_SH_04_C.ExecuteUbergraph_W_WinMenu_SH_04
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WinMenu_SH_04_C::ExecuteUbergraph_W_WinMenu_SH_04(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WinMenu_SH_04_C", "ExecuteUbergraph_W_WinMenu_SH_04");

	Params::W_WinMenu_SH_04_C_ExecuteUbergraph_W_WinMenu_SH_04 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

