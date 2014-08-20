#include <hxcpp.h>

#ifndef INCLUDED_format_abc_Index
#include <format/abc/Index.h>
#endif
#ifndef INCLUDED_format_abc_Namespace
#include <format/abc/Namespace.h>
#endif
namespace format{
namespace abc{

::format::abc::Namespace  Namespace_obj::NExplicit(::format::abc::Index ns)
	{ return hx::CreateEnum< Namespace_obj >(HX_CSTRING("NExplicit"),5,hx::DynamicArray(0,1).Add(ns)); }

::format::abc::Namespace  Namespace_obj::NInternal(::format::abc::Index ns)
	{ return hx::CreateEnum< Namespace_obj >(HX_CSTRING("NInternal"),3,hx::DynamicArray(0,1).Add(ns)); }

::format::abc::Namespace  Namespace_obj::NNamespace(::format::abc::Index ns)
	{ return hx::CreateEnum< Namespace_obj >(HX_CSTRING("NNamespace"),1,hx::DynamicArray(0,1).Add(ns)); }

::format::abc::Namespace  Namespace_obj::NPrivate(::format::abc::Index ns)
	{ return hx::CreateEnum< Namespace_obj >(HX_CSTRING("NPrivate"),0,hx::DynamicArray(0,1).Add(ns)); }

::format::abc::Namespace  Namespace_obj::NProtected(::format::abc::Index ns)
	{ return hx::CreateEnum< Namespace_obj >(HX_CSTRING("NProtected"),4,hx::DynamicArray(0,1).Add(ns)); }

::format::abc::Namespace  Namespace_obj::NPublic(::format::abc::Index ns)
	{ return hx::CreateEnum< Namespace_obj >(HX_CSTRING("NPublic"),2,hx::DynamicArray(0,1).Add(ns)); }

::format::abc::Namespace  Namespace_obj::NStaticProtected(::format::abc::Index ns)
	{ return hx::CreateEnum< Namespace_obj >(HX_CSTRING("NStaticProtected"),6,hx::DynamicArray(0,1).Add(ns)); }

HX_DEFINE_CREATE_ENUM(Namespace_obj)

int Namespace_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("NExplicit")) return 5;
	if (inName==HX_CSTRING("NInternal")) return 3;
	if (inName==HX_CSTRING("NNamespace")) return 1;
	if (inName==HX_CSTRING("NPrivate")) return 0;
	if (inName==HX_CSTRING("NProtected")) return 4;
	if (inName==HX_CSTRING("NPublic")) return 2;
	if (inName==HX_CSTRING("NStaticProtected")) return 6;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Namespace_obj,NExplicit,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Namespace_obj,NInternal,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Namespace_obj,NNamespace,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Namespace_obj,NPrivate,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Namespace_obj,NProtected,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Namespace_obj,NPublic,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Namespace_obj,NStaticProtected,return)

int Namespace_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("NExplicit")) return 1;
	if (inName==HX_CSTRING("NInternal")) return 1;
	if (inName==HX_CSTRING("NNamespace")) return 1;
	if (inName==HX_CSTRING("NPrivate")) return 1;
	if (inName==HX_CSTRING("NProtected")) return 1;
	if (inName==HX_CSTRING("NPublic")) return 1;
	if (inName==HX_CSTRING("NStaticProtected")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Namespace_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("NExplicit")) return NExplicit_dyn();
	if (inName==HX_CSTRING("NInternal")) return NInternal_dyn();
	if (inName==HX_CSTRING("NNamespace")) return NNamespace_dyn();
	if (inName==HX_CSTRING("NPrivate")) return NPrivate_dyn();
	if (inName==HX_CSTRING("NProtected")) return NProtected_dyn();
	if (inName==HX_CSTRING("NPublic")) return NPublic_dyn();
	if (inName==HX_CSTRING("NStaticProtected")) return NStaticProtected_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("NPrivate"),
	HX_CSTRING("NNamespace"),
	HX_CSTRING("NPublic"),
	HX_CSTRING("NInternal"),
	HX_CSTRING("NProtected"),
	HX_CSTRING("NExplicit"),
	HX_CSTRING("NStaticProtected"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Namespace_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Namespace_obj::__mClass;

Dynamic __Create_Namespace_obj() { return new Namespace_obj; }

void Namespace_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.abc.Namespace"), hx::TCanCast< Namespace_obj >,sStaticFields,sMemberFields,
	&__Create_Namespace_obj, &__Create,
	&super::__SGetClass(), &CreateNamespace_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Namespace_obj::__boot()
{
}


} // end namespace format
} // end namespace abc
