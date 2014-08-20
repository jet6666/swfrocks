#include <hxcpp.h>

#ifndef INCLUDED_format_swf_BlendMode
#include <format/swf/BlendMode.h>
#endif
#ifndef INCLUDED_format_swf_Filter
#include <format/swf/Filter.h>
#endif
#ifndef INCLUDED_format_swf_PlaceObject
#include <format/swf/PlaceObject.h>
#endif
namespace format{
namespace swf{

Void PlaceObject_obj::__construct()
{
HX_STACK_FRAME("format.swf.PlaceObject","new",0x011e26d5,"format.swf.PlaceObject.new","format/swf/Data.hx",102,0x6131a18f)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//PlaceObject_obj::~PlaceObject_obj() { }

Dynamic PlaceObject_obj::__CreateEmpty() { return  new PlaceObject_obj; }
hx::ObjectPtr< PlaceObject_obj > PlaceObject_obj::__new()
{  hx::ObjectPtr< PlaceObject_obj > result = new PlaceObject_obj();
	result->__construct();
	return result;}

Dynamic PlaceObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlaceObject_obj > result = new PlaceObject_obj();
	result->__construct();
	return result;}


PlaceObject_obj::PlaceObject_obj()
{
}

void PlaceObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlaceObject);
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(move,"move");
	HX_MARK_MEMBER_NAME(cid,"cid");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(ratio,"ratio");
	HX_MARK_MEMBER_NAME(instanceName,"instanceName");
	HX_MARK_MEMBER_NAME(clipDepth,"clipDepth");
	HX_MARK_MEMBER_NAME(events,"events");
	HX_MARK_MEMBER_NAME(filters,"filters");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(bitmapCache,"bitmapCache");
	HX_MARK_MEMBER_NAME(hasImage,"hasImage");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_END_CLASS();
}

void PlaceObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(move,"move");
	HX_VISIT_MEMBER_NAME(cid,"cid");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(ratio,"ratio");
	HX_VISIT_MEMBER_NAME(instanceName,"instanceName");
	HX_VISIT_MEMBER_NAME(clipDepth,"clipDepth");
	HX_VISIT_MEMBER_NAME(events,"events");
	HX_VISIT_MEMBER_NAME(filters,"filters");
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(bitmapCache,"bitmapCache");
	HX_VISIT_MEMBER_NAME(hasImage,"hasImage");
	HX_VISIT_MEMBER_NAME(className,"className");
}

Dynamic PlaceObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cid") ) { return cid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"ratio") ) { return ratio; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"events") ) { return events; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { return filters; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasImage") ) { return hasImage; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clipDepth") ) { return clipDepth; }
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bitmapCache") ) { return bitmapCache; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"instanceName") ) { return instanceName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlaceObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cid") ) { cid=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { move=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ratio") ) { ratio=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"events") ) { events=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasImage") ) { hasImage=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clipDepth") ) { clipDepth=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast< ::format::swf::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bitmapCache") ) { bitmapCache=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"instanceName") ) { instanceName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlaceObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("depth"));
	outFields->push(HX_CSTRING("move"));
	outFields->push(HX_CSTRING("cid"));
	outFields->push(HX_CSTRING("matrix"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("ratio"));
	outFields->push(HX_CSTRING("instanceName"));
	outFields->push(HX_CSTRING("clipDepth"));
	outFields->push(HX_CSTRING("events"));
	outFields->push(HX_CSTRING("filters"));
	outFields->push(HX_CSTRING("blendMode"));
	outFields->push(HX_CSTRING("bitmapCache"));
	outFields->push(HX_CSTRING("hasImage"));
	outFields->push(HX_CSTRING("className"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PlaceObject_obj,depth),HX_CSTRING("depth")},
	{hx::fsBool,(int)offsetof(PlaceObject_obj,move),HX_CSTRING("move")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PlaceObject_obj,cid),HX_CSTRING("cid")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PlaceObject_obj,matrix),HX_CSTRING("matrix")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PlaceObject_obj,color),HX_CSTRING("color")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PlaceObject_obj,ratio),HX_CSTRING("ratio")},
	{hx::fsString,(int)offsetof(PlaceObject_obj,instanceName),HX_CSTRING("instanceName")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PlaceObject_obj,clipDepth),HX_CSTRING("clipDepth")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PlaceObject_obj,events),HX_CSTRING("events")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlaceObject_obj,filters),HX_CSTRING("filters")},
	{hx::fsObject /*::format::swf::BlendMode*/ ,(int)offsetof(PlaceObject_obj,blendMode),HX_CSTRING("blendMode")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PlaceObject_obj,bitmapCache),HX_CSTRING("bitmapCache")},
	{hx::fsBool,(int)offsetof(PlaceObject_obj,hasImage),HX_CSTRING("hasImage")},
	{hx::fsString,(int)offsetof(PlaceObject_obj,className),HX_CSTRING("className")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("depth"),
	HX_CSTRING("move"),
	HX_CSTRING("cid"),
	HX_CSTRING("matrix"),
	HX_CSTRING("color"),
	HX_CSTRING("ratio"),
	HX_CSTRING("instanceName"),
	HX_CSTRING("clipDepth"),
	HX_CSTRING("events"),
	HX_CSTRING("filters"),
	HX_CSTRING("blendMode"),
	HX_CSTRING("bitmapCache"),
	HX_CSTRING("hasImage"),
	HX_CSTRING("className"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlaceObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlaceObject_obj::__mClass,"__mClass");
};

#endif

Class PlaceObject_obj::__mClass;

void PlaceObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.swf.PlaceObject"), hx::TCanCast< PlaceObject_obj> ,sStaticFields,sMemberFields,
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

void PlaceObject_obj::__boot()
{
}

} // end namespace format
} // end namespace swf
