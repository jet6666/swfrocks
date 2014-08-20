#ifndef INCLUDED_format_swf_BlendMode
#define INCLUDED_format_swf_BlendMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,BlendMode)
namespace format{
namespace swf{


class BlendMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BlendMode_obj OBJ_;

	public:
		BlendMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.BlendMode"); }
		::String __ToString() const { return HX_CSTRING("BlendMode.") + tag; }

		static ::format::swf::BlendMode BAdd;
		static inline ::format::swf::BlendMode BAdd_dyn() { return BAdd; }
		static ::format::swf::BlendMode BAlpha;
		static inline ::format::swf::BlendMode BAlpha_dyn() { return BAlpha; }
		static ::format::swf::BlendMode BDarken;
		static inline ::format::swf::BlendMode BDarken_dyn() { return BDarken; }
		static ::format::swf::BlendMode BDifference;
		static inline ::format::swf::BlendMode BDifference_dyn() { return BDifference; }
		static ::format::swf::BlendMode BErase;
		static inline ::format::swf::BlendMode BErase_dyn() { return BErase; }
		static ::format::swf::BlendMode BHardLight;
		static inline ::format::swf::BlendMode BHardLight_dyn() { return BHardLight; }
		static ::format::swf::BlendMode BInvert;
		static inline ::format::swf::BlendMode BInvert_dyn() { return BInvert; }
		static ::format::swf::BlendMode BLayer;
		static inline ::format::swf::BlendMode BLayer_dyn() { return BLayer; }
		static ::format::swf::BlendMode BLighten;
		static inline ::format::swf::BlendMode BLighten_dyn() { return BLighten; }
		static ::format::swf::BlendMode BMultiply;
		static inline ::format::swf::BlendMode BMultiply_dyn() { return BMultiply; }
		static ::format::swf::BlendMode BNormal;
		static inline ::format::swf::BlendMode BNormal_dyn() { return BNormal; }
		static ::format::swf::BlendMode BOverlay;
		static inline ::format::swf::BlendMode BOverlay_dyn() { return BOverlay; }
		static ::format::swf::BlendMode BScreen;
		static inline ::format::swf::BlendMode BScreen_dyn() { return BScreen; }
		static ::format::swf::BlendMode BSubtract;
		static inline ::format::swf::BlendMode BSubtract_dyn() { return BSubtract; }
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_BlendMode */ 
