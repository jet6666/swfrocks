#include <hxcpp.h>

#ifndef INCLUDED_format_abc_ABCData
#include <format/abc/ABCData.h>
#endif
#ifndef INCLUDED_format_abc_Index
#include <format/abc/Index.h>
#endif
#ifndef INCLUDED_format_abc_Name
#include <format/abc/Name.h>
#endif
#ifndef INCLUDED_format_abc_Namespace
#include <format/abc/Namespace.h>
#endif
namespace format{
namespace abc{

Void ABCData_obj::__construct()
{
HX_STACK_FRAME("format.abc.ABCData","new",0x2a506d3b,"format.abc.ABCData.new","format/abc/Data.hx",165,0x129e06af)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ABCData_obj::~ABCData_obj() { }

Dynamic ABCData_obj::__CreateEmpty() { return  new ABCData_obj; }
hx::ObjectPtr< ABCData_obj > ABCData_obj::__new()
{  hx::ObjectPtr< ABCData_obj > result = new ABCData_obj();
	result->__construct();
	return result;}

Dynamic ABCData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ABCData_obj > result = new ABCData_obj();
	result->__construct();
	return result;}

Dynamic ABCData_obj::get( Dynamic t,::format::abc::Index i){
	HX_STACK_FRAME("format.abc.ABCData","get",0x2a4b1d71,"format.abc.ABCData.get","format/abc/Data.hx",162,0x129e06af)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(162)
	{
		HX_STACK_LINE(162)
		int n = (::format::abc::Index(i))->__Param(0);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(162)
		return t->__GetItem((n - (int)1));
	}
	HX_STACK_LINE(162)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ABCData_obj,get,return )


ABCData_obj::ABCData_obj()
{
}

void ABCData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ABCData);
	HX_MARK_MEMBER_NAME(ints,"ints");
	HX_MARK_MEMBER_NAME(uints,"uints");
	HX_MARK_MEMBER_NAME(floats,"floats");
	HX_MARK_MEMBER_NAME(strings,"strings");
	HX_MARK_MEMBER_NAME(namespaces,"namespaces");
	HX_MARK_MEMBER_NAME(nssets,"nssets");
	HX_MARK_MEMBER_NAME(names,"names");
	HX_MARK_MEMBER_NAME(methodTypes,"methodTypes");
	HX_MARK_MEMBER_NAME(metadatas,"metadatas");
	HX_MARK_MEMBER_NAME(classes,"classes");
	HX_MARK_MEMBER_NAME(inits,"inits");
	HX_MARK_MEMBER_NAME(functions,"functions");
	HX_MARK_END_CLASS();
}

void ABCData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ints,"ints");
	HX_VISIT_MEMBER_NAME(uints,"uints");
	HX_VISIT_MEMBER_NAME(floats,"floats");
	HX_VISIT_MEMBER_NAME(strings,"strings");
	HX_VISIT_MEMBER_NAME(namespaces,"namespaces");
	HX_VISIT_MEMBER_NAME(nssets,"nssets");
	HX_VISIT_MEMBER_NAME(names,"names");
	HX_VISIT_MEMBER_NAME(methodTypes,"methodTypes");
	HX_VISIT_MEMBER_NAME(metadatas,"metadatas");
	HX_VISIT_MEMBER_NAME(classes,"classes");
	HX_VISIT_MEMBER_NAME(inits,"inits");
	HX_VISIT_MEMBER_NAME(functions,"functions");
}

Dynamic ABCData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ints") ) { return ints; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"uints") ) { return uints; }
		if (HX_FIELD_EQ(inName,"names") ) { return names; }
		if (HX_FIELD_EQ(inName,"inits") ) { return inits; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"floats") ) { return floats; }
		if (HX_FIELD_EQ(inName,"nssets") ) { return nssets; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"strings") ) { return strings; }
		if (HX_FIELD_EQ(inName,"classes") ) { return classes; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"metadatas") ) { return metadatas; }
		if (HX_FIELD_EQ(inName,"functions") ) { return functions; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"namespaces") ) { return namespaces; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"methodTypes") ) { return methodTypes; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ABCData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ints") ) { ints=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"uints") ) { uints=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"names") ) { names=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inits") ) { inits=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"floats") ) { floats=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nssets") ) { nssets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"strings") ) { strings=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"classes") ) { classes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"metadatas") ) { metadatas=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"functions") ) { functions=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"namespaces") ) { namespaces=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"methodTypes") ) { methodTypes=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ABCData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ints"));
	outFields->push(HX_CSTRING("uints"));
	outFields->push(HX_CSTRING("floats"));
	outFields->push(HX_CSTRING("strings"));
	outFields->push(HX_CSTRING("namespaces"));
	outFields->push(HX_CSTRING("nssets"));
	outFields->push(HX_CSTRING("names"));
	outFields->push(HX_CSTRING("methodTypes"));
	outFields->push(HX_CSTRING("metadatas"));
	outFields->push(HX_CSTRING("classes"));
	outFields->push(HX_CSTRING("inits"));
	outFields->push(HX_CSTRING("functions"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ABCData_obj,ints),HX_CSTRING("ints")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ABCData_obj,uints),HX_CSTRING("uints")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(ABCData_obj,floats),HX_CSTRING("floats")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ABCData_obj,strings),HX_CSTRING("strings")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ABCData_obj,namespaces),HX_CSTRING("namespaces")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ABCData_obj,nssets),HX_CSTRING("nssets")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ABCData_obj,names),HX_CSTRING("names")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ABCData_obj,methodTypes),HX_CSTRING("methodTypes")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ABCData_obj,metadatas),HX_CSTRING("metadatas")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ABCData_obj,classes),HX_CSTRING("classes")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ABCData_obj,inits),HX_CSTRING("inits")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ABCData_obj,functions),HX_CSTRING("functions")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ints"),
	HX_CSTRING("uints"),
	HX_CSTRING("floats"),
	HX_CSTRING("strings"),
	HX_CSTRING("namespaces"),
	HX_CSTRING("nssets"),
	HX_CSTRING("names"),
	HX_CSTRING("methodTypes"),
	HX_CSTRING("metadatas"),
	HX_CSTRING("classes"),
	HX_CSTRING("inits"),
	HX_CSTRING("functions"),
	HX_CSTRING("get"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ABCData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ABCData_obj::__mClass,"__mClass");
};

#endif

Class ABCData_obj::__mClass;

void ABCData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.abc.ABCData"), hx::TCanCast< ABCData_obj> ,sStaticFields,sMemberFields,
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

void ABCData_obj::__boot()
{
}

} // end namespace format
} // end namespace abc
