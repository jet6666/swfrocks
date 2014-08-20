#include <hxcpp.h>

#ifndef INCLUDED_format_tools_BitsInput
#include <format/tools/BitsInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace format{
namespace tools{

Void BitsInput_obj::__construct(::haxe::io::Input i)
{
HX_STACK_FRAME("format.tools.BitsInput","new",0x7a7265ac,"format.tools.BitsInput.new","format/tools/BitsInput.hx",35,0x82748506)
HX_STACK_THIS(this)
HX_STACK_ARG(i,"i")
{
	HX_STACK_LINE(36)
	this->i = i;
	HX_STACK_LINE(37)
	this->nbits = (int)0;
	HX_STACK_LINE(38)
	this->bits = (int)0;
}
;
	return null();
}

//BitsInput_obj::~BitsInput_obj() { }

Dynamic BitsInput_obj::__CreateEmpty() { return  new BitsInput_obj; }
hx::ObjectPtr< BitsInput_obj > BitsInput_obj::__new(::haxe::io::Input i)
{  hx::ObjectPtr< BitsInput_obj > result = new BitsInput_obj();
	result->__construct(i);
	return result;}

Dynamic BitsInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitsInput_obj > result = new BitsInput_obj();
	result->__construct(inArgs[0]);
	return result;}

int BitsInput_obj::readBits( int n){
	HX_STACK_FRAME("format.tools.BitsInput","readBits",0x12138cb0,"format.tools.BitsInput.readBits","format/tools/BitsInput.hx",41,0x82748506)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(42)
	if (((this->nbits >= n))){
		HX_STACK_LINE(43)
		int c = (this->nbits - n);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(44)
		int k = (int(hx::UShr(this->bits,c)) & int((((int((int)1) << int(n))) - (int)1)));		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(45)
		this->nbits = c;
		HX_STACK_LINE(46)
		return k;
	}
	HX_STACK_LINE(48)
	int k = this->i->readByte();		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(49)
	if (((this->nbits >= (int)24))){
		HX_STACK_LINE(50)
		if (((n >= (int)31))){
			HX_STACK_LINE(50)
			HX_STACK_DO_THROW(HX_CSTRING("Bits error"));
		}
		HX_STACK_LINE(51)
		int c = (((int)8 + this->nbits) - n);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(52)
		int d = (int(this->bits) & int((((int((int)1) << int(this->nbits))) - (int)1)));		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(53)
		d = (int((int(d) << int(((int)8 - c)))) | int((int(k) << int(c))));
		HX_STACK_LINE(54)
		this->bits = k;
		HX_STACK_LINE(55)
		this->nbits = c;
		HX_STACK_LINE(56)
		return d;
	}
	HX_STACK_LINE(58)
	this->bits = (int((int(this->bits) << int((int)8))) | int(k));
	HX_STACK_LINE(59)
	hx::AddEq(this->nbits,(int)8);
	HX_STACK_LINE(60)
	return this->readBits(n);
}


HX_DEFINE_DYNAMIC_FUNC1(BitsInput_obj,readBits,return )

bool BitsInput_obj::readBit( ){
	HX_STACK_FRAME("format.tools.BitsInput","readBit",0x5ac58a63,"format.tools.BitsInput.readBit","format/tools/BitsInput.hx",63,0x82748506)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	if (((this->nbits == (int)0))){
		HX_STACK_LINE(65)
		int _g = this->i->readByte();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		this->bits = _g;
		HX_STACK_LINE(66)
		this->nbits = (int)8;
	}
	HX_STACK_LINE(68)
	(this->nbits)--;
	HX_STACK_LINE(69)
	return (((int(hx::UShr(this->bits,this->nbits)) & int((int)1))) == (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(BitsInput_obj,readBit,return )

Void BitsInput_obj::reset( ){
{
		HX_STACK_FRAME("format.tools.BitsInput","reset",0x15afca1b,"format.tools.BitsInput.reset","format/tools/BitsInput.hx",73,0x82748506)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		this->nbits = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitsInput_obj,reset,(void))


BitsInput_obj::BitsInput_obj()
{
}

void BitsInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitsInput);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(nbits,"nbits");
	HX_MARK_MEMBER_NAME(bits,"bits");
	HX_MARK_END_CLASS();
}

void BitsInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(nbits,"nbits");
	HX_VISIT_MEMBER_NAME(bits,"bits");
}

Dynamic BitsInput_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { return bits; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { return nbits; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readBit") ) { return readBit_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readBits") ) { return readBits_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitsInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< ::haxe::io::Input >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { bits=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { nbits=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitsInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("i"));
	outFields->push(HX_CSTRING("nbits"));
	outFields->push(HX_CSTRING("bits"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(BitsInput_obj,i),HX_CSTRING("i")},
	{hx::fsInt,(int)offsetof(BitsInput_obj,nbits),HX_CSTRING("nbits")},
	{hx::fsInt,(int)offsetof(BitsInput_obj,bits),HX_CSTRING("bits")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("i"),
	HX_CSTRING("nbits"),
	HX_CSTRING("bits"),
	HX_CSTRING("readBits"),
	HX_CSTRING("readBit"),
	HX_CSTRING("reset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitsInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitsInput_obj::__mClass,"__mClass");
};

#endif

Class BitsInput_obj::__mClass;

void BitsInput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.tools.BitsInput"), hx::TCanCast< BitsInput_obj> ,sStaticFields,sMemberFields,
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

void BitsInput_obj::__boot()
{
}

} // end namespace format
} // end namespace tools
