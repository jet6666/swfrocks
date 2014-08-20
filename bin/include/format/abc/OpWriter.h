#ifndef INCLUDED_format_abc_OpWriter
#define INCLUDED_format_abc_OpWriter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,abc,Index)
HX_DECLARE_CLASS2(format,abc,JumpStyle)
HX_DECLARE_CLASS2(format,abc,OpCode)
HX_DECLARE_CLASS2(format,abc,OpWriter)
HX_DECLARE_CLASS2(format,abc,Operation)
HX_DECLARE_CLASS2(haxe,io,Output)
namespace format{
namespace abc{


class HXCPP_CLASS_ATTRIBUTES  OpWriter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OpWriter_obj OBJ_;
		OpWriter_obj();
		Void __construct(::haxe::io::Output o);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< OpWriter_obj > __new(::haxe::io::Output o);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OpWriter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("OpWriter"); }

		::haxe::io::Output o;
		virtual Void writeInt( int n);
		Dynamic writeInt_dyn();

		virtual Void writeInt32( int n);
		Dynamic writeInt32_dyn();

		virtual Void _int( int i);
		Dynamic _int_dyn();

		virtual Void b( int v);
		Dynamic b_dyn();

		virtual Void reg( int v);
		Dynamic reg_dyn();

		virtual Void idx( ::format::abc::Index i);
		Dynamic idx_dyn();

		virtual int jumpCode( ::format::abc::JumpStyle j);
		Dynamic jumpCode_dyn();

		virtual int operationCode( ::format::abc::Operation o);
		Dynamic operationCode_dyn();

		virtual Void write( ::format::abc::OpCode op);
		Dynamic write_dyn();

};

} // end namespace format
} // end namespace abc

#endif /* INCLUDED_format_abc_OpWriter */ 
