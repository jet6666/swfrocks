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
#ifndef INCLUDED_format_abc_OpWriter
#include <format/abc/OpWriter.h>
#endif
#ifndef INCLUDED_format_abc_Value
#include <format/abc/Value.h>
#endif
#ifndef INCLUDED_format_abc_Writer
#include <format/abc/Writer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
namespace format{
namespace abc{

Void Writer_obj::__construct(::haxe::io::Output o)
{
HX_STACK_FRAME("format.abc.Writer","new",0xb0c47928,"format.abc.Writer.new","format/abc/Writer.hx",36,0x703eae86)
HX_STACK_THIS(this)
HX_STACK_ARG(o,"o")
{
	HX_STACK_LINE(37)
	this->o = o;
	HX_STACK_LINE(38)
	::format::abc::OpWriter _g = ::format::abc::OpWriter_obj::__new(o);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(38)
	this->opw = _g;
}
;
	return null();
}

//Writer_obj::~Writer_obj() { }

Dynamic Writer_obj::__CreateEmpty() { return  new Writer_obj; }
hx::ObjectPtr< Writer_obj > Writer_obj::__new(::haxe::io::Output o)
{  hx::ObjectPtr< Writer_obj > result = new Writer_obj();
	result->__construct(o);
	return result;}

Dynamic Writer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Writer_obj > result = new Writer_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Writer_obj::beginTag( int id,int len){
{
		HX_STACK_FRAME("format.abc.Writer","beginTag",0xdfa0a9e9,"format.abc.Writer.beginTag","format/abc/Writer.hx",42,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(42)
		if (((len >= (int)63))){
			HX_STACK_LINE(43)
			this->o->writeUInt16((int((int(id) << int((int)6))) | int((int)63)));
			HX_STACK_LINE(45)
			this->o->writeInt32(len);
		}
		else{
			HX_STACK_LINE(50)
			this->o->writeUInt16((int((int(id) << int((int)6))) | int(len)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,beginTag,(void))

Void Writer_obj::writeInt( int n){
{
		HX_STACK_FRAME("format.abc.Writer","writeInt",0xc97eef88,"format.abc.Writer.writeInt","format/abc/Writer.hx",54,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(54)
		this->opw->writeInt(n);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeInt,(void))

Void Writer_obj::writeUInt( int n){
{
		HX_STACK_FRAME("format.abc.Writer","writeUInt",0x8d651ec1,"format.abc.Writer.writeUInt","format/abc/Writer.hx",58,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(58)
		this->opw->writeInt(n);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeUInt,(void))

Void Writer_obj::writeList( Dynamic a,Dynamic write){
{
		HX_STACK_FRAME("format.abc.Writer","writeList",0x878a7fa5,"format.abc.Writer.writeList","format/abc/Writer.hx",61,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(write,"write")
		HX_STACK_LINE(62)
		if (((a->__Field(HX_CSTRING("length"),true) == (int)0))){
			HX_STACK_LINE(63)
			this->opw->writeInt((int)0);
			HX_STACK_LINE(64)
			return null();
		}
		HX_STACK_LINE(66)
		this->opw->writeInt((a->__Field(HX_CSTRING("length"),true) + (int)1));
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(67)
			int _g = a->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(67)
			while((true)){
				HX_STACK_LINE(67)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(67)
					break;
				}
				HX_STACK_LINE(67)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(68)
				write(a->__GetItem(i)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeList,(void))

Void Writer_obj::writeList2( Dynamic a,Dynamic write){
{
		HX_STACK_FRAME("format.abc.Writer","writeList2",0x11a530ed,"format.abc.Writer.writeList2","format/abc/Writer.hx",71,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(write,"write")
		HX_STACK_LINE(72)
		this->opw->writeInt(a->__Field(HX_CSTRING("length"),true));
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(73)
			int _g = a->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(73)
			while((true)){
				HX_STACK_LINE(73)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(73)
					break;
				}
				HX_STACK_LINE(73)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(74)
				write(a->__GetItem(i)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeList2,(void))

Void Writer_obj::writeString( ::String s){
{
		HX_STACK_FRAME("format.abc.Writer","writeString",0x801c2bd8,"format.abc.Writer.writeString","format/abc/Writer.hx",77,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(78)
		this->opw->writeInt(s.length);
		HX_STACK_LINE(79)
		this->o->writeString(s);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeString,(void))

Void Writer_obj::writeIndex( ::format::abc::Index i){
{
		HX_STACK_FRAME("format.abc.Writer","writeIndex",0x5ab415eb,"format.abc.Writer.writeIndex","format/abc/Writer.hx",83,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			int n = (::format::abc::Index(i))->__Param(0);		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(84)
			this->opw->writeInt(n);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeIndex,(void))

Void Writer_obj::writeIndexOpt( ::format::abc::Index i){
{
		HX_STACK_FRAME("format.abc.Writer","writeIndexOpt",0xcad88308,"format.abc.Writer.writeIndexOpt","format/abc/Writer.hx",88,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(89)
		if (((i == null()))){
			HX_STACK_LINE(90)
			this->o->writeByte((int)0);
			HX_STACK_LINE(91)
			return null();
		}
		HX_STACK_LINE(93)
		this->writeIndex(i);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeIndexOpt,(void))

Void Writer_obj::writeNamespace( ::format::abc::Namespace n){
{
		HX_STACK_FRAME("format.abc.Writer","writeNamespace",0x94c645f4,"format.abc.Writer.writeNamespace","format/abc/Writer.hx",97,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(97)
		switch( (int)(n->__Index())){
			case (int)0: {
				HX_STACK_LINE(97)
				::format::abc::Index id = (::format::abc::Namespace(n))->__Param(0);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(98)
				{
					HX_STACK_LINE(99)
					this->o->writeByte((int)5);
					HX_STACK_LINE(100)
					this->writeIndex(id);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(97)
				::format::abc::Index ns = (::format::abc::Namespace(n))->__Param(0);		HX_STACK_VAR(ns,"ns");
				HX_STACK_LINE(101)
				{
					HX_STACK_LINE(102)
					this->o->writeByte((int)8);
					HX_STACK_LINE(103)
					this->writeIndex(ns);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(97)
				::format::abc::Index id = (::format::abc::Namespace(n))->__Param(0);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(104)
				{
					HX_STACK_LINE(105)
					this->o->writeByte((int)22);
					HX_STACK_LINE(106)
					this->writeIndex(id);
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(97)
				::format::abc::Index id = (::format::abc::Namespace(n))->__Param(0);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(107)
				{
					HX_STACK_LINE(108)
					this->o->writeByte((int)23);
					HX_STACK_LINE(109)
					this->writeIndex(id);
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(97)
				::format::abc::Index id = (::format::abc::Namespace(n))->__Param(0);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(110)
				{
					HX_STACK_LINE(111)
					this->o->writeByte((int)24);
					HX_STACK_LINE(112)
					this->writeIndex(id);
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(97)
				::format::abc::Index id = (::format::abc::Namespace(n))->__Param(0);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(113)
				{
					HX_STACK_LINE(114)
					this->o->writeByte((int)25);
					HX_STACK_LINE(115)
					this->writeIndex(id);
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(97)
				::format::abc::Index id = (::format::abc::Namespace(n))->__Param(0);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(116)
				{
					HX_STACK_LINE(117)
					this->o->writeByte((int)26);
					HX_STACK_LINE(118)
					this->writeIndex(id);
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeNamespace,(void))

Void Writer_obj::writeNsSet( Array< ::Dynamic > n){
{
		HX_STACK_FRAME("format.abc.Writer","writeNsSet",0x3ef62736,"format.abc.Writer.writeNsSet","format/abc/Writer.hx",122,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(123)
		this->o->writeByte(n->length);
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(124)
			while((true)){
				HX_STACK_LINE(124)
				if ((!(((_g < n->length))))){
					HX_STACK_LINE(124)
					break;
				}
				HX_STACK_LINE(124)
				::format::abc::Index i = n->__get(_g).StaticCast< ::format::abc::Index >();		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(124)
				++(_g);
				HX_STACK_LINE(125)
				this->writeIndex(i);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeNsSet,(void))

Void Writer_obj::writeNameByte( int k,int n){
{
		HX_STACK_FRAME("format.abc.Writer","writeNameByte",0x41e251ba,"format.abc.Writer.writeNameByte","format/abc/Writer.hx",129,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(k,"k")
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(129)
		this->o->writeByte((  (((k < (int)0))) ? int(n) : int(k) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeNameByte,(void))

Void Writer_obj::writeName( hx::Null< int >  __o_k,::format::abc::Name n){
int k = __o_k.Default(-1);
	HX_STACK_FRAME("format.abc.Writer","writeName",0x88d6d592,"format.abc.Writer.writeName","format/abc/Writer.hx",133,0x703eae86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_ARG(n,"n")
{
		HX_STACK_LINE(133)
		switch( (int)(n->__Index())){
			case (int)0: {
				HX_STACK_LINE(133)
				::format::abc::Index ns = (::format::abc::Name(n))->__Param(1);		HX_STACK_VAR(ns,"ns");
				HX_STACK_LINE(133)
				::format::abc::Index id = (::format::abc::Name(n))->__Param(0);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(134)
				{
					HX_STACK_LINE(135)
					this->o->writeByte((  (((k < (int)0))) ? int((int)7) : int(k) ));
					HX_STACK_LINE(136)
					this->writeIndex(ns);
					HX_STACK_LINE(137)
					this->writeIndex(id);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(133)
				::format::abc::Index ns = (::format::abc::Name(n))->__Param(1);		HX_STACK_VAR(ns,"ns");
				HX_STACK_LINE(133)
				::format::abc::Index id = (::format::abc::Name(n))->__Param(0);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(138)
				{
					HX_STACK_LINE(139)
					this->o->writeByte((  (((k < (int)0))) ? int((int)9) : int(k) ));
					HX_STACK_LINE(140)
					this->writeIndex(id);
					HX_STACK_LINE(141)
					this->writeIndex(ns);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(133)
				::format::abc::Index n1 = (::format::abc::Name(n))->__Param(0);		HX_STACK_VAR(n1,"n1");
				HX_STACK_LINE(142)
				{
					HX_STACK_LINE(143)
					this->o->writeByte((  (((k < (int)0))) ? int((int)15) : int(k) ));
					HX_STACK_LINE(144)
					this->writeIndex(n1);
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(146)
				this->o->writeByte((  (((k < (int)0))) ? int((int)17) : int(k) ));
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(133)
				::format::abc::Index ns = (::format::abc::Name(n))->__Param(0);		HX_STACK_VAR(ns,"ns");
				HX_STACK_LINE(147)
				{
					HX_STACK_LINE(148)
					this->o->writeByte((  (((k < (int)0))) ? int((int)27) : int(k) ));
					HX_STACK_LINE(149)
					this->writeIndex(ns);
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(133)
				::format::abc::Name n1 = (::format::abc::Name(n))->__Param(0);		HX_STACK_VAR(n1,"n1");
				HX_STACK_LINE(150)
				{
					HX_STACK_LINE(151)
					int _g;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(151)
					switch( (int)(n1->__Index())){
						case (int)0: {
							HX_STACK_LINE(152)
							_g = (int)13;
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(153)
							_g = (int)14;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(154)
							_g = (int)16;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(155)
							_g = (int)18;
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(156)
							_g = (int)28;
						}
						;break;
						case (int)5: case (int)6: {
							HX_STACK_LINE(157)
							HX_STACK_DO_THROW(HX_CSTRING("assert"));
						}
						;break;
					}
					HX_STACK_LINE(151)
					this->writeName(_g,n1);
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(133)
				Array< ::Dynamic > params = (::format::abc::Name(n))->__Param(1);		HX_STACK_VAR(params,"params");
				HX_STACK_LINE(133)
				::format::abc::Index n1 = (::format::abc::Name(n))->__Param(0);		HX_STACK_VAR(n1,"n1");
				HX_STACK_LINE(159)
				{
					HX_STACK_LINE(160)
					this->o->writeByte((  (((k < (int)0))) ? int((int)29) : int(k) ));
					HX_STACK_LINE(161)
					this->writeIndex(n1);
					HX_STACK_LINE(162)
					this->o->writeByte(params->length);
					HX_STACK_LINE(163)
					{
						HX_STACK_LINE(163)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(163)
						while((true)){
							HX_STACK_LINE(163)
							if ((!(((_g < params->length))))){
								HX_STACK_LINE(163)
								break;
							}
							HX_STACK_LINE(163)
							::format::abc::Index i = params->__get(_g).StaticCast< ::format::abc::Index >();		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(163)
							++(_g);
							HX_STACK_LINE(164)
							this->writeIndex(i);
						}
					}
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeName,(void))

Void Writer_obj::writeValue( bool extra,::format::abc::Value v){
{
		HX_STACK_FRAME("format.abc.Writer","writeValue",0xce57fa4a,"format.abc.Writer.writeValue","format/abc/Writer.hx",168,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(extra,"extra")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(169)
		if (((v == null()))){
			HX_STACK_LINE(170)
			if ((extra)){
				HX_STACK_LINE(170)
				this->o->writeByte((int)0);
			}
			HX_STACK_LINE(171)
			this->o->writeByte((int)0);
			HX_STACK_LINE(172)
			return null();
		}
		HX_STACK_LINE(174)
		switch( (int)(v->__Index())){
			case (int)0: {
				HX_STACK_LINE(176)
				this->o->writeByte((int)12);
				HX_STACK_LINE(177)
				this->o->writeByte((int)12);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(174)
				bool b = (::format::abc::Value(v))->__Param(0);		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(178)
				{
					HX_STACK_LINE(179)
					int c;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(179)
					if ((b)){
						HX_STACK_LINE(179)
						c = (int)11;
					}
					else{
						HX_STACK_LINE(179)
						c = (int)10;
					}
					HX_STACK_LINE(180)
					this->o->writeByte(c);
					HX_STACK_LINE(181)
					this->o->writeByte(c);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(174)
				::format::abc::Index i = (::format::abc::Value(v))->__Param(0);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(182)
				{
					HX_STACK_LINE(183)
					this->writeIndex(i);
					HX_STACK_LINE(184)
					this->o->writeByte((int)1);
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(174)
				::format::abc::Index i = (::format::abc::Value(v))->__Param(0);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(185)
				{
					HX_STACK_LINE(186)
					this->writeIndex(i);
					HX_STACK_LINE(187)
					this->o->writeByte((int)3);
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(174)
				::format::abc::Index i = (::format::abc::Value(v))->__Param(0);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(188)
				{
					HX_STACK_LINE(189)
					this->writeIndex(i);
					HX_STACK_LINE(190)
					this->o->writeByte((int)4);
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(174)
				::format::abc::Index i = (::format::abc::Value(v))->__Param(0);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(191)
				{
					HX_STACK_LINE(192)
					this->writeIndex(i);
					HX_STACK_LINE(193)
					this->o->writeByte((int)6);
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(174)
				::format::abc::Index i = (::format::abc::Value(v))->__Param(1);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(174)
				int n = (::format::abc::Value(v))->__Param(0);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(194)
				{
					HX_STACK_LINE(195)
					this->writeIndex(i);
					HX_STACK_LINE(196)
					this->o->writeByte(n);
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeValue,(void))

Void Writer_obj::writeField( Dynamic f){
{
		HX_STACK_FRAME("format.abc.Writer","writeField",0x9d330f93,"format.abc.Writer.writeField","format/abc/Writer.hx",200,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(201)
		this->writeIndex(f->__Field(HX_CSTRING("name"),true));
		HX_STACK_LINE(202)
		int flags = (int)0;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(203)
		if (((f->__Field(HX_CSTRING("metadatas"),true) != null()))){
			HX_STACK_LINE(203)
			hx::OrEq(flags,(int)64);
		}
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			::format::abc::FieldKind _g = f->__Field(HX_CSTRING("kind"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(204)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(204)
					Dynamic _const = (::format::abc::FieldKind(_g))->__Param(2);		HX_STACK_VAR(_const,"const");
					HX_STACK_LINE(204)
					::format::abc::Value v = (::format::abc::FieldKind(_g))->__Param(1);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(204)
					::format::abc::Index t = (::format::abc::FieldKind(_g))->__Param(0);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(205)
					{
						HX_STACK_LINE(206)
						this->o->writeByte((int(((  ((_const)) ? int((int)6) : int((int)0) ))) | int(flags)));
						HX_STACK_LINE(207)
						this->opw->writeInt(f->__Field(HX_CSTRING("slot"),true));
						HX_STACK_LINE(208)
						this->writeIndexOpt(t);
						HX_STACK_LINE(209)
						this->writeValue(false,v);
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(204)
					Dynamic isOverride = (::format::abc::FieldKind(_g))->__Param(3);		HX_STACK_VAR(isOverride,"isOverride");
					HX_STACK_LINE(204)
					Dynamic isFinal = (::format::abc::FieldKind(_g))->__Param(2);		HX_STACK_VAR(isFinal,"isFinal");
					HX_STACK_LINE(204)
					::format::abc::MethodKind k = (::format::abc::FieldKind(_g))->__Param(1);		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(204)
					::format::abc::Index t = (::format::abc::FieldKind(_g))->__Param(0);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(210)
					{
						HX_STACK_LINE(211)
						if ((isFinal)){
							HX_STACK_LINE(211)
							hx::OrEq(flags,(int)16);
						}
						HX_STACK_LINE(212)
						if ((isOverride)){
							HX_STACK_LINE(212)
							hx::OrEq(flags,(int)32);
						}
						HX_STACK_LINE(213)
						switch( (int)(k->__Index())){
							case (int)0: {
								HX_STACK_LINE(214)
								hx::OrEq(flags,(int)1);
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(215)
								hx::OrEq(flags,(int)2);
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(216)
								hx::OrEq(flags,(int)3);
							}
							;break;
						}
						HX_STACK_LINE(218)
						this->o->writeByte(flags);
						HX_STACK_LINE(219)
						this->opw->writeInt(f->__Field(HX_CSTRING("slot"),true));
						HX_STACK_LINE(220)
						this->writeIndex(t);
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(204)
					::format::abc::Index c = (::format::abc::FieldKind(_g))->__Param(0);		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(221)
					{
						HX_STACK_LINE(222)
						this->o->writeByte((int((int)4) | int(flags)));
						HX_STACK_LINE(223)
						this->opw->writeInt(f->__Field(HX_CSTRING("slot"),true));
						HX_STACK_LINE(224)
						this->writeIndex(c);
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(204)
					::format::abc::Index i = (::format::abc::FieldKind(_g))->__Param(0);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(225)
					{
						HX_STACK_LINE(226)
						this->o->writeByte((int((int)5) | int(flags)));
						HX_STACK_LINE(227)
						this->opw->writeInt(f->__Field(HX_CSTRING("slot"),true));
						HX_STACK_LINE(228)
						this->writeIndex(i);
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(230)
		if (((f->__Field(HX_CSTRING("metadatas"),true) != null()))){
			HX_STACK_LINE(231)
			this->writeList2(f->__Field(HX_CSTRING("metadatas"),true),this->writeIndex_dyn());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeField,(void))

Void Writer_obj::writeMethodType( Dynamic m){
{
		HX_STACK_FRAME("format.abc.Writer","writeMethodType",0xa6902cc2,"format.abc.Writer.writeMethodType","format/abc/Writer.hx",234,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(235)
		this->o->writeByte(m->__Field(HX_CSTRING("args"),true)->__Field(HX_CSTRING("length"),true));
		HX_STACK_LINE(236)
		this->writeIndexOpt(m->__Field(HX_CSTRING("ret"),true));
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(237)
			Array< ::Dynamic > _g1 = m->__Field(HX_CSTRING("args"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(237)
			while((true)){
				HX_STACK_LINE(237)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(237)
					break;
				}
				HX_STACK_LINE(237)
				::format::abc::Index a = _g1->__get(_g).StaticCast< ::format::abc::Index >();		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(237)
				++(_g);
				HX_STACK_LINE(238)
				this->writeIndexOpt(a);
			}
		}
		HX_STACK_LINE(239)
		Dynamic x = m->__Field(HX_CSTRING("extra"),true);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(240)
		if (((x == null()))){
			HX_STACK_LINE(241)
			this->writeIndexOpt(null());
			HX_STACK_LINE(242)
			this->o->writeByte((int)0);
			HX_STACK_LINE(243)
			return null();
		}
		HX_STACK_LINE(245)
		this->writeIndexOpt(x->__Field(HX_CSTRING("debugName"),true));
		HX_STACK_LINE(246)
		int flags = (int)0;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(247)
		if ((x->__Field(HX_CSTRING("argumentsDefined"),true))){
			HX_STACK_LINE(247)
			hx::OrEq(flags,(int)1);
		}
		HX_STACK_LINE(248)
		if ((x->__Field(HX_CSTRING("newBlock"),true))){
			HX_STACK_LINE(248)
			hx::OrEq(flags,(int)2);
		}
		HX_STACK_LINE(249)
		if ((x->__Field(HX_CSTRING("variableArgs"),true))){
			HX_STACK_LINE(249)
			hx::OrEq(flags,(int)4);
		}
		HX_STACK_LINE(250)
		if (((x->__Field(HX_CSTRING("defaultParameters"),true) != null()))){
			HX_STACK_LINE(250)
			hx::OrEq(flags,(int)8);
		}
		HX_STACK_LINE(251)
		if ((x->__Field(HX_CSTRING("unused"),true))){
			HX_STACK_LINE(251)
			hx::OrEq(flags,(int)16);
		}
		HX_STACK_LINE(252)
		if ((x->__Field(HX_CSTRING("native"),true))){
			HX_STACK_LINE(252)
			hx::OrEq(flags,(int)32);
		}
		HX_STACK_LINE(253)
		if ((x->__Field(HX_CSTRING("usesDXNS"),true))){
			HX_STACK_LINE(253)
			hx::OrEq(flags,(int)64);
		}
		HX_STACK_LINE(254)
		if (((x->__Field(HX_CSTRING("paramNames"),true) != null()))){
			HX_STACK_LINE(254)
			hx::OrEq(flags,(int)128);
		}
		HX_STACK_LINE(255)
		this->o->writeByte(flags);
		HX_STACK_LINE(256)
		if (((x->__Field(HX_CSTRING("defaultParameters"),true) != null()))){
			HX_STACK_LINE(257)
			this->o->writeByte(x->__Field(HX_CSTRING("defaultParameters"),true)->__Field(HX_CSTRING("length"),true));
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(258)
				Array< ::Dynamic > _g1 = x->__Field(HX_CSTRING("defaultParameters"),true);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(258)
				while((true)){
					HX_STACK_LINE(258)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(258)
						break;
					}
					HX_STACK_LINE(258)
					::format::abc::Value v = _g1->__get(_g).StaticCast< ::format::abc::Value >();		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(258)
					++(_g);
					HX_STACK_LINE(259)
					this->writeValue(true,v);
				}
			}
		}
		HX_STACK_LINE(261)
		if (((x->__Field(HX_CSTRING("paramNames"),true) != null()))){
			HX_STACK_LINE(262)
			if (((x->__Field(HX_CSTRING("paramNames"),true)->__Field(HX_CSTRING("length"),true) != m->__Field(HX_CSTRING("args"),true)->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(262)
				HX_STACK_DO_THROW(HX_CSTRING("assert"));
			}
			HX_STACK_LINE(263)
			{
				HX_STACK_LINE(263)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(263)
				Array< ::Dynamic > _g1 = x->__Field(HX_CSTRING("paramNames"),true);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(263)
				while((true)){
					HX_STACK_LINE(263)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(263)
						break;
					}
					HX_STACK_LINE(263)
					::format::abc::Index i = _g1->__get(_g).StaticCast< ::format::abc::Index >();		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(263)
					++(_g);
					HX_STACK_LINE(264)
					this->writeIndexOpt(i);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeMethodType,(void))

Void Writer_obj::writeMetadata( Dynamic m){
{
		HX_STACK_FRAME("format.abc.Writer","writeMetadata",0x4451fa36,"format.abc.Writer.writeMetadata","format/abc/Writer.hx",268,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(269)
		this->writeIndex(m->__Field(HX_CSTRING("name"),true));
		HX_STACK_LINE(270)
		this->opw->writeInt(m->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("length"),true));
		HX_STACK_LINE(271)
		{
			HX_STACK_LINE(271)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(271)
			Dynamic _g1 = m->__Field(HX_CSTRING("data"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(271)
			while((true)){
				HX_STACK_LINE(271)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(271)
					break;
				}
				HX_STACK_LINE(271)
				Dynamic d = _g1->__GetItem(_g);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(271)
				++(_g);
				HX_STACK_LINE(272)
				this->writeIndex(d->__Field(HX_CSTRING("n"),true));
			}
		}
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(273)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(273)
			Dynamic _g1 = m->__Field(HX_CSTRING("data"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(273)
			while((true)){
				HX_STACK_LINE(273)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(273)
					break;
				}
				HX_STACK_LINE(273)
				Dynamic d = _g1->__GetItem(_g);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(273)
				++(_g);
				HX_STACK_LINE(274)
				this->writeIndex(d->__Field(HX_CSTRING("v"),true));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeMetadata,(void))

Void Writer_obj::writeClass( Dynamic c){
{
		HX_STACK_FRAME("format.abc.Writer","writeClass",0xe4f7f311,"format.abc.Writer.writeClass","format/abc/Writer.hx",277,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(278)
		this->writeIndex(c->__Field(HX_CSTRING("name"),true));
		HX_STACK_LINE(279)
		this->writeIndexOpt(c->__Field(HX_CSTRING("superclass"),true));
		HX_STACK_LINE(280)
		int flags = (int)0;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(281)
		if ((c->__Field(HX_CSTRING("isSealed"),true))){
			HX_STACK_LINE(281)
			hx::OrEq(flags,(int)1);
		}
		HX_STACK_LINE(282)
		if ((c->__Field(HX_CSTRING("isFinal"),true))){
			HX_STACK_LINE(282)
			hx::OrEq(flags,(int)2);
		}
		HX_STACK_LINE(283)
		if ((c->__Field(HX_CSTRING("isInterface"),true))){
			HX_STACK_LINE(283)
			hx::OrEq(flags,(int)4);
		}
		HX_STACK_LINE(284)
		if (((c->__Field(HX_CSTRING("namespace"),true) != null()))){
			HX_STACK_LINE(284)
			hx::OrEq(flags,(int)8);
		}
		HX_STACK_LINE(285)
		this->o->writeByte(flags);
		HX_STACK_LINE(286)
		if (((c->__Field(HX_CSTRING("namespace"),true) != null()))){
			HX_STACK_LINE(287)
			this->writeIndex(c->__Field(HX_CSTRING("namespace"),true));
		}
		HX_STACK_LINE(288)
		this->writeList2(c->__Field(HX_CSTRING("interfaces"),true),this->writeIndex_dyn());
		HX_STACK_LINE(289)
		this->writeIndex(c->__Field(HX_CSTRING("constructor"),true));
		HX_STACK_LINE(290)
		this->writeList2(c->__Field(HX_CSTRING("fields"),true),this->writeField_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeClass,(void))

Void Writer_obj::writeInit( Dynamic i){
{
		HX_STACK_FRAME("format.abc.Writer","writeInit",0x85929e57,"format.abc.Writer.writeInit","format/abc/Writer.hx",293,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(294)
		this->writeIndex(i->__Field(HX_CSTRING("method"),true));
		HX_STACK_LINE(295)
		this->writeList2(i->__Field(HX_CSTRING("fields"),true),this->writeField_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeInit,(void))

Void Writer_obj::writeTryCatch( Dynamic t){
{
		HX_STACK_FRAME("format.abc.Writer","writeTryCatch",0xa9203fc7,"format.abc.Writer.writeTryCatch","format/abc/Writer.hx",298,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(299)
		this->opw->writeInt(t->__Field(HX_CSTRING("start"),true));
		HX_STACK_LINE(300)
		this->opw->writeInt(t->__Field(HX_CSTRING("end"),true));
		HX_STACK_LINE(301)
		this->opw->writeInt(t->__Field(HX_CSTRING("handle"),true));
		HX_STACK_LINE(302)
		this->writeIndexOpt(t->__Field(HX_CSTRING("type"),true));
		HX_STACK_LINE(303)
		this->writeIndexOpt(t->__Field(HX_CSTRING("variable"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeTryCatch,(void))

Void Writer_obj::writeFunction( Dynamic f){
{
		HX_STACK_FRAME("format.abc.Writer","writeFunction",0x188abddf,"format.abc.Writer.writeFunction","format/abc/Writer.hx",306,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(307)
		this->writeIndex(f->__Field(HX_CSTRING("type"),true));
		HX_STACK_LINE(308)
		this->opw->writeInt(f->__Field(HX_CSTRING("maxStack"),true));
		HX_STACK_LINE(309)
		this->opw->writeInt(f->__Field(HX_CSTRING("nRegs"),true));
		HX_STACK_LINE(310)
		this->opw->writeInt(f->__Field(HX_CSTRING("initScope"),true));
		HX_STACK_LINE(311)
		this->opw->writeInt(f->__Field(HX_CSTRING("maxScope"),true));
		HX_STACK_LINE(312)
		this->opw->writeInt(f->__Field(HX_CSTRING("code"),true)->__Field(HX_CSTRING("length"),true));
		HX_STACK_LINE(313)
		this->o->write(f->__Field(HX_CSTRING("code"),true));
		HX_STACK_LINE(314)
		this->writeList2(f->__Field(HX_CSTRING("trys"),true),this->writeTryCatch_dyn());
		HX_STACK_LINE(315)
		this->writeList2(f->__Field(HX_CSTRING("locals"),true),this->writeField_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeFunction,(void))

Void Writer_obj::write( ::format::abc::ABCData d){
{
		HX_STACK_FRAME("format.abc.Writer","write",0xfcdbd7a7,"format.abc.Writer.write","format/abc/Writer.hx",318,0x703eae86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(d,"d")
		HX_STACK_LINE(318)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(320)
		this->o->writeInt32((int)3014672);
		HX_STACK_LINE(324)
		this->writeList(d->ints,this->opw->writeInt32_dyn());
		HX_STACK_LINE(325)
		this->writeList(d->uints,this->opw->writeInt32_dyn());
		HX_STACK_LINE(326)
		this->writeList(d->floats,this->o->writeDouble_dyn());
		HX_STACK_LINE(327)
		this->writeList(d->strings,this->writeString_dyn());
		HX_STACK_LINE(328)
		this->writeList(d->namespaces,this->writeNamespace_dyn());
		HX_STACK_LINE(329)
		this->writeList(d->nssets,this->writeNsSet_dyn());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::format::abc::Name n){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","format/abc/Writer.hx",330,0x703eae86)
			HX_STACK_ARG(n,"n")
			{
				HX_STACK_LINE(330)
				_g->__get((int)0).StaticCast< ::format::abc::Writer >()->writeName((int)-1,n);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(330)
		this->writeList(d->names, Dynamic(new _Function_1_1(_g)));
		HX_STACK_LINE(331)
		this->writeList2(d->methodTypes,this->writeMethodType_dyn());
		HX_STACK_LINE(332)
		this->writeList2(d->metadatas,this->writeMetadata_dyn());
		HX_STACK_LINE(333)
		this->writeList2(d->classes,this->writeClass_dyn());
		HX_STACK_LINE(334)
		{
			HX_STACK_LINE(334)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(334)
			Dynamic _g11 = d->classes;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(334)
			while((true)){
				HX_STACK_LINE(334)
				if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(334)
					break;
				}
				HX_STACK_LINE(334)
				Dynamic c = _g11->__GetItem(_g1);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(334)
				++(_g1);
				HX_STACK_LINE(335)
				this->writeIndex(c->__Field(HX_CSTRING("statics"),true));
				HX_STACK_LINE(336)
				this->writeList2(c->__Field(HX_CSTRING("staticFields"),true),this->writeField_dyn());
			}
		}
		HX_STACK_LINE(338)
		this->writeList2(d->inits,this->writeInit_dyn());
		HX_STACK_LINE(339)
		this->writeList2(d->functions,this->writeFunction_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,write,(void))


Writer_obj::Writer_obj()
{
}

void Writer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Writer);
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_MEMBER_NAME(opw,"opw");
	HX_MARK_END_CLASS();
}

void Writer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(o,"o");
	HX_VISIT_MEMBER_NAME(opw,"opw");
}

Dynamic Writer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { return o; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"opw") ) { return opw; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return write_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"beginTag") ) { return beginTag_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeUInt") ) { return writeUInt_dyn(); }
		if (HX_FIELD_EQ(inName,"writeList") ) { return writeList_dyn(); }
		if (HX_FIELD_EQ(inName,"writeName") ) { return writeName_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInit") ) { return writeInit_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeList2") ) { return writeList2_dyn(); }
		if (HX_FIELD_EQ(inName,"writeIndex") ) { return writeIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"writeNsSet") ) { return writeNsSet_dyn(); }
		if (HX_FIELD_EQ(inName,"writeValue") ) { return writeValue_dyn(); }
		if (HX_FIELD_EQ(inName,"writeField") ) { return writeField_dyn(); }
		if (HX_FIELD_EQ(inName,"writeClass") ) { return writeClass_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeString") ) { return writeString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeIndexOpt") ) { return writeIndexOpt_dyn(); }
		if (HX_FIELD_EQ(inName,"writeNameByte") ) { return writeNameByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeMetadata") ) { return writeMetadata_dyn(); }
		if (HX_FIELD_EQ(inName,"writeTryCatch") ) { return writeTryCatch_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFunction") ) { return writeFunction_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"writeNamespace") ) { return writeNamespace_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"writeMethodType") ) { return writeMethodType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Writer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< ::haxe::io::Output >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"opw") ) { opw=inValue.Cast< ::format::abc::OpWriter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Writer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("o"));
	outFields->push(HX_CSTRING("opw"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Output*/ ,(int)offsetof(Writer_obj,o),HX_CSTRING("o")},
	{hx::fsObject /*::format::abc::OpWriter*/ ,(int)offsetof(Writer_obj,opw),HX_CSTRING("opw")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("o"),
	HX_CSTRING("opw"),
	HX_CSTRING("beginTag"),
	HX_CSTRING("writeInt"),
	HX_CSTRING("writeUInt"),
	HX_CSTRING("writeList"),
	HX_CSTRING("writeList2"),
	HX_CSTRING("writeString"),
	HX_CSTRING("writeIndex"),
	HX_CSTRING("writeIndexOpt"),
	HX_CSTRING("writeNamespace"),
	HX_CSTRING("writeNsSet"),
	HX_CSTRING("writeNameByte"),
	HX_CSTRING("writeName"),
	HX_CSTRING("writeValue"),
	HX_CSTRING("writeField"),
	HX_CSTRING("writeMethodType"),
	HX_CSTRING("writeMetadata"),
	HX_CSTRING("writeClass"),
	HX_CSTRING("writeInit"),
	HX_CSTRING("writeTryCatch"),
	HX_CSTRING("writeFunction"),
	HX_CSTRING("write"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Writer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Writer_obj::__mClass,"__mClass");
};

#endif

Class Writer_obj::__mClass;

void Writer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.abc.Writer"), hx::TCanCast< Writer_obj> ,sStaticFields,sMemberFields,
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

void Writer_obj::__boot()
{
}

} // end namespace format
} // end namespace abc
