#include <hxcpp.h>

#ifndef INCLUDED_format_swf_SoundRate
#include <format/swf/SoundRate.h>
#endif
namespace format{
namespace swf{

::format::swf::SoundRate SoundRate_obj::SR11k;

::format::swf::SoundRate SoundRate_obj::SR22k;

::format::swf::SoundRate SoundRate_obj::SR44k;

::format::swf::SoundRate SoundRate_obj::SR5k;

HX_DEFINE_CREATE_ENUM(SoundRate_obj)

int SoundRate_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("SR11k")) return 1;
	if (inName==HX_CSTRING("SR22k")) return 2;
	if (inName==HX_CSTRING("SR44k")) return 3;
	if (inName==HX_CSTRING("SR5k")) return 0;
	return super::__FindIndex(inName);
}

int SoundRate_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("SR11k")) return 0;
	if (inName==HX_CSTRING("SR22k")) return 0;
	if (inName==HX_CSTRING("SR44k")) return 0;
	if (inName==HX_CSTRING("SR5k")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic SoundRate_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("SR11k")) return SR11k;
	if (inName==HX_CSTRING("SR22k")) return SR22k;
	if (inName==HX_CSTRING("SR44k")) return SR44k;
	if (inName==HX_CSTRING("SR5k")) return SR5k;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("SR5k"),
	HX_CSTRING("SR11k"),
	HX_CSTRING("SR22k"),
	HX_CSTRING("SR44k"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundRate_obj::SR11k,"SR11k");
	HX_MARK_MEMBER_NAME(SoundRate_obj::SR22k,"SR22k");
	HX_MARK_MEMBER_NAME(SoundRate_obj::SR44k,"SR44k");
	HX_MARK_MEMBER_NAME(SoundRate_obj::SR5k,"SR5k");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundRate_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SoundRate_obj::SR11k,"SR11k");
	HX_VISIT_MEMBER_NAME(SoundRate_obj::SR22k,"SR22k");
	HX_VISIT_MEMBER_NAME(SoundRate_obj::SR44k,"SR44k");
	HX_VISIT_MEMBER_NAME(SoundRate_obj::SR5k,"SR5k");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class SoundRate_obj::__mClass;

Dynamic __Create_SoundRate_obj() { return new SoundRate_obj; }

void SoundRate_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.SoundRate"), hx::TCanCast< SoundRate_obj >,sStaticFields,sMemberFields,
	&__Create_SoundRate_obj, &__Create,
	&super::__SGetClass(), &CreateSoundRate_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void SoundRate_obj::__boot()
{
hx::Static(SR11k) = hx::CreateEnum< SoundRate_obj >(HX_CSTRING("SR11k"),1);
hx::Static(SR22k) = hx::CreateEnum< SoundRate_obj >(HX_CSTRING("SR22k"),2);
hx::Static(SR44k) = hx::CreateEnum< SoundRate_obj >(HX_CSTRING("SR44k"),3);
hx::Static(SR5k) = hx::CreateEnum< SoundRate_obj >(HX_CSTRING("SR5k"),0);
}


} // end namespace format
} // end namespace swf
