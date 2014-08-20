#include <hxcpp.h>

#ifndef INCLUDED_format_abc_Operation
#include <format/abc/Operation.h>
#endif
namespace format{
namespace abc{

::format::abc::Operation Operation_obj::OpAdd;

::format::abc::Operation Operation_obj::OpAnd;

::format::abc::Operation Operation_obj::OpAs;

::format::abc::Operation Operation_obj::OpBitNot;

::format::abc::Operation Operation_obj::OpDecr;

::format::abc::Operation Operation_obj::OpDiv;

::format::abc::Operation Operation_obj::OpEq;

::format::abc::Operation Operation_obj::OpGt;

::format::abc::Operation Operation_obj::OpGte;

::format::abc::Operation Operation_obj::OpIAdd;

::format::abc::Operation Operation_obj::OpIDecr;

::format::abc::Operation Operation_obj::OpIIncr;

::format::abc::Operation Operation_obj::OpIMul;

::format::abc::Operation Operation_obj::OpINeg;

::format::abc::Operation Operation_obj::OpISub;

::format::abc::Operation Operation_obj::OpIn;

::format::abc::Operation Operation_obj::OpIncr;

::format::abc::Operation Operation_obj::OpIs;

::format::abc::Operation Operation_obj::OpLt;

::format::abc::Operation Operation_obj::OpLte;

::format::abc::Operation Operation_obj::OpMemGet16;

::format::abc::Operation Operation_obj::OpMemGet32;

::format::abc::Operation Operation_obj::OpMemGet8;

::format::abc::Operation Operation_obj::OpMemGetDouble;

::format::abc::Operation Operation_obj::OpMemGetFloat;

::format::abc::Operation Operation_obj::OpMemSet16;

::format::abc::Operation Operation_obj::OpMemSet32;

::format::abc::Operation Operation_obj::OpMemSet8;

::format::abc::Operation Operation_obj::OpMemSetDouble;

::format::abc::Operation Operation_obj::OpMemSetFloat;

::format::abc::Operation Operation_obj::OpMod;

::format::abc::Operation Operation_obj::OpMul;

::format::abc::Operation Operation_obj::OpNeg;

::format::abc::Operation Operation_obj::OpNot;

::format::abc::Operation Operation_obj::OpOr;

::format::abc::Operation Operation_obj::OpPhysEq;

::format::abc::Operation Operation_obj::OpShl;

::format::abc::Operation Operation_obj::OpShr;

::format::abc::Operation Operation_obj::OpSign1;

::format::abc::Operation Operation_obj::OpSign16;

::format::abc::Operation Operation_obj::OpSign8;

::format::abc::Operation Operation_obj::OpSub;

::format::abc::Operation Operation_obj::OpUShr;

::format::abc::Operation Operation_obj::OpXor;

HX_DEFINE_CREATE_ENUM(Operation_obj)

int Operation_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("OpAdd")) return 6;
	if (inName==HX_CSTRING("OpAnd")) return 14;
	if (inName==HX_CSTRING("OpAs")) return 0;
	if (inName==HX_CSTRING("OpBitNot")) return 5;
	if (inName==HX_CSTRING("OpDecr")) return 3;
	if (inName==HX_CSTRING("OpDiv")) return 9;
	if (inName==HX_CSTRING("OpEq")) return 17;
	if (inName==HX_CSTRING("OpGt")) return 21;
	if (inName==HX_CSTRING("OpGte")) return 22;
	if (inName==HX_CSTRING("OpIAdd")) return 28;
	if (inName==HX_CSTRING("OpIDecr")) return 26;
	if (inName==HX_CSTRING("OpIIncr")) return 25;
	if (inName==HX_CSTRING("OpIMul")) return 30;
	if (inName==HX_CSTRING("OpINeg")) return 27;
	if (inName==HX_CSTRING("OpISub")) return 29;
	if (inName==HX_CSTRING("OpIn")) return 24;
	if (inName==HX_CSTRING("OpIncr")) return 2;
	if (inName==HX_CSTRING("OpIs")) return 23;
	if (inName==HX_CSTRING("OpLt")) return 19;
	if (inName==HX_CSTRING("OpLte")) return 20;
	if (inName==HX_CSTRING("OpMemGet16")) return 32;
	if (inName==HX_CSTRING("OpMemGet32")) return 33;
	if (inName==HX_CSTRING("OpMemGet8")) return 31;
	if (inName==HX_CSTRING("OpMemGetDouble")) return 35;
	if (inName==HX_CSTRING("OpMemGetFloat")) return 34;
	if (inName==HX_CSTRING("OpMemSet16")) return 37;
	if (inName==HX_CSTRING("OpMemSet32")) return 38;
	if (inName==HX_CSTRING("OpMemSet8")) return 36;
	if (inName==HX_CSTRING("OpMemSetDouble")) return 40;
	if (inName==HX_CSTRING("OpMemSetFloat")) return 39;
	if (inName==HX_CSTRING("OpMod")) return 10;
	if (inName==HX_CSTRING("OpMul")) return 8;
	if (inName==HX_CSTRING("OpNeg")) return 1;
	if (inName==HX_CSTRING("OpNot")) return 4;
	if (inName==HX_CSTRING("OpOr")) return 15;
	if (inName==HX_CSTRING("OpPhysEq")) return 18;
	if (inName==HX_CSTRING("OpShl")) return 11;
	if (inName==HX_CSTRING("OpShr")) return 12;
	if (inName==HX_CSTRING("OpSign1")) return 41;
	if (inName==HX_CSTRING("OpSign16")) return 43;
	if (inName==HX_CSTRING("OpSign8")) return 42;
	if (inName==HX_CSTRING("OpSub")) return 7;
	if (inName==HX_CSTRING("OpUShr")) return 13;
	if (inName==HX_CSTRING("OpXor")) return 16;
	return super::__FindIndex(inName);
}

int Operation_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("OpAdd")) return 0;
	if (inName==HX_CSTRING("OpAnd")) return 0;
	if (inName==HX_CSTRING("OpAs")) return 0;
	if (inName==HX_CSTRING("OpBitNot")) return 0;
	if (inName==HX_CSTRING("OpDecr")) return 0;
	if (inName==HX_CSTRING("OpDiv")) return 0;
	if (inName==HX_CSTRING("OpEq")) return 0;
	if (inName==HX_CSTRING("OpGt")) return 0;
	if (inName==HX_CSTRING("OpGte")) return 0;
	if (inName==HX_CSTRING("OpIAdd")) return 0;
	if (inName==HX_CSTRING("OpIDecr")) return 0;
	if (inName==HX_CSTRING("OpIIncr")) return 0;
	if (inName==HX_CSTRING("OpIMul")) return 0;
	if (inName==HX_CSTRING("OpINeg")) return 0;
	if (inName==HX_CSTRING("OpISub")) return 0;
	if (inName==HX_CSTRING("OpIn")) return 0;
	if (inName==HX_CSTRING("OpIncr")) return 0;
	if (inName==HX_CSTRING("OpIs")) return 0;
	if (inName==HX_CSTRING("OpLt")) return 0;
	if (inName==HX_CSTRING("OpLte")) return 0;
	if (inName==HX_CSTRING("OpMemGet16")) return 0;
	if (inName==HX_CSTRING("OpMemGet32")) return 0;
	if (inName==HX_CSTRING("OpMemGet8")) return 0;
	if (inName==HX_CSTRING("OpMemGetDouble")) return 0;
	if (inName==HX_CSTRING("OpMemGetFloat")) return 0;
	if (inName==HX_CSTRING("OpMemSet16")) return 0;
	if (inName==HX_CSTRING("OpMemSet32")) return 0;
	if (inName==HX_CSTRING("OpMemSet8")) return 0;
	if (inName==HX_CSTRING("OpMemSetDouble")) return 0;
	if (inName==HX_CSTRING("OpMemSetFloat")) return 0;
	if (inName==HX_CSTRING("OpMod")) return 0;
	if (inName==HX_CSTRING("OpMul")) return 0;
	if (inName==HX_CSTRING("OpNeg")) return 0;
	if (inName==HX_CSTRING("OpNot")) return 0;
	if (inName==HX_CSTRING("OpOr")) return 0;
	if (inName==HX_CSTRING("OpPhysEq")) return 0;
	if (inName==HX_CSTRING("OpShl")) return 0;
	if (inName==HX_CSTRING("OpShr")) return 0;
	if (inName==HX_CSTRING("OpSign1")) return 0;
	if (inName==HX_CSTRING("OpSign16")) return 0;
	if (inName==HX_CSTRING("OpSign8")) return 0;
	if (inName==HX_CSTRING("OpSub")) return 0;
	if (inName==HX_CSTRING("OpUShr")) return 0;
	if (inName==HX_CSTRING("OpXor")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Operation_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("OpAdd")) return OpAdd;
	if (inName==HX_CSTRING("OpAnd")) return OpAnd;
	if (inName==HX_CSTRING("OpAs")) return OpAs;
	if (inName==HX_CSTRING("OpBitNot")) return OpBitNot;
	if (inName==HX_CSTRING("OpDecr")) return OpDecr;
	if (inName==HX_CSTRING("OpDiv")) return OpDiv;
	if (inName==HX_CSTRING("OpEq")) return OpEq;
	if (inName==HX_CSTRING("OpGt")) return OpGt;
	if (inName==HX_CSTRING("OpGte")) return OpGte;
	if (inName==HX_CSTRING("OpIAdd")) return OpIAdd;
	if (inName==HX_CSTRING("OpIDecr")) return OpIDecr;
	if (inName==HX_CSTRING("OpIIncr")) return OpIIncr;
	if (inName==HX_CSTRING("OpIMul")) return OpIMul;
	if (inName==HX_CSTRING("OpINeg")) return OpINeg;
	if (inName==HX_CSTRING("OpISub")) return OpISub;
	if (inName==HX_CSTRING("OpIn")) return OpIn;
	if (inName==HX_CSTRING("OpIncr")) return OpIncr;
	if (inName==HX_CSTRING("OpIs")) return OpIs;
	if (inName==HX_CSTRING("OpLt")) return OpLt;
	if (inName==HX_CSTRING("OpLte")) return OpLte;
	if (inName==HX_CSTRING("OpMemGet16")) return OpMemGet16;
	if (inName==HX_CSTRING("OpMemGet32")) return OpMemGet32;
	if (inName==HX_CSTRING("OpMemGet8")) return OpMemGet8;
	if (inName==HX_CSTRING("OpMemGetDouble")) return OpMemGetDouble;
	if (inName==HX_CSTRING("OpMemGetFloat")) return OpMemGetFloat;
	if (inName==HX_CSTRING("OpMemSet16")) return OpMemSet16;
	if (inName==HX_CSTRING("OpMemSet32")) return OpMemSet32;
	if (inName==HX_CSTRING("OpMemSet8")) return OpMemSet8;
	if (inName==HX_CSTRING("OpMemSetDouble")) return OpMemSetDouble;
	if (inName==HX_CSTRING("OpMemSetFloat")) return OpMemSetFloat;
	if (inName==HX_CSTRING("OpMod")) return OpMod;
	if (inName==HX_CSTRING("OpMul")) return OpMul;
	if (inName==HX_CSTRING("OpNeg")) return OpNeg;
	if (inName==HX_CSTRING("OpNot")) return OpNot;
	if (inName==HX_CSTRING("OpOr")) return OpOr;
	if (inName==HX_CSTRING("OpPhysEq")) return OpPhysEq;
	if (inName==HX_CSTRING("OpShl")) return OpShl;
	if (inName==HX_CSTRING("OpShr")) return OpShr;
	if (inName==HX_CSTRING("OpSign1")) return OpSign1;
	if (inName==HX_CSTRING("OpSign16")) return OpSign16;
	if (inName==HX_CSTRING("OpSign8")) return OpSign8;
	if (inName==HX_CSTRING("OpSub")) return OpSub;
	if (inName==HX_CSTRING("OpUShr")) return OpUShr;
	if (inName==HX_CSTRING("OpXor")) return OpXor;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("OpAs"),
	HX_CSTRING("OpNeg"),
	HX_CSTRING("OpIncr"),
	HX_CSTRING("OpDecr"),
	HX_CSTRING("OpNot"),
	HX_CSTRING("OpBitNot"),
	HX_CSTRING("OpAdd"),
	HX_CSTRING("OpSub"),
	HX_CSTRING("OpMul"),
	HX_CSTRING("OpDiv"),
	HX_CSTRING("OpMod"),
	HX_CSTRING("OpShl"),
	HX_CSTRING("OpShr"),
	HX_CSTRING("OpUShr"),
	HX_CSTRING("OpAnd"),
	HX_CSTRING("OpOr"),
	HX_CSTRING("OpXor"),
	HX_CSTRING("OpEq"),
	HX_CSTRING("OpPhysEq"),
	HX_CSTRING("OpLt"),
	HX_CSTRING("OpLte"),
	HX_CSTRING("OpGt"),
	HX_CSTRING("OpGte"),
	HX_CSTRING("OpIs"),
	HX_CSTRING("OpIn"),
	HX_CSTRING("OpIIncr"),
	HX_CSTRING("OpIDecr"),
	HX_CSTRING("OpINeg"),
	HX_CSTRING("OpIAdd"),
	HX_CSTRING("OpISub"),
	HX_CSTRING("OpIMul"),
	HX_CSTRING("OpMemGet8"),
	HX_CSTRING("OpMemGet16"),
	HX_CSTRING("OpMemGet32"),
	HX_CSTRING("OpMemGetFloat"),
	HX_CSTRING("OpMemGetDouble"),
	HX_CSTRING("OpMemSet8"),
	HX_CSTRING("OpMemSet16"),
	HX_CSTRING("OpMemSet32"),
	HX_CSTRING("OpMemSetFloat"),
	HX_CSTRING("OpMemSetDouble"),
	HX_CSTRING("OpSign1"),
	HX_CSTRING("OpSign8"),
	HX_CSTRING("OpSign16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Operation_obj::OpAdd,"OpAdd");
	HX_MARK_MEMBER_NAME(Operation_obj::OpAnd,"OpAnd");
	HX_MARK_MEMBER_NAME(Operation_obj::OpAs,"OpAs");
	HX_MARK_MEMBER_NAME(Operation_obj::OpBitNot,"OpBitNot");
	HX_MARK_MEMBER_NAME(Operation_obj::OpDecr,"OpDecr");
	HX_MARK_MEMBER_NAME(Operation_obj::OpDiv,"OpDiv");
	HX_MARK_MEMBER_NAME(Operation_obj::OpEq,"OpEq");
	HX_MARK_MEMBER_NAME(Operation_obj::OpGt,"OpGt");
	HX_MARK_MEMBER_NAME(Operation_obj::OpGte,"OpGte");
	HX_MARK_MEMBER_NAME(Operation_obj::OpIAdd,"OpIAdd");
	HX_MARK_MEMBER_NAME(Operation_obj::OpIDecr,"OpIDecr");
	HX_MARK_MEMBER_NAME(Operation_obj::OpIIncr,"OpIIncr");
	HX_MARK_MEMBER_NAME(Operation_obj::OpIMul,"OpIMul");
	HX_MARK_MEMBER_NAME(Operation_obj::OpINeg,"OpINeg");
	HX_MARK_MEMBER_NAME(Operation_obj::OpISub,"OpISub");
	HX_MARK_MEMBER_NAME(Operation_obj::OpIn,"OpIn");
	HX_MARK_MEMBER_NAME(Operation_obj::OpIncr,"OpIncr");
	HX_MARK_MEMBER_NAME(Operation_obj::OpIs,"OpIs");
	HX_MARK_MEMBER_NAME(Operation_obj::OpLt,"OpLt");
	HX_MARK_MEMBER_NAME(Operation_obj::OpLte,"OpLte");
	HX_MARK_MEMBER_NAME(Operation_obj::OpMemGet16,"OpMemGet16");
	HX_MARK_MEMBER_NAME(Operation_obj::OpMemGet32,"OpMemGet32");
	HX_MARK_MEMBER_NAME(Operation_obj::OpMemGet8,"OpMemGet8");
	HX_MARK_MEMBER_NAME(Operation_obj::OpMemGetDouble,"OpMemGetDouble");
	HX_MARK_MEMBER_NAME(Operation_obj::OpMemGetFloat,"OpMemGetFloat");
	HX_MARK_MEMBER_NAME(Operation_obj::OpMemSet16,"OpMemSet16");
	HX_MARK_MEMBER_NAME(Operation_obj::OpMemSet32,"OpMemSet32");
	HX_MARK_MEMBER_NAME(Operation_obj::OpMemSet8,"OpMemSet8");
	HX_MARK_MEMBER_NAME(Operation_obj::OpMemSetDouble,"OpMemSetDouble");
	HX_MARK_MEMBER_NAME(Operation_obj::OpMemSetFloat,"OpMemSetFloat");
	HX_MARK_MEMBER_NAME(Operation_obj::OpMod,"OpMod");
	HX_MARK_MEMBER_NAME(Operation_obj::OpMul,"OpMul");
	HX_MARK_MEMBER_NAME(Operation_obj::OpNeg,"OpNeg");
	HX_MARK_MEMBER_NAME(Operation_obj::OpNot,"OpNot");
	HX_MARK_MEMBER_NAME(Operation_obj::OpOr,"OpOr");
	HX_MARK_MEMBER_NAME(Operation_obj::OpPhysEq,"OpPhysEq");
	HX_MARK_MEMBER_NAME(Operation_obj::OpShl,"OpShl");
	HX_MARK_MEMBER_NAME(Operation_obj::OpShr,"OpShr");
	HX_MARK_MEMBER_NAME(Operation_obj::OpSign1,"OpSign1");
	HX_MARK_MEMBER_NAME(Operation_obj::OpSign16,"OpSign16");
	HX_MARK_MEMBER_NAME(Operation_obj::OpSign8,"OpSign8");
	HX_MARK_MEMBER_NAME(Operation_obj::OpSub,"OpSub");
	HX_MARK_MEMBER_NAME(Operation_obj::OpUShr,"OpUShr");
	HX_MARK_MEMBER_NAME(Operation_obj::OpXor,"OpXor");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Operation_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpAdd,"OpAdd");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpAnd,"OpAnd");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpAs,"OpAs");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpBitNot,"OpBitNot");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpDecr,"OpDecr");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpDiv,"OpDiv");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpEq,"OpEq");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpGt,"OpGt");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpGte,"OpGte");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpIAdd,"OpIAdd");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpIDecr,"OpIDecr");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpIIncr,"OpIIncr");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpIMul,"OpIMul");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpINeg,"OpINeg");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpISub,"OpISub");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpIn,"OpIn");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpIncr,"OpIncr");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpIs,"OpIs");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpLt,"OpLt");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpLte,"OpLte");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpMemGet16,"OpMemGet16");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpMemGet32,"OpMemGet32");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpMemGet8,"OpMemGet8");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpMemGetDouble,"OpMemGetDouble");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpMemGetFloat,"OpMemGetFloat");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpMemSet16,"OpMemSet16");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpMemSet32,"OpMemSet32");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpMemSet8,"OpMemSet8");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpMemSetDouble,"OpMemSetDouble");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpMemSetFloat,"OpMemSetFloat");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpMod,"OpMod");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpMul,"OpMul");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpNeg,"OpNeg");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpNot,"OpNot");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpOr,"OpOr");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpPhysEq,"OpPhysEq");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpShl,"OpShl");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpShr,"OpShr");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpSign1,"OpSign1");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpSign16,"OpSign16");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpSign8,"OpSign8");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpSub,"OpSub");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpUShr,"OpUShr");
	HX_VISIT_MEMBER_NAME(Operation_obj::OpXor,"OpXor");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Operation_obj::__mClass;

Dynamic __Create_Operation_obj() { return new Operation_obj; }

void Operation_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.abc.Operation"), hx::TCanCast< Operation_obj >,sStaticFields,sMemberFields,
	&__Create_Operation_obj, &__Create,
	&super::__SGetClass(), &CreateOperation_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Operation_obj::__boot()
{
hx::Static(OpAdd) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpAdd"),6);
hx::Static(OpAnd) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpAnd"),14);
hx::Static(OpAs) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpAs"),0);
hx::Static(OpBitNot) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpBitNot"),5);
hx::Static(OpDecr) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpDecr"),3);
hx::Static(OpDiv) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpDiv"),9);
hx::Static(OpEq) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpEq"),17);
hx::Static(OpGt) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpGt"),21);
hx::Static(OpGte) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpGte"),22);
hx::Static(OpIAdd) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpIAdd"),28);
hx::Static(OpIDecr) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpIDecr"),26);
hx::Static(OpIIncr) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpIIncr"),25);
hx::Static(OpIMul) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpIMul"),30);
hx::Static(OpINeg) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpINeg"),27);
hx::Static(OpISub) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpISub"),29);
hx::Static(OpIn) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpIn"),24);
hx::Static(OpIncr) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpIncr"),2);
hx::Static(OpIs) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpIs"),23);
hx::Static(OpLt) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpLt"),19);
hx::Static(OpLte) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpLte"),20);
hx::Static(OpMemGet16) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpMemGet16"),32);
hx::Static(OpMemGet32) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpMemGet32"),33);
hx::Static(OpMemGet8) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpMemGet8"),31);
hx::Static(OpMemGetDouble) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpMemGetDouble"),35);
hx::Static(OpMemGetFloat) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpMemGetFloat"),34);
hx::Static(OpMemSet16) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpMemSet16"),37);
hx::Static(OpMemSet32) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpMemSet32"),38);
hx::Static(OpMemSet8) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpMemSet8"),36);
hx::Static(OpMemSetDouble) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpMemSetDouble"),40);
hx::Static(OpMemSetFloat) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpMemSetFloat"),39);
hx::Static(OpMod) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpMod"),10);
hx::Static(OpMul) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpMul"),8);
hx::Static(OpNeg) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpNeg"),1);
hx::Static(OpNot) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpNot"),4);
hx::Static(OpOr) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpOr"),15);
hx::Static(OpPhysEq) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpPhysEq"),18);
hx::Static(OpShl) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpShl"),11);
hx::Static(OpShr) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpShr"),12);
hx::Static(OpSign1) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpSign1"),41);
hx::Static(OpSign16) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpSign16"),43);
hx::Static(OpSign8) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpSign8"),42);
hx::Static(OpSub) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpSub"),7);
hx::Static(OpUShr) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpUShr"),13);
hx::Static(OpXor) = hx::CreateEnum< Operation_obj >(HX_CSTRING("OpXor"),16);
}


} // end namespace format
} // end namespace abc
