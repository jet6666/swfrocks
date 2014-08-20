#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_format_swf_ColorModel
#include <format/swf/ColorModel.h>
#endif
#ifndef INCLUDED_format_swf_JPEGData
#include <format/swf/JPEGData.h>
#endif
#ifndef INCLUDED_format_swf_PlaceObject
#include <format/swf/PlaceObject.h>
#endif
#ifndef INCLUDED_format_swf_SWFTag
#include <format/swf/SWFTag.h>
#endif
#ifndef INCLUDED_format_swf_SoundData
#include <format/swf/SoundData.h>
#endif
#ifndef INCLUDED_format_swf_SoundFormat
#include <format/swf/SoundFormat.h>
#endif
#ifndef INCLUDED_format_swf_SoundRate
#include <format/swf/SoundRate.h>
#endif
#ifndef INCLUDED_format_swf_Tools
#include <format/swf/Tools.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
namespace format{
namespace swf{

Void Tools_obj::__construct()
{
	return null();
}

//Tools_obj::~Tools_obj() { }

Dynamic Tools_obj::__CreateEmpty() { return  new Tools_obj; }
hx::ObjectPtr< Tools_obj > Tools_obj::__new()
{  hx::ObjectPtr< Tools_obj > result = new Tools_obj();
	result->__construct();
	return result;}

Dynamic Tools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tools_obj > result = new Tools_obj();
	result->__construct();
	return result;}

int Tools_obj::signExtend( int v,int nbits){
	HX_STACK_FRAME("format.swf.Tools","signExtend",0xecac3ecd,"format.swf.Tools.signExtend","format/swf/Tools.hx",35,0x069e9868)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(nbits,"nbits")
	HX_STACK_LINE(36)
	int max = (int((int)1) << int(nbits));		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(38)
	if (((((int(v) & int((int(max) >> int((int)1))))) != (int)0))){
		HX_STACK_LINE(39)
		return (v - max);
	}
	HX_STACK_LINE(40)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,signExtend,return )

Float Tools_obj::floatFixedBits( int i,int nbits){
	HX_STACK_FRAME("format.swf.Tools","floatFixedBits",0x5318b134,"format.swf.Tools.floatFixedBits","format/swf/Tools.hx",43,0x069e9868)
	HX_STACK_ARG(i,"i")
	HX_STACK_ARG(nbits,"nbits")
	HX_STACK_LINE(44)
	int _g = ::format::swf::Tools_obj::signExtend(i,nbits);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(44)
	i = _g;
	HX_STACK_LINE(45)
	return (Float(i) / Float(65536.0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,floatFixedBits,return )

Float Tools_obj::floatFixed( int i){
	HX_STACK_FRAME("format.swf.Tools","floatFixed",0x483aeb0e,"format.swf.Tools.floatFixed","format/swf/Tools.hx",50,0x069e9868)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(50)
	return (Float(i) / Float(65536.0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,floatFixed,return )

Float Tools_obj::floatFixed8( int i){
	HX_STACK_FRAME("format.swf.Tools","floatFixed8",0xeb52c16a,"format.swf.Tools.floatFixed8","format/swf/Tools.hx",57,0x069e9868)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(57)
	return (Float(i) / Float(256.0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,floatFixed8,return )

int Tools_obj::toFixed8( Float f){
	HX_STACK_FRAME("format.swf.Tools","toFixed8",0xd4190f75,"format.swf.Tools.toFixed8","format/swf/Tools.hx",60,0x069e9868)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(61)
	if (((bool((f < -128.)) || bool((f >= 128.0))))){
		HX_STACK_LINE(62)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::Overflow);
	}
	HX_STACK_LINE(63)
	return ::Std_obj::_int((f * 256.0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,toFixed8,return )

int Tools_obj::toFixed16( Float f){
	HX_STACK_FRAME("format.swf.Tools","toFixed16",0xc1d47108,"format.swf.Tools.toFixed16","format/swf/Tools.hx",66,0x069e9868)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(67)
	if (((bool((f < -32768.)) || bool((f >= 32768.0))))){
		HX_STACK_LINE(68)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::Overflow);
	}
	HX_STACK_LINE(69)
	return ::Std_obj::_int((f * 65536.0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,toFixed16,return )

int Tools_obj::minBits( Array< int > values){
	HX_STACK_FRAME("format.swf.Tools","minBits",0x8e1b8b22,"format.swf.Tools.minBits","format/swf/Tools.hx",73,0x069e9868)
	HX_STACK_ARG(values,"values")
	HX_STACK_LINE(75)
	int x = (int)0;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		while((true)){
			HX_STACK_LINE(76)
			if ((!(((_g < values->length))))){
				HX_STACK_LINE(76)
				break;
			}
			HX_STACK_LINE(76)
			int v = values->__get(_g);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(76)
			++(_g);
			HX_STACK_LINE(78)
			if (((v < (int)0))){
				HX_STACK_LINE(78)
				v = -(v);
			}
			HX_STACK_LINE(79)
			hx::OrEq(x,v);
		}
	}
	HX_STACK_LINE(83)
	hx::OrEq(x,(int(x) >> int((int)1)));
	HX_STACK_LINE(84)
	hx::OrEq(x,(int(x) >> int((int)2)));
	HX_STACK_LINE(85)
	hx::OrEq(x,(int(x) >> int((int)4)));
	HX_STACK_LINE(86)
	hx::OrEq(x,(int(x) >> int((int)8)));
	HX_STACK_LINE(87)
	hx::OrEq(x,(int(x) >> int((int)16)));
	HX_STACK_LINE(90)
	hx::SubEq(x,(int((int(x) >> int((int)1))) & int((int)357913941)));
	HX_STACK_LINE(91)
	x = (((int((int(x) >> int((int)2))) & int((int)858993459))) + ((int(x) & int((int)858993459))));
	HX_STACK_LINE(92)
	x = (int((((int(x) >> int((int)4))) + x)) & int((int)252645135));
	HX_STACK_LINE(93)
	hx::AddEq(x,(int(x) >> int((int)8)));
	HX_STACK_LINE(94)
	hx::AddEq(x,(int(x) >> int((int)16)));
	HX_STACK_LINE(95)
	hx::AndEq(x,(int)63);
	HX_STACK_LINE(97)
	return x;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,minBits,return )

::String Tools_obj::hex( ::haxe::io::Bytes b,Dynamic max){
	HX_STACK_FRAME("format.swf.Tools","hex",0x412ee745,"format.swf.Tools.hex","format/swf/Tools.hx",100,0x069e9868)
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(101)
	Array< int > hex = Array_obj< int >::__new().Add((int)48).Add((int)49).Add((int)50).Add((int)51).Add((int)52).Add((int)53).Add((int)54).Add((int)55).Add((int)56).Add((int)57).Add((int)65).Add((int)66).Add((int)67).Add((int)68).Add((int)69).Add((int)70);		HX_STACK_VAR(hex,"hex");
	HX_STACK_LINE(102)
	Dynamic count;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(102)
	if (((bool((max == null())) || bool((b->length <= max))))){
		HX_STACK_LINE(102)
		count = b->length;
	}
	else{
		HX_STACK_LINE(102)
		count = max;
	}
	HX_STACK_LINE(103)
	::StringBuf buf = ::StringBuf_obj::__new();		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(104)
	{
		HX_STACK_LINE(104)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(104)
		while((true)){
			HX_STACK_LINE(104)
			if ((!(((_g < count))))){
				HX_STACK_LINE(104)
				break;
			}
			HX_STACK_LINE(104)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(105)
			int v = b->b->__get(i);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(106)
			{
				HX_STACK_LINE(106)
				::String _g1 = ::String::fromCharCode(hex->__get((int(v) >> int((int)4))));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(106)
				buf->b->push(_g1);
			}
			HX_STACK_LINE(107)
			{
				HX_STACK_LINE(107)
				::String _g1 = ::String::fromCharCode(hex->__get((int(v) & int((int)15))));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(107)
				buf->b->push(_g1);
			}
		}
	}
	HX_STACK_LINE(109)
	if (((count < b->length))){
		HX_STACK_LINE(110)
		buf->add(HX_CSTRING("..."));
	}
	HX_STACK_LINE(111)
	return buf->b->join(HX_CSTRING(""));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,hex,return )

::String Tools_obj::bin( ::haxe::io::Bytes b,Dynamic maxBytes){
	HX_STACK_FRAME("format.swf.Tools","bin",0x412a5d31,"format.swf.Tools.bin","format/swf/Tools.hx",114,0x069e9868)
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(maxBytes,"maxBytes")
	HX_STACK_LINE(115)
	::StringBuf buf = ::StringBuf_obj::__new();		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(116)
	Dynamic cnt;		HX_STACK_VAR(cnt,"cnt");
	HX_STACK_LINE(116)
	if (((maxBytes == null()))){
		HX_STACK_LINE(116)
		cnt = b->length;
	}
	else{
		HX_STACK_LINE(116)
		if (((maxBytes > b->length))){
			HX_STACK_LINE(116)
			cnt = b->length;
		}
		else{
			HX_STACK_LINE(116)
			cnt = maxBytes;
		}
	}
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		while((true)){
			HX_STACK_LINE(118)
			if ((!(((_g < cnt))))){
				HX_STACK_LINE(118)
				break;
			}
			HX_STACK_LINE(118)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(119)
			int v = b->b->__get(i);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(120)
			{
				HX_STACK_LINE(120)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(120)
				while((true)){
					HX_STACK_LINE(120)
					if ((!(((_g1 < (int)8))))){
						HX_STACK_LINE(120)
						break;
					}
					HX_STACK_LINE(120)
					int j = (_g1)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(121)
					buf->add((  (((((int((int(v) >> int(((int)7 - j)))) & int((int)1))) == (int)1))) ? ::String(HX_CSTRING("1")) : ::String(HX_CSTRING("0")) ));
					HX_STACK_LINE(122)
					if (((j == (int)3))){
						HX_STACK_LINE(123)
						buf->add(HX_CSTRING(" "));
					}
				}
			}
			HX_STACK_LINE(125)
			buf->add(HX_CSTRING("  "));
		}
	}
	HX_STACK_LINE(127)
	return buf->b->join(HX_CSTRING(""));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,bin,return )

::String Tools_obj::dumpTag( ::format::swf::SWFTag t,Dynamic max){
	HX_STACK_FRAME("format.swf.Tools","dumpTag",0x6f13eef0,"format.swf.Tools.dumpTag","format/swf/Tools.hx",130,0x069e9868)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(131)
	Dynamic infos;		HX_STACK_VAR(infos,"infos");
	HX_STACK_LINE(131)
	switch( (int)(t->__Index())){
		case (int)0: {
			HX_STACK_LINE(132)
			infos = Dynamic( Array_obj<Dynamic>::__new());
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(131)
			int color = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				::String _g = ::StringTools_obj::hex(color,(int)6);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(133)
				infos = Dynamic( Array_obj<Dynamic>::__new().Add(_g));
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(131)
			int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(134)
			infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("id")).Add(id));
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(131)
			int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(135)
			infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("id")).Add(id));
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(131)
			int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(136)
			infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("id")).Add(id));
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(131)
			int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(137)
			infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("id")).Add(id));
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(131)
			::haxe::io::Bytes data = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(131)
			int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				::String _g1 = ::format::swf::Tools_obj::hex(data,max);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(138)
				infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("id")).Add(id).Add(HX_CSTRING("data")).Add(_g1));
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(131)
			int frames = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(frames,"frames");
			HX_STACK_LINE(131)
			int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(139)
			infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("id")).Add(id).Add(HX_CSTRING("frames")).Add(frames));
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(131)
			::format::swf::PlaceObject po = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(po,"po");
			HX_STACK_LINE(140)
			{
				HX_STACK_LINE(140)
				::String _g2 = ::Std_obj::string(po);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(140)
				infos = Dynamic( Array_obj<Dynamic>::__new().Add(_g2));
			}
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(131)
			::format::swf::PlaceObject po = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(po,"po");
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				::String _g3 = ::Std_obj::string(po);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(141)
				infos = Dynamic( Array_obj<Dynamic>::__new().Add(_g3));
			}
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(131)
			int d = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(142)
			infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("depth")).Add(d));
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(131)
			bool anchor = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(anchor,"anchor");
			HX_STACK_LINE(131)
			::String label = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(label,"label");
			HX_STACK_LINE(143)
			infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("label")).Add(label).Add(HX_CSTRING("anchor")).Add(anchor));
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(131)
			Dynamic el = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(el,"el");
			HX_STACK_LINE(144)
			{
				HX_STACK_LINE(145)
				Dynamic a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(146)
				{
					HX_STACK_LINE(146)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(146)
					while((true)){
						HX_STACK_LINE(146)
						if ((!(((_g < el->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(146)
							break;
						}
						HX_STACK_LINE(146)
						Dynamic e = el->__GetItem(_g);		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(146)
						++(_g);
						HX_STACK_LINE(147)
						a->__Field(HX_CSTRING("push"),true)(e->__Field(HX_CSTRING("name"),true));
						HX_STACK_LINE(148)
						a->__Field(HX_CSTRING("push"),true)(e->__Field(HX_CSTRING("cid"),true));
					}
				}
				HX_STACK_LINE(150)
				infos = a;
			}
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(131)
			::haxe::io::Bytes data = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(131)
			int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(151)
			{
				HX_STACK_LINE(151)
				::String _g4 = ::format::swf::Tools_obj::hex(data,max);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(151)
				infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("id")).Add(id).Add(HX_CSTRING("data")).Add(_g4));
			}
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(131)
			Dynamic context = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(context,"context");
			HX_STACK_LINE(131)
			::haxe::io::Bytes data = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				::String _g5 = ::format::swf::Tools_obj::hex(data,max);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(152)
				infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("context")).Add(context).Add(HX_CSTRING("data")).Add(_g5));
			}
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(131)
			Dynamic symbols = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(symbols,"symbols");
			HX_STACK_LINE(153)
			{
				HX_STACK_LINE(153)
				::String _g6 = ::Std_obj::string(symbols);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(153)
				infos = Dynamic( Array_obj<Dynamic>::__new().Add(_g6));
			}
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(131)
			Dynamic symbols = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(symbols,"symbols");
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				::String _g7 = ::Std_obj::string(symbols);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(154)
				infos = Dynamic( Array_obj<Dynamic>::__new().Add(_g7));
			}
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(131)
			bool useNetwork = (::format::swf::SWFTag(t))->__Param(4);		HX_STACK_VAR(useNetwork,"useNetwork");
			HX_STACK_LINE(131)
			bool useAs3 = (::format::swf::SWFTag(t))->__Param(3);		HX_STACK_VAR(useAs3,"useAs3");
			HX_STACK_LINE(131)
			bool hasMeta = (::format::swf::SWFTag(t))->__Param(2);		HX_STACK_VAR(hasMeta,"hasMeta");
			HX_STACK_LINE(131)
			bool useGpu = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(useGpu,"useGpu");
			HX_STACK_LINE(131)
			bool useDirectBlit = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(useDirectBlit,"useDirectBlit");
			HX_STACK_LINE(155)
			infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("directBlit")).Add(useDirectBlit).Add(HX_CSTRING("gpu")).Add(useGpu).Add(HX_CSTRING("meta/symbols")).Add(hasMeta).Add(HX_CSTRING("as3")).Add(useAs3).Add(HX_CSTRING("net")).Add(useNetwork));
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(131)
			Dynamic l = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				::String _g8 = ::format::swf::Tools_obj::hex(l->__Field(HX_CSTRING("data"),true),max);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(162)
				infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("id")).Add(l->__Field(HX_CSTRING("cid"),true)).Add(HX_CSTRING("color")).Add(l->__Field(HX_CSTRING("color"),true)).Add(HX_CSTRING("width")).Add(l->__Field(HX_CSTRING("width"),true)).Add(HX_CSTRING("height")).Add(l->__Field(HX_CSTRING("height"),true)).Add(HX_CSTRING("data")).Add(_g8));
			}
		}
		;break;
		case (int)19: {
			HX_STACK_LINE(131)
			Dynamic l = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				::String _g9 = ::format::swf::Tools_obj::hex(l->__Field(HX_CSTRING("data"),true),max);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(162)
				infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("id")).Add(l->__Field(HX_CSTRING("cid"),true)).Add(HX_CSTRING("color")).Add(l->__Field(HX_CSTRING("color"),true)).Add(HX_CSTRING("width")).Add(l->__Field(HX_CSTRING("width"),true)).Add(HX_CSTRING("height")).Add(l->__Field(HX_CSTRING("height"),true)).Add(HX_CSTRING("data")).Add(_g9));
			}
		}
		;break;
		case (int)21: {
			HX_STACK_LINE(131)
			::haxe::io::Bytes data = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(163)
			{
				HX_STACK_LINE(163)
				::String _g10 = ::format::swf::Tools_obj::hex(data,max);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(163)
				infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("data")).Add(_g10));
			}
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(131)
			::format::swf::JPEGData jdata = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(jdata,"jdata");
			HX_STACK_LINE(131)
			int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(165)
			switch( (int)(jdata->__Index())){
				case (int)0: {
					HX_STACK_LINE(165)
					::haxe::io::Bytes data = (::format::swf::JPEGData(jdata))->__Param(0);		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						::String _g11 = ::format::swf::Tools_obj::hex(data,max);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(166)
						infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("id")).Add(id).Add(HX_CSTRING("ver")).Add((int)1).Add(HX_CSTRING("data")).Add(_g11));
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(165)
					::haxe::io::Bytes data = (::format::swf::JPEGData(jdata))->__Param(0);		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(167)
					{
						HX_STACK_LINE(167)
						::String _g12 = ::format::swf::Tools_obj::hex(data,max);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(167)
						infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("id")).Add(id).Add(HX_CSTRING("ver")).Add((int)2).Add(HX_CSTRING("data")).Add(_g12));
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(165)
					::haxe::io::Bytes mask = (::format::swf::JPEGData(jdata))->__Param(1);		HX_STACK_VAR(mask,"mask");
					HX_STACK_LINE(165)
					::haxe::io::Bytes data = (::format::swf::JPEGData(jdata))->__Param(0);		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(168)
					{
						HX_STACK_LINE(168)
						::String _g13 = ::format::swf::Tools_obj::hex(data,max);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(168)
						::String _g14 = ::format::swf::Tools_obj::hex(mask,max);		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(168)
						infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("id")).Add(id).Add(HX_CSTRING("ver")).Add((int)3).Add(HX_CSTRING("data")).Add(_g13).Add(HX_CSTRING("mask")).Add(_g14));
					}
				}
				;break;
			}
		}
		;break;
		case (int)23: {
			HX_STACK_LINE(131)
			Dynamic s = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(171)
				::String data;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(171)
				{
					HX_STACK_LINE(171)
					::format::swf::SoundData _g = s->__Field(HX_CSTRING("data"),true);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(171)
					switch( (int)(_g->__Index())){
						case (int)0: {
							HX_STACK_LINE(171)
							::haxe::io::Bytes data1 = (::format::swf::SoundData(_g))->__Param(1);		HX_STACK_VAR(data1,"data1");
							HX_STACK_LINE(171)
							int seek = (::format::swf::SoundData(_g))->__Param(0);		HX_STACK_VAR(seek,"seek");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								::String _g15 = ::format::swf::Tools_obj::hex(data1,max);		HX_STACK_VAR(_g15,"_g15");
								HX_STACK_LINE(172)
								data = (((HX_CSTRING("seek=") + seek) + HX_CSTRING(":")) + _g15);
							}
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(171)
							::haxe::io::Bytes data1 = (::format::swf::SoundData(_g))->__Param(0);		HX_STACK_VAR(data1,"data1");
							HX_STACK_LINE(173)
							data = ::format::swf::Tools_obj::hex(data1,max);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(171)
							::haxe::io::Bytes data1 = (::format::swf::SoundData(_g))->__Param(0);		HX_STACK_VAR(data1,"data1");
							HX_STACK_LINE(173)
							data = ::format::swf::Tools_obj::hex(data1,max);
						}
						;break;
					}
				}
				HX_STACK_LINE(175)
				infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("sid")).Add(s->__Field(HX_CSTRING("sid"),true)).Add(HX_CSTRING("format")).Add(s->__Field(HX_CSTRING("format"),true)).Add(HX_CSTRING("rate")).Add(s->__Field(HX_CSTRING("rate"),true)).Add(HX_CSTRING("16bit")).Add(s->__Field(HX_CSTRING("is16bit"),true)).Add(HX_CSTRING("stereo")).Add(s->__Field(HX_CSTRING("isStereo"),true)).Add(HX_CSTRING("samples")).Add(s->__Field(HX_CSTRING("samples"),true)).Add(HX_CSTRING("data")).Add(data));
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(131)
			::haxe::io::Bytes data = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				::String _g16 = ::format::swf::Tools_obj::hex(data,max);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(176)
				infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("data")).Add(_g16));
			}
		}
		;break;
		case (int)24: {
			HX_STACK_LINE(131)
			::haxe::io::Bytes data = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(131)
			int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(177)
			{
				HX_STACK_LINE(177)
				::String _g17 = ::format::swf::Tools_obj::hex(data,max);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(177)
				infos = Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("id")).Add(id).Add(HX_CSTRING("data")).Add(_g17));
			}
		}
		;break;
	}
	HX_STACK_LINE(179)
	::StringBuf b = ::StringBuf_obj::__new();		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(180)
	::String _g18 = ::Type_obj::enumConstructor(t);		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(180)
	b->add(_g18);
	HX_STACK_LINE(181)
	b->add(HX_CSTRING("("));
	HX_STACK_LINE(182)
	while((true)){
		HX_STACK_LINE(182)
		if ((!(((infos->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(182)
			break;
		}
		HX_STACK_LINE(183)
		Dynamic _g19 = infos->__Field(HX_CSTRING("shift"),true)();		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(183)
		b->add(_g19);
		HX_STACK_LINE(184)
		if (((infos->__Field(HX_CSTRING("length"),true) == (int)0))){
			HX_STACK_LINE(185)
			break;
		}
		HX_STACK_LINE(186)
		b->add(HX_CSTRING(":"));
		HX_STACK_LINE(187)
		Dynamic _g20 = infos->__Field(HX_CSTRING("shift"),true)();		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(187)
		::String _g21 = ::Std_obj::string(_g20);		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(187)
		b->add(_g21);
		HX_STACK_LINE(188)
		if (((infos->__Field(HX_CSTRING("length"),true) == (int)0))){
			HX_STACK_LINE(189)
			break;
		}
		HX_STACK_LINE(190)
		b->add(HX_CSTRING(","));
	}
	HX_STACK_LINE(192)
	b->add(HX_CSTRING(")"));
	HX_STACK_LINE(193)
	return b->b->join(HX_CSTRING(""));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,dumpTag,return )


Tools_obj::Tools_obj()
{
}

Dynamic Tools_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { return hex_dyn(); }
		if (HX_FIELD_EQ(inName,"bin") ) { return bin_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minBits") ) { return minBits_dyn(); }
		if (HX_FIELD_EQ(inName,"dumpTag") ) { return dumpTag_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toFixed8") ) { return toFixed8_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toFixed16") ) { return toFixed16_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"signExtend") ) { return signExtend_dyn(); }
		if (HX_FIELD_EQ(inName,"floatFixed") ) { return floatFixed_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"floatFixed8") ) { return floatFixed8_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"floatFixedBits") ) { return floatFixedBits_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tools_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Tools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("signExtend"),
	HX_CSTRING("floatFixedBits"),
	HX_CSTRING("floatFixed"),
	HX_CSTRING("floatFixed8"),
	HX_CSTRING("toFixed8"),
	HX_CSTRING("toFixed16"),
	HX_CSTRING("minBits"),
	HX_CSTRING("hex"),
	HX_CSTRING("bin"),
	HX_CSTRING("dumpTag"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tools_obj::__mClass,"__mClass");
};

#endif

Class Tools_obj::__mClass;

void Tools_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.Tools"), hx::TCanCast< Tools_obj> ,sStaticFields,sMemberFields,
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

void Tools_obj::__boot()
{
}

} // end namespace format
} // end namespace swf
