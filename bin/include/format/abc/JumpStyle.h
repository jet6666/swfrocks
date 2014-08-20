#ifndef INCLUDED_format_abc_JumpStyle
#define INCLUDED_format_abc_JumpStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,abc,JumpStyle)
namespace format{
namespace abc{


class JumpStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef JumpStyle_obj OBJ_;

	public:
		JumpStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.abc.JumpStyle"); }
		::String __ToString() const { return HX_CSTRING("JumpStyle.") + tag; }

		static ::format::abc::JumpStyle JAlways;
		static inline ::format::abc::JumpStyle JAlways_dyn() { return JAlways; }
		static ::format::abc::JumpStyle JEq;
		static inline ::format::abc::JumpStyle JEq_dyn() { return JEq; }
		static ::format::abc::JumpStyle JFalse;
		static inline ::format::abc::JumpStyle JFalse_dyn() { return JFalse; }
		static ::format::abc::JumpStyle JGt;
		static inline ::format::abc::JumpStyle JGt_dyn() { return JGt; }
		static ::format::abc::JumpStyle JGte;
		static inline ::format::abc::JumpStyle JGte_dyn() { return JGte; }
		static ::format::abc::JumpStyle JLt;
		static inline ::format::abc::JumpStyle JLt_dyn() { return JLt; }
		static ::format::abc::JumpStyle JLte;
		static inline ::format::abc::JumpStyle JLte_dyn() { return JLte; }
		static ::format::abc::JumpStyle JNeq;
		static inline ::format::abc::JumpStyle JNeq_dyn() { return JNeq; }
		static ::format::abc::JumpStyle JNotGt;
		static inline ::format::abc::JumpStyle JNotGt_dyn() { return JNotGt; }
		static ::format::abc::JumpStyle JNotGte;
		static inline ::format::abc::JumpStyle JNotGte_dyn() { return JNotGte; }
		static ::format::abc::JumpStyle JNotLt;
		static inline ::format::abc::JumpStyle JNotLt_dyn() { return JNotLt; }
		static ::format::abc::JumpStyle JNotLte;
		static inline ::format::abc::JumpStyle JNotLte_dyn() { return JNotLte; }
		static ::format::abc::JumpStyle JPhysEq;
		static inline ::format::abc::JumpStyle JPhysEq_dyn() { return JPhysEq; }
		static ::format::abc::JumpStyle JPhysNeq;
		static inline ::format::abc::JumpStyle JPhysNeq_dyn() { return JPhysNeq; }
		static ::format::abc::JumpStyle JTrue;
		static inline ::format::abc::JumpStyle JTrue_dyn() { return JTrue; }
};

} // end namespace format
} // end namespace abc

#endif /* INCLUDED_format_abc_JumpStyle */ 
