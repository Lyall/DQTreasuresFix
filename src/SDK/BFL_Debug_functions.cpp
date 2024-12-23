#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BFL_Debug

#include "Basic.hpp"

#include "BFL_Debug_classes.hpp"
#include "BFL_Debug_parameters.hpp"


namespace SDK
{

// Function BFL_Debug.BFL_Debug_C.デバッグ機能
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             m________                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_Debug_C::m__________________1(class FName m________, class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Debug_C", "デバッグ機能");

	Params::BFL_Debug_C_m__________________1 Parms{};

	Parms.m________ = m________;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BFL_Debug.BFL_Debug_C.表示モデル
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_Debug_C::m_______________0(class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Debug_C", "表示モデル");

	Params::BFL_Debug_C_m_______________0 Parms{};

	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BFL_Debug.BFL_Debug_C.IsSwitchOn
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             m________                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    on                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBFL_Debug_C::IsSwitchOn(class FName m________, class UObject* m_WorldContext, bool* on)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Debug_C", "IsSwitchOn");

	Params::BFL_Debug_C_IsSwitchOn Parms{};

	Parms.m________ = m________;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (on != nullptr)
		*on = Parms.on;
}


// Function BFL_Debug.BFL_Debug_C.プレイヤー非表示
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_Debug_C::m_______________________(class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Debug_C", "プレイヤー非表示");

	Params::BFL_Debug_C_m_______________________ Parms{};

	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BFL_Debug.BFL_Debug_C.デバッグカメラ
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_Debug_C::m____________________(class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Debug_C", "デバッグカメラ");

	Params::BFL_Debug_C_m____________________ Parms{};

	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BFL_Debug.BFL_Debug_C.デバッグオブジェクト表示
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_Debug_C::m___________________________________(class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Debug_C", "デバッグオブジェクト表示");

	Params::BFL_Debug_C_m___________________________________ Parms{};

	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BFL_Debug.BFL_Debug_C.デバッグ移動
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_Debug_C::m__________________0(class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Debug_C", "デバッグ移動");

	Params::BFL_Debug_C_m__________________0 Parms{};

	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BFL_Debug.BFL_Debug_C.DrawDebugLine
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          StartPosition                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Length                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Thickness                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_Debug_C::DrawDebugLine(const struct FVector& StartPosition, const struct FVector& Direction, float Length, const struct FLinearColor& Color, float Duration, float Thickness, class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Debug_C", "DrawDebugLine");

	Params::BFL_Debug_C_DrawDebugLine Parms{};

	Parms.StartPosition = std::move(StartPosition);
	Parms.Direction = std::move(Direction);
	Parms.Length = Length;
	Parms.Color = std::move(Color);
	Parms.Duration = Duration;
	Parms.Thickness = Thickness;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BFL_Debug.BFL_Debug_C.無敵モード
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_Debug_C::m______________(class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Debug_C", "無敵モード");

	Params::BFL_Debug_C_m______________ Parms{};

	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BFL_Debug.BFL_Debug_C.ロックオンエリア表示
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_Debug_C::m_____________________________(class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Debug_C", "ロックオンエリア表示");

	Params::BFL_Debug_C_m_____________________________ Parms{};

	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BFL_Debug.BFL_Debug_C.GetActionDebugParamValue
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             ListName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             IndexName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ParamName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBFL_Debug_C::GetActionDebugParamValue(class FName ListName, class FName IndexName, class FName ParamName, class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Debug_C", "GetActionDebugParamValue");

	Params::BFL_Debug_C_GetActionDebugParamValue Parms{};

	Parms.ListName = ListName;
	Parms.IndexName = IndexName;
	Parms.ParamName = ParamName;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BFL_Debug.BFL_Debug_C.AddActionDebugParamValue
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ListName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             IndexName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ParamName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AddValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBFL_Debug_C::AddActionDebugParamValue(class FName ListName, class FName IndexName, class FName ParamName, float AddValue, class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Debug_C", "AddActionDebugParamValue");

	Params::BFL_Debug_C_AddActionDebugParamValue Parms{};

	Parms.ListName = ListName;
	Parms.IndexName = IndexName;
	Parms.ParamName = ParamName;
	Parms.AddValue = AddValue;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BFL_Debug.BFL_Debug_C.足跡撮影
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_Debug_C::m___________(class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Debug_C", "足跡撮影");

	Params::BFL_Debug_C_m___________ Parms{};

	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BFL_Debug.BFL_Debug_C.移動距離表示
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_Debug_C::m_________________(class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Debug_C", "移動距離表示");

	Params::BFL_Debug_C_m_________________ Parms{};

	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BFL_Debug.BFL_Debug_C.PrintStringOnlyDisplay
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           inString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                     TextColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          m_WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_Debug_C::PrintStringOnlyDisplay(const class FString& inString, const struct FLinearColor& TextColor, float Duration, class UObject* m_WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BFL_Debug_C", "PrintStringOnlyDisplay");

	Params::BFL_Debug_C_PrintStringOnlyDisplay Parms{};

	Parms.inString = std::move(inString);
	Parms.TextColor = std::move(TextColor);
	Parms.Duration = Duration;
	Parms.m_WorldContext = m_WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

