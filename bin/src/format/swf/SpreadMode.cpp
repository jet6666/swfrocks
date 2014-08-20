#include <hxcpp.h>

#ifndef INCLUDED_format_swf_SpreadMode
#include <format/swf/SpreadMode.h>
#endif
namespace format{
namespace swf{

::format::swf::SpreadMode SpreadMode_obj::SMPad;

::format::swf::SpreadMode SpreadMode_obj::SMReflect;

::format::swf::SpreadMode SpreadMode_obj::SMRepeat;

::format::swf::SpreadMode SpreadMode_obj::SMReserved;

HX_DEFINE_CREATE_ENUM(SpreadMode_obj)

int SpreadMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("SMPad")) return 0;
	if (inName==HX_CSTRING("SMReflect")) return 1;
	if (inName==HX_CSTRING("SMRepeat")) return 2;
	if (inName==HX_CSTRING("SMReserved")) return 3;
	return super::__FindIndex(inName);
}

int SpreadMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("SMPad")) return 0;
	if (inName==HX_CSTRING("SMReflect")) return 0;
	if (inName==HX_CSTRING("SMRepeat")) return 0;
	if (inName==HX_CSTRING("SMReserved")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic SpreadMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("SMPad")) return SMPad;
	if (inName==HX_CSTRING("SMReflect")) return SMReflect;
	if (inName==HX_CSTRING("SMRepeat")) return SMRepeat;
	if (inName==HX_CSTRING("SMReserved")) return SMReserved;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("SMPad"),
	HX_CSTRING("SMReflect"),
	HX_CSTRING("SMRepeat"),
	HX_CSTRING("SMReserved"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpreadMode_obj::SMPad,"SMPad");
	HX_MARK_MEMBER_NAME(SpreadMode_obj::SMReflect,"SMReflect");
	HX_MARK_MEMBER_NAME(SpreadMode_obj::SMRepeat,"SMRepeat");
	HX_MARK_MEMBER_NAME(SpreadMode_obj::SMReserved,"SMReserved");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpreadMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SpreadMode_obj::SMPad,"SMPad");
	HX_VISIT_MEMBER_NAME(SpreadMode_obj::SMReflect,"SMReflect");
	HX_VISIT_MEMBER_NAME(SpreadMode_obj::SMRepeat,"SMRepeat");
	HX_VISIT_MEMBER_NAME(SpreadMode_obj::SMReserved,"SMReserved");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class SpreadMode_obj::__mClass;

Dynamic __Create_SpreadMode_obj() { return new SpreadMode_obj; }

void SpreadMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.SpreadMode"), hx::TCanCast< SpreadMode_obj >,sStaticFields,sMemberFields,
	&__Create_SpreadMode_obj, &__Create,
	&super::__SGetClass(), &CreateSpreadMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void SpreadMode_obj::__boot()
{
hx::Static(SMPad) = hx::CreateEnum< SpreadMode_obj >(HX_CSTRING("SMPad"),0);
hx::Static(SMReflect) = hx::CreateEnum< SpreadMode_obj >(HX_CSTRING("SMReflect"),1);
hx::Static(SMRepeat) = hx::CreateEnum< SpreadMode_obj >(HX_CSTRING("SMRepeat"),2);
hx::Static(SMReserved) = hx::CreateEnum< SpreadMode_obj >(HX_CSTRING("SMReserved"),3);
}


} // end namespace format
} // end namespace swf
