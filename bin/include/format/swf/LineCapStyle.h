#ifndef INCLUDED_format_swf_LineCapStyle
#define INCLUDED_format_swf_LineCapStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,LineCapStyle)
namespace format{
namespace swf{


class LineCapStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef LineCapStyle_obj OBJ_;

	public:
		LineCapStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.LineCapStyle"); }
		::String __ToString() const { return HX_CSTRING("LineCapStyle.") + tag; }

		static ::format::swf::LineCapStyle LCNone;
		static inline ::format::swf::LineCapStyle LCNone_dyn() { return LCNone; }
		static ::format::swf::LineCapStyle LCRound;
		static inline ::format::swf::LineCapStyle LCRound_dyn() { return LCRound; }
		static ::format::swf::LineCapStyle LCSquare;
		static inline ::format::swf::LineCapStyle LCSquare_dyn() { return LCSquare; }
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_LineCapStyle */ 
