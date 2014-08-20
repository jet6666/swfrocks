#ifndef INCLUDED_format_abc_Writer
#define INCLUDED_format_abc_Writer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,abc,ABCData)
HX_DECLARE_CLASS2(format,abc,Index)
HX_DECLARE_CLASS2(format,abc,Name)
HX_DECLARE_CLASS2(format,abc,Namespace)
HX_DECLARE_CLASS2(format,abc,OpWriter)
HX_DECLARE_CLASS2(format,abc,Value)
HX_DECLARE_CLASS2(format,abc,Writer)
HX_DECLARE_CLASS2(haxe,io,Output)
namespace format{
namespace abc{


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

		::haxe::io::Output o;
		::format::abc::OpWriter opw;
		virtual Void beginTag( int id,int len);
		Dynamic beginTag_dyn();

		virtual Void writeInt( int n);
		Dynamic writeInt_dyn();

		virtual Void writeUInt( int n);
		Dynamic writeUInt_dyn();

		virtual Void writeList( Dynamic a,Dynamic write);
		Dynamic writeList_dyn();

		virtual Void writeList2( Dynamic a,Dynamic write);
		Dynamic writeList2_dyn();

		virtual Void writeString( ::String s);
		Dynamic writeString_dyn();

		virtual Void writeIndex( ::format::abc::Index i);
		Dynamic writeIndex_dyn();

		virtual Void writeIndexOpt( ::format::abc::Index i);
		Dynamic writeIndexOpt_dyn();

		virtual Void writeNamespace( ::format::abc::Namespace n);
		Dynamic writeNamespace_dyn();

		virtual Void writeNsSet( Array< ::Dynamic > n);
		Dynamic writeNsSet_dyn();

		virtual Void writeNameByte( int k,int n);
		Dynamic writeNameByte_dyn();

		virtual Void writeName( hx::Null< int >  k,::format::abc::Name n);
		Dynamic writeName_dyn();

		virtual Void writeValue( bool extra,::format::abc::Value v);
		Dynamic writeValue_dyn();

		virtual Void writeField( Dynamic f);
		Dynamic writeField_dyn();

		virtual Void writeMethodType( Dynamic m);
		Dynamic writeMethodType_dyn();

		virtual Void writeMetadata( Dynamic m);
		Dynamic writeMetadata_dyn();

		virtual Void writeClass( Dynamic c);
		Dynamic writeClass_dyn();

		virtual Void writeInit( Dynamic i);
		Dynamic writeInit_dyn();

		virtual Void writeTryCatch( Dynamic t);
		Dynamic writeTryCatch_dyn();

		virtual Void writeFunction( Dynamic f);
		Dynamic writeFunction_dyn();

		virtual Void write( ::format::abc::ABCData d);
		Dynamic write_dyn();

};

} // end namespace format
} // end namespace abc

#endif /* INCLUDED_format_abc_Writer */ 
