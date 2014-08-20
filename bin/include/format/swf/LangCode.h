#ifndef INCLUDED_format_swf_LangCode
#define INCLUDED_format_swf_LangCode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,LangCode)
namespace format{
namespace swf{


class LangCode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef LangCode_obj OBJ_;

	public:
		LangCode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.LangCode"); }
		::String __ToString() const { return HX_CSTRING("LangCode.") + tag; }

		static ::format::swf::LangCode LCJapanese;
		static inline ::format::swf::LangCode LCJapanese_dyn() { return LCJapanese; }
		static ::format::swf::LangCode LCKorean;
		static inline ::format::swf::LangCode LCKorean_dyn() { return LCKorean; }
		static ::format::swf::LangCode LCLatin;
		static inline ::format::swf::LangCode LCLatin_dyn() { return LCLatin; }
		static ::format::swf::LangCode LCNone;
		static inline ::format::swf::LangCode LCNone_dyn() { return LCNone; }
		static ::format::swf::LangCode LCSimplifiedChinese;
		static inline ::format::swf::LangCode LCSimplifiedChinese_dyn() { return LCSimplifiedChinese; }
		static ::format::swf::LangCode LCTraditionalChinese;
		static inline ::format::swf::LangCode LCTraditionalChinese_dyn() { return LCTraditionalChinese; }
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_LangCode */ 
