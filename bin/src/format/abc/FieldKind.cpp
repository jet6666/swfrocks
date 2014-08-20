#include <hxcpp.h>

#ifndef INCLUDED_format_abc_FieldKind
#include <format/abc/FieldKind.h>
#endif
#ifndef INCLUDED_format_abc_Index
#include <format/abc/Index.h>
#endif
#ifndef INCLUDED_format_abc_MethodKind
#include <format/abc/MethodKind.h>
#endif
#ifndef INCLUDED_format_abc_Value
#include <format/abc/Value.h>
#endif
namespace format{
namespace abc{

::format::abc::FieldKind  FieldKind_obj::FClass(::format::abc::Index c)
	{ return hx::CreateEnum< FieldKind_obj >(HX_CSTRING("FClass"),2,hx::DynamicArray(0,1).Add(c)); }

::format::abc::FieldKind  FieldKind_obj::FFunction(::format::abc::Index f)
	{ return hx::CreateEnum< FieldKind_obj >(HX_CSTRING("FFunction"),3,hx::DynamicArray(0,1).Add(f)); }

::format::abc::FieldKind  FieldKind_obj::FMethod(::format::abc::Index type,::format::abc::MethodKind k,Dynamic isFinal,Dynamic isOverride)
	{ return hx::CreateEnum< FieldKind_obj >(HX_CSTRING("FMethod"),1,hx::DynamicArray(0,4).Add(type).Add(k).Add(isFinal).Add(isOverride)); }

::format::abc::FieldKind  FieldKind_obj::FVar(::format::abc::Index type,::format::abc::Value value,Dynamic _const)
	{ return hx::CreateEnum< FieldKind_obj >(HX_CSTRING("FVar"),0,hx::DynamicArray(0,3).Add(type).Add(value).Add(_const)); }

HX_DEFINE_CREATE_ENUM(FieldKind_obj)

int FieldKind_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("FClass")) return 2;
	if (inName==HX_CSTRING("FFunction")) return 3;
	if (inName==HX_CSTRING("FMethod")) return 1;
	if (inName==HX_CSTRING("FVar")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FieldKind_obj,FClass,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FieldKind_obj,FFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(FieldKind_obj,FMethod,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(FieldKind_obj,FVar,return)

int FieldKind_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("FClass")) return 1;
	if (inName==HX_CSTRING("FFunction")) return 1;
	if (inName==HX_CSTRING("FMethod")) return 4;
	if (inName==HX_CSTRING("FVar")) return 3;
	return super::__FindArgCount(inName);
}

Dynamic FieldKind_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("FClass")) return FClass_dyn();
	if (inName==HX_CSTRING("FFunction")) return FFunction_dyn();
	if (inName==HX_CSTRING("FMethod")) return FMethod_dyn();
	if (inName==HX_CSTRING("FVar")) return FVar_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("FVar"),
	HX_CSTRING("FMethod"),
	HX_CSTRING("FClass"),
	HX_CSTRING("FFunction"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FieldKind_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FieldKind_obj::__mClass;

Dynamic __Create_FieldKind_obj() { return new FieldKind_obj; }

void FieldKind_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.abc.FieldKind"), hx::TCanCast< FieldKind_obj >,sStaticFields,sMemberFields,
	&__Create_FieldKind_obj, &__Create,
	&super::__SGetClass(), &CreateFieldKind_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FieldKind_obj::__boot()
{
}


} // end namespace format
} // end namespace abc
