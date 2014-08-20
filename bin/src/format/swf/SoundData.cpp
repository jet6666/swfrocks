#include <hxcpp.h>

#ifndef INCLUDED_format_swf_SoundData
#include <format/swf/SoundData.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace format{
namespace swf{

::format::swf::SoundData  SoundData_obj::SDMp3(int seek,::haxe::io::Bytes data)
	{ return hx::CreateEnum< SoundData_obj >(HX_CSTRING("SDMp3"),0,hx::DynamicArray(0,2).Add(seek).Add(data)); }

::format::swf::SoundData  SoundData_obj::SDOther(::haxe::io::Bytes data)
	{ return hx::CreateEnum< SoundData_obj >(HX_CSTRING("SDOther"),2,hx::DynamicArray(0,1).Add(data)); }

::format::swf::SoundData  SoundData_obj::SDRaw(::haxe::io::Bytes data)
	{ return hx::CreateEnum< SoundData_obj >(HX_CSTRING("SDRaw"),1,hx::DynamicArray(0,1).Add(data)); }

HX_DEFINE_CREATE_ENUM(SoundData_obj)

int SoundData_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("SDMp3")) return 0;
	if (inName==HX_CSTRING("SDOther")) return 2;
	if (inName==HX_CSTRING("SDRaw")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(SoundData_obj,SDMp3,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(SoundData_obj,SDOther,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(SoundData_obj,SDRaw,return)

int SoundData_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("SDMp3")) return 2;
	if (inName==HX_CSTRING("SDOther")) return 1;
	if (inName==HX_CSTRING("SDRaw")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic SoundData_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("SDMp3")) return SDMp3_dyn();
	if (inName==HX_CSTRING("SDOther")) return SDOther_dyn();
	if (inName==HX_CSTRING("SDRaw")) return SDRaw_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("SDMp3"),
	HX_CSTRING("SDRaw"),
	HX_CSTRING("SDOther"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundData_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class SoundData_obj::__mClass;

Dynamic __Create_SoundData_obj() { return new SoundData_obj; }

void SoundData_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.SoundData"), hx::TCanCast< SoundData_obj >,sStaticFields,sMemberFields,
	&__Create_SoundData_obj, &__Create,
	&super::__SGetClass(), &CreateSoundData_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void SoundData_obj::__boot()
{
}


} // end namespace format
} // end namespace swf
