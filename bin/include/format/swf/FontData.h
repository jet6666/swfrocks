#ifndef INCLUDED_format_swf_FontData
#define INCLUDED_format_swf_FontData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,FontData)
namespace format{
namespace swf{


class FontData_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FontData_obj OBJ_;

	public:
		FontData_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.FontData"); }
		::String __ToString() const { return HX_CSTRING("FontData.") + tag; }

		static ::format::swf::FontData FDFont1(Dynamic data);
		static Dynamic FDFont1_dyn();
		static ::format::swf::FontData FDFont2(bool hasWideChars,Dynamic data);
		static Dynamic FDFont2_dyn();
		static ::format::swf::FontData FDFont3(Dynamic data);
		static Dynamic FDFont3_dyn();
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_FontData */ 
