#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CoinMenu_Top_01

#include "Basic.hpp"

#include "W_CoinMenu_Top_01_classes.hpp"
#include "W_CoinMenu_Top_01_parameters.hpp"


namespace SDK
{

// Function W_CoinMenu_Top_01.W_CoinMenu_Top_01_C.ExecuteUbergraph_W_CoinMenu_Top_01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CoinMenu_Top_01_C::ExecuteUbergraph_W_CoinMenu_Top_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CoinMenu_Top_01_C", "ExecuteUbergraph_W_CoinMenu_Top_01");

	Params::W_CoinMenu_Top_01_C_ExecuteUbergraph_W_CoinMenu_Top_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_CoinMenu_Top_01.W_CoinMenu_Top_01_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_CoinMenu_Top_01_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_CoinMenu_Top_01_C", "PreConstruct");

	Params::W_CoinMenu_Top_01_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
