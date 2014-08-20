#include <hxcpp.h>

#ifndef INCLUDED_format_swf_FontData
#include <format/swf/FontData.h>
#endif
namespace format{
namespace swf{

::format::swf::FontData  FontData_obj::FDFont1(Dynamic data)
	{ return hx::CreateEnum< FontData_obj >(HX_CSTRING("FDFont1"),0,hx::DynamicArray(0,1).Add(data)); }

::format::swf::FontData  FontData_obj::FDFont2(bool hasWideChars,Dynamic data)
	{ return hx::CreateEnum< FontData_obj >(HX_CSTRING("FDFont2"),1,hx::DynamicArray(0,2).Add(hasWideChars).Add(data)); }

::format::swf::FontData  FontData_obj::FDFont3(Dynamic data)
	{ return hx::CreateEnum< FontData_obj >(HX_CSTRING("FDFont3"),2,hx::DynamicArray(0,1).Add(data)); }

HX_DEFINE_CREATE_ENUM(FontData_obj)

int FontData_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("FDFont1")) return 0;
	if (inName==HX_CSTRING("FDFont2")) return 1;
	if (inName==HX_CSTRING("FDFont3")) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontData_obj,FDFont1,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FontData_obj,FDFont2,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontData_obj,FDFont3,return)

int FontData_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("FDFont1")) return 1;
	if (inName==HX_CSTRING("FDFont2")) return 2;
	if (inName==HX_CSTRING("FDFont3")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic FontData_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("FDFont1")) return FDFont1_dyn();
	if (inName==HX_CSTRING("FDFont2")) return FDFont2_dyn();
	if (inName==HX_CSTRING("FDFont3")) return FDFont3_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("FDFont1"),
	HX_CSTRING("FDFont2"),
	HX_CSTRING("FDFont3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontData_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FontData_obj::__mClass;

Dynamic __Create_FontData_obj() { return new FontData_obj; }

void FontData_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.FontData"), hx::TCanCast< FontData_obj >,sStaticFields,sMemberFields,
	&__Create_FontData_obj, &__Create,
	&super::__SGetClass(), &CreateFontData_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FontData_obj::__boot()
{
}


} // end namespace format
} // end namespace swf
