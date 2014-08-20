#ifndef INCLUDED_format_abc_Value
#define INCLUDED_format_abc_Value

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,abc,Index)
HX_DECLARE_CLASS2(format,abc,Value)
namespace format{
namespace abc{


class Value_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Value_obj OBJ_;

	public:
		Value_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.abc.Value"); }
		::String __ToString() const { return HX_CSTRING("Value.") + tag; }

		static ::format::abc::Value VBool(bool b);
		static Dynamic VBool_dyn();
		static ::format::abc::Value VFloat(::format::abc::Index f);
		static Dynamic VFloat_dyn();
		static ::format::abc::Value VInt(::format::abc::Index i);
		static Dynamic VInt_dyn();
		static ::format::abc::Value VNamespace(int kind,::format::abc::Index ns);
		static Dynamic VNamespace_dyn();
		static ::format::abc::Value VNull;
		static inline ::format::abc::Value VNull_dyn() { return VNull; }
		static ::format::abc::Value VString(::format::abc::Index i);
		static Dynamic VString_dyn();
		static ::format::abc::Value VUInt(::format::abc::Index i);
		static Dynamic VUInt_dyn();
};

} // end namespace format
} // end namespace abc

#endif /* INCLUDED_format_abc_Value */ 
