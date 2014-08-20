#ifndef INCLUDED_format_abc_Index
#define INCLUDED_format_abc_Index

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,abc,Index)
namespace format{
namespace abc{


class Index_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Index_obj OBJ_;

	public:
		Index_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.abc.Index"); }
		::String __ToString() const { return HX_CSTRING("Index.") + tag; }

		static ::format::abc::Index Idx(int v);
		static Dynamic Idx_dyn();
};

} // end namespace format
} // end namespace abc

#endif /* INCLUDED_format_abc_Index */ 
