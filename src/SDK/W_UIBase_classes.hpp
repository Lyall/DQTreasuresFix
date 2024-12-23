#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_UIBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_UIBase.W_UIBase_C
// 0x0010 (0x04A0 - 0x0490)
class UW_UIBase_C : public UDarwinUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          NewVar_0;                                          // 0x0498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_W_UIBase(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_UIBase_C">();
	}
	static class UW_UIBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_UIBase_C>();
	}
};
static_assert(alignof(UW_UIBase_C) == 0x000008, "Wrong alignment on UW_UIBase_C");
static_assert(sizeof(UW_UIBase_C) == 0x0004A0, "Wrong size on UW_UIBase_C");
static_assert(offsetof(UW_UIBase_C, UberGraphFrame) == 0x000490, "Member 'UW_UIBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_UIBase_C, NewVar_0) == 0x000498, "Member 'UW_UIBase_C::NewVar_0' has a wrong offset!");

}

