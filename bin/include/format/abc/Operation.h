#ifndef INCLUDED_format_abc_Operation
#define INCLUDED_format_abc_Operation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,abc,Operation)
namespace format{
namespace abc{


class Operation_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Operation_obj OBJ_;

	public:
		Operation_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.abc.Operation"); }
		::String __ToString() const { return HX_CSTRING("Operation.") + tag; }

		static ::format::abc::Operation OpAdd;
		static inline ::format::abc::Operation OpAdd_dyn() { return OpAdd; }
		static ::format::abc::Operation OpAnd;
		static inline ::format::abc::Operation OpAnd_dyn() { return OpAnd; }
		static ::format::abc::Operation OpAs;
		static inline ::format::abc::Operation OpAs_dyn() { return OpAs; }
		static ::format::abc::Operation OpBitNot;
		static inline ::format::abc::Operation OpBitNot_dyn() { return OpBitNot; }
		static ::format::abc::Operation OpDecr;
		static inline ::format::abc::Operation OpDecr_dyn() { return OpDecr; }
		static ::format::abc::Operation OpDiv;
		static inline ::format::abc::Operation OpDiv_dyn() { return OpDiv; }
		static ::format::abc::Operation OpEq;
		static inline ::format::abc::Operation OpEq_dyn() { return OpEq; }
		static ::format::abc::Operation OpGt;
		static inline ::format::abc::Operation OpGt_dyn() { return OpGt; }
		static ::format::abc::Operation OpGte;
		static inline ::format::abc::Operation OpGte_dyn() { return OpGte; }
		static ::format::abc::Operation OpIAdd;
		static inline ::format::abc::Operation OpIAdd_dyn() { return OpIAdd; }
		static ::format::abc::Operation OpIDecr;
		static inline ::format::abc::Operation OpIDecr_dyn() { return OpIDecr; }
		static ::format::abc::Operation OpIIncr;
		static inline ::format::abc::Operation OpIIncr_dyn() { return OpIIncr; }
		static ::format::abc::Operation OpIMul;
		static inline ::format::abc::Operation OpIMul_dyn() { return OpIMul; }
		static ::format::abc::Operation OpINeg;
		static inline ::format::abc::Operation OpINeg_dyn() { return OpINeg; }
		static ::format::abc::Operation OpISub;
		static inline ::format::abc::Operation OpISub_dyn() { return OpISub; }
		static ::format::abc::Operation OpIn;
		static inline ::format::abc::Operation OpIn_dyn() { return OpIn; }
		static ::format::abc::Operation OpIncr;
		static inline ::format::abc::Operation OpIncr_dyn() { return OpIncr; }
		static ::format::abc::Operation OpIs;
		static inline ::format::abc::Operation OpIs_dyn() { return OpIs; }
		static ::format::abc::Operation OpLt;
		static inline ::format::abc::Operation OpLt_dyn() { return OpLt; }
		static ::format::abc::Operation OpLte;
		static inline ::format::abc::Operation OpLte_dyn() { return OpLte; }
		static ::format::abc::Operation OpMemGet16;
		static inline ::format::abc::Operation OpMemGet16_dyn() { return OpMemGet16; }
		static ::format::abc::Operation OpMemGet32;
		static inline ::format::abc::Operation OpMemGet32_dyn() { return OpMemGet32; }
		static ::format::abc::Operation OpMemGet8;
		static inline ::format::abc::Operation OpMemGet8_dyn() { return OpMemGet8; }
		static ::format::abc::Operation OpMemGetDouble;
		static inline ::format::abc::Operation OpMemGetDouble_dyn() { return OpMemGetDouble; }
		static ::format::abc::Operation OpMemGetFloat;
		static inline ::format::abc::Operation OpMemGetFloat_dyn() { return OpMemGetFloat; }
		static ::format::abc::Operation OpMemSet16;
		static inline ::format::abc::Operation OpMemSet16_dyn() { return OpMemSet16; }
		static ::format::abc::Operation OpMemSet32;
		static inline ::format::abc::Operation OpMemSet32_dyn() { return OpMemSet32; }
		static ::format::abc::Operation OpMemSet8;
		static inline ::format::abc::Operation OpMemSet8_dyn() { return OpMemSet8; }
		static ::format::abc::Operation OpMemSetDouble;
		static inline ::format::abc::Operation OpMemSetDouble_dyn() { return OpMemSetDouble; }
		static ::format::abc::Operation OpMemSetFloat;
		static inline ::format::abc::Operation OpMemSetFloat_dyn() { return OpMemSetFloat; }
		static ::format::abc::Operation OpMod;
		static inline ::format::abc::Operation OpMod_dyn() { return OpMod; }
		static ::format::abc::Operation OpMul;
		static inline ::format::abc::Operation OpMul_dyn() { return OpMul; }
		static ::format::abc::Operation OpNeg;
		static inline ::format::abc::Operation OpNeg_dyn() { return OpNeg; }
		static ::format::abc::Operation OpNot;
		static inline ::format::abc::Operation OpNot_dyn() { return OpNot; }
		static ::format::abc::Operation OpOr;
		static inline ::format::abc::Operation OpOr_dyn() { return OpOr; }
		static ::format::abc::Operation OpPhysEq;
		static inline ::format::abc::Operation OpPhysEq_dyn() { return OpPhysEq; }
		static ::format::abc::Operation OpShl;
		static inline ::format::abc::Operation OpShl_dyn() { return OpShl; }
		static ::format::abc::Operation OpShr;
		static inline ::format::abc::Operation OpShr_dyn() { return OpShr; }
		static ::format::abc::Operation OpSign1;
		static inline ::format::abc::Operation OpSign1_dyn() { return OpSign1; }
		static ::format::abc::Operation OpSign16;
		static inline ::format::abc::Operation OpSign16_dyn() { return OpSign16; }
		static ::format::abc::Operation OpSign8;
		static inline ::format::abc::Operation OpSign8_dyn() { return OpSign8; }
		static ::format::abc::Operation OpSub;
		static inline ::format::abc::Operation OpSub_dyn() { return OpSub; }
		static ::format::abc::Operation OpUShr;
		static inline ::format::abc::Operation OpUShr_dyn() { return OpUShr; }
		static ::format::abc::Operation OpXor;
		static inline ::format::abc::Operation OpXor_dyn() { return OpXor; }
};

} // end namespace format
} // end namespace abc

#endif /* INCLUDED_format_abc_Operation */ 
