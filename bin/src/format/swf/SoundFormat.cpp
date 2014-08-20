#include <hxcpp.h>

#ifndef INCLUDED_format_swf_SoundFormat
#include <format/swf/SoundFormat.h>
#endif
namespace format{
namespace swf{

::format::swf::SoundFormat SoundFormat_obj::SFADPCM;

::format::swf::SoundFormat SoundFormat_obj::SFLittleEndianUncompressed;

::format::swf::SoundFormat SoundFormat_obj::SFMP3;

::format::swf::SoundFormat SoundFormat_obj::SFNativeEndianUncompressed;

::format::swf::SoundFormat SoundFormat_obj::SFNellymoser;

::format::swf::SoundFormat SoundFormat_obj::SFNellymoser16k;

::format::swf::SoundFormat SoundFormat_obj::SFNellymoser8k;

::format::swf::SoundFormat SoundFormat_obj::SFSpeex;

HX_DEFINE_CREATE_ENUM(SoundFormat_obj)

int SoundFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("SFADPCM")) return 1;
	if (inName==HX_CSTRING("SFLittleEndianUncompressed")) return 3;
	if (inName==HX_CSTRING("SFMP3")) return 2;
	if (inName==HX_CSTRING("SFNativeEndianUncompressed")) return 0;
	if (inName==HX_CSTRING("SFNellymoser")) return 6;
	if (inName==HX_CSTRING("SFNellymoser16k")) return 4;
	if (inName==HX_CSTRING("SFNellymoser8k")) return 5;
	if (inName==HX_CSTRING("SFSpeex")) return 7;
	return super::__FindIndex(inName);
}

int SoundFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("SFADPCM")) return 0;
	if (inName==HX_CSTRING("SFLittleEndianUncompressed")) return 0;
	if (inName==HX_CSTRING("SFMP3")) return 0;
	if (inName==HX_CSTRING("SFNativeEndianUncompressed")) return 0;
	if (inName==HX_CSTRING("SFNellymoser")) return 0;
	if (inName==HX_CSTRING("SFNellymoser16k")) return 0;
	if (inName==HX_CSTRING("SFNellymoser8k")) return 0;
	if (inName==HX_CSTRING("SFSpeex")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic SoundFormat_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("SFADPCM")) return SFADPCM;
	if (inName==HX_CSTRING("SFLittleEndianUncompressed")) return SFLittleEndianUncompressed;
	if (inName==HX_CSTRING("SFMP3")) return SFMP3;
	if (inName==HX_CSTRING("SFNativeEndianUncompressed")) return SFNativeEndianUncompressed;
	if (inName==HX_CSTRING("SFNellymoser")) return SFNellymoser;
	if (inName==HX_CSTRING("SFNellymoser16k")) return SFNellymoser16k;
	if (inName==HX_CSTRING("SFNellymoser8k")) return SFNellymoser8k;
	if (inName==HX_CSTRING("SFSpeex")) return SFSpeex;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("SFNativeEndianUncompressed"),
	HX_CSTRING("SFADPCM"),
	HX_CSTRING("SFMP3"),
	HX_CSTRING("SFLittleEndianUncompressed"),
	HX_CSTRING("SFNellymoser16k"),
	HX_CSTRING("SFNellymoser8k"),
	HX_CSTRING("SFNellymoser"),
	HX_CSTRING("SFSpeex"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundFormat_obj::SFADPCM,"SFADPCM");
	HX_MARK_MEMBER_NAME(SoundFormat_obj::SFLittleEndianUncompressed,"SFLittleEndianUncompressed");
	HX_MARK_MEMBER_NAME(SoundFormat_obj::SFMP3,"SFMP3");
	HX_MARK_MEMBER_NAME(SoundFormat_obj::SFNativeEndianUncompressed,"SFNativeEndianUncompressed");
	HX_MARK_MEMBER_NAME(SoundFormat_obj::SFNellymoser,"SFNellymoser");
	HX_MARK_MEMBER_NAME(SoundFormat_obj::SFNellymoser16k,"SFNellymoser16k");
	HX_MARK_MEMBER_NAME(SoundFormat_obj::SFNellymoser8k,"SFNellymoser8k");
	HX_MARK_MEMBER_NAME(SoundFormat_obj::SFSpeex,"SFSpeex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundFormat_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SoundFormat_obj::SFADPCM,"SFADPCM");
	HX_VISIT_MEMBER_NAME(SoundFormat_obj::SFLittleEndianUncompressed,"SFLittleEndianUncompressed");
	HX_VISIT_MEMBER_NAME(SoundFormat_obj::SFMP3,"SFMP3");
	HX_VISIT_MEMBER_NAME(SoundFormat_obj::SFNativeEndianUncompressed,"SFNativeEndianUncompressed");
	HX_VISIT_MEMBER_NAME(SoundFormat_obj::SFNellymoser,"SFNellymoser");
	HX_VISIT_MEMBER_NAME(SoundFormat_obj::SFNellymoser16k,"SFNellymoser16k");
	HX_VISIT_MEMBER_NAME(SoundFormat_obj::SFNellymoser8k,"SFNellymoser8k");
	HX_VISIT_MEMBER_NAME(SoundFormat_obj::SFSpeex,"SFSpeex");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class SoundFormat_obj::__mClass;

Dynamic __Create_SoundFormat_obj() { return new SoundFormat_obj; }

void SoundFormat_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.SoundFormat"), hx::TCanCast< SoundFormat_obj >,sStaticFields,sMemberFields,
	&__Create_SoundFormat_obj, &__Create,
	&super::__SGetClass(), &CreateSoundFormat_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void SoundFormat_obj::__boot()
{
hx::Static(SFADPCM) = hx::CreateEnum< SoundFormat_obj >(HX_CSTRING("SFADPCM"),1);
hx::Static(SFLittleEndianUncompressed) = hx::CreateEnum< SoundFormat_obj >(HX_CSTRING("SFLittleEndianUncompressed"),3);
hx::Static(SFMP3) = hx::CreateEnum< SoundFormat_obj >(HX_CSTRING("SFMP3"),2);
hx::Static(SFNativeEndianUncompressed) = hx::CreateEnum< SoundFormat_obj >(HX_CSTRING("SFNativeEndianUncompressed"),0);
hx::Static(SFNellymoser) = hx::CreateEnum< SoundFormat_obj >(HX_CSTRING("SFNellymoser"),6);
hx::Static(SFNellymoser16k) = hx::CreateEnum< SoundFormat_obj >(HX_CSTRING("SFNellymoser16k"),4);
hx::Static(SFNellymoser8k) = hx::CreateEnum< SoundFormat_obj >(HX_CSTRING("SFNellymoser8k"),5);
hx::Static(SFSpeex) = hx::CreateEnum< SoundFormat_obj >(HX_CSTRING("SFSpeex"),7);
}


} // end namespace format
} // end namespace swf
