#ifndef INCLUDED_format_abc_OpReader
#define INCLUDED_format_abc_OpReader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,abc,Index)
HX_DECLARE_CLASS2(format,abc,JumpStyle)
HX_DECLARE_CLASS2(format,abc,OpCode)
HX_DECLARE_CLASS2(format,abc,OpReader)
HX_DECLARE_CLASS2(haxe,io,Input)
namespace format{
namespace abc{


class HXCPP_CLASS_ATTRIBUTES  OpReader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OpReader_obj OBJ_;
		OpReader_obj();
		Void __construct(::haxe::io::Input i);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< OpReader_obj > __new(::haxe::io::Input i);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OpReader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("OpReader"); }

		::haxe::io::Input i;
		virtual int readInt( );
		Dynamic readInt_dyn();

		virtual ::format::abc::Index readIndex( );
		Dynamic readIndex_dyn();

		virtual int readInt32( );
		Dynamic readInt32_dyn();

		virtual int reg( );
		Dynamic reg_dyn();

		virtual ::format::abc::OpCode jmp( ::format::abc::JumpStyle j);
		Dynamic jmp_dyn();

		virtual ::format::abc::OpCode readOp( int op);
		Dynamic readOp_dyn();

		static Array< ::Dynamic > decode( ::haxe::io::Input i);
		static Dynamic decode_dyn();

};

} // end namespace format
} // end namespace abc

#endif /* INCLUDED_format_abc_OpReader */ 
