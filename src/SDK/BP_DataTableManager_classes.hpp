#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DataTableManager

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DataTableManager.BP_DataTableManager_C
// 0x0000 (0x1F98 - 0x1F98)
class UBP_DataTableManager_C final : public UDataTableManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DataTableManager_C">();
	}
	static class UBP_DataTableManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DataTableManager_C>();
	}
};
static_assert(alignof(UBP_DataTableManager_C) == 0x000008, "Wrong alignment on UBP_DataTableManager_C");
static_assert(sizeof(UBP_DataTableManager_C) == 0x001F98, "Wrong size on UBP_DataTableManager_C");

}
