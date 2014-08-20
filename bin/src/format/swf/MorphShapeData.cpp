#include <hxcpp.h>

#ifndef INCLUDED_format_swf_MorphShapeData
#include <format/swf/MorphShapeData.h>
#endif
namespace format{
namespace swf{

::format::swf::MorphShapeData  MorphShapeData_obj::MSDShape1(Dynamic data)
	{ return hx::CreateEnum< MorphShapeData_obj >(HX_CSTRING("MSDShape1"),0,hx::DynamicArray(0,1).Add(data)); }

::format::swf::MorphShapeData  MorphShapeData_obj::MSDShape2(Dynamic data)
	{ return hx::CreateEnum< MorphShapeData_obj >(HX_CSTRING("MSDShape2"),1,hx::DynamicArray(0,1).Add(data)); }

HX_DEFINE_CREATE_ENUM(MorphShapeData_obj)

int MorphShapeData_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("MSDShape1")) return 0;
	if (inName==HX_CSTRING("MSDShape2")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(MorphShapeData_obj,MSDShape1,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(MorphShapeData_obj,MSDShape2,return)

int MorphShapeData_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("MSDShape1")) return 1;
	if (inName==HX_CSTRING("MSDShape2")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic MorphShapeData_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("MSDShape1")) return MSDShape1_dyn();
	if (inName==HX_CSTRING("MSDShape2")) return MSDShape2_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("MSDShape1"),
	HX_CSTRING("MSDShape2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MorphShapeData_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class MorphShapeData_obj::__mClass;

Dynamic __Create_MorphShapeData_obj() { return new MorphShapeData_obj; }

void MorphShapeData_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.MorphShapeData"), hx::TCanCast< MorphShapeData_obj >,sStaticFields,sMemberFields,
	&__Create_MorphShapeData_obj, &__Create,
	&super::__SGetClass(), &CreateMorphShapeData_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void MorphShapeData_obj::__boot()
{
}


} // end namespace format
} // end namespace swf
