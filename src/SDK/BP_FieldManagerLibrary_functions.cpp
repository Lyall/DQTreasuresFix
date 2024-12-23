#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FieldManagerLibrary

#include "Basic.hpp"

#include "BP_FieldManagerLibrary_classes.hpp"
#include "BP_FieldManagerLibrary_parameters.hpp"


namespace SDK
{

// Function BP_FieldManagerLibrary.BP_FieldManagerLibrary_C.GetFieldManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_FieldManager_C*               FieldManager                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FieldManagerLibrary_C::GetFieldManager(class UObject* m_WorldContext, class UBP_FieldManager_C** FieldManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FieldManagerLibrary_C", "GetFieldManager");

	Params::BP_FieldManagerLibrary_C_GetFieldManager Parms{};

	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (FieldManager != nullptr)
		*FieldManager = Parms.FieldManager;
}


// Function BP_FieldManagerLibrary.BP_FieldManagerLibrary_C.GetWorldTimeManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WorldTimeManager_C*           WorldTimeManager                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FieldManagerLibrary_C::GetWorldTimeManager(class UObject* m_WorldContext, class UBP_WorldTimeManager_C** WorldTimeManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FieldManagerLibrary_C", "GetWorldTimeManager");

	Params::BP_FieldManagerLibrary_C_GetWorldTimeManager Parms{};

	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (WorldTimeManager != nullptr)
		*WorldTimeManager = Parms.WorldTimeManager;
}

}

