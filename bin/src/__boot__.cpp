#include <hxcpp.h>

#include <sys/io/FileOutput.h>
#include <sys/io/FileInput.h>
#include <sys/io/File.h>
#include <haxe/zip/Uncompress.h>
#include <haxe/zip/FlushMode.h>
#include <haxe/zip/Compress.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesOutput.h>
#include <haxe/io/Output.h>
#include <haxe/io/BytesInput.h>
#include <haxe/io/Input.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/io/Bytes.h>
#include <haxe/ds/StringMap.h>
#include <haxe/Log.h>
#include <format/tools/Inflate.h>
#include <format/tools/Deflate.h>
#include <format/tools/BitsOutput.h>
#include <format/tools/BitsInput.h>
#include <format/swf/Writer.h>
#include <format/swf/Tools.h>
#include <format/swf/Reader.h>
#include <format/swf/LangCode.h>
#include <format/swf/FontInfoData.h>
#include <format/swf/FontData.h>
#include <format/swf/SoundRate.h>
#include <format/swf/SoundFormat.h>
#include <format/swf/SoundData.h>
#include <format/swf/ColorModel.h>
#include <format/swf/JPEGData.h>
#include <format/swf/Filter.h>
#include <format/swf/BlendMode.h>
#include <format/swf/InterpolationMode.h>
#include <format/swf/SpreadMode.h>
#include <format/swf/GradRecord.h>
#include <format/swf/LS2Fill.h>
#include <format/swf/LineJoinStyle.h>
#include <format/swf/LineCapStyle.h>
#include <format/swf/LineStyleData.h>
#include <format/swf/FillStyle.h>
#include <format/swf/ShapeRecord.h>
#include <format/swf/Morph2LineStyle.h>
#include <format/swf/MorphFillStyle.h>
#include <format/swf/MorphShapeData.h>
#include <format/swf/ShapeData.h>
#include <format/swf/PlaceObject.h>
#include <format/swf/SWFTag.h>
#include <format/swf/FillStyleTypeId.h>
#include <format/swf/TagId.h>
#include <format/abc/Writer.h>
#include <format/abc/Reader.h>
#include <format/abc/OpWriter.h>
#include <format/abc/OpReader.h>
#include <format/abc/Operation.h>
#include <format/abc/JumpStyle.h>
#include <format/abc/OpCode.h>
#include <format/abc/ABCData.h>
#include <format/abc/FieldKind.h>
#include <format/abc/MethodKind.h>
#include <format/abc/Value.h>
#include <format/abc/Name.h>
#include <format/abc/Namespace.h>
#include <format/abc/Index.h>
#include <Type.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Std.h>
#include <IMap.h>
#include <Main.h>
#include <EReg.h>
#include <cpp/Lib.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::sys::io::FileOutput_obj::__register();
::sys::io::FileInput_obj::__register();
::sys::io::File_obj::__register();
::haxe::zip::Uncompress_obj::__register();
::haxe::zip::FlushMode_obj::__register();
::haxe::zip::Compress_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesOutput_obj::__register();
::haxe::io::Output_obj::__register();
::haxe::io::BytesInput_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::io::Bytes_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::Log_obj::__register();
::format::tools::Inflate_obj::__register();
::format::tools::Deflate_obj::__register();
::format::tools::BitsOutput_obj::__register();
::format::tools::BitsInput_obj::__register();
::format::swf::Writer_obj::__register();
::format::swf::Tools_obj::__register();
::format::swf::Reader_obj::__register();
::format::swf::LangCode_obj::__register();
::format::swf::FontInfoData_obj::__register();
::format::swf::FontData_obj::__register();
::format::swf::SoundRate_obj::__register();
::format::swf::SoundFormat_obj::__register();
::format::swf::SoundData_obj::__register();
::format::swf::ColorModel_obj::__register();
::format::swf::JPEGData_obj::__register();
::format::swf::Filter_obj::__register();
::format::swf::BlendMode_obj::__register();
::format::swf::InterpolationMode_obj::__register();
::format::swf::SpreadMode_obj::__register();
::format::swf::GradRecord_obj::__register();
::format::swf::LS2Fill_obj::__register();
::format::swf::LineJoinStyle_obj::__register();
::format::swf::LineCapStyle_obj::__register();
::format::swf::LineStyleData_obj::__register();
::format::swf::FillStyle_obj::__register();
::format::swf::ShapeRecord_obj::__register();
::format::swf::Morph2LineStyle_obj::__register();
::format::swf::MorphFillStyle_obj::__register();
::format::swf::MorphShapeData_obj::__register();
::format::swf::ShapeData_obj::__register();
::format::swf::PlaceObject_obj::__register();
::format::swf::SWFTag_obj::__register();
::format::swf::FillStyleTypeId_obj::__register();
::format::swf::TagId_obj::__register();
::format::abc::Writer_obj::__register();
::format::abc::Reader_obj::__register();
::format::abc::OpWriter_obj::__register();
::format::abc::OpReader_obj::__register();
::format::abc::Operation_obj::__register();
::format::abc::JumpStyle_obj::__register();
::format::abc::OpCode_obj::__register();
::format::abc::ABCData_obj::__register();
::format::abc::FieldKind_obj::__register();
::format::abc::MethodKind_obj::__register();
::format::abc::Value_obj::__register();
::format::abc::Name_obj::__register();
::format::abc::Namespace_obj::__register();
::format::abc::Index_obj::__register();
::Type_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::IMap_obj::__register();
::Main_obj::__register();
::EReg_obj::__register();
::cpp::Lib_obj::__register();
::cpp::Lib_obj::__boot();
::EReg_obj::__boot();
::haxe::Log_obj::__boot();
::Main_obj::__boot();
::IMap_obj::__boot();
::Std_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::Type_obj::__boot();
::format::abc::Index_obj::__boot();
::format::abc::Namespace_obj::__boot();
::format::abc::Name_obj::__boot();
::format::abc::Value_obj::__boot();
::format::abc::MethodKind_obj::__boot();
::format::abc::FieldKind_obj::__boot();
::format::abc::ABCData_obj::__boot();
::format::abc::OpCode_obj::__boot();
::format::abc::JumpStyle_obj::__boot();
::format::abc::Operation_obj::__boot();
::format::abc::OpReader_obj::__boot();
::format::abc::OpWriter_obj::__boot();
::format::abc::Reader_obj::__boot();
::format::abc::Writer_obj::__boot();
::format::swf::TagId_obj::__boot();
::format::swf::FillStyleTypeId_obj::__boot();
::format::swf::SWFTag_obj::__boot();
::format::swf::PlaceObject_obj::__boot();
::format::swf::ShapeData_obj::__boot();
::format::swf::MorphShapeData_obj::__boot();
::format::swf::MorphFillStyle_obj::__boot();
::format::swf::Morph2LineStyle_obj::__boot();
::format::swf::ShapeRecord_obj::__boot();
::format::swf::FillStyle_obj::__boot();
::format::swf::LineStyleData_obj::__boot();
::format::swf::LineCapStyle_obj::__boot();
::format::swf::LineJoinStyle_obj::__boot();
::format::swf::LS2Fill_obj::__boot();
::format::swf::GradRecord_obj::__boot();
::format::swf::SpreadMode_obj::__boot();
::format::swf::InterpolationMode_obj::__boot();
::format::swf::BlendMode_obj::__boot();
::format::swf::Filter_obj::__boot();
::format::swf::JPEGData_obj::__boot();
::format::swf::ColorModel_obj::__boot();
::format::swf::SoundData_obj::__boot();
::format::swf::SoundFormat_obj::__boot();
::format::swf::SoundRate_obj::__boot();
::format::swf::FontData_obj::__boot();
::format::swf::FontInfoData_obj::__boot();
::format::swf::LangCode_obj::__boot();
::format::swf::Reader_obj::__boot();
::format::swf::Tools_obj::__boot();
::format::swf::Writer_obj::__boot();
::format::tools::BitsInput_obj::__boot();
::format::tools::BitsOutput_obj::__boot();
::format::tools::Deflate_obj::__boot();
::format::tools::Inflate_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Input_obj::__boot();
::haxe::io::BytesInput_obj::__boot();
::haxe::io::Output_obj::__boot();
::haxe::io::BytesOutput_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::zip::Compress_obj::__boot();
::haxe::zip::FlushMode_obj::__boot();
::haxe::zip::Uncompress_obj::__boot();
::sys::io::File_obj::__boot();
::sys::io::FileInput_obj::__boot();
::sys::io::FileOutput_obj::__boot();
}

