#include <hxcpp.h>

#ifndef INCLUDED_format_swf_JPEGData
#include <format/swf/JPEGData.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace format{
namespace swf{

::format::swf::JPEGData  JPEGData_obj::JDJPEG1(::haxe::io::Bytes data)
	{ return hx::CreateEnum< JPEGData_obj >(HX_CSTRING("JDJPEG1"),0,hx::DynamicArray(0,1).Add(data)); }

::format::swf::JPEGData  JPEGData_obj::JDJPEG2(::haxe::io::Bytes data)
	{ return hx::CreateEnum< JPEGData_obj >(HX_CSTRING("JDJPEG2"),1,hx::DynamicArray(0,1).Add(data)); }

::format::swf::JPEGData  JPEGData_obj::JDJPEG3(::haxe::io::Bytes data,::haxe::io::Bytes mask)
	{ return hx::CreateEnum< JPEGData_obj >(HX_CSTRING("JDJPEG3"),2,hx::DynamicArray(0,2).Add(data).Add(mask)); }

HX_DEFINE_CREATE_ENUM(JPEGData_obj)

int JPEGData_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("JDJPEG1")) return 0;
	if (inName==HX_CSTRING("JDJPEG2")) return 1;
	if (inName==HX_CSTRING("JDJPEG3")) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(JPEGData_obj,JDJPEG1,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(JPEGData_obj,JDJPEG2,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEGData_obj,JDJPEG3,return)

int JPEGData_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("JDJPEG1")) return 1;
	if (inName==HX_CSTRING("JDJPEG2")) return 1;
	if (inName==HX_CSTRING("JDJPEG3")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic JPEGData_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("JDJPEG1")) return JDJPEG1_dyn();
	if (inName==HX_CSTRING("JDJPEG2")) return JDJPEG2_dyn();
	if (inName==HX_CSTRING("JDJPEG3")) return JDJPEG3_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("JDJPEG1"),
	HX_CSTRING("JDJPEG2"),
	HX_CSTRING("JDJPEG3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JPEGData_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class JPEGData_obj::__mClass;

Dynamic __Create_JPEGData_obj() { return new JPEGData_obj; }

void JPEGData_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.JPEGData"), hx::TCanCast< JPEGData_obj >,sStaticFields,sMemberFields,
	&__Create_JPEGData_obj, &__Create,
	&super::__SGetClass(), &CreateJPEGData_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void JPEGData_obj::__boot()
{
}


} // end namespace format
} // end namespace swf
