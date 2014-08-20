#include <hxcpp.h>

#ifndef INCLUDED_format_swf_FillStyle
#include <format/swf/FillStyle.h>
#endif
namespace format{
namespace swf{

::format::swf::FillStyle  FillStyle_obj::FSBitmap(int cid,Dynamic mat,bool repeat,bool smooth)
	{ return hx::CreateEnum< FillStyle_obj >(HX_CSTRING("FSBitmap"),5,hx::DynamicArray(0,4).Add(cid).Add(mat).Add(repeat).Add(smooth)); }

::format::swf::FillStyle  FillStyle_obj::FSFocalGradient(Dynamic mat,Dynamic grad)
	{ return hx::CreateEnum< FillStyle_obj >(HX_CSTRING("FSFocalGradient"),4,hx::DynamicArray(0,2).Add(mat).Add(grad)); }

::format::swf::FillStyle  FillStyle_obj::FSLinearGradient(Dynamic mat,Dynamic grad)
	{ return hx::CreateEnum< FillStyle_obj >(HX_CSTRING("FSLinearGradient"),2,hx::DynamicArray(0,2).Add(mat).Add(grad)); }

::format::swf::FillStyle  FillStyle_obj::FSRadialGradient(Dynamic mat,Dynamic grad)
	{ return hx::CreateEnum< FillStyle_obj >(HX_CSTRING("FSRadialGradient"),3,hx::DynamicArray(0,2).Add(mat).Add(grad)); }

::format::swf::FillStyle  FillStyle_obj::FSSolid(Dynamic rgb)
	{ return hx::CreateEnum< FillStyle_obj >(HX_CSTRING("FSSolid"),0,hx::DynamicArray(0,1).Add(rgb)); }

::format::swf::FillStyle  FillStyle_obj::FSSolidAlpha(Dynamic rgb)
	{ return hx::CreateEnum< FillStyle_obj >(HX_CSTRING("FSSolidAlpha"),1,hx::DynamicArray(0,1).Add(rgb)); }

HX_DEFINE_CREATE_ENUM(FillStyle_obj)

int FillStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("FSBitmap")) return 5;
	if (inName==HX_CSTRING("FSFocalGradient")) return 4;
	if (inName==HX_CSTRING("FSLinearGradient")) return 2;
	if (inName==HX_CSTRING("FSRadialGradient")) return 3;
	if (inName==HX_CSTRING("FSSolid")) return 0;
	if (inName==HX_CSTRING("FSSolidAlpha")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC4(FillStyle_obj,FSBitmap,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FillStyle_obj,FSFocalGradient,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FillStyle_obj,FSLinearGradient,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FillStyle_obj,FSRadialGradient,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FillStyle_obj,FSSolid,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FillStyle_obj,FSSolidAlpha,return)

int FillStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("FSBitmap")) return 4;
	if (inName==HX_CSTRING("FSFocalGradient")) return 2;
	if (inName==HX_CSTRING("FSLinearGradient")) return 2;
	if (inName==HX_CSTRING("FSRadialGradient")) return 2;
	if (inName==HX_CSTRING("FSSolid")) return 1;
	if (inName==HX_CSTRING("FSSolidAlpha")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic FillStyle_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("FSBitmap")) return FSBitmap_dyn();
	if (inName==HX_CSTRING("FSFocalGradient")) return FSFocalGradient_dyn();
	if (inName==HX_CSTRING("FSLinearGradient")) return FSLinearGradient_dyn();
	if (inName==HX_CSTRING("FSRadialGradient")) return FSRadialGradient_dyn();
	if (inName==HX_CSTRING("FSSolid")) return FSSolid_dyn();
	if (inName==HX_CSTRING("FSSolidAlpha")) return FSSolidAlpha_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("FSSolid"),
	HX_CSTRING("FSSolidAlpha"),
	HX_CSTRING("FSLinearGradient"),
	HX_CSTRING("FSRadialGradient"),
	HX_CSTRING("FSFocalGradient"),
	HX_CSTRING("FSBitmap"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FillStyle_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FillStyle_obj::__mClass;

Dynamic __Create_FillStyle_obj() { return new FillStyle_obj; }

void FillStyle_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.FillStyle"), hx::TCanCast< FillStyle_obj >,sStaticFields,sMemberFields,
	&__Create_FillStyle_obj, &__Create,
	&super::__SGetClass(), &CreateFillStyle_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FillStyle_obj::__boot()
{
}


} // end namespace format
} // end namespace swf
