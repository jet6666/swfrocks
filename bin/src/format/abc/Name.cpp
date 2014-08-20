#include <hxcpp.h>

#ifndef INCLUDED_format_abc_Index
#include <format/abc/Index.h>
#endif
#ifndef INCLUDED_format_abc_Name
#include <format/abc/Name.h>
#endif
namespace format{
namespace abc{

::format::abc::Name  Name_obj::NAttrib(::format::abc::Name n)
	{ return hx::CreateEnum< Name_obj >(HX_CSTRING("NAttrib"),5,hx::DynamicArray(0,1).Add(n)); }

::format::abc::Name  Name_obj::NMulti(::format::abc::Index name,::format::abc::Index ns)
	{ return hx::CreateEnum< Name_obj >(HX_CSTRING("NMulti"),1,hx::DynamicArray(0,2).Add(name).Add(ns)); }

::format::abc::Name  Name_obj::NMultiLate(::format::abc::Index nset)
	{ return hx::CreateEnum< Name_obj >(HX_CSTRING("NMultiLate"),4,hx::DynamicArray(0,1).Add(nset)); }

::format::abc::Name  Name_obj::NName(::format::abc::Index name,::format::abc::Index ns)
	{ return hx::CreateEnum< Name_obj >(HX_CSTRING("NName"),0,hx::DynamicArray(0,2).Add(name).Add(ns)); }

::format::abc::Name  Name_obj::NParams(::format::abc::Index n,Array< ::Dynamic > params)
	{ return hx::CreateEnum< Name_obj >(HX_CSTRING("NParams"),6,hx::DynamicArray(0,2).Add(n).Add(params)); }

::format::abc::Name  Name_obj::NRuntime(::format::abc::Index name)
	{ return hx::CreateEnum< Name_obj >(HX_CSTRING("NRuntime"),2,hx::DynamicArray(0,1).Add(name)); }

::format::abc::Name Name_obj::NRuntimeLate;

HX_DEFINE_CREATE_ENUM(Name_obj)

int Name_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("NAttrib")) return 5;
	if (inName==HX_CSTRING("NMulti")) return 1;
	if (inName==HX_CSTRING("NMultiLate")) return 4;
	if (inName==HX_CSTRING("NName")) return 0;
	if (inName==HX_CSTRING("NParams")) return 6;
	if (inName==HX_CSTRING("NRuntime")) return 2;
	if (inName==HX_CSTRING("NRuntimeLate")) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Name_obj,NAttrib,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Name_obj,NMulti,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Name_obj,NMultiLate,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Name_obj,NName,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Name_obj,NParams,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Name_obj,NRuntime,return)

int Name_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("NAttrib")) return 1;
	if (inName==HX_CSTRING("NMulti")) return 2;
	if (inName==HX_CSTRING("NMultiLate")) return 1;
	if (inName==HX_CSTRING("NName")) return 2;
	if (inName==HX_CSTRING("NParams")) return 2;
	if (inName==HX_CSTRING("NRuntime")) return 1;
	if (inName==HX_CSTRING("NRuntimeLate")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Name_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("NAttrib")) return NAttrib_dyn();
	if (inName==HX_CSTRING("NMulti")) return NMulti_dyn();
	if (inName==HX_CSTRING("NMultiLate")) return NMultiLate_dyn();
	if (inName==HX_CSTRING("NName")) return NName_dyn();
	if (inName==HX_CSTRING("NParams")) return NParams_dyn();
	if (inName==HX_CSTRING("NRuntime")) return NRuntime_dyn();
	if (inName==HX_CSTRING("NRuntimeLate")) return NRuntimeLate;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("NName"),
	HX_CSTRING("NMulti"),
	HX_CSTRING("NRuntime"),
	HX_CSTRING("NRuntimeLate"),
	HX_CSTRING("NMultiLate"),
	HX_CSTRING("NAttrib"),
	HX_CSTRING("NParams"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Name_obj::NRuntimeLate,"NRuntimeLate");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Name_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Name_obj::NRuntimeLate,"NRuntimeLate");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Name_obj::__mClass;

Dynamic __Create_Name_obj() { return new Name_obj; }

void Name_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.abc.Name"), hx::TCanCast< Name_obj >,sStaticFields,sMemberFields,
	&__Create_Name_obj, &__Create,
	&super::__SGetClass(), &CreateName_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Name_obj::__boot()
{
hx::Static(NRuntimeLate) = hx::CreateEnum< Name_obj >(HX_CSTRING("NRuntimeLate"),3);
}


} // end namespace format
} // end namespace abc
