#ifndef INCLUDED_format_swf_LineStyleData
#define INCLUDED_format_swf_LineStyleData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,LineStyleData)
namespace format{
namespace swf{


class LineStyleData_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef LineStyleData_obj OBJ_;

	public:
		LineStyleData_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.LineStyleData"); }
		::String __ToString() const { return HX_CSTRING("LineStyleData.") + tag; }

		static ::format::swf::LineStyleData LS2(Dynamic data);
		static Dynamic LS2_dyn();
		static ::format::swf::LineStyleData LSRGB(Dynamic rgb);
		static Dynamic LSRGB_dyn();
		static ::format::swf::LineStyleData LSRGBA(Dynamic rgba);
		static Dynamic LSRGBA_dyn();
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_LineStyleData */ 
