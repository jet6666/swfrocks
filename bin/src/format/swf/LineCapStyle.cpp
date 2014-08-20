#include <hxcpp.h>

#ifndef INCLUDED_format_swf_LineCapStyle
#include <format/swf/LineCapStyle.h>
#endif
namespace format{
namespace swf{

::format::swf::LineCapStyle LineCapStyle_obj::LCNone;

::format::swf::LineCapStyle LineCapStyle_obj::LCRound;

::format::swf::LineCapStyle LineCapStyle_obj::LCSquare;

HX_DEFINE_CREATE_ENUM(LineCapStyle_obj)

int LineCapStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("LCNone")) return 1;
	if (inName==HX_CSTRING("LCRound")) return 0;
	if (inName==HX_CSTRING("LCSquare")) return 2;
	return super::__FindIndex(inName);
}

int LineCapStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("LCNone")) return 0;
	if (inName==HX_CSTRING("LCRound")) return 0;
	if (inName==HX_CSTRING("LCSquare")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic LineCapStyle_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("LCNone")) return LCNone;
	if (inName==HX_CSTRING("LCRound")) return LCRound;
	if (inName==HX_CSTRING("LCSquare")) return LCSquare;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("LCRound"),
	HX_CSTRING("LCNone"),
	HX_CSTRING("LCSquare"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineCapStyle_obj::LCNone,"LCNone");
	HX_MARK_MEMBER_NAME(LineCapStyle_obj::LCRound,"LCRound");
	HX_MARK_MEMBER_NAME(LineCapStyle_obj::LCSquare,"LCSquare");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineCapStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LineCapStyle_obj::LCNone,"LCNone");
	HX_VISIT_MEMBER_NAME(LineCapStyle_obj::LCRound,"LCRound");
	HX_VISIT_MEMBER_NAME(LineCapStyle_obj::LCSquare,"LCSquare");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class LineCapStyle_obj::__mClass;

Dynamic __Create_LineCapStyle_obj() { return new LineCapStyle_obj; }

void LineCapStyle_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.LineCapStyle"), hx::TCanCast< LineCapStyle_obj >,sStaticFields,sMemberFields,
	&__Create_LineCapStyle_obj, &__Create,
	&super::__SGetClass(), &CreateLineCapStyle_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void LineCapStyle_obj::__boot()
{
hx::Static(LCNone) = hx::CreateEnum< LineCapStyle_obj >(HX_CSTRING("LCNone"),1);
hx::Static(LCRound) = hx::CreateEnum< LineCapStyle_obj >(HX_CSTRING("LCRound"),0);
hx::Static(LCSquare) = hx::CreateEnum< LineCapStyle_obj >(HX_CSTRING("LCSquare"),2);
}


} // end namespace format
} // end namespace swf
