#ifndef INCLUDED_format_swf_ColorModel
#define INCLUDED_format_swf_ColorModel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,ColorModel)
namespace format{
namespace swf{


class ColorModel_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ColorModel_obj OBJ_;

	public:
		ColorModel_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.ColorModel"); }
		::String __ToString() const { return HX_CSTRING("ColorModel.") + tag; }

		static ::format::swf::ColorModel CM15Bits;
		static inline ::format::swf::ColorModel CM15Bits_dyn() { return CM15Bits; }
		static ::format::swf::ColorModel CM24Bits;
		static inline ::format::swf::ColorModel CM24Bits_dyn() { return CM24Bits; }
		static ::format::swf::ColorModel CM32Bits;
		static inline ::format::swf::ColorModel CM32Bits_dyn() { return CM32Bits; }
		static ::format::swf::ColorModel CM8Bits(int ncolors);
		static Dynamic CM8Bits_dyn();
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_ColorModel */ 
