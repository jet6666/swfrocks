#ifndef INCLUDED_format_swf_JPEGData
#define INCLUDED_format_swf_JPEGData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,JPEGData)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace format{
namespace swf{


class JPEGData_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef JPEGData_obj OBJ_;

	public:
		JPEGData_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.JPEGData"); }
		::String __ToString() const { return HX_CSTRING("JPEGData.") + tag; }

		static ::format::swf::JPEGData JDJPEG1(::haxe::io::Bytes data);
		static Dynamic JDJPEG1_dyn();
		static ::format::swf::JPEGData JDJPEG2(::haxe::io::Bytes data);
		static Dynamic JDJPEG2_dyn();
		static ::format::swf::JPEGData JDJPEG3(::haxe::io::Bytes data,::haxe::io::Bytes mask);
		static Dynamic JDJPEG3_dyn();
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_JPEGData */ 
