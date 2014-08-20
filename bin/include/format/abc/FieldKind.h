#ifndef INCLUDED_format_abc_FieldKind
#define INCLUDED_format_abc_FieldKind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,abc,FieldKind)
HX_DECLARE_CLASS2(format,abc,Index)
HX_DECLARE_CLASS2(format,abc,MethodKind)
HX_DECLARE_CLASS2(format,abc,Value)
namespace format{
namespace abc{


class FieldKind_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FieldKind_obj OBJ_;

	public:
		FieldKind_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.abc.FieldKind"); }
		::String __ToString() const { return HX_CSTRING("FieldKind.") + tag; }

		static ::format::abc::FieldKind FClass(::format::abc::Index c);
		static Dynamic FClass_dyn();
		static ::format::abc::FieldKind FFunction(::format::abc::Index f);
		static Dynamic FFunction_dyn();
		static ::format::abc::FieldKind FMethod(::format::abc::Index type,::format::abc::MethodKind k,Dynamic isFinal,Dynamic isOverride);
		static Dynamic FMethod_dyn();
		static ::format::abc::FieldKind FVar(::format::abc::Index type,::format::abc::Value value,Dynamic _const);
		static Dynamic FVar_dyn();
};

} // end namespace format
} // end namespace abc

#endif /* INCLUDED_format_abc_FieldKind */ 
