#ifndef INCLUDED_format_swf_Filter
#define INCLUDED_format_swf_Filter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,Filter)
namespace format{
namespace swf{


class Filter_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Filter_obj OBJ_;

	public:
		Filter_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.Filter"); }
		::String __ToString() const { return HX_CSTRING("Filter.") + tag; }

		static ::format::swf::Filter FBevel(Dynamic data);
		static Dynamic FBevel_dyn();
		static ::format::swf::Filter FBlur(Dynamic data);
		static Dynamic FBlur_dyn();
		static ::format::swf::Filter FColorMatrix(Array< Float > data);
		static Dynamic FColorMatrix_dyn();
		static ::format::swf::Filter FDropShadow(Dynamic data);
		static Dynamic FDropShadow_dyn();
		static ::format::swf::Filter FGlow(Dynamic data);
		static Dynamic FGlow_dyn();
		static ::format::swf::Filter FGradientBevel(Dynamic data);
		static Dynamic FGradientBevel_dyn();
		static ::format::swf::Filter FGradientGlow(Dynamic data);
		static Dynamic FGradientGlow_dyn();
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_Filter */ 
