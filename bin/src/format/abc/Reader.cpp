#include <hxcpp.h>

#ifndef INCLUDED_format_abc_ABCData
#include <format/abc/ABCData.h>
#endif
#ifndef INCLUDED_format_abc_FieldKind
#include <format/abc/FieldKind.h>
#endif
#ifndef INCLUDED_format_abc_Index
#include <format/abc/Index.h>
#endif
#ifndef INCLUDED_format_abc_MethodKind
#include <format/abc/MethodKind.h>
#endif
#ifndef INCLUDED_format_abc_Name
#include <format/abc/Name.h>
#endif
#ifndef INCLUDED_format_abc_Namespace
#include <format/abc/Namespace.h>
#endif
#ifndef INCLUDED_format_abc_OpReader
#include <format/abc/OpReader.h>
#endif
#ifndef INCLUDED_format_abc_Reader
#include <format/abc/Reader.h>
#endif
#ifndef INCLUDED_format_abc_Value
#include <format/abc/Value.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace format{
namespace abc{

Void Reader_obj::__construct(::haxe::io::Input i)
{
HX_STACK_FRAME("format.abc.Reader","new",0xd622cfb8,"format.abc.Reader.new","format/abc/Reader.hx",36,0xb79659f6)
HX_STACK_THIS(this)
HX_STACK_ARG(i,"i")
{
	HX_STACK_LINE(37)
	this->i = i;
	HX_STACK_LINE(38)
	::format::abc::OpReader _g = ::format::abc::OpReader_obj::__new(i);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(38)
	this->opr = _g;
}
;
	return null();
}

//Reader_obj::~Reader_obj() { }

Dynamic Reader_obj::__CreateEmpty() { return  new Reader_obj; }
hx::ObjectPtr< Reader_obj > Reader_obj::__new(::haxe::io::Input i)
{  hx::ObjectPtr< Reader_obj > result = new Reader_obj();
	result->__construct(i);
	return result;}

Dynamic Reader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reader_obj > result = new Reader_obj();
	result->__construct(inArgs[0]);
	return result;}

int Reader_obj::readInt( ){
	HX_STACK_FRAME("format.abc.Reader","readInt",0xb0c73e91,"format.abc.Reader.readInt","format/abc/Reader.hx",42,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	return this->opr->readInt();
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readInt,return )

::format::abc::Index Reader_obj::readIndex( ){
	HX_STACK_FRAME("format.abc.Reader","readIndex",0xdff4f934,"format.abc.Reader.readIndex","format/abc/Reader.hx",45,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	int _g = this->opr->readInt();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(46)
	return ::format::abc::Index_obj::Idx(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readIndex,return )

::format::abc::Index Reader_obj::readIndexOpt( ){
	HX_STACK_FRAME("format.abc.Reader","readIndexOpt",0x4948135f,"format.abc.Reader.readIndexOpt","format/abc/Reader.hx",49,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	int i = this->opr->readInt();		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(51)
	if (((i == (int)0))){
		HX_STACK_LINE(51)
		return null();
	}
	else{
		HX_STACK_LINE(51)
		return ::format::abc::Index_obj::Idx(i);
	}
	HX_STACK_LINE(51)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readIndexOpt,return )

Dynamic Reader_obj::readList( Dynamic f){
	HX_STACK_FRAME("format.abc.Reader","readList",0xff87587c,"format.abc.Reader.readList","format/abc/Reader.hx",54,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(55)
	Dynamic a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(56)
	int n = this->opr->readInt();		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(57)
	if (((n == (int)0))){
		HX_STACK_LINE(58)
		return a;
	}
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(59)
		int _g = (n - (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(59)
		while((true)){
			HX_STACK_LINE(59)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(59)
				break;
			}
			HX_STACK_LINE(59)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(60)
			Dynamic _g2 = f();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(60)
			a->__Field(HX_CSTRING("push"),true)(_g2);
		}
	}
	HX_STACK_LINE(61)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readList,return )

Dynamic Reader_obj::readList2( Dynamic f){
	HX_STACK_FRAME("format.abc.Reader","readList2",0x96e61436,"format.abc.Reader.readList2","format/abc/Reader.hx",64,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(65)
	Dynamic a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(66)
	int n = this->opr->readInt();		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		while((true)){
			HX_STACK_LINE(67)
			if ((!(((_g < n))))){
				HX_STACK_LINE(67)
				break;
			}
			HX_STACK_LINE(67)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(68)
			Dynamic _g1 = f();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(68)
			a->__Field(HX_CSTRING("push"),true)(_g1);
		}
	}
	HX_STACK_LINE(69)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readList2,return )

::String Reader_obj::readString( ){
	HX_STACK_FRAME("format.abc.Reader","readString",0x93a2286f,"format.abc.Reader.readString","format/abc/Reader.hx",72,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	int _g = this->opr->readInt();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(73)
	return this->i->readString(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readString,return )

::format::abc::Namespace Reader_obj::readNamespace( ){
	HX_STACK_FRAME("format.abc.Reader","readNamespace",0xb7f501bd,"format.abc.Reader.readNamespace","format/abc/Reader.hx",76,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	int k = this->i->readByte();		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(78)
	int _g = this->opr->readInt();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(78)
	::format::abc::Index p = ::format::abc::Index_obj::Idx(_g);		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(79)
	switch( (int)(k)){
		case (int)5: {
			HX_STACK_LINE(80)
			return ::format::abc::Namespace_obj::NPrivate(p);
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(81)
			return ::format::abc::Namespace_obj::NNamespace(p);
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(82)
			return ::format::abc::Namespace_obj::NPublic(p);
		}
		;break;
		case (int)23: {
			HX_STACK_LINE(83)
			return ::format::abc::Namespace_obj::NInternal(p);
		}
		;break;
		case (int)24: {
			HX_STACK_LINE(84)
			return ::format::abc::Namespace_obj::NProtected(p);
		}
		;break;
		case (int)25: {
			HX_STACK_LINE(85)
			return ::format::abc::Namespace_obj::NExplicit(p);
		}
		;break;
		case (int)26: {
			HX_STACK_LINE(86)
			return ::format::abc::Namespace_obj::NStaticProtected(p);
		}
		;break;
		default: {
			HX_STACK_LINE(87)
			HX_STACK_DO_THROW(HX_CSTRING("assert"));
		}
	}
	HX_STACK_LINE(79)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readNamespace,return )

Array< ::Dynamic > Reader_obj::readNsSet( ){
	HX_STACK_FRAME("format.abc.Reader","readNsSet",0xc4370a7f,"format.abc.Reader.readNsSet","format/abc/Reader.hx",91,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(93)
		int _g = this->i->readByte();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		while((true)){
			HX_STACK_LINE(93)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(93)
				break;
			}
			HX_STACK_LINE(93)
			int n = (_g1)++;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(94)
			int _g2 = this->opr->readInt();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(94)
			::format::abc::Index _g11 = ::format::abc::Index_obj::Idx(_g2);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(94)
			a->push(_g11);
		}
	}
	HX_STACK_LINE(95)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readNsSet,return )

::format::abc::Name Reader_obj::readName( hx::Null< int >  __o_k){
int k = __o_k.Default(-1);
	HX_STACK_FRAME("format.abc.Reader","readName",0x00d3ae69,"format.abc.Reader.readName","format/abc/Reader.hx",98,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
{
		HX_STACK_LINE(99)
		if (((k == (int)-1))){
			HX_STACK_LINE(99)
			int _g = this->i->readByte();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(99)
			k = _g;
		}
		HX_STACK_LINE(100)
		switch( (int)(k)){
			case (int)7: {
				HX_STACK_LINE(102)
				int _g1 = this->opr->readInt();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(102)
				::format::abc::Index ns = ::format::abc::Index_obj::Idx(_g1);		HX_STACK_VAR(ns,"ns");
				HX_STACK_LINE(103)
				int _g2 = this->opr->readInt();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(103)
				::format::abc::Index id = ::format::abc::Index_obj::Idx(_g2);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(104)
				return ::format::abc::Name_obj::NName(id,ns);
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(106)
				int _g3 = this->opr->readInt();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(106)
				::format::abc::Index id = ::format::abc::Index_obj::Idx(_g3);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(107)
				int _g4 = this->opr->readInt();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(107)
				::format::abc::Index ns = ::format::abc::Index_obj::Idx(_g4);		HX_STACK_VAR(ns,"ns");
				HX_STACK_LINE(108)
				return ::format::abc::Name_obj::NMulti(id,ns);
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(110)
				::format::abc::Name _g5 = this->readName((int)7);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(110)
				return ::format::abc::Name_obj::NAttrib(_g5);
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(112)
				::format::abc::Name _g6 = this->readName((int)9);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(112)
				return ::format::abc::Name_obj::NAttrib(_g6);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(114)
				int _g7 = this->opr->readInt();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(114)
				::format::abc::Index _g8 = ::format::abc::Index_obj::Idx(_g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(114)
				return ::format::abc::Name_obj::NRuntime(_g8);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(116)
				return ::format::abc::Name_obj::NRuntimeLate;
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(118)
				::format::abc::Name _g9 = this->readName((int)17);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(118)
				return ::format::abc::Name_obj::NAttrib(_g9);
			}
			;break;
			case (int)27: {
				HX_STACK_LINE(120)
				int _g10 = this->opr->readInt();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(120)
				::format::abc::Index _g11 = ::format::abc::Index_obj::Idx(_g10);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(120)
				return ::format::abc::Name_obj::NMultiLate(_g11);
			}
			;break;
			case (int)28: {
				HX_STACK_LINE(122)
				::format::abc::Name _g12 = this->readName((int)27);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(122)
				return ::format::abc::Name_obj::NAttrib(_g12);
			}
			;break;
			case (int)29: {
				HX_STACK_LINE(124)
				int _g13 = this->opr->readInt();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(124)
				::format::abc::Index id = ::format::abc::Index_obj::Idx(_g13);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(125)
				Array< ::Dynamic > params = this->readList2(this->readIndex_dyn());		HX_STACK_VAR(params,"params");
				HX_STACK_LINE(126)
				return ::format::abc::Name_obj::NParams(id,params);
			}
			;break;
			default: {
				HX_STACK_LINE(128)
				HX_STACK_DO_THROW(HX_CSTRING("assert"));
			}
		}
		HX_STACK_LINE(100)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readName,return )

::format::abc::Value Reader_obj::readValue( bool extra){
	HX_STACK_FRAME("format.abc.Reader","readValue",0x5398dd93,"format.abc.Reader.readValue","format/abc/Reader.hx",132,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(extra,"extra")
	HX_STACK_LINE(133)
	int idx = this->opr->readInt();		HX_STACK_VAR(idx,"idx");
	HX_STACK_LINE(134)
	if (((idx == (int)0))){
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::format::abc::Reader_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/abc/Reader.hx",135,0xb79659f6)
				{
					HX_STACK_LINE(135)
					int _g = __this->i->readByte();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(135)
					return (_g != (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(135)
		if (((  ((extra)) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(135)
			HX_STACK_DO_THROW(HX_CSTRING("assert"));
		}
		HX_STACK_LINE(136)
		return null();
	}
	HX_STACK_LINE(138)
	int n = this->i->readByte();		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(139)
	switch( (int)(n)){
		case (int)1: {
			HX_STACK_LINE(140)
			::format::abc::Index _g1 = ::format::abc::Index_obj::Idx(idx);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(140)
			return ::format::abc::Value_obj::VString(_g1);
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(141)
			::format::abc::Index _g2 = ::format::abc::Index_obj::Idx(idx);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(141)
			return ::format::abc::Value_obj::VInt(_g2);
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(142)
			::format::abc::Index _g3 = ::format::abc::Index_obj::Idx(idx);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(142)
			return ::format::abc::Value_obj::VUInt(_g3);
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(143)
			::format::abc::Index _g4 = ::format::abc::Index_obj::Idx(idx);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(143)
			return ::format::abc::Value_obj::VFloat(_g4);
		}
		;break;
		case (int)5: case (int)8: case (int)22: case (int)23: case (int)24: case (int)25: case (int)26: {
			HX_STACK_LINE(144)
			::format::abc::Index _g5 = ::format::abc::Index_obj::Idx(idx);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(144)
			return ::format::abc::Value_obj::VNamespace(n,_g5);
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(145)
			if (((idx != (int)10))){
				HX_STACK_LINE(145)
				HX_STACK_DO_THROW(HX_CSTRING("assert"));
			}
			HX_STACK_LINE(145)
			return ::format::abc::Value_obj::VBool(false);
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(146)
			if (((idx != (int)11))){
				HX_STACK_LINE(146)
				HX_STACK_DO_THROW(HX_CSTRING("assert"));
			}
			HX_STACK_LINE(146)
			return ::format::abc::Value_obj::VBool(true);
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(147)
			if (((idx != (int)12))){
				HX_STACK_LINE(147)
				HX_STACK_DO_THROW(HX_CSTRING("assert"));
			}
			HX_STACK_LINE(147)
			return ::format::abc::Value_obj::VNull;
		}
		;break;
		default: {
			HX_STACK_LINE(148)
			HX_STACK_DO_THROW(HX_CSTRING("assert"));
		}
	}
	HX_STACK_LINE(139)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readValue,return )

Dynamic Reader_obj::readMethodType( ){
	HX_STACK_FRAME("format.abc.Reader","readMethodType",0x4c45c0d9,"format.abc.Reader.readMethodType","format/abc/Reader.hx",152,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(152)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(153)
	int nargs = this->i->readByte();		HX_STACK_VAR(nargs,"nargs");
	HX_STACK_LINE(154)
	::format::abc::Index tret = this->readIndexOpt();		HX_STACK_VAR(tret,"tret");
	HX_STACK_LINE(155)
	Array< ::Dynamic > targs = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(targs,"targs");
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(156)
		while((true)){
			HX_STACK_LINE(156)
			if ((!(((_g1 < nargs))))){
				HX_STACK_LINE(156)
				break;
			}
			HX_STACK_LINE(156)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(157)
			::format::abc::Index _g2 = this->readIndexOpt();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(157)
			targs->push(_g2);
		}
	}
	HX_STACK_LINE(158)
	::format::abc::Index dname = this->readIndexOpt();		HX_STACK_VAR(dname,"dname");
	HX_STACK_LINE(159)
	int flags = this->i->readByte();		HX_STACK_VAR(flags,"flags");
	HX_STACK_LINE(160)
	if (((bool((flags == (int)0)) && bool((dname == null()))))){
		struct _Function_2_1{
			inline static Dynamic Block( ::format::abc::Index &tret,Array< ::Dynamic > &targs){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/abc/Reader.hx",161,0xb79659f6)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("args") , targs,false);
					__result->Add(HX_CSTRING("ret") , tret,false);
					__result->Add(HX_CSTRING("extra") , null(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(161)
		return _Function_2_1::Block(tret,targs);
	}
	HX_STACK_LINE(166)
	Array< ::Dynamic > dparams = null();		HX_STACK_VAR(dparams,"dparams");
	HX_STACK_LINE(166)
	Array< ::Dynamic > pnames = null();		HX_STACK_VAR(pnames,"pnames");
	HX_STACK_LINE(167)
	if (((((int(flags) & int((int)8))) != (int)0))){

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
		::format::abc::Value run(){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","format/abc/Reader.hx",168,0xb79659f6)
			{
				HX_STACK_LINE(168)
				return _g->__get((int)0).StaticCast< ::format::abc::Reader >()->readValue(true);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(168)
		Array< ::Dynamic > _g1 = this->readList2( Dynamic(new _Function_2_1(_g)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(168)
		dparams = _g1;
	}
	HX_STACK_LINE(169)
	if (((((int(flags) & int((int)128))) != (int)0))){
		HX_STACK_LINE(170)
		Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(170)
		pnames = _g2;
		HX_STACK_LINE(171)
		{
			HX_STACK_LINE(171)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(171)
			while((true)){
				HX_STACK_LINE(171)
				if ((!(((_g1 < nargs))))){
					HX_STACK_LINE(171)
					break;
				}
				HX_STACK_LINE(171)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(172)
				::format::abc::Index _g3 = this->readIndexOpt();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(172)
				pnames->push(_g3);
			}
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( Array< ::Dynamic > &dparams,::format::abc::Index &tret,Array< ::Dynamic > &targs,::format::abc::Index &dname,Array< ::Dynamic > &pnames,int &flags){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/abc/Reader.hx",174,0xb79659f6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("args") , targs,false);
				__result->Add(HX_CSTRING("ret") , tret,false);
				struct _Function_2_1{
					inline static Dynamic Block( Array< ::Dynamic > &dparams,::format::abc::Index &dname,Array< ::Dynamic > &pnames,int &flags){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/abc/Reader.hx",177,0xb79659f6)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("native") , (((int(flags) & int((int)32))) != (int)0),false);
							__result->Add(HX_CSTRING("variableArgs") , (((int(flags) & int((int)4))) != (int)0),false);
							__result->Add(HX_CSTRING("argumentsDefined") , (((int(flags) & int((int)1))) != (int)0),false);
							__result->Add(HX_CSTRING("usesDXNS") , (((int(flags) & int((int)64))) != (int)0),false);
							__result->Add(HX_CSTRING("newBlock") , (((int(flags) & int((int)2))) != (int)0),false);
							__result->Add(HX_CSTRING("unused") , (((int(flags) & int((int)16))) != (int)0),false);
							__result->Add(HX_CSTRING("debugName") , dname,false);
							__result->Add(HX_CSTRING("defaultParameters") , dparams,false);
							__result->Add(HX_CSTRING("paramNames") , pnames,false);
							return __result;
						}
						return null();
					}
				};
				__result->Add(HX_CSTRING("extra") , _Function_2_1::Block(dparams,dname,pnames,flags),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(174)
	return _Function_1_1::Block(dparams,tret,targs,dname,pnames,flags);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readMethodType,return )

Dynamic Reader_obj::readMetadata( ){
	HX_STACK_FRAME("format.abc.Reader","readMetadata",0xc2c18a8d,"format.abc.Reader.readMetadata","format/abc/Reader.hx",191,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	int _g = this->opr->readInt();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(192)
	::format::abc::Index name = ::format::abc::Index_obj::Idx(_g);		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(193)
	Array< ::Dynamic > data = this->readList2(this->readIndexOpt_dyn());		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(194)
	Dynamic a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(195)
	{
		HX_STACK_LINE(195)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(195)
		while((true)){
			HX_STACK_LINE(195)
			if ((!(((_g1 < data->length))))){
				HX_STACK_LINE(195)
				break;
			}
			HX_STACK_LINE(195)
			::format::abc::Index i = data->__get(_g1).StaticCast< ::format::abc::Index >();		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(195)
			++(_g1);
			HX_STACK_LINE(196)
			int _g11 = this->opr->readInt();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(196)
			::format::abc::Index _g2 = ::format::abc::Index_obj::Idx(_g11);		HX_STACK_VAR(_g2,"_g2");
			struct _Function_3_1{
				inline static Dynamic Block( ::format::abc::Index &i,::format::abc::Index &_g2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/abc/Reader.hx",196,0xb79659f6)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("n") , i,false);
						__result->Add(HX_CSTRING("v") , _g2,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(196)
			Dynamic _g3 = _Function_3_1::Block(i,_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(196)
			a->__Field(HX_CSTRING("push"),true)(_g3);
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &a,::format::abc::Index &name){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/abc/Reader.hx",197,0xb79659f6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("name") , name,false);
				__result->Add(HX_CSTRING("data") , a,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(197)
	return _Function_1_1::Block(a,name);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readMetadata,return )

Dynamic Reader_obj::readField( ){
	HX_STACK_FRAME("format.abc.Reader","readField",0x2273f2dc,"format.abc.Reader.readField","format/abc/Reader.hx",203,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(204)
	int _g = this->opr->readInt();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(204)
	::format::abc::Index name = ::format::abc::Index_obj::Idx(_g);		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(205)
	int kind = this->i->readByte();		HX_STACK_VAR(kind,"kind");
	HX_STACK_LINE(206)
	int slot = this->opr->readInt();		HX_STACK_VAR(slot,"slot");
	HX_STACK_LINE(207)
	::format::abc::FieldKind f;		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(208)
	{
		HX_STACK_LINE(208)
		int _g1 = (int(kind) & int((int)15));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(208)
		switch( (int)(_g1)){
			case (int)0: case (int)6: {
				HX_STACK_LINE(210)
				::format::abc::Index t = this->readIndexOpt();		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(211)
				::format::abc::Value v = this->readValue(false);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(212)
				::format::abc::FieldKind _g11 = ::format::abc::FieldKind_obj::FVar(t,v,(kind == (int)6));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(212)
				f = _g11;
			}
			;break;
			case (int)1: case (int)2: case (int)3: {
				HX_STACK_LINE(214)
				int _g2 = this->opr->readInt();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(214)
				::format::abc::Index mt = ::format::abc::Index_obj::Idx(_g2);		HX_STACK_VAR(mt,"mt");
				HX_STACK_LINE(215)
				bool final = (((int(kind) & int((int)16))) != (int)0);		HX_STACK_VAR(final,"final");
				HX_STACK_LINE(216)
				bool over = (((int(kind) & int((int)32))) != (int)0);		HX_STACK_VAR(over,"over");
				HX_STACK_LINE(217)
				::format::abc::MethodKind kind1;		HX_STACK_VAR(kind1,"kind1");
				HX_STACK_LINE(217)
				{
					HX_STACK_LINE(217)
					int _g11 = (int(kind) & int((int)15));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(217)
					switch( (int)(_g11)){
						case (int)1: {
							HX_STACK_LINE(218)
							kind1 = ::format::abc::MethodKind_obj::KNormal;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(219)
							kind1 = ::format::abc::MethodKind_obj::KGetter;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(220)
							kind1 = ::format::abc::MethodKind_obj::KSetter;
						}
						;break;
						default: {
							HX_STACK_LINE(221)
							HX_STACK_DO_THROW(HX_CSTRING("assert"));
						}
					}
				}
				HX_STACK_LINE(223)
				::format::abc::FieldKind _g3 = ::format::abc::FieldKind_obj::FMethod(mt,kind1,final,over);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(223)
				f = _g3;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(225)
				int _g4 = this->opr->readInt();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(225)
				::format::abc::Index _g5 = ::format::abc::Index_obj::Idx(_g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(225)
				::format::abc::FieldKind _g6 = ::format::abc::FieldKind_obj::FClass(_g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(225)
				f = _g6;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(227)
				int _g7 = this->opr->readInt();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(227)
				::format::abc::Index _g8 = ::format::abc::Index_obj::Idx(_g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(227)
				::format::abc::FieldKind _g9 = ::format::abc::FieldKind_obj::FFunction(_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(227)
				f = _g9;
			}
			;break;
			default: {
				HX_STACK_LINE(229)
				HX_STACK_DO_THROW(HX_CSTRING("assert"));
			}
		}
	}
	HX_STACK_LINE(231)
	Array< ::Dynamic > metas = null();		HX_STACK_VAR(metas,"metas");
	HX_STACK_LINE(232)
	if (((((int(kind) & int((int)64))) != (int)0))){
		HX_STACK_LINE(233)
		Array< ::Dynamic > _g10 = this->readList2(this->readIndex_dyn());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(233)
		metas = _g10;
	}
	struct _Function_1_1{
		inline static Dynamic Block( Array< ::Dynamic > &metas,::format::abc::FieldKind &f,int &slot,::format::abc::Index &name){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/abc/Reader.hx",234,0xb79659f6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("name") , name,false);
				__result->Add(HX_CSTRING("slot") , slot,false);
				__result->Add(HX_CSTRING("kind") , f,false);
				__result->Add(HX_CSTRING("metadatas") , metas,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(234)
	return _Function_1_1::Block(metas,f,slot,name);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readField,return )

Dynamic Reader_obj::readClass( ){
	HX_STACK_FRAME("format.abc.Reader","readClass",0x6a38d65a,"format.abc.Reader.readClass","format/abc/Reader.hx",242,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(243)
	int _g = this->opr->readInt();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(243)
	::format::abc::Index name = ::format::abc::Index_obj::Idx(_g);		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(244)
	::format::abc::Index csuper = this->readIndexOpt();		HX_STACK_VAR(csuper,"csuper");
	HX_STACK_LINE(245)
	int flags = this->i->readByte();		HX_STACK_VAR(flags,"flags");
	HX_STACK_LINE(246)
	::format::abc::Index ns = null();		HX_STACK_VAR(ns,"ns");
	HX_STACK_LINE(247)
	if (((((int(flags) & int((int)8))) != (int)0))){
		HX_STACK_LINE(247)
		int _g1 = this->opr->readInt();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(247)
		::format::abc::Index _g2 = ::format::abc::Index_obj::Idx(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(247)
		ns = _g2;
	}
	HX_STACK_LINE(248)
	Array< ::Dynamic > interfs = this->readList2(this->readIndex_dyn());		HX_STACK_VAR(interfs,"interfs");
	HX_STACK_LINE(249)
	int _g3 = this->opr->readInt();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(249)
	::format::abc::Index construct = ::format::abc::Index_obj::Idx(_g3);		HX_STACK_VAR(construct,"construct");
	HX_STACK_LINE(250)
	Dynamic fields = this->readList2(this->readField_dyn());		HX_STACK_VAR(fields,"fields");
	struct _Function_1_1{
		inline static Dynamic Block( Array< ::Dynamic > &interfs,::format::abc::Index &construct,::format::abc::Index &ns,Dynamic &fields,int &flags,::format::abc::Index &name,::format::abc::Index &csuper){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/abc/Reader.hx",251,0xb79659f6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("name") , name,false);
				__result->Add(HX_CSTRING("superclass") , csuper,false);
				__result->Add(HX_CSTRING("interfaces") , interfs,false);
				__result->Add(HX_CSTRING("constructor") , construct,false);
				__result->Add(HX_CSTRING("fields") , fields,false);
				__result->Add(HX_CSTRING("namespace") , ns,false);
				__result->Add(HX_CSTRING("isSealed") , (((int(flags) & int((int)1))) != (int)0),false);
				__result->Add(HX_CSTRING("isFinal") , (((int(flags) & int((int)2))) != (int)0),false);
				__result->Add(HX_CSTRING("isInterface") , (((int(flags) & int((int)4))) != (int)0),false);
				__result->Add(HX_CSTRING("statics") , null(),false);
				__result->Add(HX_CSTRING("staticFields") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(251)
	return _Function_1_1::Block(interfs,construct,ns,fields,flags,name,csuper);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readClass,return )

Dynamic Reader_obj::readInit( ){
	HX_STACK_FRAME("format.abc.Reader","readInit",0xfd8f772e,"format.abc.Reader.readInit","format/abc/Reader.hx",266,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(268)
	int _g = this->opr->readInt();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(268)
	::format::abc::Index _g1 = ::format::abc::Index_obj::Idx(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(269)
	Dynamic _g2 = this->readList2(this->readField_dyn());		HX_STACK_VAR(_g2,"_g2");
	struct _Function_1_1{
		inline static Dynamic Block( ::format::abc::Index &_g1,Dynamic &_g2){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/abc/Reader.hx",267,0xb79659f6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("method") , _g1,false);
				__result->Add(HX_CSTRING("fields") , _g2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(267)
	return _Function_1_1::Block(_g1,_g2);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readInit,return )

Dynamic Reader_obj::readTryCatch( ){
	HX_STACK_FRAME("format.abc.Reader","readTryCatch",0x278fd01e,"format.abc.Reader.readTryCatch","format/abc/Reader.hx",273,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(275)
	int _g = this->opr->readInt();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(276)
	int _g1 = this->opr->readInt();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(277)
	int _g2 = this->opr->readInt();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(278)
	::format::abc::Index _g3 = this->readIndexOpt();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(279)
	::format::abc::Index _g4 = this->readIndexOpt();		HX_STACK_VAR(_g4,"_g4");
	struct _Function_1_1{
		inline static Dynamic Block( int &_g1,int &_g,::format::abc::Index &_g4,int &_g2,::format::abc::Index &_g3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/abc/Reader.hx",274,0xb79659f6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("start") , _g,false);
				__result->Add(HX_CSTRING("end") , _g1,false);
				__result->Add(HX_CSTRING("handle") , _g2,false);
				__result->Add(HX_CSTRING("type") , _g3,false);
				__result->Add(HX_CSTRING("variable") , _g4,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(274)
	return _Function_1_1::Block(_g1,_g,_g4,_g2,_g3);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readTryCatch,return )

Dynamic Reader_obj::readFunction( ){
	HX_STACK_FRAME("format.abc.Reader","readFunction",0x96fa4e36,"format.abc.Reader.readFunction","format/abc/Reader.hx",283,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(284)
	int _g = this->opr->readInt();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(284)
	::format::abc::Index t = ::format::abc::Index_obj::Idx(_g);		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(285)
	int ss = this->opr->readInt();		HX_STACK_VAR(ss,"ss");
	HX_STACK_LINE(286)
	int nregs = this->opr->readInt();		HX_STACK_VAR(nregs,"nregs");
	HX_STACK_LINE(287)
	int init_scope = this->opr->readInt();		HX_STACK_VAR(init_scope,"init_scope");
	HX_STACK_LINE(288)
	int max_scope = this->opr->readInt();		HX_STACK_VAR(max_scope,"max_scope");
	HX_STACK_LINE(289)
	int _g1 = this->opr->readInt();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(289)
	::haxe::io::Bytes code = this->i->read(_g1);		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(290)
	Dynamic trys = this->readList2(this->readTryCatch_dyn());		HX_STACK_VAR(trys,"trys");
	HX_STACK_LINE(291)
	Dynamic locals = this->readList2(this->readField_dyn());		HX_STACK_VAR(locals,"locals");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &trys,int &nregs,::haxe::io::Bytes &code,::format::abc::Index &t,Dynamic &locals,int &init_scope,int &ss,int &max_scope){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/abc/Reader.hx",292,0xb79659f6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("type") , t,false);
				__result->Add(HX_CSTRING("maxStack") , ss,false);
				__result->Add(HX_CSTRING("nRegs") , nregs,false);
				__result->Add(HX_CSTRING("initScope") , init_scope,false);
				__result->Add(HX_CSTRING("maxScope") , max_scope,false);
				__result->Add(HX_CSTRING("code") , code,false);
				__result->Add(HX_CSTRING("trys") , trys,false);
				__result->Add(HX_CSTRING("locals") , locals,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(292)
	return _Function_1_1::Block(trys,nregs,code,t,locals,init_scope,ss,max_scope);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readFunction,return )

::format::abc::ABCData Reader_obj::read( ){
	HX_STACK_FRAME("format.abc.Reader","read",0x8af7b8fe,"format.abc.Reader.read","format/abc/Reader.hx",305,0xb79659f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(305)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(306)
	int sign = this->i->readInt32();		HX_STACK_VAR(sign,"sign");
	HX_STACK_LINE(307)
	if (((sign != (int)3014672))){
		HX_STACK_LINE(308)
		HX_STACK_DO_THROW(HX_CSTRING("invalid header"));
	}
	HX_STACK_LINE(309)
	::format::abc::ABCData data = ::format::abc::ABCData_obj::__new();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(310)
	Array< int > _g1 = this->readList(this->opr->readInt32_dyn());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(310)
	data->ints = _g1;
	HX_STACK_LINE(311)
	Array< int > _g11 = this->readList(this->opr->readInt32_dyn());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(311)
	data->uints = _g11;
	HX_STACK_LINE(312)
	Array< Float > _g2 = this->readList(this->i->readDouble_dyn());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(312)
	data->floats = _g2;
	HX_STACK_LINE(313)
	Array< ::String > _g3 = this->readList(this->readString_dyn());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(313)
	data->strings = _g3;
	HX_STACK_LINE(314)
	Array< ::Dynamic > _g4 = this->readList(this->readNamespace_dyn());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(314)
	data->namespaces = _g4;
	HX_STACK_LINE(315)
	Array< ::Dynamic > _g5 = this->readList(this->readNsSet_dyn());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(315)
	data->nssets = _g5;

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
	::format::abc::Name run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","format/abc/Reader.hx",316,0xb79659f6)
		{
			HX_STACK_LINE(316)
			return _g->__get((int)0).StaticCast< ::format::abc::Reader >()->readName(null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(316)
	Array< ::Dynamic > _g6 = this->readList( Dynamic(new _Function_1_1(_g)));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(316)
	data->names = _g6;
	HX_STACK_LINE(317)
	Dynamic _g7 = this->readList2(this->readMethodType_dyn());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(317)
	data->methodTypes = _g7;
	HX_STACK_LINE(318)
	Dynamic _g8 = this->readList2(this->readMetadata_dyn());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(318)
	data->metadatas = _g8;
	HX_STACK_LINE(319)
	Dynamic _g9 = this->readList2(this->readClass_dyn());		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(319)
	data->classes = _g9;
	HX_STACK_LINE(320)
	{
		HX_STACK_LINE(320)
		int _g10 = (int)0;		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(320)
		Dynamic _g12 = data->classes;		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(320)
		while((true)){
			HX_STACK_LINE(320)
			if ((!(((_g10 < _g12->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(320)
				break;
			}
			HX_STACK_LINE(320)
			Dynamic c = _g12->__GetItem(_g10);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(320)
			++(_g10);
			HX_STACK_LINE(321)
			int _g101 = this->opr->readInt();		HX_STACK_VAR(_g101,"_g101");
			HX_STACK_LINE(321)
			::format::abc::Index _g111 = ::format::abc::Index_obj::Idx(_g101);		HX_STACK_VAR(_g111,"_g111");
			HX_STACK_LINE(321)
			c->__FieldRef(HX_CSTRING("statics")) = _g111;
			HX_STACK_LINE(322)
			Dynamic _g121 = this->readList2(this->readField_dyn());		HX_STACK_VAR(_g121,"_g121");
			HX_STACK_LINE(322)
			c->__FieldRef(HX_CSTRING("staticFields")) = _g121;
		}
	}
	HX_STACK_LINE(324)
	Dynamic _g13 = this->readList2(this->readInit_dyn());		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(324)
	data->inits = _g13;
	HX_STACK_LINE(325)
	Dynamic _g14 = this->readList2(this->readFunction_dyn());		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(325)
	data->functions = _g14;
	HX_STACK_LINE(326)
	return data;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,read,return )


Reader_obj::Reader_obj()
{
}

void Reader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Reader);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(opr,"opr");
	HX_MARK_END_CLASS();
}

void Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(opr,"opr");
}

Dynamic Reader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"opr") ) { return opr; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readList") ) { return readList_dyn(); }
		if (HX_FIELD_EQ(inName,"readName") ) { return readName_dyn(); }
		if (HX_FIELD_EQ(inName,"readInit") ) { return readInit_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readIndex") ) { return readIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"readList2") ) { return readList2_dyn(); }
		if (HX_FIELD_EQ(inName,"readNsSet") ) { return readNsSet_dyn(); }
		if (HX_FIELD_EQ(inName,"readValue") ) { return readValue_dyn(); }
		if (HX_FIELD_EQ(inName,"readField") ) { return readField_dyn(); }
		if (HX_FIELD_EQ(inName,"readClass") ) { return readClass_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readString") ) { return readString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readIndexOpt") ) { return readIndexOpt_dyn(); }
		if (HX_FIELD_EQ(inName,"readMetadata") ) { return readMetadata_dyn(); }
		if (HX_FIELD_EQ(inName,"readTryCatch") ) { return readTryCatch_dyn(); }
		if (HX_FIELD_EQ(inName,"readFunction") ) { return readFunction_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readNamespace") ) { return readNamespace_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readMethodType") ) { return readMethodType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Reader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< ::haxe::io::Input >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"opr") ) { opr=inValue.Cast< ::format::abc::OpReader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("i"));
	outFields->push(HX_CSTRING("opr"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(Reader_obj,i),HX_CSTRING("i")},
	{hx::fsObject /*::format::abc::OpReader*/ ,(int)offsetof(Reader_obj,opr),HX_CSTRING("opr")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("i"),
	HX_CSTRING("opr"),
	HX_CSTRING("readInt"),
	HX_CSTRING("readIndex"),
	HX_CSTRING("readIndexOpt"),
	HX_CSTRING("readList"),
	HX_CSTRING("readList2"),
	HX_CSTRING("readString"),
	HX_CSTRING("readNamespace"),
	HX_CSTRING("readNsSet"),
	HX_CSTRING("readName"),
	HX_CSTRING("readValue"),
	HX_CSTRING("readMethodType"),
	HX_CSTRING("readMetadata"),
	HX_CSTRING("readField"),
	HX_CSTRING("readClass"),
	HX_CSTRING("readInit"),
	HX_CSTRING("readTryCatch"),
	HX_CSTRING("readFunction"),
	HX_CSTRING("read"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reader_obj::__mClass,"__mClass");
};

#endif

Class Reader_obj::__mClass;

void Reader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.abc.Reader"), hx::TCanCast< Reader_obj> ,sStaticFields,sMemberFields,
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

void Reader_obj::__boot()
{
}

} // end namespace format
} // end namespace abc
