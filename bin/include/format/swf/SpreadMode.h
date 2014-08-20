#ifndef INCLUDED_format_swf_SpreadMode
#define INCLUDED_format_swf_SpreadMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,SpreadMode)
namespace format{
namespace swf{


class SpreadMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SpreadMode_obj OBJ_;

	public:
		SpreadMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.SpreadMode"); }
		::String __ToString() const { return HX_CSTRING("SpreadMode.") + tag; }

		static ::format::swf::SpreadMode SMPad;
		static inline ::format::swf::SpreadMode SMPad_dyn() { return SMPad; }
		static ::format::swf::SpreadMode SMReflect;
		static inline ::format::swf::SpreadMode SMReflect_dyn() { return SMReflect; }
		static ::format::swf::SpreadMode SMRepeat;
		static inline ::format::swf::SpreadMode SMRepeat_dyn() { return SMRepeat; }
		static ::format::swf::SpreadMode SMReserved;
		static inline ::format::swf::SpreadMode SMReserved_dyn() { return SMReserved; }
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_SpreadMode */ 
