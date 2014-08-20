#ifndef INCLUDED_format_swf_FontInfoData
#define INCLUDED_format_swf_FontInfoData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,FontInfoData)
HX_DECLARE_CLASS2(format,swf,LangCode)
namespace format{
namespace swf{


class FontInfoData_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FontInfoData_obj OBJ_;

	public:
		FontInfoData_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.FontInfoData"); }
		::String __ToString() const { return HX_CSTRING("FontInfoData.") + tag; }

		static ::format::swf::FontInfoData FIDFont1(bool shiftJIS,bool isANSI,bool hasWideCodes,Dynamic data);
		static Dynamic FIDFont1_dyn();
		static ::format::swf::FontInfoData FIDFont2(::format::swf::LangCode language,Dynamic data);
		static Dynamic FIDFont2_dyn();
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_FontInfoData */ 
