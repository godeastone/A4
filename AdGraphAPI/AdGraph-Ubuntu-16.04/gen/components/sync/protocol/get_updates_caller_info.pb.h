// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: get_updates_caller_info.proto

#ifndef PROTOBUF_get_5fupdates_5fcaller_5finfo_2eproto__INCLUDED
#define PROTOBUF_get_5fupdates_5fcaller_5finfo_2eproto__INCLUDED

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
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
namespace sync_pb {
class GetUpdatesCallerInfo;
class GetUpdatesCallerInfoDefaultTypeInternal;
extern GetUpdatesCallerInfoDefaultTypeInternal _GetUpdatesCallerInfo_default_instance_;
}  // namespace sync_pb

namespace sync_pb {

namespace protobuf_get_5fupdates_5fcaller_5finfo_2eproto {
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
}  // namespace protobuf_get_5fupdates_5fcaller_5finfo_2eproto

enum GetUpdatesCallerInfo_GetUpdatesSource {
  GetUpdatesCallerInfo_GetUpdatesSource_UNKNOWN = 0,
  GetUpdatesCallerInfo_GetUpdatesSource_FIRST_UPDATE = 1,
  GetUpdatesCallerInfo_GetUpdatesSource_LOCAL = 2,
  GetUpdatesCallerInfo_GetUpdatesSource_NOTIFICATION = 3,
  GetUpdatesCallerInfo_GetUpdatesSource_PERIODIC = 4,
  GetUpdatesCallerInfo_GetUpdatesSource_SYNC_CYCLE_CONTINUATION = 5,
  GetUpdatesCallerInfo_GetUpdatesSource_NEWLY_SUPPORTED_DATATYPE = 7,
  GetUpdatesCallerInfo_GetUpdatesSource_MIGRATION = 8,
  GetUpdatesCallerInfo_GetUpdatesSource_NEW_CLIENT = 9,
  GetUpdatesCallerInfo_GetUpdatesSource_RECONFIGURATION = 10,
  GetUpdatesCallerInfo_GetUpdatesSource_DATATYPE_REFRESH = 11,
  GetUpdatesCallerInfo_GetUpdatesSource_RETRY = 13,
  GetUpdatesCallerInfo_GetUpdatesSource_PROGRAMMATIC = 14
};
bool GetUpdatesCallerInfo_GetUpdatesSource_IsValid(int value);
const GetUpdatesCallerInfo_GetUpdatesSource GetUpdatesCallerInfo_GetUpdatesSource_GetUpdatesSource_MIN = GetUpdatesCallerInfo_GetUpdatesSource_UNKNOWN;
const GetUpdatesCallerInfo_GetUpdatesSource GetUpdatesCallerInfo_GetUpdatesSource_GetUpdatesSource_MAX = GetUpdatesCallerInfo_GetUpdatesSource_PROGRAMMATIC;
const int GetUpdatesCallerInfo_GetUpdatesSource_GetUpdatesSource_ARRAYSIZE = GetUpdatesCallerInfo_GetUpdatesSource_GetUpdatesSource_MAX + 1;

// ===================================================================

class GetUpdatesCallerInfo : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:sync_pb.GetUpdatesCallerInfo) */ {
 public:
  GetUpdatesCallerInfo();
  virtual ~GetUpdatesCallerInfo();

  GetUpdatesCallerInfo(const GetUpdatesCallerInfo& from);

  inline GetUpdatesCallerInfo& operator=(const GetUpdatesCallerInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const GetUpdatesCallerInfo& default_instance();

  static inline const GetUpdatesCallerInfo* internal_default_instance() {
    return reinterpret_cast<const GetUpdatesCallerInfo*>(
               &_GetUpdatesCallerInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(GetUpdatesCallerInfo* other);

  // implements Message ----------------------------------------------

  inline GetUpdatesCallerInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  GetUpdatesCallerInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const GetUpdatesCallerInfo& from);
  void MergeFrom(const GetUpdatesCallerInfo& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(GetUpdatesCallerInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef GetUpdatesCallerInfo_GetUpdatesSource GetUpdatesSource;
  static const GetUpdatesSource UNKNOWN =
    GetUpdatesCallerInfo_GetUpdatesSource_UNKNOWN;
  static const GetUpdatesSource FIRST_UPDATE =
    GetUpdatesCallerInfo_GetUpdatesSource_FIRST_UPDATE;
  static const GetUpdatesSource LOCAL =
    GetUpdatesCallerInfo_GetUpdatesSource_LOCAL;
  static const GetUpdatesSource NOTIFICATION =
    GetUpdatesCallerInfo_GetUpdatesSource_NOTIFICATION;
  static const GetUpdatesSource PERIODIC =
    GetUpdatesCallerInfo_GetUpdatesSource_PERIODIC;
  static const GetUpdatesSource SYNC_CYCLE_CONTINUATION =
    GetUpdatesCallerInfo_GetUpdatesSource_SYNC_CYCLE_CONTINUATION;
  static const GetUpdatesSource NEWLY_SUPPORTED_DATATYPE =
    GetUpdatesCallerInfo_GetUpdatesSource_NEWLY_SUPPORTED_DATATYPE;
  static const GetUpdatesSource MIGRATION =
    GetUpdatesCallerInfo_GetUpdatesSource_MIGRATION;
  static const GetUpdatesSource NEW_CLIENT =
    GetUpdatesCallerInfo_GetUpdatesSource_NEW_CLIENT;
  static const GetUpdatesSource RECONFIGURATION =
    GetUpdatesCallerInfo_GetUpdatesSource_RECONFIGURATION;
  static const GetUpdatesSource DATATYPE_REFRESH =
    GetUpdatesCallerInfo_GetUpdatesSource_DATATYPE_REFRESH;
  static const GetUpdatesSource RETRY =
    GetUpdatesCallerInfo_GetUpdatesSource_RETRY;
  static const GetUpdatesSource PROGRAMMATIC =
    GetUpdatesCallerInfo_GetUpdatesSource_PROGRAMMATIC;
  static inline bool GetUpdatesSource_IsValid(int value) {
    return GetUpdatesCallerInfo_GetUpdatesSource_IsValid(value);
  }
  static const GetUpdatesSource GetUpdatesSource_MIN =
    GetUpdatesCallerInfo_GetUpdatesSource_GetUpdatesSource_MIN;
  static const GetUpdatesSource GetUpdatesSource_MAX =
    GetUpdatesCallerInfo_GetUpdatesSource_GetUpdatesSource_MAX;
  static const int GetUpdatesSource_ARRAYSIZE =
    GetUpdatesCallerInfo_GetUpdatesSource_GetUpdatesSource_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // required .sync_pb.GetUpdatesCallerInfo.GetUpdatesSource source = 1 [deprecated = true];
  GOOGLE_PROTOBUF_DEPRECATED_ATTR bool has_source() const;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void clear_source();
  GOOGLE_PROTOBUF_DEPRECATED_ATTR static const int kSourceFieldNumber = 1;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR ::sync_pb::GetUpdatesCallerInfo_GetUpdatesSource source() const;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void set_source(::sync_pb::GetUpdatesCallerInfo_GetUpdatesSource value);

  // optional bool notifications_enabled = 2;
  bool has_notifications_enabled() const;
  void clear_notifications_enabled();
  static const int kNotificationsEnabledFieldNumber = 2;
  bool notifications_enabled() const;
  void set_notifications_enabled(bool value);

  // @@protoc_insertion_point(class_scope:sync_pb.GetUpdatesCallerInfo)
 private:
  void set_has_source();
  void clear_has_source();
  void set_has_notifications_enabled();
  void clear_has_notifications_enabled();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  int source_;
  bool notifications_enabled_;
  friend struct protobuf_get_5fupdates_5fcaller_5finfo_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// GetUpdatesCallerInfo

// required .sync_pb.GetUpdatesCallerInfo.GetUpdatesSource source = 1 [deprecated = true];
inline bool GetUpdatesCallerInfo::has_source() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetUpdatesCallerInfo::set_has_source() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetUpdatesCallerInfo::clear_has_source() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetUpdatesCallerInfo::clear_source() {
  source_ = 0;
  clear_has_source();
}
inline ::sync_pb::GetUpdatesCallerInfo_GetUpdatesSource GetUpdatesCallerInfo::source() const {
  // @@protoc_insertion_point(field_get:sync_pb.GetUpdatesCallerInfo.source)
  return static_cast< ::sync_pb::GetUpdatesCallerInfo_GetUpdatesSource >(source_);
}
inline void GetUpdatesCallerInfo::set_source(::sync_pb::GetUpdatesCallerInfo_GetUpdatesSource value) {
  assert(::sync_pb::GetUpdatesCallerInfo_GetUpdatesSource_IsValid(value));
  set_has_source();
  source_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.GetUpdatesCallerInfo.source)
}

// optional bool notifications_enabled = 2;
inline bool GetUpdatesCallerInfo::has_notifications_enabled() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GetUpdatesCallerInfo::set_has_notifications_enabled() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GetUpdatesCallerInfo::clear_has_notifications_enabled() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GetUpdatesCallerInfo::clear_notifications_enabled() {
  notifications_enabled_ = false;
  clear_has_notifications_enabled();
}
inline bool GetUpdatesCallerInfo::notifications_enabled() const {
  // @@protoc_insertion_point(field_get:sync_pb.GetUpdatesCallerInfo.notifications_enabled)
  return notifications_enabled_;
}
inline void GetUpdatesCallerInfo::set_notifications_enabled(bool value) {
  set_has_notifications_enabled();
  notifications_enabled_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.GetUpdatesCallerInfo.notifications_enabled)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace sync_pb

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::sync_pb::GetUpdatesCallerInfo_GetUpdatesSource> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_get_5fupdates_5fcaller_5finfo_2eproto__INCLUDED
