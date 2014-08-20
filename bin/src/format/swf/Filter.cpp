#include <hxcpp.h>

#ifndef INCLUDED_format_swf_Filter
#include <format/swf/Filter.h>
#endif
namespace format{
namespace swf{

::format::swf::Filter  Filter_obj::FBevel(Dynamic data)
	{ return hx::CreateEnum< Filter_obj >(HX_CSTRING("FBevel"),3,hx::DynamicArray(0,1).Add(data)); }

::format::swf::Filter  Filter_obj::FBlur(Dynamic data)
	{ return hx::CreateEnum< Filter_obj >(HX_CSTRING("FBlur"),1,hx::DynamicArray(0,1).Add(data)); }

::format::swf::Filter  Filter_obj::FColorMatrix(Array< Float > data)
	{ return hx::CreateEnum< Filter_obj >(HX_CSTRING("FColorMatrix"),5,hx::DynamicArray(0,1).Add(data)); }

::format::swf::Filter  Filter_obj::FDropShadow(Dynamic data)
	{ return hx::CreateEnum< Filter_obj >(HX_CSTRING("FDropShadow"),0,hx::DynamicArray(0,1).Add(data)); }

::format::swf::Filter  Filter_obj::FGlow(Dynamic data)
	{ return hx::CreateEnum< Filter_obj >(HX_CSTRING("FGlow"),2,hx::DynamicArray(0,1).Add(data)); }

::format::swf::Filter  Filter_obj::FGradientBevel(Dynamic data)
	{ return hx::CreateEnum< Filter_obj >(HX_CSTRING("FGradientBevel"),6,hx::DynamicArray(0,1).Add(data)); }

::format::swf::Filter  Filter_obj::FGradientGlow(Dynamic data)
	{ return hx::CreateEnum< Filter_obj >(HX_CSTRING("FGradientGlow"),4,hx::DynamicArray(0,1).Add(data)); }

HX_DEFINE_CREATE_ENUM(Filter_obj)

int Filter_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("FBevel")) return 3;
	if (inName==HX_CSTRING("FBlur")) return 1;
	if (inName==HX_CSTRING("FColorMatrix")) return 5;
	if (inName==HX_CSTRING("FDropShadow")) return 0;
	if (inName==HX_CSTRING("FGlow")) return 2;
	if (inName==HX_CSTRING("FGradientBevel")) return 6;
	if (inName==HX_CSTRING("FGradientGlow")) return 4;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Filter_obj,FBevel,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Filter_obj,FBlur,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Filter_obj,FColorMatrix,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Filter_obj,FDropShadow,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Filter_obj,FGlow,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Filter_obj,FGradientBevel,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Filter_obj,FGradientGlow,return)

int Filter_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("FBevel")) return 1;
	if (inName==HX_CSTRING("FBlur")) return 1;
	if (inName==HX_CSTRING("FColorMatrix")) return 1;
	if (inName==HX_CSTRING("FDropShadow")) return 1;
	if (inName==HX_CSTRING("FGlow")) return 1;
	if (inName==HX_CSTRING("FGradientBevel")) return 1;
	if (inName==HX_CSTRING("FGradientGlow")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Filter_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("FBevel")) return FBevel_dyn();
	if (inName==HX_CSTRING("FBlur")) return FBlur_dyn();
	if (inName==HX_CSTRING("FColorMatrix")) return FColorMatrix_dyn();
	if (inName==HX_CSTRING("FDropShadow")) return FDropShadow_dyn();
	if (inName==HX_CSTRING("FGlow")) return FGlow_dyn();
	if (inName==HX_CSTRING("FGradientBevel")) return FGradientBevel_dyn();
	if (inName==HX_CSTRING("FGradientGlow")) return FGradientGlow_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("FDropShadow"),
	HX_CSTRING("FBlur"),
	HX_CSTRING("FGlow"),
	HX_CSTRING("FBevel"),
	HX_CSTRING("FGradientGlow"),
	HX_CSTRING("FColorMatrix"),
	HX_CSTRING("FGradientBevel"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Filter_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Filter_obj::__mClass;

Dynamic __Create_Filter_obj() { return new Filter_obj; }

void Filter_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.Filter"), hx::TCanCast< Filter_obj >,sStaticFields,sMemberFields,
	&__Create_Filter_obj, &__Create,
	&super::__SGetClass(), &CreateFilter_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Filter_obj::__boot()
{
}


} // end namespace format
} // end namespace swf
