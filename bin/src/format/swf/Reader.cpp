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
#ifndef INCLUDED_format_swf_Reader
#include <format/swf/Reader.h>
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
#ifndef INCLUDED_format_swf_Tools
#include <format/swf/Tools.h>
#endif
#ifndef INCLUDED_format_tools_BitsInput
#include <format/tools/BitsInput.h>
#endif
#ifndef INCLUDED_format_tools_Inflate
#include <format/tools/Inflate.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace format{
namespace swf{

Void Reader_obj::__construct(::haxe::io::Input i)
{
HX_STACK_FRAME("format.swf.Reader","new",0x045b40d8,"format.swf.Reader.new","format/swf/Reader.hx",43,0x866e6cd6)
HX_STACK_THIS(this)
HX_STACK_ARG(i,"i")
{
	HX_STACK_LINE(43)
	this->i = i;
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

int Reader_obj::readFixed8( ::haxe::io::Input i){
	HX_STACK_FRAME("format.swf.Reader","readFixed8",0x03003ec2,"format.swf.Reader.readFixed8","format/swf/Reader.hx",46,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(47)
	if (((i == null()))){
		HX_STACK_LINE(47)
		i = this->i;
	}
	HX_STACK_LINE(48)
	return i->readUInt16();
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readFixed8,return )

int Reader_obj::readFixed( ){
	HX_STACK_FRAME("format.swf.Reader","readFixed",0xf6d460b6,"format.swf.Reader.readFixed","format/swf/Reader.hx",52,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	return this->i->readInt32();
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readFixed,return )

::haxe::io::Bytes Reader_obj::readUTF8Bytes( ){
	HX_STACK_FRAME("format.swf.Reader","readUTF8Bytes",0x7de6c5bc,"format.swf.Reader.readUTF8Bytes","format/swf/Reader.hx",55,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	::haxe::io::BytesBuffer b = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(57)
	while((true)){
		HX_STACK_LINE(58)
		int c = this->i->readByte();		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(59)
		if (((c == (int)0))){
			HX_STACK_LINE(59)
			break;
		}
		HX_STACK_LINE(60)
		b->b->push(c);
	}
	HX_STACK_LINE(62)
	return b->getBytes();
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readUTF8Bytes,return )

Dynamic Reader_obj::readRect( ){
	HX_STACK_FRAME("format.swf.Reader","readRect",0x69750422,"format.swf.Reader.readRect","format/swf/Reader.hx",65,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	this->bits->nbits = (int)0;
	HX_STACK_LINE(67)
	int nbits = this->bits->readBits((int)5);		HX_STACK_VAR(nbits,"nbits");
	HX_STACK_LINE(69)
	int _g = this->bits->readBits(nbits);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(69)
	int _g1 = ::format::swf::Tools_obj::signExtend(_g,nbits);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(70)
	int _g2 = this->bits->readBits(nbits);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(70)
	int _g3 = ::format::swf::Tools_obj::signExtend(_g2,nbits);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(71)
	int _g4 = this->bits->readBits(nbits);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(71)
	int _g5 = ::format::swf::Tools_obj::signExtend(_g4,nbits);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(72)
	int _g6 = this->bits->readBits(nbits);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(72)
	int _g7 = ::format::swf::Tools_obj::signExtend(_g6,nbits);		HX_STACK_VAR(_g7,"_g7");
	struct _Function_1_1{
		inline static Dynamic Block( int &_g7,int &_g1,int &_g5,int &_g3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",68,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("left") , _g1,false);
				__result->Add(HX_CSTRING("right") , _g3,false);
				__result->Add(HX_CSTRING("top") , _g5,false);
				__result->Add(HX_CSTRING("bottom") , _g7,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(68)
	return _Function_1_1::Block(_g7,_g1,_g5,_g3);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readRect,return )

Dynamic Reader_obj::readMatrixPart( ){
	HX_STACK_FRAME("format.swf.Reader","readMatrixPart",0xff980452,"format.swf.Reader.readMatrixPart","format/swf/Reader.hx",76,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	int nbits = this->bits->readBits((int)5);		HX_STACK_VAR(nbits,"nbits");
	HX_STACK_LINE(80)
	int _g = this->bits->readBits(nbits);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(81)
	int _g1 = this->bits->readBits(nbits);		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static Dynamic Block( int &_g1,int &_g,int &nbits){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",78,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("nbits") , nbits,false);
				__result->Add(HX_CSTRING("x") , _g,false);
				__result->Add(HX_CSTRING("y") , _g1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(78)
	return _Function_1_1::Block(_g1,_g,nbits);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readMatrixPart,return )

Dynamic Reader_obj::readMatrix( ){
	HX_STACK_FRAME("format.swf.Reader","readMatrix",0x31b028bf,"format.swf.Reader.readMatrix","format/swf/Reader.hx",85,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	this->bits->nbits = (int)0;
	HX_STACK_LINE(88)
	Dynamic scale = null();		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(89)
	if ((this->bits->readBit())){
		HX_STACK_LINE(91)
		int nbits = this->bits->readBits((int)5);		HX_STACK_VAR(nbits,"nbits");
		HX_STACK_LINE(92)
		Float _x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			int i = this->bits->readBits(nbits);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(92)
			int _g = ::format::swf::Tools_obj::signExtend(i,nbits);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(92)
			i = _g;
			HX_STACK_LINE(92)
			_x = (Float(i) / Float(65536.0));
		}
		HX_STACK_LINE(93)
		Float _y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			int i = this->bits->readBits(nbits);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(93)
			int _g1 = ::format::swf::Tools_obj::signExtend(i,nbits);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(93)
			i = _g1;
			HX_STACK_LINE(93)
			_y = (Float(i) / Float(65536.0));
		}
		struct _Function_2_1{
			inline static Dynamic Block( Float &_y,Float &_x){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",94,0x866e6cd6)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , _x,false);
					__result->Add(HX_CSTRING("y") , _y,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(94)
		scale = _Function_2_1::Block(_y,_x);
	}
	HX_STACK_LINE(100)
	Dynamic rotate = null();		HX_STACK_VAR(rotate,"rotate");
	HX_STACK_LINE(101)
	if ((this->bits->readBit())){
		HX_STACK_LINE(103)
		int nbits = this->bits->readBits((int)5);		HX_STACK_VAR(nbits,"nbits");
		HX_STACK_LINE(104)
		Float _rs0;		HX_STACK_VAR(_rs0,"_rs0");
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			int i = this->bits->readBits(nbits);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(104)
			int _g2 = ::format::swf::Tools_obj::signExtend(i,nbits);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(104)
			i = _g2;
			HX_STACK_LINE(104)
			_rs0 = (Float(i) / Float(65536.0));
		}
		HX_STACK_LINE(105)
		Float _rs1;		HX_STACK_VAR(_rs1,"_rs1");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int i = this->bits->readBits(nbits);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(105)
			int _g3 = ::format::swf::Tools_obj::signExtend(i,nbits);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(105)
			i = _g3;
			HX_STACK_LINE(105)
			_rs1 = (Float(i) / Float(65536.0));
		}
		struct _Function_2_1{
			inline static Dynamic Block( Float &_rs0,Float &_rs1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",106,0x866e6cd6)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("rs0") , _rs0,false);
					__result->Add(HX_CSTRING("rs1") , _rs1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(106)
		rotate = _Function_2_1::Block(_rs0,_rs1);
	}
	HX_STACK_LINE(113)
	int nbits = this->bits->readBits((int)5);		HX_STACK_VAR(nbits,"nbits");
	HX_STACK_LINE(115)
	int _g4 = this->bits->readBits(nbits);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(115)
	int _g5 = ::format::swf::Tools_obj::signExtend(_g4,nbits);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(116)
	int _g6 = this->bits->readBits(nbits);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(116)
	int _g7 = ::format::swf::Tools_obj::signExtend(_g6,nbits);		HX_STACK_VAR(_g7,"_g7");
	struct _Function_1_1{
		inline static Dynamic Block( int &_g7,int &_g5){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",114,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , _g5,false);
				__result->Add(HX_CSTRING("y") , _g7,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(114)
	Dynamic translate = _Function_1_1::Block(_g7,_g5);		HX_STACK_VAR(translate,"translate");
	struct _Function_1_2{
		inline static Dynamic Block( Dynamic &rotate,Dynamic &scale,Dynamic &translate){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",119,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("scale") , scale,false);
				__result->Add(HX_CSTRING("rotate") , rotate,false);
				__result->Add(HX_CSTRING("translate") , translate,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(119)
	return _Function_1_2::Block(rotate,scale,translate);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readMatrix,return )

Dynamic Reader_obj::readRGBA( ::haxe::io::Input i){
	HX_STACK_FRAME("format.swf.Reader","readRGBA",0x695e2392,"format.swf.Reader.readRGBA","format/swf/Reader.hx",126,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(127)
	if (((i == null()))){
		HX_STACK_LINE(127)
		i = this->i;
	}
	HX_STACK_LINE(129)
	int _g = i->readByte();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(130)
	int _g1 = i->readByte();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(131)
	int _g2 = i->readByte();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(132)
	int _g3 = i->readByte();		HX_STACK_VAR(_g3,"_g3");
	struct _Function_1_1{
		inline static Dynamic Block( int &_g1,int &_g,int &_g2,int &_g3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",128,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("r") , _g,false);
				__result->Add(HX_CSTRING("g") , _g1,false);
				__result->Add(HX_CSTRING("b") , _g2,false);
				__result->Add(HX_CSTRING("a") , _g3,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(128)
	return _Function_1_1::Block(_g1,_g,_g2,_g3);
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readRGBA,return )

Dynamic Reader_obj::readRGB( ::haxe::io::Input i){
	HX_STACK_FRAME("format.swf.Reader","readRGB",0x0f6571cf,"format.swf.Reader.readRGB","format/swf/Reader.hx",136,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(137)
	if (((i == null()))){
		HX_STACK_LINE(137)
		i = this->i;
	}
	HX_STACK_LINE(139)
	int _g = i->readByte();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(140)
	int _g1 = i->readByte();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(141)
	int _g2 = i->readByte();		HX_STACK_VAR(_g2,"_g2");
	struct _Function_1_1{
		inline static Dynamic Block( int &_g1,int &_g,int &_g2){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",138,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("r") , _g,false);
				__result->Add(HX_CSTRING("g") , _g1,false);
				__result->Add(HX_CSTRING("b") , _g2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(138)
	return _Function_1_1::Block(_g1,_g,_g2);
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readRGB,return )

Dynamic Reader_obj::readCXAColor( int nbits){
	HX_STACK_FRAME("format.swf.Reader","readCXAColor",0xfa4757b5,"format.swf.Reader.readCXAColor","format/swf/Reader.hx",145,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nbits,"nbits")
	HX_STACK_LINE(147)
	int _g = this->bits->readBits(nbits);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(148)
	int _g1 = this->bits->readBits(nbits);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(149)
	int _g2 = this->bits->readBits(nbits);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(150)
	int _g3 = this->bits->readBits(nbits);		HX_STACK_VAR(_g3,"_g3");
	struct _Function_1_1{
		inline static Dynamic Block( int &_g1,int &_g,int &_g2,int &_g3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",146,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("r") , _g,false);
				__result->Add(HX_CSTRING("g") , _g1,false);
				__result->Add(HX_CSTRING("b") , _g2,false);
				__result->Add(HX_CSTRING("a") , _g3,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(146)
	return _Function_1_1::Block(_g1,_g,_g2,_g3);
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readCXAColor,return )

Dynamic Reader_obj::readCXA( ){
	HX_STACK_FRAME("format.swf.Reader","readCXA",0x0f5a1ece,"format.swf.Reader.readCXA","format/swf/Reader.hx",154,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(155)
	this->bits->nbits = (int)0;
	HX_STACK_LINE(156)
	bool add = this->bits->readBit();		HX_STACK_VAR(add,"add");
	HX_STACK_LINE(157)
	bool mult = this->bits->readBit();		HX_STACK_VAR(mult,"mult");
	HX_STACK_LINE(158)
	int nbits = this->bits->readBits((int)4);		HX_STACK_VAR(nbits,"nbits");
	HX_STACK_LINE(161)
	Dynamic _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(161)
	if ((mult)){
		HX_STACK_LINE(161)
		_g = this->readCXAColor(nbits);
	}
	else{
		HX_STACK_LINE(161)
		_g = null();
	}
	HX_STACK_LINE(162)
	Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(162)
	if ((add)){
		HX_STACK_LINE(162)
		_g1 = this->readCXAColor(nbits);
	}
	else{
		HX_STACK_LINE(162)
		_g1 = null();
	}
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &_g1,Dynamic &_g,int &nbits){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",159,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("nbits") , nbits,false);
				__result->Add(HX_CSTRING("mult") , _g,false);
				__result->Add(HX_CSTRING("add") , _g1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(159)
	return _Function_1_1::Block(_g1,_g,nbits);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readCXA,return )

Dynamic Reader_obj::readGradient( int ver){
	HX_STACK_FRAME("format.swf.Reader","readGradient",0xdfe747ee,"format.swf.Reader.readGradient","format/swf/Reader.hx",166,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ver,"ver")
	HX_STACK_LINE(167)
	this->bits->nbits = (int)0;
	HX_STACK_LINE(168)
	::format::swf::SpreadMode spread;		HX_STACK_VAR(spread,"spread");
	HX_STACK_LINE(168)
	{
		HX_STACK_LINE(168)
		int _g = this->bits->readBits((int)2);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(168)
		switch( (int)(_g)){
			case (int)0: {
				HX_STACK_LINE(169)
				spread = ::format::swf::SpreadMode_obj::SMPad;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(170)
				spread = ::format::swf::SpreadMode_obj::SMReflect;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(171)
				spread = ::format::swf::SpreadMode_obj::SMRepeat;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(172)
				spread = ::format::swf::SpreadMode_obj::SMReserved;
			}
			;break;
			default: {
				HX_STACK_LINE(173)
				HX_STACK_DO_THROW(this->error());
			}
		}
	}
	HX_STACK_LINE(176)
	::format::swf::InterpolationMode interp;		HX_STACK_VAR(interp,"interp");
	HX_STACK_LINE(176)
	{
		HX_STACK_LINE(176)
		int _g = this->bits->readBits((int)2);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(176)
		switch( (int)(_g)){
			case (int)0: {
				HX_STACK_LINE(177)
				interp = ::format::swf::InterpolationMode_obj::IMNormalRGB;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(178)
				interp = ::format::swf::InterpolationMode_obj::IMLinearRGB;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(179)
				interp = ::format::swf::InterpolationMode_obj::IMReserved1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(180)
				interp = ::format::swf::InterpolationMode_obj::IMReserved2;
			}
			;break;
			default: {
				HX_STACK_LINE(181)
				HX_STACK_DO_THROW(this->error());
			}
		}
	}
	HX_STACK_LINE(184)
	int nGrad = this->bits->readBits((int)4);		HX_STACK_VAR(nGrad,"nGrad");
	HX_STACK_LINE(185)
	Array< ::Dynamic > arr = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(187)
	{
		HX_STACK_LINE(187)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(187)
		while((true)){
			HX_STACK_LINE(187)
			if ((!(((_g < nGrad))))){
				HX_STACK_LINE(187)
				break;
			}
			HX_STACK_LINE(187)
			int c = (_g)++;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(188)
			int pos = this->i->readByte();		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(189)
			if (((ver <= (int)2))){
				HX_STACK_LINE(190)
				Dynamic _g1 = this->readRGB(null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(190)
				::format::swf::GradRecord _g11 = ::format::swf::GradRecord_obj::GRRGB(pos,_g1);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(190)
				arr->push(_g11);
			}
			else{
				HX_STACK_LINE(192)
				Dynamic _g2 = this->readRGBA(null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(192)
				::format::swf::GradRecord _g3 = ::format::swf::GradRecord_obj::GRRGBA(pos,_g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(192)
				arr->push(_g3);
			}
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::format::swf::SpreadMode &spread,::format::swf::InterpolationMode &interp,Array< ::Dynamic > &arr){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",195,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("spread") , spread,false);
				__result->Add(HX_CSTRING("interpolate") , interp,false);
				__result->Add(HX_CSTRING("data") , arr,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(195)
	return _Function_1_1::Block(spread,interp,arr);
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readGradient,return )

::format::swf::LineCapStyle Reader_obj::getLineCap( int t){
	HX_STACK_FRAME("format.swf.Reader","getLineCap",0xeb5e1910,"format.swf.Reader.getLineCap","format/swf/Reader.hx",203,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(203)
	switch( (int)(t)){
		case (int)0: {
			HX_STACK_LINE(204)
			return ::format::swf::LineCapStyle_obj::LCRound;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(205)
			return ::format::swf::LineCapStyle_obj::LCNone;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(206)
			return ::format::swf::LineCapStyle_obj::LCSquare;
		}
		;break;
		default: {
			HX_STACK_LINE(207)
			HX_STACK_DO_THROW(this->error());
		}
	}
	HX_STACK_LINE(203)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,getLineCap,return )

Dynamic Reader_obj::readLineStyles( int ver){
	HX_STACK_FRAME("format.swf.Reader","readLineStyles",0x64c0eab4,"format.swf.Reader.readLineStyles","format/swf/Reader.hx",211,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ver,"ver")
	HX_STACK_LINE(213)
	int cnt = this->i->readByte();		HX_STACK_VAR(cnt,"cnt");
	HX_STACK_LINE(214)
	if (((cnt == (int)255))){
		HX_STACK_LINE(215)
		if (((ver == (int)1))){
			HX_STACK_LINE(216)
			HX_STACK_DO_THROW(this->error());
		}
		HX_STACK_LINE(217)
		int _g = this->i->readUInt16();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(217)
		cnt = _g;
	}
	HX_STACK_LINE(220)
	Dynamic arr = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(222)
	{
		HX_STACK_LINE(222)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(222)
		while((true)){
			HX_STACK_LINE(222)
			if ((!(((_g < cnt))))){
				HX_STACK_LINE(222)
				break;
			}
			HX_STACK_LINE(222)
			int c = (_g)++;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(223)
			int width = this->i->readUInt16();		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(227)
			::format::swf::LineStyleData _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(227)
			if (((ver <= (int)2))){
				HX_STACK_LINE(228)
				Dynamic _g1 = this->readRGB(this->i);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(228)
				_g9 = ::format::swf::LineStyleData_obj::LSRGB(_g1);
			}
			else{
				HX_STACK_LINE(230)
				if (((ver == (int)3))){
					HX_STACK_LINE(231)
					Dynamic _g2 = this->readRGBA(this->i);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(231)
					_g9 = ::format::swf::LineStyleData_obj::LSRGBA(_g2);
				}
				else{
					HX_STACK_LINE(233)
					if (((ver == (int)4))){
						HX_STACK_LINE(234)
						this->bits->nbits = (int)0;
						HX_STACK_LINE(235)
						int _g3 = this->bits->readBits((int)2);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(235)
						::format::swf::LineCapStyle startCap = this->getLineCap(_g3);		HX_STACK_VAR(startCap,"startCap");
						HX_STACK_LINE(236)
						int _join = this->bits->readBits((int)2);		HX_STACK_VAR(_join,"_join");
						HX_STACK_LINE(237)
						bool _fill = this->bits->readBit();		HX_STACK_VAR(_fill,"_fill");
						HX_STACK_LINE(238)
						bool noHScale = this->bits->readBit();		HX_STACK_VAR(noHScale,"noHScale");
						HX_STACK_LINE(239)
						bool noVScale = this->bits->readBit();		HX_STACK_VAR(noVScale,"noVScale");
						HX_STACK_LINE(240)
						bool pixelHinting = this->bits->readBit();		HX_STACK_VAR(pixelHinting,"pixelHinting");
						HX_STACK_LINE(242)
						int _g4 = this->bits->readBits((int)5);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(242)
						if (((_g4 != (int)0))){
							HX_STACK_LINE(243)
							HX_STACK_DO_THROW(this->error());
						}
						HX_STACK_LINE(245)
						bool noClose = this->bits->readBit();		HX_STACK_VAR(noClose,"noClose");
						HX_STACK_LINE(246)
						int _g5 = this->bits->readBits((int)2);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(246)
						::format::swf::LineCapStyle endCap = this->getLineCap(_g5);		HX_STACK_VAR(endCap,"endCap");
						HX_STACK_LINE(248)
						::format::swf::LineJoinStyle join;		HX_STACK_VAR(join,"join");
						HX_STACK_LINE(248)
						switch( (int)(_join)){
							case (int)0: {
								HX_STACK_LINE(249)
								join = ::format::swf::LineJoinStyle_obj::LJRound;
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(250)
								join = ::format::swf::LineJoinStyle_obj::LJBevel;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(251)
								int _g6;		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(251)
								{
									HX_STACK_LINE(251)
									::haxe::io::Input i = null();		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(251)
									if (((i == null()))){
										HX_STACK_LINE(251)
										i = this->i;
									}
									HX_STACK_LINE(251)
									_g6 = i->readUInt16();
								}
								HX_STACK_LINE(251)
								join = ::format::swf::LineJoinStyle_obj::LJMiter(_g6);
							}
							;break;
							default: {
								HX_STACK_LINE(252)
								HX_STACK_DO_THROW(this->error());
							}
						}
						HX_STACK_LINE(255)
						::format::swf::LS2Fill fill;		HX_STACK_VAR(fill,"fill");
						HX_STACK_LINE(255)
						bool _switch_1 = (_fill);
						if (  ( _switch_1==false)){
							HX_STACK_LINE(256)
							Dynamic _g7 = this->readRGBA(this->i);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(256)
							fill = ::format::swf::LS2Fill_obj::LS2FColor(_g7);
						}
						else if (  ( _switch_1==true)){
							HX_STACK_LINE(257)
							::format::swf::FillStyle _g8 = this->readFillStyle(ver);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(257)
							fill = ::format::swf::LS2Fill_obj::LS2FStyle(_g8);
						}
						struct _Function_6_1{
							inline static Dynamic Block( ::format::swf::LineJoinStyle &join,bool &noHScale,bool &noClose,bool &noVScale,::format::swf::LineCapStyle &endCap,bool &pixelHinting,::format::swf::LS2Fill &fill,::format::swf::LineCapStyle &startCap){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",260,0x866e6cd6)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("startCap") , startCap,false);
									__result->Add(HX_CSTRING("join") , join,false);
									__result->Add(HX_CSTRING("fill") , fill,false);
									__result->Add(HX_CSTRING("noHScale") , noHScale,false);
									__result->Add(HX_CSTRING("noVScale") , noVScale,false);
									__result->Add(HX_CSTRING("pixelHinting") , pixelHinting,false);
									__result->Add(HX_CSTRING("noClose") , noClose,false);
									__result->Add(HX_CSTRING("endCap") , endCap,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(260)
						_g9 = ::format::swf::LineStyleData_obj::LS2(_Function_6_1::Block(join,noHScale,noClose,noVScale,endCap,pixelHinting,fill,startCap));
					}
					else{
						HX_STACK_LINE(271)
						HX_STACK_DO_THROW(this->error());
					}
				}
			}
			struct _Function_3_1{
				inline static Dynamic Block( int &width,::format::swf::LineStyleData &_g9){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",225,0x866e6cd6)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("width") , width,false);
						__result->Add(HX_CSTRING("data") , _g9,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(225)
			Dynamic _g10 = _Function_3_1::Block(width,_g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(225)
			arr->__Field(HX_CSTRING("push"),true)(_g10);
		}
	}
	HX_STACK_LINE(275)
	return arr;
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readLineStyles,return )

::format::swf::FillStyle Reader_obj::readFillStyle( int ver){
	HX_STACK_FRAME("format.swf.Reader","readFillStyle",0x9028fbf0,"format.swf.Reader.readFillStyle","format/swf/Reader.hx",278,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ver,"ver")
	HX_STACK_LINE(279)
	int type = this->i->readByte();		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(281)
	switch( (int)(type)){
		case (int)0: {
			HX_STACK_LINE(283)
			if (((ver <= (int)2))){
				HX_STACK_LINE(283)
				Dynamic _g = this->readRGB(this->i);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(283)
				return ::format::swf::FillStyle_obj::FSSolid(_g);
			}
			else{
				HX_STACK_LINE(283)
				Dynamic _g1 = this->readRGBA(this->i);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(283)
				return ::format::swf::FillStyle_obj::FSSolidAlpha(_g1);
			}
		}
		;break;
		case (int)16: case (int)18: case (int)19: {
			HX_STACK_LINE(289)
			Dynamic mat = this->readMatrix();		HX_STACK_VAR(mat,"mat");
			HX_STACK_LINE(290)
			Dynamic grad = this->readGradient(ver);		HX_STACK_VAR(grad,"grad");
			HX_STACK_LINE(292)
			switch( (int)(type)){
				case (int)19: {
					HX_STACK_LINE(295)
					int _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(295)
					{
						HX_STACK_LINE(295)
						::haxe::io::Input i = this->i;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(295)
						if (((i == null()))){
							HX_STACK_LINE(295)
							i = this->i;
						}
						HX_STACK_LINE(295)
						_g2 = i->readUInt16();
					}
					struct _Function_3_1{
						inline static Dynamic Block( Dynamic &grad,int &_g2){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",294,0x866e6cd6)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("focalPoint") , _g2,false);
								__result->Add(HX_CSTRING("data") , grad,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(294)
					Dynamic _g3 = _Function_3_1::Block(grad,_g2);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(294)
					return ::format::swf::FillStyle_obj::FSFocalGradient(mat,_g3);
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(299)
					return ::format::swf::FillStyle_obj::FSLinearGradient(mat,grad);
				}
				;break;
				case (int)18: {
					HX_STACK_LINE(301)
					return ::format::swf::FillStyle_obj::FSRadialGradient(mat,grad);
				}
				;break;
				default: {
					HX_STACK_LINE(302)
					HX_STACK_DO_THROW(this->error());
				}
			}
		}
		;break;
		case (int)64: case (int)65: case (int)66: case (int)67: {
			HX_STACK_LINE(310)
			int cid = this->i->readUInt16();		HX_STACK_VAR(cid,"cid");
			HX_STACK_LINE(311)
			Dynamic mat = this->readMatrix();		HX_STACK_VAR(mat,"mat");
			HX_STACK_LINE(312)
			bool isRepeat = (bool((type == (int)64)) || bool((type == (int)66)));		HX_STACK_VAR(isRepeat,"isRepeat");
			HX_STACK_LINE(313)
			bool isSmooth = (bool((type == (int)64)) || bool((type == (int)65)));		HX_STACK_VAR(isSmooth,"isSmooth");
			HX_STACK_LINE(314)
			return ::format::swf::FillStyle_obj::FSBitmap(cid,mat,isRepeat,isSmooth);
		}
		;break;
		default: {
			HX_STACK_LINE(316)
			::String _g4 = this->error();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(316)
			::String _g5 = (_g4 + HX_CSTRING(" code "));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(316)
			HX_STACK_DO_THROW((_g5 + type));
		}
	}
	HX_STACK_LINE(281)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readFillStyle,return )

Array< ::Dynamic > Reader_obj::readFillStyles( int ver){
	HX_STACK_FRAME("format.swf.Reader","readFillStyles",0x93b37683,"format.swf.Reader.readFillStyles","format/swf/Reader.hx",320,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ver,"ver")
	HX_STACK_LINE(321)
	int cnt = this->i->readByte();		HX_STACK_VAR(cnt,"cnt");
	HX_STACK_LINE(322)
	if (((bool((cnt == (int)255)) && bool((ver > (int)1))))){
		HX_STACK_LINE(323)
		int _g = this->i->readUInt16();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(323)
		cnt = _g;
	}
	HX_STACK_LINE(325)
	Array< ::Dynamic > arr = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(327)
	{
		HX_STACK_LINE(327)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(327)
		while((true)){
			HX_STACK_LINE(327)
			if ((!(((_g < cnt))))){
				HX_STACK_LINE(327)
				break;
			}
			HX_STACK_LINE(327)
			int c = (_g)++;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(328)
			::format::swf::FillStyle fillStyle = this->readFillStyle(ver);		HX_STACK_VAR(fillStyle,"fillStyle");
			HX_STACK_LINE(329)
			arr->push(fillStyle);
		}
	}
	HX_STACK_LINE(331)
	return arr;
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readFillStyles,return )

Dynamic Reader_obj::readShapeWithStyle( int ver){
	HX_STACK_FRAME("format.swf.Reader","readShapeWithStyle",0xd921ba68,"format.swf.Reader.readShapeWithStyle","format/swf/Reader.hx",334,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ver,"ver")
	HX_STACK_LINE(335)
	Array< ::Dynamic > fillStyles = this->readFillStyles(ver);		HX_STACK_VAR(fillStyles,"fillStyles");
	HX_STACK_LINE(336)
	Dynamic lineStyles = this->readLineStyles(ver);		HX_STACK_VAR(lineStyles,"lineStyles");
	HX_STACK_LINE(340)
	Array< ::Dynamic > _g = this->readShapeRecords(ver);		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &lineStyles,Array< ::Dynamic > &_g,Array< ::Dynamic > &fillStyles){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",337,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fillStyles") , fillStyles,false);
				__result->Add(HX_CSTRING("lineStyles") , lineStyles,false);
				__result->Add(HX_CSTRING("shapeRecords") , _g,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(337)
	return _Function_1_1::Block(lineStyles,_g,fillStyles);
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readShapeWithStyle,return )

Dynamic Reader_obj::readShapeWithoutStyle( int ver){
	HX_STACK_FRAME("format.swf.Reader","readShapeWithoutStyle",0x187fbccc,"format.swf.Reader.readShapeWithoutStyle","format/swf/Reader.hx",344,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ver,"ver")
	HX_STACK_LINE(346)
	Array< ::Dynamic > _g = this->readShapeRecords(ver);		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static Dynamic Block( Array< ::Dynamic > &_g){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",345,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("shapeRecords") , _g,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(345)
	return _Function_1_1::Block(_g);
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readShapeWithoutStyle,return )

Array< ::Dynamic > Reader_obj::readShapeRecords( int ver){
	HX_STACK_FRAME("format.swf.Reader","readShapeRecords",0xb75c889f,"format.swf.Reader.readShapeRecords","format/swf/Reader.hx",354,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ver,"ver")
	HX_STACK_LINE(355)
	this->bits->nbits = (int)0;
	HX_STACK_LINE(356)
	int fillBits = this->bits->readBits((int)4);		HX_STACK_VAR(fillBits,"fillBits");
	HX_STACK_LINE(357)
	int lineBits = this->bits->readBits((int)4);		HX_STACK_VAR(lineBits,"lineBits");
	HX_STACK_LINE(359)
	Array< ::Dynamic > recs = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(recs,"recs");
	HX_STACK_LINE(361)
	while((true)){
		HX_STACK_LINE(363)
		if ((this->bits->readBit())){
			HX_STACK_LINE(365)
			if ((this->bits->readBit())){
				HX_STACK_LINE(367)
				int _g = this->bits->readBits((int)4);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(367)
				int nbits = (_g + (int)2);		HX_STACK_VAR(nbits,"nbits");
				HX_STACK_LINE(368)
				bool isGeneral = this->bits->readBit();		HX_STACK_VAR(isGeneral,"isGeneral");
				HX_STACK_LINE(369)
				bool isVertical;		HX_STACK_VAR(isVertical,"isVertical");
				HX_STACK_LINE(369)
				if ((!(isGeneral))){
					HX_STACK_LINE(369)
					isVertical = this->bits->readBit();
				}
				else{
					HX_STACK_LINE(369)
					isVertical = false;
				}
				HX_STACK_LINE(371)
				int dx;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(371)
				if (((bool(isGeneral) || bool(!(isVertical))))){
					HX_STACK_LINE(372)
					int _g1 = this->bits->readBits(nbits);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(372)
					dx = ::format::swf::Tools_obj::signExtend(_g1,nbits);
				}
				else{
					HX_STACK_LINE(373)
					dx = (int)0;
				}
				HX_STACK_LINE(375)
				int dy;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(375)
				if (((bool(isGeneral) || bool(isVertical)))){
					HX_STACK_LINE(376)
					int _g2 = this->bits->readBits(nbits);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(376)
					dy = ::format::swf::Tools_obj::signExtend(_g2,nbits);
				}
				else{
					HX_STACK_LINE(377)
					dy = (int)0;
				}
				HX_STACK_LINE(379)
				::format::swf::ShapeRecord _g3 = ::format::swf::ShapeRecord_obj::SHREdge(dx,dy);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(379)
				recs->push(_g3);
			}
			else{
				HX_STACK_LINE(383)
				int _g4 = this->bits->readBits((int)4);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(383)
				int nbits = (_g4 + (int)2);		HX_STACK_VAR(nbits,"nbits");
				HX_STACK_LINE(384)
				int _g5 = this->bits->readBits(nbits);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(384)
				int cdx = ::format::swf::Tools_obj::signExtend(_g5,nbits);		HX_STACK_VAR(cdx,"cdx");
				HX_STACK_LINE(385)
				int _g6 = this->bits->readBits(nbits);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(385)
				int cdy = ::format::swf::Tools_obj::signExtend(_g6,nbits);		HX_STACK_VAR(cdy,"cdy");
				HX_STACK_LINE(386)
				int _g7 = this->bits->readBits(nbits);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(386)
				int adx = ::format::swf::Tools_obj::signExtend(_g7,nbits);		HX_STACK_VAR(adx,"adx");
				HX_STACK_LINE(387)
				int _g8 = this->bits->readBits(nbits);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(387)
				int ady = ::format::swf::Tools_obj::signExtend(_g8,nbits);		HX_STACK_VAR(ady,"ady");
				HX_STACK_LINE(388)
				::format::swf::ShapeRecord _g9 = ::format::swf::ShapeRecord_obj::SHRCurvedEdge(cdx,cdy,adx,ady);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(388)
				recs->push(_g9);
			}
		}
		else{
			HX_STACK_LINE(392)
			int flags = this->bits->readBits((int)5);		HX_STACK_VAR(flags,"flags");
			HX_STACK_LINE(394)
			if (((flags == (int)0))){
				HX_STACK_LINE(396)
				recs->push(::format::swf::ShapeRecord_obj::SHREnd);
				HX_STACK_LINE(397)
				break;
			}
			else{
				struct _Function_4_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",401,0x866e6cd6)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("moveTo") , null(),false);
							__result->Add(HX_CSTRING("fillStyle0") , null(),false);
							__result->Add(HX_CSTRING("fillStyle1") , null(),false);
							__result->Add(HX_CSTRING("lineStyle") , null(),false);
							__result->Add(HX_CSTRING("newStyles") , null(),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(401)
				Dynamic cdata = _Function_4_1::Block();		HX_STACK_VAR(cdata,"cdata");
				HX_STACK_LINE(408)
				if (((((int(flags) & int((int)1))) != (int)0))){
					HX_STACK_LINE(410)
					int mbits = this->bits->readBits((int)5);		HX_STACK_VAR(mbits,"mbits");
					HX_STACK_LINE(411)
					int _g10 = this->bits->readBits(mbits);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(411)
					int dx = ::format::swf::Tools_obj::signExtend(_g10,mbits);		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(412)
					int _g11 = this->bits->readBits(mbits);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(412)
					int dy = ::format::swf::Tools_obj::signExtend(_g11,mbits);		HX_STACK_VAR(dy,"dy");
					struct _Function_5_1{
						inline static Dynamic Block( int &dy,int &dx){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",413,0x866e6cd6)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("dx") , dx,false);
								__result->Add(HX_CSTRING("dy") , dy,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(413)
					cdata->__FieldRef(HX_CSTRING("moveTo")) = _Function_5_1::Block(dy,dx);
				}
				HX_STACK_LINE(418)
				if (((((int(flags) & int((int)2))) != (int)0))){
					HX_STACK_LINE(419)
					int _g12 = this->bits->readBits(fillBits);		HX_STACK_VAR(_g12,"_g12");
					struct _Function_5_1{
						inline static Dynamic Block( int &_g12){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",419,0x866e6cd6)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("idx") , _g12,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(419)
					Dynamic _g13 = _Function_5_1::Block(_g12);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(419)
					cdata->__FieldRef(HX_CSTRING("fillStyle0")) = _g13;
				}
				HX_STACK_LINE(421)
				if (((((int(flags) & int((int)4))) != (int)0))){
					HX_STACK_LINE(422)
					int _g14 = this->bits->readBits(fillBits);		HX_STACK_VAR(_g14,"_g14");
					struct _Function_5_1{
						inline static Dynamic Block( int &_g14){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",422,0x866e6cd6)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("idx") , _g14,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(422)
					Dynamic _g15 = _Function_5_1::Block(_g14);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(422)
					cdata->__FieldRef(HX_CSTRING("fillStyle1")) = _g15;
				}
				HX_STACK_LINE(424)
				if (((((int(flags) & int((int)8))) != (int)0))){
					HX_STACK_LINE(425)
					int _g16 = this->bits->readBits(lineBits);		HX_STACK_VAR(_g16,"_g16");
					struct _Function_5_1{
						inline static Dynamic Block( int &_g16){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",425,0x866e6cd6)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("idx") , _g16,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(425)
					Dynamic _g17 = _Function_5_1::Block(_g16);		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(425)
					cdata->__FieldRef(HX_CSTRING("lineStyle")) = _g17;
				}
				HX_STACK_LINE(431)
				if (((((int(flags) & int((int)16))) != (int)0))){
					HX_STACK_LINE(432)
					Array< ::Dynamic > fst = this->readFillStyles(ver);		HX_STACK_VAR(fst,"fst");
					HX_STACK_LINE(433)
					Dynamic lst = this->readLineStyles(ver);		HX_STACK_VAR(lst,"lst");
					HX_STACK_LINE(434)
					this->bits->nbits = (int)0;
					HX_STACK_LINE(435)
					int _g18 = this->bits->readBits((int)4);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(435)
					fillBits = _g18;
					HX_STACK_LINE(436)
					int _g19 = this->bits->readBits((int)4);		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(436)
					lineBits = _g19;
					struct _Function_5_1{
						inline static Dynamic Block( Array< ::Dynamic > &fst,Dynamic &lst){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",437,0x866e6cd6)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("fillStyles") , fst,false);
								__result->Add(HX_CSTRING("lineStyles") , lst,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(437)
					cdata->__FieldRef(HX_CSTRING("newStyles")) = _Function_5_1::Block(fst,lst);
				}
				HX_STACK_LINE(442)
				::format::swf::ShapeRecord _g20 = ::format::swf::ShapeRecord_obj::SHRChange(cdata);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(442)
				recs->push(_g20);
			}
		}
		HX_STACK_LINE(361)
		{
		}
	}
	HX_STACK_LINE(448)
	return recs;
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readShapeRecords,return )

int Reader_obj::readInt( ){
	HX_STACK_FRAME("format.swf.Reader","readInt",0x0f5ebfb1,"format.swf.Reader.readInt","format/swf/Reader.hx",454,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(454)
	return this->i->readInt32();
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readInt,return )

Dynamic Reader_obj::readClipEvents( ){
	HX_STACK_FRAME("format.swf.Reader","readClipEvents",0x46fe3787,"format.swf.Reader.readClipEvents","format/swf/Reader.hx",460,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(461)
	int _g = this->i->readUInt16();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(461)
	if (((_g != (int)0))){
		HX_STACK_LINE(461)
		HX_STACK_DO_THROW(this->error());
	}
	HX_STACK_LINE(462)
	this->i->readInt32();
	HX_STACK_LINE(463)
	Dynamic a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(464)
	while((true)){
		HX_STACK_LINE(465)
		int code = this->i->readInt32();		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(466)
		if (((code == (int)0))){
			HX_STACK_LINE(466)
			break;
		}
		HX_STACK_LINE(467)
		int _g1 = this->i->readInt32();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(467)
		::haxe::io::Bytes data = this->i->read(_g1);		HX_STACK_VAR(data,"data");
		struct _Function_2_1{
			inline static Dynamic Block( int &code,::haxe::io::Bytes &data){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",468,0x866e6cd6)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("eventsFlags") , code,false);
					__result->Add(HX_CSTRING("data") , data,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(468)
		a->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(code,data));
	}
	HX_STACK_LINE(470)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readClipEvents,return )

Dynamic Reader_obj::readFilterFlags( bool top){
	HX_STACK_FRAME("format.swf.Reader","readFilterFlags",0x3540c531,"format.swf.Reader.readFilterFlags","format/swf/Reader.hx",473,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(top,"top")
	HX_STACK_LINE(474)
	int flags = this->i->readByte();		HX_STACK_VAR(flags,"flags");
	struct _Function_1_1{
		inline static Dynamic Block( bool &top,int &flags){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",475,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("inner") , (((int(flags) & int((int)128))) != (int)0),false);
				__result->Add(HX_CSTRING("knockout") , (((int(flags) & int((int)64))) != (int)0),false);
				__result->Add(HX_CSTRING("ontop") , (  ((top)) ? bool((((int(flags) & int((int)16))) != (int)0)) : bool(false) ),false);
				__result->Add(HX_CSTRING("passes") , (int(flags) & int(((  ((top)) ? int((int)15) : int((int)31) )))),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(475)
	return _Function_1_1::Block(top,flags);
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readFilterFlags,return )

Dynamic Reader_obj::readFilterGradient( ){
	HX_STACK_FRAME("format.swf.Reader","readFilterGradient",0x5c5c2e46,"format.swf.Reader.readFilterGradient","format/swf/Reader.hx",484,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(485)
	int ncolors = this->i->readByte();		HX_STACK_VAR(ncolors,"ncolors");
	HX_STACK_LINE(486)
	Dynamic colors = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(colors,"colors");
	HX_STACK_LINE(487)
	{
		HX_STACK_LINE(487)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(487)
		while((true)){
			HX_STACK_LINE(487)
			if ((!(((_g < ncolors))))){
				HX_STACK_LINE(487)
				break;
			}
			HX_STACK_LINE(487)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(488)
			Dynamic _g1 = this->readRGBA(null());		HX_STACK_VAR(_g1,"_g1");
			struct _Function_3_1{
				inline static Dynamic Block( Dynamic &_g1){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",488,0x866e6cd6)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("color") , _g1,false);
						__result->Add(HX_CSTRING("position") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(488)
			Dynamic _g11 = _Function_3_1::Block(_g1);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(488)
			colors->__Field(HX_CSTRING("push"),true)(_g11);
		}
	}
	HX_STACK_LINE(489)
	{
		HX_STACK_LINE(489)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(489)
		while((true)){
			HX_STACK_LINE(489)
			if ((!(((_g < colors->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(489)
				break;
			}
			HX_STACK_LINE(489)
			Dynamic c = colors->__GetItem(_g);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(489)
			++(_g);
			HX_STACK_LINE(490)
			int _g2 = this->i->readByte();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(490)
			c->__FieldRef(HX_CSTRING("position")) = _g2;
		}
	}
	HX_STACK_LINE(494)
	int _g3 = this->i->readInt32();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(495)
	int _g4 = this->i->readInt32();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(496)
	int _g5 = this->i->readInt32();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(497)
	int _g6 = this->i->readInt32();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(498)
	int _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(498)
	{
		HX_STACK_LINE(498)
		::haxe::io::Input i = null();		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(498)
		if (((i == null()))){
			HX_STACK_LINE(498)
			i = this->i;
		}
		HX_STACK_LINE(498)
		_g7 = i->readUInt16();
	}
	HX_STACK_LINE(499)
	Dynamic _g8 = this->readFilterFlags(true);		HX_STACK_VAR(_g8,"_g8");
	struct _Function_1_1{
		inline static Dynamic Block( int &_g7,int &_g5,Dynamic &_g8,int &_g6,int &_g4,int &_g3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",491,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color") , null(),false);
				__result->Add(HX_CSTRING("color2") , null(),false);
				__result->Add(HX_CSTRING("blurX") , _g3,false);
				__result->Add(HX_CSTRING("blurY") , _g4,false);
				__result->Add(HX_CSTRING("angle") , _g5,false);
				__result->Add(HX_CSTRING("distance") , _g6,false);
				__result->Add(HX_CSTRING("strength") , _g7,false);
				__result->Add(HX_CSTRING("flags") , _g8,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(491)
	Dynamic data = _Function_1_1::Block(_g7,_g5,_g8,_g6,_g4,_g3);		HX_STACK_VAR(data,"data");
	struct _Function_1_2{
		inline static Dynamic Block( Dynamic &colors,Dynamic &data){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",501,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("colors") , colors,false);
				__result->Add(HX_CSTRING("data") , data,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(501)
	return _Function_1_2::Block(colors,data);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readFilterGradient,return )

::format::swf::Filter Reader_obj::readFilter( ){
	HX_STACK_FRAME("format.swf.Reader","readFilter",0xfb1d1236,"format.swf.Reader.readFilter","format/swf/Reader.hx",507,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(508)
	int n = this->i->readByte();		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(509)
	switch( (int)(n)){
		case (int)0: {
			HX_STACK_LINE(511)
			Dynamic _g = this->readRGBA(null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(513)
			int _g1 = this->i->readInt32();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(514)
			int _g2 = this->i->readInt32();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(515)
			int _g3 = this->i->readInt32();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(516)
			int _g4 = this->i->readInt32();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(517)
			int _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(517)
			{
				HX_STACK_LINE(517)
				::haxe::io::Input i = null();		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(517)
				if (((i == null()))){
					HX_STACK_LINE(517)
					i = this->i;
				}
				HX_STACK_LINE(517)
				_g5 = i->readUInt16();
			}
			HX_STACK_LINE(518)
			Dynamic _g6 = this->readFilterFlags(false);		HX_STACK_VAR(_g6,"_g6");
			struct _Function_2_1{
				inline static Dynamic Block( int &_g1,int &_g5,Dynamic &_g,Dynamic &_g6,int &_g4,int &_g2,int &_g3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",510,0x866e6cd6)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("color") , _g,false);
						__result->Add(HX_CSTRING("color2") , null(),false);
						__result->Add(HX_CSTRING("blurX") , _g1,false);
						__result->Add(HX_CSTRING("blurY") , _g2,false);
						__result->Add(HX_CSTRING("angle") , _g3,false);
						__result->Add(HX_CSTRING("distance") , _g4,false);
						__result->Add(HX_CSTRING("strength") , _g5,false);
						__result->Add(HX_CSTRING("flags") , _g6,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(510)
			Dynamic _g7 = _Function_2_1::Block(_g1,_g5,_g,_g6,_g4,_g2,_g3);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(510)
			return ::format::swf::Filter_obj::FDropShadow(_g7);
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(521)
			int _g8 = this->i->readInt32();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(522)
			int _g9 = this->i->readInt32();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(523)
			int _g10 = this->i->readByte();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(523)
			int _g11 = (int(_g10) >> int((int)3));		HX_STACK_VAR(_g11,"_g11");
			struct _Function_2_1{
				inline static Dynamic Block( int &_g11,int &_g8,int &_g9){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",520,0x866e6cd6)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("blurX") , _g8,false);
						__result->Add(HX_CSTRING("blurY") , _g9,false);
						__result->Add(HX_CSTRING("passes") , _g11,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(520)
			Dynamic _g12 = _Function_2_1::Block(_g11,_g8,_g9);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(520)
			return ::format::swf::Filter_obj::FBlur(_g12);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(526)
			Dynamic _g13 = this->readRGBA(null());		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(528)
			int _g14 = this->i->readInt32();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(529)
			int _g15 = this->i->readInt32();		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(532)
			int _g16;		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(532)
			{
				HX_STACK_LINE(532)
				::haxe::io::Input i = null();		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(532)
				if (((i == null()))){
					HX_STACK_LINE(532)
					i = this->i;
				}
				HX_STACK_LINE(532)
				_g16 = i->readUInt16();
			}
			HX_STACK_LINE(533)
			Dynamic _g17 = this->readFilterFlags(false);		HX_STACK_VAR(_g17,"_g17");
			struct _Function_2_1{
				inline static Dynamic Block( int &_g15,Dynamic &_g17,int &_g16,Dynamic &_g13,int &_g14){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",525,0x866e6cd6)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("color") , _g13,false);
						__result->Add(HX_CSTRING("color2") , null(),false);
						__result->Add(HX_CSTRING("blurX") , _g14,false);
						__result->Add(HX_CSTRING("blurY") , _g15,false);
						__result->Add(HX_CSTRING("angle") , (int)0,false);
						__result->Add(HX_CSTRING("distance") , (int)0,false);
						__result->Add(HX_CSTRING("strength") , _g16,false);
						__result->Add(HX_CSTRING("flags") , _g17,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(525)
			Dynamic _g18 = _Function_2_1::Block(_g15,_g17,_g16,_g13,_g14);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(525)
			return ::format::swf::Filter_obj::FGlow(_g18);
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(536)
			Dynamic _g19 = this->readRGBA(null());		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(537)
			Dynamic _g20 = this->readRGBA(null());		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(538)
			int _g21 = this->i->readInt32();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(539)
			int _g22 = this->i->readInt32();		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(540)
			int _g23 = this->i->readInt32();		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(541)
			int _g24 = this->i->readInt32();		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(542)
			int _g25;		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(542)
			{
				HX_STACK_LINE(542)
				::haxe::io::Input i = null();		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(542)
				if (((i == null()))){
					HX_STACK_LINE(542)
					i = this->i;
				}
				HX_STACK_LINE(542)
				_g25 = i->readUInt16();
			}
			HX_STACK_LINE(543)
			Dynamic _g26 = this->readFilterFlags(true);		HX_STACK_VAR(_g26,"_g26");
			struct _Function_2_1{
				inline static Dynamic Block( int &_g24,Dynamic &_g19,int &_g25,int &_g22,Dynamic &_g26,Dynamic &_g20,int &_g21,int &_g23){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",535,0x866e6cd6)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("color") , _g19,false);
						__result->Add(HX_CSTRING("color2") , _g20,false);
						__result->Add(HX_CSTRING("blurX") , _g21,false);
						__result->Add(HX_CSTRING("blurY") , _g22,false);
						__result->Add(HX_CSTRING("angle") , _g23,false);
						__result->Add(HX_CSTRING("distance") , _g24,false);
						__result->Add(HX_CSTRING("strength") , _g25,false);
						__result->Add(HX_CSTRING("flags") , _g26,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(535)
			Dynamic _g27 = _Function_2_1::Block(_g24,_g19,_g25,_g22,_g26,_g20,_g21,_g23);		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(535)
			return ::format::swf::Filter_obj::FBevel(_g27);
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(547)
			HX_STACK_DO_THROW(this->error());
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(548)
			Dynamic _g28 = this->readFilterGradient();		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(548)
			return ::format::swf::Filter_obj::FGradientGlow(_g28);
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(550)
			Array< Float > a = Array_obj< Float >::__new();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(551)
			{
				HX_STACK_LINE(551)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(551)
				while((true)){
					HX_STACK_LINE(551)
					if ((!(((_g < (int)20))))){
						HX_STACK_LINE(551)
						break;
					}
					HX_STACK_LINE(551)
					int n1 = (_g)++;		HX_STACK_VAR(n1,"n1");
					HX_STACK_LINE(552)
					Float _g29 = this->i->readFloat();		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(552)
					a->push(_g29);
				}
			}
			HX_STACK_LINE(553)
			return ::format::swf::Filter_obj::FColorMatrix(a);
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(554)
			Dynamic _g30 = this->readFilterGradient();		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(554)
			return ::format::swf::Filter_obj::FGradientBevel(_g30);
		}
		;break;
		default: {
			HX_STACK_LINE(556)
			HX_STACK_DO_THROW(this->error());
			HX_STACK_LINE(557)
			return null();
		}
	}
	HX_STACK_LINE(509)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readFilter,return )

Array< ::Dynamic > Reader_obj::readFilters( ){
	HX_STACK_FRAME("format.swf.Reader","readFilters",0xbe52dd7d,"format.swf.Reader.readFilters","format/swf/Reader.hx",561,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(562)
	Array< ::Dynamic > filters = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(filters,"filters");
	HX_STACK_LINE(563)
	{
		HX_STACK_LINE(563)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(563)
		int _g = this->i->readByte();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(563)
		while((true)){
			HX_STACK_LINE(563)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(563)
				break;
			}
			HX_STACK_LINE(563)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(564)
			::format::swf::Filter _g2 = this->readFilter();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(564)
			filters->push(_g2);
		}
	}
	HX_STACK_LINE(565)
	return filters;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readFilters,return )

::String Reader_obj::error( ){
	HX_STACK_FRAME("format.swf.Reader","error",0x1c484a40,"format.swf.Reader.error","format/swf/Reader.hx",569,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(569)
	return HX_CSTRING("Invalid SWF");
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,error,return )

Dynamic Reader_obj::readHeader( ){
	HX_STACK_FRAME("format.swf.Reader","readHeader",0x72e7fc0b,"format.swf.Reader.readHeader","format/swf/Reader.hx",572,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(573)
	::String tag = this->i->readString((int)3);		HX_STACK_VAR(tag,"tag");
	HX_STACK_LINE(574)
	bool compressed;		HX_STACK_VAR(compressed,"compressed");
	HX_STACK_LINE(575)
	if (((tag == HX_CSTRING("CWS")))){
		HX_STACK_LINE(576)
		compressed = true;
	}
	else{
		HX_STACK_LINE(577)
		if (((tag == HX_CSTRING("FWS")))){
			HX_STACK_LINE(578)
			compressed = false;
		}
		else{
			HX_STACK_LINE(580)
			HX_STACK_DO_THROW(this->error());
		}
	}
	HX_STACK_LINE(581)
	int _g = this->i->readByte();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(581)
	this->version = _g;
	HX_STACK_LINE(582)
	int size = this->i->readInt32();		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(583)
	if ((compressed)){
		HX_STACK_LINE(584)
		::haxe::io::Bytes _g1 = this->i->readAll(null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(584)
		::haxe::io::Bytes bytes = ::format::tools::Inflate_obj::run(_g1);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(585)
		if ((((bytes->length + (int)8) != size))){
			HX_STACK_LINE(585)
			HX_STACK_DO_THROW(this->error());
		}
		HX_STACK_LINE(586)
		::haxe::io::BytesInput _g2 = ::haxe::io::BytesInput_obj::__new(bytes,null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(586)
		this->i = _g2;
	}
	HX_STACK_LINE(588)
	::format::tools::BitsInput _g3 = ::format::tools::BitsInput_obj::__new(this->i);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(588)
	this->bits = _g3;
	HX_STACK_LINE(589)
	Dynamic r = this->readRect();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(590)
	if (((bool((hx::Mod(((r->__Field(HX_CSTRING("right"),true) - r->__Field(HX_CSTRING("left"),true))),(int)20) != (int)0)) || bool((hx::Mod(((r->__Field(HX_CSTRING("bottom"),true) - r->__Field(HX_CSTRING("top"),true))),(int)20) != (int)0))))){
		HX_STACK_LINE(591)
		HX_STACK_DO_THROW(this->error());
	}
	HX_STACK_LINE(592)
	int fps;		HX_STACK_VAR(fps,"fps");
	HX_STACK_LINE(592)
	{
		HX_STACK_LINE(592)
		::haxe::io::Input i = null();		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(592)
		if (((i == null()))){
			HX_STACK_LINE(592)
			i = this->i;
		}
		HX_STACK_LINE(592)
		fps = i->readUInt16();
	}
	HX_STACK_LINE(593)
	int nframes = this->i->readUInt16();		HX_STACK_VAR(nframes,"nframes");
	HX_STACK_LINE(597)
	int _g4 = ::Std_obj::_int((Float(r->__Field(HX_CSTRING("right"),true)) / Float((int)20)));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(598)
	int _g5 = ::Std_obj::_int((Float(r->__Field(HX_CSTRING("bottom"),true)) / Float((int)20)));		HX_STACK_VAR(_g5,"_g5");
	struct _Function_1_1{
		inline static Dynamic Block( bool &compressed,hx::ObjectPtr< ::format::swf::Reader_obj > __this,int &_g5,int &fps,int &_g4,int &nframes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",594,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("version") , __this->version,false);
				__result->Add(HX_CSTRING("compressed") , compressed,false);
				__result->Add(HX_CSTRING("width") , _g4,false);
				__result->Add(HX_CSTRING("height") , _g5,false);
				__result->Add(HX_CSTRING("fps") , fps,false);
				__result->Add(HX_CSTRING("nframes") , nframes,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(594)
	return _Function_1_1::Block(compressed,this,_g5,fps,_g4,nframes);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readHeader,return )

Array< ::Dynamic > Reader_obj::readTagList( ){
	HX_STACK_FRAME("format.swf.Reader","readTagList",0xd636139a,"format.swf.Reader.readTagList","format/swf/Reader.hx",604,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(605)
	Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(606)
	while((true)){
		HX_STACK_LINE(607)
		::format::swf::SWFTag t = this->readTag();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(608)
		if (((t == null()))){
			HX_STACK_LINE(609)
			break;
		}
		HX_STACK_LINE(610)
		a->push(t);
	}
	HX_STACK_LINE(612)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readTagList,return )

::format::swf::SWFTag Reader_obj::readShape( int len,int ver){
	HX_STACK_FRAME("format.swf.Reader","readShape",0x724f4a63,"format.swf.Reader.readShape","format/swf/Reader.hx",615,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_ARG(ver,"ver")
	HX_STACK_LINE(616)
	int id = this->i->readUInt16();		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(618)
	if (((ver <= (int)3))){
		HX_STACK_LINE(619)
		Dynamic bounds = this->readRect();		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(620)
		Dynamic sws = this->readShapeWithStyle(ver);		HX_STACK_VAR(sws,"sws");
		HX_STACK_LINE(622)
		::format::swf::ShapeData _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(622)
		switch( (int)(ver)){
			case (int)1: {
				HX_STACK_LINE(623)
				_g = ::format::swf::ShapeData_obj::SHDShape1(bounds,sws);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(624)
				_g = ::format::swf::ShapeData_obj::SHDShape2(bounds,sws);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(625)
				_g = ::format::swf::ShapeData_obj::SHDShape3(bounds,sws);
			}
			;break;
			default: {
				HX_STACK_LINE(626)
				HX_STACK_DO_THROW(this->error());
			}
		}
		HX_STACK_LINE(622)
		return ::format::swf::SWFTag_obj::TShape(id,_g);
	}
	HX_STACK_LINE(630)
	Dynamic shapeBounds = this->readRect();		HX_STACK_VAR(shapeBounds,"shapeBounds");
	HX_STACK_LINE(631)
	Dynamic edgeBounds = this->readRect();		HX_STACK_VAR(edgeBounds,"edgeBounds");
	HX_STACK_LINE(632)
	this->bits->readBits((int)5);
	HX_STACK_LINE(633)
	bool useWinding = this->bits->readBit();		HX_STACK_VAR(useWinding,"useWinding");
	HX_STACK_LINE(634)
	bool useNonScalingStroke = this->bits->readBit();		HX_STACK_VAR(useNonScalingStroke,"useNonScalingStroke");
	HX_STACK_LINE(635)
	bool useScalingStroke = this->bits->readBit();		HX_STACK_VAR(useScalingStroke,"useScalingStroke");
	HX_STACK_LINE(636)
	Dynamic shapes = this->readShapeWithStyle(ver);		HX_STACK_VAR(shapes,"shapes");
	struct _Function_1_1{
		inline static Dynamic Block( bool &useScalingStroke,Dynamic &shapeBounds,bool &useNonScalingStroke,Dynamic &edgeBounds,bool &useWinding,Dynamic &shapes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",638,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("shapeBounds") , shapeBounds,false);
				__result->Add(HX_CSTRING("edgeBounds") , edgeBounds,false);
				__result->Add(HX_CSTRING("useWinding") , useWinding,false);
				__result->Add(HX_CSTRING("useNonScalingStroke") , useNonScalingStroke,false);
				__result->Add(HX_CSTRING("useScalingStroke") , useScalingStroke,false);
				__result->Add(HX_CSTRING("shapes") , shapes,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(638)
	::format::swf::ShapeData _g1 = ::format::swf::ShapeData_obj::SHDShape4(_Function_1_1::Block(useScalingStroke,shapeBounds,useNonScalingStroke,edgeBounds,useWinding,shapes));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(638)
	return ::format::swf::SWFTag_obj::TShape(id,_g1);
}


HX_DEFINE_DYNAMIC_FUNC2(Reader_obj,readShape,return )

Dynamic Reader_obj::readMorphGradient( int ver){
	HX_STACK_FRAME("format.swf.Reader","readMorphGradient",0x6a48441a,"format.swf.Reader.readMorphGradient","format/swf/Reader.hx",648,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ver,"ver")
	HX_STACK_LINE(649)
	int sr = this->i->readByte();		HX_STACK_VAR(sr,"sr");
	HX_STACK_LINE(650)
	Dynamic sc = this->readRGBA(this->i);		HX_STACK_VAR(sc,"sc");
	HX_STACK_LINE(651)
	int er = this->i->readByte();		HX_STACK_VAR(er,"er");
	HX_STACK_LINE(652)
	Dynamic ec = this->readRGBA(this->i);		HX_STACK_VAR(ec,"ec");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &ec,Dynamic &sc,int &er,int &sr){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",654,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("startRatio") , sr,false);
				__result->Add(HX_CSTRING("startColor") , sc,false);
				__result->Add(HX_CSTRING("endRatio") , er,false);
				__result->Add(HX_CSTRING("endColor") , ec,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(654)
	return _Function_1_1::Block(ec,sc,er,sr);
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readMorphGradient,return )

Dynamic Reader_obj::readMorphGradients( int ver){
	HX_STACK_FRAME("format.swf.Reader","readMorphGradients",0x94f35319,"format.swf.Reader.readMorphGradients","format/swf/Reader.hx",662,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ver,"ver")
	HX_STACK_LINE(663)
	int num = this->i->readByte();		HX_STACK_VAR(num,"num");
	HX_STACK_LINE(664)
	if (((bool((num < (int)1)) || bool((num > (int)8))))){
		HX_STACK_LINE(665)
		HX_STACK_DO_THROW(((HX_CSTRING("Invalid number of morph gradients (") + num) + HX_CSTRING("). Should be in range 1..8!")));
	}
	HX_STACK_LINE(667)
	Dynamic grads = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(grads,"grads");
	HX_STACK_LINE(668)
	{
		HX_STACK_LINE(668)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(668)
		while((true)){
			HX_STACK_LINE(668)
			if ((!(((_g < num))))){
				HX_STACK_LINE(668)
				break;
			}
			HX_STACK_LINE(668)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(669)
			Dynamic _g1 = this->readMorphGradient(ver);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(669)
			grads->__Field(HX_CSTRING("push"),true)(_g1);
		}
	}
	HX_STACK_LINE(672)
	return grads;
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readMorphGradients,return )

::format::swf::MorphFillStyle Reader_obj::readMorphFillStyle( int ver){
	HX_STACK_FRAME("format.swf.Reader","readMorphFillStyle",0x1aa4a644,"format.swf.Reader.readMorphFillStyle","format/swf/Reader.hx",675,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ver,"ver")
	HX_STACK_LINE(676)
	int type = this->i->readByte();		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(678)
	switch( (int)(type)){
		case (int)0: {
			HX_STACK_LINE(680)
			Dynamic startColor = this->readRGBA(this->i);		HX_STACK_VAR(startColor,"startColor");
			HX_STACK_LINE(681)
			Dynamic endColor = this->readRGBA(this->i);		HX_STACK_VAR(endColor,"endColor");
			HX_STACK_LINE(683)
			return ::format::swf::MorphFillStyle_obj::MFSSolid(startColor,endColor);
		}
		;break;
		case (int)16: case (int)18: case (int)19: {
			HX_STACK_LINE(689)
			Dynamic startMatrix = this->readMatrix();		HX_STACK_VAR(startMatrix,"startMatrix");
			HX_STACK_LINE(690)
			Dynamic endMatrix = this->readMatrix();		HX_STACK_VAR(endMatrix,"endMatrix");
			HX_STACK_LINE(691)
			Dynamic grads = this->readMorphGradients(ver);		HX_STACK_VAR(grads,"grads");
			HX_STACK_LINE(693)
			switch( (int)(type)){
				case (int)16: {
					HX_STACK_LINE(695)
					return ::format::swf::MorphFillStyle_obj::MFSLinearGradient(startMatrix,endMatrix,grads);
				}
				;break;
				case (int)18: {
					HX_STACK_LINE(697)
					return ::format::swf::MorphFillStyle_obj::MFSRadialGradient(startMatrix,endMatrix,grads);
				}
				;break;
				default: {
					HX_STACK_LINE(698)
					HX_STACK_DO_THROW(this->error());
				}
			}
		}
		;break;
		case (int)64: case (int)65: case (int)66: case (int)67: {
			HX_STACK_LINE(706)
			int cid = this->i->readUInt16();		HX_STACK_VAR(cid,"cid");
			HX_STACK_LINE(707)
			Dynamic startMatrix = this->readMatrix();		HX_STACK_VAR(startMatrix,"startMatrix");
			HX_STACK_LINE(708)
			Dynamic endMatrix = this->readMatrix();		HX_STACK_VAR(endMatrix,"endMatrix");
			HX_STACK_LINE(709)
			bool isRepeat = (bool((type == (int)64)) || bool((type == (int)66)));		HX_STACK_VAR(isRepeat,"isRepeat");
			HX_STACK_LINE(710)
			bool isSmooth = (bool((type == (int)64)) || bool((type == (int)65)));		HX_STACK_VAR(isSmooth,"isSmooth");
			HX_STACK_LINE(711)
			return ::format::swf::MorphFillStyle_obj::MFSBitmap(cid,startMatrix,endMatrix,isRepeat,isSmooth);
		}
		;break;
		default: {
			HX_STACK_LINE(713)
			::String _g = this->error();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(713)
			::String _g1 = (_g + HX_CSTRING(" code "));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(713)
			HX_STACK_DO_THROW((_g1 + type));
		}
	}
	HX_STACK_LINE(678)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readMorphFillStyle,return )

Array< ::Dynamic > Reader_obj::readMorphFillStyles( int ver){
	HX_STACK_FRAME("format.swf.Reader","readMorphFillStyles",0x356cd5af,"format.swf.Reader.readMorphFillStyles","format/swf/Reader.hx",717,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ver,"ver")
	HX_STACK_LINE(718)
	int len = this->i->readByte();		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(719)
	if (((len == (int)255))){
		HX_STACK_LINE(720)
		int _g = this->i->readUInt16();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(720)
		len = _g;
	}
	HX_STACK_LINE(722)
	Array< ::Dynamic > fill_styles = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(fill_styles,"fill_styles");
	HX_STACK_LINE(723)
	{
		HX_STACK_LINE(723)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(723)
		while((true)){
			HX_STACK_LINE(723)
			if ((!(((_g < len))))){
				HX_STACK_LINE(723)
				break;
			}
			HX_STACK_LINE(723)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(724)
			::format::swf::MorphFillStyle _g1 = this->readMorphFillStyle(ver);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(724)
			fill_styles->push(_g1);
		}
	}
	HX_STACK_LINE(727)
	return fill_styles;
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readMorphFillStyles,return )

Dynamic Reader_obj::readMorph1LineStyle( ){
	HX_STACK_FRAME("format.swf.Reader","readMorph1LineStyle",0x607adeb6,"format.swf.Reader.readMorph1LineStyle","format/swf/Reader.hx",730,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(731)
	int sw = this->i->readUInt16();		HX_STACK_VAR(sw,"sw");
	HX_STACK_LINE(732)
	int ew = this->i->readUInt16();		HX_STACK_VAR(ew,"ew");
	HX_STACK_LINE(733)
	Dynamic sc = this->readRGBA(this->i);		HX_STACK_VAR(sc,"sc");
	HX_STACK_LINE(734)
	Dynamic ec = this->readRGBA(this->i);		HX_STACK_VAR(ec,"ec");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &ec,Dynamic &sc,int &sw,int &ew){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",736,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("startWidth") , sw,false);
				__result->Add(HX_CSTRING("endWidth") , ew,false);
				__result->Add(HX_CSTRING("startColor") , sc,false);
				__result->Add(HX_CSTRING("endColor") , ec,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(736)
	return _Function_1_1::Block(ec,sc,sw,ew);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readMorph1LineStyle,return )

::format::swf::Morph2LineStyle Reader_obj::readMorph2LineStyle( ){
	HX_STACK_FRAME("format.swf.Reader","readMorph2LineStyle",0x20c55695,"format.swf.Reader.readMorph2LineStyle","format/swf/Reader.hx",744,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(745)
	int startWidth = this->i->readUInt16();		HX_STACK_VAR(startWidth,"startWidth");
	HX_STACK_LINE(746)
	int endWidth = this->i->readUInt16();		HX_STACK_VAR(endWidth,"endWidth");
	HX_STACK_LINE(747)
	this->bits->nbits = (int)0;
	HX_STACK_LINE(748)
	int startCapStyle = this->bits->readBits((int)2);		HX_STACK_VAR(startCapStyle,"startCapStyle");
	HX_STACK_LINE(749)
	int joinStyle = this->bits->readBits((int)2);		HX_STACK_VAR(joinStyle,"joinStyle");
	HX_STACK_LINE(750)
	bool hasFill = this->bits->readBit();		HX_STACK_VAR(hasFill,"hasFill");
	HX_STACK_LINE(751)
	bool noHScale = this->bits->readBit();		HX_STACK_VAR(noHScale,"noHScale");
	HX_STACK_LINE(752)
	bool noVScale = this->bits->readBit();		HX_STACK_VAR(noVScale,"noVScale");
	HX_STACK_LINE(753)
	bool pixelHinting = this->bits->readBit();		HX_STACK_VAR(pixelHinting,"pixelHinting");
	HX_STACK_LINE(754)
	this->bits->readBits((int)5);
	HX_STACK_LINE(755)
	bool noClose = this->bits->readBit();		HX_STACK_VAR(noClose,"noClose");
	HX_STACK_LINE(756)
	int endCapStyle = this->bits->readBits((int)2);		HX_STACK_VAR(endCapStyle,"endCapStyle");
	HX_STACK_LINE(757)
	this->bits->nbits = (int)0;
	HX_STACK_LINE(762)
	::format::swf::LineCapStyle _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(762)
	switch( (int)(startCapStyle)){
		case (int)0: {
			HX_STACK_LINE(763)
			_g1 = ::format::swf::LineCapStyle_obj::LCRound;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(764)
			_g1 = ::format::swf::LineCapStyle_obj::LCNone;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(765)
			_g1 = ::format::swf::LineCapStyle_obj::LCSquare;
		}
		;break;
		default: {
			HX_STACK_LINE(766)
			::String _g = this->error();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(766)
			HX_STACK_DO_THROW((_g + HX_CSTRING(" in Morph2LineStyleData")));
		}
	}
	HX_STACK_LINE(768)
	::format::swf::LineJoinStyle _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(768)
	switch( (int)(joinStyle)){
		case (int)0: {
			HX_STACK_LINE(769)
			_g4 = ::format::swf::LineJoinStyle_obj::LJRound;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(770)
			_g4 = ::format::swf::LineJoinStyle_obj::LJBevel;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(771)
			int _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(771)
			{
				HX_STACK_LINE(771)
				::haxe::io::Input i = this->i;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(771)
				if (((i == null()))){
					HX_STACK_LINE(771)
					i = this->i;
				}
				HX_STACK_LINE(771)
				_g2 = i->readUInt16();
			}
			HX_STACK_LINE(771)
			_g4 = ::format::swf::LineJoinStyle_obj::LJMiter(_g2);
		}
		;break;
		default: {
			HX_STACK_LINE(772)
			::String _g3 = this->error();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(772)
			HX_STACK_DO_THROW((_g3 + HX_CSTRING(" in Morph2LineStyleData")));
		}
	}
	HX_STACK_LINE(778)
	::format::swf::LineCapStyle _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(778)
	switch( (int)(endCapStyle)){
		case (int)0: {
			HX_STACK_LINE(779)
			_g6 = ::format::swf::LineCapStyle_obj::LCRound;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(780)
			_g6 = ::format::swf::LineCapStyle_obj::LCNone;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(781)
			_g6 = ::format::swf::LineCapStyle_obj::LCSquare;
		}
		;break;
		default: {
			HX_STACK_LINE(782)
			::String _g5 = this->error();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(782)
			HX_STACK_DO_THROW((_g5 + HX_CSTRING(" in Morph2LineStyleData")));
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::format::swf::LineCapStyle &_g1,bool &noHScale,bool &noClose,bool &noVScale,::format::swf::LineCapStyle &_g6,int &endWidth,::format::swf::LineJoinStyle &_g4,bool &pixelHinting,int &startWidth){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",759,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("startWidth") , startWidth,false);
				__result->Add(HX_CSTRING("endWidth") , endWidth,false);
				__result->Add(HX_CSTRING("startCapStyle") , _g1,false);
				__result->Add(HX_CSTRING("joinStyle") , _g4,false);
				__result->Add(HX_CSTRING("noHScale") , noHScale,false);
				__result->Add(HX_CSTRING("noVScale") , noVScale,false);
				__result->Add(HX_CSTRING("pixelHinting") , pixelHinting,false);
				__result->Add(HX_CSTRING("noClose") , noClose,false);
				__result->Add(HX_CSTRING("endCapStyle") , _g6,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(759)
	Dynamic morphData = _Function_1_1::Block(_g1,noHScale,noClose,noVScale,_g6,endWidth,_g4,pixelHinting,startWidth);		HX_STACK_VAR(morphData,"morphData");
	HX_STACK_LINE(786)
	if ((hasFill)){
		HX_STACK_LINE(787)
		::format::swf::MorphFillStyle _g7 = this->readMorphFillStyle((int)2);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(787)
		return ::format::swf::Morph2LineStyle_obj::M2LSFill(_g7,morphData);
	}
	HX_STACK_LINE(789)
	Dynamic startColor = this->readRGBA(this->i);		HX_STACK_VAR(startColor,"startColor");
	HX_STACK_LINE(790)
	Dynamic endColor = this->readRGBA(this->i);		HX_STACK_VAR(endColor,"endColor");
	HX_STACK_LINE(791)
	return ::format::swf::Morph2LineStyle_obj::M2LSNoFill(startColor,endColor,morphData);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readMorph2LineStyle,return )

Dynamic Reader_obj::readMorph1LineStyles( ){
	HX_STACK_FRAME("format.swf.Reader","readMorph1LineStyles",0x0b0800fd,"format.swf.Reader.readMorph1LineStyles","format/swf/Reader.hx",794,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(795)
	int len = this->i->readByte();		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(796)
	if (((len == (int)255))){
		HX_STACK_LINE(797)
		int _g = this->i->readUInt16();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(797)
		len = _g;
	}
	HX_STACK_LINE(799)
	Dynamic styles = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(styles,"styles");
	HX_STACK_LINE(801)
	{
		HX_STACK_LINE(801)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(801)
		while((true)){
			HX_STACK_LINE(801)
			if ((!(((_g < len))))){
				HX_STACK_LINE(801)
				break;
			}
			HX_STACK_LINE(801)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(802)
			Dynamic _g1 = this->readMorph1LineStyle();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(802)
			styles->__Field(HX_CSTRING("push"),true)(_g1);
		}
	}
	HX_STACK_LINE(805)
	return styles;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readMorph1LineStyles,return )

Array< ::Dynamic > Reader_obj::readMorph2LineStyles( ){
	HX_STACK_FRAME("format.swf.Reader","readMorph2LineStyles",0x8be66c3e,"format.swf.Reader.readMorph2LineStyles","format/swf/Reader.hx",808,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(809)
	int len = this->i->readByte();		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(810)
	if (((len == (int)255))){
		HX_STACK_LINE(811)
		int _g = this->i->readUInt16();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(811)
		len = _g;
	}
	HX_STACK_LINE(813)
	Array< ::Dynamic > styles = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(styles,"styles");
	HX_STACK_LINE(815)
	{
		HX_STACK_LINE(815)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(815)
		while((true)){
			HX_STACK_LINE(815)
			if ((!(((_g < len))))){
				HX_STACK_LINE(815)
				break;
			}
			HX_STACK_LINE(815)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(816)
			::format::swf::Morph2LineStyle _g1 = this->readMorph2LineStyle();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(816)
			styles->push(_g1);
		}
	}
	HX_STACK_LINE(819)
	return styles;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readMorph2LineStyles,return )

::format::swf::SWFTag Reader_obj::readMorphShape( int ver){
	HX_STACK_FRAME("format.swf.Reader","readMorphShape",0x1eea3ab7,"format.swf.Reader.readMorphShape","format/swf/Reader.hx",822,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ver,"ver")
	HX_STACK_LINE(823)
	int id = this->i->readUInt16();		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(825)
	Dynamic startBounds = this->readRect();		HX_STACK_VAR(startBounds,"startBounds");
	HX_STACK_LINE(826)
	Dynamic endBounds = this->readRect();		HX_STACK_VAR(endBounds,"endBounds");
	HX_STACK_LINE(827)
	switch( (int)(ver)){
		case (int)1: {
			HX_STACK_LINE(829)
			this->i->readInt32();
			HX_STACK_LINE(830)
			Array< ::Dynamic > fillStyles = this->readMorphFillStyles(ver);		HX_STACK_VAR(fillStyles,"fillStyles");
			HX_STACK_LINE(831)
			Dynamic lineStyles = this->readMorph1LineStyles();		HX_STACK_VAR(lineStyles,"lineStyles");
			HX_STACK_LINE(832)
			Dynamic startEdges = this->readShapeWithoutStyle((int)3);		HX_STACK_VAR(startEdges,"startEdges");
			HX_STACK_LINE(833)
			this->bits->nbits = (int)0;
			HX_STACK_LINE(834)
			Dynamic endEdges = this->readShapeWithoutStyle((int)3);		HX_STACK_VAR(endEdges,"endEdges");
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &lineStyles,Dynamic &startEdges,Dynamic &startBounds,Dynamic &endBounds,Array< ::Dynamic > &fillStyles,Dynamic &endEdges){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",836,0x866e6cd6)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("startBounds") , startBounds,false);
						__result->Add(HX_CSTRING("endBounds") , endBounds,false);
						__result->Add(HX_CSTRING("fillStyles") , fillStyles,false);
						__result->Add(HX_CSTRING("lineStyles") , lineStyles,false);
						__result->Add(HX_CSTRING("startEdges") , startEdges,false);
						__result->Add(HX_CSTRING("endEdges") , endEdges,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(836)
			::format::swf::MorphShapeData _g = ::format::swf::MorphShapeData_obj::MSDShape1(_Function_2_1::Block(lineStyles,startEdges,startBounds,endBounds,fillStyles,endEdges));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(836)
			return ::format::swf::SWFTag_obj::TMorphShape(id,_g);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(846)
			Dynamic startEdgeBounds = this->readRect();		HX_STACK_VAR(startEdgeBounds,"startEdgeBounds");
			HX_STACK_LINE(847)
			Dynamic endEdgeBounds = this->readRect();		HX_STACK_VAR(endEdgeBounds,"endEdgeBounds");
			HX_STACK_LINE(848)
			this->bits->nbits = (int)0;
			HX_STACK_LINE(849)
			this->bits->readBits((int)6);
			HX_STACK_LINE(850)
			bool useNonScalingStrokes = this->bits->readBit();		HX_STACK_VAR(useNonScalingStrokes,"useNonScalingStrokes");
			HX_STACK_LINE(851)
			bool useScalingStrokes = this->bits->readBit();		HX_STACK_VAR(useScalingStrokes,"useScalingStrokes");
			HX_STACK_LINE(852)
			this->bits->nbits = (int)0;
			HX_STACK_LINE(853)
			this->i->readInt32();
			HX_STACK_LINE(854)
			Array< ::Dynamic > fillStyles = this->readMorphFillStyles(ver);		HX_STACK_VAR(fillStyles,"fillStyles");
			HX_STACK_LINE(855)
			Array< ::Dynamic > lineStyles = this->readMorph2LineStyles();		HX_STACK_VAR(lineStyles,"lineStyles");
			HX_STACK_LINE(856)
			Dynamic startEdges = this->readShapeWithoutStyle((int)4);		HX_STACK_VAR(startEdges,"startEdges");
			HX_STACK_LINE(857)
			this->bits->nbits = (int)0;
			HX_STACK_LINE(858)
			Dynamic endEdges = this->readShapeWithoutStyle((int)4);		HX_STACK_VAR(endEdges,"endEdges");
			struct _Function_2_1{
				inline static Dynamic Block( Array< ::Dynamic > &lineStyles,bool &useNonScalingStrokes,Dynamic &endEdgeBounds,Dynamic &startEdges,Dynamic &startEdgeBounds,bool &useScalingStrokes,Dynamic &startBounds,Dynamic &endBounds,Array< ::Dynamic > &fillStyles,Dynamic &endEdges){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",860,0x866e6cd6)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("startBounds") , startBounds,false);
						__result->Add(HX_CSTRING("endBounds") , endBounds,false);
						__result->Add(HX_CSTRING("startEdgeBounds") , startEdgeBounds,false);
						__result->Add(HX_CSTRING("endEdgeBounds") , endEdgeBounds,false);
						__result->Add(HX_CSTRING("useNonScalingStrokes") , useNonScalingStrokes,false);
						__result->Add(HX_CSTRING("useScalingStrokes") , useScalingStrokes,false);
						__result->Add(HX_CSTRING("fillStyles") , fillStyles,false);
						__result->Add(HX_CSTRING("lineStyles") , lineStyles,false);
						__result->Add(HX_CSTRING("startEdges") , startEdges,false);
						__result->Add(HX_CSTRING("endEdges") , endEdges,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(860)
			::format::swf::MorphShapeData _g1 = ::format::swf::MorphShapeData_obj::MSDShape2(_Function_2_1::Block(lineStyles,useNonScalingStrokes,endEdgeBounds,startEdges,startEdgeBounds,useScalingStrokes,startBounds,endBounds,fillStyles,endEdges));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(860)
			return ::format::swf::SWFTag_obj::TMorphShape(id,_g1);
		}
		;break;
		default: {
			HX_STACK_LINE(873)
			HX_STACK_DO_THROW(HX_CSTRING("Unsupported morph fill style version!"));
		}
	}
	HX_STACK_LINE(827)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readMorphShape,return )

::format::swf::BlendMode Reader_obj::readBlendMode( ){
	HX_STACK_FRAME("format.swf.Reader","readBlendMode",0x499c1496,"format.swf.Reader.readBlendMode","format/swf/Reader.hx",878,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(878)
	int _g = this->i->readByte();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(878)
	switch( (int)(_g)){
		case (int)0: case (int)1: {
			HX_STACK_LINE(879)
			return ::format::swf::BlendMode_obj::BNormal;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(880)
			return ::format::swf::BlendMode_obj::BLayer;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(881)
			return ::format::swf::BlendMode_obj::BMultiply;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(882)
			return ::format::swf::BlendMode_obj::BScreen;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(883)
			return ::format::swf::BlendMode_obj::BLighten;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(884)
			return ::format::swf::BlendMode_obj::BDarken;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(885)
			return ::format::swf::BlendMode_obj::BDifference;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(886)
			return ::format::swf::BlendMode_obj::BAdd;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(887)
			return ::format::swf::BlendMode_obj::BSubtract;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(888)
			return ::format::swf::BlendMode_obj::BInvert;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(889)
			return ::format::swf::BlendMode_obj::BAlpha;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(890)
			return ::format::swf::BlendMode_obj::BErase;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(891)
			return ::format::swf::BlendMode_obj::BOverlay;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(892)
			return ::format::swf::BlendMode_obj::BHardLight;
		}
		;break;
		default: {
			HX_STACK_LINE(893)
			HX_STACK_DO_THROW(this->error());
		}
	}
	HX_STACK_LINE(878)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readBlendMode,return )

::format::swf::PlaceObject Reader_obj::readPlaceObject( bool v3){
	HX_STACK_FRAME("format.swf.Reader","readPlaceObject",0xc1827ba8,"format.swf.Reader.readPlaceObject","format/swf/Reader.hx",897,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v3,"v3")
	HX_STACK_LINE(898)
	int f = this->i->readByte();		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(899)
	int f2;		HX_STACK_VAR(f2,"f2");
	HX_STACK_LINE(899)
	if ((v3)){
		HX_STACK_LINE(899)
		f2 = this->i->readByte();
	}
	else{
		HX_STACK_LINE(899)
		f2 = (int)0;
	}
	HX_STACK_LINE(900)
	if ((((int(f2) >> int((int)5)) != (int)0))){
		HX_STACK_LINE(900)
		HX_STACK_DO_THROW(this->error());
	}
	HX_STACK_LINE(901)
	::format::swf::PlaceObject po = ::format::swf::PlaceObject_obj::__new();		HX_STACK_VAR(po,"po");
	HX_STACK_LINE(902)
	int _g = this->i->readUInt16();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(902)
	po->depth = _g;
	HX_STACK_LINE(903)
	if (((bool((((int(f2) & int((int)8))) != (int)0)) || bool((bool((((int(f2) & int((int)16))) != (int)0)) && bool((((int(f) & int((int)2))) != (int)0))))))){
		HX_STACK_LINE(903)
		::String _g1 = this->readUTF8Bytes()->toString();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(903)
		po->className = _g1;
	}
	HX_STACK_LINE(904)
	if (((((int(f) & int((int)1))) != (int)0))){
		HX_STACK_LINE(904)
		po->move = true;
	}
	HX_STACK_LINE(905)
	if (((((int(f) & int((int)2))) != (int)0))){
		HX_STACK_LINE(905)
		int _g2 = this->i->readUInt16();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(905)
		po->cid = _g2;
	}
	HX_STACK_LINE(906)
	if (((((int(f) & int((int)4))) != (int)0))){
		HX_STACK_LINE(906)
		Dynamic _g3 = this->readMatrix();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(906)
		po->matrix = _g3;
	}
	HX_STACK_LINE(907)
	if (((((int(f) & int((int)8))) != (int)0))){
		HX_STACK_LINE(907)
		Dynamic _g4 = this->readCXA();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(907)
		po->color = _g4;
	}
	HX_STACK_LINE(908)
	if (((((int(f) & int((int)16))) != (int)0))){
		HX_STACK_LINE(908)
		int _g5 = this->i->readUInt16();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(908)
		po->ratio = _g5;
	}
	HX_STACK_LINE(909)
	if (((((int(f) & int((int)32))) != (int)0))){
		HX_STACK_LINE(909)
		::String _g6 = this->readUTF8Bytes()->toString();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(909)
		po->instanceName = _g6;
	}
	HX_STACK_LINE(910)
	if (((((int(f) & int((int)64))) != (int)0))){
		HX_STACK_LINE(910)
		int _g7 = this->i->readUInt16();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(910)
		po->clipDepth = _g7;
	}
	HX_STACK_LINE(911)
	if (((((int(f2) & int((int)1))) != (int)0))){
		HX_STACK_LINE(911)
		Array< ::Dynamic > _g8 = this->readFilters();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(911)
		po->filters = _g8;
	}
	HX_STACK_LINE(912)
	if (((((int(f2) & int((int)2))) != (int)0))){
		HX_STACK_LINE(912)
		::format::swf::BlendMode _g9 = this->readBlendMode();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(912)
		po->blendMode = _g9;
	}
	HX_STACK_LINE(913)
	if (((((int(f2) & int((int)4))) != (int)0))){
		HX_STACK_LINE(913)
		int _g10 = this->i->readByte();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(913)
		po->bitmapCache = _g10;
	}
	HX_STACK_LINE(914)
	if (((((int(f2) & int((int)16))) != (int)0))){
		HX_STACK_LINE(914)
		po->hasImage = true;
	}
	HX_STACK_LINE(915)
	if (((((int(f) & int((int)128))) != (int)0))){
		HX_STACK_LINE(915)
		Dynamic _g11 = this->readClipEvents();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(915)
		po->events = _g11;
	}
	HX_STACK_LINE(916)
	return po;
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readPlaceObject,return )

Dynamic Reader_obj::readLossless( int len,bool v2){
	HX_STACK_FRAME("format.swf.Reader","readLossless",0x588df8ba,"format.swf.Reader.readLossless","format/swf/Reader.hx",919,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_ARG(v2,"v2")
	HX_STACK_LINE(920)
	int cid = this->i->readUInt16();		HX_STACK_VAR(cid,"cid");
	HX_STACK_LINE(921)
	int bits = this->i->readByte();		HX_STACK_VAR(bits,"bits");
	HX_STACK_LINE(924)
	int _g = this->i->readUInt16();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(925)
	int _g1 = this->i->readUInt16();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(926)
	::format::swf::ColorModel _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(926)
	switch( (int)(bits)){
		case (int)3: {
			HX_STACK_LINE(927)
			int _g2 = this->i->readByte();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(927)
			_g3 = ::format::swf::ColorModel_obj::CM8Bits(_g2);
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(928)
			_g3 = ::format::swf::ColorModel_obj::CM15Bits;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(929)
			if ((v2)){
				HX_STACK_LINE(929)
				_g3 = ::format::swf::ColorModel_obj::CM32Bits;
			}
			else{
				HX_STACK_LINE(929)
				_g3 = ::format::swf::ColorModel_obj::CM24Bits;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(930)
			HX_STACK_DO_THROW(this->error());
		}
	}
	HX_STACK_LINE(932)
	::haxe::io::Bytes _g4 = this->i->read((len - ((  (((bits == (int)3))) ? int((int)8) : int((int)7) ))));		HX_STACK_VAR(_g4,"_g4");
	struct _Function_1_1{
		inline static Dynamic Block( int &cid,int &_g1,int &_g,::haxe::io::Bytes &_g4,::format::swf::ColorModel &_g3){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",922,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("cid") , cid,false);
				__result->Add(HX_CSTRING("width") , _g,false);
				__result->Add(HX_CSTRING("height") , _g1,false);
				__result->Add(HX_CSTRING("color") , _g3,false);
				__result->Add(HX_CSTRING("data") , _g4,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(922)
	return _Function_1_1::Block(cid,_g1,_g,_g4,_g3);
}


HX_DEFINE_DYNAMIC_FUNC2(Reader_obj,readLossless,return )

Dynamic Reader_obj::readSymbols( ){
	HX_STACK_FRAME("format.swf.Reader","readSymbols",0xc827f9dd,"format.swf.Reader.readSymbols","format/swf/Reader.hx",936,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(937)
	Dynamic sl = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(sl,"sl");
	HX_STACK_LINE(938)
	{
		HX_STACK_LINE(938)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(938)
		int _g = this->i->readUInt16();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(938)
		while((true)){
			HX_STACK_LINE(938)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(938)
				break;
			}
			HX_STACK_LINE(938)
			int n = (_g1)++;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(940)
			int _g2 = this->i->readUInt16();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(941)
			::String _g11 = this->i->readUntil((int)0);		HX_STACK_VAR(_g11,"_g11");
			struct _Function_3_1{
				inline static Dynamic Block( ::String &_g11,int &_g2){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",939,0x866e6cd6)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("cid") , _g2,false);
						__result->Add(HX_CSTRING("className") , _g11,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(939)
			Dynamic _g21 = _Function_3_1::Block(_g11,_g2);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(939)
			sl->__Field(HX_CSTRING("push"),true)(_g21);
		}
	}
	HX_STACK_LINE(943)
	return sl;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readSymbols,return )

::format::swf::SWFTag Reader_obj::readSound( int len){
	HX_STACK_FRAME("format.swf.Reader","readSound",0x76fef411,"format.swf.Reader.readSound","format/swf/Reader.hx",946,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(947)
	int sid = this->i->readUInt16();		HX_STACK_VAR(sid,"sid");
	HX_STACK_LINE(948)
	this->bits->nbits = (int)0;
	HX_STACK_LINE(949)
	::format::swf::SoundFormat soundFormat;		HX_STACK_VAR(soundFormat,"soundFormat");
	HX_STACK_LINE(949)
	{
		HX_STACK_LINE(949)
		int _g = this->bits->readBits((int)4);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(949)
		switch( (int)(_g)){
			case (int)0: {
				HX_STACK_LINE(950)
				soundFormat = ::format::swf::SoundFormat_obj::SFNativeEndianUncompressed;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(951)
				soundFormat = ::format::swf::SoundFormat_obj::SFADPCM;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(952)
				soundFormat = ::format::swf::SoundFormat_obj::SFMP3;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(953)
				soundFormat = ::format::swf::SoundFormat_obj::SFLittleEndianUncompressed;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(954)
				soundFormat = ::format::swf::SoundFormat_obj::SFNellymoser16k;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(955)
				soundFormat = ::format::swf::SoundFormat_obj::SFNellymoser8k;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(956)
				soundFormat = ::format::swf::SoundFormat_obj::SFNellymoser;
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(957)
				soundFormat = ::format::swf::SoundFormat_obj::SFSpeex;
			}
			;break;
			default: {
				HX_STACK_LINE(958)
				HX_STACK_DO_THROW(this->error());
			}
		}
	}
	HX_STACK_LINE(960)
	::format::swf::SoundRate soundRate;		HX_STACK_VAR(soundRate,"soundRate");
	HX_STACK_LINE(960)
	{
		HX_STACK_LINE(960)
		int _g = this->bits->readBits((int)2);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(960)
		switch( (int)(_g)){
			case (int)0: {
				HX_STACK_LINE(961)
				soundRate = ::format::swf::SoundRate_obj::SR5k;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(962)
				soundRate = ::format::swf::SoundRate_obj::SR11k;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(963)
				soundRate = ::format::swf::SoundRate_obj::SR22k;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(964)
				soundRate = ::format::swf::SoundRate_obj::SR44k;
			}
			;break;
			default: {
				HX_STACK_LINE(965)
				HX_STACK_DO_THROW(this->error());
			}
		}
	}
	HX_STACK_LINE(967)
	bool is16bit = this->bits->readBit();		HX_STACK_VAR(is16bit,"is16bit");
	HX_STACK_LINE(968)
	bool isStereo = this->bits->readBit();		HX_STACK_VAR(isStereo,"isStereo");
	HX_STACK_LINE(969)
	int soundSamples = this->i->readInt32();		HX_STACK_VAR(soundSamples,"soundSamples");
	HX_STACK_LINE(970)
	::format::swf::SoundData sdata;		HX_STACK_VAR(sdata,"sdata");
	HX_STACK_LINE(970)
	switch( (int)(soundFormat->__Index())){
		case (int)2: {
			HX_STACK_LINE(972)
			int seek = this->i->readInt16();		HX_STACK_VAR(seek,"seek");
			HX_STACK_LINE(973)
			::haxe::io::Bytes _g = this->i->read((len - (int)9));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(973)
			sdata = ::format::swf::SoundData_obj::SDMp3(seek,_g);
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(975)
			::haxe::io::Bytes _g1 = this->i->read((len - (int)7));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(975)
			sdata = ::format::swf::SoundData_obj::SDRaw(_g1);
		}
		;break;
		default: {
			HX_STACK_LINE(977)
			::haxe::io::Bytes _g2 = this->i->read((len - (int)7));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(977)
			sdata = ::format::swf::SoundData_obj::SDOther(_g2);
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( int &sid,::format::swf::SoundFormat &soundFormat,::format::swf::SoundRate &soundRate,::format::swf::SoundData &sdata,bool &isStereo,int &soundSamples,bool &is16bit){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",979,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("sid") , sid,false);
				__result->Add(HX_CSTRING("format") , soundFormat,false);
				__result->Add(HX_CSTRING("rate") , soundRate,false);
				__result->Add(HX_CSTRING("is16bit") , is16bit,false);
				__result->Add(HX_CSTRING("isStereo") , isStereo,false);
				__result->Add(HX_CSTRING("samples") , soundSamples,false);
				__result->Add(HX_CSTRING("data") , sdata,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(979)
	return ::format::swf::SWFTag_obj::TSound(_Function_1_1::Block(sid,soundFormat,soundRate,sdata,isStereo,soundSamples,is16bit));
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readSound,return )

::format::swf::LangCode Reader_obj::readLanguage( ){
	HX_STACK_FRAME("format.swf.Reader","readLanguage",0x2fb98e56,"format.swf.Reader.readLanguage","format/swf/Reader.hx",991,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(991)
	int _g = this->i->readByte();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(991)
	switch( (int)(_g)){
		case (int)0: {
			HX_STACK_LINE(992)
			return ::format::swf::LangCode_obj::LCNone;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(993)
			return ::format::swf::LangCode_obj::LCLatin;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(994)
			return ::format::swf::LangCode_obj::LCJapanese;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(995)
			return ::format::swf::LangCode_obj::LCKorean;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(996)
			return ::format::swf::LangCode_obj::LCSimplifiedChinese;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(997)
			return ::format::swf::LangCode_obj::LCTraditionalChinese;
		}
		;break;
		default: {
			HX_STACK_LINE(998)
			HX_STACK_DO_THROW(HX_CSTRING("Unknown language code!"));
		}
	}
	HX_STACK_LINE(991)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readLanguage,return )

Dynamic Reader_obj::readGlyphs( int len,Array< int > offsets){
	HX_STACK_FRAME("format.swf.Reader","readGlyphs",0x2440ebc5,"format.swf.Reader.readGlyphs","format/swf/Reader.hx",1002,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_ARG(offsets,"offsets")
	HX_STACK_LINE(1003)
	::haxe::io::Bytes shape_data = this->i->read(len);		HX_STACK_VAR(shape_data,"shape_data");
	HX_STACK_LINE(1005)
	Dynamic glyphs = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(glyphs,"glyphs");
	HX_STACK_LINE(1006)
	if (((offsets->length == (int)0))){
		HX_STACK_LINE(1007)
		return glyphs;
	}
	HX_STACK_LINE(1009)
	{
		HX_STACK_LINE(1009)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1009)
		while((true)){
			HX_STACK_LINE(1009)
			if ((!(((_g < offsets->length))))){
				HX_STACK_LINE(1009)
				break;
			}
			HX_STACK_LINE(1009)
			int offs = offsets->__get(_g);		HX_STACK_VAR(offs,"offs");
			HX_STACK_LINE(1009)
			++(_g);
			HX_STACK_LINE(1010)
			::haxe::io::Input old_i = this->i;		HX_STACK_VAR(old_i,"old_i");
			HX_STACK_LINE(1011)
			::format::tools::BitsInput old_bits = this->bits;		HX_STACK_VAR(old_bits,"old_bits");
			HX_STACK_LINE(1012)
			::haxe::io::BytesInput _g1 = ::haxe::io::BytesInput_obj::__new(shape_data,offs,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1012)
			this->i = _g1;
			HX_STACK_LINE(1013)
			::format::tools::BitsInput _g11 = ::format::tools::BitsInput_obj::__new(this->i);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1013)
			this->bits = _g11;
			HX_STACK_LINE(1015)
			Dynamic _g2 = this->readShapeWithoutStyle((int)1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1015)
			glyphs->__Field(HX_CSTRING("push"),true)(_g2);
			HX_STACK_LINE(1017)
			this->i = old_i;
			HX_STACK_LINE(1018)
			this->bits = old_bits;
		}
	}
	HX_STACK_LINE(1021)
	return glyphs;
}


HX_DEFINE_DYNAMIC_FUNC2(Reader_obj,readGlyphs,return )

Dynamic Reader_obj::readKerningRecord( bool hasWideCodes){
	HX_STACK_FRAME("format.swf.Reader","readKerningRecord",0x1d093fbf,"format.swf.Reader.readKerningRecord","format/swf/Reader.hx",1024,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hasWideCodes,"hasWideCodes")
	HX_STACK_LINE(1026)
	int _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1026)
	if ((hasWideCodes)){
		HX_STACK_LINE(1026)
		_g = this->i->readUInt16();
	}
	else{
		HX_STACK_LINE(1026)
		_g = this->i->readByte();
	}
	HX_STACK_LINE(1027)
	int _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1027)
	if ((hasWideCodes)){
		HX_STACK_LINE(1027)
		_g1 = this->i->readUInt16();
	}
	else{
		HX_STACK_LINE(1027)
		_g1 = this->i->readByte();
	}
	HX_STACK_LINE(1028)
	int _g2 = this->i->readInt16();		HX_STACK_VAR(_g2,"_g2");
	struct _Function_1_1{
		inline static Dynamic Block( int &_g1,int &_g,int &_g2){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",1025,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("charCode1") , _g,false);
				__result->Add(HX_CSTRING("charCode2") , _g1,false);
				__result->Add(HX_CSTRING("adjust") , _g2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(1025)
	return _Function_1_1::Block(_g1,_g,_g2);
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readKerningRecord,return )

::format::swf::FontData Reader_obj::readFont1Data( int len){
	HX_STACK_FRAME("format.swf.Reader","readFont1Data",0xb9f1530e,"format.swf.Reader.readFont1Data","format/swf/Reader.hx",1032,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(1033)
	int offs1 = this->i->readUInt16();		HX_STACK_VAR(offs1,"offs1");
	HX_STACK_LINE(1034)
	int num_glyphs = (int(offs1) >> int((int)1));		HX_STACK_VAR(num_glyphs,"num_glyphs");
	HX_STACK_LINE(1036)
	Array< int > offset_table = Array_obj< int >::__new();		HX_STACK_VAR(offset_table,"offset_table");
	HX_STACK_LINE(1038)
	offset_table->push((int)0);
	HX_STACK_LINE(1039)
	{
		HX_STACK_LINE(1039)
		int _g = (int)1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1039)
		while((true)){
			HX_STACK_LINE(1039)
			if ((!(((_g < num_glyphs))))){
				HX_STACK_LINE(1039)
				break;
			}
			HX_STACK_LINE(1039)
			int j = (_g)++;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1040)
			int _g1 = this->i->readUInt16();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1040)
			int _g11 = (_g1 - offs1);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1040)
			offset_table->push(_g11);
		}
	}
	HX_STACK_LINE(1043)
	Dynamic _g2 = this->readGlyphs(((len - (int)2) - (num_glyphs * (int)2)),offset_table);		HX_STACK_VAR(_g2,"_g2");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &_g2){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",1042,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("glyphs") , _g2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(1042)
	Dynamic _g3 = _Function_1_1::Block(_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(1042)
	return ::format::swf::FontData_obj::FDFont1(_g3);
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readFont1Data,return )

::format::swf::FontData Reader_obj::readFont2Data( int ver){
	HX_STACK_FRAME("format.swf.Reader","readFont2Data",0x4d57e78f,"format.swf.Reader.readFont2Data","format/swf/Reader.hx",1047,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ver,"ver")
	HX_STACK_LINE(1048)
	this->bits->nbits = (int)0;
	HX_STACK_LINE(1049)
	bool hasLayout = this->bits->readBit();		HX_STACK_VAR(hasLayout,"hasLayout");
	HX_STACK_LINE(1050)
	bool shiftJIS = this->bits->readBit();		HX_STACK_VAR(shiftJIS,"shiftJIS");
	HX_STACK_LINE(1051)
	bool isSmall = this->bits->readBit();		HX_STACK_VAR(isSmall,"isSmall");
	HX_STACK_LINE(1052)
	bool isANSI = this->bits->readBit();		HX_STACK_VAR(isANSI,"isANSI");
	HX_STACK_LINE(1053)
	bool hasWideOffsets = this->bits->readBit();		HX_STACK_VAR(hasWideOffsets,"hasWideOffsets");
	HX_STACK_LINE(1054)
	bool hasWideCodes = this->bits->readBit();		HX_STACK_VAR(hasWideCodes,"hasWideCodes");
	HX_STACK_LINE(1055)
	bool isItalic = this->bits->readBit();		HX_STACK_VAR(isItalic,"isItalic");
	HX_STACK_LINE(1056)
	bool isBold = this->bits->readBit();		HX_STACK_VAR(isBold,"isBold");
	HX_STACK_LINE(1058)
	::format::swf::LangCode language = this->readLanguage();		HX_STACK_VAR(language,"language");
	HX_STACK_LINE(1059)
	int _g = this->i->readByte();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1059)
	::String name = this->i->readString(_g);		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(1060)
	int num_glyphs = this->i->readUInt16();		HX_STACK_VAR(num_glyphs,"num_glyphs");
	HX_STACK_LINE(1062)
	Array< int > offset_table = Array_obj< int >::__new();		HX_STACK_VAR(offset_table,"offset_table");
	HX_STACK_LINE(1063)
	int shape_data_length = (int)0;		HX_STACK_VAR(shape_data_length,"shape_data_length");
	HX_STACK_LINE(1064)
	if ((hasWideOffsets)){
		HX_STACK_LINE(1065)
		int first_glyph_offset = ((num_glyphs * (int)4) + (int)4);		HX_STACK_VAR(first_glyph_offset,"first_glyph_offset");
		HX_STACK_LINE(1067)
		{
			HX_STACK_LINE(1067)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1067)
			while((true)){
				HX_STACK_LINE(1067)
				if ((!(((_g1 < num_glyphs))))){
					HX_STACK_LINE(1067)
					break;
				}
				HX_STACK_LINE(1067)
				int j = (_g1)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(1068)
				int _g11 = this->i->readInt32();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1068)
				int _g2 = (_g11 - first_glyph_offset);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1068)
				offset_table->push(_g2);
			}
		}
		HX_STACK_LINE(1070)
		if (((num_glyphs > (int)0))){
			HX_STACK_LINE(1071)
			int code_table_offset = this->i->readInt32();		HX_STACK_VAR(code_table_offset,"code_table_offset");
			HX_STACK_LINE(1072)
			shape_data_length = (code_table_offset - first_glyph_offset);
		}
	}
	else{
		HX_STACK_LINE(1076)
		int first_glyph_offset = ((num_glyphs * (int)2) + (int)2);		HX_STACK_VAR(first_glyph_offset,"first_glyph_offset");
		HX_STACK_LINE(1077)
		{
			HX_STACK_LINE(1077)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1077)
			while((true)){
				HX_STACK_LINE(1077)
				if ((!(((_g1 < num_glyphs))))){
					HX_STACK_LINE(1077)
					break;
				}
				HX_STACK_LINE(1077)
				int j = (_g1)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(1078)
				int offs = this->i->readUInt16();		HX_STACK_VAR(offs,"offs");
				HX_STACK_LINE(1079)
				offset_table->push((offs - first_glyph_offset));
			}
		}
		HX_STACK_LINE(1082)
		if (((num_glyphs > (int)0))){
			HX_STACK_LINE(1083)
			int code_table_offset = this->i->readUInt16();		HX_STACK_VAR(code_table_offset,"code_table_offset");
			HX_STACK_LINE(1084)
			shape_data_length = (code_table_offset - first_glyph_offset);
		}
	}
	HX_STACK_LINE(1088)
	Dynamic glyph_shapes = this->readGlyphs(shape_data_length,offset_table);		HX_STACK_VAR(glyph_shapes,"glyph_shapes");
	HX_STACK_LINE(1089)
	Dynamic glyphs = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(glyphs,"glyphs");
	HX_STACK_LINE(1091)
	if ((hasWideCodes)){
		HX_STACK_LINE(1092)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1092)
		while((true)){
			HX_STACK_LINE(1092)
			if ((!(((_g1 < num_glyphs))))){
				HX_STACK_LINE(1092)
				break;
			}
			HX_STACK_LINE(1092)
			int j = (_g1)++;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1094)
			int _g3 = this->i->readUInt16();		HX_STACK_VAR(_g3,"_g3");
			struct _Function_3_1{
				inline static Dynamic Block( int &j,Dynamic &glyph_shapes,int &_g3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",1093,0x866e6cd6)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("charCode") , _g3,false);
						__result->Add(HX_CSTRING("shape") , glyph_shapes->__GetItem(j),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(1093)
			Dynamic _g4 = _Function_3_1::Block(j,glyph_shapes,_g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1093)
			glyphs->__Field(HX_CSTRING("push"),true)(_g4);
		}
	}
	else{
		HX_STACK_LINE(1099)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1099)
		while((true)){
			HX_STACK_LINE(1099)
			if ((!(((_g1 < num_glyphs))))){
				HX_STACK_LINE(1099)
				break;
			}
			HX_STACK_LINE(1099)
			int j = (_g1)++;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1101)
			int _g5 = this->i->readByte();		HX_STACK_VAR(_g5,"_g5");
			struct _Function_3_1{
				inline static Dynamic Block( int &_g5,int &j,Dynamic &glyph_shapes){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",1100,0x866e6cd6)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("charCode") , _g5,false);
						__result->Add(HX_CSTRING("shape") , glyph_shapes->__GetItem(j),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(1100)
			Dynamic _g6 = _Function_3_1::Block(_g5,j,glyph_shapes);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1100)
			glyphs->__Field(HX_CSTRING("push"),true)(_g6);
		}
	}
	HX_STACK_LINE(1106)
	Dynamic layout = null();		HX_STACK_VAR(layout,"layout");
	HX_STACK_LINE(1107)
	if ((hasLayout)){
		HX_STACK_LINE(1108)
		int ascent = this->i->readInt16();		HX_STACK_VAR(ascent,"ascent");
		HX_STACK_LINE(1109)
		int descent = this->i->readInt16();		HX_STACK_VAR(descent,"descent");
		HX_STACK_LINE(1110)
		int leading = this->i->readInt16();		HX_STACK_VAR(leading,"leading");
		HX_STACK_LINE(1112)
		Array< int > advance_table = Array_obj< int >::__new();		HX_STACK_VAR(advance_table,"advance_table");
		HX_STACK_LINE(1113)
		{
			HX_STACK_LINE(1113)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1113)
			while((true)){
				HX_STACK_LINE(1113)
				if ((!(((_g1 < num_glyphs))))){
					HX_STACK_LINE(1113)
					break;
				}
				HX_STACK_LINE(1113)
				int j = (_g1)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(1114)
				int _g7 = this->i->readInt16();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(1114)
				advance_table->push(_g7);
			}
		}
		HX_STACK_LINE(1116)
		Dynamic glyph_layout = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(glyph_layout,"glyph_layout");
		HX_STACK_LINE(1117)
		{
			HX_STACK_LINE(1117)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1117)
			while((true)){
				HX_STACK_LINE(1117)
				if ((!(((_g1 < num_glyphs))))){
					HX_STACK_LINE(1117)
					break;
				}
				HX_STACK_LINE(1117)
				int j = (_g1)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(1118)
				Dynamic bounds = this->readRect();		HX_STACK_VAR(bounds,"bounds");
				struct _Function_4_1{
					inline static Dynamic Block( Array< int > &advance_table,int &j,Dynamic &bounds){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",1120,0x866e6cd6)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("advance") , advance_table->__get(j),false);
							__result->Add(HX_CSTRING("bounds") , bounds,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(1120)
				glyph_layout->__Field(HX_CSTRING("push"),true)(_Function_4_1::Block(advance_table,j,bounds));
			}
		}
		HX_STACK_LINE(1126)
		int num_kerning = this->i->readUInt16();		HX_STACK_VAR(num_kerning,"num_kerning");
		HX_STACK_LINE(1127)
		Dynamic kerning = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(kerning,"kerning");
		HX_STACK_LINE(1128)
		{
			HX_STACK_LINE(1128)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1128)
			while((true)){
				HX_STACK_LINE(1128)
				if ((!(((_g1 < num_kerning))))){
					HX_STACK_LINE(1128)
					break;
				}
				HX_STACK_LINE(1128)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1129)
				Dynamic _g8 = this->readKerningRecord(hasWideCodes);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(1129)
				kerning->__Field(HX_CSTRING("push"),true)(_g8);
			}
		}
		struct _Function_2_1{
			inline static Dynamic Block( int &leading,Dynamic &glyph_layout,int &ascent,Dynamic &kerning,int &descent){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",1131,0x866e6cd6)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("ascent") , ascent,false);
					__result->Add(HX_CSTRING("descent") , descent,false);
					__result->Add(HX_CSTRING("leading") , leading,false);
					__result->Add(HX_CSTRING("glyphs") , glyph_layout,false);
					__result->Add(HX_CSTRING("kerning") , kerning,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1131)
		layout = _Function_2_1::Block(leading,glyph_layout,ascent,kerning,descent);
	}
	struct _Function_1_1{
		inline static Dynamic Block( bool &isSmall,::format::swf::LangCode &language,Dynamic &layout,bool &isItalic,bool &isANSI,bool &shiftJIS,Dynamic &glyphs,bool &isBold,::String &name){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",1140,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("shiftJIS") , shiftJIS,false);
				__result->Add(HX_CSTRING("isSmall") , isSmall,false);
				__result->Add(HX_CSTRING("isANSI") , isANSI,false);
				__result->Add(HX_CSTRING("isItalic") , isItalic,false);
				__result->Add(HX_CSTRING("isBold") , isBold,false);
				__result->Add(HX_CSTRING("language") , language,false);
				__result->Add(HX_CSTRING("name") , name,false);
				__result->Add(HX_CSTRING("glyphs") , glyphs,false);
				__result->Add(HX_CSTRING("layout") , layout,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(1140)
	Dynamic f2data = _Function_1_1::Block(isSmall,language,layout,isItalic,isANSI,shiftJIS,glyphs,isBold,name);		HX_STACK_VAR(f2data,"f2data");
	HX_STACK_LINE(1152)
	switch( (int)(ver)){
		case (int)2: {
			HX_STACK_LINE(1153)
			return ::format::swf::FontData_obj::FDFont2(hasWideCodes,f2data);
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(1154)
			return ::format::swf::FontData_obj::FDFont3(f2data);
		}
		;break;
		default: {
			HX_STACK_LINE(1155)
			HX_STACK_DO_THROW(this->error());
		}
	}
	HX_STACK_LINE(1152)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readFont2Data,return )

::format::swf::SWFTag Reader_obj::readFont( int len,int ver){
	HX_STACK_FRAME("format.swf.Reader","readFont",0x618e14cd,"format.swf.Reader.readFont","format/swf/Reader.hx",1159,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_ARG(ver,"ver")
	HX_STACK_LINE(1160)
	int cid = this->i->readUInt16();		HX_STACK_VAR(cid,"cid");
	HX_STACK_LINE(1162)
	::format::swf::FontData _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1162)
	switch( (int)(ver)){
		case (int)1: {
			HX_STACK_LINE(1164)
			_g = this->readFont1Data(len);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1167)
			_g = this->readFont2Data(ver);
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(1170)
			_g = this->readFont2Data(ver);
		}
		;break;
		default: {
			HX_STACK_LINE(1173)
			HX_STACK_DO_THROW(this->error());
		}
	}
	HX_STACK_LINE(1162)
	return ::format::swf::SWFTag_obj::TFont(cid,_g);
}


HX_DEFINE_DYNAMIC_FUNC2(Reader_obj,readFont,return )

::format::swf::SWFTag Reader_obj::readFontInfo( int len,int ver){
	HX_STACK_FRAME("format.swf.Reader","readFontInfo",0x7de163db,"format.swf.Reader.readFontInfo","format/swf/Reader.hx",1177,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_ARG(ver,"ver")
	HX_STACK_LINE(1178)
	int cid = this->i->readUInt16();		HX_STACK_VAR(cid,"cid");
	HX_STACK_LINE(1179)
	int _g = this->i->readByte();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1179)
	::String name = this->i->readString(_g);		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(1181)
	this->bits->nbits = (int)0;
	HX_STACK_LINE(1182)
	this->bits->readBits((int)2);
	HX_STACK_LINE(1183)
	bool isSmall = this->bits->readBit();		HX_STACK_VAR(isSmall,"isSmall");
	HX_STACK_LINE(1184)
	bool shiftJIS = this->bits->readBit();		HX_STACK_VAR(shiftJIS,"shiftJIS");
	HX_STACK_LINE(1185)
	bool isANSI = this->bits->readBit();		HX_STACK_VAR(isANSI,"isANSI");
	HX_STACK_LINE(1186)
	bool isItalic = this->bits->readBit();		HX_STACK_VAR(isItalic,"isItalic");
	HX_STACK_LINE(1187)
	bool isBold = this->bits->readBit();		HX_STACK_VAR(isBold,"isBold");
	HX_STACK_LINE(1188)
	bool hasWideCodes = this->bits->readBit();		HX_STACK_VAR(hasWideCodes,"hasWideCodes");
	HX_STACK_LINE(1189)
	::format::swf::LangCode language;		HX_STACK_VAR(language,"language");
	HX_STACK_LINE(1189)
	if (((ver == (int)2))){
		HX_STACK_LINE(1189)
		language = this->readLanguage();
	}
	else{
		HX_STACK_LINE(1189)
		language = ::format::swf::LangCode_obj::LCNone;
	}
	HX_STACK_LINE(1191)
	int num_glyphs = ((len - (int)4) - name.length);		HX_STACK_VAR(num_glyphs,"num_glyphs");
	HX_STACK_LINE(1192)
	Array< int > code_table = Array_obj< int >::__new();		HX_STACK_VAR(code_table,"code_table");
	HX_STACK_LINE(1194)
	if ((hasWideCodes)){
		HX_STACK_LINE(1195)
		hx::ShrEq(num_glyphs,(int)1);
		HX_STACK_LINE(1196)
		{
			HX_STACK_LINE(1196)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1196)
			while((true)){
				HX_STACK_LINE(1196)
				if ((!(((_g1 < num_glyphs))))){
					HX_STACK_LINE(1196)
					break;
				}
				HX_STACK_LINE(1196)
				int j = (_g1)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(1197)
				int _g11 = this->i->readUInt16();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1197)
				code_table->push(_g11);
			}
		}
	}
	else{
		HX_STACK_LINE(1200)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1200)
		while((true)){
			HX_STACK_LINE(1200)
			if ((!(((_g1 < num_glyphs))))){
				HX_STACK_LINE(1200)
				break;
			}
			HX_STACK_LINE(1200)
			int j = (_g1)++;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(1201)
			int _g2 = this->i->readByte();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1201)
			code_table->push(_g2);
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( bool &isSmall,Array< int > &code_table,bool &isItalic,bool &isBold,::String &name){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",1204,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("name") , name,false);
				__result->Add(HX_CSTRING("isSmall") , isSmall,false);
				__result->Add(HX_CSTRING("isItalic") , isItalic,false);
				__result->Add(HX_CSTRING("isBold") , isBold,false);
				__result->Add(HX_CSTRING("codeTable") , code_table,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(1204)
	Dynamic fi_data = _Function_1_1::Block(isSmall,code_table,isItalic,isBold,name);		HX_STACK_VAR(fi_data,"fi_data");
	HX_STACK_LINE(1212)
	::format::swf::FontInfoData _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(1212)
	switch( (int)(ver)){
		case (int)1: {
			HX_STACK_LINE(1213)
			_g3 = ::format::swf::FontInfoData_obj::FIDFont1(shiftJIS,isANSI,hasWideCodes,fi_data);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1214)
			_g3 = ::format::swf::FontInfoData_obj::FIDFont2(language,fi_data);
		}
		;break;
		default: {
			HX_STACK_LINE(1215)
			HX_STACK_DO_THROW(this->error());
		}
	}
	HX_STACK_LINE(1212)
	return ::format::swf::SWFTag_obj::TFontInfo(cid,_g3);
}


HX_DEFINE_DYNAMIC_FUNC2(Reader_obj,readFontInfo,return )

::format::swf::SWFTag Reader_obj::readTag( ){
	HX_STACK_FRAME("format.swf.Reader","readTag",0x0f670d1c,"format.swf.Reader.readTag","format/swf/Reader.hx",1219,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1220)
	int h = this->i->readUInt16();		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(1221)
	int id = (int(h) >> int((int)6));		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(1222)
	int len = (int(h) & int((int)63));		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(1223)
	bool ext = false;		HX_STACK_VAR(ext,"ext");
	HX_STACK_LINE(1224)
	if (((len == (int)63))){
		HX_STACK_LINE(1225)
		int _g = this->i->readInt32();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1225)
		len = _g;
		HX_STACK_LINE(1226)
		if (((len < (int)63))){
			HX_STACK_LINE(1226)
			ext = true;
		}
	}
	HX_STACK_LINE(1235)
	::haxe::io::Input old_i = this->i;		HX_STACK_VAR(old_i,"old_i");
	HX_STACK_LINE(1236)
	::format::tools::BitsInput old_bits = this->bits;		HX_STACK_VAR(old_bits,"old_bits");
	HX_STACK_LINE(1237)
	::haxe::io::Bytes _g1 = this->i->read(len);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1237)
	::haxe::io::BytesInput _g2 = ::haxe::io::BytesInput_obj::__new(_g1,null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1237)
	this->i = _g2;
	HX_STACK_LINE(1238)
	::format::tools::BitsInput _g3 = ::format::tools::BitsInput_obj::__new(this->i);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(1238)
	this->bits = _g3;
	HX_STACK_LINE(1240)
	::format::swf::SWFTag tag;		HX_STACK_VAR(tag,"tag");
	HX_STACK_LINE(1240)
	switch( (int)(id)){
		case (int)0: {
			HX_STACK_LINE(1242)
			tag = null();
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(1244)
			tag = ::format::swf::SWFTag_obj::TShowFrame;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1246)
			tag = this->readShape(len,(int)1);
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(1248)
			tag = this->readShape(len,(int)2);
		}
		;break;
		case (int)32: {
			HX_STACK_LINE(1250)
			tag = this->readShape(len,(int)3);
		}
		;break;
		case (int)83: {
			HX_STACK_LINE(1252)
			tag = this->readShape(len,(int)4);
		}
		;break;
		case (int)46: {
			HX_STACK_LINE(1254)
			tag = this->readMorphShape((int)1);
		}
		;break;
		case (int)84: {
			HX_STACK_LINE(1256)
			tag = this->readMorphShape((int)2);
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(1259)
			tag = this->readFont(len,(int)1);
		}
		;break;
		case (int)48: {
			HX_STACK_LINE(1261)
			tag = this->readFont(len,(int)2);
		}
		;break;
		case (int)75: {
			HX_STACK_LINE(1263)
			tag = this->readFont(len,(int)3);
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(1265)
			tag = this->readFontInfo(len,(int)1);
		}
		;break;
		case (int)62: {
			HX_STACK_LINE(1267)
			tag = this->readFontInfo(len,(int)2);
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(1270)
			this->i->set_bigEndian(true);
			HX_STACK_LINE(1271)
			int color = this->i->readUInt24();		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(1272)
			this->i->set_bigEndian(false);
			HX_STACK_LINE(1273)
			tag = ::format::swf::SWFTag_obj::TBackgroundColor(color);
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(1275)
			Dynamic _g4 = this->readLossless(len,false);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1275)
			tag = ::format::swf::SWFTag_obj::TBitsLossless(_g4);
		}
		;break;
		case (int)36: {
			HX_STACK_LINE(1277)
			Dynamic _g5 = this->readLossless(len,true);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1277)
			tag = ::format::swf::SWFTag_obj::TBitsLossless2(_g5);
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(1279)
			::haxe::io::Bytes _g6 = this->i->read(len);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1279)
			tag = ::format::swf::SWFTag_obj::TJPEGTables(_g6);
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(1281)
			int cid = this->i->readUInt16();		HX_STACK_VAR(cid,"cid");
			HX_STACK_LINE(1282)
			::haxe::io::Bytes _g7 = this->i->read((len - (int)2));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(1282)
			::format::swf::JPEGData _g8 = ::format::swf::JPEGData_obj::JDJPEG1(_g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(1282)
			tag = ::format::swf::SWFTag_obj::TBitsJPEG(cid,_g8);
		}
		;break;
		case (int)21: {
			HX_STACK_LINE(1284)
			int cid = this->i->readUInt16();		HX_STACK_VAR(cid,"cid");
			HX_STACK_LINE(1285)
			::haxe::io::Bytes _g9 = this->i->read((len - (int)2));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(1285)
			::format::swf::JPEGData _g10 = ::format::swf::JPEGData_obj::JDJPEG2(_g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(1285)
			tag = ::format::swf::SWFTag_obj::TBitsJPEG(cid,_g10);
		}
		;break;
		case (int)35: {
			HX_STACK_LINE(1287)
			int cid = this->i->readUInt16();		HX_STACK_VAR(cid,"cid");
			HX_STACK_LINE(1288)
			int dataSize = this->i->readInt32();		HX_STACK_VAR(dataSize,"dataSize");
			HX_STACK_LINE(1289)
			::haxe::io::Bytes data = this->i->read(dataSize);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1290)
			::haxe::io::Bytes mask = this->i->read(((len - dataSize) - (int)6));		HX_STACK_VAR(mask,"mask");
			HX_STACK_LINE(1291)
			::format::swf::JPEGData _g11 = ::format::swf::JPEGData_obj::JDJPEG3(data,mask);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1291)
			tag = ::format::swf::SWFTag_obj::TBitsJPEG(cid,_g11);
		}
		;break;
		case (int)26: {
			HX_STACK_LINE(1293)
			::format::swf::PlaceObject _g12 = this->readPlaceObject(false);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(1293)
			tag = ::format::swf::SWFTag_obj::TPlaceObject2(_g12);
		}
		;break;
		case (int)70: {
			HX_STACK_LINE(1295)
			::format::swf::PlaceObject _g13 = this->readPlaceObject(true);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(1295)
			tag = ::format::swf::SWFTag_obj::TPlaceObject3(_g13);
		}
		;break;
		case (int)28: {
			HX_STACK_LINE(1297)
			int _g14 = this->i->readUInt16();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(1297)
			tag = ::format::swf::SWFTag_obj::TRemoveObject2(_g14);
		}
		;break;
		case (int)39: {
			HX_STACK_LINE(1299)
			int cid = this->i->readUInt16();		HX_STACK_VAR(cid,"cid");
			HX_STACK_LINE(1300)
			int fcount = this->i->readUInt16();		HX_STACK_VAR(fcount,"fcount");
			HX_STACK_LINE(1301)
			Array< ::Dynamic > tags = this->readTagList();		HX_STACK_VAR(tags,"tags");
			HX_STACK_LINE(1302)
			tag = ::format::swf::SWFTag_obj::TClip(cid,fcount,tags);
		}
		;break;
		case (int)43: {
			HX_STACK_LINE(1304)
			::haxe::io::Bytes label = this->readUTF8Bytes();		HX_STACK_VAR(label,"label");
			HX_STACK_LINE(1305)
			bool anchor;		HX_STACK_VAR(anchor,"anchor");
			HX_STACK_LINE(1305)
			if (((len == (label->length + (int)2)))){
				HX_STACK_LINE(1305)
				int _g15 = this->i->readByte();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(1305)
				anchor = (_g15 == (int)1);
			}
			else{
				HX_STACK_LINE(1305)
				anchor = false;
			}
			HX_STACK_LINE(1306)
			::String _g16 = label->toString();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(1306)
			tag = ::format::swf::SWFTag_obj::TFrameLabel(_g16,anchor);
		}
		;break;
		case (int)56: {
			HX_STACK_LINE(1308)
			Dynamic exports = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(exports,"exports");
			HX_STACK_LINE(1309)
			{
				HX_STACK_LINE(1309)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1309)
				int _g = this->i->readUInt16();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1309)
				while((true)){
					HX_STACK_LINE(1309)
					if ((!(((_g11 < _g))))){
						HX_STACK_LINE(1309)
						break;
					}
					HX_STACK_LINE(1309)
					int n = (_g11)++;		HX_STACK_VAR(n,"n");
					HX_STACK_LINE(1310)
					int cid = this->i->readUInt16();		HX_STACK_VAR(cid,"cid");
					HX_STACK_LINE(1311)
					::String name = this->readUTF8Bytes()->toString();		HX_STACK_VAR(name,"name");
					struct _Function_4_1{
						inline static Dynamic Block( int &cid,::String &name){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",1312,0x866e6cd6)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("cid") , cid,false);
								__result->Add(HX_CSTRING("name") , name,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(1312)
					exports->__Field(HX_CSTRING("push"),true)(_Function_4_1::Block(cid,name));
				}
			}
			HX_STACK_LINE(1314)
			tag = ::format::swf::SWFTag_obj::TExport(exports);
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(1316)
			::haxe::io::Bytes _g17 = this->i->read(len);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(1316)
			tag = ::format::swf::SWFTag_obj::TDoActions(_g17);
		}
		;break;
		case (int)59: {
			HX_STACK_LINE(1318)
			int cid = this->i->readUInt16();		HX_STACK_VAR(cid,"cid");
			HX_STACK_LINE(1319)
			::haxe::io::Bytes _g18 = this->i->read((len - (int)2));		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(1319)
			tag = ::format::swf::SWFTag_obj::TDoInitActions(cid,_g18);
		}
		;break;
		case (int)69: {
			HX_STACK_LINE(1321)
			this->bits->nbits = (int)0;
			HX_STACK_LINE(1322)
			this->bits->readBit();
			HX_STACK_LINE(1323)
			bool useDirectBlit = this->bits->readBit();		HX_STACK_VAR(useDirectBlit,"useDirectBlit");
			HX_STACK_LINE(1324)
			bool useGpu = this->bits->readBit();		HX_STACK_VAR(useGpu,"useGpu");
			HX_STACK_LINE(1325)
			bool hasMeta = this->bits->readBit();		HX_STACK_VAR(hasMeta,"hasMeta");
			HX_STACK_LINE(1326)
			bool useAs3 = this->bits->readBit();		HX_STACK_VAR(useAs3,"useAs3");
			HX_STACK_LINE(1327)
			this->bits->readBits((int)2);
			HX_STACK_LINE(1328)
			bool useNetwork = this->bits->readBit();		HX_STACK_VAR(useNetwork,"useNetwork");
			HX_STACK_LINE(1329)
			this->bits->readBits((int)24);
			HX_STACK_LINE(1330)
			tag = ::format::swf::SWFTag_obj::TSandBox(useDirectBlit,useGpu,hasMeta,useAs3,useNetwork);
		}
		;break;
		case (int)72: {
			HX_STACK_LINE(1332)
			::haxe::io::Bytes _g19 = this->i->read(len);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(1332)
			tag = ::format::swf::SWFTag_obj::TActionScript3(_g19,null());
		}
		;break;
		case (int)76: {
			HX_STACK_LINE(1334)
			Dynamic _g20 = this->readSymbols();		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(1334)
			tag = ::format::swf::SWFTag_obj::TSymbolClass(_g20);
		}
		;break;
		case (int)82: {
			HX_STACK_LINE(1339)
			int _g21 = this->i->readInt32();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(1340)
			::String _g22 = this->i->readUntil((int)0);		HX_STACK_VAR(_g22,"_g22");
			struct _Function_2_1{
				inline static Dynamic Block( ::String &_g22,int &_g21){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",1338,0x866e6cd6)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("id") , _g21,false);
						__result->Add(HX_CSTRING("label") , _g22,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(1338)
			Dynamic infos = _Function_2_1::Block(_g22,_g21);		HX_STACK_VAR(infos,"infos");
			HX_STACK_LINE(1342)
			hx::SubEq(len,(((int)4 + infos->__Field(HX_CSTRING("label"),true)->__Field(HX_CSTRING("length"),true)) + (int)1));
			HX_STACK_LINE(1343)
			::haxe::io::Bytes _g23 = this->i->read(len);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(1343)
			tag = ::format::swf::SWFTag_obj::TActionScript3(_g23,infos);
		}
		;break;
		case (int)87: {
			HX_STACK_LINE(1345)
			int id1 = this->i->readUInt16();		HX_STACK_VAR(id1,"id1");
			HX_STACK_LINE(1346)
			int _g24 = this->i->readInt32();		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(1346)
			if (((_g24 != (int)0))){
				HX_STACK_LINE(1346)
				HX_STACK_DO_THROW(this->error());
			}
			HX_STACK_LINE(1347)
			::haxe::io::Bytes _g25 = this->i->read((len - (int)6));		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(1347)
			tag = ::format::swf::SWFTag_obj::TBinaryData(id1,_g25);
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(1349)
			tag = this->readSound(len);
		}
		;break;
		default: {
			HX_STACK_LINE(1351)
			::haxe::io::Bytes data = this->i->read(len);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1352)
			tag = ::format::swf::SWFTag_obj::TUnknown(id,data);
		}
	}
	HX_STACK_LINE(1355)
	this->i = old_i;
	HX_STACK_LINE(1356)
	this->bits = old_bits;
	HX_STACK_LINE(1358)
	return tag;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readTag,return )

Dynamic Reader_obj::read( ){
	HX_STACK_FRAME("format.swf.Reader","read",0xce2243de,"format.swf.Reader.read","format/swf/Reader.hx",1361,0x866e6cd6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1363)
	Dynamic _g = this->readHeader();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1364)
	Array< ::Dynamic > _g1 = this->readTagList();		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static Dynamic Block( Array< ::Dynamic > &_g1,Dynamic &_g){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/swf/Reader.hx",1362,0x866e6cd6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("header") , _g,false);
				__result->Add(HX_CSTRING("tags") , _g1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(1362)
	return _Function_1_1::Block(_g1,_g);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,read,return )


Reader_obj::Reader_obj()
{
}

void Reader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Reader);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(bits,"bits");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(bitsRead,"bitsRead");
	HX_MARK_END_CLASS();
}

void Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(bits,"bits");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(bitsRead,"bitsRead");
}

Dynamic Reader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { return bits; }
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		if (HX_FIELD_EQ(inName,"readRGB") ) { return readRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"readCXA") ) { return readCXA_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"readTag") ) { return readTag_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bitsRead") ) { return bitsRead; }
		if (HX_FIELD_EQ(inName,"readRect") ) { return readRect_dyn(); }
		if (HX_FIELD_EQ(inName,"readRGBA") ) { return readRGBA_dyn(); }
		if (HX_FIELD_EQ(inName,"readFont") ) { return readFont_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readFixed") ) { return readFixed_dyn(); }
		if (HX_FIELD_EQ(inName,"readShape") ) { return readShape_dyn(); }
		if (HX_FIELD_EQ(inName,"readSound") ) { return readSound_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readFixed8") ) { return readFixed8_dyn(); }
		if (HX_FIELD_EQ(inName,"readMatrix") ) { return readMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"getLineCap") ) { return getLineCap_dyn(); }
		if (HX_FIELD_EQ(inName,"readFilter") ) { return readFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"readHeader") ) { return readHeader_dyn(); }
		if (HX_FIELD_EQ(inName,"readGlyphs") ) { return readGlyphs_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readFilters") ) { return readFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"readTagList") ) { return readTagList_dyn(); }
		if (HX_FIELD_EQ(inName,"readSymbols") ) { return readSymbols_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readCXAColor") ) { return readCXAColor_dyn(); }
		if (HX_FIELD_EQ(inName,"readGradient") ) { return readGradient_dyn(); }
		if (HX_FIELD_EQ(inName,"readLossless") ) { return readLossless_dyn(); }
		if (HX_FIELD_EQ(inName,"readLanguage") ) { return readLanguage_dyn(); }
		if (HX_FIELD_EQ(inName,"readFontInfo") ) { return readFontInfo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readUTF8Bytes") ) { return readUTF8Bytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readFillStyle") ) { return readFillStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"readBlendMode") ) { return readBlendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"readFont1Data") ) { return readFont1Data_dyn(); }
		if (HX_FIELD_EQ(inName,"readFont2Data") ) { return readFont2Data_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readMatrixPart") ) { return readMatrixPart_dyn(); }
		if (HX_FIELD_EQ(inName,"readLineStyles") ) { return readLineStyles_dyn(); }
		if (HX_FIELD_EQ(inName,"readFillStyles") ) { return readFillStyles_dyn(); }
		if (HX_FIELD_EQ(inName,"readClipEvents") ) { return readClipEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"readMorphShape") ) { return readMorphShape_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readFilterFlags") ) { return readFilterFlags_dyn(); }
		if (HX_FIELD_EQ(inName,"readPlaceObject") ) { return readPlaceObject_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readShapeRecords") ) { return readShapeRecords_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readMorphGradient") ) { return readMorphGradient_dyn(); }
		if (HX_FIELD_EQ(inName,"readKerningRecord") ) { return readKerningRecord_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"readShapeWithStyle") ) { return readShapeWithStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"readFilterGradient") ) { return readFilterGradient_dyn(); }
		if (HX_FIELD_EQ(inName,"readMorphGradients") ) { return readMorphGradients_dyn(); }
		if (HX_FIELD_EQ(inName,"readMorphFillStyle") ) { return readMorphFillStyle_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"readMorphFillStyles") ) { return readMorphFillStyles_dyn(); }
		if (HX_FIELD_EQ(inName,"readMorph1LineStyle") ) { return readMorph1LineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"readMorph2LineStyle") ) { return readMorph2LineStyle_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"readMorph1LineStyles") ) { return readMorph1LineStyles_dyn(); }
		if (HX_FIELD_EQ(inName,"readMorph2LineStyles") ) { return readMorph2LineStyles_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"readShapeWithoutStyle") ) { return readShapeWithoutStyle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Reader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< ::haxe::io::Input >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { bits=inValue.Cast< ::format::tools::BitsInput >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bitsRead") ) { bitsRead=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("i"));
	outFields->push(HX_CSTRING("bits"));
	outFields->push(HX_CSTRING("version"));
	outFields->push(HX_CSTRING("bitsRead"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(Reader_obj,i),HX_CSTRING("i")},
	{hx::fsObject /*::format::tools::BitsInput*/ ,(int)offsetof(Reader_obj,bits),HX_CSTRING("bits")},
	{hx::fsInt,(int)offsetof(Reader_obj,version),HX_CSTRING("version")},
	{hx::fsInt,(int)offsetof(Reader_obj,bitsRead),HX_CSTRING("bitsRead")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("i"),
	HX_CSTRING("bits"),
	HX_CSTRING("version"),
	HX_CSTRING("bitsRead"),
	HX_CSTRING("readFixed8"),
	HX_CSTRING("readFixed"),
	HX_CSTRING("readUTF8Bytes"),
	HX_CSTRING("readRect"),
	HX_CSTRING("readMatrixPart"),
	HX_CSTRING("readMatrix"),
	HX_CSTRING("readRGBA"),
	HX_CSTRING("readRGB"),
	HX_CSTRING("readCXAColor"),
	HX_CSTRING("readCXA"),
	HX_CSTRING("readGradient"),
	HX_CSTRING("getLineCap"),
	HX_CSTRING("readLineStyles"),
	HX_CSTRING("readFillStyle"),
	HX_CSTRING("readFillStyles"),
	HX_CSTRING("readShapeWithStyle"),
	HX_CSTRING("readShapeWithoutStyle"),
	HX_CSTRING("readShapeRecords"),
	HX_CSTRING("readInt"),
	HX_CSTRING("readClipEvents"),
	HX_CSTRING("readFilterFlags"),
	HX_CSTRING("readFilterGradient"),
	HX_CSTRING("readFilter"),
	HX_CSTRING("readFilters"),
	HX_CSTRING("error"),
	HX_CSTRING("readHeader"),
	HX_CSTRING("readTagList"),
	HX_CSTRING("readShape"),
	HX_CSTRING("readMorphGradient"),
	HX_CSTRING("readMorphGradients"),
	HX_CSTRING("readMorphFillStyle"),
	HX_CSTRING("readMorphFillStyles"),
	HX_CSTRING("readMorph1LineStyle"),
	HX_CSTRING("readMorph2LineStyle"),
	HX_CSTRING("readMorph1LineStyles"),
	HX_CSTRING("readMorph2LineStyles"),
	HX_CSTRING("readMorphShape"),
	HX_CSTRING("readBlendMode"),
	HX_CSTRING("readPlaceObject"),
	HX_CSTRING("readLossless"),
	HX_CSTRING("readSymbols"),
	HX_CSTRING("readSound"),
	HX_CSTRING("readLanguage"),
	HX_CSTRING("readGlyphs"),
	HX_CSTRING("readKerningRecord"),
	HX_CSTRING("readFont1Data"),
	HX_CSTRING("readFont2Data"),
	HX_CSTRING("readFont"),
	HX_CSTRING("readFontInfo"),
	HX_CSTRING("readTag"),
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.Reader"), hx::TCanCast< Reader_obj> ,sStaticFields,sMemberFields,
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
} // end namespace swf
