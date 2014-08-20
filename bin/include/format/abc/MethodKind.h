#ifndef INCLUDED_format_abc_MethodKind
#define INCLUDED_format_abc_MethodKind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,abc,MethodKind)
namespace format{
namespace abc{


class MethodKind_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef MethodKind_obj OBJ_;

	public:
		MethodKind_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.abc.MethodKind"); }
		::String __ToString() const { return HX_CSTRING("MethodKind.") + tag; }

		static ::format::abc::MethodKind KGetter;
		static inline ::format::abc::MethodKind KGetter_dyn() { return KGetter; }
		static ::format::abc::MethodKind KNormal;
		static inline ::format::abc::MethodKind KNormal_dyn() { return KNormal; }
		static ::format::abc::MethodKind KSetter;
		static inline ::format::abc::MethodKind KSetter_dyn() { return KSetter; }
};

} // end namespace format
} // end namespace abc

#endif /* INCLUDED_format_abc_MethodKind */ 
