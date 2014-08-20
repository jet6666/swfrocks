#ifndef INCLUDED_format_swf_PlaceObject
#define INCLUDED_format_swf_PlaceObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,BlendMode)
HX_DECLARE_CLASS2(format,swf,Filter)
HX_DECLARE_CLASS2(format,swf,PlaceObject)
namespace format{
namespace swf{


class HXCPP_CLASS_ATTRIBUTES  PlaceObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PlaceObject_obj OBJ_;
		PlaceObject_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlaceObject_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlaceObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlaceObject"); }

		int depth;
		bool move;
		Dynamic cid;
		Dynamic matrix;
		Dynamic color;
		Dynamic ratio;
		::String instanceName;
		Dynamic clipDepth;
		Dynamic events;
		Array< ::Dynamic > filters;
		::format::swf::BlendMode blendMode;
		Dynamic bitmapCache;
		bool hasImage;
		::String className;
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_PlaceObject */ 
