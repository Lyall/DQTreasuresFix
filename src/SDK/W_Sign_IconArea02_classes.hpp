#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Sign_IconArea02

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Sign_IconArea02.W_Sign_IconArea02_C
// 0x0010 (0x04A8 - 0x0498)
class UW_Sign_IconArea02_C final : public UUISign_IconArea02
{
public:
	class UWidgetAnimation*                       In_Out;                                            // 0x0498(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Area_Base_R;                                       // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Sign_IconArea02_C">();
	}
	static class UW_Sign_IconArea02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Sign_IconArea02_C>();
	}
};
static_assert(alignof(UW_Sign_IconArea02_C) == 0x000008, "Wrong alignment on UW_Sign_IconArea02_C");
static_assert(sizeof(UW_Sign_IconArea02_C) == 0x0004A8, "Wrong size on UW_Sign_IconArea02_C");
static_assert(offsetof(UW_Sign_IconArea02_C, In_Out) == 0x000498, "Member 'UW_Sign_IconArea02_C::In_Out' has a wrong offset!");
static_assert(offsetof(UW_Sign_IconArea02_C, Area_Base_R) == 0x0004A0, "Member 'UW_Sign_IconArea02_C::Area_Base_R' has a wrong offset!");

}

