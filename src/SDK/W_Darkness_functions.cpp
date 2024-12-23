#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Darkness

#include "Basic.hpp"

#include "W_Darkness_classes.hpp"
#include "W_Darkness_parameters.hpp"


namespace SDK
{

// Function W_Darkness.W_Darkness_C.ReAddViewPort
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFadeZOrderType                         ZorderType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Darkness_C::ReAddViewPort(EFadeZOrderType ZorderType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Darkness_C", "ReAddViewPort");

	Params::W_Darkness_C_ReAddViewPort Parms{};

	Parms.ZorderType = ZorderType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Darkness.W_Darkness_C.FadeInScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Darkness_C::FadeInScreen(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Darkness_C", "FadeInScreen");

	Params::W_Darkness_C_FadeInScreen Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Darkness.W_Darkness_C.UpdateFade
// (Private, BlueprintCallable, BlueprintEvent)

void UW_Darkness_C::UpdateFade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Darkness_C", "UpdateFade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Darkness.W_Darkness_C.FadeOutScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFadeZOrderType                         ZorderType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Darkness_C::FadeOutScreen(const struct FLinearColor& Color_0, float Time, EFadeZOrderType ZorderType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Darkness_C", "FadeOutScreen");

	Params::W_Darkness_C_FadeOutScreen Parms{};

	Parms.Color_0 = std::move(Color_0);
	Parms.Time = Time;
	Parms.ZorderType = ZorderType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Darkness.W_Darkness_C.Update
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Darkness_C::Update(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Darkness_C", "Update");

	Params::W_Darkness_C_Update Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Darkness.W_Darkness_C.open
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UW_Darkness_C::open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Darkness_C", "open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Darkness.W_Darkness_C.ExecuteUbergraph_W_Darkness
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Darkness_C::ExecuteUbergraph_W_Darkness(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Darkness_C", "ExecuteUbergraph_W_Darkness");

	Params::W_Darkness_C_ExecuteUbergraph_W_Darkness Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

