#ifndef INCLUDED_format_swf_Tools
#define INCLUDED_format_swf_Tools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,SWFTag)
HX_DECLARE_CLASS2(format,swf,Tools)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace format{
namespace swf{


class HXCPP_CLASS_ATTRIBUTES  Tools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tools_obj OBJ_;
		Tools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Tools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tools_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Tools"); }

		static int signExtend( int v,int nbits);
		static Dynamic signExtend_dyn();

		static Float floatFixedBits( int i,int nbits);
		static Dynamic floatFixedBits_dyn();

		static Float floatFixed( int i);
		static Dynamic floatFixed_dyn();

		static Float floatFixed8( int i);
		static Dynamic floatFixed8_dyn();

		static int toFixed8( Float f);
		static Dynamic toFixed8_dyn();

		static int toFixed16( Float f);
		static Dynamic toFixed16_dyn();

		static int minBits( Array< int > values);
		static Dynamic minBits_dyn();

		static ::String hex( ::haxe::io::Bytes b,Dynamic max);
		static Dynamic hex_dyn();

		static ::String bin( ::haxe::io::Bytes b,Dynamic maxBytes);
		static Dynamic bin_dyn();

		static ::String dumpTag( ::format::swf::SWFTag t,Dynamic max);
		static Dynamic dumpTag_dyn();

};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_Tools */ 
