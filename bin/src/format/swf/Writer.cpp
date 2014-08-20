#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_swf_BlendMode
#include <format/swf/BlendMode.h>
#endif
#ifndef INCLUDED_format_swf_ColorModel
#include <format/swf/ColorModel.h>
#endif
#ifndef INCLUDED_format_swf_FillStyle
#include <format/swf/FillStyle.h>
#endif
#ifndef INCLUDED_format_swf_Filter
#include <format/swf/Filter.h>
#endif
#ifndef INCLUDED_format_swf_FontData
#include <format/swf/FontData.h>
#endif
#ifndef INCLUDED_format_swf_FontInfoData
#include <format/swf/FontInfoData.h>
#endif
#ifndef INCLUDED_format_swf_GradRecord
#include <format/swf/GradRecord.h>
#endif
#ifndef INCLUDED_format_swf_InterpolationMode
#include <format/swf/InterpolationMode.h>
#endif
#ifndef INCLUDED_format_swf_JPEGData
#include <format/swf/JPEGData.h>
#endif
#ifndef INCLUDED_format_swf_LS2Fill
#include <format/swf/LS2Fill.h>
#endif
#ifndef INCLUDED_format_swf_LangCode
#include <format/swf/LangCode.h>
#endif
#ifndef INCLUDED_format_swf_LineCapStyle
#include <format/swf/LineCapStyle.h>
#endif
#ifndef INCLUDED_format_swf_LineJoinStyle
#include <format/swf/LineJoinStyle.h>
#endif
#ifndef INCLUDED_format_swf_LineStyleData
#include <format/swf/LineStyleData.h>
#endif
#ifndef INCLUDED_format_swf_Morph2LineStyle
#include <format/swf/Morph2LineStyle.h>
#endif
#ifndef INCLUDED_format_swf_MorphFillStyle
#include <format/swf/MorphFillStyle.h>
#endif
#ifndef INCLUDED_format_swf_MorphShapeData
#include <format/swf/MorphShapeData.h>
#endif
#ifndef INCLUDED_format_swf_PlaceObject
#include <format/swf/PlaceObject.h>
#endif
#ifndef INCLUDED_format_swf_SWFTag
#include <format/swf/SWFTag.h>
#endif
#ifndef INCLUDED_format_swf_ShapeData
#include <format/swf/ShapeData.h>
#endif
#ifndef INCLUDED_format_swf_ShapeRecord
#include <format/swf/ShapeRecord.h>
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
#ifndef INCLUDED_format_swf_SpreadMode
#include <format/swf/SpreadMode.h>
#endif
#ifndef INCLUDED_format_swf_Writer
#include <format/swf/Writer.h>
#endif
#ifndef INCLUDED_format_tools_BitsOutput
#include <format/tools/BitsOutput.h>
#endif
#ifndef INCLUDED_format_tools_Deflate
#include <format/tools/Deflate.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
namespace format{
namespace swf{

Void Writer_obj::__construct(::haxe::io::Output o)
{
HX_STACK_FRAME("format.swf.Writer","new",0xdefcea48,"format.swf.Writer.new","format/swf/Writer.hx",53,0x3f16c166)
HX_STACK_THIS(this)
HX_STACK_ARG(o,"o")
{
	HX_STACK_LINE(53)
	this->output = o;
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

Void Writer_obj::write( Dynamic s){
{
		HX_STACK_FRAME("format.swf.Writer","write",0x7eead0c7,"format.swf.Writer.write","format/swf/Writer.hx",56,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(57)
		this->writeHeader(s->__Field(HX_CSTRING("header"),true));
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			Array< ::Dynamic > _g1 = s->__Field(HX_CSTRING("tags"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(58)
			while((true)){
				HX_STACK_LINE(58)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(58)
					break;
				}
				HX_STACK_LINE(58)
				::format::swf::SWFTag t = _g1->__get(_g).StaticCast< ::format::swf::SWFTag >();		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(58)
				++(_g);
				HX_STACK_LINE(59)
				this->writeTag(t);
			}
		}
		HX_STACK_LINE(60)
		this->writeEnd();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,write,(void))

Void Writer_obj::writeRect( Dynamic r){
{
		HX_STACK_FRAME("format.swf.Writer","writeRect",0x5fd0b98b,"format.swf.Writer.writeRect","format/swf/Writer.hx",63,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(64)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			Array< int > values = Array_obj< int >::__new().Add(r->__Field(HX_CSTRING("left"),true)).Add(r->__Field(HX_CSTRING("right"),true)).Add(r->__Field(HX_CSTRING("top"),true)).Add(r->__Field(HX_CSTRING("bottom"),true));		HX_STACK_VAR(values,"values");
			HX_STACK_LINE(64)
			int x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(64)
				while((true)){
					HX_STACK_LINE(64)
					if ((!(((_g1 < values->length))))){
						HX_STACK_LINE(64)
						break;
					}
					HX_STACK_LINE(64)
					int v = values->__get(_g1);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(64)
					++(_g1);
					HX_STACK_LINE(64)
					if (((v < (int)0))){
						HX_STACK_LINE(64)
						v = -(v);
					}
					HX_STACK_LINE(64)
					hx::OrEq(x,v);
				}
			}
			HX_STACK_LINE(64)
			hx::OrEq(x,(int(x) >> int((int)1)));
			HX_STACK_LINE(64)
			hx::OrEq(x,(int(x) >> int((int)2)));
			HX_STACK_LINE(64)
			hx::OrEq(x,(int(x) >> int((int)4)));
			HX_STACK_LINE(64)
			hx::OrEq(x,(int(x) >> int((int)8)));
			HX_STACK_LINE(64)
			hx::OrEq(x,(int(x) >> int((int)16)));
			HX_STACK_LINE(64)
			hx::SubEq(x,(int((int(x) >> int((int)1))) & int((int)357913941)));
			HX_STACK_LINE(64)
			x = (((int((int(x) >> int((int)2))) & int((int)858993459))) + ((int(x) & int((int)858993459))));
			HX_STACK_LINE(64)
			x = (int((((int(x) >> int((int)4))) + x)) & int((int)252645135));
			HX_STACK_LINE(64)
			hx::AddEq(x,(int(x) >> int((int)8)));
			HX_STACK_LINE(64)
			hx::AddEq(x,(int(x) >> int((int)16)));
			HX_STACK_LINE(64)
			hx::AndEq(x,(int)63);
			HX_STACK_LINE(64)
			_g = x;
		}
		HX_STACK_LINE(64)
		int nbits = (_g + (int)1);		HX_STACK_VAR(nbits,"nbits");
		HX_STACK_LINE(66)
		this->bits->writeBits((int)5,nbits);
		HX_STACK_LINE(67)
		this->bits->writeBits(nbits,r->__Field(HX_CSTRING("left"),true));
		HX_STACK_LINE(68)
		this->bits->writeBits(nbits,r->__Field(HX_CSTRING("right"),true));
		HX_STACK_LINE(69)
		this->bits->writeBits(nbits,r->__Field(HX_CSTRING("top"),true));
		HX_STACK_LINE(70)
		this->bits->writeBits(nbits,r->__Field(HX_CSTRING("bottom"),true));
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(71)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(71)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(71)
				_this->nbits = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeRect,(void))

Void Writer_obj::writeFixed8( int v){
{
		HX_STACK_FRAME("format.swf.Writer","writeFixed8",0x0fc2e06b,"format.swf.Writer.writeFixed8","format/swf/Writer.hx",75,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(75)
		this->o->writeUInt16(v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeFixed8,(void))

Void Writer_obj::writeFixed( int v){
{
		HX_STACK_FRAME("format.swf.Writer","writeFixed",0x90b7672d,"format.swf.Writer.writeFixed","format/swf/Writer.hx",79,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(79)
		this->o->writeInt32(v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeFixed,(void))

::haxe::io::BytesOutput Writer_obj::openTMP( ){
	HX_STACK_FRAME("format.swf.Writer","openTMP",0xc0d52515,"format.swf.Writer.openTMP","format/swf/Writer.hx",82,0x3f16c166)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	::haxe::io::BytesOutput old = this->o;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(84)
	::haxe::io::BytesOutput _g = ::haxe::io::BytesOutput_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(84)
	this->o = _g;
	HX_STACK_LINE(85)
	this->bits->o = this->o;
	HX_STACK_LINE(86)
	return old;
}


HX_DEFINE_DYNAMIC_FUNC0(Writer_obj,openTMP,return )

::haxe::io::Bytes Writer_obj::closeTMP( ::haxe::io::BytesOutput old){
	HX_STACK_FRAME("format.swf.Writer","closeTMP",0x90cc8917,"format.swf.Writer.closeTMP","format/swf/Writer.hx",89,0x3f16c166)
	HX_STACK_THIS(this)
	HX_STACK_ARG(old,"old")
	HX_STACK_LINE(90)
	::haxe::io::Bytes bytes = this->o->getBytes();		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(91)
	this->o = old;
	HX_STACK_LINE(92)
	this->bits->o = old;
	HX_STACK_LINE(93)
	return bytes;
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,closeTMP,return )

Void Writer_obj::writeHeader( Dynamic h){
{
		HX_STACK_FRAME("format.swf.Writer","writeHeader",0x7faa9db4,"format.swf.Writer.writeHeader","format/swf/Writer.hx",96,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(97)
		this->compressed = h->__Field(HX_CSTRING("compressed"),true);
		HX_STACK_LINE(98)
		this->output->writeString((  ((this->compressed)) ? ::String(HX_CSTRING("CWS")) : ::String(HX_CSTRING("FWS")) ));
		HX_STACK_LINE(99)
		this->output->writeByte(h->__Field(HX_CSTRING("version"),true));
		HX_STACK_LINE(100)
		::haxe::io::BytesOutput _g = ::haxe::io::BytesOutput_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		this->o = _g;
		HX_STACK_LINE(101)
		::format::tools::BitsOutput _g1 = ::format::tools::BitsOutput_obj::__new(this->o);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(101)
		this->bits = _g1;
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &h){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Writer.hx",102,0x3f16c166)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("left") , (int)0,false);
					__result->Add(HX_CSTRING("top") , (int)0,false);
					__result->Add(HX_CSTRING("right") , (h->__Field(HX_CSTRING("width"),true) * (int)20),false);
					__result->Add(HX_CSTRING("bottom") , (h->__Field(HX_CSTRING("height"),true) * (int)20),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(102)
		this->writeRect(_Function_1_1::Block(h));
		HX_STACK_LINE(103)
		this->o->writeUInt16(h->__Field(HX_CSTRING("fps"),true));
		HX_STACK_LINE(104)
		this->o->writeUInt16(h->__Field(HX_CSTRING("nframes"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeHeader,(void))

Void Writer_obj::writeRGB( Dynamic c){
{
		HX_STACK_FRAME("format.swf.Writer","writeRGB",0x2f7f1c86,"format.swf.Writer.writeRGB","format/swf/Writer.hx",107,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(108)
		this->o->writeByte(c->__Field(HX_CSTRING("r"),true));
		HX_STACK_LINE(109)
		this->o->writeByte(c->__Field(HX_CSTRING("g"),true));
		HX_STACK_LINE(110)
		this->o->writeByte(c->__Field(HX_CSTRING("b"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeRGB,(void))

Void Writer_obj::writeRGBA( Dynamic c){
{
		HX_STACK_FRAME("format.swf.Writer","writeRGBA",0x5fb9d8fb,"format.swf.Writer.writeRGBA","format/swf/Writer.hx",113,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(114)
		this->o->writeByte(c->__Field(HX_CSTRING("r"),true));
		HX_STACK_LINE(115)
		this->o->writeByte(c->__Field(HX_CSTRING("g"),true));
		HX_STACK_LINE(116)
		this->o->writeByte(c->__Field(HX_CSTRING("b"),true));
		HX_STACK_LINE(117)
		this->o->writeByte(c->__Field(HX_CSTRING("a"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeRGBA,(void))

Void Writer_obj::writeMatrixPart( Dynamic m){
{
		HX_STACK_FRAME("format.swf.Writer","writeMatrixPart",0x67772e7b,"format.swf.Writer.writeMatrixPart","format/swf/Writer.hx",120,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(121)
		this->bits->writeBits((int)5,m->__Field(HX_CSTRING("nbits"),true));
		HX_STACK_LINE(122)
		this->bits->writeBits(m->__Field(HX_CSTRING("nbits"),true),m->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(123)
		this->bits->writeBits(m->__Field(HX_CSTRING("nbits"),true),m->__Field(HX_CSTRING("y"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeMatrixPart,(void))

Void Writer_obj::writeMatrix( Dynamic m){
{
		HX_STACK_FRAME("format.swf.Writer","writeMatrix",0x3e72ca68,"format.swf.Writer.writeMatrix","format/swf/Writer.hx",126,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(127)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(127)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(127)
				_this->nbits = (int)0;
			}
		}
		HX_STACK_LINE(128)
		if (((m->__Field(HX_CSTRING("scale"),true) != null()))){
			HX_STACK_LINE(129)
			this->bits->writeBit(true);
			HX_STACK_LINE(131)
			int sx;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(131)
			{
				HX_STACK_LINE(131)
				Float f = m->__Field(HX_CSTRING("scale"),true)->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(131)
				if (((bool((f < -32768.)) || bool((f >= 32768.0))))){
					HX_STACK_LINE(131)
					HX_STACK_DO_THROW(::haxe::io::Error_obj::Overflow);
				}
				HX_STACK_LINE(131)
				sx = ::Std_obj::_int((f * 65536.0));
			}
			HX_STACK_LINE(132)
			int sy;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				Float f = m->__Field(HX_CSTRING("scale"),true)->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(132)
				if (((bool((f < -32768.)) || bool((f >= 32768.0))))){
					HX_STACK_LINE(132)
					HX_STACK_DO_THROW(::haxe::io::Error_obj::Overflow);
				}
				HX_STACK_LINE(132)
				sy = ::Std_obj::_int((f * 65536.0));
			}
			HX_STACK_LINE(133)
			int _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				Array< int > values = Array_obj< int >::__new().Add(sx).Add(sy);		HX_STACK_VAR(values,"values");
				HX_STACK_LINE(133)
				int x = (int)0;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(133)
				{
					HX_STACK_LINE(133)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(133)
					while((true)){
						HX_STACK_LINE(133)
						if ((!(((_g1 < values->length))))){
							HX_STACK_LINE(133)
							break;
						}
						HX_STACK_LINE(133)
						int v = values->__get(_g1);		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(133)
						++(_g1);
						HX_STACK_LINE(133)
						if (((v < (int)0))){
							HX_STACK_LINE(133)
							v = -(v);
						}
						HX_STACK_LINE(133)
						hx::OrEq(x,v);
					}
				}
				HX_STACK_LINE(133)
				hx::OrEq(x,(int(x) >> int((int)1)));
				HX_STACK_LINE(133)
				hx::OrEq(x,(int(x) >> int((int)2)));
				HX_STACK_LINE(133)
				hx::OrEq(x,(int(x) >> int((int)4)));
				HX_STACK_LINE(133)
				hx::OrEq(x,(int(x) >> int((int)8)));
				HX_STACK_LINE(133)
				hx::OrEq(x,(int(x) >> int((int)16)));
				HX_STACK_LINE(133)
				hx::SubEq(x,(int((int(x) >> int((int)1))) & int((int)357913941)));
				HX_STACK_LINE(133)
				x = (((int((int(x) >> int((int)2))) & int((int)858993459))) + ((int(x) & int((int)858993459))));
				HX_STACK_LINE(133)
				x = (int((((int(x) >> int((int)4))) + x)) & int((int)252645135));
				HX_STACK_LINE(133)
				hx::AddEq(x,(int(x) >> int((int)8)));
				HX_STACK_LINE(133)
				hx::AddEq(x,(int(x) >> int((int)16)));
				HX_STACK_LINE(133)
				hx::AndEq(x,(int)63);
				HX_STACK_LINE(133)
				_g = x;
			}
			HX_STACK_LINE(133)
			int nbits = (_g + (int)1);		HX_STACK_VAR(nbits,"nbits");
			HX_STACK_LINE(135)
			this->bits->writeBits((int)5,nbits);
			HX_STACK_LINE(136)
			this->bits->writeBits(nbits,sx);
			HX_STACK_LINE(137)
			this->bits->writeBits(nbits,sy);
		}
		else{
			HX_STACK_LINE(140)
			this->bits->writeBit(false);
		}
		HX_STACK_LINE(142)
		if (((m->__Field(HX_CSTRING("rotate"),true) != null()))){
			HX_STACK_LINE(143)
			this->bits->writeBit(true);
			HX_STACK_LINE(145)
			int rs0;		HX_STACK_VAR(rs0,"rs0");
			HX_STACK_LINE(145)
			{
				HX_STACK_LINE(145)
				Float f = m->__Field(HX_CSTRING("rotate"),true)->__Field(HX_CSTRING("rs0"),true);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(145)
				if (((bool((f < -32768.)) || bool((f >= 32768.0))))){
					HX_STACK_LINE(145)
					HX_STACK_DO_THROW(::haxe::io::Error_obj::Overflow);
				}
				HX_STACK_LINE(145)
				rs0 = ::Std_obj::_int((f * 65536.0));
			}
			HX_STACK_LINE(146)
			int rs1;		HX_STACK_VAR(rs1,"rs1");
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				Float f = m->__Field(HX_CSTRING("rotate"),true)->__Field(HX_CSTRING("rs1"),true);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(146)
				if (((bool((f < -32768.)) || bool((f >= 32768.0))))){
					HX_STACK_LINE(146)
					HX_STACK_DO_THROW(::haxe::io::Error_obj::Overflow);
				}
				HX_STACK_LINE(146)
				rs1 = ::Std_obj::_int((f * 65536.0));
			}
			HX_STACK_LINE(147)
			int _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(147)
			{
				HX_STACK_LINE(147)
				Array< int > values = Array_obj< int >::__new().Add(rs0).Add(rs1);		HX_STACK_VAR(values,"values");
				HX_STACK_LINE(147)
				int x = (int)0;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(147)
				{
					HX_STACK_LINE(147)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(147)
					while((true)){
						HX_STACK_LINE(147)
						if ((!(((_g < values->length))))){
							HX_STACK_LINE(147)
							break;
						}
						HX_STACK_LINE(147)
						int v = values->__get(_g);		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(147)
						++(_g);
						HX_STACK_LINE(147)
						if (((v < (int)0))){
							HX_STACK_LINE(147)
							v = -(v);
						}
						HX_STACK_LINE(147)
						hx::OrEq(x,v);
					}
				}
				HX_STACK_LINE(147)
				hx::OrEq(x,(int(x) >> int((int)1)));
				HX_STACK_LINE(147)
				hx::OrEq(x,(int(x) >> int((int)2)));
				HX_STACK_LINE(147)
				hx::OrEq(x,(int(x) >> int((int)4)));
				HX_STACK_LINE(147)
				hx::OrEq(x,(int(x) >> int((int)8)));
				HX_STACK_LINE(147)
				hx::OrEq(x,(int(x) >> int((int)16)));
				HX_STACK_LINE(147)
				hx::SubEq(x,(int((int(x) >> int((int)1))) & int((int)357913941)));
				HX_STACK_LINE(147)
				x = (((int((int(x) >> int((int)2))) & int((int)858993459))) + ((int(x) & int((int)858993459))));
				HX_STACK_LINE(147)
				x = (int((((int(x) >> int((int)4))) + x)) & int((int)252645135));
				HX_STACK_LINE(147)
				hx::AddEq(x,(int(x) >> int((int)8)));
				HX_STACK_LINE(147)
				hx::AddEq(x,(int(x) >> int((int)16)));
				HX_STACK_LINE(147)
				hx::AndEq(x,(int)63);
				HX_STACK_LINE(147)
				_g1 = x;
			}
			HX_STACK_LINE(147)
			int nbits = (_g1 + (int)1);		HX_STACK_VAR(nbits,"nbits");
			HX_STACK_LINE(149)
			this->bits->writeBits((int)5,nbits);
			HX_STACK_LINE(150)
			this->bits->writeBits(nbits,rs0);
			HX_STACK_LINE(151)
			this->bits->writeBits(nbits,rs1);
		}
		else{
			HX_STACK_LINE(154)
			this->bits->writeBit(false);
		}
		HX_STACK_LINE(156)
		int _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			Array< int > values = Array_obj< int >::__new().Add(m->__Field(HX_CSTRING("translate"),true)->__Field(HX_CSTRING("x"),true)).Add(m->__Field(HX_CSTRING("translate"),true)->__Field(HX_CSTRING("y"),true));		HX_STACK_VAR(values,"values");
			HX_STACK_LINE(156)
			int x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(156)
				while((true)){
					HX_STACK_LINE(156)
					if ((!(((_g < values->length))))){
						HX_STACK_LINE(156)
						break;
					}
					HX_STACK_LINE(156)
					int v = values->__get(_g);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(156)
					++(_g);
					HX_STACK_LINE(156)
					if (((v < (int)0))){
						HX_STACK_LINE(156)
						v = -(v);
					}
					HX_STACK_LINE(156)
					hx::OrEq(x,v);
				}
			}
			HX_STACK_LINE(156)
			hx::OrEq(x,(int(x) >> int((int)1)));
			HX_STACK_LINE(156)
			hx::OrEq(x,(int(x) >> int((int)2)));
			HX_STACK_LINE(156)
			hx::OrEq(x,(int(x) >> int((int)4)));
			HX_STACK_LINE(156)
			hx::OrEq(x,(int(x) >> int((int)8)));
			HX_STACK_LINE(156)
			hx::OrEq(x,(int(x) >> int((int)16)));
			HX_STACK_LINE(156)
			hx::SubEq(x,(int((int(x) >> int((int)1))) & int((int)357913941)));
			HX_STACK_LINE(156)
			x = (((int((int(x) >> int((int)2))) & int((int)858993459))) + ((int(x) & int((int)858993459))));
			HX_STACK_LINE(156)
			x = (int((((int(x) >> int((int)4))) + x)) & int((int)252645135));
			HX_STACK_LINE(156)
			hx::AddEq(x,(int(x) >> int((int)8)));
			HX_STACK_LINE(156)
			hx::AddEq(x,(int(x) >> int((int)16)));
			HX_STACK_LINE(156)
			hx::AndEq(x,(int)63);
			HX_STACK_LINE(156)
			_g2 = x;
		}
		HX_STACK_LINE(156)
		int nbits = (_g2 + (int)1);		HX_STACK_VAR(nbits,"nbits");
		HX_STACK_LINE(158)
		this->bits->writeBits((int)5,nbits);
		HX_STACK_LINE(159)
		this->bits->writeBits(nbits,m->__Field(HX_CSTRING("translate"),true)->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(160)
		this->bits->writeBits(nbits,m->__Field(HX_CSTRING("translate"),true)->__Field(HX_CSTRING("y"),true));
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(162)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(162)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(162)
				_this->nbits = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeMatrix,(void))

Void Writer_obj::writeCXAColor( Dynamic c,int nbits){
{
		HX_STACK_FRAME("format.swf.Writer","writeCXAColor",0xb634759e,"format.swf.Writer.writeCXAColor","format/swf/Writer.hx",165,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(nbits,"nbits")
		HX_STACK_LINE(166)
		this->bits->writeBits(nbits,c->__Field(HX_CSTRING("r"),true));
		HX_STACK_LINE(167)
		this->bits->writeBits(nbits,c->__Field(HX_CSTRING("g"),true));
		HX_STACK_LINE(168)
		this->bits->writeBits(nbits,c->__Field(HX_CSTRING("b"),true));
		HX_STACK_LINE(169)
		this->bits->writeBits(nbits,c->__Field(HX_CSTRING("a"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeCXAColor,(void))

Void Writer_obj::writeCXA( Dynamic c){
{
		HX_STACK_FRAME("format.swf.Writer","writeCXA",0x2f73c985,"format.swf.Writer.writeCXA","format/swf/Writer.hx",172,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(173)
		this->bits->writeBit((c->__Field(HX_CSTRING("add"),true) != null()));
		HX_STACK_LINE(174)
		this->bits->writeBit((c->__Field(HX_CSTRING("mult"),true) != null()));
		HX_STACK_LINE(175)
		this->bits->writeBits((int)4,c->__Field(HX_CSTRING("nbits"),true));
		HX_STACK_LINE(176)
		if (((c->__Field(HX_CSTRING("mult"),true) != null()))){
			HX_STACK_LINE(176)
			this->writeCXAColor(c->__Field(HX_CSTRING("mult"),true),c->__Field(HX_CSTRING("nbits"),true));
		}
		HX_STACK_LINE(177)
		if (((c->__Field(HX_CSTRING("add"),true) != null()))){
			HX_STACK_LINE(177)
			this->writeCXAColor(c->__Field(HX_CSTRING("add"),true),c->__Field(HX_CSTRING("nbits"),true));
		}
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(178)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(178)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(178)
				_this->nbits = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeCXA,(void))

Void Writer_obj::writeClipEvents( Dynamic events){
{
		HX_STACK_FRAME("format.swf.Writer","writeClipEvents",0xaedd61b0,"format.swf.Writer.writeClipEvents","format/swf/Writer.hx",181,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(events,"events")
		HX_STACK_LINE(182)
		this->o->writeUInt16((int)0);
		HX_STACK_LINE(183)
		int all = (int)0;		HX_STACK_VAR(all,"all");
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(184)
			while((true)){
				HX_STACK_LINE(184)
				if ((!(((_g < events->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(184)
					break;
				}
				HX_STACK_LINE(184)
				Dynamic e = events->__GetItem(_g);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(184)
				++(_g);
				HX_STACK_LINE(185)
				hx::OrEq(all,e->__Field(HX_CSTRING("eventsFlags"),true));
			}
		}
		HX_STACK_LINE(186)
		this->o->writeInt32(all);
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(187)
			while((true)){
				HX_STACK_LINE(187)
				if ((!(((_g < events->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(187)
					break;
				}
				HX_STACK_LINE(187)
				Dynamic e = events->__GetItem(_g);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(187)
				++(_g);
				HX_STACK_LINE(188)
				this->o->writeInt32(e->__Field(HX_CSTRING("eventsFlags"),true));
				HX_STACK_LINE(189)
				this->o->writeInt32(e->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("length"),true));
				HX_STACK_LINE(190)
				this->o->write(e->__Field(HX_CSTRING("data"),true));
			}
		}
		HX_STACK_LINE(192)
		this->o->writeUInt16((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeClipEvents,(void))

Void Writer_obj::writeFilterFlags( Dynamic f,bool top){
{
		HX_STACK_FRAME("format.swf.Writer","writeFilterFlags",0xb0a67ee8,"format.swf.Writer.writeFilterFlags","format/swf/Writer.hx",195,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_ARG(top,"top")
		HX_STACK_LINE(196)
		int flags = (int)32;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(197)
		if ((f->__Field(HX_CSTRING("inner"),true))){
			HX_STACK_LINE(197)
			hx::OrEq(flags,(int)128);
		}
		HX_STACK_LINE(198)
		if ((f->__Field(HX_CSTRING("knockout"),true))){
			HX_STACK_LINE(198)
			hx::OrEq(flags,(int)64);
		}
		HX_STACK_LINE(199)
		if ((f->__Field(HX_CSTRING("ontop"),true))){
			HX_STACK_LINE(199)
			hx::OrEq(flags,(int)16);
		}
		HX_STACK_LINE(200)
		hx::OrEq(flags,f->__Field(HX_CSTRING("passes"),true));
		HX_STACK_LINE(201)
		this->o->writeByte(flags);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeFilterFlags,(void))

Void Writer_obj::writeFilterGradient( Dynamic f){
{
		HX_STACK_FRAME("format.swf.Writer","writeFilterGradient",0x0f8620ef,"format.swf.Writer.writeFilterGradient","format/swf/Writer.hx",204,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(205)
		this->o->writeByte(f->__Field(HX_CSTRING("colors"),true)->__Field(HX_CSTRING("length"),true));
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(206)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(206)
			Dynamic _g1 = f->__Field(HX_CSTRING("colors"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(206)
			while((true)){
				HX_STACK_LINE(206)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(206)
					break;
				}
				HX_STACK_LINE(206)
				Dynamic c = _g1->__GetItem(_g);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(206)
				++(_g);
				HX_STACK_LINE(207)
				this->writeRGBA(c->__Field(HX_CSTRING("color"),true));
			}
		}
		HX_STACK_LINE(208)
		{
			HX_STACK_LINE(208)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(208)
			Dynamic _g1 = f->__Field(HX_CSTRING("colors"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(208)
			while((true)){
				HX_STACK_LINE(208)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(208)
					break;
				}
				HX_STACK_LINE(208)
				Dynamic c = _g1->__GetItem(_g);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(208)
				++(_g);
				HX_STACK_LINE(209)
				this->o->writeByte(c->__Field(HX_CSTRING("position"),true));
			}
		}
		HX_STACK_LINE(210)
		Dynamic d = f->__Field(HX_CSTRING("data"),true);		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(211)
		this->o->writeInt32(d->__Field(HX_CSTRING("blurX"),true));
		HX_STACK_LINE(212)
		this->o->writeInt32(d->__Field(HX_CSTRING("blurY"),true));
		HX_STACK_LINE(213)
		this->o->writeInt32(d->__Field(HX_CSTRING("angle"),true));
		HX_STACK_LINE(214)
		this->o->writeInt32(d->__Field(HX_CSTRING("distance"),true));
		HX_STACK_LINE(215)
		this->o->writeUInt16(d->__Field(HX_CSTRING("strength"),true));
		HX_STACK_LINE(216)
		this->writeFilterFlags(d->__Field(HX_CSTRING("flags"),true),true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeFilterGradient,(void))

Void Writer_obj::writeFilter( ::format::swf::Filter f){
{
		HX_STACK_FRAME("format.swf.Writer","writeFilter",0x07dfb3df,"format.swf.Writer.writeFilter","format/swf/Writer.hx",220,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(220)
		switch( (int)(f->__Index())){
			case (int)0: {
				HX_STACK_LINE(220)
				Dynamic d = (::format::swf::Filter(f))->__Param(0);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(221)
				{
					HX_STACK_LINE(222)
					this->o->writeByte((int)0);
					HX_STACK_LINE(223)
					this->writeRGBA(d->__Field(HX_CSTRING("color"),true));
					HX_STACK_LINE(224)
					this->o->writeInt32(d->__Field(HX_CSTRING("blurX"),true));
					HX_STACK_LINE(225)
					this->o->writeInt32(d->__Field(HX_CSTRING("blurY"),true));
					HX_STACK_LINE(226)
					this->o->writeInt32(d->__Field(HX_CSTRING("angle"),true));
					HX_STACK_LINE(227)
					this->o->writeInt32(d->__Field(HX_CSTRING("distance"),true));
					HX_STACK_LINE(228)
					this->o->writeUInt16(d->__Field(HX_CSTRING("strength"),true));
					HX_STACK_LINE(229)
					this->writeFilterFlags(d->__Field(HX_CSTRING("flags"),true),false);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(220)
				Dynamic d = (::format::swf::Filter(f))->__Param(0);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(231)
					this->o->writeByte((int)1);
					HX_STACK_LINE(232)
					this->o->writeInt32(d->__Field(HX_CSTRING("blurX"),true));
					HX_STACK_LINE(233)
					this->o->writeInt32(d->__Field(HX_CSTRING("blurY"),true));
					HX_STACK_LINE(234)
					this->o->writeByte((int(d->__Field(HX_CSTRING("passes"),true)) << int((int)3)));
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(220)
				Dynamic d = (::format::swf::Filter(f))->__Param(0);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(235)
				{
					HX_STACK_LINE(236)
					this->o->writeByte((int)2);
					HX_STACK_LINE(237)
					this->writeRGBA(d->__Field(HX_CSTRING("color"),true));
					HX_STACK_LINE(238)
					this->o->writeInt32(d->__Field(HX_CSTRING("blurX"),true));
					HX_STACK_LINE(239)
					this->o->writeInt32(d->__Field(HX_CSTRING("blurY"),true));
					HX_STACK_LINE(240)
					this->o->writeUInt16(d->__Field(HX_CSTRING("strength"),true));
					HX_STACK_LINE(241)
					this->writeFilterFlags(d->__Field(HX_CSTRING("flags"),true),false);
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(220)
				Dynamic d = (::format::swf::Filter(f))->__Param(0);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(242)
				{
					HX_STACK_LINE(243)
					this->o->writeByte((int)3);
					HX_STACK_LINE(244)
					this->writeRGBA(d->__Field(HX_CSTRING("color"),true));
					HX_STACK_LINE(245)
					this->writeRGBA(d->__Field(HX_CSTRING("color2"),true));
					HX_STACK_LINE(246)
					this->o->writeInt32(d->__Field(HX_CSTRING("blurX"),true));
					HX_STACK_LINE(247)
					this->o->writeInt32(d->__Field(HX_CSTRING("blurY"),true));
					HX_STACK_LINE(248)
					this->o->writeInt32(d->__Field(HX_CSTRING("angle"),true));
					HX_STACK_LINE(249)
					this->o->writeInt32(d->__Field(HX_CSTRING("distance"),true));
					HX_STACK_LINE(250)
					this->o->writeUInt16(d->__Field(HX_CSTRING("strength"),true));
					HX_STACK_LINE(251)
					this->writeFilterFlags(d->__Field(HX_CSTRING("flags"),true),true);
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(220)
				Dynamic d = (::format::swf::Filter(f))->__Param(0);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(252)
				{
					HX_STACK_LINE(253)
					this->o->writeByte((int)4);
					HX_STACK_LINE(254)
					this->writeFilterGradient(d);
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(220)
				Array< Float > d = (::format::swf::Filter(f))->__Param(0);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(255)
				{
					HX_STACK_LINE(256)
					this->o->writeByte((int)6);
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(257)
						while((true)){
							HX_STACK_LINE(257)
							if ((!(((_g < d->length))))){
								HX_STACK_LINE(257)
								break;
							}
							HX_STACK_LINE(257)
							Float f1 = d->__get(_g);		HX_STACK_VAR(f1,"f1");
							HX_STACK_LINE(257)
							++(_g);
							HX_STACK_LINE(258)
							this->o->writeFloat(f1);
						}
					}
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(220)
				Dynamic d = (::format::swf::Filter(f))->__Param(0);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(259)
				{
					HX_STACK_LINE(260)
					this->o->writeByte((int)7);
					HX_STACK_LINE(261)
					this->writeFilterGradient(d);
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeFilter,(void))

Void Writer_obj::writeFilters( Array< ::Dynamic > filters){
{
		HX_STACK_FRAME("format.swf.Writer","writeFilters",0xdbddafb4,"format.swf.Writer.writeFilters","format/swf/Writer.hx",265,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filters,"filters")
		HX_STACK_LINE(266)
		this->o->writeByte(filters->length);
		HX_STACK_LINE(267)
		{
			HX_STACK_LINE(267)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(267)
			while((true)){
				HX_STACK_LINE(267)
				if ((!(((_g < filters->length))))){
					HX_STACK_LINE(267)
					break;
				}
				HX_STACK_LINE(267)
				::format::swf::Filter f = filters->__get(_g).StaticCast< ::format::swf::Filter >();		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(267)
				++(_g);
				HX_STACK_LINE(268)
				this->writeFilter(f);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeFilters,(void))

Void Writer_obj::writeBlendMode( ::format::swf::BlendMode b){
{
		HX_STACK_FRAME("format.swf.Writer","writeBlendMode",0xfd29228d,"format.swf.Writer.writeBlendMode","format/swf/Writer.hx",271,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(272)
		int _g = b->__Index();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(272)
		int _g1 = (_g + (int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(272)
		this->o->writeByte(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeBlendMode,(void))

Void Writer_obj::writePlaceObject( ::format::swf::PlaceObject po,bool v3){
{
		HX_STACK_FRAME("format.swf.Writer","writePlaceObject",0x3ce8355f,"format.swf.Writer.writePlaceObject","format/swf/Writer.hx",275,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(po,"po")
		HX_STACK_ARG(v3,"v3")
		HX_STACK_LINE(276)
		int f = (int)0;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(276)
		int f2 = (int)0;		HX_STACK_VAR(f2,"f2");
		HX_STACK_LINE(277)
		if ((po->move)){
			HX_STACK_LINE(277)
			hx::OrEq(f,(int)1);
		}
		HX_STACK_LINE(278)
		if (((po->cid != null()))){
			HX_STACK_LINE(278)
			hx::OrEq(f,(int)2);
		}
		HX_STACK_LINE(279)
		if (((po->matrix != null()))){
			HX_STACK_LINE(279)
			hx::OrEq(f,(int)4);
		}
		HX_STACK_LINE(280)
		if (((po->color != null()))){
			HX_STACK_LINE(280)
			hx::OrEq(f,(int)8);
		}
		HX_STACK_LINE(281)
		if (((po->ratio != null()))){
			HX_STACK_LINE(281)
			hx::OrEq(f,(int)16);
		}
		HX_STACK_LINE(282)
		if (((po->instanceName != null()))){
			HX_STACK_LINE(282)
			hx::OrEq(f,(int)32);
		}
		HX_STACK_LINE(283)
		if (((po->clipDepth != null()))){
			HX_STACK_LINE(283)
			hx::OrEq(f,(int)64);
		}
		HX_STACK_LINE(284)
		if (((po->events != null()))){
			HX_STACK_LINE(284)
			hx::OrEq(f,(int)128);
		}
		HX_STACK_LINE(285)
		if (((po->filters != null()))){
			HX_STACK_LINE(285)
			hx::OrEq(f2,(int)1);
		}
		HX_STACK_LINE(286)
		if (((po->blendMode != null()))){
			HX_STACK_LINE(286)
			hx::OrEq(f2,(int)2);
		}
		HX_STACK_LINE(287)
		if (((po->bitmapCache != null()))){
			HX_STACK_LINE(287)
			hx::OrEq(f2,(int)4);
		}
		HX_STACK_LINE(288)
		if (((po->className != null()))){
			HX_STACK_LINE(288)
			hx::OrEq(f2,(int)8);
		}
		HX_STACK_LINE(289)
		if ((po->hasImage)){
			HX_STACK_LINE(289)
			hx::OrEq(f2,(int)16);
		}
		HX_STACK_LINE(290)
		this->o->writeByte(f);
		HX_STACK_LINE(291)
		if ((v3)){
			HX_STACK_LINE(292)
			this->o->writeByte(f2);
		}
		else{
			HX_STACK_LINE(293)
			if (((f2 != (int)0))){
				HX_STACK_LINE(294)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid place object version"));
			}
		}
		HX_STACK_LINE(295)
		this->o->writeUInt16(po->depth);
		HX_STACK_LINE(296)
		if (((po->className != null()))){
			HX_STACK_LINE(297)
			this->o->writeString(po->className);
			HX_STACK_LINE(298)
			this->o->writeByte((int)0);
		}
		HX_STACK_LINE(300)
		if (((po->cid != null()))){
			HX_STACK_LINE(300)
			this->o->writeUInt16(po->cid);
		}
		HX_STACK_LINE(301)
		if (((po->matrix != null()))){
			HX_STACK_LINE(301)
			this->writeMatrix(po->matrix);
		}
		HX_STACK_LINE(302)
		if (((po->color != null()))){
			HX_STACK_LINE(302)
			this->writeCXA(po->color);
		}
		HX_STACK_LINE(303)
		if (((po->ratio != null()))){
			HX_STACK_LINE(303)
			this->o->writeUInt16(po->ratio);
		}
		HX_STACK_LINE(304)
		if (((po->instanceName != null()))){
			HX_STACK_LINE(305)
			this->o->writeString(po->instanceName);
			HX_STACK_LINE(306)
			this->o->writeByte((int)0);
		}
		HX_STACK_LINE(308)
		if (((po->clipDepth != null()))){
			HX_STACK_LINE(308)
			this->o->writeUInt16(po->clipDepth);
		}
		HX_STACK_LINE(309)
		if (((po->filters != null()))){
			HX_STACK_LINE(309)
			this->writeFilters(po->filters);
		}
		HX_STACK_LINE(310)
		if (((po->blendMode != null()))){
			HX_STACK_LINE(310)
			this->writeBlendMode(po->blendMode);
		}
		HX_STACK_LINE(311)
		if (((po->bitmapCache != null()))){
			HX_STACK_LINE(311)
			this->o->writeByte(po->bitmapCache);
		}
		HX_STACK_LINE(312)
		if (((po->events != null()))){
			HX_STACK_LINE(312)
			this->writeClipEvents(po->events);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writePlaceObject,(void))

Void Writer_obj::writeInt( int v){
{
		HX_STACK_FRAME("format.swf.Writer","writeInt",0x2f786a68,"format.swf.Writer.writeInt","format/swf/Writer.hx",317,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(317)
		this->o->writeInt32(v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeInt,(void))

Void Writer_obj::writeTID( int id,int len){
{
		HX_STACK_FRAME("format.swf.Writer","writeTID",0x2f80a2c8,"format.swf.Writer.writeTID","format/swf/Writer.hx",323,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(324)
		int h = (int(id) << int((int)6));		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(325)
		if (((len < (int)63))){
			HX_STACK_LINE(326)
			this->o->writeUInt16((int(h) | int(len)));
		}
		else{
			HX_STACK_LINE(328)
			this->o->writeUInt16((int(h) | int((int)63)));
			HX_STACK_LINE(329)
			this->o->writeInt32(len);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeTID,(void))

Void Writer_obj::writeTIDExt( int id,int len){
{
		HX_STACK_FRAME("format.swf.Writer","writeTIDExt",0x19780eb9,"format.swf.Writer.writeTIDExt","format/swf/Writer.hx",333,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(334)
		this->o->writeUInt16((int((int(id) << int((int)6))) | int((int)63)));
		HX_STACK_LINE(335)
		this->o->writeInt32(len);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeTIDExt,(void))

Void Writer_obj::writeSymbols( Dynamic sl,int tagid){
{
		HX_STACK_FRAME("format.swf.Writer","writeSymbols",0xe5b2cc14,"format.swf.Writer.writeSymbols","format/swf/Writer.hx",338,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sl,"sl")
		HX_STACK_ARG(tagid,"tagid")
		HX_STACK_LINE(339)
		int len = (int)2;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(340)
		{
			HX_STACK_LINE(340)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(340)
			while((true)){
				HX_STACK_LINE(340)
				if ((!(((_g < sl->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(340)
					break;
				}
				HX_STACK_LINE(340)
				Dynamic s = sl->__GetItem(_g);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(340)
				++(_g);
				HX_STACK_LINE(341)
				hx::AddEq(len,(((int)2 + s->__Field(HX_CSTRING("className"),true)->__Field(HX_CSTRING("length"),true)) + (int)1));
			}
		}
		HX_STACK_LINE(342)
		this->writeTID(tagid,len);
		HX_STACK_LINE(343)
		this->o->writeUInt16(sl->__Field(HX_CSTRING("length"),true));
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(344)
			while((true)){
				HX_STACK_LINE(344)
				if ((!(((_g < sl->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(344)
					break;
				}
				HX_STACK_LINE(344)
				Dynamic s = sl->__GetItem(_g);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(344)
				++(_g);
				HX_STACK_LINE(345)
				this->o->writeUInt16(s->__Field(HX_CSTRING("cid"),true));
				HX_STACK_LINE(346)
				this->o->writeString(s->__Field(HX_CSTRING("className"),true));
				HX_STACK_LINE(347)
				this->o->writeByte((int)0);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeSymbols,(void))

Void Writer_obj::writeSound( Dynamic s){
{
		HX_STACK_FRAME("format.swf.Writer","writeSound",0x10e1fa88,"format.swf.Writer.writeSound","format/swf/Writer.hx",351,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(352)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(352)
		{
			HX_STACK_LINE(352)
			::format::swf::SoundData _g1 = s->__Field(HX_CSTRING("data"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(352)
			switch( (int)(_g1->__Index())){
				case (int)0: {
					HX_STACK_LINE(352)
					::haxe::io::Bytes data = (::format::swf::SoundData(_g1))->__Param(1);		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(353)
					_g = (data->length + (int)2);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(352)
					::haxe::io::Bytes data = (::format::swf::SoundData(_g1))->__Param(0);		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(354)
					_g = data->length;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(352)
					::haxe::io::Bytes data = (::format::swf::SoundData(_g1))->__Param(0);		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(355)
					_g = data->length;
				}
				;break;
			}
		}
		HX_STACK_LINE(352)
		int len = ((int)7 + _g);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(357)
		this->writeTIDExt((int)14,len);
		HX_STACK_LINE(358)
		this->o->writeUInt16(s->__Field(HX_CSTRING("sid"),true));
		HX_STACK_LINE(359)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(359)
		{
			HX_STACK_LINE(359)
			::format::swf::SoundFormat _g2 = s->__Field(HX_CSTRING("format"),true);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(359)
			switch( (int)(_g2->__Index())){
				case (int)0: {
					HX_STACK_LINE(360)
					_g1 = (int)0;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(361)
					_g1 = (int)1;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(362)
					_g1 = (int)2;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(363)
					_g1 = (int)3;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(364)
					_g1 = (int)4;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(365)
					_g1 = (int)5;
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(366)
					_g1 = (int)6;
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(367)
					_g1 = (int)11;
				}
				;break;
			}
		}
		HX_STACK_LINE(359)
		this->bits->writeBits((int)4,_g1);
		HX_STACK_LINE(369)
		int _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(369)
		{
			HX_STACK_LINE(369)
			::format::swf::SoundRate _g3 = s->__Field(HX_CSTRING("rate"),true);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(369)
			switch( (int)(_g3->__Index())){
				case (int)0: {
					HX_STACK_LINE(370)
					_g2 = (int)0;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(371)
					_g2 = (int)1;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(372)
					_g2 = (int)2;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(373)
					_g2 = (int)3;
				}
				;break;
			}
		}
		HX_STACK_LINE(369)
		this->bits->writeBits((int)2,_g2);
		HX_STACK_LINE(375)
		this->bits->writeBit(s->__Field(HX_CSTRING("is16bit"),true));
		HX_STACK_LINE(376)
		this->bits->writeBit(s->__Field(HX_CSTRING("isStereo"),true));
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(377)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(377)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(377)
				_this->nbits = (int)0;
			}
		}
		HX_STACK_LINE(378)
		this->o->writeInt32(s->__Field(HX_CSTRING("samples"),true));
		HX_STACK_LINE(379)
		{
			HX_STACK_LINE(379)
			::format::swf::SoundData _g3 = s->__Field(HX_CSTRING("data"),true);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(379)
			switch( (int)(_g3->__Index())){
				case (int)0: {
					HX_STACK_LINE(379)
					::haxe::io::Bytes data = (::format::swf::SoundData(_g3))->__Param(1);		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(379)
					int seek = (::format::swf::SoundData(_g3))->__Param(0);		HX_STACK_VAR(seek,"seek");
					HX_STACK_LINE(380)
					{
						HX_STACK_LINE(381)
						this->o->writeInt16(seek);
						HX_STACK_LINE(382)
						this->o->write(data);
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(379)
					::haxe::io::Bytes data = (::format::swf::SoundData(_g3))->__Param(0);		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(384)
					this->o->write(data);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(379)
					::haxe::io::Bytes data = (::format::swf::SoundData(_g3))->__Param(0);		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(386)
					this->o->write(data);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeSound,(void))

Void Writer_obj::writeGradRecord( int ver,::format::swf::GradRecord grad_record){
{
		HX_STACK_FRAME("format.swf.Writer","writeGradRecord",0x4c9cbca6,"format.swf.Writer.writeGradRecord","format/swf/Writer.hx",391,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ver,"ver")
		HX_STACK_ARG(grad_record,"grad_record")
		HX_STACK_LINE(391)
		switch( (int)(grad_record->__Index())){
			case (int)0: {
				HX_STACK_LINE(391)
				Dynamic col = (::format::swf::GradRecord(grad_record))->__Param(1);		HX_STACK_VAR(col,"col");
				HX_STACK_LINE(391)
				int pos = (::format::swf::GradRecord(grad_record))->__Param(0);		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(392)
				{
					HX_STACK_LINE(393)
					if (((ver > (int)2))){
						HX_STACK_LINE(394)
						HX_STACK_DO_THROW(HX_CSTRING("Shape versions higher than 2 require alpha channel in gradient control points!"));
					}
					HX_STACK_LINE(395)
					this->o->writeByte(pos);
					HX_STACK_LINE(396)
					this->writeRGB(col);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(391)
				Dynamic col = (::format::swf::GradRecord(grad_record))->__Param(1);		HX_STACK_VAR(col,"col");
				HX_STACK_LINE(391)
				int pos = (::format::swf::GradRecord(grad_record))->__Param(0);		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(398)
				{
					HX_STACK_LINE(399)
					if (((ver < (int)3))){
						HX_STACK_LINE(400)
						HX_STACK_DO_THROW(HX_CSTRING("Shape versions lower than 3 don't support alpha channel in gradient control points!"));
					}
					HX_STACK_LINE(401)
					this->o->writeByte(pos);
					HX_STACK_LINE(402)
					this->writeRGBA(col);
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeGradRecord,(void))

Void Writer_obj::writeGradient( int ver,Dynamic grad){
{
		HX_STACK_FRAME("format.swf.Writer","writeGradient",0x9bd465d7,"format.swf.Writer.writeGradient","format/swf/Writer.hx",406,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ver,"ver")
		HX_STACK_ARG(grad,"grad")
		HX_STACK_LINE(407)
		int spread_mode;		HX_STACK_VAR(spread_mode,"spread_mode");
		HX_STACK_LINE(407)
		{
			HX_STACK_LINE(407)
			::format::swf::SpreadMode _g = grad->__Field(HX_CSTRING("spread"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(407)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(408)
					spread_mode = (int)0;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(409)
					spread_mode = (int)1;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(410)
					spread_mode = (int)2;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(411)
					spread_mode = (int)3;
				}
				;break;
			}
		}
		HX_STACK_LINE(413)
		int interpolation_mode;		HX_STACK_VAR(interpolation_mode,"interpolation_mode");
		HX_STACK_LINE(413)
		{
			HX_STACK_LINE(413)
			::format::swf::InterpolationMode _g = grad->__Field(HX_CSTRING("interpolate"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(413)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(414)
					interpolation_mode = (int)0;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(415)
					interpolation_mode = (int)1;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(416)
					interpolation_mode = (int)2;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(417)
					interpolation_mode = (int)3;
				}
				;break;
			}
		}
		HX_STACK_LINE(419)
		if (((bool((ver < (int)4)) && bool(((bool((spread_mode != (int)0)) || bool((interpolation_mode != (int)0)))))))){
			HX_STACK_LINE(420)
			HX_STACK_DO_THROW(HX_CSTRING("Spread must be Pad and interpolation mode must be Normal RGB in gradient specification when shape version is lower than 4!"));
		}
		HX_STACK_LINE(422)
		int num_records = grad->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(num_records,"num_records");
		HX_STACK_LINE(424)
		if (((ver < (int)4))){
			HX_STACK_LINE(425)
			if (((num_records > (int)8))){
				HX_STACK_LINE(426)
				HX_STACK_DO_THROW(((HX_CSTRING("Gradient supports at most 8 control points (") + num_records) + HX_CSTRING(" has bee given) when shape verison is lower than 4!")));
			}
		}
		else{
			HX_STACK_LINE(427)
			if (((num_records > (int)15))){
				HX_STACK_LINE(428)
				HX_STACK_DO_THROW(((HX_CSTRING("Gradient supports at most 15 control points (") + num_records) + HX_CSTRING(" has been given) at shape version 4!")));
			}
		}
		HX_STACK_LINE(430)
		this->bits->writeBits((int)2,spread_mode);
		HX_STACK_LINE(431)
		this->bits->writeBits((int)2,interpolation_mode);
		HX_STACK_LINE(432)
		this->bits->writeBits((int)4,num_records);
		HX_STACK_LINE(433)
		{
			HX_STACK_LINE(433)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(433)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(433)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(433)
				_this->nbits = (int)0;
			}
		}
		HX_STACK_LINE(435)
		{
			HX_STACK_LINE(435)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(435)
			Array< ::Dynamic > _g1 = grad->__Field(HX_CSTRING("data"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(435)
			while((true)){
				HX_STACK_LINE(435)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(435)
					break;
				}
				HX_STACK_LINE(435)
				::format::swf::GradRecord grad_record = _g1->__get(_g).StaticCast< ::format::swf::GradRecord >();		HX_STACK_VAR(grad_record,"grad_record");
				HX_STACK_LINE(435)
				++(_g);
				HX_STACK_LINE(436)
				this->writeGradRecord(ver,grad_record);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeGradient,(void))

Void Writer_obj::writeFocalGradient( int ver,Dynamic grad){
{
		HX_STACK_FRAME("format.swf.Writer","writeFocalGradient",0x67f6002e,"format.swf.Writer.writeFocalGradient","format/swf/Writer.hx",440,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ver,"ver")
		HX_STACK_ARG(grad,"grad")
		HX_STACK_LINE(441)
		if (((ver < (int)4))){
			HX_STACK_LINE(442)
			HX_STACK_DO_THROW(HX_CSTRING("Focal gradient only supported in shape versions higher than 3!"));
		}
		HX_STACK_LINE(444)
		this->writeGradient(ver,grad->__Field(HX_CSTRING("data"),true));
		HX_STACK_LINE(445)
		this->o->writeUInt16(grad->__Field(HX_CSTRING("focalPoint"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeFocalGradient,(void))

Void Writer_obj::writeFillStyle( int ver,::format::swf::FillStyle fill_style){
{
		HX_STACK_FRAME("format.swf.Writer","writeFillStyle",0x43b609e7,"format.swf.Writer.writeFillStyle","format/swf/Writer.hx",449,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ver,"ver")
		HX_STACK_ARG(fill_style,"fill_style")
		HX_STACK_LINE(449)
		switch( (int)(fill_style->__Index())){
			case (int)0: {
				HX_STACK_LINE(449)
				Dynamic rgb = (::format::swf::FillStyle(fill_style))->__Param(0);		HX_STACK_VAR(rgb,"rgb");
				HX_STACK_LINE(450)
				{
					HX_STACK_LINE(451)
					if (((ver > (int)2))){
						HX_STACK_LINE(452)
						HX_STACK_DO_THROW(HX_CSTRING("Fill styles with Shape versions higher than 2 reqire alhpa channel!"));
					}
					HX_STACK_LINE(454)
					this->o->writeByte((int)0);
					HX_STACK_LINE(455)
					this->writeRGB(rgb);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(449)
				Dynamic rgba = (::format::swf::FillStyle(fill_style))->__Param(0);		HX_STACK_VAR(rgba,"rgba");
				HX_STACK_LINE(457)
				{
					HX_STACK_LINE(458)
					if (((ver < (int)3))){
						HX_STACK_LINE(459)
						HX_STACK_DO_THROW(HX_CSTRING("Fill styles with Shape versions lower than 3 doesn't support alhpa channel!"));
					}
					HX_STACK_LINE(461)
					this->o->writeByte((int)0);
					HX_STACK_LINE(462)
					this->writeRGBA(rgba);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(449)
				Dynamic grad = (::format::swf::FillStyle(fill_style))->__Param(1);		HX_STACK_VAR(grad,"grad");
				HX_STACK_LINE(449)
				Dynamic mat = (::format::swf::FillStyle(fill_style))->__Param(0);		HX_STACK_VAR(mat,"mat");
				HX_STACK_LINE(464)
				{
					HX_STACK_LINE(465)
					this->o->writeByte((int)16);
					HX_STACK_LINE(466)
					this->writeMatrix(mat);
					HX_STACK_LINE(467)
					this->writeGradient(ver,grad);
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(449)
				Dynamic grad = (::format::swf::FillStyle(fill_style))->__Param(1);		HX_STACK_VAR(grad,"grad");
				HX_STACK_LINE(449)
				Dynamic mat = (::format::swf::FillStyle(fill_style))->__Param(0);		HX_STACK_VAR(mat,"mat");
				HX_STACK_LINE(469)
				{
					HX_STACK_LINE(470)
					this->o->writeByte((int)18);
					HX_STACK_LINE(471)
					this->writeMatrix(mat);
					HX_STACK_LINE(472)
					this->writeGradient(ver,grad);
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(449)
				Dynamic grad = (::format::swf::FillStyle(fill_style))->__Param(1);		HX_STACK_VAR(grad,"grad");
				HX_STACK_LINE(449)
				Dynamic mat = (::format::swf::FillStyle(fill_style))->__Param(0);		HX_STACK_VAR(mat,"mat");
				HX_STACK_LINE(474)
				{
					HX_STACK_LINE(475)
					if (((ver < (int)3))){
						HX_STACK_LINE(476)
						HX_STACK_DO_THROW(HX_CSTRING("Focal gradient fill style only supported with Shape versions higher than 3!"));
					}
					HX_STACK_LINE(478)
					this->o->writeByte((int)19);
					HX_STACK_LINE(479)
					this->writeMatrix(mat);
					HX_STACK_LINE(480)
					this->writeFocalGradient(ver,grad);
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(449)
				bool smooth = (::format::swf::FillStyle(fill_style))->__Param(3);		HX_STACK_VAR(smooth,"smooth");
				HX_STACK_LINE(449)
				bool repeat = (::format::swf::FillStyle(fill_style))->__Param(2);		HX_STACK_VAR(repeat,"repeat");
				HX_STACK_LINE(449)
				Dynamic mat = (::format::swf::FillStyle(fill_style))->__Param(1);		HX_STACK_VAR(mat,"mat");
				HX_STACK_LINE(449)
				int cid = (::format::swf::FillStyle(fill_style))->__Param(0);		HX_STACK_VAR(cid,"cid");
				HX_STACK_LINE(482)
				{
					struct _Function_3_1{
						inline static int Block( bool &smooth){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Writer.hx",485,0x3f16c166)
							{
								HX_STACK_LINE(485)
								return (  ((smooth)) ? int((int)64) : int((int)66) );
							}
							return null();
						}
					};
					HX_STACK_LINE(483)
					this->o->writeByte((  ((repeat)) ? int(_Function_3_1::Block(smooth)) : int((  ((smooth)) ? int((int)65) : int((int)67) )) ));
					HX_STACK_LINE(492)
					this->o->writeUInt16(cid);
					HX_STACK_LINE(493)
					this->writeMatrix(mat);
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeFillStyle,(void))

Void Writer_obj::writeFillStyles( int ver,Array< ::Dynamic > fill_styles){
{
		HX_STACK_FRAME("format.swf.Writer","writeFillStyles",0xfb92a0ac,"format.swf.Writer.writeFillStyles","format/swf/Writer.hx",497,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ver,"ver")
		HX_STACK_ARG(fill_styles,"fill_styles")
		HX_STACK_LINE(498)
		int num_styles = fill_styles->length;		HX_STACK_VAR(num_styles,"num_styles");
		HX_STACK_LINE(500)
		{
			HX_STACK_LINE(500)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(500)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(500)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(500)
				_this->nbits = (int)0;
			}
		}
		HX_STACK_LINE(502)
		if (((num_styles > (int)254))){
			HX_STACK_LINE(503)
			if (((ver >= (int)2))){
				HX_STACK_LINE(504)
				this->o->writeByte((int)255);
				HX_STACK_LINE(505)
				this->o->writeUInt16(num_styles);
			}
			else{
				HX_STACK_LINE(506)
				if (((num_styles == (int)255))){
					HX_STACK_LINE(507)
					this->o->writeByte((int)255);
				}
				else{
					HX_STACK_LINE(509)
					HX_STACK_DO_THROW(((HX_CSTRING("Too much fill styles (") + num_styles) + HX_CSTRING(") for Shape version 1")));
				}
			}
		}
		else{
			HX_STACK_LINE(511)
			this->o->writeByte(num_styles);
		}
		HX_STACK_LINE(513)
		{
			HX_STACK_LINE(513)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(513)
			while((true)){
				HX_STACK_LINE(513)
				if ((!(((_g < fill_styles->length))))){
					HX_STACK_LINE(513)
					break;
				}
				HX_STACK_LINE(513)
				::format::swf::FillStyle style = fill_styles->__get(_g).StaticCast< ::format::swf::FillStyle >();		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(513)
				++(_g);
				HX_STACK_LINE(514)
				this->writeFillStyle(ver,style);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeFillStyles,(void))

Void Writer_obj::writeLineStyle( int ver,Dynamic line_style){
{
		HX_STACK_FRAME("format.swf.Writer","writeLineStyle",0xbc09e6d6,"format.swf.Writer.writeLineStyle","format/swf/Writer.hx",518,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ver,"ver")
		HX_STACK_ARG(line_style,"line_style")
		HX_STACK_LINE(519)
		this->o->writeUInt16(line_style->__Field(HX_CSTRING("width"),true));
		HX_STACK_LINE(520)
		{
			HX_STACK_LINE(520)
			::format::swf::LineStyleData _g = line_style->__Field(HX_CSTRING("data"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(520)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(520)
					Dynamic rgb = (::format::swf::LineStyleData(_g))->__Param(0);		HX_STACK_VAR(rgb,"rgb");
					HX_STACK_LINE(521)
					{
						HX_STACK_LINE(522)
						if (((ver > (int)2))){
							HX_STACK_LINE(523)
							HX_STACK_DO_THROW(HX_CSTRING("Line styles with Shape versions higher than 2 reqire alhpa channel!"));
						}
						HX_STACK_LINE(524)
						this->writeRGB(rgb);
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(520)
					Dynamic rgba = (::format::swf::LineStyleData(_g))->__Param(0);		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(526)
					{
						HX_STACK_LINE(527)
						if (((ver < (int)3))){
							HX_STACK_LINE(528)
							HX_STACK_DO_THROW(HX_CSTRING("Line styles with Shape versions lower than 3 doesn't support alhpa channel!"));
						}
						HX_STACK_LINE(529)
						this->writeRGBA(rgba);
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(520)
					Dynamic data = (::format::swf::LineStyleData(_g))->__Param(0);		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(531)
					{
						HX_STACK_LINE(532)
						if (((ver < (int)4))){
							HX_STACK_LINE(533)
							HX_STACK_DO_THROW(HX_CSTRING("LineStyle version 2 only supported in shape versions higher than 3!"));
						}
						HX_STACK_LINE(535)
						int _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(535)
						{
							HX_STACK_LINE(535)
							::format::swf::LineCapStyle _g11 = data->__Field(HX_CSTRING("startCap"),true);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(535)
							switch( (int)(_g11->__Index())){
								case (int)0: {
									HX_STACK_LINE(536)
									_g1 = (int)0;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(537)
									_g1 = (int)1;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(538)
									_g1 = (int)2;
								}
								;break;
							}
						}
						HX_STACK_LINE(535)
						this->bits->writeBits((int)2,_g1);
						HX_STACK_LINE(541)
						int _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(541)
						{
							HX_STACK_LINE(541)
							::format::swf::LineJoinStyle _g12 = data->__Field(HX_CSTRING("join"),true);		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(541)
							switch( (int)(_g12->__Index())){
								case (int)0: {
									HX_STACK_LINE(542)
									_g11 = (int)0;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(543)
									_g11 = (int)1;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(544)
									_g11 = (int)2;
								}
								;break;
							}
						}
						HX_STACK_LINE(541)
						this->bits->writeBits((int)2,_g11);
						HX_STACK_LINE(547)
						bool _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(547)
						{
							HX_STACK_LINE(547)
							::format::swf::LS2Fill _g12 = data->__Field(HX_CSTRING("fill"),true);		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(547)
							switch( (int)(_g12->__Index())){
								case (int)0: {
									HX_STACK_LINE(548)
									_g2 = false;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(549)
									_g2 = true;
								}
								;break;
							}
						}
						HX_STACK_LINE(547)
						this->bits->writeBit(_g2);
						HX_STACK_LINE(552)
						this->bits->writeBit(data->__Field(HX_CSTRING("noHScale"),true));
						HX_STACK_LINE(553)
						this->bits->writeBit(data->__Field(HX_CSTRING("noVScale"),true));
						HX_STACK_LINE(554)
						this->bits->writeBit(data->__Field(HX_CSTRING("pixelHinting"),true));
						HX_STACK_LINE(555)
						this->bits->writeBits((int)5,(int)0);
						HX_STACK_LINE(556)
						this->bits->writeBit(data->__Field(HX_CSTRING("noClose"),true));
						HX_STACK_LINE(558)
						int _g3;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(558)
						{
							HX_STACK_LINE(558)
							::format::swf::LineCapStyle _g12 = data->__Field(HX_CSTRING("endCap"),true);		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(558)
							switch( (int)(_g12->__Index())){
								case (int)0: {
									HX_STACK_LINE(559)
									_g3 = (int)0;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(560)
									_g3 = (int)1;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(561)
									_g3 = (int)2;
								}
								;break;
							}
						}
						HX_STACK_LINE(558)
						this->bits->writeBits((int)2,_g3);
						HX_STACK_LINE(564)
						{
							HX_STACK_LINE(564)
							::format::swf::LineJoinStyle _g12 = data->__Field(HX_CSTRING("join"),true);		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(564)
							switch( (int)(_g12->__Index())){
								case (int)2: {
									HX_STACK_LINE(564)
									int limitFactor = (::format::swf::LineJoinStyle(_g12))->__Param(0);		HX_STACK_VAR(limitFactor,"limitFactor");
									HX_STACK_LINE(566)
									this->o->writeUInt16(limitFactor);
								}
								;break;
								default: {
								}
							}
						}
						HX_STACK_LINE(570)
						{
							HX_STACK_LINE(570)
							::format::swf::LS2Fill _g12 = data->__Field(HX_CSTRING("fill"),true);		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(570)
							switch( (int)(_g12->__Index())){
								case (int)0: {
									HX_STACK_LINE(570)
									Dynamic color = (::format::swf::LS2Fill(_g12))->__Param(0);		HX_STACK_VAR(color,"color");
									HX_STACK_LINE(571)
									this->writeRGBA(color);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(570)
									::format::swf::FillStyle style = (::format::swf::LS2Fill(_g12))->__Param(0);		HX_STACK_VAR(style,"style");
									HX_STACK_LINE(572)
									this->writeFillStyle(ver,style);
								}
								;break;
							}
						}
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeLineStyle,(void))

Void Writer_obj::writeLineStyles( int ver,Dynamic line_styles){
{
		HX_STACK_FRAME("format.swf.Writer","writeLineStyles",0xcca014dd,"format.swf.Writer.writeLineStyles","format/swf/Writer.hx",577,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ver,"ver")
		HX_STACK_ARG(line_styles,"line_styles")
		HX_STACK_LINE(578)
		int num_styles = line_styles->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(num_styles,"num_styles");
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(580)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(580)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(580)
				_this->nbits = (int)0;
			}
		}
		HX_STACK_LINE(582)
		if (((num_styles > (int)254))){
			HX_STACK_LINE(583)
			if (((ver >= (int)2))){
				HX_STACK_LINE(584)
				this->o->writeByte((int)255);
				HX_STACK_LINE(585)
				this->o->writeUInt16(num_styles);
			}
			else{
				HX_STACK_LINE(586)
				if (((num_styles == (int)255))){
					HX_STACK_LINE(587)
					this->o->writeByte((int)255);
				}
				else{
					HX_STACK_LINE(589)
					HX_STACK_DO_THROW(((HX_CSTRING("Too much line styles (") + num_styles) + HX_CSTRING(") for Shape version 1")));
				}
			}
		}
		else{
			HX_STACK_LINE(591)
			this->o->writeByte(num_styles);
		}
		HX_STACK_LINE(593)
		{
			HX_STACK_LINE(593)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(593)
			while((true)){
				HX_STACK_LINE(593)
				if ((!(((_g < line_styles->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(593)
					break;
				}
				HX_STACK_LINE(593)
				Dynamic style = line_styles->__GetItem(_g);		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(593)
				++(_g);
				HX_STACK_LINE(594)
				this->writeLineStyle(ver,style);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeLineStyles,(void))

Void Writer_obj::writeShapeRecord( int ver,Dynamic style_info,::format::swf::ShapeRecord shape_record){
{
		HX_STACK_FRAME("format.swf.Writer","writeShapeRecord",0x8e965b0b,"format.swf.Writer.writeShapeRecord","format/swf/Writer.hx",599,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ver,"ver")
		HX_STACK_ARG(style_info,"style_info")
		HX_STACK_ARG(shape_record,"shape_record")
		HX_STACK_LINE(599)
		switch( (int)(shape_record->__Index())){
			case (int)0: {
				HX_STACK_LINE(601)
				this->bits->writeBit(false);
				HX_STACK_LINE(602)
				this->bits->writeBits((int)5,(int)0);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(599)
				Dynamic data = (::format::swf::ShapeRecord(shape_record))->__Param(0);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(604)
				{
					HX_STACK_LINE(605)
					this->bits->writeBit(false);
					HX_STACK_LINE(606)
					if (((data->__Field(HX_CSTRING("newStyles"),true) != null()))){
						HX_STACK_LINE(607)
						if (((ver > (int)1))){
							HX_STACK_LINE(608)
							this->bits->writeBit(true);
						}
						else{
							HX_STACK_LINE(610)
							HX_STACK_DO_THROW(HX_CSTRING("Defining new fill and line style arrays are only supported in shape versions higher than 1!"));
						}
					}
					else{
						HX_STACK_LINE(612)
						this->bits->writeBit(false);
					}
					HX_STACK_LINE(613)
					this->bits->writeBit((data->__Field(HX_CSTRING("lineStyle"),true) != null()));
					HX_STACK_LINE(614)
					this->bits->writeBit((data->__Field(HX_CSTRING("fillStyle1"),true) != null()));
					HX_STACK_LINE(615)
					this->bits->writeBit((data->__Field(HX_CSTRING("fillStyle0"),true) != null()));
					HX_STACK_LINE(616)
					this->bits->writeBit((data->__Field(HX_CSTRING("moveTo"),true) != null()));
					HX_STACK_LINE(618)
					if (((data->__Field(HX_CSTRING("moveTo"),true) != null()))){
						HX_STACK_LINE(619)
						int _g;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(619)
						{
							HX_STACK_LINE(619)
							Array< int > values = Array_obj< int >::__new().Add(data->__Field(HX_CSTRING("moveTo"),true)->__Field(HX_CSTRING("dx"),true)).Add(data->__Field(HX_CSTRING("moveTo"),true)->__Field(HX_CSTRING("dy"),true));		HX_STACK_VAR(values,"values");
							HX_STACK_LINE(619)
							int x = (int)0;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(619)
							{
								HX_STACK_LINE(619)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(619)
								while((true)){
									HX_STACK_LINE(619)
									if ((!(((_g1 < values->length))))){
										HX_STACK_LINE(619)
										break;
									}
									HX_STACK_LINE(619)
									int v = values->__get(_g1);		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(619)
									++(_g1);
									HX_STACK_LINE(619)
									if (((v < (int)0))){
										HX_STACK_LINE(619)
										v = -(v);
									}
									HX_STACK_LINE(619)
									hx::OrEq(x,v);
								}
							}
							HX_STACK_LINE(619)
							hx::OrEq(x,(int(x) >> int((int)1)));
							HX_STACK_LINE(619)
							hx::OrEq(x,(int(x) >> int((int)2)));
							HX_STACK_LINE(619)
							hx::OrEq(x,(int(x) >> int((int)4)));
							HX_STACK_LINE(619)
							hx::OrEq(x,(int(x) >> int((int)8)));
							HX_STACK_LINE(619)
							hx::OrEq(x,(int(x) >> int((int)16)));
							HX_STACK_LINE(619)
							hx::SubEq(x,(int((int(x) >> int((int)1))) & int((int)357913941)));
							HX_STACK_LINE(619)
							x = (((int((int(x) >> int((int)2))) & int((int)858993459))) + ((int(x) & int((int)858993459))));
							HX_STACK_LINE(619)
							x = (int((((int(x) >> int((int)4))) + x)) & int((int)252645135));
							HX_STACK_LINE(619)
							hx::AddEq(x,(int(x) >> int((int)8)));
							HX_STACK_LINE(619)
							hx::AddEq(x,(int(x) >> int((int)16)));
							HX_STACK_LINE(619)
							hx::AndEq(x,(int)63);
							HX_STACK_LINE(619)
							_g = x;
						}
						HX_STACK_LINE(619)
						int mb = (_g + (int)1);		HX_STACK_VAR(mb,"mb");
						HX_STACK_LINE(621)
						this->bits->writeBits((int)5,mb);
						HX_STACK_LINE(622)
						this->bits->writeBits(mb,data->__Field(HX_CSTRING("moveTo"),true)->__Field(HX_CSTRING("dx"),true));
						HX_STACK_LINE(623)
						this->bits->writeBits(mb,data->__Field(HX_CSTRING("moveTo"),true)->__Field(HX_CSTRING("dy"),true));
					}
					HX_STACK_LINE(626)
					if (((data->__Field(HX_CSTRING("fillStyle0"),true) != null()))){
						HX_STACK_LINE(627)
						this->bits->writeBits(style_info->__Field(HX_CSTRING("fillBits"),true),data->__Field(HX_CSTRING("fillStyle0"),true)->__Field(HX_CSTRING("idx"),true));
					}
					HX_STACK_LINE(630)
					if (((data->__Field(HX_CSTRING("fillStyle1"),true) != null()))){
						HX_STACK_LINE(631)
						this->bits->writeBits(style_info->__Field(HX_CSTRING("fillBits"),true),data->__Field(HX_CSTRING("fillStyle1"),true)->__Field(HX_CSTRING("idx"),true));
					}
					HX_STACK_LINE(634)
					if (((data->__Field(HX_CSTRING("lineStyle"),true) != null()))){
						HX_STACK_LINE(635)
						this->bits->writeBits(style_info->__Field(HX_CSTRING("lineBits"),true),data->__Field(HX_CSTRING("lineStyle"),true)->__Field(HX_CSTRING("idx"),true));
					}
					HX_STACK_LINE(638)
					if (((data->__Field(HX_CSTRING("newStyles"),true) != null()))){
						HX_STACK_LINE(639)
						this->writeFillStyles(ver,data->__Field(HX_CSTRING("newStyles"),true)->__Field(HX_CSTRING("fillStyles"),true));
						HX_STACK_LINE(640)
						this->writeLineStyles(ver,data->__Field(HX_CSTRING("newStyles"),true)->__Field(HX_CSTRING("lineStyles"),true));
						HX_STACK_LINE(642)
						hx::AddEq(style_info->__FieldRef(HX_CSTRING("numFillStyles")),data->__Field(HX_CSTRING("newStyles"),true)->__Field(HX_CSTRING("fillStyles"),true)->__Field(HX_CSTRING("length"),true));
						HX_STACK_LINE(643)
						hx::AddEq(style_info->__FieldRef(HX_CSTRING("numLineStyles")),data->__Field(HX_CSTRING("newStyles"),true)->__Field(HX_CSTRING("lineStyles"),true)->__Field(HX_CSTRING("length"),true));
						HX_STACK_LINE(644)
						int _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(644)
						{
							HX_STACK_LINE(644)
							Array< int > values = Array_obj< int >::__new().Add(style_info->__Field(HX_CSTRING("numFillStyles"),true));		HX_STACK_VAR(values,"values");
							HX_STACK_LINE(644)
							int x = (int)0;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(644)
							{
								HX_STACK_LINE(644)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(644)
								while((true)){
									HX_STACK_LINE(644)
									if ((!(((_g < values->length))))){
										HX_STACK_LINE(644)
										break;
									}
									HX_STACK_LINE(644)
									int v = values->__get(_g);		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(644)
									++(_g);
									HX_STACK_LINE(644)
									if (((v < (int)0))){
										HX_STACK_LINE(644)
										v = -(v);
									}
									HX_STACK_LINE(644)
									hx::OrEq(x,v);
								}
							}
							HX_STACK_LINE(644)
							hx::OrEq(x,(int(x) >> int((int)1)));
							HX_STACK_LINE(644)
							hx::OrEq(x,(int(x) >> int((int)2)));
							HX_STACK_LINE(644)
							hx::OrEq(x,(int(x) >> int((int)4)));
							HX_STACK_LINE(644)
							hx::OrEq(x,(int(x) >> int((int)8)));
							HX_STACK_LINE(644)
							hx::OrEq(x,(int(x) >> int((int)16)));
							HX_STACK_LINE(644)
							hx::SubEq(x,(int((int(x) >> int((int)1))) & int((int)357913941)));
							HX_STACK_LINE(644)
							x = (((int((int(x) >> int((int)2))) & int((int)858993459))) + ((int(x) & int((int)858993459))));
							HX_STACK_LINE(644)
							x = (int((((int(x) >> int((int)4))) + x)) & int((int)252645135));
							HX_STACK_LINE(644)
							hx::AddEq(x,(int(x) >> int((int)8)));
							HX_STACK_LINE(644)
							hx::AddEq(x,(int(x) >> int((int)16)));
							HX_STACK_LINE(644)
							hx::AndEq(x,(int)63);
							HX_STACK_LINE(644)
							_g1 = x;
						}
						HX_STACK_LINE(644)
						style_info->__FieldRef(HX_CSTRING("fillBits")) = _g1;
						HX_STACK_LINE(645)
						int _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(645)
						{
							HX_STACK_LINE(645)
							Array< int > values = Array_obj< int >::__new().Add(style_info->__Field(HX_CSTRING("numLineStyles"),true));		HX_STACK_VAR(values,"values");
							HX_STACK_LINE(645)
							int x = (int)0;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(645)
							{
								HX_STACK_LINE(645)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(645)
								while((true)){
									HX_STACK_LINE(645)
									if ((!(((_g < values->length))))){
										HX_STACK_LINE(645)
										break;
									}
									HX_STACK_LINE(645)
									int v = values->__get(_g);		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(645)
									++(_g);
									HX_STACK_LINE(645)
									if (((v < (int)0))){
										HX_STACK_LINE(645)
										v = -(v);
									}
									HX_STACK_LINE(645)
									hx::OrEq(x,v);
								}
							}
							HX_STACK_LINE(645)
							hx::OrEq(x,(int(x) >> int((int)1)));
							HX_STACK_LINE(645)
							hx::OrEq(x,(int(x) >> int((int)2)));
							HX_STACK_LINE(645)
							hx::OrEq(x,(int(x) >> int((int)4)));
							HX_STACK_LINE(645)
							hx::OrEq(x,(int(x) >> int((int)8)));
							HX_STACK_LINE(645)
							hx::OrEq(x,(int(x) >> int((int)16)));
							HX_STACK_LINE(645)
							hx::SubEq(x,(int((int(x) >> int((int)1))) & int((int)357913941)));
							HX_STACK_LINE(645)
							x = (((int((int(x) >> int((int)2))) & int((int)858993459))) + ((int(x) & int((int)858993459))));
							HX_STACK_LINE(645)
							x = (int((((int(x) >> int((int)4))) + x)) & int((int)252645135));
							HX_STACK_LINE(645)
							hx::AddEq(x,(int(x) >> int((int)8)));
							HX_STACK_LINE(645)
							hx::AddEq(x,(int(x) >> int((int)16)));
							HX_STACK_LINE(645)
							hx::AndEq(x,(int)63);
							HX_STACK_LINE(645)
							_g2 = x;
						}
						HX_STACK_LINE(645)
						style_info->__FieldRef(HX_CSTRING("lineBits")) = _g2;
						HX_STACK_LINE(647)
						this->bits->writeBits((int)4,style_info->__Field(HX_CSTRING("fillBits"),true));
						HX_STACK_LINE(648)
						this->bits->writeBits((int)4,style_info->__Field(HX_CSTRING("lineBits"),true));
					}
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(599)
				int dy = (::format::swf::ShapeRecord(shape_record))->__Param(1);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(599)
				int dx = (::format::swf::ShapeRecord(shape_record))->__Param(0);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(651)
				{
					HX_STACK_LINE(652)
					this->bits->writeBit(true);
					HX_STACK_LINE(653)
					this->bits->writeBit(true);
					HX_STACK_LINE(655)
					int _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(655)
					{
						HX_STACK_LINE(655)
						Array< int > values = Array_obj< int >::__new().Add(dx).Add(dy);		HX_STACK_VAR(values,"values");
						HX_STACK_LINE(655)
						int x = (int)0;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(655)
						{
							HX_STACK_LINE(655)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(655)
							while((true)){
								HX_STACK_LINE(655)
								if ((!(((_g < values->length))))){
									HX_STACK_LINE(655)
									break;
								}
								HX_STACK_LINE(655)
								int v = values->__get(_g);		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(655)
								++(_g);
								HX_STACK_LINE(655)
								if (((v < (int)0))){
									HX_STACK_LINE(655)
									v = -(v);
								}
								HX_STACK_LINE(655)
								hx::OrEq(x,v);
							}
						}
						HX_STACK_LINE(655)
						hx::OrEq(x,(int(x) >> int((int)1)));
						HX_STACK_LINE(655)
						hx::OrEq(x,(int(x) >> int((int)2)));
						HX_STACK_LINE(655)
						hx::OrEq(x,(int(x) >> int((int)4)));
						HX_STACK_LINE(655)
						hx::OrEq(x,(int(x) >> int((int)8)));
						HX_STACK_LINE(655)
						hx::OrEq(x,(int(x) >> int((int)16)));
						HX_STACK_LINE(655)
						hx::SubEq(x,(int((int(x) >> int((int)1))) & int((int)357913941)));
						HX_STACK_LINE(655)
						x = (((int((int(x) >> int((int)2))) & int((int)858993459))) + ((int(x) & int((int)858993459))));
						HX_STACK_LINE(655)
						x = (int((((int(x) >> int((int)4))) + x)) & int((int)252645135));
						HX_STACK_LINE(655)
						hx::AddEq(x,(int(x) >> int((int)8)));
						HX_STACK_LINE(655)
						hx::AddEq(x,(int(x) >> int((int)16)));
						HX_STACK_LINE(655)
						hx::AndEq(x,(int)63);
						HX_STACK_LINE(655)
						_g3 = x;
					}
					HX_STACK_LINE(655)
					int mb = (_g3 + (int)1);		HX_STACK_VAR(mb,"mb");
					HX_STACK_LINE(656)
					if (((mb < (int)2))){
						HX_STACK_LINE(656)
						mb = (int)0;
					}
					else{
						HX_STACK_LINE(656)
						mb = (mb - (int)2);
					}
					HX_STACK_LINE(657)
					this->bits->writeBits((int)4,mb);
					HX_STACK_LINE(658)
					hx::AddEq(mb,(int)2);
					HX_STACK_LINE(660)
					bool is_general = (bool((dx != (int)0)) && bool((dy != (int)0)));		HX_STACK_VAR(is_general,"is_general");
					HX_STACK_LINE(661)
					this->bits->writeBit(is_general);
					HX_STACK_LINE(663)
					if ((!(is_general))){
						HX_STACK_LINE(664)
						bool is_vertical = (dx == (int)0);		HX_STACK_VAR(is_vertical,"is_vertical");
						HX_STACK_LINE(665)
						this->bits->writeBit(is_vertical);
						HX_STACK_LINE(666)
						if ((is_vertical)){
							HX_STACK_LINE(667)
							this->bits->writeBits(mb,dy);
						}
						else{
							HX_STACK_LINE(669)
							this->bits->writeBits(mb,dx);
						}
					}
					else{
						HX_STACK_LINE(671)
						this->bits->writeBits(mb,dx);
						HX_STACK_LINE(672)
						this->bits->writeBits(mb,dy);
					}
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(599)
				int ady = (::format::swf::ShapeRecord(shape_record))->__Param(3);		HX_STACK_VAR(ady,"ady");
				HX_STACK_LINE(599)
				int adx = (::format::swf::ShapeRecord(shape_record))->__Param(2);		HX_STACK_VAR(adx,"adx");
				HX_STACK_LINE(599)
				int cdy = (::format::swf::ShapeRecord(shape_record))->__Param(1);		HX_STACK_VAR(cdy,"cdy");
				HX_STACK_LINE(599)
				int cdx = (::format::swf::ShapeRecord(shape_record))->__Param(0);		HX_STACK_VAR(cdx,"cdx");
				HX_STACK_LINE(675)
				{
					HX_STACK_LINE(676)
					this->bits->writeBit(true);
					HX_STACK_LINE(677)
					this->bits->writeBit(false);
					HX_STACK_LINE(679)
					int _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(679)
					{
						HX_STACK_LINE(679)
						Array< int > values = Array_obj< int >::__new().Add(cdx).Add(cdy).Add(adx).Add(ady);		HX_STACK_VAR(values,"values");
						HX_STACK_LINE(679)
						int x = (int)0;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(679)
						{
							HX_STACK_LINE(679)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(679)
							while((true)){
								HX_STACK_LINE(679)
								if ((!(((_g < values->length))))){
									HX_STACK_LINE(679)
									break;
								}
								HX_STACK_LINE(679)
								int v = values->__get(_g);		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(679)
								++(_g);
								HX_STACK_LINE(679)
								if (((v < (int)0))){
									HX_STACK_LINE(679)
									v = -(v);
								}
								HX_STACK_LINE(679)
								hx::OrEq(x,v);
							}
						}
						HX_STACK_LINE(679)
						hx::OrEq(x,(int(x) >> int((int)1)));
						HX_STACK_LINE(679)
						hx::OrEq(x,(int(x) >> int((int)2)));
						HX_STACK_LINE(679)
						hx::OrEq(x,(int(x) >> int((int)4)));
						HX_STACK_LINE(679)
						hx::OrEq(x,(int(x) >> int((int)8)));
						HX_STACK_LINE(679)
						hx::OrEq(x,(int(x) >> int((int)16)));
						HX_STACK_LINE(679)
						hx::SubEq(x,(int((int(x) >> int((int)1))) & int((int)357913941)));
						HX_STACK_LINE(679)
						x = (((int((int(x) >> int((int)2))) & int((int)858993459))) + ((int(x) & int((int)858993459))));
						HX_STACK_LINE(679)
						x = (int((((int(x) >> int((int)4))) + x)) & int((int)252645135));
						HX_STACK_LINE(679)
						hx::AddEq(x,(int(x) >> int((int)8)));
						HX_STACK_LINE(679)
						hx::AddEq(x,(int(x) >> int((int)16)));
						HX_STACK_LINE(679)
						hx::AndEq(x,(int)63);
						HX_STACK_LINE(679)
						_g4 = x;
					}
					HX_STACK_LINE(679)
					int mb = (_g4 + (int)1);		HX_STACK_VAR(mb,"mb");
					HX_STACK_LINE(680)
					if (((mb < (int)2))){
						HX_STACK_LINE(680)
						mb = (int)0;
					}
					else{
						HX_STACK_LINE(680)
						mb = (mb - (int)2);
					}
					HX_STACK_LINE(681)
					this->bits->writeBits((int)4,mb);
					HX_STACK_LINE(682)
					hx::AddEq(mb,(int)2);
					HX_STACK_LINE(684)
					this->bits->writeBits(mb,cdx);
					HX_STACK_LINE(685)
					this->bits->writeBits(mb,cdy);
					HX_STACK_LINE(686)
					this->bits->writeBits(mb,adx);
					HX_STACK_LINE(687)
					this->bits->writeBits(mb,ady);
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Writer_obj,writeShapeRecord,(void))

Void Writer_obj::writeShapeWithoutStyle( int ver,Dynamic data){
{
		HX_STACK_FRAME("format.swf.Writer","writeShapeWithoutStyle",0x6a4e19c3,"format.swf.Writer.writeShapeWithoutStyle","format/swf/Writer.hx",691,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ver,"ver")
		HX_STACK_ARG(data,"data")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Writer.hx",692,0x3f16c166)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("numFillStyles") , (int)0,false);
					__result->Add(HX_CSTRING("fillBits") , (int)1,false);
					__result->Add(HX_CSTRING("numLineStyles") , (int)0,false);
					__result->Add(HX_CSTRING("lineBits") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(692)
		Dynamic style_info = _Function_1_1::Block();		HX_STACK_VAR(style_info,"style_info");
		HX_STACK_LINE(699)
		this->bits->writeBits((int)4,style_info->__Field(HX_CSTRING("fillBits"),true));
		HX_STACK_LINE(700)
		this->bits->writeBits((int)4,style_info->__Field(HX_CSTRING("lineBits"),true));
		HX_STACK_LINE(701)
		{
			HX_STACK_LINE(701)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(701)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(701)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(701)
				_this->nbits = (int)0;
			}
		}
		HX_STACK_LINE(703)
		{
			HX_STACK_LINE(703)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(703)
			Array< ::Dynamic > _g1 = data->__Field(HX_CSTRING("shapeRecords"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(703)
			while((true)){
				HX_STACK_LINE(703)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(703)
					break;
				}
				HX_STACK_LINE(703)
				::format::swf::ShapeRecord shr = _g1->__get(_g).StaticCast< ::format::swf::ShapeRecord >();		HX_STACK_VAR(shr,"shr");
				HX_STACK_LINE(703)
				++(_g);
				HX_STACK_LINE(704)
				this->writeShapeRecord(ver,style_info,shr);
			}
		}
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(706)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(706)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(706)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(706)
				_this->nbits = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeShapeWithoutStyle,(void))

Void Writer_obj::writeShapeWithStyle( int ver,Dynamic data){
{
		HX_STACK_FRAME("format.swf.Writer","writeShapeWithStyle",0x8c4bad11,"format.swf.Writer.writeShapeWithStyle","format/swf/Writer.hx",709,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ver,"ver")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(710)
		this->writeFillStyles(ver,data->__Field(HX_CSTRING("fillStyles"),true));
		HX_STACK_LINE(711)
		this->writeLineStyles(ver,data->__Field(HX_CSTRING("lineStyles"),true));
		HX_STACK_LINE(715)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(715)
		{
			HX_STACK_LINE(715)
			Array< int > values = Array_obj< int >::__new().Add(data->__Field(HX_CSTRING("fillStyles"),true)->__Field(HX_CSTRING("length"),true));		HX_STACK_VAR(values,"values");
			HX_STACK_LINE(715)
			int x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(715)
			{
				HX_STACK_LINE(715)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(715)
				while((true)){
					HX_STACK_LINE(715)
					if ((!(((_g1 < values->length))))){
						HX_STACK_LINE(715)
						break;
					}
					HX_STACK_LINE(715)
					int v = values->__get(_g1);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(715)
					++(_g1);
					HX_STACK_LINE(715)
					if (((v < (int)0))){
						HX_STACK_LINE(715)
						v = -(v);
					}
					HX_STACK_LINE(715)
					hx::OrEq(x,v);
				}
			}
			HX_STACK_LINE(715)
			hx::OrEq(x,(int(x) >> int((int)1)));
			HX_STACK_LINE(715)
			hx::OrEq(x,(int(x) >> int((int)2)));
			HX_STACK_LINE(715)
			hx::OrEq(x,(int(x) >> int((int)4)));
			HX_STACK_LINE(715)
			hx::OrEq(x,(int(x) >> int((int)8)));
			HX_STACK_LINE(715)
			hx::OrEq(x,(int(x) >> int((int)16)));
			HX_STACK_LINE(715)
			hx::SubEq(x,(int((int(x) >> int((int)1))) & int((int)357913941)));
			HX_STACK_LINE(715)
			x = (((int((int(x) >> int((int)2))) & int((int)858993459))) + ((int(x) & int((int)858993459))));
			HX_STACK_LINE(715)
			x = (int((((int(x) >> int((int)4))) + x)) & int((int)252645135));
			HX_STACK_LINE(715)
			hx::AddEq(x,(int(x) >> int((int)8)));
			HX_STACK_LINE(715)
			hx::AddEq(x,(int(x) >> int((int)16)));
			HX_STACK_LINE(715)
			hx::AndEq(x,(int)63);
			HX_STACK_LINE(715)
			_g = x;
		}
		HX_STACK_LINE(717)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(717)
		{
			HX_STACK_LINE(717)
			Array< int > values = Array_obj< int >::__new().Add(data->__Field(HX_CSTRING("lineStyles"),true)->__Field(HX_CSTRING("length"),true));		HX_STACK_VAR(values,"values");
			HX_STACK_LINE(717)
			int x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(717)
			{
				HX_STACK_LINE(717)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(717)
				while((true)){
					HX_STACK_LINE(717)
					if ((!(((_g2 < values->length))))){
						HX_STACK_LINE(717)
						break;
					}
					HX_STACK_LINE(717)
					int v = values->__get(_g2);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(717)
					++(_g2);
					HX_STACK_LINE(717)
					if (((v < (int)0))){
						HX_STACK_LINE(717)
						v = -(v);
					}
					HX_STACK_LINE(717)
					hx::OrEq(x,v);
				}
			}
			HX_STACK_LINE(717)
			hx::OrEq(x,(int(x) >> int((int)1)));
			HX_STACK_LINE(717)
			hx::OrEq(x,(int(x) >> int((int)2)));
			HX_STACK_LINE(717)
			hx::OrEq(x,(int(x) >> int((int)4)));
			HX_STACK_LINE(717)
			hx::OrEq(x,(int(x) >> int((int)8)));
			HX_STACK_LINE(717)
			hx::OrEq(x,(int(x) >> int((int)16)));
			HX_STACK_LINE(717)
			hx::SubEq(x,(int((int(x) >> int((int)1))) & int((int)357913941)));
			HX_STACK_LINE(717)
			x = (((int((int(x) >> int((int)2))) & int((int)858993459))) + ((int(x) & int((int)858993459))));
			HX_STACK_LINE(717)
			x = (int((((int(x) >> int((int)4))) + x)) & int((int)252645135));
			HX_STACK_LINE(717)
			hx::AddEq(x,(int(x) >> int((int)8)));
			HX_STACK_LINE(717)
			hx::AddEq(x,(int(x) >> int((int)16)));
			HX_STACK_LINE(717)
			hx::AndEq(x,(int)63);
			HX_STACK_LINE(717)
			_g1 = x;
		}
		struct _Function_1_1{
			inline static Dynamic Block( int &_g1,int &_g,Dynamic &data){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Writer.hx",713,0x3f16c166)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("numFillStyles") , data->__Field(HX_CSTRING("fillStyles"),true)->__Field(HX_CSTRING("length"),true),false);
					__result->Add(HX_CSTRING("fillBits") , _g,false);
					__result->Add(HX_CSTRING("numLineStyles") , data->__Field(HX_CSTRING("lineStyles"),true)->__Field(HX_CSTRING("length"),true),false);
					__result->Add(HX_CSTRING("lineBits") , _g1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(713)
		Dynamic style_info = _Function_1_1::Block(_g1,_g,data);		HX_STACK_VAR(style_info,"style_info");
		HX_STACK_LINE(720)
		this->bits->writeBits((int)4,style_info->__Field(HX_CSTRING("fillBits"),true));
		HX_STACK_LINE(721)
		this->bits->writeBits((int)4,style_info->__Field(HX_CSTRING("lineBits"),true));
		HX_STACK_LINE(722)
		{
			HX_STACK_LINE(722)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(722)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(722)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(722)
				_this->nbits = (int)0;
			}
		}
		HX_STACK_LINE(724)
		{
			HX_STACK_LINE(724)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(724)
			Array< ::Dynamic > _g11 = data->__Field(HX_CSTRING("shapeRecords"),true);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(724)
			while((true)){
				HX_STACK_LINE(724)
				if ((!(((_g2 < _g11->length))))){
					HX_STACK_LINE(724)
					break;
				}
				HX_STACK_LINE(724)
				::format::swf::ShapeRecord shr = _g11->__get(_g2).StaticCast< ::format::swf::ShapeRecord >();		HX_STACK_VAR(shr,"shr");
				HX_STACK_LINE(724)
				++(_g2);
				HX_STACK_LINE(725)
				this->writeShapeRecord(ver,style_info,shr);
			}
		}
		HX_STACK_LINE(727)
		{
			HX_STACK_LINE(727)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(727)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(727)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(727)
				_this->nbits = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeShapeWithStyle,(void))

Void Writer_obj::writeShape( int id,::format::swf::ShapeData data){
{
		HX_STACK_FRAME("format.swf.Writer","writeShape",0x0c3250da,"format.swf.Writer.writeShape","format/swf/Writer.hx",730,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(731)
		::haxe::io::BytesOutput old = this->openTMP();		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(733)
		this->o->writeUInt16(id);
		HX_STACK_LINE(735)
		switch( (int)(data->__Index())){
			case (int)0: {
				HX_STACK_LINE(735)
				Dynamic shapes = (::format::swf::ShapeData(data))->__Param(1);		HX_STACK_VAR(shapes,"shapes");
				HX_STACK_LINE(735)
				Dynamic bounds = (::format::swf::ShapeData(data))->__Param(0);		HX_STACK_VAR(bounds,"bounds");
				HX_STACK_LINE(736)
				{
					HX_STACK_LINE(737)
					this->writeRect(bounds);
					HX_STACK_LINE(738)
					this->writeShapeWithStyle((int)1,shapes);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(735)
				Dynamic shapes = (::format::swf::ShapeData(data))->__Param(1);		HX_STACK_VAR(shapes,"shapes");
				HX_STACK_LINE(735)
				Dynamic bounds = (::format::swf::ShapeData(data))->__Param(0);		HX_STACK_VAR(bounds,"bounds");
				HX_STACK_LINE(740)
				{
					HX_STACK_LINE(741)
					this->writeRect(bounds);
					HX_STACK_LINE(742)
					this->writeShapeWithStyle((int)2,shapes);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(735)
				Dynamic shapes = (::format::swf::ShapeData(data))->__Param(1);		HX_STACK_VAR(shapes,"shapes");
				HX_STACK_LINE(735)
				Dynamic bounds = (::format::swf::ShapeData(data))->__Param(0);		HX_STACK_VAR(bounds,"bounds");
				HX_STACK_LINE(744)
				{
					HX_STACK_LINE(745)
					this->writeRect(bounds);
					HX_STACK_LINE(746)
					this->writeShapeWithStyle((int)3,shapes);
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(735)
				Dynamic data1 = (::format::swf::ShapeData(data))->__Param(0);		HX_STACK_VAR(data1,"data1");
				HX_STACK_LINE(748)
				{
					HX_STACK_LINE(749)
					this->writeRect(data1->__Field(HX_CSTRING("shapeBounds"),true));
					HX_STACK_LINE(750)
					this->writeRect(data1->__Field(HX_CSTRING("edgeBounds"),true));
					HX_STACK_LINE(751)
					this->bits->writeBits((int)5,(int)0);
					HX_STACK_LINE(752)
					this->bits->writeBit(data1->__Field(HX_CSTRING("useWinding"),true));
					HX_STACK_LINE(753)
					this->bits->writeBit(data1->__Field(HX_CSTRING("useNonScalingStroke"),true));
					HX_STACK_LINE(754)
					this->bits->writeBit(data1->__Field(HX_CSTRING("useScalingStroke"),true));
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(755)
						::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(755)
						if (((_this->nbits > (int)0))){
							HX_STACK_LINE(755)
							_this->writeBits(((int)8 - _this->nbits),(int)0);
							HX_STACK_LINE(755)
							_this->nbits = (int)0;
						}
					}
					HX_STACK_LINE(756)
					this->writeShapeWithStyle((int)4,data1->__Field(HX_CSTRING("shapes"),true));
				}
			}
			;break;
		}
		HX_STACK_LINE(759)
		{
			HX_STACK_LINE(759)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(759)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(759)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(759)
				_this->nbits = (int)0;
			}
		}
		HX_STACK_LINE(760)
		::haxe::io::Bytes shape_data = this->closeTMP(old);		HX_STACK_VAR(shape_data,"shape_data");
		HX_STACK_LINE(762)
		switch( (int)(data->__Index())){
			case (int)0: {
				HX_STACK_LINE(764)
				this->writeTID((int)2,shape_data->length);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(767)
				this->writeTID((int)22,shape_data->length);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(770)
				this->writeTID((int)32,shape_data->length);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(773)
				this->writeTID((int)83,shape_data->length);
			}
			;break;
		}
		HX_STACK_LINE(776)
		this->o->write(shape_data);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeShape,(void))

Void Writer_obj::writeMorphGradient( int ver,Dynamic g){
{
		HX_STACK_FRAME("format.swf.Writer","writeMorphGradient",0xd5d91991,"format.swf.Writer.writeMorphGradient","format/swf/Writer.hx",779,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ver,"ver")
		HX_STACK_ARG(g,"g")
		HX_STACK_LINE(780)
		this->o->writeByte(g->__Field(HX_CSTRING("startRatio"),true));
		HX_STACK_LINE(781)
		this->writeRGBA(g->__Field(HX_CSTRING("startColor"),true));
		HX_STACK_LINE(782)
		this->o->writeByte(g->__Field(HX_CSTRING("endRatio"),true));
		HX_STACK_LINE(783)
		this->writeRGBA(g->__Field(HX_CSTRING("endColor"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeMorphGradient,(void))

Void Writer_obj::writeMorphGradients( int ver,Dynamic gradients){
{
		HX_STACK_FRAME("format.swf.Writer","writeMorphGradients",0x481d45c2,"format.swf.Writer.writeMorphGradients","format/swf/Writer.hx",786,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ver,"ver")
		HX_STACK_ARG(gradients,"gradients")
		HX_STACK_LINE(787)
		int num = gradients->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(num,"num");
		HX_STACK_LINE(788)
		if (((bool((num < (int)1)) || bool((num > (int)8))))){
			HX_STACK_LINE(789)
			HX_STACK_DO_THROW(((HX_CSTRING("Number of specified morph gradients (") + num) + HX_CSTRING(") must be in range 1..8")));
		}
		HX_STACK_LINE(791)
		{
			HX_STACK_LINE(791)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(791)
			while((true)){
				HX_STACK_LINE(791)
				if ((!(((_g < gradients->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(791)
					break;
				}
				HX_STACK_LINE(791)
				Dynamic grad = gradients->__GetItem(_g);		HX_STACK_VAR(grad,"grad");
				HX_STACK_LINE(791)
				++(_g);
				HX_STACK_LINE(792)
				this->writeMorphGradient(ver,grad);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeMorphGradients,(void))

Void Writer_obj::writeMorphFillStyle( int ver,::format::swf::MorphFillStyle fill_style){
{
		HX_STACK_FRAME("format.swf.Writer","writeMorphFillStyle",0xcdce98ed,"format.swf.Writer.writeMorphFillStyle","format/swf/Writer.hx",797,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ver,"ver")
		HX_STACK_ARG(fill_style,"fill_style")
		HX_STACK_LINE(797)
		switch( (int)(fill_style->__Index())){
			case (int)0: {
				HX_STACK_LINE(797)
				Dynamic endColor = (::format::swf::MorphFillStyle(fill_style))->__Param(1);		HX_STACK_VAR(endColor,"endColor");
				HX_STACK_LINE(797)
				Dynamic startColor = (::format::swf::MorphFillStyle(fill_style))->__Param(0);		HX_STACK_VAR(startColor,"startColor");
				HX_STACK_LINE(798)
				{
					HX_STACK_LINE(799)
					this->o->writeByte((int)0);
					HX_STACK_LINE(800)
					this->writeRGBA(startColor);
					HX_STACK_LINE(801)
					this->writeRGBA(endColor);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(797)
				Dynamic gradients = (::format::swf::MorphFillStyle(fill_style))->__Param(2);		HX_STACK_VAR(gradients,"gradients");
				HX_STACK_LINE(797)
				Dynamic endMatrix = (::format::swf::MorphFillStyle(fill_style))->__Param(1);		HX_STACK_VAR(endMatrix,"endMatrix");
				HX_STACK_LINE(797)
				Dynamic startMatrix = (::format::swf::MorphFillStyle(fill_style))->__Param(0);		HX_STACK_VAR(startMatrix,"startMatrix");
				HX_STACK_LINE(803)
				{
					HX_STACK_LINE(804)
					this->o->writeByte((int)16);
					HX_STACK_LINE(805)
					this->writeMatrix(startMatrix);
					HX_STACK_LINE(806)
					this->writeMatrix(endMatrix);
					HX_STACK_LINE(807)
					this->writeMorphGradients(ver,gradients);
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(797)
				Dynamic gradients = (::format::swf::MorphFillStyle(fill_style))->__Param(2);		HX_STACK_VAR(gradients,"gradients");
				HX_STACK_LINE(797)
				Dynamic endMatrix = (::format::swf::MorphFillStyle(fill_style))->__Param(1);		HX_STACK_VAR(endMatrix,"endMatrix");
				HX_STACK_LINE(797)
				Dynamic startMatrix = (::format::swf::MorphFillStyle(fill_style))->__Param(0);		HX_STACK_VAR(startMatrix,"startMatrix");
				HX_STACK_LINE(809)
				{
					HX_STACK_LINE(810)
					this->o->writeByte((int)16);
					HX_STACK_LINE(811)
					this->writeMatrix(startMatrix);
					HX_STACK_LINE(812)
					this->writeMatrix(endMatrix);
					HX_STACK_LINE(813)
					this->writeMorphGradients(ver,gradients);
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(797)
				bool smooth = (::format::swf::MorphFillStyle(fill_style))->__Param(4);		HX_STACK_VAR(smooth,"smooth");
				HX_STACK_LINE(797)
				bool repeat = (::format::swf::MorphFillStyle(fill_style))->__Param(3);		HX_STACK_VAR(repeat,"repeat");
				HX_STACK_LINE(797)
				Dynamic endMatrix = (::format::swf::MorphFillStyle(fill_style))->__Param(2);		HX_STACK_VAR(endMatrix,"endMatrix");
				HX_STACK_LINE(797)
				Dynamic startMatrix = (::format::swf::MorphFillStyle(fill_style))->__Param(1);		HX_STACK_VAR(startMatrix,"startMatrix");
				HX_STACK_LINE(797)
				int cid = (::format::swf::MorphFillStyle(fill_style))->__Param(0);		HX_STACK_VAR(cid,"cid");
				HX_STACK_LINE(815)
				{
					struct _Function_3_1{
						inline static int Block( bool &smooth){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Writer.hx",818,0x3f16c166)
							{
								HX_STACK_LINE(818)
								return (  ((smooth)) ? int((int)64) : int((int)66) );
							}
							return null();
						}
					};
					HX_STACK_LINE(816)
					this->o->writeByte((  ((repeat)) ? int(_Function_3_1::Block(smooth)) : int((  ((smooth)) ? int((int)65) : int((int)67) )) ));
					HX_STACK_LINE(825)
					this->o->writeUInt16(cid);
					HX_STACK_LINE(826)
					this->writeMatrix(startMatrix);
					HX_STACK_LINE(827)
					this->writeMatrix(endMatrix);
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeMorphFillStyle,(void))

Void Writer_obj::writeMorphFillStyles( int ver,Array< ::Dynamic > fill_styles){
{
		HX_STACK_FRAME("format.swf.Writer","writeMorphFillStyles",0x46f736e6,"format.swf.Writer.writeMorphFillStyles","format/swf/Writer.hx",831,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ver,"ver")
		HX_STACK_ARG(fill_styles,"fill_styles")
		HX_STACK_LINE(832)
		int num_styles = fill_styles->length;		HX_STACK_VAR(num_styles,"num_styles");
		HX_STACK_LINE(834)
		{
			HX_STACK_LINE(834)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(834)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(834)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(834)
				_this->nbits = (int)0;
			}
		}
		HX_STACK_LINE(836)
		if (((num_styles > (int)254))){
			HX_STACK_LINE(837)
			this->o->writeByte((int)255);
			HX_STACK_LINE(838)
			this->o->writeUInt16(num_styles);
		}
		else{
			HX_STACK_LINE(840)
			this->o->writeByte(num_styles);
		}
		HX_STACK_LINE(842)
		{
			HX_STACK_LINE(842)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(842)
			while((true)){
				HX_STACK_LINE(842)
				if ((!(((_g < fill_styles->length))))){
					HX_STACK_LINE(842)
					break;
				}
				HX_STACK_LINE(842)
				::format::swf::MorphFillStyle style = fill_styles->__get(_g).StaticCast< ::format::swf::MorphFillStyle >();		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(842)
				++(_g);
				HX_STACK_LINE(843)
				this->writeMorphFillStyle(ver,style);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeMorphFillStyles,(void))

Void Writer_obj::writeMorph1LineStyle( Dynamic s){
{
		HX_STACK_FRAME("format.swf.Writer","writeMorph1LineStyle",0x72053fed,"format.swf.Writer.writeMorph1LineStyle","format/swf/Writer.hx",847,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(848)
		this->o->writeUInt16(s->__Field(HX_CSTRING("startWidth"),true));
		HX_STACK_LINE(849)
		this->o->writeUInt16(s->__Field(HX_CSTRING("endWidth"),true));
		HX_STACK_LINE(850)
		this->writeRGBA(s->__Field(HX_CSTRING("startColor"),true));
		HX_STACK_LINE(851)
		this->writeRGBA(s->__Field(HX_CSTRING("endColor"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeMorph1LineStyle,(void))

Void Writer_obj::writeMorph1LineStyles( Dynamic line_styles){
{
		HX_STACK_FRAME("format.swf.Writer","writeMorph1LineStyles",0x5292afe6,"format.swf.Writer.writeMorph1LineStyles","format/swf/Writer.hx",854,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(line_styles,"line_styles")
		HX_STACK_LINE(855)
		int num_styles = line_styles->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(num_styles,"num_styles");
		HX_STACK_LINE(857)
		{
			HX_STACK_LINE(857)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(857)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(857)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(857)
				_this->nbits = (int)0;
			}
		}
		HX_STACK_LINE(859)
		if (((num_styles > (int)254))){
			HX_STACK_LINE(860)
			this->o->writeByte((int)255);
			HX_STACK_LINE(861)
			this->o->writeUInt16(num_styles);
		}
		else{
			HX_STACK_LINE(863)
			this->o->writeByte(num_styles);
		}
		HX_STACK_LINE(865)
		{
			HX_STACK_LINE(865)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(865)
			while((true)){
				HX_STACK_LINE(865)
				if ((!(((_g < line_styles->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(865)
					break;
				}
				HX_STACK_LINE(865)
				Dynamic style = line_styles->__GetItem(_g);		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(865)
				++(_g);
				HX_STACK_LINE(866)
				this->writeMorph1LineStyle(style);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeMorph1LineStyles,(void))

Void Writer_obj::writeMorph2LineStyle( ::format::swf::Morph2LineStyle style){
{
		HX_STACK_FRAME("format.swf.Writer","writeMorph2LineStyle",0x324fb7cc,"format.swf.Writer.writeMorph2LineStyle","format/swf/Writer.hx",870,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(style,"style")
		HX_STACK_LINE(871)
		Dynamic m2data;		HX_STACK_VAR(m2data,"m2data");
		HX_STACK_LINE(873)
		switch( (int)(style->__Index())){
			case (int)0: {
				HX_STACK_LINE(873)
				Dynamic data = (::format::swf::Morph2LineStyle(style))->__Param(2);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(875)
				m2data = data;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(873)
				Dynamic data = (::format::swf::Morph2LineStyle(style))->__Param(1);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(878)
				m2data = data;
			}
			;break;
		}
		HX_STACK_LINE(881)
		this->o->writeUInt16(m2data->__Field(HX_CSTRING("startWidth"),true));
		HX_STACK_LINE(882)
		this->o->writeUInt16(m2data->__Field(HX_CSTRING("endWidth"),true));
		HX_STACK_LINE(883)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(883)
		{
			HX_STACK_LINE(883)
			::format::swf::LineCapStyle _g1 = m2data->__Field(HX_CSTRING("startCapStyle"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(883)
			switch( (int)(_g1->__Index())){
				case (int)0: {
					HX_STACK_LINE(884)
					_g = (int)0;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(885)
					_g = (int)1;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(886)
					_g = (int)2;
				}
				;break;
			}
		}
		HX_STACK_LINE(883)
		this->bits->writeBits((int)2,_g);
		HX_STACK_LINE(889)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(889)
		{
			HX_STACK_LINE(889)
			::format::swf::LineJoinStyle _g2 = m2data->__Field(HX_CSTRING("joinStyle"),true);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(889)
			switch( (int)(_g2->__Index())){
				case (int)0: {
					HX_STACK_LINE(890)
					_g1 = (int)0;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(891)
					_g1 = (int)1;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(892)
					_g1 = (int)2;
				}
				;break;
			}
		}
		HX_STACK_LINE(889)
		this->bits->writeBits((int)2,_g1);
		HX_STACK_LINE(895)
		switch( (int)(style->__Index())){
			case (int)0: {
				HX_STACK_LINE(897)
				this->bits->writeBit(false);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(900)
				this->bits->writeBit(true);
			}
			;break;
		}
		HX_STACK_LINE(903)
		this->bits->writeBit(m2data->__Field(HX_CSTRING("noHScale"),true));
		HX_STACK_LINE(904)
		this->bits->writeBit(m2data->__Field(HX_CSTRING("noVScale"),true));
		HX_STACK_LINE(905)
		this->bits->writeBit(m2data->__Field(HX_CSTRING("pixelHinting"),true));
		HX_STACK_LINE(906)
		this->bits->writeBits((int)5,(int)0);
		HX_STACK_LINE(907)
		this->bits->writeBit(m2data->__Field(HX_CSTRING("noClose"),true));
		HX_STACK_LINE(909)
		int _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(909)
		{
			HX_STACK_LINE(909)
			::format::swf::LineCapStyle _g3 = m2data->__Field(HX_CSTRING("endCapStyle"),true);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(909)
			switch( (int)(_g3->__Index())){
				case (int)0: {
					HX_STACK_LINE(910)
					_g2 = (int)0;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(911)
					_g2 = (int)1;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(912)
					_g2 = (int)2;
				}
				;break;
			}
		}
		HX_STACK_LINE(909)
		this->bits->writeBits((int)2,_g2);
		HX_STACK_LINE(915)
		{
			HX_STACK_LINE(915)
			::format::swf::LineJoinStyle _g3 = m2data->__Field(HX_CSTRING("joinStyle"),true);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(915)
			switch( (int)(_g3->__Index())){
				case (int)2: {
					HX_STACK_LINE(915)
					int limitFactor = (::format::swf::LineJoinStyle(_g3))->__Param(0);		HX_STACK_VAR(limitFactor,"limitFactor");
					HX_STACK_LINE(917)
					this->o->writeUInt16(limitFactor);
				}
				;break;
				default: {
				}
			}
		}
		HX_STACK_LINE(921)
		switch( (int)(style->__Index())){
			case (int)0: {
				HX_STACK_LINE(921)
				Dynamic endColor = (::format::swf::Morph2LineStyle(style))->__Param(1);		HX_STACK_VAR(endColor,"endColor");
				HX_STACK_LINE(921)
				Dynamic startColor = (::format::swf::Morph2LineStyle(style))->__Param(0);		HX_STACK_VAR(startColor,"startColor");
				HX_STACK_LINE(922)
				{
					HX_STACK_LINE(923)
					this->writeRGBA(startColor);
					HX_STACK_LINE(924)
					this->writeRGBA(endColor);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(921)
				::format::swf::MorphFillStyle fill = (::format::swf::Morph2LineStyle(style))->__Param(0);		HX_STACK_VAR(fill,"fill");
				HX_STACK_LINE(927)
				this->writeMorphFillStyle((int)2,fill);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeMorph2LineStyle,(void))

Void Writer_obj::writeMorph2LineStyles( Array< ::Dynamic > line_styles){
{
		HX_STACK_FRAME("format.swf.Writer","writeMorph2LineStyles",0xd3711b27,"format.swf.Writer.writeMorph2LineStyles","format/swf/Writer.hx",931,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(line_styles,"line_styles")
		HX_STACK_LINE(932)
		int num_styles = line_styles->length;		HX_STACK_VAR(num_styles,"num_styles");
		HX_STACK_LINE(934)
		{
			HX_STACK_LINE(934)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(934)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(934)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(934)
				_this->nbits = (int)0;
			}
		}
		HX_STACK_LINE(936)
		if (((num_styles > (int)254))){
			HX_STACK_LINE(937)
			this->o->writeByte((int)255);
			HX_STACK_LINE(938)
			this->o->writeUInt16(num_styles);
		}
		else{
			HX_STACK_LINE(940)
			this->o->writeByte(num_styles);
		}
		HX_STACK_LINE(942)
		{
			HX_STACK_LINE(942)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(942)
			while((true)){
				HX_STACK_LINE(942)
				if ((!(((_g < line_styles->length))))){
					HX_STACK_LINE(942)
					break;
				}
				HX_STACK_LINE(942)
				::format::swf::Morph2LineStyle style = line_styles->__get(_g).StaticCast< ::format::swf::Morph2LineStyle >();		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(942)
				++(_g);
				HX_STACK_LINE(943)
				this->writeMorph2LineStyle(style);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeMorph2LineStyles,(void))

Void Writer_obj::writeMorphShape( int id,::format::swf::MorphShapeData data){
{
		HX_STACK_FRAME("format.swf.Writer","writeMorphShape",0x86c964e0,"format.swf.Writer.writeMorphShape","format/swf/Writer.hx",947,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(948)
		::haxe::io::BytesOutput old = this->openTMP();		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(950)
		this->o->writeUInt16(id);
		HX_STACK_LINE(952)
		switch( (int)(data->__Index())){
			case (int)0: {
				HX_STACK_LINE(952)
				Dynamic sh1data = (::format::swf::MorphShapeData(data))->__Param(0);		HX_STACK_VAR(sh1data,"sh1data");
				HX_STACK_LINE(953)
				{
					HX_STACK_LINE(954)
					this->writeRect(sh1data->__Field(HX_CSTRING("startBounds"),true));
					HX_STACK_LINE(955)
					this->writeRect(sh1data->__Field(HX_CSTRING("endBounds"),true));
					HX_STACK_LINE(957)
					::haxe::io::BytesOutput old1 = this->openTMP();		HX_STACK_VAR(old1,"old1");
					HX_STACK_LINE(959)
					this->writeMorphFillStyles((int)1,sh1data->__Field(HX_CSTRING("fillStyles"),true));
					HX_STACK_LINE(960)
					this->writeMorph1LineStyles(sh1data->__Field(HX_CSTRING("lineStyles"),true));
					HX_STACK_LINE(961)
					this->writeShapeWithoutStyle((int)3,sh1data->__Field(HX_CSTRING("startEdges"),true));
					HX_STACK_LINE(962)
					{
						HX_STACK_LINE(962)
						::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(962)
						if (((_this->nbits > (int)0))){
							HX_STACK_LINE(962)
							_this->writeBits(((int)8 - _this->nbits),(int)0);
							HX_STACK_LINE(962)
							_this->nbits = (int)0;
						}
					}
					HX_STACK_LINE(964)
					::haxe::io::Bytes part_data = this->closeTMP(old1);		HX_STACK_VAR(part_data,"part_data");
					HX_STACK_LINE(966)
					this->o->writeInt32(part_data->length);
					HX_STACK_LINE(967)
					this->o->write(part_data);
					HX_STACK_LINE(968)
					this->writeShapeWithoutStyle((int)3,sh1data->__Field(HX_CSTRING("endEdges"),true));
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(952)
				Dynamic sh2data = (::format::swf::MorphShapeData(data))->__Param(0);		HX_STACK_VAR(sh2data,"sh2data");
				HX_STACK_LINE(970)
				{
					HX_STACK_LINE(971)
					this->writeRect(sh2data->__Field(HX_CSTRING("startBounds"),true));
					HX_STACK_LINE(972)
					this->writeRect(sh2data->__Field(HX_CSTRING("endBounds"),true));
					HX_STACK_LINE(973)
					this->writeRect(sh2data->__Field(HX_CSTRING("startEdgeBounds"),true));
					HX_STACK_LINE(974)
					this->writeRect(sh2data->__Field(HX_CSTRING("endEdgeBounds"),true));
					HX_STACK_LINE(975)
					this->bits->writeBits((int)6,(int)0);
					HX_STACK_LINE(976)
					this->bits->writeBit(sh2data->__Field(HX_CSTRING("useNonScalingStrokes"),true));
					HX_STACK_LINE(977)
					this->bits->writeBit(sh2data->__Field(HX_CSTRING("useScalingStrokes"),true));
					HX_STACK_LINE(978)
					{
						HX_STACK_LINE(978)
						::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(978)
						if (((_this->nbits > (int)0))){
							HX_STACK_LINE(978)
							_this->writeBits(((int)8 - _this->nbits),(int)0);
							HX_STACK_LINE(978)
							_this->nbits = (int)0;
						}
					}
					HX_STACK_LINE(980)
					::haxe::io::BytesOutput old1 = this->openTMP();		HX_STACK_VAR(old1,"old1");
					HX_STACK_LINE(982)
					this->writeMorphFillStyles((int)1,sh2data->__Field(HX_CSTRING("fillStyles"),true));
					HX_STACK_LINE(983)
					this->writeMorph2LineStyles(sh2data->__Field(HX_CSTRING("lineStyles"),true));
					HX_STACK_LINE(984)
					this->writeShapeWithoutStyle((int)4,sh2data->__Field(HX_CSTRING("startEdges"),true));
					HX_STACK_LINE(985)
					{
						HX_STACK_LINE(985)
						::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(985)
						if (((_this->nbits > (int)0))){
							HX_STACK_LINE(985)
							_this->writeBits(((int)8 - _this->nbits),(int)0);
							HX_STACK_LINE(985)
							_this->nbits = (int)0;
						}
					}
					HX_STACK_LINE(987)
					::haxe::io::Bytes part_data = this->closeTMP(old1);		HX_STACK_VAR(part_data,"part_data");
					HX_STACK_LINE(989)
					this->o->writeInt32(part_data->length);
					HX_STACK_LINE(990)
					this->o->write(part_data);
					HX_STACK_LINE(991)
					this->writeShapeWithoutStyle((int)4,sh2data->__Field(HX_CSTRING("endEdges"),true));
				}
			}
			;break;
		}
		HX_STACK_LINE(994)
		{
			HX_STACK_LINE(994)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(994)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(994)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(994)
				_this->nbits = (int)0;
			}
		}
		HX_STACK_LINE(995)
		::haxe::io::Bytes morph_shape_data = this->closeTMP(old);		HX_STACK_VAR(morph_shape_data,"morph_shape_data");
		HX_STACK_LINE(997)
		switch( (int)(data->__Index())){
			case (int)0: {
				HX_STACK_LINE(999)
				this->writeTID((int)46,morph_shape_data->length);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(1002)
				this->writeTID((int)84,morph_shape_data->length);
			}
			;break;
		}
		HX_STACK_LINE(1006)
		this->o->write(morph_shape_data);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeMorphShape,(void))

Array< int > Writer_obj::writeFontGlyphs( Dynamic glyphs){
	HX_STACK_FRAME("format.swf.Writer","writeFontGlyphs",0x44d1c41d,"format.swf.Writer.writeFontGlyphs","format/swf/Writer.hx",1009,0x3f16c166)
	HX_STACK_THIS(this)
	HX_STACK_ARG(glyphs,"glyphs")
	HX_STACK_LINE(1010)
	::haxe::io::BytesOutput old = this->openTMP();		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(1012)
	Array< int > offsets = Array_obj< int >::__new();		HX_STACK_VAR(offsets,"offsets");
	HX_STACK_LINE(1013)
	int offs = (int)0;		HX_STACK_VAR(offs,"offs");
	HX_STACK_LINE(1015)
	{
		HX_STACK_LINE(1015)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1015)
		while((true)){
			HX_STACK_LINE(1015)
			if ((!(((_g < glyphs->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(1015)
				break;
			}
			HX_STACK_LINE(1015)
			Dynamic shape = glyphs->__GetItem(_g);		HX_STACK_VAR(shape,"shape");
			HX_STACK_LINE(1015)
			++(_g);
			HX_STACK_LINE(1016)
			offsets->push(offs);
			HX_STACK_LINE(1018)
			::haxe::io::BytesOutput old1 = this->openTMP();		HX_STACK_VAR(old1,"old1");
			HX_STACK_LINE(1019)
			this->writeShapeWithoutStyle((int)1,shape);
			HX_STACK_LINE(1020)
			{
				HX_STACK_LINE(1020)
				::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1020)
				if (((_this->nbits > (int)0))){
					HX_STACK_LINE(1020)
					_this->writeBits(((int)8 - _this->nbits),(int)0);
					HX_STACK_LINE(1020)
					_this->nbits = (int)0;
				}
			}
			HX_STACK_LINE(1021)
			::haxe::io::Bytes shape_data = this->closeTMP(old1);		HX_STACK_VAR(shape_data,"shape_data");
			HX_STACK_LINE(1023)
			this->o->write(shape_data);
			HX_STACK_LINE(1024)
			hx::AddEq(offs,shape_data->length);
		}
	}
	HX_STACK_LINE(1027)
	::haxe::io::Bytes glyph_data = this->closeTMP(old);		HX_STACK_VAR(glyph_data,"glyph_data");
	HX_STACK_LINE(1029)
	this->o->write(glyph_data);
	HX_STACK_LINE(1031)
	return offsets;
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeFontGlyphs,return )

Void Writer_obj::writeFont1( Dynamic data){
{
		HX_STACK_FRAME("format.swf.Writer","writeFont1",0x94a7253b,"format.swf.Writer.writeFont1","format/swf/Writer.hx",1034,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(1035)
		::haxe::io::BytesOutput old = this->openTMP();		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(1037)
		Array< int > offset_table = this->writeFontGlyphs(data->__Field(HX_CSTRING("glyphs"),true));		HX_STACK_VAR(offset_table,"offset_table");
		HX_STACK_LINE(1039)
		if (((((offset_table->length * (int)2) + offset_table->__get((offset_table->length - (int)1))) > (int)65535))){
			HX_STACK_LINE(1040)
			HX_STACK_DO_THROW(HX_CSTRING("Font version 1 only supports font sizes up to 64kB!"));
		}
		HX_STACK_LINE(1042)
		{
			HX_STACK_LINE(1042)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1042)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(1042)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(1042)
				_this->nbits = (int)0;
			}
		}
		HX_STACK_LINE(1043)
		::haxe::io::Bytes shape_data = this->closeTMP(old);		HX_STACK_VAR(shape_data,"shape_data");
		HX_STACK_LINE(1045)
		int first_glyph_offset = (offset_table->length * (int)2);		HX_STACK_VAR(first_glyph_offset,"first_glyph_offset");
		HX_STACK_LINE(1046)
		{
			HX_STACK_LINE(1046)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1046)
			while((true)){
				HX_STACK_LINE(1046)
				if ((!(((_g < offset_table->length))))){
					HX_STACK_LINE(1046)
					break;
				}
				HX_STACK_LINE(1046)
				int offset = offset_table->__get(_g);		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(1046)
				++(_g);
				HX_STACK_LINE(1047)
				this->o->writeUInt16((first_glyph_offset + offset));
			}
		}
		HX_STACK_LINE(1050)
		this->o->write(shape_data);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeFont1,(void))

Void Writer_obj::writeFont2( bool hasWideChars,Dynamic data){
{
		HX_STACK_FRAME("format.swf.Writer","writeFont2",0x94a7253c,"format.swf.Writer.writeFont2","format/swf/Writer.hx",1053,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(hasWideChars,"hasWideChars")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(1054)
		Dynamic glyphs = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(glyphs,"glyphs");
		HX_STACK_LINE(1055)
		int num_glyphs = data->__Field(HX_CSTRING("glyphs"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(num_glyphs,"num_glyphs");
		HX_STACK_LINE(1056)
		{
			HX_STACK_LINE(1056)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1056)
			Dynamic _g1 = data->__Field(HX_CSTRING("glyphs"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1056)
			while((true)){
				HX_STACK_LINE(1056)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(1056)
					break;
				}
				HX_STACK_LINE(1056)
				Dynamic glyph = _g1->__GetItem(_g);		HX_STACK_VAR(glyph,"glyph");
				HX_STACK_LINE(1056)
				++(_g);
				HX_STACK_LINE(1057)
				glyphs->__Field(HX_CSTRING("push"),true)(glyph->__Field(HX_CSTRING("shape"),true));
			}
		}
		HX_STACK_LINE(1059)
		::haxe::io::BytesOutput old = this->openTMP();		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(1060)
		Array< int > offset_table = this->writeFontGlyphs(glyphs);		HX_STACK_VAR(offset_table,"offset_table");
		HX_STACK_LINE(1061)
		{
			HX_STACK_LINE(1061)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1061)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(1061)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(1061)
				_this->nbits = (int)0;
			}
		}
		HX_STACK_LINE(1062)
		::haxe::io::Bytes shape_data = this->closeTMP(old);		HX_STACK_VAR(shape_data,"shape_data");
		HX_STACK_LINE(1065)
		bool hasWideOffsets = ((((offset_table->length * (int)2) + (int)2) + shape_data->length) > (int)65535);		HX_STACK_VAR(hasWideOffsets,"hasWideOffsets");
		HX_STACK_LINE(1067)
		this->bits->writeBit((data->__Field(HX_CSTRING("layout"),true) != null()));
		HX_STACK_LINE(1068)
		this->bits->writeBit(data->__Field(HX_CSTRING("shiftJIS"),true));
		HX_STACK_LINE(1069)
		this->bits->writeBit(data->__Field(HX_CSTRING("isSmall"),true));
		HX_STACK_LINE(1070)
		this->bits->writeBit(data->__Field(HX_CSTRING("isANSI"),true));
		HX_STACK_LINE(1071)
		this->bits->writeBit(hasWideOffsets);
		HX_STACK_LINE(1072)
		this->bits->writeBit(hasWideChars);
		HX_STACK_LINE(1073)
		this->bits->writeBit(data->__Field(HX_CSTRING("isItalic"),true));
		HX_STACK_LINE(1074)
		this->bits->writeBit(data->__Field(HX_CSTRING("isBold"),true));
		HX_STACK_LINE(1075)
		{
			HX_STACK_LINE(1075)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1075)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(1075)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(1075)
				_this->nbits = (int)0;
			}
		}
		HX_STACK_LINE(1076)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1076)
		{
			HX_STACK_LINE(1076)
			::format::swf::LangCode _g1 = data->__Field(HX_CSTRING("language"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1076)
			switch( (int)(_g1->__Index())){
				case (int)0: {
					HX_STACK_LINE(1077)
					_g = (int)0;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1078)
					_g = (int)1;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(1079)
					_g = (int)2;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(1080)
					_g = (int)3;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(1081)
					_g = (int)4;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(1082)
					_g = (int)5;
				}
				;break;
			}
		}
		HX_STACK_LINE(1076)
		this->o->writeByte(_g);
		HX_STACK_LINE(1084)
		this->o->writeByte(data->__Field(HX_CSTRING("name"),true)->__Field(HX_CSTRING("length"),true));
		HX_STACK_LINE(1085)
		this->o->writeString(data->__Field(HX_CSTRING("name"),true));
		HX_STACK_LINE(1086)
		this->o->writeUInt16(num_glyphs);
		HX_STACK_LINE(1088)
		if ((hasWideOffsets)){
			HX_STACK_LINE(1090)
			int first_glyph_offset = ((num_glyphs * (int)4) + (int)4);		HX_STACK_VAR(first_glyph_offset,"first_glyph_offset");
			HX_STACK_LINE(1092)
			{
				HX_STACK_LINE(1092)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1092)
				while((true)){
					HX_STACK_LINE(1092)
					if ((!(((_g1 < offset_table->length))))){
						HX_STACK_LINE(1092)
						break;
					}
					HX_STACK_LINE(1092)
					int offset = offset_table->__get(_g1);		HX_STACK_VAR(offset,"offset");
					HX_STACK_LINE(1092)
					++(_g1);
					HX_STACK_LINE(1093)
					this->o->writeInt32((first_glyph_offset + offset));
				}
			}
			HX_STACK_LINE(1094)
			this->o->writeInt32((first_glyph_offset + shape_data->length));
		}
		else{
			HX_STACK_LINE(1097)
			int first_glyph_offset = ((num_glyphs * (int)2) + (int)2);		HX_STACK_VAR(first_glyph_offset,"first_glyph_offset");
			HX_STACK_LINE(1099)
			{
				HX_STACK_LINE(1099)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1099)
				while((true)){
					HX_STACK_LINE(1099)
					if ((!(((_g1 < offset_table->length))))){
						HX_STACK_LINE(1099)
						break;
					}
					HX_STACK_LINE(1099)
					int offset = offset_table->__get(_g1);		HX_STACK_VAR(offset,"offset");
					HX_STACK_LINE(1099)
					++(_g1);
					HX_STACK_LINE(1100)
					this->o->writeUInt16((first_glyph_offset + offset));
				}
			}
			HX_STACK_LINE(1102)
			this->o->writeUInt16((first_glyph_offset + shape_data->length));
		}
		HX_STACK_LINE(1105)
		this->o->write(shape_data);
		HX_STACK_LINE(1108)
		if ((hasWideChars)){
			HX_STACK_LINE(1109)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1109)
			Dynamic _g11 = data->__Field(HX_CSTRING("glyphs"),true);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1109)
			while((true)){
				HX_STACK_LINE(1109)
				if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(1109)
					break;
				}
				HX_STACK_LINE(1109)
				Dynamic glyph = _g11->__GetItem(_g1);		HX_STACK_VAR(glyph,"glyph");
				HX_STACK_LINE(1109)
				++(_g1);
				HX_STACK_LINE(1110)
				this->o->writeUInt16(glyph->__Field(HX_CSTRING("charCode"),true));
			}
		}
		else{
			HX_STACK_LINE(1114)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1114)
			Dynamic _g11 = data->__Field(HX_CSTRING("glyphs"),true);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1114)
			while((true)){
				HX_STACK_LINE(1114)
				if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(1114)
					break;
				}
				HX_STACK_LINE(1114)
				Dynamic glyph = _g11->__GetItem(_g1);		HX_STACK_VAR(glyph,"glyph");
				HX_STACK_LINE(1114)
				++(_g1);
				HX_STACK_LINE(1115)
				this->o->writeByte(glyph->__Field(HX_CSTRING("charCode"),true));
			}
		}
		HX_STACK_LINE(1118)
		if (((data->__Field(HX_CSTRING("layout"),true) != null()))){
			HX_STACK_LINE(1119)
			this->o->writeInt16(data->__Field(HX_CSTRING("layout"),true)->__Field(HX_CSTRING("ascent"),true));
			HX_STACK_LINE(1120)
			this->o->writeInt16(data->__Field(HX_CSTRING("layout"),true)->__Field(HX_CSTRING("descent"),true));
			HX_STACK_LINE(1121)
			this->o->writeInt16(data->__Field(HX_CSTRING("layout"),true)->__Field(HX_CSTRING("leading"),true));
			HX_STACK_LINE(1123)
			{
				HX_STACK_LINE(1123)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1123)
				Dynamic _g11 = data->__Field(HX_CSTRING("layout"),true)->__Field(HX_CSTRING("glyphs"),true);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1123)
				while((true)){
					HX_STACK_LINE(1123)
					if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(1123)
						break;
					}
					HX_STACK_LINE(1123)
					Dynamic g = _g11->__GetItem(_g1);		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(1123)
					++(_g1);
					HX_STACK_LINE(1124)
					this->o->writeUInt16((  (((g->__Field(HX_CSTRING("advance"),true) > (int)65535))) ? int((int)65535) : int(g->__Field(HX_CSTRING("advance"),true)) ));
				}
			}
			HX_STACK_LINE(1126)
			{
				HX_STACK_LINE(1126)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1126)
				Dynamic _g11 = data->__Field(HX_CSTRING("layout"),true)->__Field(HX_CSTRING("glyphs"),true);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1126)
				while((true)){
					HX_STACK_LINE(1126)
					if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(1126)
						break;
					}
					HX_STACK_LINE(1126)
					Dynamic g = _g11->__GetItem(_g1);		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(1126)
					++(_g1);
					HX_STACK_LINE(1127)
					this->writeRect(g->__Field(HX_CSTRING("bounds"),true));
				}
			}
			HX_STACK_LINE(1129)
			this->o->writeUInt16(data->__Field(HX_CSTRING("layout"),true)->__Field(HX_CSTRING("kerning"),true)->__Field(HX_CSTRING("length"),true));
			HX_STACK_LINE(1131)
			if ((hasWideChars)){
				HX_STACK_LINE(1132)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1132)
				Dynamic _g11 = data->__Field(HX_CSTRING("layout"),true)->__Field(HX_CSTRING("kerning"),true);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1132)
				while((true)){
					HX_STACK_LINE(1132)
					if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(1132)
						break;
					}
					HX_STACK_LINE(1132)
					Dynamic k = _g11->__GetItem(_g1);		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(1132)
					++(_g1);
					HX_STACK_LINE(1133)
					this->o->writeUInt16(k->__Field(HX_CSTRING("charCode1"),true));
					HX_STACK_LINE(1134)
					this->o->writeUInt16(k->__Field(HX_CSTRING("charCode2"),true));
					HX_STACK_LINE(1135)
					this->o->writeInt16(k->__Field(HX_CSTRING("adjust"),true));
				}
			}
			else{
				HX_STACK_LINE(1138)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1138)
				Dynamic _g11 = data->__Field(HX_CSTRING("layout"),true)->__Field(HX_CSTRING("kerning"),true);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1138)
				while((true)){
					HX_STACK_LINE(1138)
					if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(1138)
						break;
					}
					HX_STACK_LINE(1138)
					Dynamic k = _g11->__GetItem(_g1);		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(1138)
					++(_g1);
					HX_STACK_LINE(1139)
					this->o->writeByte(k->__Field(HX_CSTRING("charCode1"),true));
					HX_STACK_LINE(1140)
					this->o->writeByte(k->__Field(HX_CSTRING("charCode2"),true));
					HX_STACK_LINE(1141)
					this->o->writeInt16(k->__Field(HX_CSTRING("adjust"),true));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeFont2,(void))

Void Writer_obj::writeFont( int id,::format::swf::FontData data){
{
		HX_STACK_FRAME("format.swf.Writer","writeFont",0x57e9ca36,"format.swf.Writer.writeFont","format/swf/Writer.hx",1148,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(1149)
		::haxe::io::BytesOutput old = this->openTMP();		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(1151)
		this->o->writeUInt16(id);
		HX_STACK_LINE(1153)
		switch( (int)(data->__Index())){
			case (int)0: {
				HX_STACK_LINE(1153)
				Dynamic data1 = (::format::swf::FontData(data))->__Param(0);		HX_STACK_VAR(data1,"data1");
				HX_STACK_LINE(1155)
				this->writeFont1(data1);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(1153)
				Dynamic data1 = (::format::swf::FontData(data))->__Param(1);		HX_STACK_VAR(data1,"data1");
				HX_STACK_LINE(1153)
				bool hasWideChars = (::format::swf::FontData(data))->__Param(0);		HX_STACK_VAR(hasWideChars,"hasWideChars");
				HX_STACK_LINE(1158)
				this->writeFont2(hasWideChars,data1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1153)
				Dynamic data1 = (::format::swf::FontData(data))->__Param(0);		HX_STACK_VAR(data1,"data1");
				HX_STACK_LINE(1161)
				this->writeFont2(true,data1);
			}
			;break;
		}
		HX_STACK_LINE(1164)
		{
			HX_STACK_LINE(1164)
			::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1164)
			if (((_this->nbits > (int)0))){
				HX_STACK_LINE(1164)
				_this->writeBits(((int)8 - _this->nbits),(int)0);
				HX_STACK_LINE(1164)
				_this->nbits = (int)0;
			}
		}
		HX_STACK_LINE(1165)
		::haxe::io::Bytes font_data = this->closeTMP(old);		HX_STACK_VAR(font_data,"font_data");
		HX_STACK_LINE(1167)
		switch( (int)(data->__Index())){
			case (int)0: {
				HX_STACK_LINE(1169)
				this->writeTID((int)10,font_data->length);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(1172)
				this->writeTID((int)48,font_data->length);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1175)
				this->writeTID((int)75,font_data->length);
			}
			;break;
		}
		HX_STACK_LINE(1178)
		this->o->write(font_data);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeFont,(void))

Void Writer_obj::writeFontInfo( int id,::format::swf::FontInfoData data){
{
		HX_STACK_FRAME("format.swf.Writer","writeFontInfo",0x39ce81c4,"format.swf.Writer.writeFontInfo","format/swf/Writer.hx",1182,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(1182)
		switch( (int)(data->__Index())){
			case (int)0: {
				HX_STACK_LINE(1182)
				Dynamic data1 = (::format::swf::FontInfoData(data))->__Param(3);		HX_STACK_VAR(data1,"data1");
				HX_STACK_LINE(1182)
				bool hasWideCodes = (::format::swf::FontInfoData(data))->__Param(2);		HX_STACK_VAR(hasWideCodes,"hasWideCodes");
				HX_STACK_LINE(1182)
				bool isANSI = (::format::swf::FontInfoData(data))->__Param(1);		HX_STACK_VAR(isANSI,"isANSI");
				HX_STACK_LINE(1182)
				bool shiftJIS = (::format::swf::FontInfoData(data))->__Param(0);		HX_STACK_VAR(shiftJIS,"shiftJIS");
				HX_STACK_LINE(1183)
				{
					HX_STACK_LINE(1184)
					int data_length;		HX_STACK_VAR(data_length,"data_length");
					HX_STACK_LINE(1184)
					if ((hasWideCodes)){
						HX_STACK_LINE(1185)
						data_length = (((int)4 + data1->__Field(HX_CSTRING("name"),true)->__Field(HX_CSTRING("length"),true)) + (data1->__Field(HX_CSTRING("codeTable"),true)->__Field(HX_CSTRING("length"),true) * (int)2));
					}
					else{
						HX_STACK_LINE(1187)
						data_length = (((int)4 + data1->__Field(HX_CSTRING("name"),true)->__Field(HX_CSTRING("length"),true)) + data1->__Field(HX_CSTRING("codeTable"),true)->__Field(HX_CSTRING("length"),true));
					}
					HX_STACK_LINE(1189)
					this->writeTID((int)13,data_length);
					HX_STACK_LINE(1190)
					this->o->writeUInt16(id);
					HX_STACK_LINE(1191)
					this->o->writeByte(data1->__Field(HX_CSTRING("name"),true)->__Field(HX_CSTRING("length"),true));
					HX_STACK_LINE(1192)
					this->o->writeString(data1->__Field(HX_CSTRING("name"),true));
					HX_STACK_LINE(1193)
					this->bits->writeBits((int)2,(int)0);
					HX_STACK_LINE(1194)
					this->bits->writeBit(data1->__Field(HX_CSTRING("isSmall"),true));
					HX_STACK_LINE(1195)
					this->bits->writeBit(shiftJIS);
					HX_STACK_LINE(1196)
					this->bits->writeBit(isANSI);
					HX_STACK_LINE(1197)
					this->bits->writeBit(data1->__Field(HX_CSTRING("isItalic"),true));
					HX_STACK_LINE(1198)
					this->bits->writeBit(data1->__Field(HX_CSTRING("isBold"),true));
					HX_STACK_LINE(1199)
					this->bits->writeBit(hasWideCodes);
					HX_STACK_LINE(1201)
					if ((hasWideCodes)){
						HX_STACK_LINE(1202)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1202)
						Array< int > _g1 = data1->__Field(HX_CSTRING("codeTable"),true);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1202)
						while((true)){
							HX_STACK_LINE(1202)
							if ((!(((_g < _g1->length))))){
								HX_STACK_LINE(1202)
								break;
							}
							HX_STACK_LINE(1202)
							int code = _g1->__get(_g);		HX_STACK_VAR(code,"code");
							HX_STACK_LINE(1202)
							++(_g);
							HX_STACK_LINE(1203)
							this->o->writeUInt16(code);
						}
					}
					else{
						HX_STACK_LINE(1206)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1206)
						Array< int > _g1 = data1->__Field(HX_CSTRING("codeTable"),true);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1206)
						while((true)){
							HX_STACK_LINE(1206)
							if ((!(((_g < _g1->length))))){
								HX_STACK_LINE(1206)
								break;
							}
							HX_STACK_LINE(1206)
							int code = _g1->__get(_g);		HX_STACK_VAR(code,"code");
							HX_STACK_LINE(1206)
							++(_g);
							HX_STACK_LINE(1207)
							this->o->writeByte(code);
						}
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(1182)
				Dynamic data1 = (::format::swf::FontInfoData(data))->__Param(1);		HX_STACK_VAR(data1,"data1");
				HX_STACK_LINE(1182)
				::format::swf::LangCode language = (::format::swf::FontInfoData(data))->__Param(0);		HX_STACK_VAR(language,"language");
				HX_STACK_LINE(1210)
				{
					HX_STACK_LINE(1211)
					this->writeTID((int)13,(((int)5 + data1->__Field(HX_CSTRING("name"),true)->__Field(HX_CSTRING("length"),true)) + (data1->__Field(HX_CSTRING("codeTable"),true)->__Field(HX_CSTRING("length"),true) * (int)2)));
					HX_STACK_LINE(1212)
					this->o->writeUInt16(id);
					HX_STACK_LINE(1213)
					this->o->writeByte(data1->__Field(HX_CSTRING("name"),true)->__Field(HX_CSTRING("length"),true));
					HX_STACK_LINE(1214)
					this->o->writeString(data1->__Field(HX_CSTRING("name"),true));
					HX_STACK_LINE(1215)
					this->bits->writeBits((int)2,(int)0);
					HX_STACK_LINE(1216)
					this->bits->writeBit(data1->__Field(HX_CSTRING("isSmall"),true));
					HX_STACK_LINE(1217)
					this->bits->writeBit(false);
					HX_STACK_LINE(1218)
					this->bits->writeBit(false);
					HX_STACK_LINE(1219)
					this->bits->writeBit(data1->__Field(HX_CSTRING("isItalic"),true));
					HX_STACK_LINE(1220)
					this->bits->writeBit(data1->__Field(HX_CSTRING("isBold"),true));
					HX_STACK_LINE(1221)
					this->bits->writeBit(true);
					HX_STACK_LINE(1223)
					int _g;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1223)
					switch( (int)(language->__Index())){
						case (int)0: {
							HX_STACK_LINE(1224)
							_g = (int)0;
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(1225)
							_g = (int)1;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(1226)
							_g = (int)2;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(1227)
							_g = (int)3;
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(1228)
							_g = (int)4;
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(1229)
							_g = (int)5;
						}
						;break;
					}
					HX_STACK_LINE(1223)
					this->o->writeByte(_g);
					HX_STACK_LINE(1232)
					{
						HX_STACK_LINE(1232)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1232)
						Array< int > _g11 = data1->__Field(HX_CSTRING("codeTable"),true);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(1232)
						while((true)){
							HX_STACK_LINE(1232)
							if ((!(((_g1 < _g11->length))))){
								HX_STACK_LINE(1232)
								break;
							}
							HX_STACK_LINE(1232)
							int code = _g11->__get(_g1);		HX_STACK_VAR(code,"code");
							HX_STACK_LINE(1232)
							++(_g1);
							HX_STACK_LINE(1233)
							this->o->writeUInt16(code);
						}
					}
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Writer_obj,writeFontInfo,(void))

Void Writer_obj::writeTag( ::format::swf::SWFTag t){
{
		HX_STACK_FRAME("format.swf.Writer","writeTag",0x2f80b7d3,"format.swf.Writer.writeTag","format/swf/Writer.hx",1238,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(1238)
		switch( (int)(t->__Index())){
			case (int)24: {
				HX_STACK_LINE(1238)
				::haxe::io::Bytes data = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(1238)
				int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1239)
				{
					HX_STACK_LINE(1240)
					this->writeTID(id,data->length);
					HX_STACK_LINE(1241)
					this->o->write(data);
				}
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(1244)
				this->writeTID((int)1,(int)0);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(1238)
				::format::swf::ShapeData sdata = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(sdata,"sdata");
				HX_STACK_LINE(1238)
				int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1247)
				this->writeShape(id,sdata);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1238)
				::format::swf::MorphShapeData data = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(1238)
				int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1250)
				this->writeMorphShape(id,data);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(1238)
				::format::swf::FontData data = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(1238)
				int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1253)
				this->writeFont(id,data);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(1238)
				::format::swf::FontInfoData data = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(1238)
				int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1256)
				this->writeFontInfo(id,data);
			}
			;break;
			case (int)22: {
				HX_STACK_LINE(1238)
				::haxe::io::Bytes data = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(1238)
				int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1258)
				{
					HX_STACK_LINE(1259)
					this->writeTID((int)87,(data->length + (int)6));
					HX_STACK_LINE(1260)
					this->o->writeUInt16(id);
					HX_STACK_LINE(1261)
					this->o->writeInt32((int)0);
					HX_STACK_LINE(1262)
					this->o->write(data);
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(1238)
				int color = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(1264)
				{
					HX_STACK_LINE(1265)
					this->writeTID((int)9,(int)3);
					HX_STACK_LINE(1266)
					this->o->set_bigEndian(true);
					HX_STACK_LINE(1267)
					this->o->writeUInt24(color);
					HX_STACK_LINE(1268)
					this->o->set_bigEndian(false);
				}
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(1238)
				::format::swf::PlaceObject po = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(po,"po");
				HX_STACK_LINE(1270)
				{
					HX_STACK_LINE(1271)
					::haxe::io::BytesOutput t1 = this->openTMP();		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(1272)
					this->writePlaceObject(po,false);
					HX_STACK_LINE(1273)
					::haxe::io::Bytes bytes = this->closeTMP(t1);		HX_STACK_VAR(bytes,"bytes");
					HX_STACK_LINE(1274)
					this->writeTID((int)26,bytes->length);
					HX_STACK_LINE(1275)
					this->o->write(bytes);
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(1238)
				::format::swf::PlaceObject po = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(po,"po");
				HX_STACK_LINE(1277)
				{
					HX_STACK_LINE(1278)
					::haxe::io::BytesOutput t1 = this->openTMP();		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(1279)
					this->writePlaceObject(po,true);
					HX_STACK_LINE(1280)
					::haxe::io::Bytes bytes = this->closeTMP(t1);		HX_STACK_VAR(bytes,"bytes");
					HX_STACK_LINE(1281)
					this->writeTID((int)70,bytes->length);
					HX_STACK_LINE(1282)
					this->o->write(bytes);
				}
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(1238)
				int depth = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(depth,"depth");
				HX_STACK_LINE(1284)
				{
					HX_STACK_LINE(1285)
					this->writeTID((int)28,(int)2);
					HX_STACK_LINE(1286)
					this->o->writeUInt16(depth);
				}
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(1238)
				bool anchor = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(anchor,"anchor");
				HX_STACK_LINE(1238)
				::String label = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(1288)
				{
					HX_STACK_LINE(1289)
					::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(label);		HX_STACK_VAR(bytes,"bytes");
					HX_STACK_LINE(1290)
					this->writeTID((int)43,((bytes->length + (int)1) + ((  ((anchor)) ? int((int)1) : int((int)0) ))));
					HX_STACK_LINE(1291)
					this->o->write(bytes);
					HX_STACK_LINE(1292)
					this->o->writeByte((int)0);
					HX_STACK_LINE(1293)
					if ((anchor)){
						HX_STACK_LINE(1293)
						this->o->writeByte((int)1);
					}
				}
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(1238)
				Dynamic exports = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(exports,"exports");
				HX_STACK_LINE(1295)
				{
					HX_STACK_LINE(1296)
					int size = (int)2;		HX_STACK_VAR(size,"size");
					HX_STACK_LINE(1297)
					Array< ::Dynamic > bytes = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(bytes,"bytes");
					HX_STACK_LINE(1298)
					{
						HX_STACK_LINE(1298)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1298)
						while((true)){
							HX_STACK_LINE(1298)
							if ((!(((_g < exports->__Field(HX_CSTRING("length"),true)))))){
								HX_STACK_LINE(1298)
								break;
							}
							HX_STACK_LINE(1298)
							Dynamic e = exports->__GetItem(_g);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(1298)
							++(_g);
							HX_STACK_LINE(1299)
							::haxe::io::Bytes b = ::haxe::io::Bytes_obj::ofString(e->__Field(HX_CSTRING("name"),true));		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(1300)
							bytes->push(b);
							HX_STACK_LINE(1301)
							hx::AddEq(size,(((int)2 + b->length) + (int)1));
						}
					}
					HX_STACK_LINE(1303)
					this->writeTID((int)56,size);
					HX_STACK_LINE(1304)
					this->o->writeUInt16(exports->__Field(HX_CSTRING("length"),true));
					HX_STACK_LINE(1305)
					int pos = (int)0;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(1306)
					{
						HX_STACK_LINE(1306)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1306)
						while((true)){
							HX_STACK_LINE(1306)
							if ((!(((_g < exports->__Field(HX_CSTRING("length"),true)))))){
								HX_STACK_LINE(1306)
								break;
							}
							HX_STACK_LINE(1306)
							Dynamic e = exports->__GetItem(_g);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(1306)
							++(_g);
							HX_STACK_LINE(1307)
							this->o->writeUInt16(e->__Field(HX_CSTRING("cid"),true));
							HX_STACK_LINE(1308)
							int _g1 = (pos)++;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1308)
							::haxe::io::Bytes _g11 = bytes->__get(_g1).StaticCast< ::haxe::io::Bytes >();		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(1308)
							this->o->write(_g11);
							HX_STACK_LINE(1309)
							this->o->writeByte((int)0);
						}
					}
				}
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(1238)
				Array< ::Dynamic > tags = (::format::swf::SWFTag(t))->__Param(2);		HX_STACK_VAR(tags,"tags");
				HX_STACK_LINE(1238)
				int frames = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(frames,"frames");
				HX_STACK_LINE(1238)
				int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1312)
				{
					HX_STACK_LINE(1313)
					::haxe::io::BytesOutput t1 = this->openTMP();		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(1314)
					{
						HX_STACK_LINE(1314)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1314)
						while((true)){
							HX_STACK_LINE(1314)
							if ((!(((_g < tags->length))))){
								HX_STACK_LINE(1314)
								break;
							}
							HX_STACK_LINE(1314)
							::format::swf::SWFTag t2 = tags->__get(_g).StaticCast< ::format::swf::SWFTag >();		HX_STACK_VAR(t2,"t2");
							HX_STACK_LINE(1314)
							++(_g);
							HX_STACK_LINE(1315)
							this->writeTag(t2);
						}
					}
					HX_STACK_LINE(1316)
					::haxe::io::Bytes bytes = this->closeTMP(t1);		HX_STACK_VAR(bytes,"bytes");
					HX_STACK_LINE(1317)
					this->writeTID((int)39,(bytes->length + (int)6));
					HX_STACK_LINE(1318)
					this->o->writeUInt16(id);
					HX_STACK_LINE(1319)
					this->o->writeUInt16(frames);
					HX_STACK_LINE(1320)
					this->o->write(bytes);
					HX_STACK_LINE(1321)
					this->o->writeUInt16((int)0);
				}
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(1238)
				::haxe::io::Bytes data = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(1323)
				{
					HX_STACK_LINE(1324)
					this->writeTID((int)12,data->length);
					HX_STACK_LINE(1325)
					this->o->write(data);
				}
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(1238)
				::haxe::io::Bytes data = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(1238)
				int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1327)
				{
					HX_STACK_LINE(1328)
					this->writeTID((int)59,(data->length + (int)2));
					HX_STACK_LINE(1329)
					this->o->writeUInt16(id);
					HX_STACK_LINE(1330)
					this->o->write(data);
				}
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(1238)
				Dynamic ctx = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(ctx,"ctx");
				HX_STACK_LINE(1238)
				::haxe::io::Bytes data = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(1332)
				{
					HX_STACK_LINE(1333)
					if (((ctx == null()))){
						HX_STACK_LINE(1334)
						this->writeTID((int)72,data->length);
					}
					else{
						HX_STACK_LINE(1336)
						int len = (((data->length + (int)4) + ctx->__Field(HX_CSTRING("label"),true)->__Field(HX_CSTRING("length"),true)) + (int)1);		HX_STACK_VAR(len,"len");
						HX_STACK_LINE(1337)
						this->writeTID((int)82,len);
						HX_STACK_LINE(1338)
						this->o->writeInt32(ctx->__Field(HX_CSTRING("id"),true));
						HX_STACK_LINE(1339)
						this->o->writeString(ctx->__Field(HX_CSTRING("label"),true));
						HX_STACK_LINE(1340)
						this->o->writeByte((int)0);
					}
					HX_STACK_LINE(1342)
					this->o->write(data);
				}
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(1238)
				Dynamic sl = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(sl,"sl");
				HX_STACK_LINE(1345)
				this->writeSymbols(sl,(int)76);
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(1238)
				Dynamic sl = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(sl,"sl");
				HX_STACK_LINE(1347)
				this->writeSymbols(sl,(int)56);
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(1238)
				bool useNetwork = (::format::swf::SWFTag(t))->__Param(4);		HX_STACK_VAR(useNetwork,"useNetwork");
				HX_STACK_LINE(1238)
				bool useAs3 = (::format::swf::SWFTag(t))->__Param(3);		HX_STACK_VAR(useAs3,"useAs3");
				HX_STACK_LINE(1238)
				bool hasMeta = (::format::swf::SWFTag(t))->__Param(2);		HX_STACK_VAR(hasMeta,"hasMeta");
				HX_STACK_LINE(1238)
				bool useGpu = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(useGpu,"useGpu");
				HX_STACK_LINE(1238)
				bool useDirectBlit = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(useDirectBlit,"useDirectBlit");
				HX_STACK_LINE(1349)
				{
					HX_STACK_LINE(1350)
					this->writeTID((int)69,(int)4);
					HX_STACK_LINE(1351)
					this->bits->writeBit(false);
					HX_STACK_LINE(1352)
					this->bits->writeBit(useDirectBlit);
					HX_STACK_LINE(1353)
					this->bits->writeBit(useGpu);
					HX_STACK_LINE(1354)
					this->bits->writeBit(hasMeta);
					HX_STACK_LINE(1355)
					this->bits->writeBit(useAs3);
					HX_STACK_LINE(1356)
					this->bits->writeBits((int)2,(int)0);
					HX_STACK_LINE(1357)
					this->bits->writeBit(useNetwork);
					HX_STACK_LINE(1358)
					this->bits->writeBits((int)24,(int)0);
					HX_STACK_LINE(1359)
					{
						HX_STACK_LINE(1359)
						::format::tools::BitsOutput _this = this->bits;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1359)
						if (((_this->nbits > (int)0))){
							HX_STACK_LINE(1359)
							_this->writeBits(((int)8 - _this->nbits),(int)0);
							HX_STACK_LINE(1359)
							_this->nbits = (int)0;
						}
					}
				}
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(1238)
				Dynamic l = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(1361)
				{
					HX_STACK_LINE(1362)
					Dynamic cbits;		HX_STACK_VAR(cbits,"cbits");
					HX_STACK_LINE(1362)
					{
						HX_STACK_LINE(1362)
						::format::swf::ColorModel _g = l->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1362)
						switch( (int)(_g->__Index())){
							case (int)0: {
								HX_STACK_LINE(1362)
								int n = (::format::swf::ColorModel(_g))->__Param(0);		HX_STACK_VAR(n,"n");
								HX_STACK_LINE(1362)
								cbits = n;
							}
							;break;
							default: {
								HX_STACK_LINE(1362)
								cbits = null();
							}
						}
					}
					HX_STACK_LINE(1363)
					this->writeTIDExt((int)20,(l->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("length"),true) + ((  (((cbits != null()))) ? int((int)8) : int((int)7) ))));
					HX_STACK_LINE(1364)
					this->o->writeUInt16(l->__Field(HX_CSTRING("cid"),true));
					HX_STACK_LINE(1365)
					{
						HX_STACK_LINE(1365)
						::format::swf::ColorModel _g = l->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1365)
						switch( (int)(_g->__Index())){
							case (int)0: {
								HX_STACK_LINE(1366)
								this->o->writeByte((int)3);
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(1367)
								this->o->writeByte((int)4);
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(1368)
								this->o->writeByte((int)5);
							}
							;break;
							default: {
								HX_STACK_LINE(1369)
								HX_STACK_DO_THROW(HX_CSTRING("assert"));
							}
						}
					}
					HX_STACK_LINE(1371)
					this->o->writeUInt16(l->__Field(HX_CSTRING("width"),true));
					HX_STACK_LINE(1372)
					this->o->writeUInt16(l->__Field(HX_CSTRING("height"),true));
					HX_STACK_LINE(1373)
					if (((cbits != null()))){
						HX_STACK_LINE(1373)
						this->o->writeByte(cbits);
					}
					HX_STACK_LINE(1374)
					this->o->write(l->__Field(HX_CSTRING("data"),true));
				}
			}
			;break;
			case (int)19: {
				HX_STACK_LINE(1238)
				Dynamic l = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(1376)
				{
					HX_STACK_LINE(1377)
					Dynamic cbits;		HX_STACK_VAR(cbits,"cbits");
					HX_STACK_LINE(1377)
					{
						HX_STACK_LINE(1377)
						::format::swf::ColorModel _g = l->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1377)
						switch( (int)(_g->__Index())){
							case (int)0: {
								HX_STACK_LINE(1377)
								int n = (::format::swf::ColorModel(_g))->__Param(0);		HX_STACK_VAR(n,"n");
								HX_STACK_LINE(1377)
								cbits = n;
							}
							;break;
							default: {
								HX_STACK_LINE(1377)
								cbits = null();
							}
						}
					}
					HX_STACK_LINE(1378)
					this->writeTIDExt((int)36,(l->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("length"),true) + ((  (((cbits == null()))) ? int((int)7) : int((int)8) ))));
					HX_STACK_LINE(1379)
					this->o->writeUInt16(l->__Field(HX_CSTRING("cid"),true));
					HX_STACK_LINE(1380)
					{
						HX_STACK_LINE(1380)
						::format::swf::ColorModel _g = l->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1380)
						switch( (int)(_g->__Index())){
							case (int)0: {
								HX_STACK_LINE(1381)
								this->o->writeByte((int)3);
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(1382)
								this->o->writeByte((int)5);
							}
							;break;
							default: {
								HX_STACK_LINE(1383)
								HX_STACK_DO_THROW(HX_CSTRING("assert"));
							}
						}
					}
					HX_STACK_LINE(1385)
					this->o->writeUInt16(l->__Field(HX_CSTRING("width"),true));
					HX_STACK_LINE(1386)
					this->o->writeUInt16(l->__Field(HX_CSTRING("height"),true));
					HX_STACK_LINE(1387)
					if (((cbits != null()))){
						HX_STACK_LINE(1387)
						this->o->writeByte(cbits);
					}
					HX_STACK_LINE(1388)
					this->o->write(l->__Field(HX_CSTRING("data"),true));
				}
			}
			;break;
			case (int)21: {
				HX_STACK_LINE(1238)
				::haxe::io::Bytes data = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(1390)
				{
					HX_STACK_LINE(1391)
					this->writeTIDExt((int)8,data->length);
					HX_STACK_LINE(1392)
					this->o->write(data);
				}
			}
			;break;
			case (int)20: {
				HX_STACK_LINE(1238)
				::format::swf::JPEGData jdata = (::format::swf::SWFTag(t))->__Param(1);		HX_STACK_VAR(jdata,"jdata");
				HX_STACK_LINE(1238)
				int id = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1395)
				switch( (int)(jdata->__Index())){
					case (int)0: {
						HX_STACK_LINE(1395)
						::haxe::io::Bytes data = (::format::swf::JPEGData(jdata))->__Param(0);		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(1396)
						{
							HX_STACK_LINE(1397)
							this->writeTIDExt((int)6,(data->length + (int)2));
							HX_STACK_LINE(1398)
							this->o->writeUInt16(id);
							HX_STACK_LINE(1399)
							this->o->write(data);
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(1395)
						::haxe::io::Bytes data = (::format::swf::JPEGData(jdata))->__Param(0);		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(1400)
						{
							HX_STACK_LINE(1401)
							this->writeTIDExt((int)21,(data->length + (int)2));
							HX_STACK_LINE(1402)
							this->o->writeUInt16(id);
							HX_STACK_LINE(1403)
							this->o->write(data);
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(1395)
						::haxe::io::Bytes mask = (::format::swf::JPEGData(jdata))->__Param(1);		HX_STACK_VAR(mask,"mask");
						HX_STACK_LINE(1395)
						::haxe::io::Bytes data = (::format::swf::JPEGData(jdata))->__Param(0);		HX_STACK_VAR(data,"data");
						HX_STACK_LINE(1404)
						{
							HX_STACK_LINE(1405)
							this->writeTIDExt((int)35,((data->length + mask->length) + (int)6));
							HX_STACK_LINE(1406)
							this->o->writeUInt16(id);
							HX_STACK_LINE(1407)
							this->o->writeInt32(data->length);
							HX_STACK_LINE(1408)
							this->o->write(data);
							HX_STACK_LINE(1409)
							this->o->write(mask);
						}
					}
					;break;
				}
			}
			;break;
			case (int)23: {
				HX_STACK_LINE(1238)
				Dynamic data = (::format::swf::SWFTag(t))->__Param(0);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(1413)
				this->writeSound(data);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Writer_obj,writeTag,(void))

Void Writer_obj::writeEnd( ){
{
		HX_STACK_FRAME("format.swf.Writer","writeEnd",0x2f756154,"format.swf.Writer.writeEnd","format/swf/Writer.hx",1419,0x3f16c166)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1420)
		this->o->writeUInt16((int)0);
		HX_STACK_LINE(1421)
		::haxe::io::Bytes bytes = this->o->getBytes();		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(1422)
		int size = bytes->length;		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(1423)
		if ((this->compressed)){
			HX_STACK_LINE(1423)
			::haxe::io::Bytes _g = ::format::tools::Deflate_obj::run(bytes);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1423)
			bytes = _g;
		}
		HX_STACK_LINE(1425)
		this->output->writeInt32((size + (int)8));
		HX_STACK_LINE(1429)
		this->output->write(bytes);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Writer_obj,writeEnd,(void))


Writer_obj::Writer_obj()
{
}

void Writer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Writer);
	HX_MARK_MEMBER_NAME(output,"output");
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_MEMBER_NAME(compressed,"compressed");
	HX_MARK_MEMBER_NAME(bits,"bits");
	HX_MARK_END_CLASS();
}

void Writer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(output,"output");
	HX_VISIT_MEMBER_NAME(o,"o");
	HX_VISIT_MEMBER_NAME(compressed,"compressed");
	HX_VISIT_MEMBER_NAME(bits,"bits");
}

Dynamic Writer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { return o; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { return bits; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return write_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { return output; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"openTMP") ) { return openTMP_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"closeTMP") ) { return closeTMP_dyn(); }
		if (HX_FIELD_EQ(inName,"writeRGB") ) { return writeRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"writeCXA") ) { return writeCXA_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"writeTID") ) { return writeTID_dyn(); }
		if (HX_FIELD_EQ(inName,"writeTag") ) { return writeTag_dyn(); }
		if (HX_FIELD_EQ(inName,"writeEnd") ) { return writeEnd_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeRect") ) { return writeRect_dyn(); }
		if (HX_FIELD_EQ(inName,"writeRGBA") ) { return writeRGBA_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFont") ) { return writeFont_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"compressed") ) { return compressed; }
		if (HX_FIELD_EQ(inName,"writeFixed") ) { return writeFixed_dyn(); }
		if (HX_FIELD_EQ(inName,"writeSound") ) { return writeSound_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShape") ) { return writeShape_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFont1") ) { return writeFont1_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFont2") ) { return writeFont2_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeFixed8") ) { return writeFixed8_dyn(); }
		if (HX_FIELD_EQ(inName,"writeHeader") ) { return writeHeader_dyn(); }
		if (HX_FIELD_EQ(inName,"writeMatrix") ) { return writeMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFilter") ) { return writeFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"writeTIDExt") ) { return writeTIDExt_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"writeFilters") ) { return writeFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"writeSymbols") ) { return writeSymbols_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeCXAColor") ) { return writeCXAColor_dyn(); }
		if (HX_FIELD_EQ(inName,"writeGradient") ) { return writeGradient_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFontInfo") ) { return writeFontInfo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"writeBlendMode") ) { return writeBlendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFillStyle") ) { return writeFillStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"writeLineStyle") ) { return writeLineStyle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"writeMatrixPart") ) { return writeMatrixPart_dyn(); }
		if (HX_FIELD_EQ(inName,"writeClipEvents") ) { return writeClipEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"writeGradRecord") ) { return writeGradRecord_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFillStyles") ) { return writeFillStyles_dyn(); }
		if (HX_FIELD_EQ(inName,"writeLineStyles") ) { return writeLineStyles_dyn(); }
		if (HX_FIELD_EQ(inName,"writeMorphShape") ) { return writeMorphShape_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFontGlyphs") ) { return writeFontGlyphs_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"writeFilterFlags") ) { return writeFilterFlags_dyn(); }
		if (HX_FIELD_EQ(inName,"writePlaceObject") ) { return writePlaceObject_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShapeRecord") ) { return writeShapeRecord_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writeFocalGradient") ) { return writeFocalGradient_dyn(); }
		if (HX_FIELD_EQ(inName,"writeMorphGradient") ) { return writeMorphGradient_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"writeFilterGradient") ) { return writeFilterGradient_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShapeWithStyle") ) { return writeShapeWithStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"writeMorphGradients") ) { return writeMorphGradients_dyn(); }
		if (HX_FIELD_EQ(inName,"writeMorphFillStyle") ) { return writeMorphFillStyle_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"writeMorphFillStyles") ) { return writeMorphFillStyles_dyn(); }
		if (HX_FIELD_EQ(inName,"writeMorph1LineStyle") ) { return writeMorph1LineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"writeMorph2LineStyle") ) { return writeMorph2LineStyle_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"writeMorph1LineStyles") ) { return writeMorph1LineStyles_dyn(); }
		if (HX_FIELD_EQ(inName,"writeMorph2LineStyles") ) { return writeMorph2LineStyles_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"writeShapeWithoutStyle") ) { return writeShapeWithoutStyle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Writer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< ::haxe::io::BytesOutput >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { bits=inValue.Cast< ::format::tools::BitsOutput >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { output=inValue.Cast< ::haxe::io::Output >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"compressed") ) { compressed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Writer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("output"));
	outFields->push(HX_CSTRING("o"));
	outFields->push(HX_CSTRING("compressed"));
	outFields->push(HX_CSTRING("bits"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Output*/ ,(int)offsetof(Writer_obj,output),HX_CSTRING("output")},
	{hx::fsObject /*::haxe::io::BytesOutput*/ ,(int)offsetof(Writer_obj,o),HX_CSTRING("o")},
	{hx::fsBool,(int)offsetof(Writer_obj,compressed),HX_CSTRING("compressed")},
	{hx::fsObject /*::format::tools::BitsOutput*/ ,(int)offsetof(Writer_obj,bits),HX_CSTRING("bits")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("output"),
	HX_CSTRING("o"),
	HX_CSTRING("compressed"),
	HX_CSTRING("bits"),
	HX_CSTRING("write"),
	HX_CSTRING("writeRect"),
	HX_CSTRING("writeFixed8"),
	HX_CSTRING("writeFixed"),
	HX_CSTRING("openTMP"),
	HX_CSTRING("closeTMP"),
	HX_CSTRING("writeHeader"),
	HX_CSTRING("writeRGB"),
	HX_CSTRING("writeRGBA"),
	HX_CSTRING("writeMatrixPart"),
	HX_CSTRING("writeMatrix"),
	HX_CSTRING("writeCXAColor"),
	HX_CSTRING("writeCXA"),
	HX_CSTRING("writeClipEvents"),
	HX_CSTRING("writeFilterFlags"),
	HX_CSTRING("writeFilterGradient"),
	HX_CSTRING("writeFilter"),
	HX_CSTRING("writeFilters"),
	HX_CSTRING("writeBlendMode"),
	HX_CSTRING("writePlaceObject"),
	HX_CSTRING("writeInt"),
	HX_CSTRING("writeTID"),
	HX_CSTRING("writeTIDExt"),
	HX_CSTRING("writeSymbols"),
	HX_CSTRING("writeSound"),
	HX_CSTRING("writeGradRecord"),
	HX_CSTRING("writeGradient"),
	HX_CSTRING("writeFocalGradient"),
	HX_CSTRING("writeFillStyle"),
	HX_CSTRING("writeFillStyles"),
	HX_CSTRING("writeLineStyle"),
	HX_CSTRING("writeLineStyles"),
	HX_CSTRING("writeShapeRecord"),
	HX_CSTRING("writeShapeWithoutStyle"),
	HX_CSTRING("writeShapeWithStyle"),
	HX_CSTRING("writeShape"),
	HX_CSTRING("writeMorphGradient"),
	HX_CSTRING("writeMorphGradients"),
	HX_CSTRING("writeMorphFillStyle"),
	HX_CSTRING("writeMorphFillStyles"),
	HX_CSTRING("writeMorph1LineStyle"),
	HX_CSTRING("writeMorph1LineStyles"),
	HX_CSTRING("writeMorph2LineStyle"),
	HX_CSTRING("writeMorph2LineStyles"),
	HX_CSTRING("writeMorphShape"),
	HX_CSTRING("writeFontGlyphs"),
	HX_CSTRING("writeFont1"),
	HX_CSTRING("writeFont2"),
	HX_CSTRING("writeFont"),
	HX_CSTRING("writeFontInfo"),
	HX_CSTRING("writeTag"),
	HX_CSTRING("writeEnd"),
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.Writer"), hx::TCanCast< Writer_obj> ,sStaticFields,sMemberFields,
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
} // end namespace swf
