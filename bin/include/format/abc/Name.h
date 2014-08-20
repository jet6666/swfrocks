#ifndef INCLUDED_format_abc_Name
#define INCLUDED_format_abc_Name

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,abc,Index)
HX_DECLARE_CLASS2(format,abc,Name)
namespace format{
namespace abc{


class Name_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Name_obj OBJ_;

	public:
		Name_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.abc.Name"); }
		::String __ToString() const { return HX_CSTRING("Name.") + tag; }

		static ::format::abc::Name NAttrib(::format::abc::Name n);
		static Dynamic NAttrib_dyn();
		static ::format::abc::Name NMulti(::format::abc::Index name,::format::abc::Index ns);
		static Dynamic NMulti_dyn();
		static ::format::abc::Name NMultiLate(::format::abc::Index nset);
		static Dynamic NMultiLate_dyn();
		static ::format::abc::Name NName(::format::abc::Index name,::format::abc::Index ns);
		static Dynamic NName_dyn();
		static ::format::abc::Name NParams(::format::abc::Index n,Array< ::Dynamic > params);
		static Dynamic NParams_dyn();
		static ::format::abc::Name NRuntime(::format::abc::Index name);
		static Dynamic NRuntime_dyn();
		static ::format::abc::Name NRuntimeLate;
		static inline ::format::abc::Name NRuntimeLate_dyn() { return NRuntimeLate; }
};

} // end namespace format
} // end namespace abc

#endif /* INCLUDED_format_abc_Name */ 
