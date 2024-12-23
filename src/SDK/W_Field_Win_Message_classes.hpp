#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Field_Win_Message

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Field_Win_Message.W_Field_Win_Message_C
// 0x0040 (0x0540 - 0x0500)
class UW_Field_Win_Message_C final : public UUIField_Win_Message
{
public:
	class UWidgetAnimation*                       Button_In;                                         // 0x0500(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Text_Out;                                          // 0x0508(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Text_In;                                           // 0x0510(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x0518(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Bk_In;                                             // 0x0520(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Button_A;                                          // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Button_Base;                                       // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BG_Black_C*                          W_BG_Black;                                        // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Field_Win_Message_C">();
	}
	static class UW_Field_Win_Message_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Field_Win_Message_C>();
	}
};
static_assert(alignof(UW_Field_Win_Message_C) == 0x000008, "Wrong alignment on UW_Field_Win_Message_C");
static_assert(sizeof(UW_Field_Win_Message_C) == 0x000540, "Wrong size on UW_Field_Win_Message_C");
static_assert(offsetof(UW_Field_Win_Message_C, Button_In) == 0x000500, "Member 'UW_Field_Win_Message_C::Button_In' has a wrong offset!");
static_assert(offsetof(UW_Field_Win_Message_C, Text_Out) == 0x000508, "Member 'UW_Field_Win_Message_C::Text_Out' has a wrong offset!");
static_assert(offsetof(UW_Field_Win_Message_C, Text_In) == 0x000510, "Member 'UW_Field_Win_Message_C::Text_In' has a wrong offset!");
static_assert(offsetof(UW_Field_Win_Message_C, Out) == 0x000518, "Member 'UW_Field_Win_Message_C::Out' has a wrong offset!");
static_assert(offsetof(UW_Field_Win_Message_C, Bk_In) == 0x000520, "Member 'UW_Field_Win_Message_C::Bk_In' has a wrong offset!");
static_assert(offsetof(UW_Field_Win_Message_C, Button_A) == 0x000528, "Member 'UW_Field_Win_Message_C::Button_A' has a wrong offset!");
static_assert(offsetof(UW_Field_Win_Message_C, Button_Base) == 0x000530, "Member 'UW_Field_Win_Message_C::Button_Base' has a wrong offset!");
static_assert(offsetof(UW_Field_Win_Message_C, W_BG_Black) == 0x000538, "Member 'UW_Field_Win_Message_C::W_BG_Black' has a wrong offset!");

}

