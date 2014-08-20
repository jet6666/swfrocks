#ifndef INCLUDED_format_swf_SoundFormat
#define INCLUDED_format_swf_SoundFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,swf,SoundFormat)
namespace format{
namespace swf{


class SoundFormat_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SoundFormat_obj OBJ_;

	public:
		SoundFormat_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("format.swf.SoundFormat"); }
		::String __ToString() const { return HX_CSTRING("SoundFormat.") + tag; }

		static ::format::swf::SoundFormat SFADPCM;
		static inline ::format::swf::SoundFormat SFADPCM_dyn() { return SFADPCM; }
		static ::format::swf::SoundFormat SFLittleEndianUncompressed;
		static inline ::format::swf::SoundFormat SFLittleEndianUncompressed_dyn() { return SFLittleEndianUncompressed; }
		static ::format::swf::SoundFormat SFMP3;
		static inline ::format::swf::SoundFormat SFMP3_dyn() { return SFMP3; }
		static ::format::swf::SoundFormat SFNativeEndianUncompressed;
		static inline ::format::swf::SoundFormat SFNativeEndianUncompressed_dyn() { return SFNativeEndianUncompressed; }
		static ::format::swf::SoundFormat SFNellymoser;
		static inline ::format::swf::SoundFormat SFNellymoser_dyn() { return SFNellymoser; }
		static ::format::swf::SoundFormat SFNellymoser16k;
		static inline ::format::swf::SoundFormat SFNellymoser16k_dyn() { return SFNellymoser16k; }
		static ::format::swf::SoundFormat SFNellymoser8k;
		static inline ::format::swf::SoundFormat SFNellymoser8k_dyn() { return SFNellymoser8k; }
		static ::format::swf::SoundFormat SFSpeex;
		static inline ::format::swf::SoundFormat SFSpeex_dyn() { return SFSpeex; }
};

} // end namespace format
} // end namespace swf

#endif /* INCLUDED_format_swf_SoundFormat */ 
