#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_SetTraceTarget

#include "Basic.hpp"

#include "BTS_SetTraceTarget_classes.hpp"
#include "BTS_SetTraceTarget_parameters.hpp"


namespace SDK
{

// Function BTS_SetTraceTarget.BTS_SetTraceTarget_C.ExecuteUbergraph_BTS_SetTraceTarget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_SetTraceTarget_C::ExecuteUbergraph_BTS_SetTraceTarget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_SetTraceTarget_C", "ExecuteUbergraph_BTS_SetTraceTarget");

	Params::BTS_SetTraceTarget_C_ExecuteUbergraph_BTS_SetTraceTarget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTS_SetTraceTarget.BTS_SetTraceTarget_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTS_SetTraceTarget_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTS_SetTraceTarget_C", "ReceiveActivationAI");

	Params::BTS_SetTraceTarget_C_ReceiveActivationAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}
