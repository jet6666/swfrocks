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
#ifndef INCLUDED_format_abc_OpReader
#include <format/abc/OpReader.h>
#endif
#ifndef INCLUDED_format_abc_Operation
#include <format/abc/Operation.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace format{
namespace abc{

Void OpReader_obj::__construct(::haxe::io::Input i)
{
HX_STACK_FRAME("format.abc.OpReader","new",0x0f088ef9,"format.abc.OpReader.new","format/abc/OpReader.hx",39,0x9d17c955)
HX_STACK_THIS(this)
HX_STACK_ARG(i,"i")
{
	HX_STACK_LINE(39)
	this->i = i;
}
;
	return null();
}

//OpReader_obj::~OpReader_obj() { }

Dynamic OpReader_obj::__CreateEmpty() { return  new OpReader_obj; }
hx::ObjectPtr< OpReader_obj > OpReader_obj::__new(::haxe::io::Input i)
{  hx::ObjectPtr< OpReader_obj > result = new OpReader_obj();
	result->__construct(i);
	return result;}

Dynamic OpReader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpReader_obj > result = new OpReader_obj();
	result->__construct(inArgs[0]);
	return result;}

int OpReader_obj::readInt( ){
	HX_STACK_FRAME("format.abc.OpReader","readInt",0xb6043252,"format.abc.OpReader.readInt","format/abc/OpReader.hx",42,0x9d17c955)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	int a = this->i->readByte();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(44)
	if (((a < (int)128))){
		HX_STACK_LINE(45)
		return a;
	}
	HX_STACK_LINE(46)
	hx::AndEq(a,(int)127);
	HX_STACK_LINE(47)
	int b = this->i->readByte();		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(48)
	if (((b < (int)128))){
		HX_STACK_LINE(49)
		return (int((int(b) << int((int)7))) | int(a));
	}
	HX_STACK_LINE(50)
	hx::AndEq(b,(int)127);
	HX_STACK_LINE(51)
	int c = this->i->readByte();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(52)
	if (((c < (int)128))){
		HX_STACK_LINE(53)
		return (int((int((int(c) << int((int)14))) | int((int(b) << int((int)7))))) | int(a));
	}
	HX_STACK_LINE(54)
	hx::AndEq(c,(int)127);
	HX_STACK_LINE(55)
	int d = this->i->readByte();		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(56)
	if (((d < (int)128))){
		HX_STACK_LINE(57)
		return (int((int((int((int(d) << int((int)21))) | int((int(c) << int((int)14))))) | int((int(b) << int((int)7))))) | int(a));
	}
	HX_STACK_LINE(58)
	hx::AndEq(d,(int)127);
	HX_STACK_LINE(59)
	int e = this->i->readByte();		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(60)
	if (((e > (int)15))){
		HX_STACK_LINE(60)
		HX_STACK_DO_THROW(HX_CSTRING("assert"));
	}
	HX_STACK_LINE(61)
	if ((((((int(e) & int((int)8))) == (int)0) != ((((int(e) & int((int)4))) == (int)0))))){
		HX_STACK_LINE(61)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::Overflow);
	}
	HX_STACK_LINE(62)
	return (int((int((int((int((int(e) << int((int)28))) | int((int(d) << int((int)21))))) | int((int(c) << int((int)14))))) | int((int(b) << int((int)7))))) | int(a));
}


HX_DEFINE_DYNAMIC_FUNC0(OpReader_obj,readInt,return )

::format::abc::Index OpReader_obj::readIndex( ){
	HX_STACK_FRAME("format.abc.OpReader","readIndex",0x65271f35,"format.abc.OpReader.readIndex","format/abc/OpReader.hx",65,0x9d17c955)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	int _g = this->readInt();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(66)
	return ::format::abc::Index_obj::Idx(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(OpReader_obj,readIndex,return )

int OpReader_obj::readInt32( ){
	HX_STACK_FRAME("format.abc.OpReader","readInt32",0x65331771,"format.abc.OpReader.readInt32","format/abc/OpReader.hx",70,0x9d17c955)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	int a = this->i->readByte();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(72)
	if (((a < (int)128))){
		HX_STACK_LINE(73)
		return a;
	}
	HX_STACK_LINE(74)
	hx::AndEq(a,(int)127);
	HX_STACK_LINE(75)
	int b = this->i->readByte();		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(76)
	if (((b < (int)128))){
		HX_STACK_LINE(77)
		return (int((int(b) << int((int)7))) | int(a));
	}
	HX_STACK_LINE(78)
	hx::AndEq(b,(int)127);
	HX_STACK_LINE(79)
	int c = this->i->readByte();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(80)
	if (((c < (int)128))){
		HX_STACK_LINE(81)
		return (int((int((int(c) << int((int)14))) | int((int(b) << int((int)7))))) | int(a));
	}
	HX_STACK_LINE(82)
	hx::AndEq(c,(int)127);
	HX_STACK_LINE(83)
	int d = this->i->readByte();		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(84)
	if (((d < (int)128))){
		HX_STACK_LINE(85)
		return (int((int((int((int(d) << int((int)21))) | int((int(c) << int((int)14))))) | int((int(b) << int((int)7))))) | int(a));
	}
	HX_STACK_LINE(86)
	hx::AndEq(d,(int)127);
	HX_STACK_LINE(87)
	int e = this->i->readByte();		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(88)
	if (((e > (int)15))){
		HX_STACK_LINE(88)
		HX_STACK_DO_THROW(HX_CSTRING("assert"));
	}
	HX_STACK_LINE(89)
	return (int((int((int((int((int(e) << int((int)28))) | int((int(d) << int((int)21))))) | int((int(c) << int((int)14))))) | int((int(b) << int((int)7))))) | int(a));
}


HX_DEFINE_DYNAMIC_FUNC0(OpReader_obj,readInt32,return )

int OpReader_obj::reg( ){
	HX_STACK_FRAME("format.abc.OpReader","reg",0x0f0b97ed,"format.abc.OpReader.reg","format/abc/OpReader.hx",118,0x9d17c955)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	return this->i->readByte();
}


HX_DEFINE_DYNAMIC_FUNC0(OpReader_obj,reg,return )

::format::abc::OpCode OpReader_obj::jmp( ::format::abc::JumpStyle j){
	HX_STACK_FRAME("format.abc.OpReader","jmp",0x0f058ce6,"format.abc.OpReader.jmp","format/abc/OpReader.hx",121,0x9d17c955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(j,"j")
	HX_STACK_LINE(122)
	int _g = this->i->readInt24();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(122)
	return ::format::abc::OpCode_obj::OJump(j,_g);
}


HX_DEFINE_DYNAMIC_FUNC1(OpReader_obj,jmp,return )

::format::abc::OpCode OpReader_obj::readOp( int op){
	HX_STACK_FRAME("format.abc.OpReader","readOp",0x1209391e,"format.abc.OpReader.readOp","format/abc/OpReader.hx",126,0x9d17c955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_LINE(126)
	switch( (int)(op)){
		case (int)1: {
			HX_STACK_LINE(128)
			return ::format::abc::OpCode_obj::OBreakPoint;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(130)
			return ::format::abc::OpCode_obj::ONop;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(132)
			return ::format::abc::OpCode_obj::OThrow;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(134)
			int _g = this->readInt();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(134)
			::format::abc::Index _g1 = ::format::abc::Index_obj::Idx(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(134)
			return ::format::abc::OpCode_obj::OGetSuper(_g1);
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(136)
			int _g2 = this->readInt();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(136)
			::format::abc::Index _g3 = ::format::abc::Index_obj::Idx(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(136)
			return ::format::abc::OpCode_obj::OSetSuper(_g3);
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(138)
			int _g4 = this->readInt();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(138)
			::format::abc::Index _g5 = ::format::abc::Index_obj::Idx(_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(138)
			return ::format::abc::OpCode_obj::ODxNs(_g5);
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(140)
			return ::format::abc::OpCode_obj::ODxNsLate;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(142)
			int _g6 = this->i->readByte();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(142)
			return ::format::abc::OpCode_obj::ORegKill(_g6);
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(144)
			return ::format::abc::OpCode_obj::OLabel;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(146)
			int _g7 = this->i->readInt24();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(146)
			return ::format::abc::OpCode_obj::OJump(::format::abc::JumpStyle_obj::JNotLt,_g7);
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(148)
			int _g8 = this->i->readInt24();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(148)
			return ::format::abc::OpCode_obj::OJump(::format::abc::JumpStyle_obj::JNotLte,_g8);
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(150)
			int _g9 = this->i->readInt24();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(150)
			return ::format::abc::OpCode_obj::OJump(::format::abc::JumpStyle_obj::JNotGt,_g9);
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(152)
			int _g10 = this->i->readInt24();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(152)
			return ::format::abc::OpCode_obj::OJump(::format::abc::JumpStyle_obj::JNotGte,_g10);
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(154)
			int _g11 = this->i->readInt24();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(154)
			return ::format::abc::OpCode_obj::OJump(::format::abc::JumpStyle_obj::JAlways,_g11);
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(156)
			int _g12 = this->i->readInt24();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(156)
			return ::format::abc::OpCode_obj::OJump(::format::abc::JumpStyle_obj::JTrue,_g12);
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(158)
			int _g13 = this->i->readInt24();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(158)
			return ::format::abc::OpCode_obj::OJump(::format::abc::JumpStyle_obj::JFalse,_g13);
		}
		;break;
		case (int)19: {
			HX_STACK_LINE(160)
			int _g14 = this->i->readInt24();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(160)
			return ::format::abc::OpCode_obj::OJump(::format::abc::JumpStyle_obj::JEq,_g14);
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(162)
			int _g15 = this->i->readInt24();		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(162)
			return ::format::abc::OpCode_obj::OJump(::format::abc::JumpStyle_obj::JNeq,_g15);
		}
		;break;
		case (int)21: {
			HX_STACK_LINE(164)
			int _g16 = this->i->readInt24();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(164)
			return ::format::abc::OpCode_obj::OJump(::format::abc::JumpStyle_obj::JLt,_g16);
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(166)
			int _g17 = this->i->readInt24();		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(166)
			return ::format::abc::OpCode_obj::OJump(::format::abc::JumpStyle_obj::JLte,_g17);
		}
		;break;
		case (int)23: {
			HX_STACK_LINE(168)
			int _g18 = this->i->readInt24();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(168)
			return ::format::abc::OpCode_obj::OJump(::format::abc::JumpStyle_obj::JGt,_g18);
		}
		;break;
		case (int)24: {
			HX_STACK_LINE(170)
			int _g19 = this->i->readInt24();		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(170)
			return ::format::abc::OpCode_obj::OJump(::format::abc::JumpStyle_obj::JGte,_g19);
		}
		;break;
		case (int)25: {
			HX_STACK_LINE(172)
			int _g20 = this->i->readInt24();		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(172)
			return ::format::abc::OpCode_obj::OJump(::format::abc::JumpStyle_obj::JPhysEq,_g20);
		}
		;break;
		case (int)26: {
			HX_STACK_LINE(174)
			int _g21 = this->i->readInt24();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(174)
			return ::format::abc::OpCode_obj::OJump(::format::abc::JumpStyle_obj::JPhysNeq,_g21);
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(176)
			int def = this->i->readInt24();		HX_STACK_VAR(def,"def");
			HX_STACK_LINE(177)
			Array< int > cases = Array_obj< int >::__new();		HX_STACK_VAR(cases,"cases");
			HX_STACK_LINE(178)
			{
				HX_STACK_LINE(178)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(178)
				int _g22 = this->readInt();		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(178)
				int _g = (_g22 + (int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(178)
				while((true)){
					HX_STACK_LINE(178)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(178)
						break;
					}
					HX_STACK_LINE(178)
					int _ = (_g1)++;		HX_STACK_VAR(_,"_");
					HX_STACK_LINE(179)
					int _g23 = this->i->readInt24();		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(179)
					cases->push(_g23);
				}
			}
			HX_STACK_LINE(180)
			return ::format::abc::OpCode_obj::OSwitch(def,cases);
		}
		;break;
		case (int)28: {
			HX_STACK_LINE(182)
			return ::format::abc::OpCode_obj::OPushWith;
		}
		;break;
		case (int)29: {
			HX_STACK_LINE(184)
			return ::format::abc::OpCode_obj::OPopScope;
		}
		;break;
		case (int)30: {
			HX_STACK_LINE(186)
			return ::format::abc::OpCode_obj::OForIn;
		}
		;break;
		case (int)31: {
			HX_STACK_LINE(188)
			return ::format::abc::OpCode_obj::OHasNext;
		}
		;break;
		case (int)32: {
			HX_STACK_LINE(190)
			return ::format::abc::OpCode_obj::ONull;
		}
		;break;
		case (int)33: {
			HX_STACK_LINE(192)
			return ::format::abc::OpCode_obj::OUndefined;
		}
		;break;
		case (int)35: {
			HX_STACK_LINE(194)
			return ::format::abc::OpCode_obj::OForEach;
		}
		;break;
		case (int)36: {
			HX_STACK_LINE(196)
			int _g24 = this->i->readInt8();		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(196)
			return ::format::abc::OpCode_obj::OSmallInt(_g24);
		}
		;break;
		case (int)37: {
			HX_STACK_LINE(198)
			int _g25 = this->readInt();		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(198)
			return ::format::abc::OpCode_obj::OInt(_g25);
		}
		;break;
		case (int)38: {
			HX_STACK_LINE(200)
			return ::format::abc::OpCode_obj::OTrue;
		}
		;break;
		case (int)39: {
			HX_STACK_LINE(202)
			return ::format::abc::OpCode_obj::OFalse;
		}
		;break;
		case (int)40: {
			HX_STACK_LINE(204)
			return ::format::abc::OpCode_obj::ONaN;
		}
		;break;
		case (int)41: {
			HX_STACK_LINE(206)
			return ::format::abc::OpCode_obj::OPop;
		}
		;break;
		case (int)42: {
			HX_STACK_LINE(208)
			return ::format::abc::OpCode_obj::ODup;
		}
		;break;
		case (int)43: {
			HX_STACK_LINE(210)
			return ::format::abc::OpCode_obj::OSwap;
		}
		;break;
		case (int)44: {
			HX_STACK_LINE(212)
			int _g26 = this->readInt();		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(212)
			::format::abc::Index _g27 = ::format::abc::Index_obj::Idx(_g26);		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(212)
			return ::format::abc::OpCode_obj::OString(_g27);
		}
		;break;
		case (int)45: {
			HX_STACK_LINE(214)
			int _g28 = this->readInt();		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(214)
			::format::abc::Index _g29 = ::format::abc::Index_obj::Idx(_g28);		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(214)
			return ::format::abc::OpCode_obj::OIntRef(_g29);
		}
		;break;
		case (int)46: {
			HX_STACK_LINE(216)
			int _g30 = this->readInt();		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(216)
			::format::abc::Index _g31 = ::format::abc::Index_obj::Idx(_g30);		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(216)
			return ::format::abc::OpCode_obj::OUIntRef(_g31);
		}
		;break;
		case (int)47: {
			HX_STACK_LINE(218)
			int _g32 = this->readInt();		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(218)
			::format::abc::Index _g33 = ::format::abc::Index_obj::Idx(_g32);		HX_STACK_VAR(_g33,"_g33");
			HX_STACK_LINE(218)
			return ::format::abc::OpCode_obj::OFloat(_g33);
		}
		;break;
		case (int)48: {
			HX_STACK_LINE(220)
			return ::format::abc::OpCode_obj::OScope;
		}
		;break;
		case (int)49: {
			HX_STACK_LINE(222)
			int _g34 = this->readInt();		HX_STACK_VAR(_g34,"_g34");
			HX_STACK_LINE(222)
			::format::abc::Index _g35 = ::format::abc::Index_obj::Idx(_g34);		HX_STACK_VAR(_g35,"_g35");
			HX_STACK_LINE(222)
			return ::format::abc::OpCode_obj::ONamespace(_g35);
		}
		;break;
		case (int)50: {
			HX_STACK_LINE(224)
			int r1 = this->readInt();		HX_STACK_VAR(r1,"r1");
			HX_STACK_LINE(225)
			int r2 = this->readInt();		HX_STACK_VAR(r2,"r2");
			HX_STACK_LINE(226)
			return ::format::abc::OpCode_obj::ONext(r1,r2);
		}
		;break;
		case (int)53: {
			HX_STACK_LINE(228)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpMemGet8);
		}
		;break;
		case (int)54: {
			HX_STACK_LINE(230)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpMemGet16);
		}
		;break;
		case (int)55: {
			HX_STACK_LINE(232)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpMemGet32);
		}
		;break;
		case (int)56: {
			HX_STACK_LINE(234)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpMemGetFloat);
		}
		;break;
		case (int)57: {
			HX_STACK_LINE(236)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpMemGetDouble);
		}
		;break;
		case (int)58: {
			HX_STACK_LINE(238)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpMemSet8);
		}
		;break;
		case (int)59: {
			HX_STACK_LINE(240)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpMemSet16);
		}
		;break;
		case (int)60: {
			HX_STACK_LINE(242)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpMemSet32);
		}
		;break;
		case (int)61: {
			HX_STACK_LINE(244)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpMemSetFloat);
		}
		;break;
		case (int)62: {
			HX_STACK_LINE(246)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpMemSetDouble);
		}
		;break;
		case (int)64: {
			HX_STACK_LINE(248)
			int _g36 = this->readInt();		HX_STACK_VAR(_g36,"_g36");
			HX_STACK_LINE(248)
			::format::abc::Index _g37 = ::format::abc::Index_obj::Idx(_g36);		HX_STACK_VAR(_g37,"_g37");
			HX_STACK_LINE(248)
			return ::format::abc::OpCode_obj::OFunction(_g37);
		}
		;break;
		case (int)65: {
			HX_STACK_LINE(250)
			int _g38 = this->readInt();		HX_STACK_VAR(_g38,"_g38");
			HX_STACK_LINE(250)
			return ::format::abc::OpCode_obj::OCallStack(_g38);
		}
		;break;
		case (int)66: {
			HX_STACK_LINE(252)
			int _g39 = this->readInt();		HX_STACK_VAR(_g39,"_g39");
			HX_STACK_LINE(252)
			return ::format::abc::OpCode_obj::OConstruct(_g39);
		}
		;break;
		case (int)67: {
			HX_STACK_LINE(254)
			int s = this->readInt();		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(255)
			int n = this->readInt();		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(256)
			return ::format::abc::OpCode_obj::OCallMethod(s,n);
		}
		;break;
		case (int)68: {
			HX_STACK_LINE(258)
			int _g40 = this->readInt();		HX_STACK_VAR(_g40,"_g40");
			HX_STACK_LINE(258)
			::format::abc::Index m = ::format::abc::Index_obj::Idx(_g40);		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(259)
			int n = this->readInt();		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(260)
			return ::format::abc::OpCode_obj::OCallStatic(m,n);
		}
		;break;
		case (int)69: {
			HX_STACK_LINE(262)
			int _g41 = this->readInt();		HX_STACK_VAR(_g41,"_g41");
			HX_STACK_LINE(262)
			::format::abc::Index p = ::format::abc::Index_obj::Idx(_g41);		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(263)
			int n = this->readInt();		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(264)
			return ::format::abc::OpCode_obj::OCallSuper(p,n);
		}
		;break;
		case (int)70: {
			HX_STACK_LINE(266)
			int _g42 = this->readInt();		HX_STACK_VAR(_g42,"_g42");
			HX_STACK_LINE(266)
			::format::abc::Index p = ::format::abc::Index_obj::Idx(_g42);		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(267)
			int n = this->readInt();		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(268)
			return ::format::abc::OpCode_obj::OCallProperty(p,n);
		}
		;break;
		case (int)71: {
			HX_STACK_LINE(270)
			return ::format::abc::OpCode_obj::ORetVoid;
		}
		;break;
		case (int)72: {
			HX_STACK_LINE(272)
			return ::format::abc::OpCode_obj::ORet;
		}
		;break;
		case (int)73: {
			HX_STACK_LINE(274)
			int _g43 = this->readInt();		HX_STACK_VAR(_g43,"_g43");
			HX_STACK_LINE(274)
			return ::format::abc::OpCode_obj::OConstructSuper(_g43);
		}
		;break;
		case (int)74: {
			HX_STACK_LINE(276)
			int _g44 = this->readInt();		HX_STACK_VAR(_g44,"_g44");
			HX_STACK_LINE(276)
			::format::abc::Index p = ::format::abc::Index_obj::Idx(_g44);		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(277)
			int n = this->readInt();		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(278)
			return ::format::abc::OpCode_obj::OConstructProperty(p,n);
		}
		;break;
		case (int)76: {
			HX_STACK_LINE(280)
			int _g45 = this->readInt();		HX_STACK_VAR(_g45,"_g45");
			HX_STACK_LINE(280)
			::format::abc::Index p = ::format::abc::Index_obj::Idx(_g45);		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(281)
			int n = this->readInt();		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(282)
			return ::format::abc::OpCode_obj::OCallPropLex(p,n);
		}
		;break;
		case (int)78: {
			HX_STACK_LINE(284)
			int _g46 = this->readInt();		HX_STACK_VAR(_g46,"_g46");
			HX_STACK_LINE(284)
			::format::abc::Index p = ::format::abc::Index_obj::Idx(_g46);		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(285)
			int n = this->readInt();		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(286)
			return ::format::abc::OpCode_obj::OCallSuperVoid(p,n);
		}
		;break;
		case (int)79: {
			HX_STACK_LINE(288)
			int _g47 = this->readInt();		HX_STACK_VAR(_g47,"_g47");
			HX_STACK_LINE(288)
			::format::abc::Index p = ::format::abc::Index_obj::Idx(_g47);		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(289)
			int n = this->readInt();		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(290)
			return ::format::abc::OpCode_obj::OCallPropVoid(p,n);
		}
		;break;
		case (int)80: {
			HX_STACK_LINE(292)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpSign1);
		}
		;break;
		case (int)81: {
			HX_STACK_LINE(294)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpSign8);
		}
		;break;
		case (int)82: {
			HX_STACK_LINE(296)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpSign16);
		}
		;break;
		case (int)83: {
			HX_STACK_LINE(298)
			int _g48 = this->readInt();		HX_STACK_VAR(_g48,"_g48");
			HX_STACK_LINE(298)
			return ::format::abc::OpCode_obj::OApplyType(_g48);
		}
		;break;
		case (int)85: {
			HX_STACK_LINE(300)
			int _g49 = this->readInt();		HX_STACK_VAR(_g49,"_g49");
			HX_STACK_LINE(300)
			return ::format::abc::OpCode_obj::OObject(_g49);
		}
		;break;
		case (int)86: {
			HX_STACK_LINE(302)
			int _g50 = this->readInt();		HX_STACK_VAR(_g50,"_g50");
			HX_STACK_LINE(302)
			return ::format::abc::OpCode_obj::OArray(_g50);
		}
		;break;
		case (int)87: {
			HX_STACK_LINE(304)
			return ::format::abc::OpCode_obj::ONewBlock;
		}
		;break;
		case (int)88: {
			HX_STACK_LINE(306)
			int _g51 = this->readInt();		HX_STACK_VAR(_g51,"_g51");
			HX_STACK_LINE(306)
			::format::abc::Index _g52 = ::format::abc::Index_obj::Idx(_g51);		HX_STACK_VAR(_g52,"_g52");
			HX_STACK_LINE(306)
			return ::format::abc::OpCode_obj::OClassDef(_g52);
		}
		;break;
		case (int)89: {
			HX_STACK_LINE(308)
			int _g53 = this->readInt();		HX_STACK_VAR(_g53,"_g53");
			HX_STACK_LINE(308)
			::format::abc::Index _g54 = ::format::abc::Index_obj::Idx(_g53);		HX_STACK_VAR(_g54,"_g54");
			HX_STACK_LINE(308)
			return ::format::abc::OpCode_obj::OGetDescendants(_g54);
		}
		;break;
		case (int)90: {
			HX_STACK_LINE(310)
			int _g55 = this->readInt();		HX_STACK_VAR(_g55,"_g55");
			HX_STACK_LINE(310)
			return ::format::abc::OpCode_obj::OCatch(_g55);
		}
		;break;
		case (int)93: {
			HX_STACK_LINE(312)
			int _g56 = this->readInt();		HX_STACK_VAR(_g56,"_g56");
			HX_STACK_LINE(312)
			::format::abc::Index _g57 = ::format::abc::Index_obj::Idx(_g56);		HX_STACK_VAR(_g57,"_g57");
			HX_STACK_LINE(312)
			return ::format::abc::OpCode_obj::OFindPropStrict(_g57);
		}
		;break;
		case (int)94: {
			HX_STACK_LINE(314)
			int _g58 = this->readInt();		HX_STACK_VAR(_g58,"_g58");
			HX_STACK_LINE(314)
			::format::abc::Index _g59 = ::format::abc::Index_obj::Idx(_g58);		HX_STACK_VAR(_g59,"_g59");
			HX_STACK_LINE(314)
			return ::format::abc::OpCode_obj::OFindProp(_g59);
		}
		;break;
		case (int)95: {
			HX_STACK_LINE(316)
			int _g60 = this->readInt();		HX_STACK_VAR(_g60,"_g60");
			HX_STACK_LINE(316)
			::format::abc::Index _g61 = ::format::abc::Index_obj::Idx(_g60);		HX_STACK_VAR(_g61,"_g61");
			HX_STACK_LINE(316)
			return ::format::abc::OpCode_obj::OFindDefinition(_g61);
		}
		;break;
		case (int)96: {
			HX_STACK_LINE(318)
			int _g62 = this->readInt();		HX_STACK_VAR(_g62,"_g62");
			HX_STACK_LINE(318)
			::format::abc::Index _g63 = ::format::abc::Index_obj::Idx(_g62);		HX_STACK_VAR(_g63,"_g63");
			HX_STACK_LINE(318)
			return ::format::abc::OpCode_obj::OGetLex(_g63);
		}
		;break;
		case (int)97: {
			HX_STACK_LINE(320)
			int _g64 = this->readInt();		HX_STACK_VAR(_g64,"_g64");
			HX_STACK_LINE(320)
			::format::abc::Index _g65 = ::format::abc::Index_obj::Idx(_g64);		HX_STACK_VAR(_g65,"_g65");
			HX_STACK_LINE(320)
			return ::format::abc::OpCode_obj::OSetProp(_g65);
		}
		;break;
		case (int)98: {
			HX_STACK_LINE(322)
			int _g66 = this->i->readByte();		HX_STACK_VAR(_g66,"_g66");
			HX_STACK_LINE(322)
			return ::format::abc::OpCode_obj::OReg(_g66);
		}
		;break;
		case (int)99: {
			HX_STACK_LINE(324)
			int _g67 = this->i->readByte();		HX_STACK_VAR(_g67,"_g67");
			HX_STACK_LINE(324)
			return ::format::abc::OpCode_obj::OSetReg(_g67);
		}
		;break;
		case (int)100: {
			HX_STACK_LINE(326)
			return ::format::abc::OpCode_obj::OGetGlobalScope;
		}
		;break;
		case (int)101: {
			HX_STACK_LINE(328)
			int _g68 = this->i->readByte();		HX_STACK_VAR(_g68,"_g68");
			HX_STACK_LINE(328)
			return ::format::abc::OpCode_obj::OGetScope(_g68);
		}
		;break;
		case (int)102: {
			HX_STACK_LINE(330)
			int _g69 = this->readInt();		HX_STACK_VAR(_g69,"_g69");
			HX_STACK_LINE(330)
			::format::abc::Index _g70 = ::format::abc::Index_obj::Idx(_g69);		HX_STACK_VAR(_g70,"_g70");
			HX_STACK_LINE(330)
			return ::format::abc::OpCode_obj::OGetProp(_g70);
		}
		;break;
		case (int)104: {
			HX_STACK_LINE(332)
			int _g71 = this->readInt();		HX_STACK_VAR(_g71,"_g71");
			HX_STACK_LINE(332)
			::format::abc::Index _g72 = ::format::abc::Index_obj::Idx(_g71);		HX_STACK_VAR(_g72,"_g72");
			HX_STACK_LINE(332)
			return ::format::abc::OpCode_obj::OInitProp(_g72);
		}
		;break;
		case (int)106: {
			HX_STACK_LINE(334)
			int _g73 = this->readInt();		HX_STACK_VAR(_g73,"_g73");
			HX_STACK_LINE(334)
			::format::abc::Index _g74 = ::format::abc::Index_obj::Idx(_g73);		HX_STACK_VAR(_g74,"_g74");
			HX_STACK_LINE(334)
			return ::format::abc::OpCode_obj::ODeleteProp(_g74);
		}
		;break;
		case (int)108: {
			HX_STACK_LINE(336)
			int _g75 = this->readInt();		HX_STACK_VAR(_g75,"_g75");
			HX_STACK_LINE(336)
			return ::format::abc::OpCode_obj::OGetSlot(_g75);
		}
		;break;
		case (int)109: {
			HX_STACK_LINE(338)
			int _g76 = this->readInt();		HX_STACK_VAR(_g76,"_g76");
			HX_STACK_LINE(338)
			return ::format::abc::OpCode_obj::OSetSlot(_g76);
		}
		;break;
		case (int)112: {
			HX_STACK_LINE(340)
			return ::format::abc::OpCode_obj::OToString;
		}
		;break;
		case (int)113: {
			HX_STACK_LINE(342)
			return ::format::abc::OpCode_obj::OToXml;
		}
		;break;
		case (int)114: {
			HX_STACK_LINE(344)
			return ::format::abc::OpCode_obj::OToXmlAttr;
		}
		;break;
		case (int)115: {
			HX_STACK_LINE(346)
			return ::format::abc::OpCode_obj::OToInt;
		}
		;break;
		case (int)116: {
			HX_STACK_LINE(348)
			return ::format::abc::OpCode_obj::OToUInt;
		}
		;break;
		case (int)117: {
			HX_STACK_LINE(350)
			return ::format::abc::OpCode_obj::OToNumber;
		}
		;break;
		case (int)118: {
			HX_STACK_LINE(352)
			return ::format::abc::OpCode_obj::OToBool;
		}
		;break;
		case (int)119: {
			HX_STACK_LINE(354)
			return ::format::abc::OpCode_obj::OToObject;
		}
		;break;
		case (int)120: {
			HX_STACK_LINE(356)
			return ::format::abc::OpCode_obj::OCheckIsXml;
		}
		;break;
		case (int)128: {
			HX_STACK_LINE(358)
			int _g77 = this->readInt();		HX_STACK_VAR(_g77,"_g77");
			HX_STACK_LINE(358)
			::format::abc::Index _g78 = ::format::abc::Index_obj::Idx(_g77);		HX_STACK_VAR(_g78,"_g78");
			HX_STACK_LINE(358)
			return ::format::abc::OpCode_obj::OCast(_g78);
		}
		;break;
		case (int)130: {
			HX_STACK_LINE(360)
			return ::format::abc::OpCode_obj::OAsAny;
		}
		;break;
		case (int)133: {
			HX_STACK_LINE(362)
			return ::format::abc::OpCode_obj::OAsString;
		}
		;break;
		case (int)134: {
			HX_STACK_LINE(364)
			int _g79 = this->readInt();		HX_STACK_VAR(_g79,"_g79");
			HX_STACK_LINE(364)
			::format::abc::Index _g80 = ::format::abc::Index_obj::Idx(_g79);		HX_STACK_VAR(_g80,"_g80");
			HX_STACK_LINE(364)
			return ::format::abc::OpCode_obj::OAsType(_g80);
		}
		;break;
		case (int)135: {
			HX_STACK_LINE(366)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpAs);
		}
		;break;
		case (int)137: {
			HX_STACK_LINE(368)
			return ::format::abc::OpCode_obj::OAsObject;
		}
		;break;
		case (int)144: {
			HX_STACK_LINE(370)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpNeg);
		}
		;break;
		case (int)145: {
			HX_STACK_LINE(372)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpIncr);
		}
		;break;
		case (int)146: {
			HX_STACK_LINE(374)
			int _g81 = this->i->readByte();		HX_STACK_VAR(_g81,"_g81");
			HX_STACK_LINE(374)
			return ::format::abc::OpCode_obj::OIncrReg(_g81);
		}
		;break;
		case (int)147: {
			HX_STACK_LINE(376)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpDecr);
		}
		;break;
		case (int)148: {
			HX_STACK_LINE(378)
			int _g82 = this->i->readByte();		HX_STACK_VAR(_g82,"_g82");
			HX_STACK_LINE(378)
			return ::format::abc::OpCode_obj::ODecrReg(_g82);
		}
		;break;
		case (int)149: {
			HX_STACK_LINE(380)
			return ::format::abc::OpCode_obj::OTypeof;
		}
		;break;
		case (int)150: {
			HX_STACK_LINE(382)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpNot);
		}
		;break;
		case (int)151: {
			HX_STACK_LINE(384)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpBitNot);
		}
		;break;
		case (int)160: {
			HX_STACK_LINE(386)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpAdd);
		}
		;break;
		case (int)161: {
			HX_STACK_LINE(388)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpSub);
		}
		;break;
		case (int)162: {
			HX_STACK_LINE(390)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpMul);
		}
		;break;
		case (int)163: {
			HX_STACK_LINE(392)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpDiv);
		}
		;break;
		case (int)164: {
			HX_STACK_LINE(394)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpMod);
		}
		;break;
		case (int)165: {
			HX_STACK_LINE(396)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpShl);
		}
		;break;
		case (int)166: {
			HX_STACK_LINE(398)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpShr);
		}
		;break;
		case (int)167: {
			HX_STACK_LINE(400)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpUShr);
		}
		;break;
		case (int)168: {
			HX_STACK_LINE(402)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpAnd);
		}
		;break;
		case (int)169: {
			HX_STACK_LINE(404)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpOr);
		}
		;break;
		case (int)170: {
			HX_STACK_LINE(406)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpXor);
		}
		;break;
		case (int)171: {
			HX_STACK_LINE(408)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpEq);
		}
		;break;
		case (int)172: {
			HX_STACK_LINE(410)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpPhysEq);
		}
		;break;
		case (int)173: {
			HX_STACK_LINE(412)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpLt);
		}
		;break;
		case (int)174: {
			HX_STACK_LINE(414)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpLte);
		}
		;break;
		case (int)175: {
			HX_STACK_LINE(416)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpGt);
		}
		;break;
		case (int)176: {
			HX_STACK_LINE(418)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpGte);
		}
		;break;
		case (int)177: {
			HX_STACK_LINE(420)
			return ::format::abc::OpCode_obj::OInstanceOf;
		}
		;break;
		case (int)178: {
			HX_STACK_LINE(422)
			int _g83 = this->readInt();		HX_STACK_VAR(_g83,"_g83");
			HX_STACK_LINE(422)
			::format::abc::Index _g84 = ::format::abc::Index_obj::Idx(_g83);		HX_STACK_VAR(_g84,"_g84");
			HX_STACK_LINE(422)
			return ::format::abc::OpCode_obj::OIsType(_g84);
		}
		;break;
		case (int)179: {
			HX_STACK_LINE(424)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpIs);
		}
		;break;
		case (int)180: {
			HX_STACK_LINE(426)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpIn);
		}
		;break;
		case (int)192: {
			HX_STACK_LINE(428)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpIIncr);
		}
		;break;
		case (int)193: {
			HX_STACK_LINE(430)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpIDecr);
		}
		;break;
		case (int)194: {
			HX_STACK_LINE(432)
			int _g85 = this->i->readByte();		HX_STACK_VAR(_g85,"_g85");
			HX_STACK_LINE(432)
			return ::format::abc::OpCode_obj::OIncrIReg(_g85);
		}
		;break;
		case (int)195: {
			HX_STACK_LINE(434)
			int _g86 = this->i->readByte();		HX_STACK_VAR(_g86,"_g86");
			HX_STACK_LINE(434)
			return ::format::abc::OpCode_obj::ODecrIReg(_g86);
		}
		;break;
		case (int)196: {
			HX_STACK_LINE(436)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpINeg);
		}
		;break;
		case (int)197: {
			HX_STACK_LINE(438)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpIAdd);
		}
		;break;
		case (int)198: {
			HX_STACK_LINE(440)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpISub);
		}
		;break;
		case (int)199: {
			HX_STACK_LINE(442)
			return ::format::abc::OpCode_obj::OOp(::format::abc::Operation_obj::OpIMul);
		}
		;break;
		case (int)208: {
			HX_STACK_LINE(444)
			return ::format::abc::OpCode_obj::OThis;
		}
		;break;
		case (int)209: {
			HX_STACK_LINE(446)
			return ::format::abc::OpCode_obj::OReg((int)1);
		}
		;break;
		case (int)210: {
			HX_STACK_LINE(448)
			return ::format::abc::OpCode_obj::OReg((int)2);
		}
		;break;
		case (int)211: {
			HX_STACK_LINE(450)
			return ::format::abc::OpCode_obj::OReg((int)3);
		}
		;break;
		case (int)212: {
			HX_STACK_LINE(452)
			return ::format::abc::OpCode_obj::OSetThis;
		}
		;break;
		case (int)213: {
			HX_STACK_LINE(454)
			return ::format::abc::OpCode_obj::OSetReg((int)1);
		}
		;break;
		case (int)214: {
			HX_STACK_LINE(456)
			return ::format::abc::OpCode_obj::OSetReg((int)2);
		}
		;break;
		case (int)215: {
			HX_STACK_LINE(458)
			return ::format::abc::OpCode_obj::OSetReg((int)3);
		}
		;break;
		case (int)239: {
			HX_STACK_LINE(460)
			int _g87 = this->i->readByte();		HX_STACK_VAR(_g87,"_g87");
			HX_STACK_LINE(460)
			if (((_g87 != (int)1))){
				HX_STACK_LINE(460)
				HX_STACK_DO_THROW(HX_CSTRING("assert"));
			}
			HX_STACK_LINE(461)
			int _g88 = this->readInt();		HX_STACK_VAR(_g88,"_g88");
			HX_STACK_LINE(461)
			::format::abc::Index name = ::format::abc::Index_obj::Idx(_g88);		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(462)
			int r = this->i->readByte();		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(463)
			int line = this->readInt();		HX_STACK_VAR(line,"line");
			HX_STACK_LINE(464)
			return ::format::abc::OpCode_obj::ODebugReg(name,r,line);
		}
		;break;
		case (int)240: {
			HX_STACK_LINE(466)
			int _g89 = this->readInt();		HX_STACK_VAR(_g89,"_g89");
			HX_STACK_LINE(466)
			return ::format::abc::OpCode_obj::ODebugLine(_g89);
		}
		;break;
		case (int)241: {
			HX_STACK_LINE(468)
			int _g90 = this->readInt();		HX_STACK_VAR(_g90,"_g90");
			HX_STACK_LINE(468)
			::format::abc::Index _g91 = ::format::abc::Index_obj::Idx(_g90);		HX_STACK_VAR(_g91,"_g91");
			HX_STACK_LINE(468)
			return ::format::abc::OpCode_obj::ODebugFile(_g91);
		}
		;break;
		case (int)242: {
			HX_STACK_LINE(470)
			int _g92 = this->readInt();		HX_STACK_VAR(_g92,"_g92");
			HX_STACK_LINE(470)
			return ::format::abc::OpCode_obj::OBreakPointLine(_g92);
		}
		;break;
		case (int)243: {
			HX_STACK_LINE(472)
			return ::format::abc::OpCode_obj::OTimestamp;
		}
		;break;
		default: {
			HX_STACK_LINE(474)
			return ::format::abc::OpCode_obj::OUnknown(op);
		}
	}
	HX_STACK_LINE(126)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OpReader_obj,readOp,return )

Array< ::Dynamic > OpReader_obj::decode( ::haxe::io::Input i){
	HX_STACK_FRAME("format.abc.OpReader","decode",0x7a650435,"format.abc.OpReader.decode","format/abc/OpReader.hx",478,0x9d17c955)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(479)
	::format::abc::OpReader opr = ::format::abc::OpReader_obj::__new(i);		HX_STACK_VAR(opr,"opr");
	HX_STACK_LINE(480)
	Array< ::Dynamic > ops = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(ops,"ops");
	HX_STACK_LINE(481)
	while((true)){
		HX_STACK_LINE(482)
		int op;		HX_STACK_VAR(op,"op");
		HX_STACK_LINE(484)
		try
		{
		HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
		{
			HX_STACK_LINE(484)
			int _g = i->readByte();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(484)
			op = _g;
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::haxe::io::Eof >() ){
				HX_STACK_BEGIN_CATCH
				::haxe::io::Eof e = __e;{
					HX_STACK_LINE(484)
					break;
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
		HX_STACK_LINE(485)
		::format::abc::OpCode _g1 = opr->readOp(op);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(485)
		ops->push(_g1);
	}
	HX_STACK_LINE(487)
	return ops;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpReader_obj,decode,return )


OpReader_obj::OpReader_obj()
{
}

void OpReader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OpReader);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_END_CLASS();
}

void OpReader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
}

Dynamic OpReader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"reg") ) { return reg_dyn(); }
		if (HX_FIELD_EQ(inName,"jmp") ) { return jmp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { return decode_dyn(); }
		if (HX_FIELD_EQ(inName,"readOp") ) { return readOp_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readIndex") ) { return readIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt32") ) { return readInt32_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OpReader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< ::haxe::io::Input >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpReader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("i"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("decode"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(OpReader_obj,i),HX_CSTRING("i")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("i"),
	HX_CSTRING("readInt"),
	HX_CSTRING("readIndex"),
	HX_CSTRING("readInt32"),
	HX_CSTRING("reg"),
	HX_CSTRING("jmp"),
	HX_CSTRING("readOp"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpReader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpReader_obj::__mClass,"__mClass");
};

#endif

Class OpReader_obj::__mClass;

void OpReader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.abc.OpReader"), hx::TCanCast< OpReader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void OpReader_obj::__boot()
{
}

} // end namespace format
} // end namespace abc
