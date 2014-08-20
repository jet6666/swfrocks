#include <hxcpp.h>

#ifndef INCLUDED_format_swf_Morph2LineStyle
#include <format/swf/Morph2LineStyle.h>
#endif
#ifndef INCLUDED_format_swf_MorphFillStyle
#include <format/swf/MorphFillStyle.h>
#endif
namespace format{
namespace swf{

::format::swf::Morph2LineStyle  Morph2LineStyle_obj::M2LSFill(::format::swf::MorphFillStyle fill,Dynamic data)
	{ return hx::CreateEnum< Morph2LineStyle_obj >(HX_CSTRING("M2LSFill"),1,hx::DynamicArray(0,2).Add(fill).Add(data)); }

::format::swf::Morph2LineStyle  Morph2LineStyle_obj::M2LSNoFill(Dynamic startColor,Dynamic endColor,Dynamic data)
	{ return hx::CreateEnum< Morph2LineStyle_obj >(HX_CSTRING("M2LSNoFill"),0,hx::DynamicArray(0,3).Add(startColor).Add(endColor).Add(data)); }

HX_DEFINE_CREATE_ENUM(Morph2LineStyle_obj)

int Morph2LineStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("M2LSFill")) return 1;
	if (inName==HX_CSTRING("M2LSNoFill")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Morph2LineStyle_obj,M2LSFill,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Morph2LineStyle_obj,M2LSNoFill,return)

int Morph2LineStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("M2LSFill")) return 2;
	if (inName==HX_CSTRING("M2LSNoFill")) return 3;
	return super::__FindArgCount(inName);
}

Dynamic Morph2LineStyle_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("M2LSFill")) return M2LSFill_dyn();
	if (inName==HX_CSTRING("M2LSNoFill")) return M2LSNoFill_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("M2LSNoFill"),
	HX_CSTRING("M2LSFill"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Morph2LineStyle_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Morph2LineStyle_obj::__mClass;

Dynamic __Create_Morph2LineStyle_obj() { return new Morph2LineStyle_obj; }

void Morph2LineStyle_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.Morph2LineStyle"), hx::TCanCast< Morph2LineStyle_obj >,sStaticFields,sMemberFields,
	&__Create_Morph2LineStyle_obj, &__Create,
	&super::__SGetClass(), &CreateMorph2LineStyle_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Morph2LineStyle_obj::__boot()
{
}


} // end namespace format
} // end namespace swf
