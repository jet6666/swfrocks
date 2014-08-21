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
#ifndef INCLUDED_format_abc_Reader
#include <format/abc/Reader.h>
#endif
#ifndef INCLUDED_format_abc_Writer
#include <format/abc/Writer.h>
#endif
#ifndef INCLUDED_format_swf_FontData
#include <format/swf/FontData.h>
#endif
#ifndef INCLUDED_format_swf_FontInfoData
#include <format/swf/FontInfoData.h>
#endif
#ifndef INCLUDED_format_swf_Reader
#include <format/swf/Reader.h>
#endif
#ifndef INCLUDED_format_swf_SWFTag
#include <format/swf/SWFTag.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
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
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",20,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	::String symbols = ::haxe::Resource_obj::getString(HX_CSTRING("symbols"));		HX_STACK_VAR(symbols,"symbols");
	HX_STACK_LINE(23)
	Array< ::String > _g = Array_obj< ::String >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(23)
	::Main_obj::symbolList = _g;
	HX_STACK_LINE(24)
	Array< ::String > _g1 = symbols.split(HX_CSTRING("\r\n"));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(24)
	::Main_obj::symbolList = _g1;
	HX_STACK_LINE(29)
	::sys::io::FileInput swfInput = ::sys::io::File_obj::read(HX_CSTRING("test.swf"),null());		HX_STACK_VAR(swfInput,"swfInput");
	struct _Function_1_1{
		inline static Dynamic Block( ::sys::io::FileInput &swfInput){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",30,0x087e5c05)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fileName") , HX_CSTRING("Main.hx"),false);
				__result->Add(HX_CSTRING("lineNumber") , (int)30,false);
				__result->Add(HX_CSTRING("className") , HX_CSTRING("Main"),false);
				__result->Add(HX_CSTRING("methodName") , HX_CSTRING("new"),false);
				__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(swfInput)),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(30)
	::haxe::Log_obj::trace(HX_CSTRING("open file test.swf "),_Function_1_1::Block(swfInput));
	HX_STACK_LINE(32)
	::format::swf::Reader swfReader = ::format::swf::Reader_obj::__new(swfInput);		HX_STACK_VAR(swfReader,"swfReader");
	HX_STACK_LINE(33)
	Dynamic swf = swfReader->read();		HX_STACK_VAR(swf,"swf");
	HX_STACK_LINE(34)
	int symbolClassCount = (int)0;		HX_STACK_VAR(symbolClassCount,"symbolClassCount");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(36)
		int _g2 = swf->__Field(HX_CSTRING("tags"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(36)
		while((true)){
			HX_STACK_LINE(36)
			if ((!(((_g11 < _g2))))){
				HX_STACK_LINE(36)
				break;
			}
			HX_STACK_LINE(36)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(37)
			::format::swf::SWFTag tag = swf->__Field(HX_CSTRING("tags"),true)->__GetItem(i);		HX_STACK_VAR(tag,"tag");
			HX_STACK_LINE(38)
			switch( (int)(tag->__Index())){
				case (int)15: {
					HX_STACK_LINE(38)
					Dynamic classes = (::format::swf::SWFTag(tag))->__Param(0);		HX_STACK_VAR(classes,"classes");
					HX_STACK_LINE(39)
					{
						HX_STACK_LINE(41)
						this->replectSymbolClass(classes);
						HX_STACK_LINE(42)
						symbolClassCount = classes->__Field(HX_CSTRING("length"),true);
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(38)
					::format::swf::FontData data = (::format::swf::SWFTag(tag))->__Param(1);		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(38)
					int id = (::format::swf::SWFTag(tag))->__Param(0);		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(44)
					this->fontTest(id,data);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(38)
					::format::swf::FontInfoData data = (::format::swf::SWFTag(tag))->__Param(1);		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(38)
					int id = (::format::swf::SWFTag(tag))->__Param(0);		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(46)
					this->fontTest2(id,data);
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(52)
		int _g2 = swf->__Field(HX_CSTRING("tags"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			if ((!(((_g11 < _g2))))){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(52)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(53)
			::format::swf::SWFTag tag = swf->__Field(HX_CSTRING("tags"),true)->__GetItem(i);		HX_STACK_VAR(tag,"tag");
			HX_STACK_LINE(54)
			switch( (int)(tag->__Index())){
				case (int)15: {
					HX_STACK_LINE(54)
					Dynamic classes = (::format::swf::SWFTag(tag))->__Param(0);		HX_STACK_VAR(classes,"classes");
					HX_STACK_LINE(55)
					{
					}
				}
				;break;
				case (int)14: {
					HX_STACK_LINE(54)
					Dynamic other = (::format::swf::SWFTag(tag))->__Param(1);		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(54)
					::haxe::io::Bytes abcBytes = (::format::swf::SWFTag(tag))->__Param(0);		HX_STACK_VAR(abcBytes,"abcBytes");
					HX_STACK_LINE(56)
					{
						HX_STACK_LINE(57)
						::haxe::io::Bytes _g21 = this->transformAbc(abcBytes,symbolClassCount);		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(57)
						hx::IndexRef((swf->__Field(HX_CSTRING("tags"),true)).mPtr,i) = ::format::swf::SWFTag_obj::TActionScript3(_g21,null());
					}
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(62)
		int _g2 = swf->__Field(HX_CSTRING("tags"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(62)
		while((true)){
			HX_STACK_LINE(62)
			if ((!(((_g11 < _g2))))){
				HX_STACK_LINE(62)
				break;
			}
			HX_STACK_LINE(62)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(63)
			::format::swf::SWFTag tag = swf->__Field(HX_CSTRING("tags"),true)->__GetItem(i);		HX_STACK_VAR(tag,"tag");
			HX_STACK_LINE(64)
			switch( (int)(tag->__Index())){
				case (int)15: {
					HX_STACK_LINE(64)
					Dynamic classes = (::format::swf::SWFTag(tag))->__Param(0);		HX_STACK_VAR(classes,"classes");
					HX_STACK_LINE(65)
					{
						HX_STACK_LINE(67)
						Dynamic _g3 = this->tranformSymbolClass(classes);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(67)
						hx::IndexRef((swf->__Field(HX_CSTRING("tags"),true)).mPtr,i) = ::format::swf::SWFTag_obj::TSymbolClass(_g3);
					}
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(71)
	return null();
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

Void Main_obj::fontTest( int id,::format::swf::FontData data){
{
		HX_STACK_FRAME("Main","fontTest",0x16808c76,"Main.fontTest","Main.hx",79,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(data,"data")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",79,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("fileName") , HX_CSTRING("Main.hx"),false);
					__result->Add(HX_CSTRING("lineNumber") , (int)79,false);
					__result->Add(HX_CSTRING("className") , HX_CSTRING("Main"),false);
					__result->Add(HX_CSTRING("methodName") , HX_CSTRING("fontTest"),false);
					__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add((int)1)),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(79)
		::haxe::Log_obj::trace(HX_CSTRING(" fontTest  id"),_Function_1_1::Block());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,fontTest,(void))

Void Main_obj::fontTest2( int id,::format::swf::FontInfoData data){
{
		HX_STACK_FRAME("Main","fontTest2",0x99fa5afc,"Main.fontTest2","Main.hx",84,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(data,"data")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",84,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("fileName") , HX_CSTRING("Main.hx"),false);
					__result->Add(HX_CSTRING("lineNumber") , (int)84,false);
					__result->Add(HX_CSTRING("className") , HX_CSTRING("Main"),false);
					__result->Add(HX_CSTRING("methodName") , HX_CSTRING("fontTest2"),false);
					__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add((int)2)),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(84)
		::haxe::Log_obj::trace(HX_CSTRING(" fontTest2  id"),_Function_1_1::Block());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,fontTest2,(void))

Void Main_obj::replectSymbolClass( Dynamic classList){
{
		HX_STACK_FRAME("Main","replectSymbolClass",0x9799e2ae,"Main.replectSymbolClass","Main.hx",87,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(classList,"classList")
		HX_STACK_LINE(88)
		int id = (int)128;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			while((true)){
				HX_STACK_LINE(89)
				if ((!(((_g < classList->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(89)
					break;
				}
				HX_STACK_LINE(89)
				Dynamic classItem = classList->__GetItem(_g);		HX_STACK_VAR(classItem,"classItem");
				HX_STACK_LINE(89)
				++(_g);
				HX_STACK_LINE(90)
				++(id);
				HX_STACK_LINE(91)
				Array< ::String > split = classItem->__Field(HX_CSTRING("className"),true)->__Field(HX_CSTRING("split"),true)(HX_CSTRING("."));		HX_STACK_VAR(split,"split");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					::String v = ::String::fromCharCode(id);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(92)
					::Main_obj::map->set(split->__get((split->length - (int)1)),v);
					HX_STACK_LINE(92)
					v;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,replectSymbolClass,(void))

Dynamic Main_obj::tranformSymbolClass( Dynamic classList){
	HX_STACK_FRAME("Main","tranformSymbolClass",0x19d1f4bc,"Main.tranformSymbolClass","Main.hx",96,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(classList,"classList")
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(97)
		while((true)){
			HX_STACK_LINE(97)
			if ((!(((_g < classList->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(97)
				break;
			}
			HX_STACK_LINE(97)
			Dynamic classItem = classList->__GetItem(_g);		HX_STACK_VAR(classItem,"classItem");
			HX_STACK_LINE(97)
			++(_g);
			HX_STACK_LINE(99)
			Array< ::String > split = classItem->__Field(HX_CSTRING("className"),true)->__Field(HX_CSTRING("split"),true)(HX_CSTRING("."));		HX_STACK_VAR(split,"split");
			HX_STACK_LINE(100)
			::String _g1 = ::Main_obj::map->get(split->__get((split->length - (int)1)));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(100)
			classItem->__FieldRef(HX_CSTRING("className")) = _g1;
		}
	}
	HX_STACK_LINE(102)
	return classList;
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,tranformSymbolClass,return )

::haxe::io::Bytes Main_obj::transformAbc( ::haxe::io::Bytes abcBytes,int pre){
	HX_STACK_FRAME("Main","transformAbc",0x65564b8b,"Main.transformAbc","Main.hx",105,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(abcBytes,"abcBytes")
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(106)
	::haxe::io::BytesInput abcInput = ::haxe::io::BytesInput_obj::__new(abcBytes,null(),null());		HX_STACK_VAR(abcInput,"abcInput");
	HX_STACK_LINE(107)
	::format::abc::Reader abcReader = ::format::abc::Reader_obj::__new(abcInput);		HX_STACK_VAR(abcReader,"abcReader");
	HX_STACK_LINE(108)
	::String nameSpaceName;		HX_STACK_VAR(nameSpaceName,"nameSpaceName");
	HX_STACK_LINE(110)
	::format::abc::ABCData abcData = abcReader->read();		HX_STACK_VAR(abcData,"abcData");
	HX_STACK_LINE(111)
	::EReg reg1 = ::EReg_obj::__new(HX_CSTRING("([a-zA-Z0-9])+ControllerXXXX$"),HX_CSTRING(""));		HX_STACK_VAR(reg1,"reg1");
	HX_STACK_LINE(112)
	::EReg reg2 = ::EReg_obj::__new(HX_CSTRING("([a-zA-Z0-9])+View$"),HX_CSTRING(""));		HX_STACK_VAR(reg2,"reg2");
	HX_STACK_LINE(113)
	int id = ((int)129 + pre);		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(115)
	{
		HX_STACK_LINE(115)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(115)
		Dynamic _g1 = abcData->classes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(115)
		while((true)){
			HX_STACK_LINE(115)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(115)
				break;
			}
			HX_STACK_LINE(115)
			Dynamic cls = _g1->__GetItem(_g);		HX_STACK_VAR(cls,"cls");
			HX_STACK_LINE(115)
			++(_g);
			HX_STACK_LINE(118)
			{
				HX_STACK_LINE(118)
				::format::abc::Name _g2 = ::Main_obj::getName(abcData,cls->__Field(HX_CSTRING("name"),true));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(118)
				switch( (int)(_g2->__Index())){
					case (int)0: {
						HX_STACK_LINE(118)
						::format::abc::Index ns = (::format::abc::Name(_g2))->__Param(1);		HX_STACK_VAR(ns,"ns");
						HX_STACK_LINE(118)
						::format::abc::Index name = (::format::abc::Name(_g2))->__Param(0);		HX_STACK_VAR(name,"name");
						HX_STACK_LINE(119)
						{
							HX_STACK_LINE(120)
							::String nameString = ::Main_obj::getString(abcData,name);		HX_STACK_VAR(nameString,"nameString");
							HX_STACK_LINE(121)
							if ((::Main_obj::map->exists(nameString))){
								HX_STACK_LINE(123)
								::String _g3 = ::Main_obj::map->get(nameString);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(123)
								::Main_obj::setString(abcData,name,_g3);
							}
							else{
								HX_STACK_LINE(125)
								++(id);
								HX_STACK_LINE(126)
								::String newNameString = ::String::fromCharCode(id);		HX_STACK_VAR(newNameString,"newNameString");
								HX_STACK_LINE(127)
								::Main_obj::setString(abcData,name,newNameString);
							}
						}
					}
					;break;
					default: {
						HX_STACK_LINE(130)
						HX_STACK_DO_THROW(HX_CSTRING("Unexpected class name"));
					}
				}
			}
		}
	}
	HX_STACK_LINE(134)
	Dynamic f;		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(135)
		Dynamic _g1 = abcData->functions;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(135)
		while((true)){
			HX_STACK_LINE(135)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(135)
				break;
			}
			HX_STACK_LINE(135)
			Dynamic f1 = _g1->__GetItem(_g);		HX_STACK_VAR(f1,"f1");
			HX_STACK_LINE(135)
			++(_g);
		}
	}
	HX_STACK_LINE(145)
	::EReg regSystemNameSpaces = ::EReg_obj::__new(HX_CSTRING("^(flash|fl)\\.+"),HX_CSTRING(""));		HX_STACK_VAR(regSystemNameSpaces,"regSystemNameSpaces");
	HX_STACK_LINE(147)
	{
		HX_STACK_LINE(147)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(147)
		Array< ::String > _g1 = abcData->strings;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(147)
		while((true)){
			HX_STACK_LINE(147)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(147)
				break;
			}
			HX_STACK_LINE(147)
			::String f1 = _g1->__get(_g);		HX_STACK_VAR(f1,"f1");
			HX_STACK_LINE(147)
			++(_g);
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::format::abc::ABCData &abcData){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",152,0x087e5c05)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fileName") , HX_CSTRING("Main.hx"),false);
				__result->Add(HX_CSTRING("lineNumber") , (int)152,false);
				__result->Add(HX_CSTRING("className") , HX_CSTRING("Main"),false);
				__result->Add(HX_CSTRING("methodName") , HX_CSTRING("transformAbc"),false);
				__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(abcData->names->length)),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(152)
	::haxe::Log_obj::trace(HX_CSTRING("abcData.names.length = "),_Function_1_1::Block(abcData));
	HX_STACK_LINE(153)
	{
		HX_STACK_LINE(153)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(153)
		Array< ::Dynamic > _g1 = abcData->names;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(153)
		while((true)){
			HX_STACK_LINE(153)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(153)
				break;
			}
			HX_STACK_LINE(153)
			::format::abc::Name f1 = _g1->__get(_g).StaticCast< ::format::abc::Name >();		HX_STACK_VAR(f1,"f1");
			HX_STACK_LINE(153)
			++(_g);
			HX_STACK_LINE(155)
			switch( (int)(f1->__Index())){
				case (int)0: {
					HX_STACK_LINE(155)
					::format::abc::Index ns = (::format::abc::Name(f1))->__Param(1);		HX_STACK_VAR(ns,"ns");
					HX_STACK_LINE(155)
					::format::abc::Index name = (::format::abc::Name(f1))->__Param(0);		HX_STACK_VAR(name,"name");
					HX_STACK_LINE(156)
					{
						HX_STACK_LINE(157)
						::String _g11 = ::Main_obj::getString(abcData,name);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(157)
						int _g2 = ::Main_obj::symbolList->indexOf(_g11,null());		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(157)
						if (((_g2 > (int)-1))){
							HX_STACK_LINE(157)
							continue;
						}
						HX_STACK_LINE(158)
						::String _g3 = ::Main_obj::getString(abcData,name);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(158)
						::String _g4 = ::Main_obj::getString(abcData,name);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(158)
						int _g5 = ::Main_obj::symbolList->indexOf(_g4,null());		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(158)
						Dynamic _g6 = Dynamic( Array_obj<Dynamic>::__new().Add(_g3).Add(_g5));		HX_STACK_VAR(_g6,"_g6");
						struct _Function_5_1{
							inline static Dynamic Block( Dynamic &_g6){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",158,0x087e5c05)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("fileName") , HX_CSTRING("Main.hx"),false);
									__result->Add(HX_CSTRING("lineNumber") , (int)158,false);
									__result->Add(HX_CSTRING("className") , HX_CSTRING("Main"),false);
									__result->Add(HX_CSTRING("methodName") , HX_CSTRING("transformAbc"),false);
									__result->Add(HX_CSTRING("customParams") , _g6,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(158)
						Dynamic _g7 = _Function_5_1::Block(_g6);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(158)
						::haxe::Log_obj::trace(HX_CSTRING("NAMe =========="),_g7);
						HX_STACK_LINE(159)
						{
							HX_STACK_LINE(159)
							::format::abc::Namespace _g21 = ::Main_obj::getNameSpace(abcData,ns);		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(159)
							switch( (int)(_g21->__Index())){
								case (int)0: {
									HX_STACK_LINE(159)
									::format::abc::Index ns1 = (::format::abc::Namespace(_g21))->__Param(0);		HX_STACK_VAR(ns1,"ns1");
									HX_STACK_LINE(160)
									{
										HX_STACK_LINE(161)
										::String _g8 = ::Main_obj::getString(abcData,ns1);		HX_STACK_VAR(_g8,"_g8");
										HX_STACK_LINE(161)
										Dynamic _g9 = Dynamic( Array_obj<Dynamic>::__new().Add(_g8));		HX_STACK_VAR(_g9,"_g9");
										struct _Function_8_1{
											inline static Dynamic Block( Dynamic &_g9){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",161,0x087e5c05)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_CSTRING("fileName") , HX_CSTRING("Main.hx"),false);
													__result->Add(HX_CSTRING("lineNumber") , (int)161,false);
													__result->Add(HX_CSTRING("className") , HX_CSTRING("Main"),false);
													__result->Add(HX_CSTRING("methodName") , HX_CSTRING("transformAbc"),false);
													__result->Add(HX_CSTRING("customParams") , _g9,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(161)
										Dynamic _g10 = _Function_8_1::Block(_g9);		HX_STACK_VAR(_g10,"_g10");
										HX_STACK_LINE(161)
										::haxe::Log_obj::trace(HX_CSTRING("NPrivate"),_g10);
									}
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(159)
									::format::abc::Index ns1 = (::format::abc::Namespace(_g21))->__Param(0);		HX_STACK_VAR(ns1,"ns1");
									HX_STACK_LINE(162)
									{
										HX_STACK_LINE(163)
										::String _g111 = ::Main_obj::getString(abcData,ns1);		HX_STACK_VAR(_g111,"_g111");
										HX_STACK_LINE(163)
										nameSpaceName = _g111;
										HX_STACK_LINE(164)
										if (((  (((nameSpaceName != null()))) ? bool(!(regSystemNameSpaces->match(nameSpaceName))) : bool(false) ))){
											struct _Function_9_1{
												inline static Dynamic Block( ::String &nameSpaceName){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",165,0x087e5c05)
													{
														hx::Anon __result = hx::Anon_obj::Create();
														__result->Add(HX_CSTRING("fileName") , HX_CSTRING("Main.hx"),false);
														__result->Add(HX_CSTRING("lineNumber") , (int)165,false);
														__result->Add(HX_CSTRING("className") , HX_CSTRING("Main"),false);
														__result->Add(HX_CSTRING("methodName") , HX_CSTRING("transformAbc"),false);
														__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(nameSpaceName)),false);
														return __result;
													}
													return null();
												}
											};
											HX_STACK_LINE(165)
											::haxe::Log_obj::trace(HX_CSTRING("NPublic passed ,"),_Function_9_1::Block(nameSpaceName));
										}
										else{
											struct _Function_9_1{
												inline static Dynamic Block( ::String &nameSpaceName){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",167,0x087e5c05)
													{
														hx::Anon __result = hx::Anon_obj::Create();
														__result->Add(HX_CSTRING("fileName") , HX_CSTRING("Main.hx"),false);
														__result->Add(HX_CSTRING("lineNumber") , (int)167,false);
														__result->Add(HX_CSTRING("className") , HX_CSTRING("Main"),false);
														__result->Add(HX_CSTRING("methodName") , HX_CSTRING("transformAbc"),false);
														__result->Add(HX_CSTRING("customParams") , Dynamic( Array_obj<Dynamic>::__new().Add(nameSpaceName)),false);
														return __result;
													}
													return null();
												}
											};
											HX_STACK_LINE(167)
											::haxe::Log_obj::trace(HX_CSTRING("NPublic not found======="),_Function_9_1::Block(nameSpaceName));
										}
									}
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(159)
									::format::abc::Index ns1 = (::format::abc::Namespace(_g21))->__Param(0);		HX_STACK_VAR(ns1,"ns1");
									HX_STACK_LINE(169)
									{
										HX_STACK_LINE(170)
										::String _g12 = ::Main_obj::getString(abcData,ns1);		HX_STACK_VAR(_g12,"_g12");
										HX_STACK_LINE(170)
										Dynamic _g13 = Dynamic( Array_obj<Dynamic>::__new().Add(_g12));		HX_STACK_VAR(_g13,"_g13");
										struct _Function_8_1{
											inline static Dynamic Block( Dynamic &_g13){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",170,0x087e5c05)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_CSTRING("fileName") , HX_CSTRING("Main.hx"),false);
													__result->Add(HX_CSTRING("lineNumber") , (int)170,false);
													__result->Add(HX_CSTRING("className") , HX_CSTRING("Main"),false);
													__result->Add(HX_CSTRING("methodName") , HX_CSTRING("transformAbc"),false);
													__result->Add(HX_CSTRING("customParams") , _g13,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(170)
										Dynamic _g14 = _Function_8_1::Block(_g13);		HX_STACK_VAR(_g14,"_g14");
										HX_STACK_LINE(170)
										::haxe::Log_obj::trace(HX_CSTRING("NInternal"),_g14);
									}
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(159)
									::format::abc::Index ns1 = (::format::abc::Namespace(_g21))->__Param(0);		HX_STACK_VAR(ns1,"ns1");
									HX_STACK_LINE(171)
									{
										HX_STACK_LINE(172)
										::String _g15 = ::Main_obj::getString(abcData,ns1);		HX_STACK_VAR(_g15,"_g15");
										HX_STACK_LINE(172)
										Dynamic _g16 = Dynamic( Array_obj<Dynamic>::__new().Add(_g15));		HX_STACK_VAR(_g16,"_g16");
										struct _Function_8_1{
											inline static Dynamic Block( Dynamic &_g16){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",172,0x087e5c05)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_CSTRING("fileName") , HX_CSTRING("Main.hx"),false);
													__result->Add(HX_CSTRING("lineNumber") , (int)172,false);
													__result->Add(HX_CSTRING("className") , HX_CSTRING("Main"),false);
													__result->Add(HX_CSTRING("methodName") , HX_CSTRING("transformAbc"),false);
													__result->Add(HX_CSTRING("customParams") , _g16,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(172)
										Dynamic _g17 = _Function_8_1::Block(_g16);		HX_STACK_VAR(_g17,"_g17");
										HX_STACK_LINE(172)
										::haxe::Log_obj::trace(HX_CSTRING("NProtected"),_g17);
									}
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(159)
									::format::abc::Index ns1 = (::format::abc::Namespace(_g21))->__Param(0);		HX_STACK_VAR(ns1,"ns1");
									HX_STACK_LINE(173)
									{
										HX_STACK_LINE(174)
										::String _g18 = ::Main_obj::getString(abcData,ns1);		HX_STACK_VAR(_g18,"_g18");
										HX_STACK_LINE(174)
										Dynamic _g19 = Dynamic( Array_obj<Dynamic>::__new().Add(_g18));		HX_STACK_VAR(_g19,"_g19");
										struct _Function_8_1{
											inline static Dynamic Block( Dynamic &_g19){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",174,0x087e5c05)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_CSTRING("fileName") , HX_CSTRING("Main.hx"),false);
													__result->Add(HX_CSTRING("lineNumber") , (int)174,false);
													__result->Add(HX_CSTRING("className") , HX_CSTRING("Main"),false);
													__result->Add(HX_CSTRING("methodName") , HX_CSTRING("transformAbc"),false);
													__result->Add(HX_CSTRING("customParams") , _g19,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(174)
										Dynamic _g20 = _Function_8_1::Block(_g19);		HX_STACK_VAR(_g20,"_g20");
										HX_STACK_LINE(174)
										::haxe::Log_obj::trace(HX_CSTRING("NExplicit"),_g20);
									}
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(159)
									::format::abc::Index ns1 = (::format::abc::Namespace(_g21))->__Param(0);		HX_STACK_VAR(ns1,"ns1");
									HX_STACK_LINE(175)
									{
										HX_STACK_LINE(176)
										::String _g211 = ::Main_obj::getString(abcData,ns1);		HX_STACK_VAR(_g211,"_g211");
										HX_STACK_LINE(176)
										Dynamic _g22 = Dynamic( Array_obj<Dynamic>::__new().Add(_g211));		HX_STACK_VAR(_g22,"_g22");
										struct _Function_8_1{
											inline static Dynamic Block( Dynamic &_g22){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",176,0x087e5c05)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_CSTRING("fileName") , HX_CSTRING("Main.hx"),false);
													__result->Add(HX_CSTRING("lineNumber") , (int)176,false);
													__result->Add(HX_CSTRING("className") , HX_CSTRING("Main"),false);
													__result->Add(HX_CSTRING("methodName") , HX_CSTRING("transformAbc"),false);
													__result->Add(HX_CSTRING("customParams") , _g22,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(176)
										Dynamic _g23 = _Function_8_1::Block(_g22);		HX_STACK_VAR(_g23,"_g23");
										HX_STACK_LINE(176)
										::haxe::Log_obj::trace(HX_CSTRING("NStaticProtected"),_g23);
									}
								}
								;break;
								default: {
									HX_STACK_LINE(178)
									::haxe::Log_obj::trace(HX_CSTRING("unkown type !!!!!!!!!!!!!!!"),hx::SourceInfo(HX_CSTRING("Main.hx"),178,HX_CSTRING("Main"),HX_CSTRING("transformAbc")));
								}
							}
						}
					}
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(200)
	{
		HX_STACK_LINE(200)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(200)
		Array< ::Dynamic > _g1 = abcData->namespaces;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(200)
		while((true)){
			HX_STACK_LINE(200)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(200)
				break;
			}
			HX_STACK_LINE(200)
			::format::abc::Namespace f1 = _g1->__get(_g).StaticCast< ::format::abc::Namespace >();		HX_STACK_VAR(f1,"f1");
			HX_STACK_LINE(200)
			++(_g);
			HX_STACK_LINE(202)
			switch( (int)(f1->__Index())){
				case (int)0: {
					HX_STACK_LINE(202)
					::format::abc::Index ns = (::format::abc::Namespace(f1))->__Param(0);		HX_STACK_VAR(ns,"ns");
					HX_STACK_LINE(203)
					{
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(202)
					::format::abc::Index ns = (::format::abc::Namespace(f1))->__Param(0);		HX_STACK_VAR(ns,"ns");
					HX_STACK_LINE(205)
					{
						HX_STACK_LINE(206)
						::String _g24 = ::Main_obj::getString(abcData,ns);		HX_STACK_VAR(_g24,"_g24");
						HX_STACK_LINE(206)
						nameSpaceName = _g24;
						HX_STACK_LINE(208)
						if (((  (((nameSpaceName != null()))) ? bool(!(regSystemNameSpaces->match(nameSpaceName))) : bool(false) ))){
							HX_STACK_LINE(210)
							::Main_obj::setString(abcData,ns,HX_CSTRING(""));
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(202)
					::format::abc::Index ns = (::format::abc::Namespace(f1))->__Param(0);		HX_STACK_VAR(ns,"ns");
					HX_STACK_LINE(212)
					{
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(202)
					::format::abc::Index ns = (::format::abc::Namespace(f1))->__Param(0);		HX_STACK_VAR(ns,"ns");
					HX_STACK_LINE(214)
					{
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(202)
					::format::abc::Index ns = (::format::abc::Namespace(f1))->__Param(0);		HX_STACK_VAR(ns,"ns");
					HX_STACK_LINE(216)
					{
					}
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(202)
					::format::abc::Index ns = (::format::abc::Namespace(f1))->__Param(0);		HX_STACK_VAR(ns,"ns");
					HX_STACK_LINE(218)
					{
					}
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(225)
		Dynamic _g1 = abcData->methodTypes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(225)
		while((true)){
			HX_STACK_LINE(225)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(225)
				break;
			}
			HX_STACK_LINE(225)
			Dynamic f3 = _g1->__GetItem(_g);		HX_STACK_VAR(f3,"f3");
			HX_STACK_LINE(225)
			++(_g);
		}
	}
	HX_STACK_LINE(231)
	::haxe::io::BytesOutput abcOutput = ::haxe::io::BytesOutput_obj::__new();		HX_STACK_VAR(abcOutput,"abcOutput");
	HX_STACK_LINE(232)
	::format::abc::Writer abcWriter = ::format::abc::Writer_obj::__new(abcOutput);		HX_STACK_VAR(abcWriter,"abcWriter");
	HX_STACK_LINE(233)
	abcWriter->write(abcData);
	HX_STACK_LINE(234)
	return abcOutput->getBytes();
}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,transformAbc,return )

::haxe::ds::StringMap Main_obj::map;

Array< ::String > Main_obj::symbolList;

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",16,0x087e5c05)
		HX_STACK_LINE(17)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		::Main_obj::map = _g;
		HX_STACK_LINE(18)
		::Main_obj::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))

::format::abc::Namespace Main_obj::getNameSpace( ::format::abc::ABCData abcData,::format::abc::Index idx){
	HX_STACK_FRAME("Main","getNameSpace",0xb14c9c3a,"Main.getNameSpace","Main.hx",238,0x087e5c05)
	HX_STACK_ARG(abcData,"abcData")
	HX_STACK_ARG(idx,"idx")
	HX_STACK_LINE(238)
	{
		HX_STACK_LINE(238)
		int i = (::format::abc::Index(idx))->__Param(0);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(239)
		return abcData->namespaces->__get((i - (int)1)).StaticCast< ::format::abc::Namespace >();
	}
	HX_STACK_LINE(238)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Main_obj,getNameSpace,return )

::format::abc::Name Main_obj::getName( ::format::abc::ABCData abcData,::format::abc::Index idx){
	HX_STACK_FRAME("Main","getName",0x7fb388ec,"Main.getName","Main.hx",244,0x087e5c05)
	HX_STACK_ARG(abcData,"abcData")
	HX_STACK_ARG(idx,"idx")
	HX_STACK_LINE(244)
	{
		HX_STACK_LINE(244)
		int i = (::format::abc::Index(idx))->__Param(0);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(245)
		return abcData->names->__get((i - (int)1)).StaticCast< ::format::abc::Name >();
	}
	HX_STACK_LINE(244)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Main_obj,getName,return )

::String Main_obj::getString( ::format::abc::ABCData abcData,::format::abc::Index idx){
	HX_STACK_FRAME("Main","getString",0x6e0fe9b2,"Main.getString","Main.hx",251,0x087e5c05)
	HX_STACK_ARG(abcData,"abcData")
	HX_STACK_ARG(idx,"idx")
	HX_STACK_LINE(251)
	{
		HX_STACK_LINE(251)
		int i = (::format::abc::Index(idx))->__Param(0);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(252)
		return abcData->strings->__get((i - (int)1));
	}
	HX_STACK_LINE(251)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Main_obj,getString,return )

Void Main_obj::setString( ::format::abc::ABCData abcData,::format::abc::Index idx,::String value){
{
		HX_STACK_FRAME("Main","setString",0x5160d5be,"Main.setString","Main.hx",257,0x087e5c05)
		HX_STACK_ARG(abcData,"abcData")
		HX_STACK_ARG(idx,"idx")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(257)
		{
			HX_STACK_LINE(257)
			int i = (::format::abc::Index(idx))->__Param(0);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(258)
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
	case 8:
		if (HX_FIELD_EQ(inName,"fontTest") ) { return fontTest_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getString") ) { return getString_dyn(); }
		if (HX_FIELD_EQ(inName,"setString") ) { return setString_dyn(); }
		if (HX_FIELD_EQ(inName,"fontTest2") ) { return fontTest2_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"symbolList") ) { return symbolList; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getNameSpace") ) { return getNameSpace_dyn(); }
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
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"symbolList") ) { symbolList=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("map"),
	HX_CSTRING("symbolList"),
	HX_CSTRING("main"),
	HX_CSTRING("getNameSpace"),
	HX_CSTRING("getName"),
	HX_CSTRING("getString"),
	HX_CSTRING("setString"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("fontTest"),
	HX_CSTRING("fontTest2"),
	HX_CSTRING("replectSymbolClass"),
	HX_CSTRING("tranformSymbolClass"),
	HX_CSTRING("transformAbc"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::map,"map");
	HX_MARK_MEMBER_NAME(Main_obj::symbolList,"symbolList");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::map,"map");
	HX_VISIT_MEMBER_NAME(Main_obj::symbolList,"symbolList");
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

