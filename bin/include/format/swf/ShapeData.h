#ifndef INCLUDED_format_swf_ShapeData
#define INCLUDED_format_swf_ShapeData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,ShapeData)
namespace format{
namespace swf{


class ShapeData_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ShapeData_obj OBJ_;

	public:
		ShapeData_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.ShapeData"); }
		::String __ToString() const { return HX_CSTRING("ShapeData.") + tag; }

		static ::format::swf::ShapeData SHDShape1(Dynamic bounds,Dynamic shapes);
		static Dynamic SHDShape1_dyn();
		static ::format::swf::ShapeData SHDShape2(Dynamic bounds,Dynamic shapes);
		static Dynamic SHDShape2_dyn();
		static ::format::swf::ShapeData SHDShape3(Dynamic bounds,Dynamic shapes);
		static Dynamic SHDShape3_dyn();
		static ::format::swf::ShapeData SHDShape4(Dynamic data);
		static Dynamic SHDShape4_dyn();
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_ShapeData */ 
