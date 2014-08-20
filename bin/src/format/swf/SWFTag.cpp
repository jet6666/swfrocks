#include <hxcpp.h>

#ifndef INCLUDED_format_swf_FontData
#include <format/swf/FontData.h>
#endif
#ifndef INCLUDED_format_swf_FontInfoData
#include <format/swf/FontInfoData.h>
#endif
#ifndef INCLUDED_format_swf_JPEGData
#include <format/swf/JPEGData.h>
#endif
#ifndef INCLUDED_format_swf_MorphShapeData
#include <format/swf/MorphShapeData.h>
#endif
#ifndef INCLUDED_format_swf_PlaceObject
#include <format/swf/PlaceObject.h>
#endif
#ifndef INCLUDED_format_swf_SWFTag
#include <format/swf/SWFTag.h>
#endif
#ifndef INCLUDED_format_swf_ShapeData
#include <format/swf/ShapeData.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace format{
namespace swf{

::format::swf::SWFTag  SWFTag_obj::TActionScript3(::haxe::io::Bytes data,Dynamic context)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TActionScript3"),14,hx::DynamicArray(0,2).Add(data).Add(context)); }

::format::swf::SWFTag  SWFTag_obj::TBackgroundColor(int color)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TBackgroundColor"),5,hx::DynamicArray(0,1).Add(color)); }

::format::swf::SWFTag  SWFTag_obj::TBinaryData(int id,::haxe::io::Bytes data)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TBinaryData"),22,hx::DynamicArray(0,2).Add(id).Add(data)); }

::format::swf::SWFTag  SWFTag_obj::TBitsJPEG(int id,::format::swf::JPEGData data)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TBitsJPEG"),20,hx::DynamicArray(0,2).Add(id).Add(data)); }

::format::swf::SWFTag  SWFTag_obj::TBitsLossless(Dynamic data)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TBitsLossless"),18,hx::DynamicArray(0,1).Add(data)); }

::format::swf::SWFTag  SWFTag_obj::TBitsLossless2(Dynamic data)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TBitsLossless2"),19,hx::DynamicArray(0,1).Add(data)); }

::format::swf::SWFTag  SWFTag_obj::TClip(int id,int frames,Array< ::Dynamic > tags)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TClip"),7,hx::DynamicArray(0,3).Add(id).Add(frames).Add(tags)); }

::format::swf::SWFTag  SWFTag_obj::TDoActions(::haxe::io::Bytes data)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TDoActions"),6,hx::DynamicArray(0,1).Add(data)); }

::format::swf::SWFTag  SWFTag_obj::TDoInitActions(int id,::haxe::io::Bytes data)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TDoInitActions"),13,hx::DynamicArray(0,2).Add(id).Add(data)); }

::format::swf::SWFTag  SWFTag_obj::TExport(Dynamic el)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TExport"),12,hx::DynamicArray(0,1).Add(el)); }

::format::swf::SWFTag  SWFTag_obj::TExportAssets(Dynamic symbols)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TExportAssets"),16,hx::DynamicArray(0,1).Add(symbols)); }

::format::swf::SWFTag  SWFTag_obj::TFont(int id,::format::swf::FontData data)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TFont"),3,hx::DynamicArray(0,2).Add(id).Add(data)); }

::format::swf::SWFTag  SWFTag_obj::TFontInfo(int id,::format::swf::FontInfoData data)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TFontInfo"),4,hx::DynamicArray(0,2).Add(id).Add(data)); }

::format::swf::SWFTag  SWFTag_obj::TFrameLabel(::String label,bool anchor)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TFrameLabel"),11,hx::DynamicArray(0,2).Add(label).Add(anchor)); }

::format::swf::SWFTag  SWFTag_obj::TJPEGTables(::haxe::io::Bytes data)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TJPEGTables"),21,hx::DynamicArray(0,1).Add(data)); }

::format::swf::SWFTag  SWFTag_obj::TMorphShape(int id,::format::swf::MorphShapeData data)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TMorphShape"),2,hx::DynamicArray(0,2).Add(id).Add(data)); }

::format::swf::SWFTag  SWFTag_obj::TPlaceObject2(::format::swf::PlaceObject po)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TPlaceObject2"),8,hx::DynamicArray(0,1).Add(po)); }

::format::swf::SWFTag  SWFTag_obj::TPlaceObject3(::format::swf::PlaceObject po)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TPlaceObject3"),9,hx::DynamicArray(0,1).Add(po)); }

::format::swf::SWFTag  SWFTag_obj::TRemoveObject2(int depth)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TRemoveObject2"),10,hx::DynamicArray(0,1).Add(depth)); }

::format::swf::SWFTag  SWFTag_obj::TSandBox(bool useDirectBlit,bool useGpu,bool hasMeta,bool useAs3,bool useNetwork)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TSandBox"),17,hx::DynamicArray(0,5).Add(useDirectBlit).Add(useGpu).Add(hasMeta).Add(useAs3).Add(useNetwork)); }

::format::swf::SWFTag  SWFTag_obj::TShape(int id,::format::swf::ShapeData data)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TShape"),1,hx::DynamicArray(0,2).Add(id).Add(data)); }

::format::swf::SWFTag SWFTag_obj::TShowFrame;

::format::swf::SWFTag  SWFTag_obj::TSound(Dynamic data)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TSound"),23,hx::DynamicArray(0,1).Add(data)); }

::format::swf::SWFTag  SWFTag_obj::TSymbolClass(Dynamic symbols)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TSymbolClass"),15,hx::DynamicArray(0,1).Add(symbols)); }

::format::swf::SWFTag  SWFTag_obj::TUnknown(int id,::haxe::io::Bytes data)
	{ return hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TUnknown"),24,hx::DynamicArray(0,2).Add(id).Add(data)); }

HX_DEFINE_CREATE_ENUM(SWFTag_obj)

int SWFTag_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("TActionScript3")) return 14;
	if (inName==HX_CSTRING("TBackgroundColor")) return 5;
	if (inName==HX_CSTRING("TBinaryData")) return 22;
	if (inName==HX_CSTRING("TBitsJPEG")) return 20;
	if (inName==HX_CSTRING("TBitsLossless")) return 18;
	if (inName==HX_CSTRING("TBitsLossless2")) return 19;
	if (inName==HX_CSTRING("TClip")) return 7;
	if (inName==HX_CSTRING("TDoActions")) return 6;
	if (inName==HX_CSTRING("TDoInitActions")) return 13;
	if (inName==HX_CSTRING("TExport")) return 12;
	if (inName==HX_CSTRING("TExportAssets")) return 16;
	if (inName==HX_CSTRING("TFont")) return 3;
	if (inName==HX_CSTRING("TFontInfo")) return 4;
	if (inName==HX_CSTRING("TFrameLabel")) return 11;
	if (inName==HX_CSTRING("TJPEGTables")) return 21;
	if (inName==HX_CSTRING("TMorphShape")) return 2;
	if (inName==HX_CSTRING("TPlaceObject2")) return 8;
	if (inName==HX_CSTRING("TPlaceObject3")) return 9;
	if (inName==HX_CSTRING("TRemoveObject2")) return 10;
	if (inName==HX_CSTRING("TSandBox")) return 17;
	if (inName==HX_CSTRING("TShape")) return 1;
	if (inName==HX_CSTRING("TShowFrame")) return 0;
	if (inName==HX_CSTRING("TSound")) return 23;
	if (inName==HX_CSTRING("TSymbolClass")) return 15;
	if (inName==HX_CSTRING("TUnknown")) return 24;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(SWFTag_obj,TActionScript3,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFTag_obj,TBackgroundColor,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(SWFTag_obj,TBinaryData,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(SWFTag_obj,TBitsJPEG,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFTag_obj,TBitsLossless,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFTag_obj,TBitsLossless2,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(SWFTag_obj,TClip,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFTag_obj,TDoActions,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(SWFTag_obj,TDoInitActions,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFTag_obj,TExport,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFTag_obj,TExportAssets,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(SWFTag_obj,TFont,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(SWFTag_obj,TFontInfo,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(SWFTag_obj,TFrameLabel,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFTag_obj,TJPEGTables,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(SWFTag_obj,TMorphShape,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFTag_obj,TPlaceObject2,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFTag_obj,TPlaceObject3,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFTag_obj,TRemoveObject2,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC5(SWFTag_obj,TSandBox,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(SWFTag_obj,TShape,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFTag_obj,TSound,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFTag_obj,TSymbolClass,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(SWFTag_obj,TUnknown,return)

int SWFTag_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("TActionScript3")) return 2;
	if (inName==HX_CSTRING("TBackgroundColor")) return 1;
	if (inName==HX_CSTRING("TBinaryData")) return 2;
	if (inName==HX_CSTRING("TBitsJPEG")) return 2;
	if (inName==HX_CSTRING("TBitsLossless")) return 1;
	if (inName==HX_CSTRING("TBitsLossless2")) return 1;
	if (inName==HX_CSTRING("TClip")) return 3;
	if (inName==HX_CSTRING("TDoActions")) return 1;
	if (inName==HX_CSTRING("TDoInitActions")) return 2;
	if (inName==HX_CSTRING("TExport")) return 1;
	if (inName==HX_CSTRING("TExportAssets")) return 1;
	if (inName==HX_CSTRING("TFont")) return 2;
	if (inName==HX_CSTRING("TFontInfo")) return 2;
	if (inName==HX_CSTRING("TFrameLabel")) return 2;
	if (inName==HX_CSTRING("TJPEGTables")) return 1;
	if (inName==HX_CSTRING("TMorphShape")) return 2;
	if (inName==HX_CSTRING("TPlaceObject2")) return 1;
	if (inName==HX_CSTRING("TPlaceObject3")) return 1;
	if (inName==HX_CSTRING("TRemoveObject2")) return 1;
	if (inName==HX_CSTRING("TSandBox")) return 5;
	if (inName==HX_CSTRING("TShape")) return 2;
	if (inName==HX_CSTRING("TShowFrame")) return 0;
	if (inName==HX_CSTRING("TSound")) return 1;
	if (inName==HX_CSTRING("TSymbolClass")) return 1;
	if (inName==HX_CSTRING("TUnknown")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic SWFTag_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("TActionScript3")) return TActionScript3_dyn();
	if (inName==HX_CSTRING("TBackgroundColor")) return TBackgroundColor_dyn();
	if (inName==HX_CSTRING("TBinaryData")) return TBinaryData_dyn();
	if (inName==HX_CSTRING("TBitsJPEG")) return TBitsJPEG_dyn();
	if (inName==HX_CSTRING("TBitsLossless")) return TBitsLossless_dyn();
	if (inName==HX_CSTRING("TBitsLossless2")) return TBitsLossless2_dyn();
	if (inName==HX_CSTRING("TClip")) return TClip_dyn();
	if (inName==HX_CSTRING("TDoActions")) return TDoActions_dyn();
	if (inName==HX_CSTRING("TDoInitActions")) return TDoInitActions_dyn();
	if (inName==HX_CSTRING("TExport")) return TExport_dyn();
	if (inName==HX_CSTRING("TExportAssets")) return TExportAssets_dyn();
	if (inName==HX_CSTRING("TFont")) return TFont_dyn();
	if (inName==HX_CSTRING("TFontInfo")) return TFontInfo_dyn();
	if (inName==HX_CSTRING("TFrameLabel")) return TFrameLabel_dyn();
	if (inName==HX_CSTRING("TJPEGTables")) return TJPEGTables_dyn();
	if (inName==HX_CSTRING("TMorphShape")) return TMorphShape_dyn();
	if (inName==HX_CSTRING("TPlaceObject2")) return TPlaceObject2_dyn();
	if (inName==HX_CSTRING("TPlaceObject3")) return TPlaceObject3_dyn();
	if (inName==HX_CSTRING("TRemoveObject2")) return TRemoveObject2_dyn();
	if (inName==HX_CSTRING("TSandBox")) return TSandBox_dyn();
	if (inName==HX_CSTRING("TShape")) return TShape_dyn();
	if (inName==HX_CSTRING("TShowFrame")) return TShowFrame;
	if (inName==HX_CSTRING("TSound")) return TSound_dyn();
	if (inName==HX_CSTRING("TSymbolClass")) return TSymbolClass_dyn();
	if (inName==HX_CSTRING("TUnknown")) return TUnknown_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("TShowFrame"),
	HX_CSTRING("TShape"),
	HX_CSTRING("TMorphShape"),
	HX_CSTRING("TFont"),
	HX_CSTRING("TFontInfo"),
	HX_CSTRING("TBackgroundColor"),
	HX_CSTRING("TDoActions"),
	HX_CSTRING("TClip"),
	HX_CSTRING("TPlaceObject2"),
	HX_CSTRING("TPlaceObject3"),
	HX_CSTRING("TRemoveObject2"),
	HX_CSTRING("TFrameLabel"),
	HX_CSTRING("TExport"),
	HX_CSTRING("TDoInitActions"),
	HX_CSTRING("TActionScript3"),
	HX_CSTRING("TSymbolClass"),
	HX_CSTRING("TExportAssets"),
	HX_CSTRING("TSandBox"),
	HX_CSTRING("TBitsLossless"),
	HX_CSTRING("TBitsLossless2"),
	HX_CSTRING("TBitsJPEG"),
	HX_CSTRING("TJPEGTables"),
	HX_CSTRING("TBinaryData"),
	HX_CSTRING("TSound"),
	HX_CSTRING("TUnknown"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SWFTag_obj::TShowFrame,"TShowFrame");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SWFTag_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SWFTag_obj::TShowFrame,"TShowFrame");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class SWFTag_obj::__mClass;

Dynamic __Create_SWFTag_obj() { return new SWFTag_obj; }

void SWFTag_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.SWFTag"), hx::TCanCast< SWFTag_obj >,sStaticFields,sMemberFields,
	&__Create_SWFTag_obj, &__Create,
	&super::__SGetClass(), &CreateSWFTag_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void SWFTag_obj::__boot()
{
hx::Static(TShowFrame) = hx::CreateEnum< SWFTag_obj >(HX_CSTRING("TShowFrame"),0);
}


} // end namespace format
} // end namespace swf
