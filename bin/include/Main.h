#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS2(format,abc,ABCData)
HX_DECLARE_CLASS2(format,abc,Index)
HX_DECLARE_CLASS2(format,abc,Name)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Main"); }

		virtual Void replectSymbolClass( Dynamic classList);
		Dynamic replectSymbolClass_dyn();

		virtual Dynamic tranformSymbolClass( Dynamic classList);
		Dynamic tranformSymbolClass_dyn();

		virtual ::haxe::io::Bytes transformAbc( ::haxe::io::Bytes abcBytes,int pre);
		Dynamic transformAbc_dyn();

		static ::haxe::ds::StringMap map;
		static Void main( );
		static Dynamic main_dyn();

		static ::format::abc::Name getName( ::format::abc::ABCData abcData,::format::abc::Index idx);
		static Dynamic getName_dyn();

		static ::String getString( ::format::abc::ABCData abcData,::format::abc::Index idx);
		static Dynamic getString_dyn();

		static Void setString( ::format::abc::ABCData abcData,::format::abc::Index idx,::String value);
		static Dynamic setString_dyn();

};


#endif /* INCLUDED_Main */ 
