#ifndef INCLUDED_format_swf_LS2Fill
#define INCLUDED_format_swf_LS2Fill

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,FillStyle)
HX_DECLARE_CLASS2(format,swf,LS2Fill)
namespace format{
namespace swf{


class LS2Fill_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef LS2Fill_obj OBJ_;

	public:
		LS2Fill_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.LS2Fill"); }
		::String __ToString() const { return HX_CSTRING("LS2Fill.") + tag; }

		static ::format::swf::LS2Fill LS2FColor(Dynamic color);
		static Dynamic LS2FColor_dyn();
		static ::format::swf::LS2Fill LS2FStyle(::format::swf::FillStyle style);
		static Dynamic LS2FStyle_dyn();
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_LS2Fill */ 
