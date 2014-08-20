#ifndef INCLUDED_format_tools_BitsInput
#define INCLUDED_format_tools_BitsInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,tools,BitsInput)
HX_DECLARE_CLASS2(haxe,io,Input)
namespace format{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES  BitsInput_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitsInput_obj OBJ_;
		BitsInput_obj();
		Void __construct(::haxe::io::Input i);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BitsInput_obj > __new(::haxe::io::Input i);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitsInput_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BitsInput"); }

		::haxe::io::Input i;
		int nbits;
		int bits;
		virtual int readBits( int n);
		Dynamic readBits_dyn();

		virtual bool readBit( );
		Dynamic readBit_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

};

} // end namespace format
} // end namespace tools

#endif /* INCLUDED_format_tools_BitsInput */ 
