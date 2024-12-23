#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PirateShipSea

#include "Basic.hpp"

#include "BP_PirateShipSea_classes.hpp"
#include "BP_PirateShipSea_parameters.hpp"


namespace SDK
{

// Function BP_PirateShipSea.BP_PirateShipSea_C.ExecuteUbergraph_BP_PirateShipSea
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PirateShipSea_C::ExecuteUbergraph_BP_PirateShipSea(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PirateShipSea_C", "ExecuteUbergraph_BP_PirateShipSea");

	Params::BP_PirateShipSea_C_ExecuteUbergraph_BP_PirateShipSea Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PirateShipSea.BP_PirateShipSea_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PirateShipSea_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PirateShipSea_C", "ReceiveTick");

	Params::BP_PirateShipSea_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PirateShipSea.BP_PirateShipSea_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PirateShipSea_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PirateShipSea_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PirateShipSea.BP_PirateShipSea_C.CalcDegree
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AddDegree                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Degree_0                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PirateShipSea_C::CalcDegree(float AddDegree, float* Degree_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PirateShipSea_C", "CalcDegree");

	Params::BP_PirateShipSea_C_CalcDegree Parms{};

	Parms.AddDegree = AddDegree;

	UObject::ProcessEvent(Func, &Parms);

	if (Degree_0 != nullptr)
		*Degree_0 = Parms.Degree_0;
}

}

