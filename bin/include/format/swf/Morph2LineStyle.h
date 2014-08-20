#ifndef INCLUDED_format_swf_Morph2LineStyle
#define INCLUDED_format_swf_Morph2LineStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,Morph2LineStyle)
HX_DECLARE_CLASS2(format,swf,MorphFillStyle)
namespace format{
namespace swf{


class Morph2LineStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Morph2LineStyle_obj OBJ_;

	public:
		Morph2LineStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.Morph2LineStyle"); }
		::String __ToString() const { return HX_CSTRING("Morph2LineStyle.") + tag; }

		static ::format::swf::Morph2LineStyle M2LSFill(::format::swf::MorphFillStyle fill,Dynamic data);
		static Dynamic M2LSFill_dyn();
		static ::format::swf::Morph2LineStyle M2LSNoFill(Dynamic startColor,Dynamic endColor,Dynamic data);
		static Dynamic M2LSNoFill_dyn();
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_Morph2LineStyle */ 
