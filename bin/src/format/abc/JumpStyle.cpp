#include <hxcpp.h>

#ifndef INCLUDED_format_abc_JumpStyle
#include <format/abc/JumpStyle.h>
#endif
namespace format{
namespace abc{

::format::abc::JumpStyle JumpStyle_obj::JAlways;

::format::abc::JumpStyle JumpStyle_obj::JEq;

::format::abc::JumpStyle JumpStyle_obj::JFalse;

::format::abc::JumpStyle JumpStyle_obj::JGt;

::format::abc::JumpStyle JumpStyle_obj::JGte;

::format::abc::JumpStyle JumpStyle_obj::JLt;

::format::abc::JumpStyle JumpStyle_obj::JLte;

::format::abc::JumpStyle JumpStyle_obj::JNeq;

::format::abc::JumpStyle JumpStyle_obj::JNotGt;

::format::abc::JumpStyle JumpStyle_obj::JNotGte;

::format::abc::JumpStyle JumpStyle_obj::JNotLt;

::format::abc::JumpStyle JumpStyle_obj::JNotLte;

::format::abc::JumpStyle JumpStyle_obj::JPhysEq;

::format::abc::JumpStyle JumpStyle_obj::JPhysNeq;

::format::abc::JumpStyle JumpStyle_obj::JTrue;

HX_DEFINE_CREATE_ENUM(JumpStyle_obj)

int JumpStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("JAlways")) return 4;
	if (inName==HX_CSTRING("JEq")) return 7;
	if (inName==HX_CSTRING("JFalse")) return 6;
	if (inName==HX_CSTRING("JGt")) return 11;
	if (inName==HX_CSTRING("JGte")) return 12;
	if (inName==HX_CSTRING("JLt")) return 9;
	if (inName==HX_CSTRING("JLte")) return 10;
	if (inName==HX_CSTRING("JNeq")) return 8;
	if (inName==HX_CSTRING("JNotGt")) return 2;
	if (inName==HX_CSTRING("JNotGte")) return 3;
	if (inName==HX_CSTRING("JNotLt")) return 0;
	if (inName==HX_CSTRING("JNotLte")) return 1;
	if (inName==HX_CSTRING("JPhysEq")) return 13;
	if (inName==HX_CSTRING("JPhysNeq")) return 14;
	if (inName==HX_CSTRING("JTrue")) return 5;
	return super::__FindIndex(inName);
}

int JumpStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("JAlways")) return 0;
	if (inName==HX_CSTRING("JEq")) return 0;
	if (inName==HX_CSTRING("JFalse")) return 0;
	if (inName==HX_CSTRING("JGt")) return 0;
	if (inName==HX_CSTRING("JGte")) return 0;
	if (inName==HX_CSTRING("JLt")) return 0;
	if (inName==HX_CSTRING("JLte")) return 0;
	if (inName==HX_CSTRING("JNeq")) return 0;
	if (inName==HX_CSTRING("JNotGt")) return 0;
	if (inName==HX_CSTRING("JNotGte")) return 0;
	if (inName==HX_CSTRING("JNotLt")) return 0;
	if (inName==HX_CSTRING("JNotLte")) return 0;
	if (inName==HX_CSTRING("JPhysEq")) return 0;
	if (inName==HX_CSTRING("JPhysNeq")) return 0;
	if (inName==HX_CSTRING("JTrue")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic JumpStyle_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("JAlways")) return JAlways;
	if (inName==HX_CSTRING("JEq")) return JEq;
	if (inName==HX_CSTRING("JFalse")) return JFalse;
	if (inName==HX_CSTRING("JGt")) return JGt;
	if (inName==HX_CSTRING("JGte")) return JGte;
	if (inName==HX_CSTRING("JLt")) return JLt;
	if (inName==HX_CSTRING("JLte")) return JLte;
	if (inName==HX_CSTRING("JNeq")) return JNeq;
	if (inName==HX_CSTRING("JNotGt")) return JNotGt;
	if (inName==HX_CSTRING("JNotGte")) return JNotGte;
	if (inName==HX_CSTRING("JNotLt")) return JNotLt;
	if (inName==HX_CSTRING("JNotLte")) return JNotLte;
	if (inName==HX_CSTRING("JPhysEq")) return JPhysEq;
	if (inName==HX_CSTRING("JPhysNeq")) return JPhysNeq;
	if (inName==HX_CSTRING("JTrue")) return JTrue;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("JNotLt"),
	HX_CSTRING("JNotLte"),
	HX_CSTRING("JNotGt"),
	HX_CSTRING("JNotGte"),
	HX_CSTRING("JAlways"),
	HX_CSTRING("JTrue"),
	HX_CSTRING("JFalse"),
	HX_CSTRING("JEq"),
	HX_CSTRING("JNeq"),
	HX_CSTRING("JLt"),
	HX_CSTRING("JLte"),
	HX_CSTRING("JGt"),
	HX_CSTRING("JGte"),
	HX_CSTRING("JPhysEq"),
	HX_CSTRING("JPhysNeq"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JumpStyle_obj::JAlways,"JAlways");
	HX_MARK_MEMBER_NAME(JumpStyle_obj::JEq,"JEq");
	HX_MARK_MEMBER_NAME(JumpStyle_obj::JFalse,"JFalse");
	HX_MARK_MEMBER_NAME(JumpStyle_obj::JGt,"JGt");
	HX_MARK_MEMBER_NAME(JumpStyle_obj::JGte,"JGte");
	HX_MARK_MEMBER_NAME(JumpStyle_obj::JLt,"JLt");
	HX_MARK_MEMBER_NAME(JumpStyle_obj::JLte,"JLte");
	HX_MARK_MEMBER_NAME(JumpStyle_obj::JNeq,"JNeq");
	HX_MARK_MEMBER_NAME(JumpStyle_obj::JNotGt,"JNotGt");
	HX_MARK_MEMBER_NAME(JumpStyle_obj::JNotGte,"JNotGte");
	HX_MARK_MEMBER_NAME(JumpStyle_obj::JNotLt,"JNotLt");
	HX_MARK_MEMBER_NAME(JumpStyle_obj::JNotLte,"JNotLte");
	HX_MARK_MEMBER_NAME(JumpStyle_obj::JPhysEq,"JPhysEq");
	HX_MARK_MEMBER_NAME(JumpStyle_obj::JPhysNeq,"JPhysNeq");
	HX_MARK_MEMBER_NAME(JumpStyle_obj::JTrue,"JTrue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JumpStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JumpStyle_obj::JAlways,"JAlways");
	HX_VISIT_MEMBER_NAME(JumpStyle_obj::JEq,"JEq");
	HX_VISIT_MEMBER_NAME(JumpStyle_obj::JFalse,"JFalse");
	HX_VISIT_MEMBER_NAME(JumpStyle_obj::JGt,"JGt");
	HX_VISIT_MEMBER_NAME(JumpStyle_obj::JGte,"JGte");
	HX_VISIT_MEMBER_NAME(JumpStyle_obj::JLt,"JLt");
	HX_VISIT_MEMBER_NAME(JumpStyle_obj::JLte,"JLte");
	HX_VISIT_MEMBER_NAME(JumpStyle_obj::JNeq,"JNeq");
	HX_VISIT_MEMBER_NAME(JumpStyle_obj::JNotGt,"JNotGt");
	HX_VISIT_MEMBER_NAME(JumpStyle_obj::JNotGte,"JNotGte");
	HX_VISIT_MEMBER_NAME(JumpStyle_obj::JNotLt,"JNotLt");
	HX_VISIT_MEMBER_NAME(JumpStyle_obj::JNotLte,"JNotLte");
	HX_VISIT_MEMBER_NAME(JumpStyle_obj::JPhysEq,"JPhysEq");
	HX_VISIT_MEMBER_NAME(JumpStyle_obj::JPhysNeq,"JPhysNeq");
	HX_VISIT_MEMBER_NAME(JumpStyle_obj::JTrue,"JTrue");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class JumpStyle_obj::__mClass;

Dynamic __Create_JumpStyle_obj() { return new JumpStyle_obj; }

void JumpStyle_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.abc.JumpStyle"), hx::TCanCast< JumpStyle_obj >,sStaticFields,sMemberFields,
	&__Create_JumpStyle_obj, &__Create,
	&super::__SGetClass(), &CreateJumpStyle_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void JumpStyle_obj::__boot()
{
hx::Static(JAlways) = hx::CreateEnum< JumpStyle_obj >(HX_CSTRING("JAlways"),4);
hx::Static(JEq) = hx::CreateEnum< JumpStyle_obj >(HX_CSTRING("JEq"),7);
hx::Static(JFalse) = hx::CreateEnum< JumpStyle_obj >(HX_CSTRING("JFalse"),6);
hx::Static(JGt) = hx::CreateEnum< JumpStyle_obj >(HX_CSTRING("JGt"),11);
hx::Static(JGte) = hx::CreateEnum< JumpStyle_obj >(HX_CSTRING("JGte"),12);
hx::Static(JLt) = hx::CreateEnum< JumpStyle_obj >(HX_CSTRING("JLt"),9);
hx::Static(JLte) = hx::CreateEnum< JumpStyle_obj >(HX_CSTRING("JLte"),10);
hx::Static(JNeq) = hx::CreateEnum< JumpStyle_obj >(HX_CSTRING("JNeq"),8);
hx::Static(JNotGt) = hx::CreateEnum< JumpStyle_obj >(HX_CSTRING("JNotGt"),2);
hx::Static(JNotGte) = hx::CreateEnum< JumpStyle_obj >(HX_CSTRING("JNotGte"),3);
hx::Static(JNotLt) = hx::CreateEnum< JumpStyle_obj >(HX_CSTRING("JNotLt"),0);
hx::Static(JNotLte) = hx::CreateEnum< JumpStyle_obj >(HX_CSTRING("JNotLte"),1);
hx::Static(JPhysEq) = hx::CreateEnum< JumpStyle_obj >(HX_CSTRING("JPhysEq"),13);
hx::Static(JPhysNeq) = hx::CreateEnum< JumpStyle_obj >(HX_CSTRING("JPhysNeq"),14);
hx::Static(JTrue) = hx::CreateEnum< JumpStyle_obj >(HX_CSTRING("JTrue"),5);
}


} // end namespace format
} // end namespace abc
