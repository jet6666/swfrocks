#include <hxcpp.h>

#ifndef INCLUDED_format_abc_Index
#include <format/abc/Index.h>
#endif
#ifndef INCLUDED_format_abc_Value
#include <format/abc/Value.h>
#endif
namespace format{
namespace abc{

::format::abc::Value  Value_obj::VBool(bool b)
	{ return hx::CreateEnum< Value_obj >(HX_CSTRING("VBool"),1,hx::DynamicArray(0,1).Add(b)); }

::format::abc::Value  Value_obj::VFloat(::format::abc::Index f)
	{ return hx::CreateEnum< Value_obj >(HX_CSTRING("VFloat"),5,hx::DynamicArray(0,1).Add(f)); }

::format::abc::Value  Value_obj::VInt(::format::abc::Index i)
	{ return hx::CreateEnum< Value_obj >(HX_CSTRING("VInt"),3,hx::DynamicArray(0,1).Add(i)); }

::format::abc::Value  Value_obj::VNamespace(int kind,::format::abc::Index ns)
	{ return hx::CreateEnum< Value_obj >(HX_CSTRING("VNamespace"),6,hx::DynamicArray(0,2).Add(kind).Add(ns)); }

::format::abc::Value Value_obj::VNull;

::format::abc::Value  Value_obj::VString(::format::abc::Index i)
	{ return hx::CreateEnum< Value_obj >(HX_CSTRING("VString"),2,hx::DynamicArray(0,1).Add(i)); }

::format::abc::Value  Value_obj::VUInt(::format::abc::Index i)
	{ return hx::CreateEnum< Value_obj >(HX_CSTRING("VUInt"),4,hx::DynamicArray(0,1).Add(i)); }

HX_DEFINE_CREATE_ENUM(Value_obj)

int Value_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("VBool")) return 1;
	if (inName==HX_CSTRING("VFloat")) return 5;
	if (inName==HX_CSTRING("VInt")) return 3;
	if (inName==HX_CSTRING("VNamespace")) return 6;
	if (inName==HX_CSTRING("VNull")) return 0;
	if (inName==HX_CSTRING("VString")) return 2;
	if (inName==HX_CSTRING("VUInt")) return 4;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VBool,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VFloat,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VInt,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Value_obj,VNamespace,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VString,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Value_obj,VUInt,return)

int Value_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("VBool")) return 1;
	if (inName==HX_CSTRING("VFloat")) return 1;
	if (inName==HX_CSTRING("VInt")) return 1;
	if (inName==HX_CSTRING("VNamespace")) return 2;
	if (inName==HX_CSTRING("VNull")) return 0;
	if (inName==HX_CSTRING("VString")) return 1;
	if (inName==HX_CSTRING("VUInt")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Value_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("VBool")) return VBool_dyn();
	if (inName==HX_CSTRING("VFloat")) return VFloat_dyn();
	if (inName==HX_CSTRING("VInt")) return VInt_dyn();
	if (inName==HX_CSTRING("VNamespace")) return VNamespace_dyn();
	if (inName==HX_CSTRING("VNull")) return VNull;
	if (inName==HX_CSTRING("VString")) return VString_dyn();
	if (inName==HX_CSTRING("VUInt")) return VUInt_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("VNull"),
	HX_CSTRING("VBool"),
	HX_CSTRING("VString"),
	HX_CSTRING("VInt"),
	HX_CSTRING("VUInt"),
	HX_CSTRING("VFloat"),
	HX_CSTRING("VNamespace"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Value_obj::VNull,"VNull");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Value_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Value_obj::VNull,"VNull");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Value_obj::__mClass;

Dynamic __Create_Value_obj() { return new Value_obj; }

void Value_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.abc.Value"), hx::TCanCast< Value_obj >,sStaticFields,sMemberFields,
	&__Create_Value_obj, &__Create,
	&super::__SGetClass(), &CreateValue_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Value_obj::__boot()
{
hx::Static(VNull) = hx::CreateEnum< Value_obj >(HX_CSTRING("VNull"),0);
}


} // end namespace format
} // end namespace abc
