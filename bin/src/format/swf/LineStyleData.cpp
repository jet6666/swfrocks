#include <hxcpp.h>

#ifndef INCLUDED_format_swf_LineStyleData
#include <format/swf/LineStyleData.h>
#endif
namespace format{
namespace swf{

::format::swf::LineStyleData  LineStyleData_obj::LS2(Dynamic data)
	{ return hx::CreateEnum< LineStyleData_obj >(HX_CSTRING("LS2"),2,hx::DynamicArray(0,1).Add(data)); }

::format::swf::LineStyleData  LineStyleData_obj::LSRGB(Dynamic rgb)
	{ return hx::CreateEnum< LineStyleData_obj >(HX_CSTRING("LSRGB"),0,hx::DynamicArray(0,1).Add(rgb)); }

::format::swf::LineStyleData  LineStyleData_obj::LSRGBA(Dynamic rgba)
	{ return hx::CreateEnum< LineStyleData_obj >(HX_CSTRING("LSRGBA"),1,hx::DynamicArray(0,1).Add(rgba)); }

HX_DEFINE_CREATE_ENUM(LineStyleData_obj)

int LineStyleData_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("LS2")) return 2;
	if (inName==HX_CSTRING("LSRGB")) return 0;
	if (inName==HX_CSTRING("LSRGBA")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleData_obj,LS2,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleData_obj,LSRGB,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleData_obj,LSRGBA,return)

int LineStyleData_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("LS2")) return 1;
	if (inName==HX_CSTRING("LSRGB")) return 1;
	if (inName==HX_CSTRING("LSRGBA")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic LineStyleData_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("LS2")) return LS2_dyn();
	if (inName==HX_CSTRING("LSRGB")) return LSRGB_dyn();
	if (inName==HX_CSTRING("LSRGBA")) return LSRGBA_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("LSRGB"),
	HX_CSTRING("LSRGBA"),
	HX_CSTRING("LS2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineStyleData_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class LineStyleData_obj::__mClass;

Dynamic __Create_LineStyleData_obj() { return new LineStyleData_obj; }

void LineStyleData_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.LineStyleData"), hx::TCanCast< LineStyleData_obj >,sStaticFields,sMemberFields,
	&__Create_LineStyleData_obj, &__Create,
	&super::__SGetClass(), &CreateLineStyleData_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void LineStyleData_obj::__boot()
{
}


} // end namespace format
} // end namespace swf
