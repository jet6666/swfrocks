#include <hxcpp.h>

#ifndef INCLUDED_format_abc_MethodKind
#include <format/abc/MethodKind.h>
#endif
namespace format{
namespace abc{

::format::abc::MethodKind MethodKind_obj::KGetter;

::format::abc::MethodKind MethodKind_obj::KNormal;

::format::abc::MethodKind MethodKind_obj::KSetter;

HX_DEFINE_CREATE_ENUM(MethodKind_obj)

int MethodKind_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("KGetter")) return 1;
	if (inName==HX_CSTRING("KNormal")) return 0;
	if (inName==HX_CSTRING("KSetter")) return 2;
	return super::__FindIndex(inName);
}

int MethodKind_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("KGetter")) return 0;
	if (inName==HX_CSTRING("KNormal")) return 0;
	if (inName==HX_CSTRING("KSetter")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic MethodKind_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("KGetter")) return KGetter;
	if (inName==HX_CSTRING("KNormal")) return KNormal;
	if (inName==HX_CSTRING("KSetter")) return KSetter;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("KNormal"),
	HX_CSTRING("KGetter"),
	HX_CSTRING("KSetter"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MethodKind_obj::KGetter,"KGetter");
	HX_MARK_MEMBER_NAME(MethodKind_obj::KNormal,"KNormal");
	HX_MARK_MEMBER_NAME(MethodKind_obj::KSetter,"KSetter");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MethodKind_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MethodKind_obj::KGetter,"KGetter");
	HX_VISIT_MEMBER_NAME(MethodKind_obj::KNormal,"KNormal");
	HX_VISIT_MEMBER_NAME(MethodKind_obj::KSetter,"KSetter");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class MethodKind_obj::__mClass;

Dynamic __Create_MethodKind_obj() { return new MethodKind_obj; }

void MethodKind_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.abc.MethodKind"), hx::TCanCast< MethodKind_obj >,sStaticFields,sMemberFields,
	&__Create_MethodKind_obj, &__Create,
	&super::__SGetClass(), &CreateMethodKind_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void MethodKind_obj::__boot()
{
hx::Static(KGetter) = hx::CreateEnum< MethodKind_obj >(HX_CSTRING("KGetter"),1);
hx::Static(KNormal) = hx::CreateEnum< MethodKind_obj >(HX_CSTRING("KNormal"),0);
hx::Static(KSetter) = hx::CreateEnum< MethodKind_obj >(HX_CSTRING("KSetter"),2);
}


} // end namespace format
} // end namespace abc
