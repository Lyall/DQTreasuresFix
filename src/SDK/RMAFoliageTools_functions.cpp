#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RMAFoliageTools

#include "Basic.hpp"

#include "RMAFoliageTools_classes.hpp"
#include "RMAFoliageTools_parameters.hpp"


namespace SDK
{

// Function RMAFoliageTools.RMAFoliageToolsFunctionLibrary.GetInstancedFoliageActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AInstancedFoliageActor*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AInstancedFoliageActor* URMAFoliageToolsFunctionLibrary::GetInstancedFoliageActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RMAFoliageToolsFunctionLibrary", "GetInstancedFoliageActor");

	Params::RMAFoliageToolsFunctionLibrary_GetInstancedFoliageActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function RMAFoliageTools.RMAFoliageToolsFunctionLibrary.GetVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName URMAFoliageToolsFunctionLibrary::GetVersion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RMAFoliageToolsFunctionLibrary", "GetVersion");

	Params::RMAFoliageToolsFunctionLibrary_GetVersion Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
