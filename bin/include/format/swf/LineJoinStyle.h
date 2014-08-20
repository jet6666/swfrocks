#ifndef INCLUDED_format_swf_LineJoinStyle
#define INCLUDED_format_swf_LineJoinStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,LineJoinStyle)
namespace format{
namespace swf{


class LineJoinStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef LineJoinStyle_obj OBJ_;

	public:
		LineJoinStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.LineJoinStyle"); }
		::String __ToString() const { return HX_CSTRING("LineJoinStyle.") + tag; }

		static ::format::swf::LineJoinStyle LJBevel;
		static inline ::format::swf::LineJoinStyle LJBevel_dyn() { return LJBevel; }
		static ::format::swf::LineJoinStyle LJMiter(int limitFactor);
		static Dynamic LJMiter_dyn();
		static ::format::swf::LineJoinStyle LJRound;
		static inline ::format::swf::LineJoinStyle LJRound_dyn() { return LJRound; }
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_LineJoinStyle */ 
