#include <hxcpp.h>

#ifndef INCLUDED_format_abc_Index
#include <format/abc/Index.h>
#endif
#ifndef INCLUDED_format_abc_JumpStyle
#include <format/abc/JumpStyle.h>
#endif
#ifndef INCLUDED_format_abc_OpCode
#include <format/abc/OpCode.h>
#endif
#ifndef INCLUDED_format_abc_Operation
#include <format/abc/Operation.h>
#endif
namespace format{
namespace abc{

::format::abc::OpCode  OpCode_obj::OApplyType(int nargs)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OApplyType"),47,hx::DynamicArray(0,1).Add(nargs)); }

::format::abc::OpCode  OpCode_obj::OArray(int nvalues)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OArray"),49,hx::DynamicArray(0,1).Add(nvalues)); }

::format::abc::OpCode OpCode_obj::OAsAny;

::format::abc::OpCode OpCode_obj::OAsObject;

::format::abc::OpCode OpCode_obj::OAsString;

::format::abc::OpCode  OpCode_obj::OAsType(::format::abc::Index t)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OAsType"),80,hx::DynamicArray(0,1).Add(t)); }

::format::abc::OpCode OpCode_obj::OBreakPoint;

::format::abc::OpCode  OpCode_obj::OBreakPointLine(int n)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OBreakPointLine"),94,hx::DynamicArray(0,1).Add(n)); }

::format::abc::OpCode  OpCode_obj::OCallMethod(int slot,int nargs)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OCallMethod"),36,hx::DynamicArray(0,2).Add(slot).Add(nargs)); }

::format::abc::OpCode  OpCode_obj::OCallPropLex(::format::abc::Index name,int nargs)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OCallPropLex"),44,hx::DynamicArray(0,2).Add(name).Add(nargs)); }

::format::abc::OpCode  OpCode_obj::OCallPropVoid(::format::abc::Index name,int nargs)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OCallPropVoid"),46,hx::DynamicArray(0,2).Add(name).Add(nargs)); }

::format::abc::OpCode  OpCode_obj::OCallProperty(::format::abc::Index name,int nargs)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OCallProperty"),39,hx::DynamicArray(0,2).Add(name).Add(nargs)); }

::format::abc::OpCode  OpCode_obj::OCallStack(int nargs)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OCallStack"),34,hx::DynamicArray(0,1).Add(nargs)); }

::format::abc::OpCode  OpCode_obj::OCallStatic(::format::abc::Index meth,int nargs)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OCallStatic"),37,hx::DynamicArray(0,2).Add(meth).Add(nargs)); }

::format::abc::OpCode  OpCode_obj::OCallSuper(::format::abc::Index name,int nargs)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OCallSuper"),38,hx::DynamicArray(0,2).Add(name).Add(nargs)); }

::format::abc::OpCode  OpCode_obj::OCallSuperVoid(::format::abc::Index name,int nargs)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OCallSuperVoid"),45,hx::DynamicArray(0,2).Add(name).Add(nargs)); }

::format::abc::OpCode  OpCode_obj::OCast(::format::abc::Index t)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OCast"),77,hx::DynamicArray(0,1).Add(t)); }

::format::abc::OpCode  OpCode_obj::OCatch(int c)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OCatch"),53,hx::DynamicArray(0,1).Add(c)); }

::format::abc::OpCode OpCode_obj::OCheckIsXml;

::format::abc::OpCode  OpCode_obj::OClassDef(::format::abc::Index c)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OClassDef"),51,hx::DynamicArray(0,1).Add(c)); }

::format::abc::OpCode  OpCode_obj::OConstruct(int nargs)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OConstruct"),35,hx::DynamicArray(0,1).Add(nargs)); }

::format::abc::OpCode  OpCode_obj::OConstructProperty(::format::abc::Index name,int nargs)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OConstructProperty"),43,hx::DynamicArray(0,2).Add(name).Add(nargs)); }

::format::abc::OpCode  OpCode_obj::OConstructSuper(int nargs)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OConstructSuper"),42,hx::DynamicArray(0,1).Add(nargs)); }

::format::abc::OpCode  OpCode_obj::ODebugFile(::format::abc::Index file)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("ODebugFile"),93,hx::DynamicArray(0,1).Add(file)); }

::format::abc::OpCode  OpCode_obj::ODebugLine(int line)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("ODebugLine"),92,hx::DynamicArray(0,1).Add(line)); }

::format::abc::OpCode  OpCode_obj::ODebugReg(::format::abc::Index name,int r,int line)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("ODebugReg"),91,hx::DynamicArray(0,3).Add(name).Add(r).Add(line)); }

::format::abc::OpCode  OpCode_obj::ODecrIReg(int r)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("ODecrIReg"),88,hx::DynamicArray(0,1).Add(r)); }

::format::abc::OpCode  OpCode_obj::ODecrReg(int r)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("ODecrReg"),83,hx::DynamicArray(0,1).Add(r)); }

::format::abc::OpCode  OpCode_obj::ODeleteProp(::format::abc::Index p)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("ODeleteProp"),65,hx::DynamicArray(0,1).Add(p)); }

::format::abc::OpCode OpCode_obj::ODup;

::format::abc::OpCode  OpCode_obj::ODxNs(::format::abc::Index v)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("ODxNs"),5,hx::DynamicArray(0,1).Add(v)); }

::format::abc::OpCode OpCode_obj::ODxNsLate;

::format::abc::OpCode OpCode_obj::OFalse;

::format::abc::OpCode  OpCode_obj::OFindDefinition(::format::abc::Index d)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OFindDefinition"),56,hx::DynamicArray(0,1).Add(d)); }

::format::abc::OpCode  OpCode_obj::OFindProp(::format::abc::Index p)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OFindProp"),55,hx::DynamicArray(0,1).Add(p)); }

::format::abc::OpCode  OpCode_obj::OFindPropStrict(::format::abc::Index p)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OFindPropStrict"),54,hx::DynamicArray(0,1).Add(p)); }

::format::abc::OpCode  OpCode_obj::OFloat(::format::abc::Index v)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OFloat"),29,hx::DynamicArray(0,1).Add(v)); }

::format::abc::OpCode OpCode_obj::OForEach;

::format::abc::OpCode OpCode_obj::OForIn;

::format::abc::OpCode  OpCode_obj::OFunction(::format::abc::Index f)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OFunction"),33,hx::DynamicArray(0,1).Add(f)); }

::format::abc::OpCode  OpCode_obj::OGetDescendants(::format::abc::Index c)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OGetDescendants"),52,hx::DynamicArray(0,1).Add(c)); }

::format::abc::OpCode OpCode_obj::OGetGlobalScope;

::format::abc::OpCode  OpCode_obj::OGetLex(::format::abc::Index p)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OGetLex"),57,hx::DynamicArray(0,1).Add(p)); }

::format::abc::OpCode  OpCode_obj::OGetProp(::format::abc::Index p)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OGetProp"),63,hx::DynamicArray(0,1).Add(p)); }

::format::abc::OpCode  OpCode_obj::OGetScope(int n)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OGetScope"),62,hx::DynamicArray(0,1).Add(n)); }

::format::abc::OpCode  OpCode_obj::OGetSlot(int s)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OGetSlot"),66,hx::DynamicArray(0,1).Add(s)); }

::format::abc::OpCode  OpCode_obj::OGetSuper(::format::abc::Index v)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OGetSuper"),3,hx::DynamicArray(0,1).Add(v)); }

::format::abc::OpCode OpCode_obj::OHasNext;

::format::abc::OpCode  OpCode_obj::OIncrIReg(int r)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OIncrIReg"),87,hx::DynamicArray(0,1).Add(r)); }

::format::abc::OpCode  OpCode_obj::OIncrReg(int r)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OIncrReg"),82,hx::DynamicArray(0,1).Add(r)); }

::format::abc::OpCode  OpCode_obj::OInitProp(::format::abc::Index p)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OInitProp"),64,hx::DynamicArray(0,1).Add(p)); }

::format::abc::OpCode OpCode_obj::OInstanceOf;

::format::abc::OpCode  OpCode_obj::OInt(int v)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OInt"),19,hx::DynamicArray(0,1).Add(v)); }

::format::abc::OpCode  OpCode_obj::OIntRef(::format::abc::Index v)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OIntRef"),27,hx::DynamicArray(0,1).Add(v)); }

::format::abc::OpCode  OpCode_obj::OIsType(::format::abc::Index t)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OIsType"),86,hx::DynamicArray(0,1).Add(t)); }

::format::abc::OpCode  OpCode_obj::OJump(::format::abc::JumpStyle j,int delta)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OJump"),9,hx::DynamicArray(0,2).Add(j).Add(delta)); }

::format::abc::OpCode OpCode_obj::OLabel;

::format::abc::OpCode OpCode_obj::ONaN;

::format::abc::OpCode  OpCode_obj::ONamespace(::format::abc::Index v)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("ONamespace"),31,hx::DynamicArray(0,1).Add(v)); }

::format::abc::OpCode OpCode_obj::ONewBlock;

::format::abc::OpCode  OpCode_obj::ONext(int r1,int r2)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("ONext"),32,hx::DynamicArray(0,2).Add(r1).Add(r2)); }

::format::abc::OpCode OpCode_obj::ONop;

::format::abc::OpCode OpCode_obj::ONull;

::format::abc::OpCode  OpCode_obj::OObject(int nfields)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OObject"),48,hx::DynamicArray(0,1).Add(nfields)); }

::format::abc::OpCode  OpCode_obj::OOp(::format::abc::Operation op)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OOp"),96,hx::DynamicArray(0,1).Add(op)); }

::format::abc::OpCode OpCode_obj::OPop;

::format::abc::OpCode OpCode_obj::OPopScope;

::format::abc::OpCode OpCode_obj::OPushWith;

::format::abc::OpCode  OpCode_obj::OReg(int r)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OReg"),59,hx::DynamicArray(0,1).Add(r)); }

::format::abc::OpCode  OpCode_obj::ORegKill(int r)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("ORegKill"),7,hx::DynamicArray(0,1).Add(r)); }

::format::abc::OpCode OpCode_obj::ORet;

::format::abc::OpCode OpCode_obj::ORetVoid;

::format::abc::OpCode OpCode_obj::OScope;

::format::abc::OpCode  OpCode_obj::OSetProp(::format::abc::Index p)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OSetProp"),58,hx::DynamicArray(0,1).Add(p)); }

::format::abc::OpCode  OpCode_obj::OSetReg(int r)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OSetReg"),60,hx::DynamicArray(0,1).Add(r)); }

::format::abc::OpCode  OpCode_obj::OSetSlot(int s)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OSetSlot"),67,hx::DynamicArray(0,1).Add(s)); }

::format::abc::OpCode  OpCode_obj::OSetSuper(::format::abc::Index v)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OSetSuper"),4,hx::DynamicArray(0,1).Add(v)); }

::format::abc::OpCode OpCode_obj::OSetThis;

::format::abc::OpCode  OpCode_obj::OSmallInt(int v)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OSmallInt"),18,hx::DynamicArray(0,1).Add(v)); }

::format::abc::OpCode  OpCode_obj::OString(::format::abc::Index v)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OString"),26,hx::DynamicArray(0,1).Add(v)); }

::format::abc::OpCode OpCode_obj::OSwap;

::format::abc::OpCode  OpCode_obj::OSwitch(int def,Array< int > deltas)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OSwitch"),10,hx::DynamicArray(0,2).Add(def).Add(deltas)); }

::format::abc::OpCode OpCode_obj::OThis;

::format::abc::OpCode OpCode_obj::OThrow;

::format::abc::OpCode OpCode_obj::OTimestamp;

::format::abc::OpCode OpCode_obj::OToBool;

::format::abc::OpCode OpCode_obj::OToInt;

::format::abc::OpCode OpCode_obj::OToNumber;

::format::abc::OpCode OpCode_obj::OToObject;

::format::abc::OpCode OpCode_obj::OToString;

::format::abc::OpCode OpCode_obj::OToUInt;

::format::abc::OpCode OpCode_obj::OToXml;

::format::abc::OpCode OpCode_obj::OToXmlAttr;

::format::abc::OpCode OpCode_obj::OTrue;

::format::abc::OpCode OpCode_obj::OTypeof;

::format::abc::OpCode  OpCode_obj::OUIntRef(::format::abc::Index v)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OUIntRef"),28,hx::DynamicArray(0,1).Add(v)); }

::format::abc::OpCode OpCode_obj::OUndefined;

::format::abc::OpCode  OpCode_obj::OUnknown(int byte)
	{ return hx::CreateEnum< OpCode_obj >(HX_CSTRING("OUnknown"),97,hx::DynamicArray(0,1).Add(byte)); }

HX_DEFINE_CREATE_ENUM(OpCode_obj)

int OpCode_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("OApplyType")) return 47;
	if (inName==HX_CSTRING("OArray")) return 49;
	if (inName==HX_CSTRING("OAsAny")) return 78;
	if (inName==HX_CSTRING("OAsObject")) return 81;
	if (inName==HX_CSTRING("OAsString")) return 79;
	if (inName==HX_CSTRING("OAsType")) return 80;
	if (inName==HX_CSTRING("OBreakPoint")) return 0;
	if (inName==HX_CSTRING("OBreakPointLine")) return 94;
	if (inName==HX_CSTRING("OCallMethod")) return 36;
	if (inName==HX_CSTRING("OCallPropLex")) return 44;
	if (inName==HX_CSTRING("OCallPropVoid")) return 46;
	if (inName==HX_CSTRING("OCallProperty")) return 39;
	if (inName==HX_CSTRING("OCallStack")) return 34;
	if (inName==HX_CSTRING("OCallStatic")) return 37;
	if (inName==HX_CSTRING("OCallSuper")) return 38;
	if (inName==HX_CSTRING("OCallSuperVoid")) return 45;
	if (inName==HX_CSTRING("OCast")) return 77;
	if (inName==HX_CSTRING("OCatch")) return 53;
	if (inName==HX_CSTRING("OCheckIsXml")) return 76;
	if (inName==HX_CSTRING("OClassDef")) return 51;
	if (inName==HX_CSTRING("OConstruct")) return 35;
	if (inName==HX_CSTRING("OConstructProperty")) return 43;
	if (inName==HX_CSTRING("OConstructSuper")) return 42;
	if (inName==HX_CSTRING("ODebugFile")) return 93;
	if (inName==HX_CSTRING("ODebugLine")) return 92;
	if (inName==HX_CSTRING("ODebugReg")) return 91;
	if (inName==HX_CSTRING("ODecrIReg")) return 88;
	if (inName==HX_CSTRING("ODecrReg")) return 83;
	if (inName==HX_CSTRING("ODeleteProp")) return 65;
	if (inName==HX_CSTRING("ODup")) return 24;
	if (inName==HX_CSTRING("ODxNs")) return 5;
	if (inName==HX_CSTRING("ODxNsLate")) return 6;
	if (inName==HX_CSTRING("OFalse")) return 21;
	if (inName==HX_CSTRING("OFindDefinition")) return 56;
	if (inName==HX_CSTRING("OFindProp")) return 55;
	if (inName==HX_CSTRING("OFindPropStrict")) return 54;
	if (inName==HX_CSTRING("OFloat")) return 29;
	if (inName==HX_CSTRING("OForEach")) return 17;
	if (inName==HX_CSTRING("OForIn")) return 13;
	if (inName==HX_CSTRING("OFunction")) return 33;
	if (inName==HX_CSTRING("OGetDescendants")) return 52;
	if (inName==HX_CSTRING("OGetGlobalScope")) return 61;
	if (inName==HX_CSTRING("OGetLex")) return 57;
	if (inName==HX_CSTRING("OGetProp")) return 63;
	if (inName==HX_CSTRING("OGetScope")) return 62;
	if (inName==HX_CSTRING("OGetSlot")) return 66;
	if (inName==HX_CSTRING("OGetSuper")) return 3;
	if (inName==HX_CSTRING("OHasNext")) return 14;
	if (inName==HX_CSTRING("OIncrIReg")) return 87;
	if (inName==HX_CSTRING("OIncrReg")) return 82;
	if (inName==HX_CSTRING("OInitProp")) return 64;
	if (inName==HX_CSTRING("OInstanceOf")) return 85;
	if (inName==HX_CSTRING("OInt")) return 19;
	if (inName==HX_CSTRING("OIntRef")) return 27;
	if (inName==HX_CSTRING("OIsType")) return 86;
	if (inName==HX_CSTRING("OJump")) return 9;
	if (inName==HX_CSTRING("OLabel")) return 8;
	if (inName==HX_CSTRING("ONaN")) return 22;
	if (inName==HX_CSTRING("ONamespace")) return 31;
	if (inName==HX_CSTRING("ONewBlock")) return 50;
	if (inName==HX_CSTRING("ONext")) return 32;
	if (inName==HX_CSTRING("ONop")) return 1;
	if (inName==HX_CSTRING("ONull")) return 15;
	if (inName==HX_CSTRING("OObject")) return 48;
	if (inName==HX_CSTRING("OOp")) return 96;
	if (inName==HX_CSTRING("OPop")) return 23;
	if (inName==HX_CSTRING("OPopScope")) return 12;
	if (inName==HX_CSTRING("OPushWith")) return 11;
	if (inName==HX_CSTRING("OReg")) return 59;
	if (inName==HX_CSTRING("ORegKill")) return 7;
	if (inName==HX_CSTRING("ORet")) return 41;
	if (inName==HX_CSTRING("ORetVoid")) return 40;
	if (inName==HX_CSTRING("OScope")) return 30;
	if (inName==HX_CSTRING("OSetProp")) return 58;
	if (inName==HX_CSTRING("OSetReg")) return 60;
	if (inName==HX_CSTRING("OSetSlot")) return 67;
	if (inName==HX_CSTRING("OSetSuper")) return 4;
	if (inName==HX_CSTRING("OSetThis")) return 90;
	if (inName==HX_CSTRING("OSmallInt")) return 18;
	if (inName==HX_CSTRING("OString")) return 26;
	if (inName==HX_CSTRING("OSwap")) return 25;
	if (inName==HX_CSTRING("OSwitch")) return 10;
	if (inName==HX_CSTRING("OThis")) return 89;
	if (inName==HX_CSTRING("OThrow")) return 2;
	if (inName==HX_CSTRING("OTimestamp")) return 95;
	if (inName==HX_CSTRING("OToBool")) return 74;
	if (inName==HX_CSTRING("OToInt")) return 71;
	if (inName==HX_CSTRING("OToNumber")) return 73;
	if (inName==HX_CSTRING("OToObject")) return 75;
	if (inName==HX_CSTRING("OToString")) return 68;
	if (inName==HX_CSTRING("OToUInt")) return 72;
	if (inName==HX_CSTRING("OToXml")) return 69;
	if (inName==HX_CSTRING("OToXmlAttr")) return 70;
	if (inName==HX_CSTRING("OTrue")) return 20;
	if (inName==HX_CSTRING("OTypeof")) return 84;
	if (inName==HX_CSTRING("OUIntRef")) return 28;
	if (inName==HX_CSTRING("OUndefined")) return 16;
	if (inName==HX_CSTRING("OUnknown")) return 97;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OApplyType,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OAsType,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OBreakPointLine,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpCode_obj,OCallMethod,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpCode_obj,OCallPropLex,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpCode_obj,OCallPropVoid,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpCode_obj,OCallProperty,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OCallStack,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpCode_obj,OCallStatic,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpCode_obj,OCallSuper,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpCode_obj,OCallSuperVoid,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OCast,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OCatch,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OClassDef,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OConstruct,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpCode_obj,OConstructProperty,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OConstructSuper,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,ODebugFile,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,ODebugLine,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(OpCode_obj,ODebugReg,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,ODecrIReg,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,ODecrReg,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,ODeleteProp,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,ODxNs,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OFindDefinition,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OFindProp,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OFindPropStrict,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OFloat,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OGetDescendants,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OGetLex,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OGetProp,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OGetScope,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OGetSlot,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OGetSuper,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OIncrIReg,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OIncrReg,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OInitProp,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OInt,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OIntRef,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OIsType,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpCode_obj,OJump,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,ONamespace,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpCode_obj,ONext,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OObject,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OOp,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OReg,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,ORegKill,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OSetProp,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OSetReg,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OSetSlot,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OSetSuper,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OSmallInt,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OString,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(OpCode_obj,OSwitch,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OUIntRef,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpCode_obj,OUnknown,return)

int OpCode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("OApplyType")) return 1;
	if (inName==HX_CSTRING("OArray")) return 1;
	if (inName==HX_CSTRING("OAsAny")) return 0;
	if (inName==HX_CSTRING("OAsObject")) return 0;
	if (inName==HX_CSTRING("OAsString")) return 0;
	if (inName==HX_CSTRING("OAsType")) return 1;
	if (inName==HX_CSTRING("OBreakPoint")) return 0;
	if (inName==HX_CSTRING("OBreakPointLine")) return 1;
	if (inName==HX_CSTRING("OCallMethod")) return 2;
	if (inName==HX_CSTRING("OCallPropLex")) return 2;
	if (inName==HX_CSTRING("OCallPropVoid")) return 2;
	if (inName==HX_CSTRING("OCallProperty")) return 2;
	if (inName==HX_CSTRING("OCallStack")) return 1;
	if (inName==HX_CSTRING("OCallStatic")) return 2;
	if (inName==HX_CSTRING("OCallSuper")) return 2;
	if (inName==HX_CSTRING("OCallSuperVoid")) return 2;
	if (inName==HX_CSTRING("OCast")) return 1;
	if (inName==HX_CSTRING("OCatch")) return 1;
	if (inName==HX_CSTRING("OCheckIsXml")) return 0;
	if (inName==HX_CSTRING("OClassDef")) return 1;
	if (inName==HX_CSTRING("OConstruct")) return 1;
	if (inName==HX_CSTRING("OConstructProperty")) return 2;
	if (inName==HX_CSTRING("OConstructSuper")) return 1;
	if (inName==HX_CSTRING("ODebugFile")) return 1;
	if (inName==HX_CSTRING("ODebugLine")) return 1;
	if (inName==HX_CSTRING("ODebugReg")) return 3;
	if (inName==HX_CSTRING("ODecrIReg")) return 1;
	if (inName==HX_CSTRING("ODecrReg")) return 1;
	if (inName==HX_CSTRING("ODeleteProp")) return 1;
	if (inName==HX_CSTRING("ODup")) return 0;
	if (inName==HX_CSTRING("ODxNs")) return 1;
	if (inName==HX_CSTRING("ODxNsLate")) return 0;
	if (inName==HX_CSTRING("OFalse")) return 0;
	if (inName==HX_CSTRING("OFindDefinition")) return 1;
	if (inName==HX_CSTRING("OFindProp")) return 1;
	if (inName==HX_CSTRING("OFindPropStrict")) return 1;
	if (inName==HX_CSTRING("OFloat")) return 1;
	if (inName==HX_CSTRING("OForEach")) return 0;
	if (inName==HX_CSTRING("OForIn")) return 0;
	if (inName==HX_CSTRING("OFunction")) return 1;
	if (inName==HX_CSTRING("OGetDescendants")) return 1;
	if (inName==HX_CSTRING("OGetGlobalScope")) return 0;
	if (inName==HX_CSTRING("OGetLex")) return 1;
	if (inName==HX_CSTRING("OGetProp")) return 1;
	if (inName==HX_CSTRING("OGetScope")) return 1;
	if (inName==HX_CSTRING("OGetSlot")) return 1;
	if (inName==HX_CSTRING("OGetSuper")) return 1;
	if (inName==HX_CSTRING("OHasNext")) return 0;
	if (inName==HX_CSTRING("OIncrIReg")) return 1;
	if (inName==HX_CSTRING("OIncrReg")) return 1;
	if (inName==HX_CSTRING("OInitProp")) return 1;
	if (inName==HX_CSTRING("OInstanceOf")) return 0;
	if (inName==HX_CSTRING("OInt")) return 1;
	if (inName==HX_CSTRING("OIntRef")) return 1;
	if (inName==HX_CSTRING("OIsType")) return 1;
	if (inName==HX_CSTRING("OJump")) return 2;
	if (inName==HX_CSTRING("OLabel")) return 0;
	if (inName==HX_CSTRING("ONaN")) return 0;
	if (inName==HX_CSTRING("ONamespace")) return 1;
	if (inName==HX_CSTRING("ONewBlock")) return 0;
	if (inName==HX_CSTRING("ONext")) return 2;
	if (inName==HX_CSTRING("ONop")) return 0;
	if (inName==HX_CSTRING("ONull")) return 0;
	if (inName==HX_CSTRING("OObject")) return 1;
	if (inName==HX_CSTRING("OOp")) return 1;
	if (inName==HX_CSTRING("OPop")) return 0;
	if (inName==HX_CSTRING("OPopScope")) return 0;
	if (inName==HX_CSTRING("OPushWith")) return 0;
	if (inName==HX_CSTRING("OReg")) return 1;
	if (inName==HX_CSTRING("ORegKill")) return 1;
	if (inName==HX_CSTRING("ORet")) return 0;
	if (inName==HX_CSTRING("ORetVoid")) return 0;
	if (inName==HX_CSTRING("OScope")) return 0;
	if (inName==HX_CSTRING("OSetProp")) return 1;
	if (inName==HX_CSTRING("OSetReg")) return 1;
	if (inName==HX_CSTRING("OSetSlot")) return 1;
	if (inName==HX_CSTRING("OSetSuper")) return 1;
	if (inName==HX_CSTRING("OSetThis")) return 0;
	if (inName==HX_CSTRING("OSmallInt")) return 1;
	if (inName==HX_CSTRING("OString")) return 1;
	if (inName==HX_CSTRING("OSwap")) return 0;
	if (inName==HX_CSTRING("OSwitch")) return 2;
	if (inName==HX_CSTRING("OThis")) return 0;
	if (inName==HX_CSTRING("OThrow")) return 0;
	if (inName==HX_CSTRING("OTimestamp")) return 0;
	if (inName==HX_CSTRING("OToBool")) return 0;
	if (inName==HX_CSTRING("OToInt")) return 0;
	if (inName==HX_CSTRING("OToNumber")) return 0;
	if (inName==HX_CSTRING("OToObject")) return 0;
	if (inName==HX_CSTRING("OToString")) return 0;
	if (inName==HX_CSTRING("OToUInt")) return 0;
	if (inName==HX_CSTRING("OToXml")) return 0;
	if (inName==HX_CSTRING("OToXmlAttr")) return 0;
	if (inName==HX_CSTRING("OTrue")) return 0;
	if (inName==HX_CSTRING("OTypeof")) return 0;
	if (inName==HX_CSTRING("OUIntRef")) return 1;
	if (inName==HX_CSTRING("OUndefined")) return 0;
	if (inName==HX_CSTRING("OUnknown")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic OpCode_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("OApplyType")) return OApplyType_dyn();
	if (inName==HX_CSTRING("OArray")) return OArray_dyn();
	if (inName==HX_CSTRING("OAsAny")) return OAsAny;
	if (inName==HX_CSTRING("OAsObject")) return OAsObject;
	if (inName==HX_CSTRING("OAsString")) return OAsString;
	if (inName==HX_CSTRING("OAsType")) return OAsType_dyn();
	if (inName==HX_CSTRING("OBreakPoint")) return OBreakPoint;
	if (inName==HX_CSTRING("OBreakPointLine")) return OBreakPointLine_dyn();
	if (inName==HX_CSTRING("OCallMethod")) return OCallMethod_dyn();
	if (inName==HX_CSTRING("OCallPropLex")) return OCallPropLex_dyn();
	if (inName==HX_CSTRING("OCallPropVoid")) return OCallPropVoid_dyn();
	if (inName==HX_CSTRING("OCallProperty")) return OCallProperty_dyn();
	if (inName==HX_CSTRING("OCallStack")) return OCallStack_dyn();
	if (inName==HX_CSTRING("OCallStatic")) return OCallStatic_dyn();
	if (inName==HX_CSTRING("OCallSuper")) return OCallSuper_dyn();
	if (inName==HX_CSTRING("OCallSuperVoid")) return OCallSuperVoid_dyn();
	if (inName==HX_CSTRING("OCast")) return OCast_dyn();
	if (inName==HX_CSTRING("OCatch")) return OCatch_dyn();
	if (inName==HX_CSTRING("OCheckIsXml")) return OCheckIsXml;
	if (inName==HX_CSTRING("OClassDef")) return OClassDef_dyn();
	if (inName==HX_CSTRING("OConstruct")) return OConstruct_dyn();
	if (inName==HX_CSTRING("OConstructProperty")) return OConstructProperty_dyn();
	if (inName==HX_CSTRING("OConstructSuper")) return OConstructSuper_dyn();
	if (inName==HX_CSTRING("ODebugFile")) return ODebugFile_dyn();
	if (inName==HX_CSTRING("ODebugLine")) return ODebugLine_dyn();
	if (inName==HX_CSTRING("ODebugReg")) return ODebugReg_dyn();
	if (inName==HX_CSTRING("ODecrIReg")) return ODecrIReg_dyn();
	if (inName==HX_CSTRING("ODecrReg")) return ODecrReg_dyn();
	if (inName==HX_CSTRING("ODeleteProp")) return ODeleteProp_dyn();
	if (inName==HX_CSTRING("ODup")) return ODup;
	if (inName==HX_CSTRING("ODxNs")) return ODxNs_dyn();
	if (inName==HX_CSTRING("ODxNsLate")) return ODxNsLate;
	if (inName==HX_CSTRING("OFalse")) return OFalse;
	if (inName==HX_CSTRING("OFindDefinition")) return OFindDefinition_dyn();
	if (inName==HX_CSTRING("OFindProp")) return OFindProp_dyn();
	if (inName==HX_CSTRING("OFindPropStrict")) return OFindPropStrict_dyn();
	if (inName==HX_CSTRING("OFloat")) return OFloat_dyn();
	if (inName==HX_CSTRING("OForEach")) return OForEach;
	if (inName==HX_CSTRING("OForIn")) return OForIn;
	if (inName==HX_CSTRING("OFunction")) return OFunction_dyn();
	if (inName==HX_CSTRING("OGetDescendants")) return OGetDescendants_dyn();
	if (inName==HX_CSTRING("OGetGlobalScope")) return OGetGlobalScope;
	if (inName==HX_CSTRING("OGetLex")) return OGetLex_dyn();
	if (inName==HX_CSTRING("OGetProp")) return OGetProp_dyn();
	if (inName==HX_CSTRING("OGetScope")) return OGetScope_dyn();
	if (inName==HX_CSTRING("OGetSlot")) return OGetSlot_dyn();
	if (inName==HX_CSTRING("OGetSuper")) return OGetSuper_dyn();
	if (inName==HX_CSTRING("OHasNext")) return OHasNext;
	if (inName==HX_CSTRING("OIncrIReg")) return OIncrIReg_dyn();
	if (inName==HX_CSTRING("OIncrReg")) return OIncrReg_dyn();
	if (inName==HX_CSTRING("OInitProp")) return OInitProp_dyn();
	if (inName==HX_CSTRING("OInstanceOf")) return OInstanceOf;
	if (inName==HX_CSTRING("OInt")) return OInt_dyn();
	if (inName==HX_CSTRING("OIntRef")) return OIntRef_dyn();
	if (inName==HX_CSTRING("OIsType")) return OIsType_dyn();
	if (inName==HX_CSTRING("OJump")) return OJump_dyn();
	if (inName==HX_CSTRING("OLabel")) return OLabel;
	if (inName==HX_CSTRING("ONaN")) return ONaN;
	if (inName==HX_CSTRING("ONamespace")) return ONamespace_dyn();
	if (inName==HX_CSTRING("ONewBlock")) return ONewBlock;
	if (inName==HX_CSTRING("ONext")) return ONext_dyn();
	if (inName==HX_CSTRING("ONop")) return ONop;
	if (inName==HX_CSTRING("ONull")) return ONull;
	if (inName==HX_CSTRING("OObject")) return OObject_dyn();
	if (inName==HX_CSTRING("OOp")) return OOp_dyn();
	if (inName==HX_CSTRING("OPop")) return OPop;
	if (inName==HX_CSTRING("OPopScope")) return OPopScope;
	if (inName==HX_CSTRING("OPushWith")) return OPushWith;
	if (inName==HX_CSTRING("OReg")) return OReg_dyn();
	if (inName==HX_CSTRING("ORegKill")) return ORegKill_dyn();
	if (inName==HX_CSTRING("ORet")) return ORet;
	if (inName==HX_CSTRING("ORetVoid")) return ORetVoid;
	if (inName==HX_CSTRING("OScope")) return OScope;
	if (inName==HX_CSTRING("OSetProp")) return OSetProp_dyn();
	if (inName==HX_CSTRING("OSetReg")) return OSetReg_dyn();
	if (inName==HX_CSTRING("OSetSlot")) return OSetSlot_dyn();
	if (inName==HX_CSTRING("OSetSuper")) return OSetSuper_dyn();
	if (inName==HX_CSTRING("OSetThis")) return OSetThis;
	if (inName==HX_CSTRING("OSmallInt")) return OSmallInt_dyn();
	if (inName==HX_CSTRING("OString")) return OString_dyn();
	if (inName==HX_CSTRING("OSwap")) return OSwap;
	if (inName==HX_CSTRING("OSwitch")) return OSwitch_dyn();
	if (inName==HX_CSTRING("OThis")) return OThis;
	if (inName==HX_CSTRING("OThrow")) return OThrow;
	if (inName==HX_CSTRING("OTimestamp")) return OTimestamp;
	if (inName==HX_CSTRING("OToBool")) return OToBool;
	if (inName==HX_CSTRING("OToInt")) return OToInt;
	if (inName==HX_CSTRING("OToNumber")) return OToNumber;
	if (inName==HX_CSTRING("OToObject")) return OToObject;
	if (inName==HX_CSTRING("OToString")) return OToString;
	if (inName==HX_CSTRING("OToUInt")) return OToUInt;
	if (inName==HX_CSTRING("OToXml")) return OToXml;
	if (inName==HX_CSTRING("OToXmlAttr")) return OToXmlAttr;
	if (inName==HX_CSTRING("OTrue")) return OTrue;
	if (inName==HX_CSTRING("OTypeof")) return OTypeof;
	if (inName==HX_CSTRING("OUIntRef")) return OUIntRef_dyn();
	if (inName==HX_CSTRING("OUndefined")) return OUndefined;
	if (inName==HX_CSTRING("OUnknown")) return OUnknown_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("OBreakPoint"),
	HX_CSTRING("ONop"),
	HX_CSTRING("OThrow"),
	HX_CSTRING("OGetSuper"),
	HX_CSTRING("OSetSuper"),
	HX_CSTRING("ODxNs"),
	HX_CSTRING("ODxNsLate"),
	HX_CSTRING("ORegKill"),
	HX_CSTRING("OLabel"),
	HX_CSTRING("OJump"),
	HX_CSTRING("OSwitch"),
	HX_CSTRING("OPushWith"),
	HX_CSTRING("OPopScope"),
	HX_CSTRING("OForIn"),
	HX_CSTRING("OHasNext"),
	HX_CSTRING("ONull"),
	HX_CSTRING("OUndefined"),
	HX_CSTRING("OForEach"),
	HX_CSTRING("OSmallInt"),
	HX_CSTRING("OInt"),
	HX_CSTRING("OTrue"),
	HX_CSTRING("OFalse"),
	HX_CSTRING("ONaN"),
	HX_CSTRING("OPop"),
	HX_CSTRING("ODup"),
	HX_CSTRING("OSwap"),
	HX_CSTRING("OString"),
	HX_CSTRING("OIntRef"),
	HX_CSTRING("OUIntRef"),
	HX_CSTRING("OFloat"),
	HX_CSTRING("OScope"),
	HX_CSTRING("ONamespace"),
	HX_CSTRING("ONext"),
	HX_CSTRING("OFunction"),
	HX_CSTRING("OCallStack"),
	HX_CSTRING("OConstruct"),
	HX_CSTRING("OCallMethod"),
	HX_CSTRING("OCallStatic"),
	HX_CSTRING("OCallSuper"),
	HX_CSTRING("OCallProperty"),
	HX_CSTRING("ORetVoid"),
	HX_CSTRING("ORet"),
	HX_CSTRING("OConstructSuper"),
	HX_CSTRING("OConstructProperty"),
	HX_CSTRING("OCallPropLex"),
	HX_CSTRING("OCallSuperVoid"),
	HX_CSTRING("OCallPropVoid"),
	HX_CSTRING("OApplyType"),
	HX_CSTRING("OObject"),
	HX_CSTRING("OArray"),
	HX_CSTRING("ONewBlock"),
	HX_CSTRING("OClassDef"),
	HX_CSTRING("OGetDescendants"),
	HX_CSTRING("OCatch"),
	HX_CSTRING("OFindPropStrict"),
	HX_CSTRING("OFindProp"),
	HX_CSTRING("OFindDefinition"),
	HX_CSTRING("OGetLex"),
	HX_CSTRING("OSetProp"),
	HX_CSTRING("OReg"),
	HX_CSTRING("OSetReg"),
	HX_CSTRING("OGetGlobalScope"),
	HX_CSTRING("OGetScope"),
	HX_CSTRING("OGetProp"),
	HX_CSTRING("OInitProp"),
	HX_CSTRING("ODeleteProp"),
	HX_CSTRING("OGetSlot"),
	HX_CSTRING("OSetSlot"),
	HX_CSTRING("OToString"),
	HX_CSTRING("OToXml"),
	HX_CSTRING("OToXmlAttr"),
	HX_CSTRING("OToInt"),
	HX_CSTRING("OToUInt"),
	HX_CSTRING("OToNumber"),
	HX_CSTRING("OToBool"),
	HX_CSTRING("OToObject"),
	HX_CSTRING("OCheckIsXml"),
	HX_CSTRING("OCast"),
	HX_CSTRING("OAsAny"),
	HX_CSTRING("OAsString"),
	HX_CSTRING("OAsType"),
	HX_CSTRING("OAsObject"),
	HX_CSTRING("OIncrReg"),
	HX_CSTRING("ODecrReg"),
	HX_CSTRING("OTypeof"),
	HX_CSTRING("OInstanceOf"),
	HX_CSTRING("OIsType"),
	HX_CSTRING("OIncrIReg"),
	HX_CSTRING("ODecrIReg"),
	HX_CSTRING("OThis"),
	HX_CSTRING("OSetThis"),
	HX_CSTRING("ODebugReg"),
	HX_CSTRING("ODebugLine"),
	HX_CSTRING("ODebugFile"),
	HX_CSTRING("OBreakPointLine"),
	HX_CSTRING("OTimestamp"),
	HX_CSTRING("OOp"),
	HX_CSTRING("OUnknown"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpCode_obj::OAsAny,"OAsAny");
	HX_MARK_MEMBER_NAME(OpCode_obj::OAsObject,"OAsObject");
	HX_MARK_MEMBER_NAME(OpCode_obj::OAsString,"OAsString");
	HX_MARK_MEMBER_NAME(OpCode_obj::OBreakPoint,"OBreakPoint");
	HX_MARK_MEMBER_NAME(OpCode_obj::OCheckIsXml,"OCheckIsXml");
	HX_MARK_MEMBER_NAME(OpCode_obj::ODup,"ODup");
	HX_MARK_MEMBER_NAME(OpCode_obj::ODxNsLate,"ODxNsLate");
	HX_MARK_MEMBER_NAME(OpCode_obj::OFalse,"OFalse");
	HX_MARK_MEMBER_NAME(OpCode_obj::OForEach,"OForEach");
	HX_MARK_MEMBER_NAME(OpCode_obj::OForIn,"OForIn");
	HX_MARK_MEMBER_NAME(OpCode_obj::OGetGlobalScope,"OGetGlobalScope");
	HX_MARK_MEMBER_NAME(OpCode_obj::OHasNext,"OHasNext");
	HX_MARK_MEMBER_NAME(OpCode_obj::OInstanceOf,"OInstanceOf");
	HX_MARK_MEMBER_NAME(OpCode_obj::OLabel,"OLabel");
	HX_MARK_MEMBER_NAME(OpCode_obj::ONaN,"ONaN");
	HX_MARK_MEMBER_NAME(OpCode_obj::ONewBlock,"ONewBlock");
	HX_MARK_MEMBER_NAME(OpCode_obj::ONop,"ONop");
	HX_MARK_MEMBER_NAME(OpCode_obj::ONull,"ONull");
	HX_MARK_MEMBER_NAME(OpCode_obj::OPop,"OPop");
	HX_MARK_MEMBER_NAME(OpCode_obj::OPopScope,"OPopScope");
	HX_MARK_MEMBER_NAME(OpCode_obj::OPushWith,"OPushWith");
	HX_MARK_MEMBER_NAME(OpCode_obj::ORet,"ORet");
	HX_MARK_MEMBER_NAME(OpCode_obj::ORetVoid,"ORetVoid");
	HX_MARK_MEMBER_NAME(OpCode_obj::OScope,"OScope");
	HX_MARK_MEMBER_NAME(OpCode_obj::OSetThis,"OSetThis");
	HX_MARK_MEMBER_NAME(OpCode_obj::OSwap,"OSwap");
	HX_MARK_MEMBER_NAME(OpCode_obj::OThis,"OThis");
	HX_MARK_MEMBER_NAME(OpCode_obj::OThrow,"OThrow");
	HX_MARK_MEMBER_NAME(OpCode_obj::OTimestamp,"OTimestamp");
	HX_MARK_MEMBER_NAME(OpCode_obj::OToBool,"OToBool");
	HX_MARK_MEMBER_NAME(OpCode_obj::OToInt,"OToInt");
	HX_MARK_MEMBER_NAME(OpCode_obj::OToNumber,"OToNumber");
	HX_MARK_MEMBER_NAME(OpCode_obj::OToObject,"OToObject");
	HX_MARK_MEMBER_NAME(OpCode_obj::OToString,"OToString");
	HX_MARK_MEMBER_NAME(OpCode_obj::OToUInt,"OToUInt");
	HX_MARK_MEMBER_NAME(OpCode_obj::OToXml,"OToXml");
	HX_MARK_MEMBER_NAME(OpCode_obj::OToXmlAttr,"OToXmlAttr");
	HX_MARK_MEMBER_NAME(OpCode_obj::OTrue,"OTrue");
	HX_MARK_MEMBER_NAME(OpCode_obj::OTypeof,"OTypeof");
	HX_MARK_MEMBER_NAME(OpCode_obj::OUndefined,"OUndefined");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpCode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OAsAny,"OAsAny");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OAsObject,"OAsObject");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OAsString,"OAsString");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OBreakPoint,"OBreakPoint");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OCheckIsXml,"OCheckIsXml");
	HX_VISIT_MEMBER_NAME(OpCode_obj::ODup,"ODup");
	HX_VISIT_MEMBER_NAME(OpCode_obj::ODxNsLate,"ODxNsLate");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OFalse,"OFalse");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OForEach,"OForEach");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OForIn,"OForIn");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OGetGlobalScope,"OGetGlobalScope");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OHasNext,"OHasNext");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OInstanceOf,"OInstanceOf");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OLabel,"OLabel");
	HX_VISIT_MEMBER_NAME(OpCode_obj::ONaN,"ONaN");
	HX_VISIT_MEMBER_NAME(OpCode_obj::ONewBlock,"ONewBlock");
	HX_VISIT_MEMBER_NAME(OpCode_obj::ONop,"ONop");
	HX_VISIT_MEMBER_NAME(OpCode_obj::ONull,"ONull");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OPop,"OPop");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OPopScope,"OPopScope");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OPushWith,"OPushWith");
	HX_VISIT_MEMBER_NAME(OpCode_obj::ORet,"ORet");
	HX_VISIT_MEMBER_NAME(OpCode_obj::ORetVoid,"ORetVoid");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OScope,"OScope");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OSetThis,"OSetThis");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OSwap,"OSwap");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OThis,"OThis");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OThrow,"OThrow");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OTimestamp,"OTimestamp");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OToBool,"OToBool");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OToInt,"OToInt");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OToNumber,"OToNumber");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OToObject,"OToObject");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OToString,"OToString");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OToUInt,"OToUInt");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OToXml,"OToXml");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OToXmlAttr,"OToXmlAttr");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OTrue,"OTrue");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OTypeof,"OTypeof");
	HX_VISIT_MEMBER_NAME(OpCode_obj::OUndefined,"OUndefined");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class OpCode_obj::__mClass;

Dynamic __Create_OpCode_obj() { return new OpCode_obj; }

void OpCode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.abc.OpCode"), hx::TCanCast< OpCode_obj >,sStaticFields,sMemberFields,
	&__Create_OpCode_obj, &__Create,
	&super::__SGetClass(), &CreateOpCode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void OpCode_obj::__boot()
{
hx::Static(OAsAny) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OAsAny"),78);
hx::Static(OAsObject) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OAsObject"),81);
hx::Static(OAsString) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OAsString"),79);
hx::Static(OBreakPoint) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OBreakPoint"),0);
hx::Static(OCheckIsXml) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OCheckIsXml"),76);
hx::Static(ODup) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("ODup"),24);
hx::Static(ODxNsLate) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("ODxNsLate"),6);
hx::Static(OFalse) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OFalse"),21);
hx::Static(OForEach) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OForEach"),17);
hx::Static(OForIn) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OForIn"),13);
hx::Static(OGetGlobalScope) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OGetGlobalScope"),61);
hx::Static(OHasNext) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OHasNext"),14);
hx::Static(OInstanceOf) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OInstanceOf"),85);
hx::Static(OLabel) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OLabel"),8);
hx::Static(ONaN) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("ONaN"),22);
hx::Static(ONewBlock) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("ONewBlock"),50);
hx::Static(ONop) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("ONop"),1);
hx::Static(ONull) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("ONull"),15);
hx::Static(OPop) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OPop"),23);
hx::Static(OPopScope) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OPopScope"),12);
hx::Static(OPushWith) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OPushWith"),11);
hx::Static(ORet) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("ORet"),41);
hx::Static(ORetVoid) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("ORetVoid"),40);
hx::Static(OScope) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OScope"),30);
hx::Static(OSetThis) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OSetThis"),90);
hx::Static(OSwap) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OSwap"),25);
hx::Static(OThis) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OThis"),89);
hx::Static(OThrow) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OThrow"),2);
hx::Static(OTimestamp) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OTimestamp"),95);
hx::Static(OToBool) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OToBool"),74);
hx::Static(OToInt) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OToInt"),71);
hx::Static(OToNumber) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OToNumber"),73);
hx::Static(OToObject) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OToObject"),75);
hx::Static(OToString) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OToString"),68);
hx::Static(OToUInt) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OToUInt"),72);
hx::Static(OToXml) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OToXml"),69);
hx::Static(OToXmlAttr) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OToXmlAttr"),70);
hx::Static(OTrue) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OTrue"),20);
hx::Static(OTypeof) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OTypeof"),84);
hx::Static(OUndefined) = hx::CreateEnum< OpCode_obj >(HX_CSTRING("OUndefined"),16);
}


} // end namespace format
} // end namespace abc
