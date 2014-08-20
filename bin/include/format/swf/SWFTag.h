#ifndef INCLUDED_format_swf_SWFTag
#define INCLUDED_format_swf_SWFTag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,FontData)
HX_DECLARE_CLASS2(format,swf,FontInfoData)
HX_DECLARE_CLASS2(format,swf,JPEGData)
HX_DECLARE_CLASS2(format,swf,MorphShapeData)
HX_DECLARE_CLASS2(format,swf,PlaceObject)
HX_DECLARE_CLASS2(format,swf,SWFTag)
HX_DECLARE_CLASS2(format,swf,ShapeData)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace format{
namespace swf{


class SWFTag_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SWFTag_obj OBJ_;

	public:
		SWFTag_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.SWFTag"); }
		::String __ToString() const { return HX_CSTRING("SWFTag.") + tag; }

		static ::format::swf::SWFTag TActionScript3(::haxe::io::Bytes data,Dynamic context);
		static Dynamic TActionScript3_dyn();
		static ::format::swf::SWFTag TBackgroundColor(int color);
		static Dynamic TBackgroundColor_dyn();
		static ::format::swf::SWFTag TBinaryData(int id,::haxe::io::Bytes data);
		static Dynamic TBinaryData_dyn();
		static ::format::swf::SWFTag TBitsJPEG(int id,::format::swf::JPEGData data);
		static Dynamic TBitsJPEG_dyn();
		static ::format::swf::SWFTag TBitsLossless(Dynamic data);
		static Dynamic TBitsLossless_dyn();
		static ::format::swf::SWFTag TBitsLossless2(Dynamic data);
		static Dynamic TBitsLossless2_dyn();
		static ::format::swf::SWFTag TClip(int id,int frames,Array< ::Dynamic > tags);
		static Dynamic TClip_dyn();
		static ::format::swf::SWFTag TDoActions(::haxe::io::Bytes data);
		static Dynamic TDoActions_dyn();
		static ::format::swf::SWFTag TDoInitActions(int id,::haxe::io::Bytes data);
		static Dynamic TDoInitActions_dyn();
		static ::format::swf::SWFTag TExport(Dynamic el);
		static Dynamic TExport_dyn();
		static ::format::swf::SWFTag TExportAssets(Dynamic symbols);
		static Dynamic TExportAssets_dyn();
		static ::format::swf::SWFTag TFont(int id,::format::swf::FontData data);
		static Dynamic TFont_dyn();
		static ::format::swf::SWFTag TFontInfo(int id,::format::swf::FontInfoData data);
		static Dynamic TFontInfo_dyn();
		static ::format::swf::SWFTag TFrameLabel(::String label,bool anchor);
		static Dynamic TFrameLabel_dyn();
		static ::format::swf::SWFTag TJPEGTables(::haxe::io::Bytes data);
		static Dynamic TJPEGTables_dyn();
		static ::format::swf::SWFTag TMorphShape(int id,::format::swf::MorphShapeData data);
		static Dynamic TMorphShape_dyn();
		static ::format::swf::SWFTag TPlaceObject2(::format::swf::PlaceObject po);
		static Dynamic TPlaceObject2_dyn();
		static ::format::swf::SWFTag TPlaceObject3(::format::swf::PlaceObject po);
		static Dynamic TPlaceObject3_dyn();
		static ::format::swf::SWFTag TRemoveObject2(int depth);
		static Dynamic TRemoveObject2_dyn();
		static ::format::swf::SWFTag TSandBox(bool useDirectBlit,bool useGpu,bool hasMeta,bool useAs3,bool useNetwork);
		static Dynamic TSandBox_dyn();
		static ::format::swf::SWFTag TShape(int id,::format::swf::ShapeData data);
		static Dynamic TShape_dyn();
		static ::format::swf::SWFTag TShowFrame;
		static inline ::format::swf::SWFTag TShowFrame_dyn() { return TShowFrame; }
		static ::format::swf::SWFTag TSound(Dynamic data);
		static Dynamic TSound_dyn();
		static ::format::swf::SWFTag TSymbolClass(Dynamic symbols);
		static Dynamic TSymbolClass_dyn();
		static ::format::swf::SWFTag TUnknown(int id,::haxe::io::Bytes data);
		static Dynamic TUnknown_dyn();
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_SWFTag */ 
