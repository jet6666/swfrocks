#include <hxcpp.h>

#ifndef INCLUDED_format_swf_MorphFillStyle
#include <format/swf/MorphFillStyle.h>
#endif
namespace format{
namespace swf{

::format::swf::MorphFillStyle  MorphFillStyle_obj::MFSBitmap(int cid,Dynamic startMatrix,Dynamic endMatrix,bool repeat,bool smooth)
	{ return hx::CreateEnum< MorphFillStyle_obj >(HX_CSTRING("MFSBitmap"),3,hx::DynamicArray(0,5).Add(cid).Add(startMatrix).Add(endMatrix).Add(repeat).Add(smooth)); }

::format::swf::MorphFillStyle  MorphFillStyle_obj::MFSLinearGradient(Dynamic startMatrix,Dynamic endMatrix,Dynamic gradients)
	{ return hx::CreateEnum< MorphFillStyle_obj >(HX_CSTRING("MFSLinearGradient"),1,hx::DynamicArray(0,3).Add(startMatrix).Add(endMatrix).Add(gradients)); }

::format::swf::MorphFillStyle  MorphFillStyle_obj::MFSRadialGradient(Dynamic startMatrix,Dynamic endMatrix,Dynamic gradients)
	{ return hx::CreateEnum< MorphFillStyle_obj >(HX_CSTRING("MFSRadialGradient"),2,hx::DynamicArray(0,3).Add(startMatrix).Add(endMatrix).Add(gradients)); }

::format::swf::MorphFillStyle  MorphFillStyle_obj::MFSSolid(Dynamic startColor,Dynamic endColor)
	{ return hx::CreateEnum< MorphFillStyle_obj >(HX_CSTRING("MFSSolid"),0,hx::DynamicArray(0,2).Add(startColor).Add(endColor)); }

HX_DEFINE_CREATE_ENUM(MorphFillStyle_obj)

int MorphFillStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("MFSBitmap")) return 3;
	if (inName==HX_CSTRING("MFSLinearGradient")) return 1;
	if (inName==HX_CSTRING("MFSRadialGradient")) return 2;
	if (inName==HX_CSTRING("MFSSolid")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC5(MorphFillStyle_obj,MFSBitmap,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(MorphFillStyle_obj,MFSLinearGradient,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(MorphFillStyle_obj,MFSRadialGradient,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(MorphFillStyle_obj,MFSSolid,return)

int MorphFillStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("MFSBitmap")) return 5;
	if (inName==HX_CSTRING("MFSLinearGradient")) return 3;
	if (inName==HX_CSTRING("MFSRadialGradient")) return 3;
	if (inName==HX_CSTRING("MFSSolid")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic MorphFillStyle_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("MFSBitmap")) return MFSBitmap_dyn();
	if (inName==HX_CSTRING("MFSLinearGradient")) return MFSLinearGradient_dyn();
	if (inName==HX_CSTRING("MFSRadialGradient")) return MFSRadialGradient_dyn();
	if (inName==HX_CSTRING("MFSSolid")) return MFSSolid_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("MFSSolid"),
	HX_CSTRING("MFSLinearGradient"),
	HX_CSTRING("MFSRadialGradient"),
	HX_CSTRING("MFSBitmap"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MorphFillStyle_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class MorphFillStyle_obj::__mClass;

Dynamic __Create_MorphFillStyle_obj() { return new MorphFillStyle_obj; }

void MorphFillStyle_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.MorphFillStyle"), hx::TCanCast< MorphFillStyle_obj >,sStaticFields,sMemberFields,
	&__Create_MorphFillStyle_obj, &__Create,
	&super::__SGetClass(), &CreateMorphFillStyle_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void MorphFillStyle_obj::__boot()
{
}


} // end namespace format
} // end namespace swf
