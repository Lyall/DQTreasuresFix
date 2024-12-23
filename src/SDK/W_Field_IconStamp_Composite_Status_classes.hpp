#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Field_IconStamp_Composite_Status

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Field_IconStamp_Composite_Status.W_Field_IconStamp_Composite_Status_C
// 0x00B0 (0x0680 - 0x05D0)
class UW_Field_IconStamp_Composite_Status_C final : public UUIField_IconStamp_CompositeBase
{
public:
	class UWidgetAnimation*                       Drop;                                              // 0x05D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       leave;                                             // 0x05D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Wait_Thousand_Strong;                              // 0x05E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Wait_Thousand1;                                    // 0x05E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Wait_Million;                                      // 0x05F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In_Thousand_Strong;                                // 0x05F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In_Thousand;                                       // 0x0600(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In_Million;                                        // 0x0608(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Thousand_Strong;                                   // 0x0610(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       thousand;                                          // 0x0618(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       million;                                           // 0x0620(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Pop_R;                                             // 0x0628(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Pop_L;                                             // 0x0630(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal;                                            // 0x0638(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Wait;                                              // 0x0640(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 StampBase01_L;                                     // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StampBase01_L_1;                                   // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StampBase01_L_2;                                   // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StampBase01_L_3;                                   // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StampBase01_L_4;                                   // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StampBase01_L_5;                                   // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StampBase01_L_6;                                   // 0x0678(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Field_IconStamp_Composite_Status_C">();
	}
	static class UW_Field_IconStamp_Composite_Status_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Field_IconStamp_Composite_Status_C>();
	}
};
static_assert(alignof(UW_Field_IconStamp_Composite_Status_C) == 0x000010, "Wrong alignment on UW_Field_IconStamp_Composite_Status_C");
static_assert(sizeof(UW_Field_IconStamp_Composite_Status_C) == 0x000680, "Wrong size on UW_Field_IconStamp_Composite_Status_C");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, Drop) == 0x0005D0, "Member 'UW_Field_IconStamp_Composite_Status_C::Drop' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, leave) == 0x0005D8, "Member 'UW_Field_IconStamp_Composite_Status_C::leave' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, Wait_Thousand_Strong) == 0x0005E0, "Member 'UW_Field_IconStamp_Composite_Status_C::Wait_Thousand_Strong' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, Wait_Thousand1) == 0x0005E8, "Member 'UW_Field_IconStamp_Composite_Status_C::Wait_Thousand1' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, Wait_Million) == 0x0005F0, "Member 'UW_Field_IconStamp_Composite_Status_C::Wait_Million' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, In_Thousand_Strong) == 0x0005F8, "Member 'UW_Field_IconStamp_Composite_Status_C::In_Thousand_Strong' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, In_Thousand) == 0x000600, "Member 'UW_Field_IconStamp_Composite_Status_C::In_Thousand' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, In_Million) == 0x000608, "Member 'UW_Field_IconStamp_Composite_Status_C::In_Million' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, Thousand_Strong) == 0x000610, "Member 'UW_Field_IconStamp_Composite_Status_C::Thousand_Strong' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, thousand) == 0x000618, "Member 'UW_Field_IconStamp_Composite_Status_C::thousand' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, million) == 0x000620, "Member 'UW_Field_IconStamp_Composite_Status_C::million' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, Pop_R) == 0x000628, "Member 'UW_Field_IconStamp_Composite_Status_C::Pop_R' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, Pop_L) == 0x000630, "Member 'UW_Field_IconStamp_Composite_Status_C::Pop_L' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, Normal) == 0x000638, "Member 'UW_Field_IconStamp_Composite_Status_C::Normal' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, Wait) == 0x000640, "Member 'UW_Field_IconStamp_Composite_Status_C::Wait' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, StampBase01_L) == 0x000648, "Member 'UW_Field_IconStamp_Composite_Status_C::StampBase01_L' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, StampBase01_L_1) == 0x000650, "Member 'UW_Field_IconStamp_Composite_Status_C::StampBase01_L_1' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, StampBase01_L_2) == 0x000658, "Member 'UW_Field_IconStamp_Composite_Status_C::StampBase01_L_2' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, StampBase01_L_3) == 0x000660, "Member 'UW_Field_IconStamp_Composite_Status_C::StampBase01_L_3' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, StampBase01_L_4) == 0x000668, "Member 'UW_Field_IconStamp_Composite_Status_C::StampBase01_L_4' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, StampBase01_L_5) == 0x000670, "Member 'UW_Field_IconStamp_Composite_Status_C::StampBase01_L_5' has a wrong offset!");
static_assert(offsetof(UW_Field_IconStamp_Composite_Status_C, StampBase01_L_6) == 0x000678, "Member 'UW_Field_IconStamp_Composite_Status_C::StampBase01_L_6' has a wrong offset!");

}

