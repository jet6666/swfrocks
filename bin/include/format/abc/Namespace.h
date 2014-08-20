#ifndef INCLUDED_format_abc_Namespace
#define INCLUDED_format_abc_Namespace

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,abc,Index)
HX_DECLARE_CLASS2(format,abc,Namespace)
namespace format{
namespace abc{


class Namespace_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Namespace_obj OBJ_;

	public:
		Namespace_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.abc.Namespace"); }
		::String __ToString() const { return HX_CSTRING("Namespace.") + tag; }

		static ::format::abc::Namespace NExplicit(::format::abc::Index ns);
		static Dynamic NExplicit_dyn();
		static ::format::abc::Namespace NInternal(::format::abc::Index ns);
		static Dynamic NInternal_dyn();
		static ::format::abc::Namespace NNamespace(::format::abc::Index ns);
		static Dynamic NNamespace_dyn();
		static ::format::abc::Namespace NPrivate(::format::abc::Index ns);
		static Dynamic NPrivate_dyn();
		static ::format::abc::Namespace NProtected(::format::abc::Index ns);
		static Dynamic NProtected_dyn();
		static ::format::abc::Namespace NPublic(::format::abc::Index ns);
		static Dynamic NPublic_dyn();
		static ::format::abc::Namespace NStaticProtected(::format::abc::Index ns);
		static Dynamic NStaticProtected_dyn();
};

} // end namespace format
} // end namespace abc

#endif /* INCLUDED_format_abc_Namespace */ 
