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
#ifndef INCLUDED_format_abc_OpWriter
#include <format/abc/OpWriter.h>
#endif
#ifndef INCLUDED_format_abc_Operation
#include <format/abc/Operation.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
namespace format{
namespace abc{

Void OpWriter_obj::__construct(::haxe::io::Output o)
{
HX_STACK_FRAME("format.abc.OpWriter","new",0xe9aa3869,"format.abc.OpWriter.new","format/abc/OpWriter.hx",36,0x55c01de5)
HX_STACK_THIS(this)
HX_STACK_ARG(o,"o")
{
	HX_STACK_LINE(36)
	this->o = o;
}
;
	return null();
}

//OpWriter_obj::~OpWriter_obj() { }

Dynamic OpWriter_obj::__CreateEmpty() { return  new OpWriter_obj; }
hx::ObjectPtr< OpWriter_obj > OpWriter_obj::__new(::haxe::io::Output o)
{  hx::ObjectPtr< OpWriter_obj > result = new OpWriter_obj();
	result->__construct(o);
	return result;}

Dynamic OpWriter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpWriter_obj > result = new OpWriter_obj();
	result->__construct(inArgs[0]);
	return result;}

Void OpWriter_obj::writeInt( int n){
{
		HX_STACK_FRAME("format.abc.OpWriter","writeInt",0x599744a7,"format.abc.OpWriter.writeInt","format/abc/OpWriter.hx",39,0x55c01de5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(40)
		int e = hx::UShr(n,(int)28);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(41)
		int d = (int((int(n) >> int((int)21))) & int((int)127));		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(42)
		int c = (int((int(n) >> int((int)14))) & int((int)127));		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(43)
		int b = (int((int(n) >> int((int)7))) & int((int)127));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(44)
		int a = (int(n) & int((int)127));		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(45)
		if (((bool((bool((bool((b != (int)0)) || bool((c != (int)0)))) || bool((d != (int)0)))) || bool((e != (int)0))))){
			HX_STACK_LINE(46)
			this->o->writeByte((int(a) | int((int)128)));
			HX_STACK_LINE(47)
			if (((bool((bool((c != (int)0)) || bool((d != (int)0)))) || bool((e != (int)0))))){
				HX_STACK_LINE(48)
				this->o->writeByte((int(b) | int((int)128)));
				HX_STACK_LINE(49)
				if (((bool((d != (int)0)) || bool((e != (int)0))))){
					HX_STACK_LINE(50)
					this->o->writeByte((int(c) | int((int)128)));
					HX_STACK_LINE(51)
					if (((e != (int)0))){
						HX_STACK_LINE(52)
						this->o->writeByte((int(d) | int((int)128)));
						HX_STACK_LINE(53)
						this->o->writeByte(e);
					}
					else{
						HX_STACK_LINE(55)
						this->o->writeByte(d);
					}
				}
				else{
					HX_STACK_LINE(57)
					this->o->writeByte(c);
				}
			}
			else{
				HX_STACK_LINE(59)
				this->o->writeByte(b);
			}
		}
		else{
			HX_STACK_LINE(61)
			this->o->writeByte(a);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OpWriter_obj,writeInt,(void))

Void OpWriter_obj::writeInt32( int n){
{
		HX_STACK_FRAME("format.abc.OpWriter","writeInt32",0x616f2906,"format.abc.OpWriter.writeInt32","format/abc/OpWriter.hx",65,0x55c01de5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(66)
		int e = hx::UShr(n,(int)28);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(67)
		int d = (int((int(n) >> int((int)21))) & int((int)127));		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(68)
		int c = (int((int(n) >> int((int)14))) & int((int)127));		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(69)
		int b = (int((int(n) >> int((int)7))) & int((int)127));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(70)
		int a = (int(n) & int((int)127));		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(71)
		if (((bool((bool((bool((b != (int)0)) || bool((c != (int)0)))) || bool((d != (int)0)))) || bool((e != (int)0))))){
			HX_STACK_LINE(72)
			this->o->writeByte((int(a) | int((int)128)));
			HX_STACK_LINE(73)
			if (((bool((bool((c != (int)0)) || bool((d != (int)0)))) || bool((e != (int)0))))){
				HX_STACK_LINE(74)
				this->o->writeByte((int(b) | int((int)128)));
				HX_STACK_LINE(75)
				if (((bool((d != (int)0)) || bool((e != (int)0))))){
					HX_STACK_LINE(76)
					this->o->writeByte((int(c) | int((int)128)));
					HX_STACK_LINE(77)
					if (((e != (int)0))){
						HX_STACK_LINE(78)
						this->o->writeByte((int(d) | int((int)128)));
						HX_STACK_LINE(79)
						this->o->writeByte(e);
					}
					else{
						HX_STACK_LINE(81)
						this->o->writeByte(d);
					}
				}
				else{
					HX_STACK_LINE(83)
					this->o->writeByte(c);
				}
			}
			else{
				HX_STACK_LINE(85)
				this->o->writeByte(b);
			}
		}
		else{
			HX_STACK_LINE(87)
			this->o->writeByte(a);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OpWriter_obj,writeInt32,(void))

Void OpWriter_obj::_int( int i){
{
		HX_STACK_FRAME("format.abc.OpWriter","int",0xe9a674f8,"format.abc.OpWriter.int","format/abc/OpWriter.hx",118,0x55c01de5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(118)
		this->writeInt(i);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OpWriter_obj,_int,(void))

Void OpWriter_obj::b( int v){
{
		HX_STACK_FRAME("format.abc.OpWriter","b",0x946f242b,"format.abc.OpWriter.b","format/abc/OpWriter.hx",122,0x55c01de5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(122)
		this->o->writeByte(v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OpWriter_obj,b,(void))

Void OpWriter_obj::reg( int v){
{
		HX_STACK_FRAME("format.abc.OpWriter","reg",0xe9ad415d,"format.abc.OpWriter.reg","format/abc/OpWriter.hx",126,0x55c01de5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(126)
		this->o->writeByte(v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OpWriter_obj,reg,(void))

Void OpWriter_obj::idx( ::format::abc::Index i){
{
		HX_STACK_FRAME("format.abc.OpWriter","idx",0xe9a66c46,"format.abc.OpWriter.idx","format/abc/OpWriter.hx",130,0x55c01de5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			int i1 = (::format::abc::Index(i))->__Param(0);		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(131)
			this->_int(i1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OpWriter_obj,idx,(void))

int OpWriter_obj::jumpCode( ::format::abc::JumpStyle j){
	HX_STACK_FRAME("format.abc.OpWriter","jumpCode",0x243e8892,"format.abc.OpWriter.jumpCode","format/abc/OpWriter.hx",136,0x55c01de5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(j,"j")
	HX_STACK_LINE(136)
	switch( (int)(j->__Index())){
		case (int)0: {
			HX_STACK_LINE(137)
			return (int)12;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(138)
			return (int)13;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(139)
			return (int)14;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(140)
			return (int)15;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(141)
			return (int)16;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(142)
			return (int)17;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(143)
			return (int)18;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(144)
			return (int)19;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(145)
			return (int)20;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(146)
			return (int)21;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(147)
			return (int)22;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(148)
			return (int)23;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(149)
			return (int)24;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(150)
			return (int)25;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(151)
			return (int)26;
		}
		;break;
	}
	HX_STACK_LINE(136)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(OpWriter_obj,jumpCode,return )

int OpWriter_obj::operationCode( ::format::abc::Operation o){
	HX_STACK_FRAME("format.abc.OpWriter","operationCode",0x5a4b2e3d,"format.abc.OpWriter.operationCode","format/abc/OpWriter.hx",156,0x55c01de5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(156)
	switch( (int)(o->__Index())){
		case (int)0: {
			HX_STACK_LINE(157)
			return (int)135;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(158)
			return (int)144;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(159)
			return (int)145;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(160)
			return (int)147;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(161)
			return (int)150;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(162)
			return (int)151;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(163)
			return (int)160;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(164)
			return (int)161;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(165)
			return (int)162;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(166)
			return (int)163;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(167)
			return (int)164;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(168)
			return (int)165;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(169)
			return (int)166;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(170)
			return (int)167;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(171)
			return (int)168;
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(172)
			return (int)169;
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(173)
			return (int)170;
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(174)
			return (int)171;
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(175)
			return (int)172;
		}
		;break;
		case (int)19: {
			HX_STACK_LINE(176)
			return (int)173;
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(177)
			return (int)174;
		}
		;break;
		case (int)21: {
			HX_STACK_LINE(178)
			return (int)175;
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(179)
			return (int)176;
		}
		;break;
		case (int)23: {
			HX_STACK_LINE(180)
			return (int)179;
		}
		;break;
		case (int)24: {
			HX_STACK_LINE(181)
			return (int)180;
		}
		;break;
		case (int)25: {
			HX_STACK_LINE(182)
			return (int)192;
		}
		;break;
		case (int)26: {
			HX_STACK_LINE(183)
			return (int)193;
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(184)
			return (int)196;
		}
		;break;
		case (int)28: {
			HX_STACK_LINE(185)
			return (int)197;
		}
		;break;
		case (int)29: {
			HX_STACK_LINE(186)
			return (int)198;
		}
		;break;
		case (int)30: {
			HX_STACK_LINE(187)
			return (int)199;
		}
		;break;
		case (int)31: {
			HX_STACK_LINE(188)
			return (int)53;
		}
		;break;
		case (int)32: {
			HX_STACK_LINE(189)
			return (int)54;
		}
		;break;
		case (int)33: {
			HX_STACK_LINE(190)
			return (int)55;
		}
		;break;
		case (int)34: {
			HX_STACK_LINE(191)
			return (int)56;
		}
		;break;
		case (int)35: {
			HX_STACK_LINE(192)
			return (int)57;
		}
		;break;
		case (int)36: {
			HX_STACK_LINE(193)
			return (int)58;
		}
		;break;
		case (int)37: {
			HX_STACK_LINE(194)
			return (int)59;
		}
		;break;
		case (int)38: {
			HX_STACK_LINE(195)
			return (int)60;
		}
		;break;
		case (int)39: {
			HX_STACK_LINE(196)
			return (int)61;
		}
		;break;
		case (int)40: {
			HX_STACK_LINE(197)
			return (int)62;
		}
		;break;
		case (int)41: {
			HX_STACK_LINE(198)
			return (int)80;
		}
		;break;
		case (int)42: {
			HX_STACK_LINE(199)
			return (int)81;
		}
		;break;
		case (int)43: {
			HX_STACK_LINE(200)
			return (int)82;
		}
		;break;
	}
	HX_STACK_LINE(156)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(OpWriter_obj,operationCode,return )

Void OpWriter_obj::write( ::format::abc::OpCode op){
{
		HX_STACK_FRAME("format.abc.OpWriter","write",0x8a20a928,"format.abc.OpWriter.write","format/abc/OpWriter.hx",205,0x55c01de5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(op,"op")
		HX_STACK_LINE(205)
		switch( (int)(op->__Index())){
			case (int)0: {
				HX_STACK_LINE(207)
				this->o->writeByte((int)1);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(209)
				this->o->writeByte((int)2);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(211)
				this->o->writeByte((int)3);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(205)
				::format::abc::Index v = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(212)
				{
					HX_STACK_LINE(213)
					this->o->writeByte((int)4);
					HX_STACK_LINE(214)
					this->idx(v);
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(205)
				::format::abc::Index v = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(215)
				{
					HX_STACK_LINE(216)
					this->o->writeByte((int)5);
					HX_STACK_LINE(217)
					this->idx(v);
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(205)
				::format::abc::Index i = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(218)
				{
					HX_STACK_LINE(219)
					this->o->writeByte((int)6);
					HX_STACK_LINE(220)
					this->idx(i);
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(222)
				this->o->writeByte((int)7);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(205)
				int r = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(224)
					this->o->writeByte((int)8);
					HX_STACK_LINE(225)
					this->reg(r);
				}
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(227)
				this->o->writeByte((int)9);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(205)
				int delta = (::format::abc::OpCode(op))->__Param(1);		HX_STACK_VAR(delta,"delta");
				HX_STACK_LINE(205)
				::format::abc::JumpStyle j = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(228)
				{
					HX_STACK_LINE(229)
					{
						HX_STACK_LINE(229)
						int v = this->jumpCode(j);		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(229)
						this->o->writeByte(v);
					}
					HX_STACK_LINE(230)
					this->o->writeInt24(delta);
				}
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(205)
				Array< int > deltas = (::format::abc::OpCode(op))->__Param(1);		HX_STACK_VAR(deltas,"deltas");
				HX_STACK_LINE(205)
				int def = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(def,"def");
				HX_STACK_LINE(231)
				{
					HX_STACK_LINE(232)
					this->o->writeByte((int)27);
					HX_STACK_LINE(233)
					this->o->writeInt24(def);
					HX_STACK_LINE(234)
					this->_int((deltas->length - (int)1));
					HX_STACK_LINE(235)
					{
						HX_STACK_LINE(235)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(235)
						while((true)){
							HX_STACK_LINE(235)
							if ((!(((_g < deltas->length))))){
								HX_STACK_LINE(235)
								break;
							}
							HX_STACK_LINE(235)
							int d = deltas->__get(_g);		HX_STACK_VAR(d,"d");
							HX_STACK_LINE(235)
							++(_g);
							HX_STACK_LINE(236)
							this->o->writeInt24(d);
						}
					}
				}
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(238)
				this->o->writeByte((int)28);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(240)
				this->o->writeByte((int)29);
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(242)
				this->o->writeByte((int)30);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(244)
				this->o->writeByte((int)31);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(246)
				this->o->writeByte((int)32);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(248)
				this->o->writeByte((int)33);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(250)
				this->o->writeByte((int)35);
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(205)
				int v = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(251)
				{
					HX_STACK_LINE(252)
					this->o->writeByte((int)36);
					HX_STACK_LINE(253)
					this->o->writeInt8(v);
				}
			}
			;break;
			case (int)19: {
				HX_STACK_LINE(205)
				int v = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(255)
					this->o->writeByte((int)37);
					HX_STACK_LINE(256)
					this->_int(v);
				}
			}
			;break;
			case (int)20: {
				HX_STACK_LINE(258)
				this->o->writeByte((int)38);
			}
			;break;
			case (int)21: {
				HX_STACK_LINE(260)
				this->o->writeByte((int)39);
			}
			;break;
			case (int)22: {
				HX_STACK_LINE(262)
				this->o->writeByte((int)40);
			}
			;break;
			case (int)23: {
				HX_STACK_LINE(264)
				this->o->writeByte((int)41);
			}
			;break;
			case (int)24: {
				HX_STACK_LINE(266)
				this->o->writeByte((int)42);
			}
			;break;
			case (int)25: {
				HX_STACK_LINE(268)
				this->o->writeByte((int)43);
			}
			;break;
			case (int)26: {
				HX_STACK_LINE(205)
				::format::abc::Index v = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(269)
				{
					HX_STACK_LINE(270)
					this->o->writeByte((int)44);
					HX_STACK_LINE(271)
					this->idx(v);
				}
			}
			;break;
			case (int)27: {
				HX_STACK_LINE(205)
				::format::abc::Index v = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(272)
				{
					HX_STACK_LINE(273)
					this->o->writeByte((int)45);
					HX_STACK_LINE(274)
					this->idx(v);
				}
			}
			;break;
			case (int)28: {
				HX_STACK_LINE(205)
				::format::abc::Index v = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(275)
				{
					HX_STACK_LINE(276)
					this->o->writeByte((int)46);
					HX_STACK_LINE(277)
					this->idx(v);
				}
			}
			;break;
			case (int)29: {
				HX_STACK_LINE(205)
				::format::abc::Index v = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(278)
				{
					HX_STACK_LINE(279)
					this->o->writeByte((int)47);
					HX_STACK_LINE(280)
					this->idx(v);
				}
			}
			;break;
			case (int)30: {
				HX_STACK_LINE(282)
				this->o->writeByte((int)48);
			}
			;break;
			case (int)31: {
				HX_STACK_LINE(205)
				::format::abc::Index v = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(283)
				{
					HX_STACK_LINE(284)
					this->o->writeByte((int)49);
					HX_STACK_LINE(285)
					this->idx(v);
				}
			}
			;break;
			case (int)32: {
				HX_STACK_LINE(205)
				int r2 = (::format::abc::OpCode(op))->__Param(1);		HX_STACK_VAR(r2,"r2");
				HX_STACK_LINE(205)
				int r1 = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(r1,"r1");
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(287)
					this->o->writeByte((int)50);
					HX_STACK_LINE(288)
					this->_int(r1);
					HX_STACK_LINE(289)
					this->_int(r2);
				}
			}
			;break;
			case (int)33: {
				HX_STACK_LINE(205)
				::format::abc::Index f = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(290)
				{
					HX_STACK_LINE(291)
					this->o->writeByte((int)64);
					HX_STACK_LINE(292)
					this->idx(f);
				}
			}
			;break;
			case (int)34: {
				HX_STACK_LINE(205)
				int n = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(293)
				{
					HX_STACK_LINE(294)
					this->o->writeByte((int)65);
					HX_STACK_LINE(295)
					this->_int(n);
				}
			}
			;break;
			case (int)35: {
				HX_STACK_LINE(205)
				int n = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(297)
					this->o->writeByte((int)66);
					HX_STACK_LINE(298)
					this->_int(n);
				}
			}
			;break;
			case (int)36: {
				HX_STACK_LINE(205)
				int n = (::format::abc::OpCode(op))->__Param(1);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(205)
				int s = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(299)
				{
					HX_STACK_LINE(300)
					this->o->writeByte((int)67);
					HX_STACK_LINE(301)
					this->_int(s);
					HX_STACK_LINE(302)
					this->_int(n);
				}
			}
			;break;
			case (int)37: {
				HX_STACK_LINE(205)
				int n = (::format::abc::OpCode(op))->__Param(1);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(205)
				::format::abc::Index m = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(303)
				{
					HX_STACK_LINE(304)
					this->o->writeByte((int)68);
					HX_STACK_LINE(305)
					this->idx(m);
					HX_STACK_LINE(306)
					this->_int(n);
				}
			}
			;break;
			case (int)38: {
				HX_STACK_LINE(205)
				int n = (::format::abc::OpCode(op))->__Param(1);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(205)
				::format::abc::Index p = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(308)
					this->o->writeByte((int)69);
					HX_STACK_LINE(309)
					this->idx(p);
					HX_STACK_LINE(310)
					this->_int(n);
				}
			}
			;break;
			case (int)39: {
				HX_STACK_LINE(205)
				int n = (::format::abc::OpCode(op))->__Param(1);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(205)
				::format::abc::Index p = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(312)
					this->o->writeByte((int)70);
					HX_STACK_LINE(313)
					this->idx(p);
					HX_STACK_LINE(314)
					this->_int(n);
				}
			}
			;break;
			case (int)40: {
				HX_STACK_LINE(316)
				this->o->writeByte((int)71);
			}
			;break;
			case (int)41: {
				HX_STACK_LINE(318)
				this->o->writeByte((int)72);
			}
			;break;
			case (int)42: {
				HX_STACK_LINE(205)
				int n = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(319)
				{
					HX_STACK_LINE(320)
					this->o->writeByte((int)73);
					HX_STACK_LINE(321)
					this->_int(n);
				}
			}
			;break;
			case (int)43: {
				HX_STACK_LINE(205)
				int n = (::format::abc::OpCode(op))->__Param(1);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(205)
				::format::abc::Index p = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(322)
				{
					HX_STACK_LINE(323)
					this->o->writeByte((int)74);
					HX_STACK_LINE(324)
					this->idx(p);
					HX_STACK_LINE(325)
					this->_int(n);
				}
			}
			;break;
			case (int)44: {
				HX_STACK_LINE(205)
				int n = (::format::abc::OpCode(op))->__Param(1);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(205)
				::format::abc::Index p = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(326)
				{
					HX_STACK_LINE(327)
					this->o->writeByte((int)76);
					HX_STACK_LINE(328)
					this->idx(p);
					HX_STACK_LINE(329)
					this->_int(n);
				}
			}
			;break;
			case (int)45: {
				HX_STACK_LINE(205)
				int n = (::format::abc::OpCode(op))->__Param(1);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(205)
				::format::abc::Index p = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(330)
				{
					HX_STACK_LINE(331)
					this->o->writeByte((int)78);
					HX_STACK_LINE(332)
					this->idx(p);
					HX_STACK_LINE(333)
					this->_int(n);
				}
			}
			;break;
			case (int)46: {
				HX_STACK_LINE(205)
				int n = (::format::abc::OpCode(op))->__Param(1);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(205)
				::format::abc::Index p = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(334)
				{
					HX_STACK_LINE(335)
					this->o->writeByte((int)79);
					HX_STACK_LINE(336)
					this->idx(p);
					HX_STACK_LINE(337)
					this->_int(n);
				}
			}
			;break;
			case (int)47: {
				HX_STACK_LINE(205)
				int n = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(338)
				{
					HX_STACK_LINE(339)
					this->o->writeByte((int)83);
					HX_STACK_LINE(340)
					this->_int(n);
				}
			}
			;break;
			case (int)48: {
				HX_STACK_LINE(205)
				int n = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(341)
				{
					HX_STACK_LINE(342)
					this->o->writeByte((int)85);
					HX_STACK_LINE(343)
					this->_int(n);
				}
			}
			;break;
			case (int)49: {
				HX_STACK_LINE(205)
				int n = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(345)
					this->o->writeByte((int)86);
					HX_STACK_LINE(346)
					this->_int(n);
				}
			}
			;break;
			case (int)50: {
				HX_STACK_LINE(348)
				this->o->writeByte((int)87);
			}
			;break;
			case (int)51: {
				HX_STACK_LINE(205)
				::format::abc::Index c = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(349)
				{
					HX_STACK_LINE(350)
					this->o->writeByte((int)88);
					HX_STACK_LINE(351)
					this->idx(c);
				}
			}
			;break;
			case (int)52: {
				HX_STACK_LINE(205)
				::format::abc::Index i = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(352)
				{
					HX_STACK_LINE(353)
					this->o->writeByte((int)89);
					HX_STACK_LINE(354)
					this->idx(i);
				}
			}
			;break;
			case (int)53: {
				HX_STACK_LINE(205)
				int c = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(355)
				{
					HX_STACK_LINE(356)
					this->o->writeByte((int)90);
					HX_STACK_LINE(357)
					this->_int(c);
				}
			}
			;break;
			case (int)54: {
				HX_STACK_LINE(205)
				::format::abc::Index p = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(358)
				{
					HX_STACK_LINE(359)
					this->o->writeByte((int)93);
					HX_STACK_LINE(360)
					this->idx(p);
				}
			}
			;break;
			case (int)55: {
				HX_STACK_LINE(205)
				::format::abc::Index p = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(362)
					this->o->writeByte((int)94);
					HX_STACK_LINE(363)
					this->idx(p);
				}
			}
			;break;
			case (int)56: {
				HX_STACK_LINE(205)
				::format::abc::Index d = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(365)
					this->o->writeByte((int)95);
					HX_STACK_LINE(366)
					this->idx(d);
				}
			}
			;break;
			case (int)57: {
				HX_STACK_LINE(205)
				::format::abc::Index p = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(367)
				{
					HX_STACK_LINE(368)
					this->o->writeByte((int)96);
					HX_STACK_LINE(369)
					this->idx(p);
				}
			}
			;break;
			case (int)58: {
				HX_STACK_LINE(205)
				::format::abc::Index p = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(370)
				{
					HX_STACK_LINE(371)
					this->o->writeByte((int)97);
					HX_STACK_LINE(372)
					this->idx(p);
				}
			}
			;break;
			case (int)59: {
				HX_STACK_LINE(205)
				int r = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(374)
				switch( (int)(r)){
					case (int)0: {
						HX_STACK_LINE(375)
						this->o->writeByte((int)208);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(376)
						this->o->writeByte((int)209);
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(377)
						this->o->writeByte((int)210);
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(378)
						this->o->writeByte((int)211);
					}
					;break;
					default: {
						HX_STACK_LINE(380)
						this->o->writeByte((int)98);
						HX_STACK_LINE(381)
						this->reg(r);
					}
				}
			}
			;break;
			case (int)60: {
				HX_STACK_LINE(205)
				int r = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(384)
				switch( (int)(r)){
					case (int)0: {
						HX_STACK_LINE(385)
						this->o->writeByte((int)212);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(386)
						this->o->writeByte((int)213);
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(387)
						this->o->writeByte((int)214);
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(388)
						this->o->writeByte((int)215);
					}
					;break;
					default: {
						HX_STACK_LINE(390)
						this->o->writeByte((int)99);
						HX_STACK_LINE(391)
						this->reg(r);
					}
				}
			}
			;break;
			case (int)61: {
				HX_STACK_LINE(394)
				this->o->writeByte((int)100);
			}
			;break;
			case (int)62: {
				HX_STACK_LINE(205)
				int n = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(395)
				{
					HX_STACK_LINE(396)
					this->o->writeByte((int)101);
					HX_STACK_LINE(397)
					this->o->writeByte(n);
				}
			}
			;break;
			case (int)63: {
				HX_STACK_LINE(205)
				::format::abc::Index p = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(398)
				{
					HX_STACK_LINE(399)
					this->o->writeByte((int)102);
					HX_STACK_LINE(400)
					this->idx(p);
				}
			}
			;break;
			case (int)64: {
				HX_STACK_LINE(205)
				::format::abc::Index p = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(401)
				{
					HX_STACK_LINE(402)
					this->o->writeByte((int)104);
					HX_STACK_LINE(403)
					this->idx(p);
				}
			}
			;break;
			case (int)65: {
				HX_STACK_LINE(205)
				::format::abc::Index p = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(405)
					this->o->writeByte((int)106);
					HX_STACK_LINE(406)
					this->idx(p);
				}
			}
			;break;
			case (int)66: {
				HX_STACK_LINE(205)
				int s = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(407)
				{
					HX_STACK_LINE(408)
					this->o->writeByte((int)108);
					HX_STACK_LINE(409)
					this->_int(s);
				}
			}
			;break;
			case (int)67: {
				HX_STACK_LINE(205)
				int s = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(410)
				{
					HX_STACK_LINE(411)
					this->o->writeByte((int)109);
					HX_STACK_LINE(412)
					this->_int(s);
				}
			}
			;break;
			case (int)68: {
				HX_STACK_LINE(414)
				this->o->writeByte((int)112);
			}
			;break;
			case (int)69: {
				HX_STACK_LINE(416)
				this->o->writeByte((int)113);
			}
			;break;
			case (int)70: {
				HX_STACK_LINE(418)
				this->o->writeByte((int)114);
			}
			;break;
			case (int)71: {
				HX_STACK_LINE(420)
				this->o->writeByte((int)115);
			}
			;break;
			case (int)72: {
				HX_STACK_LINE(422)
				this->o->writeByte((int)116);
			}
			;break;
			case (int)73: {
				HX_STACK_LINE(424)
				this->o->writeByte((int)117);
			}
			;break;
			case (int)74: {
				HX_STACK_LINE(426)
				this->o->writeByte((int)118);
			}
			;break;
			case (int)75: {
				HX_STACK_LINE(428)
				this->o->writeByte((int)119);
			}
			;break;
			case (int)76: {
				HX_STACK_LINE(430)
				this->o->writeByte((int)120);
			}
			;break;
			case (int)77: {
				HX_STACK_LINE(205)
				::format::abc::Index t = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(432)
					this->o->writeByte((int)128);
					HX_STACK_LINE(433)
					this->idx(t);
				}
			}
			;break;
			case (int)78: {
				HX_STACK_LINE(435)
				this->o->writeByte((int)130);
			}
			;break;
			case (int)79: {
				HX_STACK_LINE(437)
				this->o->writeByte((int)133);
			}
			;break;
			case (int)80: {
				HX_STACK_LINE(205)
				::format::abc::Index t = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(438)
				{
					HX_STACK_LINE(439)
					this->o->writeByte((int)134);
					HX_STACK_LINE(440)
					this->idx(t);
				}
			}
			;break;
			case (int)81: {
				HX_STACK_LINE(442)
				this->o->writeByte((int)137);
			}
			;break;
			case (int)82: {
				HX_STACK_LINE(205)
				int r = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(443)
				{
					HX_STACK_LINE(444)
					this->o->writeByte((int)146);
					HX_STACK_LINE(445)
					this->reg(r);
				}
			}
			;break;
			case (int)83: {
				HX_STACK_LINE(205)
				int r = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(446)
				{
					HX_STACK_LINE(447)
					this->o->writeByte((int)148);
					HX_STACK_LINE(448)
					this->reg(r);
				}
			}
			;break;
			case (int)84: {
				HX_STACK_LINE(450)
				this->o->writeByte((int)149);
			}
			;break;
			case (int)85: {
				HX_STACK_LINE(452)
				this->o->writeByte((int)177);
			}
			;break;
			case (int)86: {
				HX_STACK_LINE(205)
				::format::abc::Index t = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(453)
				{
					HX_STACK_LINE(454)
					this->o->writeByte((int)178);
					HX_STACK_LINE(455)
					this->idx(t);
				}
			}
			;break;
			case (int)87: {
				HX_STACK_LINE(205)
				int r = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(456)
				{
					HX_STACK_LINE(457)
					this->o->writeByte((int)194);
					HX_STACK_LINE(458)
					this->reg(r);
				}
			}
			;break;
			case (int)88: {
				HX_STACK_LINE(205)
				int r = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(459)
				{
					HX_STACK_LINE(460)
					this->o->writeByte((int)195);
					HX_STACK_LINE(461)
					this->reg(r);
				}
			}
			;break;
			case (int)89: {
				HX_STACK_LINE(463)
				this->o->writeByte((int)208);
			}
			;break;
			case (int)90: {
				HX_STACK_LINE(465)
				this->o->writeByte((int)212);
			}
			;break;
			case (int)91: {
				HX_STACK_LINE(205)
				int line = (::format::abc::OpCode(op))->__Param(2);		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(205)
				int r = (::format::abc::OpCode(op))->__Param(1);		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(205)
				::format::abc::Index name = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(466)
				{
					HX_STACK_LINE(467)
					this->o->writeByte((int)239);
					HX_STACK_LINE(468)
					this->o->writeByte((int)1);
					HX_STACK_LINE(469)
					this->idx(name);
					HX_STACK_LINE(470)
					this->reg(r);
					HX_STACK_LINE(471)
					this->_int(line);
				}
			}
			;break;
			case (int)92: {
				HX_STACK_LINE(205)
				int line = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(472)
				{
					HX_STACK_LINE(473)
					this->o->writeByte((int)240);
					HX_STACK_LINE(474)
					this->_int(line);
				}
			}
			;break;
			case (int)93: {
				HX_STACK_LINE(205)
				::format::abc::Index file = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(file,"file");
				HX_STACK_LINE(475)
				{
					HX_STACK_LINE(476)
					this->o->writeByte((int)241);
					HX_STACK_LINE(477)
					this->idx(file);
				}
			}
			;break;
			case (int)94: {
				HX_STACK_LINE(205)
				int n = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(478)
				{
					HX_STACK_LINE(479)
					this->o->writeByte((int)242);
					HX_STACK_LINE(480)
					this->_int(n);
				}
			}
			;break;
			case (int)95: {
				HX_STACK_LINE(482)
				this->o->writeByte((int)243);
			}
			;break;
			case (int)96: {
				HX_STACK_LINE(205)
				::format::abc::Operation op1 = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(op1,"op1");
				HX_STACK_LINE(484)
				{
					HX_STACK_LINE(484)
					int v = this->operationCode(op1);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(484)
					this->o->writeByte(v);
				}
			}
			;break;
			case (int)97: {
				HX_STACK_LINE(205)
				int byte = (::format::abc::OpCode(op))->__Param(0);		HX_STACK_VAR(byte,"byte");
				HX_STACK_LINE(486)
				this->o->writeByte(byte);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OpWriter_obj,write,(void))


OpWriter_obj::OpWriter_obj()
{
}

void OpWriter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OpWriter);
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_END_CLASS();
}

void OpWriter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(o,"o");
}

Dynamic OpWriter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { return o; }
		if (HX_FIELD_EQ(inName,"b") ) { return b_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { return _int_dyn(); }
		if (HX_FIELD_EQ(inName,"reg") ) { return reg_dyn(); }
		if (HX_FIELD_EQ(inName,"idx") ) { return idx_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return write_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"jumpCode") ) { return jumpCode_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeInt32") ) { return writeInt32_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"operationCode") ) { return operationCode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OpWriter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< ::haxe::io::Output >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpWriter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("o"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Output*/ ,(int)offsetof(OpWriter_obj,o),HX_CSTRING("o")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("o"),
	HX_CSTRING("writeInt"),
	HX_CSTRING("writeInt32"),
	HX_CSTRING("int"),
	HX_CSTRING("b"),
	HX_CSTRING("reg"),
	HX_CSTRING("idx"),
	HX_CSTRING("jumpCode"),
	HX_CSTRING("operationCode"),
	HX_CSTRING("write"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpWriter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpWriter_obj::__mClass,"__mClass");
};

#endif

Class OpWriter_obj::__mClass;

void OpWriter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.abc.OpWriter"), hx::TCanCast< OpWriter_obj> ,sStaticFields,sMemberFields,
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

void OpWriter_obj::__boot()
{
}

} // end namespace format
} // end namespace abc
