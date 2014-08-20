#ifndef INCLUDED_format_swf_MorphShapeData
#define INCLUDED_format_swf_MorphShapeData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,MorphShapeData)
namespace format{
namespace swf{


class MorphShapeData_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef MorphShapeData_obj OBJ_;

	public:
		MorphShapeData_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.MorphShapeData"); }
		::String __ToString() const { return HX_CSTRING("MorphShapeData.") + tag; }

		static ::format::swf::MorphShapeData MSDShape1(Dynamic data);
		static Dynamic MSDShape1_dyn();
		static ::format::swf::MorphShapeData MSDShape2(Dynamic data);
		static Dynamic MSDShape2_dyn();
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_MorphShapeData */ 
