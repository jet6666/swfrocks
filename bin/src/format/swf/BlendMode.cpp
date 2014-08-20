#include <hxcpp.h>

#ifndef INCLUDED_format_swf_BlendMode
#include <format/swf/BlendMode.h>
#endif
namespace format{
namespace swf{

::format::swf::BlendMode BlendMode_obj::BAdd;

::format::swf::BlendMode BlendMode_obj::BAlpha;

::format::swf::BlendMode BlendMode_obj::BDarken;

::format::swf::BlendMode BlendMode_obj::BDifference;

::format::swf::BlendMode BlendMode_obj::BErase;

::format::swf::BlendMode BlendMode_obj::BHardLight;

::format::swf::BlendMode BlendMode_obj::BInvert;

::format::swf::BlendMode BlendMode_obj::BLayer;

::format::swf::BlendMode BlendMode_obj::BLighten;

::format::swf::BlendMode BlendMode_obj::BMultiply;

::format::swf::BlendMode BlendMode_obj::BNormal;

::format::swf::BlendMode BlendMode_obj::BOverlay;

::format::swf::BlendMode BlendMode_obj::BScreen;

::format::swf::BlendMode BlendMode_obj::BSubtract;

HX_DEFINE_CREATE_ENUM(BlendMode_obj)

int BlendMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BAdd")) return 7;
	if (inName==HX_CSTRING("BAlpha")) return 10;
	if (inName==HX_CSTRING("BDarken")) return 5;
	if (inName==HX_CSTRING("BDifference")) return 6;
	if (inName==HX_CSTRING("BErase")) return 11;
	if (inName==HX_CSTRING("BHardLight")) return 13;
	if (inName==HX_CSTRING("BInvert")) return 9;
	if (inName==HX_CSTRING("BLayer")) return 1;
	if (inName==HX_CSTRING("BLighten")) return 4;
	if (inName==HX_CSTRING("BMultiply")) return 2;
	if (inName==HX_CSTRING("BNormal")) return 0;
	if (inName==HX_CSTRING("BOverlay")) return 12;
	if (inName==HX_CSTRING("BScreen")) return 3;
	if (inName==HX_CSTRING("BSubtract")) return 8;
	return super::__FindIndex(inName);
}

int BlendMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BAdd")) return 0;
	if (inName==HX_CSTRING("BAlpha")) return 0;
	if (inName==HX_CSTRING("BDarken")) return 0;
	if (inName==HX_CSTRING("BDifference")) return 0;
	if (inName==HX_CSTRING("BErase")) return 0;
	if (inName==HX_CSTRING("BHardLight")) return 0;
	if (inName==HX_CSTRING("BInvert")) return 0;
	if (inName==HX_CSTRING("BLayer")) return 0;
	if (inName==HX_CSTRING("BLighten")) return 0;
	if (inName==HX_CSTRING("BMultiply")) return 0;
	if (inName==HX_CSTRING("BNormal")) return 0;
	if (inName==HX_CSTRING("BOverlay")) return 0;
	if (inName==HX_CSTRING("BScreen")) return 0;
	if (inName==HX_CSTRING("BSubtract")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic BlendMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BAdd")) return BAdd;
	if (inName==HX_CSTRING("BAlpha")) return BAlpha;
	if (inName==HX_CSTRING("BDarken")) return BDarken;
	if (inName==HX_CSTRING("BDifference")) return BDifference;
	if (inName==HX_CSTRING("BErase")) return BErase;
	if (inName==HX_CSTRING("BHardLight")) return BHardLight;
	if (inName==HX_CSTRING("BInvert")) return BInvert;
	if (inName==HX_CSTRING("BLayer")) return BLayer;
	if (inName==HX_CSTRING("BLighten")) return BLighten;
	if (inName==HX_CSTRING("BMultiply")) return BMultiply;
	if (inName==HX_CSTRING("BNormal")) return BNormal;
	if (inName==HX_CSTRING("BOverlay")) return BOverlay;
	if (inName==HX_CSTRING("BScreen")) return BScreen;
	if (inName==HX_CSTRING("BSubtract")) return BSubtract;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("BNormal"),
	HX_CSTRING("BLayer"),
	HX_CSTRING("BMultiply"),
	HX_CSTRING("BScreen"),
	HX_CSTRING("BLighten"),
	HX_CSTRING("BDarken"),
	HX_CSTRING("BDifference"),
	HX_CSTRING("BAdd"),
	HX_CSTRING("BSubtract"),
	HX_CSTRING("BInvert"),
	HX_CSTRING("BAlpha"),
	HX_CSTRING("BErase"),
	HX_CSTRING("BOverlay"),
	HX_CSTRING("BHardLight"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlendMode_obj::BAdd,"BAdd");
	HX_MARK_MEMBER_NAME(BlendMode_obj::BAlpha,"BAlpha");
	HX_MARK_MEMBER_NAME(BlendMode_obj::BDarken,"BDarken");
	HX_MARK_MEMBER_NAME(BlendMode_obj::BDifference,"BDifference");
	HX_MARK_MEMBER_NAME(BlendMode_obj::BErase,"BErase");
	HX_MARK_MEMBER_NAME(BlendMode_obj::BHardLight,"BHardLight");
	HX_MARK_MEMBER_NAME(BlendMode_obj::BInvert,"BInvert");
	HX_MARK_MEMBER_NAME(BlendMode_obj::BLayer,"BLayer");
	HX_MARK_MEMBER_NAME(BlendMode_obj::BLighten,"BLighten");
	HX_MARK_MEMBER_NAME(BlendMode_obj::BMultiply,"BMultiply");
	HX_MARK_MEMBER_NAME(BlendMode_obj::BNormal,"BNormal");
	HX_MARK_MEMBER_NAME(BlendMode_obj::BOverlay,"BOverlay");
	HX_MARK_MEMBER_NAME(BlendMode_obj::BScreen,"BScreen");
	HX_MARK_MEMBER_NAME(BlendMode_obj::BSubtract,"BSubtract");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlendMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::BAdd,"BAdd");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::BAlpha,"BAlpha");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::BDarken,"BDarken");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::BDifference,"BDifference");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::BErase,"BErase");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::BHardLight,"BHardLight");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::BInvert,"BInvert");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::BLayer,"BLayer");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::BLighten,"BLighten");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::BMultiply,"BMultiply");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::BNormal,"BNormal");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::BOverlay,"BOverlay");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::BScreen,"BScreen");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::BSubtract,"BSubtract");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class BlendMode_obj::__mClass;

Dynamic __Create_BlendMode_obj() { return new BlendMode_obj; }

void BlendMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.BlendMode"), hx::TCanCast< BlendMode_obj >,sStaticFields,sMemberFields,
	&__Create_BlendMode_obj, &__Create,
	&super::__SGetClass(), &CreateBlendMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void BlendMode_obj::__boot()
{
hx::Static(BAdd) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("BAdd"),7);
hx::Static(BAlpha) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("BAlpha"),10);
hx::Static(BDarken) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("BDarken"),5);
hx::Static(BDifference) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("BDifference"),6);
hx::Static(BErase) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("BErase"),11);
hx::Static(BHardLight) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("BHardLight"),13);
hx::Static(BInvert) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("BInvert"),9);
hx::Static(BLayer) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("BLayer"),1);
hx::Static(BLighten) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("BLighten"),4);
hx::Static(BMultiply) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("BMultiply"),2);
hx::Static(BNormal) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("BNormal"),0);
hx::Static(BOverlay) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("BOverlay"),12);
hx::Static(BScreen) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("BScreen"),3);
hx::Static(BSubtract) = hx::CreateEnum< BlendMode_obj >(HX_CSTRING("BSubtract"),8);
}


} // end namespace format
} // end namespace swf
