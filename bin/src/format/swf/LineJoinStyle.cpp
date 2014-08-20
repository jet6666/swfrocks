#include <hxcpp.h>

#ifndef INCLUDED_format_swf_LineJoinStyle
#include <format/swf/LineJoinStyle.h>
#endif
namespace format{
namespace swf{

::format::swf::LineJoinStyle LineJoinStyle_obj::LJBevel;

::format::swf::LineJoinStyle  LineJoinStyle_obj::LJMiter(int limitFactor)
	{ return hx::CreateEnum< LineJoinStyle_obj >(HX_CSTRING("LJMiter"),2,hx::DynamicArray(0,1).Add(limitFactor)); }

::format::swf::LineJoinStyle LineJoinStyle_obj::LJRound;

HX_DEFINE_CREATE_ENUM(LineJoinStyle_obj)

int LineJoinStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("LJBevel")) return 1;
	if (inName==HX_CSTRING("LJMiter")) return 2;
	if (inName==HX_CSTRING("LJRound")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineJoinStyle_obj,LJMiter,return)

int LineJoinStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("LJBevel")) return 0;
	if (inName==HX_CSTRING("LJMiter")) return 1;
	if (inName==HX_CSTRING("LJRound")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic LineJoinStyle_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("LJBevel")) return LJBevel;
	if (inName==HX_CSTRING("LJMiter")) return LJMiter_dyn();
	if (inName==HX_CSTRING("LJRound")) return LJRound;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("LJRound"),
	HX_CSTRING("LJBevel"),
	HX_CSTRING("LJMiter"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineJoinStyle_obj::LJBevel,"LJBevel");
	HX_MARK_MEMBER_NAME(LineJoinStyle_obj::LJRound,"LJRound");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineJoinStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LineJoinStyle_obj::LJBevel,"LJBevel");
	HX_VISIT_MEMBER_NAME(LineJoinStyle_obj::LJRound,"LJRound");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class LineJoinStyle_obj::__mClass;

Dynamic __Create_LineJoinStyle_obj() { return new LineJoinStyle_obj; }

void LineJoinStyle_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.LineJoinStyle"), hx::TCanCast< LineJoinStyle_obj >,sStaticFields,sMemberFields,
	&__Create_LineJoinStyle_obj, &__Create,
	&super::__SGetClass(), &CreateLineJoinStyle_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void LineJoinStyle_obj::__boot()
{
hx::Static(LJBevel) = hx::CreateEnum< LineJoinStyle_obj >(HX_CSTRING("LJBevel"),1);
hx::Static(LJRound) = hx::CreateEnum< LineJoinStyle_obj >(HX_CSTRING("LJRound"),0);
}


} // end namespace format
} // end namespace swf
