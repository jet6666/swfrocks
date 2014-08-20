#include <hxcpp.h>

#ifndef INCLUDED_format_swf_LangCode
#include <format/swf/LangCode.h>
#endif
namespace format{
namespace swf{

::format::swf::LangCode LangCode_obj::LCJapanese;

::format::swf::LangCode LangCode_obj::LCKorean;

::format::swf::LangCode LangCode_obj::LCLatin;

::format::swf::LangCode LangCode_obj::LCNone;

::format::swf::LangCode LangCode_obj::LCSimplifiedChinese;

::format::swf::LangCode LangCode_obj::LCTraditionalChinese;

HX_DEFINE_CREATE_ENUM(LangCode_obj)

int LangCode_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("LCJapanese")) return 2;
	if (inName==HX_CSTRING("LCKorean")) return 3;
	if (inName==HX_CSTRING("LCLatin")) return 1;
	if (inName==HX_CSTRING("LCNone")) return 0;
	if (inName==HX_CSTRING("LCSimplifiedChinese")) return 4;
	if (inName==HX_CSTRING("LCTraditionalChinese")) return 5;
	return super::__FindIndex(inName);
}

int LangCode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("LCJapanese")) return 0;
	if (inName==HX_CSTRING("LCKorean")) return 0;
	if (inName==HX_CSTRING("LCLatin")) return 0;
	if (inName==HX_CSTRING("LCNone")) return 0;
	if (inName==HX_CSTRING("LCSimplifiedChinese")) return 0;
	if (inName==HX_CSTRING("LCTraditionalChinese")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic LangCode_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("LCJapanese")) return LCJapanese;
	if (inName==HX_CSTRING("LCKorean")) return LCKorean;
	if (inName==HX_CSTRING("LCLatin")) return LCLatin;
	if (inName==HX_CSTRING("LCNone")) return LCNone;
	if (inName==HX_CSTRING("LCSimplifiedChinese")) return LCSimplifiedChinese;
	if (inName==HX_CSTRING("LCTraditionalChinese")) return LCTraditionalChinese;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("LCNone"),
	HX_CSTRING("LCLatin"),
	HX_CSTRING("LCJapanese"),
	HX_CSTRING("LCKorean"),
	HX_CSTRING("LCSimplifiedChinese"),
	HX_CSTRING("LCTraditionalChinese"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LangCode_obj::LCJapanese,"LCJapanese");
	HX_MARK_MEMBER_NAME(LangCode_obj::LCKorean,"LCKorean");
	HX_MARK_MEMBER_NAME(LangCode_obj::LCLatin,"LCLatin");
	HX_MARK_MEMBER_NAME(LangCode_obj::LCNone,"LCNone");
	HX_MARK_MEMBER_NAME(LangCode_obj::LCSimplifiedChinese,"LCSimplifiedChinese");
	HX_MARK_MEMBER_NAME(LangCode_obj::LCTraditionalChinese,"LCTraditionalChinese");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LangCode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LangCode_obj::LCJapanese,"LCJapanese");
	HX_VISIT_MEMBER_NAME(LangCode_obj::LCKorean,"LCKorean");
	HX_VISIT_MEMBER_NAME(LangCode_obj::LCLatin,"LCLatin");
	HX_VISIT_MEMBER_NAME(LangCode_obj::LCNone,"LCNone");
	HX_VISIT_MEMBER_NAME(LangCode_obj::LCSimplifiedChinese,"LCSimplifiedChinese");
	HX_VISIT_MEMBER_NAME(LangCode_obj::LCTraditionalChinese,"LCTraditionalChinese");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class LangCode_obj::__mClass;

Dynamic __Create_LangCode_obj() { return new LangCode_obj; }

void LangCode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.LangCode"), hx::TCanCast< LangCode_obj >,sStaticFields,sMemberFields,
	&__Create_LangCode_obj, &__Create,
	&super::__SGetClass(), &CreateLangCode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void LangCode_obj::__boot()
{
hx::Static(LCJapanese) = hx::CreateEnum< LangCode_obj >(HX_CSTRING("LCJapanese"),2);
hx::Static(LCKorean) = hx::CreateEnum< LangCode_obj >(HX_CSTRING("LCKorean"),3);
hx::Static(LCLatin) = hx::CreateEnum< LangCode_obj >(HX_CSTRING("LCLatin"),1);
hx::Static(LCNone) = hx::CreateEnum< LangCode_obj >(HX_CSTRING("LCNone"),0);
hx::Static(LCSimplifiedChinese) = hx::CreateEnum< LangCode_obj >(HX_CSTRING("LCSimplifiedChinese"),4);
hx::Static(LCTraditionalChinese) = hx::CreateEnum< LangCode_obj >(HX_CSTRING("LCTraditionalChinese"),5);
}


} // end namespace format
} // end namespace swf
