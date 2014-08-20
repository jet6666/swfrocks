#ifndef INCLUDED_format_swf_MorphFillStyle
#define INCLUDED_format_swf_MorphFillStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,MorphFillStyle)
namespace format{
namespace swf{


class MorphFillStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef MorphFillStyle_obj OBJ_;

	public:
		MorphFillStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.MorphFillStyle"); }
		::String __ToString() const { return HX_CSTRING("MorphFillStyle.") + tag; }

		static ::format::swf::MorphFillStyle MFSBitmap(int cid,Dynamic startMatrix,Dynamic endMatrix,bool repeat,bool smooth);
		static Dynamic MFSBitmap_dyn();
		static ::format::swf::MorphFillStyle MFSLinearGradient(Dynamic startMatrix,Dynamic endMatrix,Dynamic gradients);
		static Dynamic MFSLinearGradient_dyn();
		static ::format::swf::MorphFillStyle MFSRadialGradient(Dynamic startMatrix,Dynamic endMatrix,Dynamic gradients);
		static Dynamic MFSRadialGradient_dyn();
		static ::format::swf::MorphFillStyle MFSSolid(Dynamic startColor,Dynamic endColor);
		static Dynamic MFSSolid_dyn();
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_MorphFillStyle */ 
