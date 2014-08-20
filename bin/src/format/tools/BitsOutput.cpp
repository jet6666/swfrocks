#include <hxcpp.h>

#ifndef INCLUDED_format_tools_BitsOutput
#include <format/tools/BitsOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
namespace format{
namespace tools{

Void BitsOutput_obj::__construct(::haxe::io::Output o)
{
HX_STACK_FRAME("format.tools.BitsOutput","new",0x8efecac3,"format.tools.BitsOutput.new","format/tools/BitsOutput.hx",35,0x8d95f60b)
HX_STACK_THIS(this)
HX_STACK_ARG(o,"o")
{
	HX_STACK_LINE(36)
	this->o = o;
	HX_STACK_LINE(37)
	this->nbits = (int)0;
	HX_STACK_LINE(38)
	this->bits = (int)0;
}
;
	return null();
}

//BitsOutput_obj::~BitsOutput_obj() { }

Dynamic BitsOutput_obj::__CreateEmpty() { return  new BitsOutput_obj; }
hx::ObjectPtr< BitsOutput_obj > BitsOutput_obj::__new(::haxe::io::Output o)
{  hx::ObjectPtr< BitsOutput_obj > result = new BitsOutput_obj();
	result->__construct(o);
	return result;}

Dynamic BitsOutput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitsOutput_obj > result = new BitsOutput_obj();
	result->__construct(inArgs[0]);
	return result;}

Void BitsOutput_obj::writeBits( int n,int v){
{
		HX_STACK_FRAME("format.tools.BitsOutput","writeBits",0x3eba5628,"format.tools.BitsOutput.writeBits","format/tools/BitsOutput.hx",41,0x8d95f60b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(43)
		v = (int(v) & int((((int((int)1) << int(n))) - (int)1)));
		HX_STACK_LINE(44)
		if ((((n + this->nbits) >= (int)32))){
			HX_STACK_LINE(45)
			if (((n >= (int)31))){
				HX_STACK_LINE(45)
				HX_STACK_DO_THROW(HX_CSTRING("Bits error"));
			}
			HX_STACK_LINE(46)
			int n2 = (((int)32 - this->nbits) - (int)1);		HX_STACK_VAR(n2,"n2");
			HX_STACK_LINE(47)
			int n3 = (n - n2);		HX_STACK_VAR(n3,"n3");
			HX_STACK_LINE(48)
			this->writeBits(n2,hx::UShr(v,n3));
			HX_STACK_LINE(49)
			this->writeBits(n3,(int(v) & int((((int((int)1) << int(n3))) - (int)1))));
			HX_STACK_LINE(50)
			return null();
		}
		HX_STACK_LINE(52)
		if (((n < (int)0))){
			HX_STACK_LINE(52)
			HX_STACK_DO_THROW(HX_CSTRING("Bits error"));
		}
		HX_STACK_LINE(55)
		this->bits = (int((int(this->bits) << int(n))) | int(v));
		HX_STACK_LINE(56)
		hx::AddEq(this->nbits,n);
		HX_STACK_LINE(57)
		while((true)){
			HX_STACK_LINE(57)
			if ((!(((this->nbits >= (int)8))))){
				HX_STACK_LINE(57)
				break;
			}
			HX_STACK_LINE(58)
			hx::SubEq(this->nbits,(int)8);
			HX_STACK_LINE(59)
			this->o->writeByte((int(hx::UShr(this->bits,this->nbits)) & int((int)255)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitsOutput_obj,writeBits,(void))

Void BitsOutput_obj::writeBit( bool flag){
{
		HX_STACK_FRAME("format.tools.BitsOutput","writeBit",0xfa8a97eb,"format.tools.BitsOutput.writeBit","format/tools/BitsOutput.hx",63,0x8d95f60b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flag,"flag")
		HX_STACK_LINE(64)
		hx::ShlEq(this->bits,(int)1);
		HX_STACK_LINE(65)
		if ((flag)){
			HX_STACK_LINE(65)
			hx::OrEq(this->bits,(int)1);
		}
		HX_STACK_LINE(66)
		(this->nbits)++;
		HX_STACK_LINE(67)
		if (((this->nbits == (int)8))){
			HX_STACK_LINE(68)
			this->nbits = (int)0;
			HX_STACK_LINE(69)
			this->o->writeByte((int(this->bits) & int((int)255)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitsOutput_obj,writeBit,(void))

Void BitsOutput_obj::flush( ){
{
		HX_STACK_FRAME("format.tools.BitsOutput","flush",0xcdc3fbe7,"format.tools.BitsOutput.flush","format/tools/BitsOutput.hx",74,0x8d95f60b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		if (((this->nbits > (int)0))){
			HX_STACK_LINE(75)
			this->writeBits(((int)8 - this->nbits),(int)0);
			HX_STACK_LINE(76)
			this->nbits = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitsOutput_obj,flush,(void))


BitsOutput_obj::BitsOutput_obj()
{
}

void BitsOutput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitsOutput);
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_MEMBER_NAME(nbits,"nbits");
	HX_MARK_MEMBER_NAME(bits,"bits");
	HX_MARK_END_CLASS();
}

void BitsOutput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(o,"o");
	HX_VISIT_MEMBER_NAME(nbits,"nbits");
	HX_VISIT_MEMBER_NAME(bits,"bits");
}

Dynamic BitsOutput_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { return o; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { return bits; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { return nbits; }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"writeBit") ) { return writeBit_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeBits") ) { return writeBits_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitsOutput_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< ::haxe::io::Output >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { bits=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { nbits=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitsOutput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("o"));
	outFields->push(HX_CSTRING("nbits"));
	outFields->push(HX_CSTRING("bits"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Output*/ ,(int)offsetof(BitsOutput_obj,o),HX_CSTRING("o")},
	{hx::fsInt,(int)offsetof(BitsOutput_obj,nbits),HX_CSTRING("nbits")},
	{hx::fsInt,(int)offsetof(BitsOutput_obj,bits),HX_CSTRING("bits")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("o"),
	HX_CSTRING("nbits"),
	HX_CSTRING("bits"),
	HX_CSTRING("writeBits"),
	HX_CSTRING("writeBit"),
	HX_CSTRING("flush"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitsOutput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitsOutput_obj::__mClass,"__mClass");
};

#endif

Class BitsOutput_obj::__mClass;

void BitsOutput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.tools.BitsOutput"), hx::TCanCast< BitsOutput_obj> ,sStaticFields,sMemberFields,
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

void BitsOutput_obj::__boot()
{
}

} // end namespace format
} // end namespace tools
