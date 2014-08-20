#ifndef INCLUDED_format_abc_OpCode
#define INCLUDED_format_abc_OpCode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,abc,Index)
HX_DECLARE_CLASS2(format,abc,JumpStyle)
HX_DECLARE_CLASS2(format,abc,OpCode)
HX_DECLARE_CLASS2(format,abc,Operation)
namespace format{
namespace abc{


class OpCode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef OpCode_obj OBJ_;

	public:
		OpCode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.abc.OpCode"); }
		::String __ToString() const { return HX_CSTRING("OpCode.") + tag; }

		static ::format::abc::OpCode OApplyType(int nargs);
		static Dynamic OApplyType_dyn();
		static ::format::abc::OpCode OArray(int nvalues);
		static Dynamic OArray_dyn();
		static ::format::abc::OpCode OAsAny;
		static inline ::format::abc::OpCode OAsAny_dyn() { return OAsAny; }
		static ::format::abc::OpCode OAsObject;
		static inline ::format::abc::OpCode OAsObject_dyn() { return OAsObject; }
		static ::format::abc::OpCode OAsString;
		static inline ::format::abc::OpCode OAsString_dyn() { return OAsString; }
		static ::format::abc::OpCode OAsType(::format::abc::Index t);
		static Dynamic OAsType_dyn();
		static ::format::abc::OpCode OBreakPoint;
		static inline ::format::abc::OpCode OBreakPoint_dyn() { return OBreakPoint; }
		static ::format::abc::OpCode OBreakPointLine(int n);
		static Dynamic OBreakPointLine_dyn();
		static ::format::abc::OpCode OCallMethod(int slot,int nargs);
		static Dynamic OCallMethod_dyn();
		static ::format::abc::OpCode OCallPropLex(::format::abc::Index name,int nargs);
		static Dynamic OCallPropLex_dyn();
		static ::format::abc::OpCode OCallPropVoid(::format::abc::Index name,int nargs);
		static Dynamic OCallPropVoid_dyn();
		static ::format::abc::OpCode OCallProperty(::format::abc::Index name,int nargs);
		static Dynamic OCallProperty_dyn();
		static ::format::abc::OpCode OCallStack(int nargs);
		static Dynamic OCallStack_dyn();
		static ::format::abc::OpCode OCallStatic(::format::abc::Index meth,int nargs);
		static Dynamic OCallStatic_dyn();
		static ::format::abc::OpCode OCallSuper(::format::abc::Index name,int nargs);
		static Dynamic OCallSuper_dyn();
		static ::format::abc::OpCode OCallSuperVoid(::format::abc::Index name,int nargs);
		static Dynamic OCallSuperVoid_dyn();
		static ::format::abc::OpCode OCast(::format::abc::Index t);
		static Dynamic OCast_dyn();
		static ::format::abc::OpCode OCatch(int c);
		static Dynamic OCatch_dyn();
		static ::format::abc::OpCode OCheckIsXml;
		static inline ::format::abc::OpCode OCheckIsXml_dyn() { return OCheckIsXml; }
		static ::format::abc::OpCode OClassDef(::format::abc::Index c);
		static Dynamic OClassDef_dyn();
		static ::format::abc::OpCode OConstruct(int nargs);
		static Dynamic OConstruct_dyn();
		static ::format::abc::OpCode OConstructProperty(::format::abc::Index name,int nargs);
		static Dynamic OConstructProperty_dyn();
		static ::format::abc::OpCode OConstructSuper(int nargs);
		static Dynamic OConstructSuper_dyn();
		static ::format::abc::OpCode ODebugFile(::format::abc::Index file);
		static Dynamic ODebugFile_dyn();
		static ::format::abc::OpCode ODebugLine(int line);
		static Dynamic ODebugLine_dyn();
		static ::format::abc::OpCode ODebugReg(::format::abc::Index name,int r,int line);
		static Dynamic ODebugReg_dyn();
		static ::format::abc::OpCode ODecrIReg(int r);
		static Dynamic ODecrIReg_dyn();
		static ::format::abc::OpCode ODecrReg(int r);
		static Dynamic ODecrReg_dyn();
		static ::format::abc::OpCode ODeleteProp(::format::abc::Index p);
		static Dynamic ODeleteProp_dyn();
		static ::format::abc::OpCode ODup;
		static inline ::format::abc::OpCode ODup_dyn() { return ODup; }
		static ::format::abc::OpCode ODxNs(::format::abc::Index v);
		static Dynamic ODxNs_dyn();
		static ::format::abc::OpCode ODxNsLate;
		static inline ::format::abc::OpCode ODxNsLate_dyn() { return ODxNsLate; }
		static ::format::abc::OpCode OFalse;
		static inline ::format::abc::OpCode OFalse_dyn() { return OFalse; }
		static ::format::abc::OpCode OFindDefinition(::format::abc::Index d);
		static Dynamic OFindDefinition_dyn();
		static ::format::abc::OpCode OFindProp(::format::abc::Index p);
		static Dynamic OFindProp_dyn();
		static ::format::abc::OpCode OFindPropStrict(::format::abc::Index p);
		static Dynamic OFindPropStrict_dyn();
		static ::format::abc::OpCode OFloat(::format::abc::Index v);
		static Dynamic OFloat_dyn();
		static ::format::abc::OpCode OForEach;
		static inline ::format::abc::OpCode OForEach_dyn() { return OForEach; }
		static ::format::abc::OpCode OForIn;
		static inline ::format::abc::OpCode OForIn_dyn() { return OForIn; }
		static ::format::abc::OpCode OFunction(::format::abc::Index f);
		static Dynamic OFunction_dyn();
		static ::format::abc::OpCode OGetDescendants(::format::abc::Index c);
		static Dynamic OGetDescendants_dyn();
		static ::format::abc::OpCode OGetGlobalScope;
		static inline ::format::abc::OpCode OGetGlobalScope_dyn() { return OGetGlobalScope; }
		static ::format::abc::OpCode OGetLex(::format::abc::Index p);
		static Dynamic OGetLex_dyn();
		static ::format::abc::OpCode OGetProp(::format::abc::Index p);
		static Dynamic OGetProp_dyn();
		static ::format::abc::OpCode OGetScope(int n);
		static Dynamic OGetScope_dyn();
		static ::format::abc::OpCode OGetSlot(int s);
		static Dynamic OGetSlot_dyn();
		static ::format::abc::OpCode OGetSuper(::format::abc::Index v);
		static Dynamic OGetSuper_dyn();
		static ::format::abc::OpCode OHasNext;
		static inline ::format::abc::OpCode OHasNext_dyn() { return OHasNext; }
		static ::format::abc::OpCode OIncrIReg(int r);
		static Dynamic OIncrIReg_dyn();
		static ::format::abc::OpCode OIncrReg(int r);
		static Dynamic OIncrReg_dyn();
		static ::format::abc::OpCode OInitProp(::format::abc::Index p);
		static Dynamic OInitProp_dyn();
		static ::format::abc::OpCode OInstanceOf;
		static inline ::format::abc::OpCode OInstanceOf_dyn() { return OInstanceOf; }
		static ::format::abc::OpCode OInt(int v);
		static Dynamic OInt_dyn();
		static ::format::abc::OpCode OIntRef(::format::abc::Index v);
		static Dynamic OIntRef_dyn();
		static ::format::abc::OpCode OIsType(::format::abc::Index t);
		static Dynamic OIsType_dyn();
		static ::format::abc::OpCode OJump(::format::abc::JumpStyle j,int delta);
		static Dynamic OJump_dyn();
		static ::format::abc::OpCode OLabel;
		static inline ::format::abc::OpCode OLabel_dyn() { return OLabel; }
		static ::format::abc::OpCode ONaN;
		static inline ::format::abc::OpCode ONaN_dyn() { return ONaN; }
		static ::format::abc::OpCode ONamespace(::format::abc::Index v);
		static Dynamic ONamespace_dyn();
		static ::format::abc::OpCode ONewBlock;
		static inline ::format::abc::OpCode ONewBlock_dyn() { return ONewBlock; }
		static ::format::abc::OpCode ONext(int r1,int r2);
		static Dynamic ONext_dyn();
		static ::format::abc::OpCode ONop;
		static inline ::format::abc::OpCode ONop_dyn() { return ONop; }
		static ::format::abc::OpCode ONull;
		static inline ::format::abc::OpCode ONull_dyn() { return ONull; }
		static ::format::abc::OpCode OObject(int nfields);
		static Dynamic OObject_dyn();
		static ::format::abc::OpCode OOp(::format::abc::Operation op);
		static Dynamic OOp_dyn();
		static ::format::abc::OpCode OPop;
		static inline ::format::abc::OpCode OPop_dyn() { return OPop; }
		static ::format::abc::OpCode OPopScope;
		static inline ::format::abc::OpCode OPopScope_dyn() { return OPopScope; }
		static ::format::abc::OpCode OPushWith;
		static inline ::format::abc::OpCode OPushWith_dyn() { return OPushWith; }
		static ::format::abc::OpCode OReg(int r);
		static Dynamic OReg_dyn();
		static ::format::abc::OpCode ORegKill(int r);
		static Dynamic ORegKill_dyn();
		static ::format::abc::OpCode ORet;
		static inline ::format::abc::OpCode ORet_dyn() { return ORet; }
		static ::format::abc::OpCode ORetVoid;
		static inline ::format::abc::OpCode ORetVoid_dyn() { return ORetVoid; }
		static ::format::abc::OpCode OScope;
		static inline ::format::abc::OpCode OScope_dyn() { return OScope; }
		static ::format::abc::OpCode OSetProp(::format::abc::Index p);
		static Dynamic OSetProp_dyn();
		static ::format::abc::OpCode OSetReg(int r);
		static Dynamic OSetReg_dyn();
		static ::format::abc::OpCode OSetSlot(int s);
		static Dynamic OSetSlot_dyn();
		static ::format::abc::OpCode OSetSuper(::format::abc::Index v);
		static Dynamic OSetSuper_dyn();
		static ::format::abc::OpCode OSetThis;
		static inline ::format::abc::OpCode OSetThis_dyn() { return OSetThis; }
		static ::format::abc::OpCode OSmallInt(int v);
		static Dynamic OSmallInt_dyn();
		static ::format::abc::OpCode OString(::format::abc::Index v);
		static Dynamic OString_dyn();
		static ::format::abc::OpCode OSwap;
		static inline ::format::abc::OpCode OSwap_dyn() { return OSwap; }
		static ::format::abc::OpCode OSwitch(int def,Array< int > deltas);
		static Dynamic OSwitch_dyn();
		static ::format::abc::OpCode OThis;
		static inline ::format::abc::OpCode OThis_dyn() { return OThis; }
		static ::format::abc::OpCode OThrow;
		static inline ::format::abc::OpCode OThrow_dyn() { return OThrow; }
		static ::format::abc::OpCode OTimestamp;
		static inline ::format::abc::OpCode OTimestamp_dyn() { return OTimestamp; }
		static ::format::abc::OpCode OToBool;
		static inline ::format::abc::OpCode OToBool_dyn() { return OToBool; }
		static ::format::abc::OpCode OToInt;
		static inline ::format::abc::OpCode OToInt_dyn() { return OToInt; }
		static ::format::abc::OpCode OToNumber;
		static inline ::format::abc::OpCode OToNumber_dyn() { return OToNumber; }
		static ::format::abc::OpCode OToObject;
		static inline ::format::abc::OpCode OToObject_dyn() { return OToObject; }
		static ::format::abc::OpCode OToString;
		static inline ::format::abc::OpCode OToString_dyn() { return OToString; }
		static ::format::abc::OpCode OToUInt;
		static inline ::format::abc::OpCode OToUInt_dyn() { return OToUInt; }
		static ::format::abc::OpCode OToXml;
		static inline ::format::abc::OpCode OToXml_dyn() { return OToXml; }
		static ::format::abc::OpCode OToXmlAttr;
		static inline ::format::abc::OpCode OToXmlAttr_dyn() { return OToXmlAttr; }
		static ::format::abc::OpCode OTrue;
		static inline ::format::abc::OpCode OTrue_dyn() { return OTrue; }
		static ::format::abc::OpCode OTypeof;
		static inline ::format::abc::OpCode OTypeof_dyn() { return OTypeof; }
		static ::format::abc::OpCode OUIntRef(::format::abc::Index v);
		static Dynamic OUIntRef_dyn();
		static ::format::abc::OpCode OUndefined;
		static inline ::format::abc::OpCode OUndefined_dyn() { return OUndefined; }
		static ::format::abc::OpCode OUnknown(int byte);
		static Dynamic OUnknown_dyn();
};

} // end namespace format
} // end namespace abc

#endif /* INCLUDED_format_abc_OpCode */ 
