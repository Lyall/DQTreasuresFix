#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TalkEventSystem

#include "Basic.hpp"

#include "BP_TalkEventSystem_classes.hpp"
#include "BP_TalkEventSystem_parameters.hpp"


namespace SDK
{

// Function BP_TalkEventSystem.BP_TalkEventSystem_C.ExecuteUbergraph_BP_TalkEventSystem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TalkEventSystem_C::ExecuteUbergraph_BP_TalkEventSystem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkEventSystem_C", "ExecuteUbergraph_BP_TalkEventSystem");

	Params::BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TalkEventSystem.BP_TalkEventSystem_C.CloseTalkWindow
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_TalkEventSystem_C::CloseTalkWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkEventSystem_C", "CloseTalkWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TalkEventSystem.BP_TalkEventSystem_C.OpenTalkWindow
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           TextID                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)

void UBP_TalkEventSystem_C::OpenTalkWindow(const class FString& TextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkEventSystem_C", "OpenTalkWindow");

	Params::BP_TalkEventSystem_C_OpenTalkWindow Parms{};

	Parms.TextID = std::move(TextID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TalkEventSystem.BP_TalkEventSystem_C.IsCloseTalkWindow
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_TalkEventSystem_C::IsCloseTalkWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkEventSystem_C", "IsCloseTalkWindow");

	Params::BP_TalkEventSystem_C_IsCloseTalkWindow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_TalkEventSystem.BP_TalkEventSystem_C.IsOpenTalkWindow
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_TalkEventSystem_C::IsOpenTalkWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TalkEventSystem_C", "IsOpenTalkWindow");

	Params::BP_TalkEventSystem_C_IsOpenTalkWindow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
