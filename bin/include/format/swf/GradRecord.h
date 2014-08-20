#ifndef INCLUDED_format_swf_GradRecord
#define INCLUDED_format_swf_GradRecord

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,GradRecord)
namespace format{
namespace swf{


class GradRecord_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef GradRecord_obj OBJ_;

	public:
		GradRecord_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.GradRecord"); }
		::String __ToString() const { return HX_CSTRING("GradRecord.") + tag; }

		static ::format::swf::GradRecord GRRGB(int pos,Dynamic col);
		static Dynamic GRRGB_dyn();
		static ::format::swf::GradRecord GRRGBA(int pos,Dynamic col);
		static Dynamic GRRGBA_dyn();
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_GradRecord */ 
