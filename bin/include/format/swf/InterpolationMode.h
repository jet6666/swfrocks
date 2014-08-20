#ifndef INCLUDED_format_swf_InterpolationMode
#define INCLUDED_format_swf_InterpolationMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,InterpolationMode)
namespace format{
namespace swf{


class InterpolationMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef InterpolationMode_obj OBJ_;

	public:
		InterpolationMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.InterpolationMode"); }
		::String __ToString() const { return HX_CSTRING("InterpolationMode.") + tag; }

		static ::format::swf::InterpolationMode IMLinearRGB;
		static inline ::format::swf::InterpolationMode IMLinearRGB_dyn() { return IMLinearRGB; }
		static ::format::swf::InterpolationMode IMNormalRGB;
		static inline ::format::swf::InterpolationMode IMNormalRGB_dyn() { return IMNormalRGB; }
		static ::format::swf::InterpolationMode IMReserved1;
		static inline ::format::swf::InterpolationMode IMReserved1_dyn() { return IMReserved1; }
		static ::format::swf::InterpolationMode IMReserved2;
		static inline ::format::swf::InterpolationMode IMReserved2_dyn() { return IMReserved2; }
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_InterpolationMode */ 
