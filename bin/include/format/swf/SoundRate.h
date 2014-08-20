#ifndef INCLUDED_format_swf_SoundRate
#define INCLUDED_format_swf_SoundRate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,SoundRate)
namespace format{
namespace swf{


class SoundRate_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SoundRate_obj OBJ_;

	public:
		SoundRate_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.SoundRate"); }
		::String __ToString() const { return HX_CSTRING("SoundRate.") + tag; }

		static ::format::swf::SoundRate SR11k;
		static inline ::format::swf::SoundRate SR11k_dyn() { return SR11k; }
		static ::format::swf::SoundRate SR22k;
		static inline ::format::swf::SoundRate SR22k_dyn() { return SR22k; }
		static ::format::swf::SoundRate SR44k;
		static inline ::format::swf::SoundRate SR44k_dyn() { return SR44k; }
		static ::format::swf::SoundRate SR5k;
		static inline ::format::swf::SoundRate SR5k_dyn() { return SR5k; }
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_SoundRate */ 
