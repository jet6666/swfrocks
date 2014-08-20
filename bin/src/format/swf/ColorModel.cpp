#include <hxcpp.h>

#ifndef INCLUDED_format_swf_ColorModel
#include <format/swf/ColorModel.h>
#endif
namespace format{
namespace swf{

::format::swf::ColorModel ColorModel_obj::CM15Bits;

::format::swf::ColorModel ColorModel_obj::CM24Bits;

::format::swf::ColorModel ColorModel_obj::CM32Bits;

::format::swf::ColorModel  ColorModel_obj::CM8Bits(int ncolors)
	{ return hx::CreateEnum< ColorModel_obj >(HX_CSTRING("CM8Bits"),0,hx::DynamicArray(0,1).Add(ncolors)); }

HX_DEFINE_CREATE_ENUM(ColorModel_obj)

int ColorModel_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("CM15Bits")) return 1;
	if (inName==HX_CSTRING("CM24Bits")) return 2;
	if (inName==HX_CSTRING("CM32Bits")) return 3;
	if (inName==HX_CSTRING("CM8Bits")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorModel_obj,CM8Bits,return)

int ColorModel_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("CM15Bits")) return 0;
	if (inName==HX_CSTRING("CM24Bits")) return 0;
	if (inName==HX_CSTRING("CM32Bits")) return 0;
	if (inName==HX_CSTRING("CM8Bits")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic ColorModel_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("CM15Bits")) return CM15Bits;
	if (inName==HX_CSTRING("CM24Bits")) return CM24Bits;
	if (inName==HX_CSTRING("CM32Bits")) return CM32Bits;
	if (inName==HX_CSTRING("CM8Bits")) return CM8Bits_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("CM8Bits"),
	HX_CSTRING("CM15Bits"),
	HX_CSTRING("CM24Bits"),
	HX_CSTRING("CM32Bits"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorModel_obj::CM15Bits,"CM15Bits");
	HX_MARK_MEMBER_NAME(ColorModel_obj::CM24Bits,"CM24Bits");
	HX_MARK_MEMBER_NAME(ColorModel_obj::CM32Bits,"CM32Bits");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorModel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ColorModel_obj::CM15Bits,"CM15Bits");
	HX_VISIT_MEMBER_NAME(ColorModel_obj::CM24Bits,"CM24Bits");
	HX_VISIT_MEMBER_NAME(ColorModel_obj::CM32Bits,"CM32Bits");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class ColorModel_obj::__mClass;

Dynamic __Create_ColorModel_obj() { return new ColorModel_obj; }

void ColorModel_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.ColorModel"), hx::TCanCast< ColorModel_obj >,sStaticFields,sMemberFields,
	&__Create_ColorModel_obj, &__Create,
	&super::__SGetClass(), &CreateColorModel_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ColorModel_obj::__boot()
{
hx::Static(CM15Bits) = hx::CreateEnum< ColorModel_obj >(HX_CSTRING("CM15Bits"),1);
hx::Static(CM24Bits) = hx::CreateEnum< ColorModel_obj >(HX_CSTRING("CM24Bits"),2);
hx::Static(CM32Bits) = hx::CreateEnum< ColorModel_obj >(HX_CSTRING("CM32Bits"),3);
}


} // end namespace format
} // end namespace swf
