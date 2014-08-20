#ifndef INCLUDED_format_abc_ABCData
#define INCLUDED_format_abc_ABCData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,abc,ABCData)
HX_DECLARE_CLASS2(format,abc,Index)
HX_DECLARE_CLASS2(format,abc,Name)
HX_DECLARE_CLASS2(format,abc,Namespace)
namespace format{
namespace abc{


class HXCPP_CLASS_ATTRIBUTES  ABCData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ABCData_obj OBJ_;
		ABCData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ABCData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ABCData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ABCData"); }

		Array< int > ints;
		Array< int > uints;
		Array< Float > floats;
		Array< ::String > strings;
		Array< ::Dynamic > namespaces;
		Array< ::Dynamic > nssets;
		Array< ::Dynamic > names;
		Dynamic methodTypes;
		Dynamic metadatas;
		Dynamic classes;
		Dynamic inits;
		Dynamic functions;
		virtual Dynamic get( Dynamic t,::format::abc::Index i);
		Dynamic get_dyn();

};

} // end namespace format
} // end namespace abc

#endif /* INCLUDED_format_abc_ABCData */ 
