#ifndef INCLUDED_format_tools_BitsOutput
#define INCLUDED_format_tools_BitsOutput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,tools,BitsOutput)
HX_DECLARE_CLASS2(haxe,io,Output)
namespace format{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  BitsOutput_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitsOutput_obj OBJ_;
		BitsOutput_obj();
		Void __construct(::haxe::io::Output o);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BitsOutput_obj > __new(::haxe::io::Output o);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitsOutput_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BitsOutput"); }

		::haxe::io::Output o;
		int nbits;
		int bits;
		virtual Void writeBits( int n,int v);
		Dynamic writeBits_dyn();

		virtual Void writeBit( bool flag);
		Dynamic writeBit_dyn();

		virtual Void flush( );
		Dynamic flush_dyn();

};

} // end namespace format
} // end namespace tools

#endif /* INCLUDED_format_tools_BitsOutput */ 
