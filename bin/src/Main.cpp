#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_format_abc_ABCData
#include <format/abc/ABCData.h>
#endif
#ifndef INCLUDED_format_abc_Index
#include <format/abc/Index.h>
#endif
#ifndef INCLUDED_format_abc_Name
#include <format/abc/Name.h>
#endif
#ifndef INCLUDED_format_abc_Reader
#include <format/abc/Reader.h>
#endif
#ifndef INCLUDED_format_abc_Writer
#include <format/abc/Writer.h>
#endif
#ifndef INCLUDED_format_swf_Reader
#include <format/swf/Reader.h>
#endif
#ifndef INCLUDED_format_swf_SWFTag
#include <format/swf/SWFTag.h>
#endif
#ifndef INCLUDED_format_swf_Writer
#include <format/swf/Writer.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",17,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	::sys::io::FileInput swfInput = ::sys::io::File_obj::read(HX_CSTRING("test.swf"),null());		HX_STACK_VAR(swfInput,"swfInput");
	struct _Function_1_1{
		inline static Dynamic Block( ::sys::io::FileInput &swfInput){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",20,0x087e5c05)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fileName") , HX_CSTRING("Main.hx"),false);
				__result->Add(HX_CSTRING("lineNumber") , (int)20,false);
				__result->Add(HX_CSTRING("className") , HX_CSTRING("Main"),false);
				__result->Add(HX_CSTRING("methodName") , HX_CSTRING("new"),false);
				__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(swfInput)),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(20)
	::haxe::Log_obj::trace(HX_CSTRING("open file test.swf"),_Function_1_1::Block(swfInput));
	HX_STACK_LINE(21)
	::format::swf::Reader swfReader = ::format::swf::Reader_obj::__new(swfInput);		HX_STACK_VAR(swfReader,"swfReader");
	HX_STACK_LINE(22)
	Dynamic swf = swfReader->read();		HX_STACK_VAR(swf,"swf");
	HX_STACK_LINE(23)
	int symbolClassCount = (int)0;		HX_STACK_VAR(symbolClassCount,"symbolClassCount");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(25)
		int _g = swf->__Field(HX_CSTRING("tags"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		while((true)){
			HX_STACK_LINE(25)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(25)
				break;
			}
			HX_STACK_LINE(25)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(26)
			::format::swf::SWFTag tag = swf->__Field(HX_CSTRING("tags"),true)->__GetItem(i);		HX_STACK_VAR(tag,"tag");
			HX_STACK_LINE(27)
			switch( (int)(tag->__Index())){
				case (int)15: {
					HX_STACK_LINE(27)
					Dynamic classes = (::format::swf::SWFTag(tag))->__Param(0);		HX_STACK_VAR(classes,"classes");
					HX_STACK_LINE(28)
					{
						HX_STACK_LINE(30)
						this->replectSymbolClass(classes);
						HX_STACK_LINE(31)
						symbolClassCount = classes->__Field(HX_CSTRING("length"),true);
					}
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(37)
		int _g = swf->__Field(HX_CSTRING("tags"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		while((true)){
			HX_STACK_LINE(37)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(37)
				break;
			}
			HX_STACK_LINE(37)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(38)
			::format::swf::SWFTag tag = swf->__Field(HX_CSTRING("tags"),true)->__GetItem(i);		HX_STACK_VAR(tag,"tag");
			HX_STACK_LINE(39)
			switch( (int)(tag->__Index())){
				case (int)15: {
					HX_STACK_LINE(39)
					Dynamic classes = (::format::swf::SWFTag(tag))->__Param(0);		HX_STACK_VAR(classes,"classes");
					HX_STACK_LINE(40)
					{
					}
				}
				;break;
				case (int)14: {
					HX_STACK_LINE(39)
					Dynamic other = (::format::swf::SWFTag(tag))->__Param(1);		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(39)
					::haxe::io::Bytes abcBytes = (::format::swf::SWFTag(tag))->__Param(0);		HX_STACK_VAR(abcBytes,"abcBytes");
					HX_STACK_LINE(41)
					{
						HX_STACK_LINE(42)
						::haxe::io::Bytes _g2 = this->transformAbc(abcBytes,symbolClassCount);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(42)
						hx::IndexRef((swf->__Field(HX_CSTRING("tags"),true)).mPtr,i) = ::format::swf::SWFTag_obj::TActionScript3(_g2,null());
					}
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(47)
		int _g = swf->__Field(HX_CSTRING("tags"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		while((true)){
			HX_STACK_LINE(47)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(47)
				break;
			}
			HX_STACK_LINE(47)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(48)
			::format::swf::SWFTag tag = swf->__Field(HX_CSTRING("tags"),true)->__GetItem(i);		HX_STACK_VAR(tag,"tag");
			HX_STACK_LINE(49)
			switch( (int)(tag->__Index())){
				case (int)15: {
					HX_STACK_LINE(49)
					Dynamic classes = (::format::swf::SWFTag(tag))->__Param(0);		HX_STACK_VAR(classes,"classes");
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(52)
						Dynamic _g11 = this->tranformSymbolClass(classes);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(52)
						hx::IndexRef((swf->__Field(HX_CSTRING("tags"),true)).mPtr,i) = ::format::swf::SWFTag_obj::TSymbolClass(_g11);
					}
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(56)
	::haxe::io::BytesOutput swfOutput = ::haxe::io::BytesOutput_obj::__new();		HX_STACK_VAR(swfOutput,"swfOutput");
	HX_STACK_LINE(57)
	::format::swf::Writer swfWriter = ::format::swf::Writer_obj::__new(swfOutput);		HX_STACK_VAR(swfWriter,"swfWriter");
	HX_STACK_LINE(58)
	swfWriter->write(swf);
	HX_STACK_LINE(59)
	::haxe::io::Bytes _g2 = swfOutput->getBytes();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(59)
	::sys::io::File_obj::saveBytes(HX_CSTRING("target.swf"),_g2);
	HX_STACK_LINE(60)
	::haxe::Log_obj::trace(HX_CSTRING("confuscate file = target.swf  KO"),hx::SourceInfo(HX_CSTRING("Main.hx"),60,HX_CSTRING("Main"),HX_CSTRING("new")));
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::replectSymbolClass( Dynamic classList){
{
		HX_STACK_FRAME("Main","replectSymbolClass",0x9799e2ae,"Main.replectSymbolClass","Main.hx",63,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(classList,"classList")
		HX_STACK_LINE(64)
		int id = (int)128;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(65)
			while((true)){
				HX_STACK_LINE(65)
				if ((!(((_g < classList->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(65)
					break;
				}
				HX_STACK_LINE(65)
				Dynamic classItem = classList->__GetItem(_g);		HX_STACK_VAR(classItem,"classItem");
				HX_STACK_LINE(65)
				++(_g);
				HX_STACK_LINE(66)
				++(id);
				HX_STACK_LINE(67)
				Array< ::String > split = classItem->__Field(HX_CSTRING("className"),true)->__Field(HX_CSTRING("split"),true)(HX_CSTRING("."));		HX_STACK_VAR(split,"split");
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					::String v = ::String::fromCharCode(id);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(68)
					::Main_obj::map->set(split->__get((split->length - (int)1)),v);
					HX_STACK_LINE(68)
					v;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,replectSymbolClass,(void))

Dynamic Main_obj::tranformSymbolClass( Dynamic classList){
	HX_STACK_FRAME("Main","tranformSymbolClass",0x19d1f4bc,"Main.tranformSymbolClass","Main.hx",72,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(classList,"classList")
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		while((true)){
			HX_STACK_LINE(73)
			if ((!(((_g < classList->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(73)
				break;
			}
			HX_STACK_LINE(73)
			Dynamic classItem = classList->__GetItem(_g);		HX_STACK_VAR(classItem,"classItem");
			HX_STACK_LINE(73)
			++(_g);
			HX_STACK_LINE(75)
			Array< ::String > split = classItem->__Field(HX_CSTRING("className"),true)->__Field(HX_CSTRING("split"),true)(HX_CSTRING("."));		HX_STACK_VAR(split,"split");
			HX_STACK_LINE(76)
			::String _g1 = ::Main_obj::map->get(split->__get((split->length - (int)1)));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(76)
			::String _g11 = ::StringTools_obj::replace(classItem->__Field(HX_CSTRING("className"),true),split->__get((split->length - (int)1)),_g1);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(76)
			classItem->__FieldRef(HX_CSTRING("className")) = _g11;
		}
	}
	HX_STACK_LINE(78)
	return classList;
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,tranformSymbolClass,return )

::haxe::io::Bytes Main_obj::transformAbc( ::haxe::io::Bytes abcBytes,int pre){
	HX_STACK_FRAME("Main","transformAbc",0x65564b8b,"Main.transformAbc","Main.hx",81,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(abcBytes,"abcBytes")
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(82)
	::haxe::io::BytesInput abcInput = ::haxe::io::BytesInput_obj::__new(abcBytes,null(),null());		HX_STACK_VAR(abcInput,"abcInput");
	HX_STACK_LINE(83)
	::format::abc::Reader abcReader = ::format::abc::Reader_obj::__new(abcInput);		HX_STACK_VAR(abcReader,"abcReader");
	HX_STACK_LINE(85)
	::format::abc::ABCData abcData = abcReader->read();		HX_STACK_VAR(abcData,"abcData");
	HX_STACK_LINE(86)
	::EReg reg1 = ::EReg_obj::__new(HX_CSTRING("([a-zA-Z0-9])+ControllerXXXX$"),HX_CSTRING(""));		HX_STACK_VAR(reg1,"reg1");
	HX_STACK_LINE(87)
	::EReg reg2 = ::EReg_obj::__new(HX_CSTRING("([a-zA-Z0-9])+View$"),HX_CSTRING(""));		HX_STACK_VAR(reg2,"reg2");
	HX_STACK_LINE(88)
	int id = ((int)129 + pre);		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(90)
		Dynamic _g1 = abcData->classes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(90)
		while((true)){
			HX_STACK_LINE(90)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(90)
				break;
			}
			HX_STACK_LINE(90)
			Dynamic cls = _g1->__GetItem(_g);		HX_STACK_VAR(cls,"cls");
			HX_STACK_LINE(90)
			++(_g);
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				::format::abc::Name _g2 = ::Main_obj::getName(abcData,cls->__Field(HX_CSTRING("name"),true));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(91)
				switch( (int)(_g2->__Index())){
					case (int)0: {
						HX_STACK_LINE(91)
						::format::abc::Index ns = (::format::abc::Name(_g2))->__Param(1);		HX_STACK_VAR(ns,"ns");
						HX_STACK_LINE(91)
						::format::abc::Index name = (::format::abc::Name(_g2))->__Param(0);		HX_STACK_VAR(name,"name");
						HX_STACK_LINE(92)
						{
							HX_STACK_LINE(93)
							::String nameString = ::Main_obj::getString(abcData,name);		HX_STACK_VAR(nameString,"nameString");
							HX_STACK_LINE(94)
							if ((::Main_obj::map->exists(nameString))){
								HX_STACK_LINE(96)
								::String _g3 = ::Main_obj::map->get(nameString);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(96)
								::Main_obj::setString(abcData,name,_g3);
							}
							else{
								HX_STACK_LINE(98)
								++(id);
								HX_STACK_LINE(99)
								::String newNameString = ::String::fromCharCode(id);		HX_STACK_VAR(newNameString,"newNameString");
								HX_STACK_LINE(100)
								::Main_obj::setString(abcData,name,newNameString);
							}
						}
					}
					;break;
					default: {
						HX_STACK_LINE(103)
						HX_STACK_DO_THROW(HX_CSTRING("Unexpected class name"));
					}
				}
			}
		}
	}
	HX_STACK_LINE(107)
	Dynamic f;		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(108)
	{
		HX_STACK_LINE(108)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(108)
		Dynamic _g1 = abcData->functions;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(108)
		while((true)){
			HX_STACK_LINE(108)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(108)
				break;
			}
			HX_STACK_LINE(108)
			Dynamic f1 = _g1->__GetItem(_g);		HX_STACK_VAR(f1,"f1");
			HX_STACK_LINE(108)
			++(_g);
		}
	}
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		Array< ::String > _g1 = abcData->strings;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(118)
		while((true)){
			HX_STACK_LINE(118)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(118)
				break;
			}
			HX_STACK_LINE(118)
			::String f1 = _g1->__get(_g);		HX_STACK_VAR(f1,"f1");
			HX_STACK_LINE(118)
			++(_g);
		}
	}
	HX_STACK_LINE(125)
	{
		HX_STACK_LINE(125)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(125)
		Dynamic _g1 = abcData->methodTypes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(125)
		while((true)){
			HX_STACK_LINE(125)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(125)
				break;
			}
			HX_STACK_LINE(125)
			Dynamic f3 = _g1->__GetItem(_g);		HX_STACK_VAR(f3,"f3");
			HX_STACK_LINE(125)
			++(_g);
		}
	}
	HX_STACK_LINE(131)
	::haxe::io::BytesOutput abcOutput = ::haxe::io::BytesOutput_obj::__new();		HX_STACK_VAR(abcOutput,"abcOutput");
	HX_STACK_LINE(132)
	::format::abc::Writer abcWriter = ::format::abc::Writer_obj::__new(abcOutput);		HX_STACK_VAR(abcWriter,"abcWriter");
	HX_STACK_LINE(133)
	abcWriter->write(abcData);
	HX_STACK_LINE(134)
	return abcOutput->getBytes();
}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,transformAbc,return )

::haxe::ds::StringMap Main_obj::map;

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",13,0x087e5c05)
		HX_STACK_LINE(14)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(14)
		::Main_obj::map = _g;
		HX_STACK_LINE(15)
		::Main_obj::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))

::format::abc::Name Main_obj::getName( ::format::abc::ABCData abcData,::format::abc::Index idx){
	HX_STACK_FRAME("Main","getName",0x7fb388ec,"Main.getName","Main.hx",139,0x087e5c05)
	HX_STACK_ARG(abcData,"abcData")
	HX_STACK_ARG(idx,"idx")
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		int i = (::format::abc::Index(idx))->__Param(0);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(140)
		return abcData->names->__get((i - (int)1)).StaticCast< ::format::abc::Name >();
	}
	HX_STACK_LINE(139)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Main_obj,getName,return )

::String Main_obj::getString( ::format::abc::ABCData abcData,::format::abc::Index idx){
	HX_STACK_FRAME("Main","getString",0x6e0fe9b2,"Main.getString","Main.hx",146,0x087e5c05)
	HX_STACK_ARG(abcData,"abcData")
	HX_STACK_ARG(idx,"idx")
	HX_STACK_LINE(146)
	{
		HX_STACK_LINE(146)
		int i = (::format::abc::Index(idx))->__Param(0);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(147)
		return abcData->strings->__get((i - (int)1));
	}
	HX_STACK_LINE(146)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Main_obj,getString,return )

Void Main_obj::setString( ::format::abc::ABCData abcData,::format::abc::Index idx,::String value){
{
		HX_STACK_FRAME("Main","setString",0x5160d5be,"Main.setString","Main.hx",152,0x087e5c05)
		HX_STACK_ARG(abcData,"abcData")
		HX_STACK_ARG(idx,"idx")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			int i = (::format::abc::Index(idx))->__Param(0);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(153)
			abcData->strings[(i - (int)1)] = value;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Main_obj,setString,(void))


Main_obj::Main_obj()
{
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
		if (HX_FIELD_EQ(inName,"setString") ) { return setString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"transformAbc") ) { return transformAbc_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"replectSymbolClass") ) { return replectSymbolClass_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"tranformSymbolClass") ) { return tranformSymbolClass_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("map"),
	HX_CSTRING("main"),
	HX_CSTRING("getName"),
	HX_CSTRING("getString"),
	HX_CSTRING("setString"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("replectSymbolClass"),
	HX_CSTRING("tranformSymbolClass"),
	HX_CSTRING("transformAbc"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::map,"map");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::map,"map");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
}

