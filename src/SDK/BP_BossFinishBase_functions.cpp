#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BossFinishBase

#include "Basic.hpp"

#include "BP_BossFinishBase_classes.hpp"
#include "BP_BossFinishBase_parameters.hpp"


namespace SDK
{

// Function BP_BossFinishBase.BP_BossFinishBase_C.ExecuteUbergraph_BP_BossFinishBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BossFinishBase_C::ExecuteUbergraph_BP_BossFinishBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossFinishBase_C", "ExecuteUbergraph_BP_BossFinishBase");

	Params::BP_BossFinishBase_C_ExecuteUbergraph_BP_BossFinishBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BossFinishBase.BP_BossFinishBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BossFinishBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossFinishBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BossFinishBase.BP_BossFinishBase_C.CEV_PlayStart
// (BlueprintCallable, BlueprintEvent)

void ABP_BossFinishBase_C::CEV_PlayStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossFinishBase_C", "CEV_PlayStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BossFinishBase.BP_BossFinishBase_C.Post_ClearPostMaterial
// (BlueprintCallable, BlueprintEvent)

void ABP_BossFinishBase_C::Post_ClearPostMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossFinishBase_C", "Post_ClearPostMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BossFinishBase.BP_BossFinishBase_C.Pre_UsePostMaterial
// (BlueprintCallable, BlueprintEvent)

void ABP_BossFinishBase_C::Pre_UsePostMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossFinishBase_C", "Pre_UsePostMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BossFinishBase.BP_BossFinishBase_C.Delegate_FisnishOnStop
// (BlueprintCallable, BlueprintEvent)

void ABP_BossFinishBase_C::Delegate_FisnishOnStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossFinishBase_C", "Delegate_FisnishOnStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BossFinishBase.BP_BossFinishBase_C.FC_SetStartPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BossFinishBase_C::FC_SetStartPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossFinishBase_C", "FC_SetStartPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BossFinishBase.BP_BossFinishBase_C.FC_PC_Pause
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BossFinishBase_C::FC_PC_Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossFinishBase_C", "FC_PC_Pause");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BossFinishBase.BP_BossFinishBase_C.FC_PC_Resume
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BossFinishBase_C::FC_PC_Resume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossFinishBase_C", "FC_PC_Resume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BossFinishBase.BP_BossFinishBase_C.FC_PostDestroys
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BossFinishBase_C::FC_PostDestroys()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossFinishBase_C", "FC_PostDestroys");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BossFinishBase.BP_BossFinishBase_C.FC_UsePostMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BossFinishBase_C::FC_UsePostMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BossFinishBase_C", "FC_UsePostMaterial");

	UObject::ProcessEvent(Func, nullptr);
}

}

