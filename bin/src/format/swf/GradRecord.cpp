#include <hxcpp.h>

#ifndef INCLUDED_format_swf_GradRecord
#include <format/swf/GradRecord.h>
#endif
namespace format{
namespace swf{

::format::swf::GradRecord  GradRecord_obj::GRRGB(int pos,Dynamic col)
	{ return hx::CreateEnum< GradRecord_obj >(HX_CSTRING("GRRGB"),0,hx::DynamicArray(0,2).Add(pos).Add(col)); }

::format::swf::GradRecord  GradRecord_obj::GRRGBA(int pos,Dynamic col)
	{ return hx::CreateEnum< GradRecord_obj >(HX_CSTRING("GRRGBA"),1,hx::DynamicArray(0,2).Add(pos).Add(col)); }

HX_DEFINE_CREATE_ENUM(GradRecord_obj)

int GradRecord_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("GRRGB")) return 0;
	if (inName==HX_CSTRING("GRRGBA")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(GradRecord_obj,GRRGB,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(GradRecord_obj,GRRGBA,return)

int GradRecord_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("GRRGB")) return 2;
	if (inName==HX_CSTRING("GRRGBA")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic GradRecord_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("GRRGB")) return GRRGB_dyn();
	if (inName==HX_CSTRING("GRRGBA")) return GRRGBA_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("GRRGB"),
	HX_CSTRING("GRRGBA"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GradRecord_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class GradRecord_obj::__mClass;

Dynamic __Create_GradRecord_obj() { return new GradRecord_obj; }

void GradRecord_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.GradRecord"), hx::TCanCast< GradRecord_obj >,sStaticFields,sMemberFields,
	&__Create_GradRecord_obj, &__Create,
	&super::__SGetClass(), &CreateGradRecord_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void GradRecord_obj::__boot()
{
}


} // end namespace format
} // end namespace swf
