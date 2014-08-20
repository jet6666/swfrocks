#ifndef INCLUDED_format_swf_Writer
#define INCLUDED_format_swf_Writer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,BlendMode)
HX_DECLARE_CLASS2(format,swf,FillStyle)
HX_DECLARE_CLASS2(format,swf,Filter)
HX_DECLARE_CLASS2(format,swf,FontData)
HX_DECLARE_CLASS2(format,swf,FontInfoData)
HX_DECLARE_CLASS2(format,swf,GradRecord)
HX_DECLARE_CLASS2(format,swf,Morph2LineStyle)
HX_DECLARE_CLASS2(format,swf,MorphFillStyle)
HX_DECLARE_CLASS2(format,swf,MorphShapeData)
HX_DECLARE_CLASS2(format,swf,PlaceObject)
HX_DECLARE_CLASS2(format,swf,SWFTag)
HX_DECLARE_CLASS2(format,swf,ShapeData)
HX_DECLARE_CLASS2(format,swf,ShapeRecord)
HX_DECLARE_CLASS2(format,swf,Writer)
HX_DECLARE_CLASS2(format,tools,BitsOutput)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,BytesOutput)
HX_DECLARE_CLASS2(haxe,io,Output)
namespace format{
namespace swf{


class HXCPP_CLASS_ATTRIBUTES  Writer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Writer_obj OBJ_;
		Writer_obj();
		Void __construct(::haxe::io::Output o);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Writer_obj > __new(::haxe::io::Output o);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Writer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Writer"); }

		::haxe::io::Output output;
		::haxe::io::BytesOutput o;
		bool compressed;
		::format::tools::BitsOutput bits;
		virtual Void write( Dynamic s);
		Dynamic write_dyn();

		virtual Void writeRect( Dynamic r);
		Dynamic writeRect_dyn();

		virtual Void writeFixed8( int v);
		Dynamic writeFixed8_dyn();

		virtual Void writeFixed( int v);
		Dynamic writeFixed_dyn();

		virtual ::haxe::io::BytesOutput openTMP( );
		Dynamic openTMP_dyn();

		virtual ::haxe::io::Bytes closeTMP( ::haxe::io::BytesOutput old);
		Dynamic closeTMP_dyn();

		virtual Void writeHeader( Dynamic h);
		Dynamic writeHeader_dyn();

		virtual Void writeRGB( Dynamic c);
		Dynamic writeRGB_dyn();

		virtual Void writeRGBA( Dynamic c);
		Dynamic writeRGBA_dyn();

		virtual Void writeMatrixPart( Dynamic m);
		Dynamic writeMatrixPart_dyn();

		virtual Void writeMatrix( Dynamic m);
		Dynamic writeMatrix_dyn();

		virtual Void writeCXAColor( Dynamic c,int nbits);
		Dynamic writeCXAColor_dyn();

		virtual Void writeCXA( Dynamic c);
		Dynamic writeCXA_dyn();

		virtual Void writeClipEvents( Dynamic events);
		Dynamic writeClipEvents_dyn();

		virtual Void writeFilterFlags( Dynamic f,bool top);
		Dynamic writeFilterFlags_dyn();

		virtual Void writeFilterGradient( Dynamic f);
		Dynamic writeFilterGradient_dyn();

		virtual Void writeFilter( ::format::swf::Filter f);
		Dynamic writeFilter_dyn();

		virtual Void writeFilters( Array< ::Dynamic > filters);
		Dynamic writeFilters_dyn();

		virtual Void writeBlendMode( ::format::swf::BlendMode b);
		Dynamic writeBlendMode_dyn();

		virtual Void writePlaceObject( ::format::swf::PlaceObject po,bool v3);
		Dynamic writePlaceObject_dyn();

		virtual Void writeInt( int v);
		Dynamic writeInt_dyn();

		virtual Void writeTID( int id,int len);
		Dynamic writeTID_dyn();

		virtual Void writeTIDExt( int id,int len);
		Dynamic writeTIDExt_dyn();

		virtual Void writeSymbols( Dynamic sl,int tagid);
		Dynamic writeSymbols_dyn();

		virtual Void writeSound( Dynamic s);
		Dynamic writeSound_dyn();

		virtual Void writeGradRecord( int ver,::format::swf::GradRecord grad_record);
		Dynamic writeGradRecord_dyn();

		virtual Void writeGradient( int ver,Dynamic grad);
		Dynamic writeGradient_dyn();

		virtual Void writeFocalGradient( int ver,Dynamic grad);
		Dynamic writeFocalGradient_dyn();

		virtual Void writeFillStyle( int ver,::format::swf::FillStyle fill_style);
		Dynamic writeFillStyle_dyn();

		virtual Void writeFillStyles( int ver,Array< ::Dynamic > fill_styles);
		Dynamic writeFillStyles_dyn();

		virtual Void writeLineStyle( int ver,Dynamic line_style);
		Dynamic writeLineStyle_dyn();

		virtual Void writeLineStyles( int ver,Dynamic line_styles);
		Dynamic writeLineStyles_dyn();

		virtual Void writeShapeRecord( int ver,Dynamic style_info,::format::swf::ShapeRecord shape_record);
		Dynamic writeShapeRecord_dyn();

		virtual Void writeShapeWithoutStyle( int ver,Dynamic data);
		Dynamic writeShapeWithoutStyle_dyn();

		virtual Void writeShapeWithStyle( int ver,Dynamic data);
		Dynamic writeShapeWithStyle_dyn();

		virtual Void writeShape( int id,::format::swf::ShapeData data);
		Dynamic writeShape_dyn();

		virtual Void writeMorphGradient( int ver,Dynamic g);
		Dynamic writeMorphGradient_dyn();

		virtual Void writeMorphGradients( int ver,Dynamic gradients);
		Dynamic writeMorphGradients_dyn();

		virtual Void writeMorphFillStyle( int ver,::format::swf::MorphFillStyle fill_style);
		Dynamic writeMorphFillStyle_dyn();

		virtual Void writeMorphFillStyles( int ver,Array< ::Dynamic > fill_styles);
		Dynamic writeMorphFillStyles_dyn();

		virtual Void writeMorph1LineStyle( Dynamic s);
		Dynamic writeMorph1LineStyle_dyn();

		virtual Void writeMorph1LineStyles( Dynamic line_styles);
		Dynamic writeMorph1LineStyles_dyn();

		virtual Void writeMorph2LineStyle( ::format::swf::Morph2LineStyle style);
		Dynamic writeMorph2LineStyle_dyn();

		virtual Void writeMorph2LineStyles( Array< ::Dynamic > line_styles);
		Dynamic writeMorph2LineStyles_dyn();

		virtual Void writeMorphShape( int id,::format::swf::MorphShapeData data);
		Dynamic writeMorphShape_dyn();

		virtual Array< int > writeFontGlyphs( Dynamic glyphs);
		Dynamic writeFontGlyphs_dyn();

		virtual Void writeFont1( Dynamic data);
		Dynamic writeFont1_dyn();

		virtual Void writeFont2( bool hasWideChars,Dynamic data);
		Dynamic writeFont2_dyn();

		virtual Void writeFont( int id,::format::swf::FontData data);
		Dynamic writeFont_dyn();

		virtual Void writeFontInfo( int id,::format::swf::FontInfoData data);
		Dynamic writeFontInfo_dyn();

		virtual Void writeTag( ::format::swf::SWFTag t);
		Dynamic writeTag_dyn();

		virtual Void writeEnd( );
		Dynamic writeEnd_dyn();

};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_Writer */ 
