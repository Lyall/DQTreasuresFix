#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameInstanceLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameInstanceLibrary.BP_GameInstanceLibrary_C
// 0x0000 (0x0030 - 0x0030)
class UBP_GameInstanceLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetAppGameInstance(class UObject* m_WorldContext, class UBP_AppGameInstance_C** AppGameInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameInstanceLibrary_C">();
	}
	static class UBP_GameInstanceLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GameInstanceLibrary_C>();
	}
};
static_assert(alignof(UBP_GameInstanceLibrary_C) == 0x000008, "Wrong alignment on UBP_GameInstanceLibrary_C");
static_assert(sizeof(UBP_GameInstanceLibrary_C) == 0x000030, "Wrong size on UBP_GameInstanceLibrary_C");

}

