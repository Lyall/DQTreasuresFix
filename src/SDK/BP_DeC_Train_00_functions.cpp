#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeC_Train_00

#include "Basic.hpp"

#include "BP_DeC_Train_00_classes.hpp"
#include "BP_DeC_Train_00_parameters.hpp"


namespace SDK
{

// Function BP_DeC_Train_00.BP_DeC_Train_00_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DeC_Train_00_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeC_Train_00_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeC_Train_00.BP_DeC_Train_00_C.ExecuteUbergraph_BP_DeC_Train_00
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeC_Train_00_C::ExecuteUbergraph_BP_DeC_Train_00(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeC_Train_00_C", "ExecuteUbergraph_BP_DeC_Train_00");

	Params::BP_DeC_Train_00_C_ExecuteUbergraph_BP_DeC_Train_00 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

