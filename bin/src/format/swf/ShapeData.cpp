#include <hxcpp.h>

#ifndef INCLUDED_format_swf_ShapeData
#include <format/swf/ShapeData.h>
#endif
namespace format{
namespace swf{

::format::swf::ShapeData  ShapeData_obj::SHDShape1(Dynamic bounds,Dynamic shapes)
	{ return hx::CreateEnum< ShapeData_obj >(HX_CSTRING("SHDShape1"),0,hx::DynamicArray(0,2).Add(bounds).Add(shapes)); }

::format::swf::ShapeData  ShapeData_obj::SHDShape2(Dynamic bounds,Dynamic shapes)
	{ return hx::CreateEnum< ShapeData_obj >(HX_CSTRING("SHDShape2"),1,hx::DynamicArray(0,2).Add(bounds).Add(shapes)); }

::format::swf::ShapeData  ShapeData_obj::SHDShape3(Dynamic bounds,Dynamic shapes)
	{ return hx::CreateEnum< ShapeData_obj >(HX_CSTRING("SHDShape3"),2,hx::DynamicArray(0,2).Add(bounds).Add(shapes)); }

::format::swf::ShapeData  ShapeData_obj::SHDShape4(Dynamic data)
	{ return hx::CreateEnum< ShapeData_obj >(HX_CSTRING("SHDShape4"),3,hx::DynamicArray(0,1).Add(data)); }

HX_DEFINE_CREATE_ENUM(ShapeData_obj)

int ShapeData_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("SHDShape1")) return 0;
	if (inName==HX_CSTRING("SHDShape2")) return 1;
	if (inName==HX_CSTRING("SHDShape3")) return 2;
	if (inName==HX_CSTRING("SHDShape4")) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ShapeData_obj,SHDShape1,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ShapeData_obj,SHDShape2,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ShapeData_obj,SHDShape3,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShapeData_obj,SHDShape4,return)

int ShapeData_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("SHDShape1")) return 2;
	if (inName==HX_CSTRING("SHDShape2")) return 2;
	if (inName==HX_CSTRING("SHDShape3")) return 2;
	if (inName==HX_CSTRING("SHDShape4")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic ShapeData_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("SHDShape1")) return SHDShape1_dyn();
	if (inName==HX_CSTRING("SHDShape2")) return SHDShape2_dyn();
	if (inName==HX_CSTRING("SHDShape3")) return SHDShape3_dyn();
	if (inName==HX_CSTRING("SHDShape4")) return SHDShape4_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("SHDShape1"),
	HX_CSTRING("SHDShape2"),
	HX_CSTRING("SHDShape3"),
	HX_CSTRING("SHDShape4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeData_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class ShapeData_obj::__mClass;

Dynamic __Create_ShapeData_obj() { return new ShapeData_obj; }

void ShapeData_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.ShapeData"), hx::TCanCast< ShapeData_obj >,sStaticFields,sMemberFields,
	&__Create_ShapeData_obj, &__Create,
	&super::__SGetClass(), &CreateShapeData_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ShapeData_obj::__boot()
{
}


} // end namespace format
} // end namespace swf
