#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EQC_StartLocation

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EQC_StartLocation.EQC_StartLocation_C
// 0x0000 (0x0038 - 0x0038)
class UEQC_StartLocation_C final : public UEnvQueryContext_BlueprintBase
{
public:
	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EQC_StartLocation_C">();
	}
	static class UEQC_StartLocation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEQC_StartLocation_C>();
	}
};
static_assert(alignof(UEQC_StartLocation_C) == 0x000008, "Wrong alignment on UEQC_StartLocation_C");
static_assert(sizeof(UEQC_StartLocation_C) == 0x000038, "Wrong size on UEQC_StartLocation_C");

}
