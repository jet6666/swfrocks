#ifndef INCLUDED_format_swf_SoundData
#define INCLUDED_format_swf_SoundData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,SoundData)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace format{
namespace swf{


class SoundData_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SoundData_obj OBJ_;

	public:
		SoundData_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.SoundData"); }
		::String __ToString() const { return HX_CSTRING("SoundData.") + tag; }

		static ::format::swf::SoundData SDMp3(int seek,::haxe::io::Bytes data);
		static Dynamic SDMp3_dyn();
		static ::format::swf::SoundData SDOther(::haxe::io::Bytes data);
		static Dynamic SDOther_dyn();
		static ::format::swf::SoundData SDRaw(::haxe::io::Bytes data);
		static Dynamic SDRaw_dyn();
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_SoundData */ 
