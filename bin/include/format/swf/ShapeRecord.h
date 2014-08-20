#ifndef INCLUDED_format_swf_ShapeRecord
#define INCLUDED_format_swf_ShapeRecord

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,ShapeRecord)
namespace format{
namespace swf{


class ShapeRecord_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ShapeRecord_obj OBJ_;

	public:
		ShapeRecord_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.ShapeRecord"); }
		::String __ToString() const { return HX_CSTRING("ShapeRecord.") + tag; }

		static ::format::swf::ShapeRecord SHRChange(Dynamic data);
		static Dynamic SHRChange_dyn();
		static ::format::swf::ShapeRecord SHRCurvedEdge(int cdx,int cdy,int adx,int ady);
		static Dynamic SHRCurvedEdge_dyn();
		static ::format::swf::ShapeRecord SHREdge(int dx,int dy);
		static Dynamic SHREdge_dyn();
		static ::format::swf::ShapeRecord SHREnd;
		static inline ::format::swf::ShapeRecord SHREnd_dyn() { return SHREnd; }
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_ShapeRecord */ 
