#ifndef INCLUDED_format_swf_FillStyle
#define INCLUDED_format_swf_FillStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,FillStyle)
namespace format{
namespace swf{


class FillStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FillStyle_obj OBJ_;

	public:
		FillStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.FillStyle"); }
		::String __ToString() const { return HX_CSTRING("FillStyle.") + tag; }

		static ::format::swf::FillStyle FSBitmap(int cid,Dynamic mat,bool repeat,bool smooth);
		static Dynamic FSBitmap_dyn();
		static ::format::swf::FillStyle FSFocalGradient(Dynamic mat,Dynamic grad);
		static Dynamic FSFocalGradient_dyn();
		static ::format::swf::FillStyle FSLinearGradient(Dynamic mat,Dynamic grad);
		static Dynamic FSLinearGradient_dyn();
		static ::format::swf::FillStyle FSRadialGradient(Dynamic mat,Dynamic grad);
		static Dynamic FSRadialGradient_dyn();
		static ::format::swf::FillStyle FSSolid(Dynamic rgb);
		static Dynamic FSSolid_dyn();
		static ::format::swf::FillStyle FSSolidAlpha(Dynamic rgb);
		static Dynamic FSSolidAlpha_dyn();
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_FillStyle */ 
