#include <hxcpp.h>

#ifndef INCLUDED_format_swf_FillStyleTypeId
#include <format/swf/FillStyleTypeId.h>
#endif
namespace format{
namespace swf{

Void FillStyleTypeId_obj::__construct()
{
	return null();
}

//FillStyleTypeId_obj::~FillStyleTypeId_obj() { }

Dynamic FillStyleTypeId_obj::__CreateEmpty() { return  new FillStyleTypeId_obj; }
hx::ObjectPtr< FillStyleTypeId_obj > FillStyleTypeId_obj::__new()
{  hx::ObjectPtr< FillStyleTypeId_obj > result = new FillStyleTypeId_obj();
	result->__construct();
	return result;}

Dynamic FillStyleTypeId_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FillStyleTypeId_obj > result = new FillStyleTypeId_obj();
	result->__construct();
	return result;}

int FillStyleTypeId_obj::Solid;

int FillStyleTypeId_obj::LinearGradient;

int FillStyleTypeId_obj::RadialGradient;

int FillStyleTypeId_obj::FocalRadialGradient;

int FillStyleTypeId_obj::RepeatingBitmap;

int FillStyleTypeId_obj::ClippedBitmap;

int FillStyleTypeId_obj::NonSmoothedRepeatingBitmap;

int FillStyleTypeId_obj::NonSmoothedClippedBitmap;


FillStyleTypeId_obj::FillStyleTypeId_obj()
{
}

Dynamic FillStyleTypeId_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FillStyleTypeId_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FillStyleTypeId_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("Solid"),
	HX_CSTRING("LinearGradient"),
	HX_CSTRING("RadialGradient"),
	HX_CSTRING("FocalRadialGradient"),
	HX_CSTRING("RepeatingBitmap"),
	HX_CSTRING("ClippedBitmap"),
	HX_CSTRING("NonSmoothedRepeatingBitmap"),
	HX_CSTRING("NonSmoothedClippedBitmap"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FillStyleTypeId_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FillStyleTypeId_obj::Solid,"Solid");
	HX_MARK_MEMBER_NAME(FillStyleTypeId_obj::LinearGradient,"LinearGradient");
	HX_MARK_MEMBER_NAME(FillStyleTypeId_obj::RadialGradient,"RadialGradient");
	HX_MARK_MEMBER_NAME(FillStyleTypeId_obj::FocalRadialGradient,"FocalRadialGradient");
	HX_MARK_MEMBER_NAME(FillStyleTypeId_obj::RepeatingBitmap,"RepeatingBitmap");
	HX_MARK_MEMBER_NAME(FillStyleTypeId_obj::ClippedBitmap,"ClippedBitmap");
	HX_MARK_MEMBER_NAME(FillStyleTypeId_obj::NonSmoothedRepeatingBitmap,"NonSmoothedRepeatingBitmap");
	HX_MARK_MEMBER_NAME(FillStyleTypeId_obj::NonSmoothedClippedBitmap,"NonSmoothedClippedBitmap");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FillStyleTypeId_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FillStyleTypeId_obj::Solid,"Solid");
	HX_VISIT_MEMBER_NAME(FillStyleTypeId_obj::LinearGradient,"LinearGradient");
	HX_VISIT_MEMBER_NAME(FillStyleTypeId_obj::RadialGradient,"RadialGradient");
	HX_VISIT_MEMBER_NAME(FillStyleTypeId_obj::FocalRadialGradient,"FocalRadialGradient");
	HX_VISIT_MEMBER_NAME(FillStyleTypeId_obj::RepeatingBitmap,"RepeatingBitmap");
	HX_VISIT_MEMBER_NAME(FillStyleTypeId_obj::ClippedBitmap,"ClippedBitmap");
	HX_VISIT_MEMBER_NAME(FillStyleTypeId_obj::NonSmoothedRepeatingBitmap,"NonSmoothedRepeatingBitmap");
	HX_VISIT_MEMBER_NAME(FillStyleTypeId_obj::NonSmoothedClippedBitmap,"NonSmoothedClippedBitmap");
};

#endif

Class FillStyleTypeId_obj::__mClass;

void FillStyleTypeId_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.FillStyleTypeId"), hx::TCanCast< FillStyleTypeId_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void FillStyleTypeId_obj::__boot()
{
	Solid= (int)0;
	LinearGradient= (int)16;
	RadialGradient= (int)18;
	FocalRadialGradient= (int)19;
	RepeatingBitmap= (int)64;
	ClippedBitmap= (int)65;
	NonSmoothedRepeatingBitmap= (int)66;
	NonSmoothedClippedBitmap= (int)67;
}

} // end namespace format
} // end namespace swf
