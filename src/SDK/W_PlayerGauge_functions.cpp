#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PlayerGauge

#include "Basic.hpp"

#include "W_PlayerGauge_classes.hpp"
#include "W_PlayerGauge_parameters.hpp"


namespace SDK
{

// Function W_PlayerGauge.W_PlayerGauge_C.SetGauge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayerGauge_C::SetGauge(float Param, float MaxParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlayerGauge_C", "SetGauge");

	Params::W_PlayerGauge_C_SetGauge Parms{};

	Parms.Param = Param;
	Parms.MaxParam = MaxParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PlayerGauge.W_PlayerGauge_C.ExecuteUbergraph_W_PlayerGauge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayerGauge_C::ExecuteUbergraph_W_PlayerGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlayerGauge_C", "ExecuteUbergraph_W_PlayerGauge");

	Params::W_PlayerGauge_C_ExecuteUbergraph_W_PlayerGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
