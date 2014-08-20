#include <hxcpp.h>

#ifndef INCLUDED_format_swf_ShapeRecord
#include <format/swf/ShapeRecord.h>
#endif
namespace format{
namespace swf{

::format::swf::ShapeRecord  ShapeRecord_obj::SHRChange(Dynamic data)
	{ return hx::CreateEnum< ShapeRecord_obj >(HX_CSTRING("SHRChange"),1,hx::DynamicArray(0,1).Add(data)); }

::format::swf::ShapeRecord  ShapeRecord_obj::SHRCurvedEdge(int cdx,int cdy,int adx,int ady)
	{ return hx::CreateEnum< ShapeRecord_obj >(HX_CSTRING("SHRCurvedEdge"),3,hx::DynamicArray(0,4).Add(cdx).Add(cdy).Add(adx).Add(ady)); }

::format::swf::ShapeRecord  ShapeRecord_obj::SHREdge(int dx,int dy)
	{ return hx::CreateEnum< ShapeRecord_obj >(HX_CSTRING("SHREdge"),2,hx::DynamicArray(0,2).Add(dx).Add(dy)); }

::format::swf::ShapeRecord ShapeRecord_obj::SHREnd;

HX_DEFINE_CREATE_ENUM(ShapeRecord_obj)

int ShapeRecord_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("SHRChange")) return 1;
	if (inName==HX_CSTRING("SHRCurvedEdge")) return 3;
	if (inName==HX_CSTRING("SHREdge")) return 2;
	if (inName==HX_CSTRING("SHREnd")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShapeRecord_obj,SHRChange,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(ShapeRecord_obj,SHRCurvedEdge,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ShapeRecord_obj,SHREdge,return)

int ShapeRecord_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("SHRChange")) return 1;
	if (inName==HX_CSTRING("SHRCurvedEdge")) return 4;
	if (inName==HX_CSTRING("SHREdge")) return 2;
	if (inName==HX_CSTRING("SHREnd")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ShapeRecord_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("SHRChange")) return SHRChange_dyn();
	if (inName==HX_CSTRING("SHRCurvedEdge")) return SHRCurvedEdge_dyn();
	if (inName==HX_CSTRING("SHREdge")) return SHREdge_dyn();
	if (inName==HX_CSTRING("SHREnd")) return SHREnd;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("SHREnd"),
	HX_CSTRING("SHRChange"),
	HX_CSTRING("SHREdge"),
	HX_CSTRING("SHRCurvedEdge"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShapeRecord_obj::SHREnd,"SHREnd");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeRecord_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ShapeRecord_obj::SHREnd,"SHREnd");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class ShapeRecord_obj::__mClass;

Dynamic __Create_ShapeRecord_obj() { return new ShapeRecord_obj; }

void ShapeRecord_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.ShapeRecord"), hx::TCanCast< ShapeRecord_obj >,sStaticFields,sMemberFields,
	&__Create_ShapeRecord_obj, &__Create,
	&super::__SGetClass(), &CreateShapeRecord_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ShapeRecord_obj::__boot()
{
hx::Static(SHREnd) = hx::CreateEnum< ShapeRecord_obj >(HX_CSTRING("SHREnd"),0);
}


} // end namespace format
} // end namespace swf
