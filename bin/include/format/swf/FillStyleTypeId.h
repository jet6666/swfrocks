#ifndef INCLUDED_format_swf_FillStyleTypeId
#define INCLUDED_format_swf_FillStyleTypeId

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,FillStyleTypeId)
namespace format{
namespace swf{


class HXCPP_CLASS_ATTRIBUTES  FillStyleTypeId_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FillStyleTypeId_obj OBJ_;
		FillStyleTypeId_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FillStyleTypeId_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FillStyleTypeId_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FillStyleTypeId"); }

		static int Solid;
		static int LinearGradient;
		static int RadialGradient;
		static int FocalRadialGradient;
		static int RepeatingBitmap;
		static int ClippedBitmap;
		static int NonSmoothedRepeatingBitmap;
		static int NonSmoothedClippedBitmap;
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_FillStyleTypeId */ 
