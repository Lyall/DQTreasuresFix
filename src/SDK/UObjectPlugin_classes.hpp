#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UObjectPlugin

#include "Basic.hpp"

#include "UObjectPlugin_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class UObjectPlugin.MyPluginObject
// 0x0010 (0x0040 - 0x0030)
class UMyPluginObject final : public UObject
{
public:
	struct FMyPluginStruct                        MyStruct;                                          // 0x0030(0x0010)(NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MyPluginObject">();
	}
	static class UMyPluginObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyPluginObject>();
	}
};
static_assert(alignof(UMyPluginObject) == 0x000008, "Wrong alignment on UMyPluginObject");
static_assert(sizeof(UMyPluginObject) == 0x000040, "Wrong size on UMyPluginObject");
static_assert(offsetof(UMyPluginObject, MyStruct) == 0x000030, "Member 'UMyPluginObject::MyStruct' has a wrong offset!");

}
