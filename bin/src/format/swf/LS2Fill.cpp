#include <hxcpp.h>

#ifndef INCLUDED_format_swf_FillStyle
#include <format/swf/FillStyle.h>
#endif
#ifndef INCLUDED_format_swf_LS2Fill
#include <format/swf/LS2Fill.h>
#endif
namespace format{
namespace swf{

::format::swf::LS2Fill  LS2Fill_obj::LS2FColor(Dynamic color)
	{ return hx::CreateEnum< LS2Fill_obj >(HX_CSTRING("LS2FColor"),0,hx::DynamicArray(0,1).Add(color)); }

::format::swf::LS2Fill  LS2Fill_obj::LS2FStyle(::format::swf::FillStyle style)
	{ return hx::CreateEnum< LS2Fill_obj >(HX_CSTRING("LS2FStyle"),1,hx::DynamicArray(0,1).Add(style)); }

HX_DEFINE_CREATE_ENUM(LS2Fill_obj)

int LS2Fill_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("LS2FColor")) return 0;
	if (inName==HX_CSTRING("LS2FStyle")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(LS2Fill_obj,LS2FColor,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(LS2Fill_obj,LS2FStyle,return)

int LS2Fill_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("LS2FColor")) return 1;
	if (inName==HX_CSTRING("LS2FStyle")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic LS2Fill_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("LS2FColor")) return LS2FColor_dyn();
	if (inName==HX_CSTRING("LS2FStyle")) return LS2FStyle_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("LS2FColor"),
	HX_CSTRING("LS2FStyle"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LS2Fill_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class LS2Fill_obj::__mClass;

Dynamic __Create_LS2Fill_obj() { return new LS2Fill_obj; }

void LS2Fill_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.LS2Fill"), hx::TCanCast< LS2Fill_obj >,sStaticFields,sMemberFields,
	&__Create_LS2Fill_obj, &__Create,
	&super::__SGetClass(), &CreateLS2Fill_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void LS2Fill_obj::__boot()
{
}


} // end namespace format
} // end namespace swf
