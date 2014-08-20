#include <hxcpp.h>

#ifndef INCLUDED_format_abc_Index
#include <format/abc/Index.h>
#endif
namespace format{
namespace abc{

::format::abc::Index  Index_obj::Idx(int v)
	{ return hx::CreateEnum< Index_obj >(HX_CSTRING("Idx"),0,hx::DynamicArray(0,1).Add(v)); }

HX_DEFINE_CREATE_ENUM(Index_obj)

int Index_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Idx")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Index_obj,Idx,return)

int Index_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Idx")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Index_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Idx")) return Idx_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Idx"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Index_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Index_obj::__mClass;

Dynamic __Create_Index_obj() { return new Index_obj; }

void Index_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.abc.Index"), hx::TCanCast< Index_obj >,sStaticFields,sMemberFields,
	&__Create_Index_obj, &__Create,
	&super::__SGetClass(), &CreateIndex_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Index_obj::__boot()
{
}


} // end namespace format
} // end namespace abc
