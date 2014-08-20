#include <hxcpp.h>

#ifndef INCLUDED_format_swf_FontInfoData
#include <format/swf/FontInfoData.h>
#endif
#ifndef INCLUDED_format_swf_LangCode
#include <format/swf/LangCode.h>
#endif
namespace format{
namespace swf{

::format::swf::FontInfoData  FontInfoData_obj::FIDFont1(bool shiftJIS,bool isANSI,bool hasWideCodes,Dynamic data)
	{ return hx::CreateEnum< FontInfoData_obj >(HX_CSTRING("FIDFont1"),0,hx::DynamicArray(0,4).Add(shiftJIS).Add(isANSI).Add(hasWideCodes).Add(data)); }

::format::swf::FontInfoData  FontInfoData_obj::FIDFont2(::format::swf::LangCode language,Dynamic data)
	{ return hx::CreateEnum< FontInfoData_obj >(HX_CSTRING("FIDFont2"),1,hx::DynamicArray(0,2).Add(language).Add(data)); }

HX_DEFINE_CREATE_ENUM(FontInfoData_obj)

int FontInfoData_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("FIDFont1")) return 0;
	if (inName==HX_CSTRING("FIDFont2")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC4(FontInfoData_obj,FIDFont1,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FontInfoData_obj,FIDFont2,return)

int FontInfoData_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("FIDFont1")) return 4;
	if (inName==HX_CSTRING("FIDFont2")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic FontInfoData_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("FIDFont1")) return FIDFont1_dyn();
	if (inName==HX_CSTRING("FIDFont2")) return FIDFont2_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("FIDFont1"),
	HX_CSTRING("FIDFont2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontInfoData_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FontInfoData_obj::__mClass;

Dynamic __Create_FontInfoData_obj() { return new FontInfoData_obj; }

void FontInfoData_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.FontInfoData"), hx::TCanCast< FontInfoData_obj >,sStaticFields,sMemberFields,
	&__Create_FontInfoData_obj, &__Create,
	&super::__SGetClass(), &CreateFontInfoData_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FontInfoData_obj::__boot()
{
}


} // end namespace format
} // end namespace swf
