#include <hxcpp.h>

#ifndef INCLUDED_format_swf_TagId
#include <format/swf/TagId.h>
#endif
namespace format{
namespace swf{

Void TagId_obj::__construct()
{
	return null();
}

//TagId_obj::~TagId_obj() { }

Dynamic TagId_obj::__CreateEmpty() { return  new TagId_obj; }
hx::ObjectPtr< TagId_obj > TagId_obj::__new()
{  hx::ObjectPtr< TagId_obj > result = new TagId_obj();
	result->__construct();
	return result;}

Dynamic TagId_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TagId_obj > result = new TagId_obj();
	result->__construct();
	return result;}

int TagId_obj::End;

int TagId_obj::ShowFrame;

int TagId_obj::DefineShape;

int TagId_obj::PlaceObject;

int TagId_obj::RemoveObject;

int TagId_obj::DefineBits;

int TagId_obj::DefineButton;

int TagId_obj::JPEGTables;

int TagId_obj::SetBackgroundColor;

int TagId_obj::DefineFont;

int TagId_obj::DefineText;

int TagId_obj::DoAction;

int TagId_obj::DefineFontInfo;

int TagId_obj::DefineSound;

int TagId_obj::StartSound;

int TagId_obj::DefineButtonSound;

int TagId_obj::SoundStreamHead;

int TagId_obj::SoundStreamBlock;

int TagId_obj::DefineBitsLossless;

int TagId_obj::DefineBitsJPEG2;

int TagId_obj::DefineShape2;

int TagId_obj::DefineButtonCxform;

int TagId_obj::Protect;

int TagId_obj::PlaceObject2;

int TagId_obj::RemoveObject2;

int TagId_obj::DefineShape3;

int TagId_obj::DefineText2;

int TagId_obj::DefineButton2;

int TagId_obj::DefineBitsJPEG3;

int TagId_obj::DefineBitsLossless2;

int TagId_obj::DefineEditText;

int TagId_obj::DefineSprite;

int TagId_obj::FrameLabel;

int TagId_obj::SoundStreamHead2;

int TagId_obj::DefineMorphShape;

int TagId_obj::DefineFont2;

int TagId_obj::ExportAssets;

int TagId_obj::ImportAssets;

int TagId_obj::EnableDebugger;

int TagId_obj::DoInitAction;

int TagId_obj::DefineVideoStream;

int TagId_obj::VideoFrame;

int TagId_obj::DefineFontInfo2;

int TagId_obj::EnableDebugger2;

int TagId_obj::ScriptLimits;

int TagId_obj::SetTabIndex;

int TagId_obj::FileAttributes;

int TagId_obj::PlaceObject3;

int TagId_obj::ImportAssets2;

int TagId_obj::RawABC;

int TagId_obj::DefineFontAlignZones;

int TagId_obj::CSMTextSettings;

int TagId_obj::DefineFont3;

int TagId_obj::SymbolClass;

int TagId_obj::Metadata;

int TagId_obj::DefineScalingGrid;

int TagId_obj::DoABC;

int TagId_obj::DefineShape4;

int TagId_obj::DefineMorphShape2;

int TagId_obj::DefineSceneAndFrameLabelData;

int TagId_obj::DefineBinaryData;

int TagId_obj::DefineFontName;

int TagId_obj::StartSound2;

int TagId_obj::DefineBitsJPEG4;

int TagId_obj::DefineFont4;


TagId_obj::TagId_obj()
{
}

Dynamic TagId_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic TagId_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TagId_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("End"),
	HX_CSTRING("ShowFrame"),
	HX_CSTRING("DefineShape"),
	HX_CSTRING("PlaceObject"),
	HX_CSTRING("RemoveObject"),
	HX_CSTRING("DefineBits"),
	HX_CSTRING("DefineButton"),
	HX_CSTRING("JPEGTables"),
	HX_CSTRING("SetBackgroundColor"),
	HX_CSTRING("DefineFont"),
	HX_CSTRING("DefineText"),
	HX_CSTRING("DoAction"),
	HX_CSTRING("DefineFontInfo"),
	HX_CSTRING("DefineSound"),
	HX_CSTRING("StartSound"),
	HX_CSTRING("DefineButtonSound"),
	HX_CSTRING("SoundStreamHead"),
	HX_CSTRING("SoundStreamBlock"),
	HX_CSTRING("DefineBitsLossless"),
	HX_CSTRING("DefineBitsJPEG2"),
	HX_CSTRING("DefineShape2"),
	HX_CSTRING("DefineButtonCxform"),
	HX_CSTRING("Protect"),
	HX_CSTRING("PlaceObject2"),
	HX_CSTRING("RemoveObject2"),
	HX_CSTRING("DefineShape3"),
	HX_CSTRING("DefineText2"),
	HX_CSTRING("DefineButton2"),
	HX_CSTRING("DefineBitsJPEG3"),
	HX_CSTRING("DefineBitsLossless2"),
	HX_CSTRING("DefineEditText"),
	HX_CSTRING("DefineSprite"),
	HX_CSTRING("FrameLabel"),
	HX_CSTRING("SoundStreamHead2"),
	HX_CSTRING("DefineMorphShape"),
	HX_CSTRING("DefineFont2"),
	HX_CSTRING("ExportAssets"),
	HX_CSTRING("ImportAssets"),
	HX_CSTRING("EnableDebugger"),
	HX_CSTRING("DoInitAction"),
	HX_CSTRING("DefineVideoStream"),
	HX_CSTRING("VideoFrame"),
	HX_CSTRING("DefineFontInfo2"),
	HX_CSTRING("EnableDebugger2"),
	HX_CSTRING("ScriptLimits"),
	HX_CSTRING("SetTabIndex"),
	HX_CSTRING("FileAttributes"),
	HX_CSTRING("PlaceObject3"),
	HX_CSTRING("ImportAssets2"),
	HX_CSTRING("RawABC"),
	HX_CSTRING("DefineFontAlignZones"),
	HX_CSTRING("CSMTextSettings"),
	HX_CSTRING("DefineFont3"),
	HX_CSTRING("SymbolClass"),
	HX_CSTRING("Metadata"),
	HX_CSTRING("DefineScalingGrid"),
	HX_CSTRING("DoABC"),
	HX_CSTRING("DefineShape4"),
	HX_CSTRING("DefineMorphShape2"),
	HX_CSTRING("DefineSceneAndFrameLabelData"),
	HX_CSTRING("DefineBinaryData"),
	HX_CSTRING("DefineFontName"),
	HX_CSTRING("StartSound2"),
	HX_CSTRING("DefineBitsJPEG4"),
	HX_CSTRING("DefineFont4"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TagId_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TagId_obj::End,"End");
	HX_MARK_MEMBER_NAME(TagId_obj::ShowFrame,"ShowFrame");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineShape,"DefineShape");
	HX_MARK_MEMBER_NAME(TagId_obj::PlaceObject,"PlaceObject");
	HX_MARK_MEMBER_NAME(TagId_obj::RemoveObject,"RemoveObject");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineBits,"DefineBits");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineButton,"DefineButton");
	HX_MARK_MEMBER_NAME(TagId_obj::JPEGTables,"JPEGTables");
	HX_MARK_MEMBER_NAME(TagId_obj::SetBackgroundColor,"SetBackgroundColor");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineFont,"DefineFont");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineText,"DefineText");
	HX_MARK_MEMBER_NAME(TagId_obj::DoAction,"DoAction");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineFontInfo,"DefineFontInfo");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineSound,"DefineSound");
	HX_MARK_MEMBER_NAME(TagId_obj::StartSound,"StartSound");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineButtonSound,"DefineButtonSound");
	HX_MARK_MEMBER_NAME(TagId_obj::SoundStreamHead,"SoundStreamHead");
	HX_MARK_MEMBER_NAME(TagId_obj::SoundStreamBlock,"SoundStreamBlock");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineBitsLossless,"DefineBitsLossless");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineBitsJPEG2,"DefineBitsJPEG2");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineShape2,"DefineShape2");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineButtonCxform,"DefineButtonCxform");
	HX_MARK_MEMBER_NAME(TagId_obj::Protect,"Protect");
	HX_MARK_MEMBER_NAME(TagId_obj::PlaceObject2,"PlaceObject2");
	HX_MARK_MEMBER_NAME(TagId_obj::RemoveObject2,"RemoveObject2");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineShape3,"DefineShape3");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineText2,"DefineText2");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineButton2,"DefineButton2");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineBitsJPEG3,"DefineBitsJPEG3");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineBitsLossless2,"DefineBitsLossless2");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineEditText,"DefineEditText");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineSprite,"DefineSprite");
	HX_MARK_MEMBER_NAME(TagId_obj::FrameLabel,"FrameLabel");
	HX_MARK_MEMBER_NAME(TagId_obj::SoundStreamHead2,"SoundStreamHead2");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineMorphShape,"DefineMorphShape");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineFont2,"DefineFont2");
	HX_MARK_MEMBER_NAME(TagId_obj::ExportAssets,"ExportAssets");
	HX_MARK_MEMBER_NAME(TagId_obj::ImportAssets,"ImportAssets");
	HX_MARK_MEMBER_NAME(TagId_obj::EnableDebugger,"EnableDebugger");
	HX_MARK_MEMBER_NAME(TagId_obj::DoInitAction,"DoInitAction");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineVideoStream,"DefineVideoStream");
	HX_MARK_MEMBER_NAME(TagId_obj::VideoFrame,"VideoFrame");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineFontInfo2,"DefineFontInfo2");
	HX_MARK_MEMBER_NAME(TagId_obj::EnableDebugger2,"EnableDebugger2");
	HX_MARK_MEMBER_NAME(TagId_obj::ScriptLimits,"ScriptLimits");
	HX_MARK_MEMBER_NAME(TagId_obj::SetTabIndex,"SetTabIndex");
	HX_MARK_MEMBER_NAME(TagId_obj::FileAttributes,"FileAttributes");
	HX_MARK_MEMBER_NAME(TagId_obj::PlaceObject3,"PlaceObject3");
	HX_MARK_MEMBER_NAME(TagId_obj::ImportAssets2,"ImportAssets2");
	HX_MARK_MEMBER_NAME(TagId_obj::RawABC,"RawABC");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineFontAlignZones,"DefineFontAlignZones");
	HX_MARK_MEMBER_NAME(TagId_obj::CSMTextSettings,"CSMTextSettings");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineFont3,"DefineFont3");
	HX_MARK_MEMBER_NAME(TagId_obj::SymbolClass,"SymbolClass");
	HX_MARK_MEMBER_NAME(TagId_obj::Metadata,"Metadata");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineScalingGrid,"DefineScalingGrid");
	HX_MARK_MEMBER_NAME(TagId_obj::DoABC,"DoABC");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineShape4,"DefineShape4");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineMorphShape2,"DefineMorphShape2");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineSceneAndFrameLabelData,"DefineSceneAndFrameLabelData");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineBinaryData,"DefineBinaryData");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineFontName,"DefineFontName");
	HX_MARK_MEMBER_NAME(TagId_obj::StartSound2,"StartSound2");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineBitsJPEG4,"DefineBitsJPEG4");
	HX_MARK_MEMBER_NAME(TagId_obj::DefineFont4,"DefineFont4");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TagId_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TagId_obj::End,"End");
	HX_VISIT_MEMBER_NAME(TagId_obj::ShowFrame,"ShowFrame");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineShape,"DefineShape");
	HX_VISIT_MEMBER_NAME(TagId_obj::PlaceObject,"PlaceObject");
	HX_VISIT_MEMBER_NAME(TagId_obj::RemoveObject,"RemoveObject");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineBits,"DefineBits");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineButton,"DefineButton");
	HX_VISIT_MEMBER_NAME(TagId_obj::JPEGTables,"JPEGTables");
	HX_VISIT_MEMBER_NAME(TagId_obj::SetBackgroundColor,"SetBackgroundColor");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineFont,"DefineFont");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineText,"DefineText");
	HX_VISIT_MEMBER_NAME(TagId_obj::DoAction,"DoAction");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineFontInfo,"DefineFontInfo");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineSound,"DefineSound");
	HX_VISIT_MEMBER_NAME(TagId_obj::StartSound,"StartSound");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineButtonSound,"DefineButtonSound");
	HX_VISIT_MEMBER_NAME(TagId_obj::SoundStreamHead,"SoundStreamHead");
	HX_VISIT_MEMBER_NAME(TagId_obj::SoundStreamBlock,"SoundStreamBlock");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineBitsLossless,"DefineBitsLossless");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineBitsJPEG2,"DefineBitsJPEG2");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineShape2,"DefineShape2");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineButtonCxform,"DefineButtonCxform");
	HX_VISIT_MEMBER_NAME(TagId_obj::Protect,"Protect");
	HX_VISIT_MEMBER_NAME(TagId_obj::PlaceObject2,"PlaceObject2");
	HX_VISIT_MEMBER_NAME(TagId_obj::RemoveObject2,"RemoveObject2");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineShape3,"DefineShape3");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineText2,"DefineText2");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineButton2,"DefineButton2");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineBitsJPEG3,"DefineBitsJPEG3");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineBitsLossless2,"DefineBitsLossless2");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineEditText,"DefineEditText");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineSprite,"DefineSprite");
	HX_VISIT_MEMBER_NAME(TagId_obj::FrameLabel,"FrameLabel");
	HX_VISIT_MEMBER_NAME(TagId_obj::SoundStreamHead2,"SoundStreamHead2");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineMorphShape,"DefineMorphShape");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineFont2,"DefineFont2");
	HX_VISIT_MEMBER_NAME(TagId_obj::ExportAssets,"ExportAssets");
	HX_VISIT_MEMBER_NAME(TagId_obj::ImportAssets,"ImportAssets");
	HX_VISIT_MEMBER_NAME(TagId_obj::EnableDebugger,"EnableDebugger");
	HX_VISIT_MEMBER_NAME(TagId_obj::DoInitAction,"DoInitAction");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineVideoStream,"DefineVideoStream");
	HX_VISIT_MEMBER_NAME(TagId_obj::VideoFrame,"VideoFrame");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineFontInfo2,"DefineFontInfo2");
	HX_VISIT_MEMBER_NAME(TagId_obj::EnableDebugger2,"EnableDebugger2");
	HX_VISIT_MEMBER_NAME(TagId_obj::ScriptLimits,"ScriptLimits");
	HX_VISIT_MEMBER_NAME(TagId_obj::SetTabIndex,"SetTabIndex");
	HX_VISIT_MEMBER_NAME(TagId_obj::FileAttributes,"FileAttributes");
	HX_VISIT_MEMBER_NAME(TagId_obj::PlaceObject3,"PlaceObject3");
	HX_VISIT_MEMBER_NAME(TagId_obj::ImportAssets2,"ImportAssets2");
	HX_VISIT_MEMBER_NAME(TagId_obj::RawABC,"RawABC");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineFontAlignZones,"DefineFontAlignZones");
	HX_VISIT_MEMBER_NAME(TagId_obj::CSMTextSettings,"CSMTextSettings");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineFont3,"DefineFont3");
	HX_VISIT_MEMBER_NAME(TagId_obj::SymbolClass,"SymbolClass");
	HX_VISIT_MEMBER_NAME(TagId_obj::Metadata,"Metadata");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineScalingGrid,"DefineScalingGrid");
	HX_VISIT_MEMBER_NAME(TagId_obj::DoABC,"DoABC");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineShape4,"DefineShape4");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineMorphShape2,"DefineMorphShape2");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineSceneAndFrameLabelData,"DefineSceneAndFrameLabelData");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineBinaryData,"DefineBinaryData");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineFontName,"DefineFontName");
	HX_VISIT_MEMBER_NAME(TagId_obj::StartSound2,"StartSound2");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineBitsJPEG4,"DefineBitsJPEG4");
	HX_VISIT_MEMBER_NAME(TagId_obj::DefineFont4,"DefineFont4");
};

#endif

Class TagId_obj::__mClass;

void TagId_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.TagId"), hx::TCanCast< TagId_obj> ,sStaticFields,sMemberFields,
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

void TagId_obj::__boot()
{
	End= (int)0;
	ShowFrame= (int)1;
	DefineShape= (int)2;
	PlaceObject= (int)4;
	RemoveObject= (int)5;
	DefineBits= (int)6;
	DefineButton= (int)7;
	JPEGTables= (int)8;
	SetBackgroundColor= (int)9;
	DefineFont= (int)10;
	DefineText= (int)11;
	DoAction= (int)12;
	DefineFontInfo= (int)13;
	DefineSound= (int)14;
	StartSound= (int)15;
	DefineButtonSound= (int)17;
	SoundStreamHead= (int)18;
	SoundStreamBlock= (int)19;
	DefineBitsLossless= (int)20;
	DefineBitsJPEG2= (int)21;
	DefineShape2= (int)22;
	DefineButtonCxform= (int)23;
	Protect= (int)24;
	PlaceObject2= (int)26;
	RemoveObject2= (int)28;
	DefineShape3= (int)32;
	DefineText2= (int)33;
	DefineButton2= (int)34;
	DefineBitsJPEG3= (int)35;
	DefineBitsLossless2= (int)36;
	DefineEditText= (int)37;
	DefineSprite= (int)39;
	FrameLabel= (int)43;
	SoundStreamHead2= (int)45;
	DefineMorphShape= (int)46;
	DefineFont2= (int)48;
	ExportAssets= (int)56;
	ImportAssets= (int)57;
	EnableDebugger= (int)58;
	DoInitAction= (int)59;
	DefineVideoStream= (int)60;
	VideoFrame= (int)61;
	DefineFontInfo2= (int)62;
	EnableDebugger2= (int)64;
	ScriptLimits= (int)65;
	SetTabIndex= (int)66;
	FileAttributes= (int)69;
	PlaceObject3= (int)70;
	ImportAssets2= (int)71;
	RawABC= (int)72;
	DefineFontAlignZones= (int)73;
	CSMTextSettings= (int)74;
	DefineFont3= (int)75;
	SymbolClass= (int)76;
	Metadata= (int)77;
	DefineScalingGrid= (int)78;
	DoABC= (int)82;
	DefineShape4= (int)83;
	DefineMorphShape2= (int)84;
	DefineSceneAndFrameLabelData= (int)86;
	DefineBinaryData= (int)87;
	DefineFontName= (int)88;
	StartSound2= (int)89;
	DefineBitsJPEG4= (int)90;
	DefineFont4= (int)91;
}

} // end namespace format
} // end namespace swf
