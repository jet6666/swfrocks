#include <hxcpp.h>

#ifndef INCLUDED_format_swf_InterpolationMode
#include <format/swf/InterpolationMode.h>
#endif
namespace format{
namespace swf{

::format::swf::InterpolationMode InterpolationMode_obj::IMLinearRGB;

::format::swf::InterpolationMode InterpolationMode_obj::IMNormalRGB;

::format::swf::InterpolationMode InterpolationMode_obj::IMReserved1;

::format::swf::InterpolationMode InterpolationMode_obj::IMReserved2;

HX_DEFINE_CREATE_ENUM(InterpolationMode_obj)

int InterpolationMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("IMLinearRGB")) return 1;
	if (inName==HX_CSTRING("IMNormalRGB")) return 0;
	if (inName==HX_CSTRING("IMReserved1")) return 2;
	if (inName==HX_CSTRING("IMReserved2")) return 3;
	return super::__FindIndex(inName);
}

int InterpolationMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("IMLinearRGB")) return 0;
	if (inName==HX_CSTRING("IMNormalRGB")) return 0;
	if (inName==HX_CSTRING("IMReserved1")) return 0;
	if (inName==HX_CSTRING("IMReserved2")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic InterpolationMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("IMLinearRGB")) return IMLinearRGB;
	if (inName==HX_CSTRING("IMNormalRGB")) return IMNormalRGB;
	if (inName==HX_CSTRING("IMReserved1")) return IMReserved1;
	if (inName==HX_CSTRING("IMReserved2")) return IMReserved2;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("IMNormalRGB"),
	HX_CSTRING("IMLinearRGB"),
	HX_CSTRING("IMReserved1"),
	HX_CSTRING("IMReserved2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InterpolationMode_obj::IMLinearRGB,"IMLinearRGB");
	HX_MARK_MEMBER_NAME(InterpolationMode_obj::IMNormalRGB,"IMNormalRGB");
	HX_MARK_MEMBER_NAME(InterpolationMode_obj::IMReserved1,"IMReserved1");
	HX_MARK_MEMBER_NAME(InterpolationMode_obj::IMReserved2,"IMReserved2");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InterpolationMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InterpolationMode_obj::IMLinearRGB,"IMLinearRGB");
	HX_VISIT_MEMBER_NAME(InterpolationMode_obj::IMNormalRGB,"IMNormalRGB");
	HX_VISIT_MEMBER_NAME(InterpolationMode_obj::IMReserved1,"IMReserved1");
	HX_VISIT_MEMBER_NAME(InterpolationMode_obj::IMReserved2,"IMReserved2");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class InterpolationMode_obj::__mClass;

Dynamic __Create_InterpolationMode_obj() { return new InterpolationMode_obj; }

void InterpolationMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.InterpolationMode"), hx::TCanCast< InterpolationMode_obj >,sStaticFields,sMemberFields,
	&__Create_InterpolationMode_obj, &__Create,
	&super::__SGetClass(), &CreateInterpolationMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void InterpolationMode_obj::__boot()
{
hx::Static(IMLinearRGB) = hx::CreateEnum< InterpolationMode_obj >(HX_CSTRING("IMLinearRGB"),1);
hx::Static(IMNormalRGB) = hx::CreateEnum< InterpolationMode_obj >(HX_CSTRING("IMNormalRGB"),0);
hx::Static(IMReserved1) = hx::CreateEnum< InterpolationMode_obj >(HX_CSTRING("IMReserved1"),2);
hx::Static(IMReserved2) = hx::CreateEnum< InterpolationMode_obj >(HX_CSTRING("IMReserved2"),3);
}


} // end namespace format
} // end namespace swf
