// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: download_source.proto

#ifndef PROTOBUF_download_5fsource_2eproto__INCLUDED
#define PROTOBUF_download_5fsource_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
namespace metadata_pb {
}  // namespace metadata_pb

namespace metadata_pb {

namespace protobuf_download_5fsource_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_download_5fsource_2eproto

enum DownloadSource {
  UNKNOWN = 0,
  NAVIGATION = 1,
  DRAG_AND_DROP = 2,
  FROM_RENDERER = 3,
  EXTENSION_API = 4,
  EXTENSION_INSTALLER = 5,
  INTERNAL_API = 6,
  WEB_CONTENTS_API = 7,
  OFFLINE_PAGE = 8,
  CONTEXT_MENU = 9
};
bool DownloadSource_IsValid(int value);
const DownloadSource DownloadSource_MIN = UNKNOWN;
const DownloadSource DownloadSource_MAX = CONTEXT_MENU;
const int DownloadSource_ARRAYSIZE = DownloadSource_MAX + 1;

// ===================================================================


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace metadata_pb

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::metadata_pb::DownloadSource> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_download_5fsource_2eproto__INCLUDED
