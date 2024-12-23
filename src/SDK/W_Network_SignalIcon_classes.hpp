#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Network_SignalIcon

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Network_SignalIcon.W_Network_SignalIcon_C
// 0x0058 (0x0518 - 0x04C0)
class UW_Network_SignalIcon_C final : public UUINetworkSignalIcon
{
public:
	class UWidgetAnimation*                       Status_Off;                                        // 0x04C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Status_On;                                         // 0x04C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Play;                                              // 0x04D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Base_Off;                                          // 0x04D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Base_On;                                           // 0x04E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 NetWork_SignalIcon01;                              // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NetWork_SignalIcon02;                              // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NetWork_SignalIcon03;                              // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NetWork_SignalIcon04;                              // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NetWork_SignalIconBase;                            // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StatusBase;                                        // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Network_SignalIcon_C">();
	}
	static class UW_Network_SignalIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Network_SignalIcon_C>();
	}
};
static_assert(alignof(UW_Network_SignalIcon_C) == 0x000008, "Wrong alignment on UW_Network_SignalIcon_C");
static_assert(sizeof(UW_Network_SignalIcon_C) == 0x000518, "Wrong size on UW_Network_SignalIcon_C");
static_assert(offsetof(UW_Network_SignalIcon_C, Status_Off) == 0x0004C0, "Member 'UW_Network_SignalIcon_C::Status_Off' has a wrong offset!");
static_assert(offsetof(UW_Network_SignalIcon_C, Status_On) == 0x0004C8, "Member 'UW_Network_SignalIcon_C::Status_On' has a wrong offset!");
static_assert(offsetof(UW_Network_SignalIcon_C, Play) == 0x0004D0, "Member 'UW_Network_SignalIcon_C::Play' has a wrong offset!");
static_assert(offsetof(UW_Network_SignalIcon_C, Base_Off) == 0x0004D8, "Member 'UW_Network_SignalIcon_C::Base_Off' has a wrong offset!");
static_assert(offsetof(UW_Network_SignalIcon_C, Base_On) == 0x0004E0, "Member 'UW_Network_SignalIcon_C::Base_On' has a wrong offset!");
static_assert(offsetof(UW_Network_SignalIcon_C, NetWork_SignalIcon01) == 0x0004E8, "Member 'UW_Network_SignalIcon_C::NetWork_SignalIcon01' has a wrong offset!");
static_assert(offsetof(UW_Network_SignalIcon_C, NetWork_SignalIcon02) == 0x0004F0, "Member 'UW_Network_SignalIcon_C::NetWork_SignalIcon02' has a wrong offset!");
static_assert(offsetof(UW_Network_SignalIcon_C, NetWork_SignalIcon03) == 0x0004F8, "Member 'UW_Network_SignalIcon_C::NetWork_SignalIcon03' has a wrong offset!");
static_assert(offsetof(UW_Network_SignalIcon_C, NetWork_SignalIcon04) == 0x000500, "Member 'UW_Network_SignalIcon_C::NetWork_SignalIcon04' has a wrong offset!");
static_assert(offsetof(UW_Network_SignalIcon_C, NetWork_SignalIconBase) == 0x000508, "Member 'UW_Network_SignalIcon_C::NetWork_SignalIconBase' has a wrong offset!");
static_assert(offsetof(UW_Network_SignalIcon_C, StatusBase) == 0x000510, "Member 'UW_Network_SignalIcon_C::StatusBase' has a wrong offset!");

}

