#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GS_PirateShip_001

#include "Basic.hpp"

#include "BP_GS_PirateShip_001_classes.hpp"
#include "BP_GS_PirateShip_001_parameters.hpp"


namespace SDK
{

// Function BP_GS_PirateShip_001.BP_GS_PirateShip_001_C.ExecuteUbergraph_BP_GS_PirateShip_001
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GS_PirateShip_001_C::ExecuteUbergraph_BP_GS_PirateShip_001(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GS_PirateShip_001_C", "ExecuteUbergraph_BP_GS_PirateShip_001");

	Params::BP_GS_PirateShip_001_C_ExecuteUbergraph_BP_GS_PirateShip_001 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GS_PirateShip_001.BP_GS_PirateShip_001_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GS_PirateShip_001_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GS_PirateShip_001_C", "ReceiveTick");

	Params::BP_GS_PirateShip_001_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GS_PirateShip_001.BP_GS_PirateShip_001_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GS_PirateShip_001_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GS_PirateShip_001_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

