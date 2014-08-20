#ifndef INCLUDED_format_abc_Reader
#define INCLUDED_format_abc_Reader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,abc,ABCData)
HX_DECLARE_CLASS2(format,abc,Index)
HX_DECLARE_CLASS2(format,abc,Name)
HX_DECLARE_CLASS2(format,abc,Namespace)
HX_DECLARE_CLASS2(format,abc,OpReader)
HX_DECLARE_CLASS2(format,abc,Reader)
HX_DECLARE_CLASS2(format,abc,Value)
HX_DECLARE_CLASS2(haxe,io,Input)
namespace format{
namespace abc{


class HXCPP_CLASS_ATTRIBUTES  Reader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Reader_obj OBJ_;
		Reader_obj();
		Void __construct(::haxe::io::Input i);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Reader_obj > __new(::haxe::io::Input i);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Reader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Reader"); }

		::haxe::io::Input i;
		::format::abc::OpReader opr;
		virtual int readInt( );
		Dynamic readInt_dyn();

		virtual ::format::abc::Index readIndex( );
		Dynamic readIndex_dyn();

		virtual ::format::abc::Index readIndexOpt( );
		Dynamic readIndexOpt_dyn();

		virtual Dynamic readList( Dynamic f);
		Dynamic readList_dyn();

		virtual Dynamic readList2( Dynamic f);
		Dynamic readList2_dyn();

		virtual ::String readString( );
		Dynamic readString_dyn();

		virtual ::format::abc::Namespace readNamespace( );
		Dynamic readNamespace_dyn();

		virtual Array< ::Dynamic > readNsSet( );
		Dynamic readNsSet_dyn();

		virtual ::format::abc::Name readName( hx::Null< int >  k);
		Dynamic readName_dyn();

		virtual ::format::abc::Value readValue( bool extra);
		Dynamic readValue_dyn();

		virtual Dynamic readMethodType( );
		Dynamic readMethodType_dyn();

		virtual Dynamic readMetadata( );
		Dynamic readMetadata_dyn();

		virtual Dynamic readField( );
		Dynamic readField_dyn();

		virtual Dynamic readClass( );
		Dynamic readClass_dyn();

		virtual Dynamic readInit( );
		Dynamic readInit_dyn();

		virtual Dynamic readTryCatch( );
		Dynamic readTryCatch_dyn();

		virtual Dynamic readFunction( );
		Dynamic readFunction_dyn();

		virtual ::format::abc::ABCData read( );
		Dynamic read_dyn();

};

} // end namespace format
} // end namespace abc

#endif /* INCLUDED_format_abc_Reader */ 
