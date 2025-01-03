// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: device_info_specifics.proto

#ifndef PROTOBUF_device_5finfo_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_device_5finfo_5fspecifics_2eproto__INCLUDED

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
#include "sync_enums.pb.h"
// @@protoc_insertion_point(includes)
namespace sync_pb {
class DeviceInfoSpecifics;
class DeviceInfoSpecificsDefaultTypeInternal;
extern DeviceInfoSpecificsDefaultTypeInternal _DeviceInfoSpecifics_default_instance_;
}  // namespace sync_pb

namespace sync_pb {

namespace protobuf_device_5finfo_5fspecifics_2eproto {
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
}  // namespace protobuf_device_5finfo_5fspecifics_2eproto

// ===================================================================

class DeviceInfoSpecifics : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:sync_pb.DeviceInfoSpecifics) */ {
 public:
  DeviceInfoSpecifics();
  virtual ~DeviceInfoSpecifics();

  DeviceInfoSpecifics(const DeviceInfoSpecifics& from);

  inline DeviceInfoSpecifics& operator=(const DeviceInfoSpecifics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const DeviceInfoSpecifics& default_instance();

  static inline const DeviceInfoSpecifics* internal_default_instance() {
    return reinterpret_cast<const DeviceInfoSpecifics*>(
               &_DeviceInfoSpecifics_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(DeviceInfoSpecifics* other);

  // implements Message ----------------------------------------------

  inline DeviceInfoSpecifics* New() const PROTOBUF_FINAL { return New(NULL); }

  DeviceInfoSpecifics* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const DeviceInfoSpecifics& from);
  void MergeFrom(const DeviceInfoSpecifics& from);
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
  void InternalSwap(DeviceInfoSpecifics* other);
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

  // accessors -------------------------------------------------------

  // optional string cache_guid = 1;
  bool has_cache_guid() const;
  void clear_cache_guid();
  static const int kCacheGuidFieldNumber = 1;
  const ::std::string& cache_guid() const;
  void set_cache_guid(const ::std::string& value);
  #if LANG_CXX11
  void set_cache_guid(::std::string&& value);
  #endif
  void set_cache_guid(const char* value);
  void set_cache_guid(const char* value, size_t size);
  ::std::string* mutable_cache_guid();
  ::std::string* release_cache_guid();
  void set_allocated_cache_guid(::std::string* cache_guid);

  // optional string client_name = 2;
  bool has_client_name() const;
  void clear_client_name();
  static const int kClientNameFieldNumber = 2;
  const ::std::string& client_name() const;
  void set_client_name(const ::std::string& value);
  #if LANG_CXX11
  void set_client_name(::std::string&& value);
  #endif
  void set_client_name(const char* value);
  void set_client_name(const char* value, size_t size);
  ::std::string* mutable_client_name();
  ::std::string* release_client_name();
  void set_allocated_client_name(::std::string* client_name);

  // optional string sync_user_agent = 4;
  bool has_sync_user_agent() const;
  void clear_sync_user_agent();
  static const int kSyncUserAgentFieldNumber = 4;
  const ::std::string& sync_user_agent() const;
  void set_sync_user_agent(const ::std::string& value);
  #if LANG_CXX11
  void set_sync_user_agent(::std::string&& value);
  #endif
  void set_sync_user_agent(const char* value);
  void set_sync_user_agent(const char* value, size_t size);
  ::std::string* mutable_sync_user_agent();
  ::std::string* release_sync_user_agent();
  void set_allocated_sync_user_agent(::std::string* sync_user_agent);

  // optional string chrome_version = 5;
  bool has_chrome_version() const;
  void clear_chrome_version();
  static const int kChromeVersionFieldNumber = 5;
  const ::std::string& chrome_version() const;
  void set_chrome_version(const ::std::string& value);
  #if LANG_CXX11
  void set_chrome_version(::std::string&& value);
  #endif
  void set_chrome_version(const char* value);
  void set_chrome_version(const char* value, size_t size);
  ::std::string* mutable_chrome_version();
  ::std::string* release_chrome_version();
  void set_allocated_chrome_version(::std::string* chrome_version);

  // optional string signin_scoped_device_id = 7;
  bool has_signin_scoped_device_id() const;
  void clear_signin_scoped_device_id();
  static const int kSigninScopedDeviceIdFieldNumber = 7;
  const ::std::string& signin_scoped_device_id() const;
  void set_signin_scoped_device_id(const ::std::string& value);
  #if LANG_CXX11
  void set_signin_scoped_device_id(::std::string&& value);
  #endif
  void set_signin_scoped_device_id(const char* value);
  void set_signin_scoped_device_id(const char* value, size_t size);
  ::std::string* mutable_signin_scoped_device_id();
  ::std::string* release_signin_scoped_device_id();
  void set_allocated_signin_scoped_device_id(::std::string* signin_scoped_device_id);

  // optional int64 deprecated_backup_timestamp = 6 [deprecated = true];
  GOOGLE_PROTOBUF_DEPRECATED_ATTR bool has_deprecated_backup_timestamp() const;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void clear_deprecated_backup_timestamp();
  GOOGLE_PROTOBUF_DEPRECATED_ATTR static const int kDeprecatedBackupTimestampFieldNumber = 6;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR ::google::protobuf::int64 deprecated_backup_timestamp() const;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void set_deprecated_backup_timestamp(::google::protobuf::int64 value);

  // optional int64 last_updated_timestamp = 8;
  bool has_last_updated_timestamp() const;
  void clear_last_updated_timestamp();
  static const int kLastUpdatedTimestampFieldNumber = 8;
  ::google::protobuf::int64 last_updated_timestamp() const;
  void set_last_updated_timestamp(::google::protobuf::int64 value);

  // optional .sync_pb.SyncEnums.DeviceType device_type = 3;
  bool has_device_type() const;
  void clear_device_type();
  static const int kDeviceTypeFieldNumber = 3;
  ::sync_pb::SyncEnums_DeviceType device_type() const;
  void set_device_type(::sync_pb::SyncEnums_DeviceType value);

  // @@protoc_insertion_point(class_scope:sync_pb.DeviceInfoSpecifics)
 private:
  void set_has_cache_guid();
  void clear_has_cache_guid();
  void set_has_client_name();
  void clear_has_client_name();
  void set_has_device_type();
  void clear_has_device_type();
  void set_has_sync_user_agent();
  void clear_has_sync_user_agent();
  void set_has_chrome_version();
  void clear_has_chrome_version();
  void set_has_deprecated_backup_timestamp();
  void clear_has_deprecated_backup_timestamp();
  void set_has_signin_scoped_device_id();
  void clear_has_signin_scoped_device_id();
  void set_has_last_updated_timestamp();
  void clear_has_last_updated_timestamp();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr cache_guid_;
  ::google::protobuf::internal::ArenaStringPtr client_name_;
  ::google::protobuf::internal::ArenaStringPtr sync_user_agent_;
  ::google::protobuf::internal::ArenaStringPtr chrome_version_;
  ::google::protobuf::internal::ArenaStringPtr signin_scoped_device_id_;
  ::google::protobuf::int64 deprecated_backup_timestamp_;
  ::google::protobuf::int64 last_updated_timestamp_;
  int device_type_;
  friend struct protobuf_device_5finfo_5fspecifics_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// DeviceInfoSpecifics

// optional string cache_guid = 1;
inline bool DeviceInfoSpecifics::has_cache_guid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DeviceInfoSpecifics::set_has_cache_guid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DeviceInfoSpecifics::clear_has_cache_guid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DeviceInfoSpecifics::clear_cache_guid() {
  cache_guid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_cache_guid();
}
inline const ::std::string& DeviceInfoSpecifics::cache_guid() const {
  // @@protoc_insertion_point(field_get:sync_pb.DeviceInfoSpecifics.cache_guid)
  return cache_guid_.GetNoArena();
}
inline void DeviceInfoSpecifics::set_cache_guid(const ::std::string& value) {
  set_has_cache_guid();
  cache_guid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.DeviceInfoSpecifics.cache_guid)
}
#if LANG_CXX11
inline void DeviceInfoSpecifics::set_cache_guid(::std::string&& value) {
  set_has_cache_guid();
  cache_guid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.DeviceInfoSpecifics.cache_guid)
}
#endif
inline void DeviceInfoSpecifics::set_cache_guid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_cache_guid();
  cache_guid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.DeviceInfoSpecifics.cache_guid)
}
inline void DeviceInfoSpecifics::set_cache_guid(const char* value, size_t size) {
  set_has_cache_guid();
  cache_guid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.DeviceInfoSpecifics.cache_guid)
}
inline ::std::string* DeviceInfoSpecifics::mutable_cache_guid() {
  set_has_cache_guid();
  // @@protoc_insertion_point(field_mutable:sync_pb.DeviceInfoSpecifics.cache_guid)
  return cache_guid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DeviceInfoSpecifics::release_cache_guid() {
  // @@protoc_insertion_point(field_release:sync_pb.DeviceInfoSpecifics.cache_guid)
  clear_has_cache_guid();
  return cache_guid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DeviceInfoSpecifics::set_allocated_cache_guid(::std::string* cache_guid) {
  if (cache_guid != NULL) {
    set_has_cache_guid();
  } else {
    clear_has_cache_guid();
  }
  cache_guid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cache_guid);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.DeviceInfoSpecifics.cache_guid)
}

// optional string client_name = 2;
inline bool DeviceInfoSpecifics::has_client_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DeviceInfoSpecifics::set_has_client_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DeviceInfoSpecifics::clear_has_client_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DeviceInfoSpecifics::clear_client_name() {
  client_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_client_name();
}
inline const ::std::string& DeviceInfoSpecifics::client_name() const {
  // @@protoc_insertion_point(field_get:sync_pb.DeviceInfoSpecifics.client_name)
  return client_name_.GetNoArena();
}
inline void DeviceInfoSpecifics::set_client_name(const ::std::string& value) {
  set_has_client_name();
  client_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.DeviceInfoSpecifics.client_name)
}
#if LANG_CXX11
inline void DeviceInfoSpecifics::set_client_name(::std::string&& value) {
  set_has_client_name();
  client_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.DeviceInfoSpecifics.client_name)
}
#endif
inline void DeviceInfoSpecifics::set_client_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_client_name();
  client_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.DeviceInfoSpecifics.client_name)
}
inline void DeviceInfoSpecifics::set_client_name(const char* value, size_t size) {
  set_has_client_name();
  client_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.DeviceInfoSpecifics.client_name)
}
inline ::std::string* DeviceInfoSpecifics::mutable_client_name() {
  set_has_client_name();
  // @@protoc_insertion_point(field_mutable:sync_pb.DeviceInfoSpecifics.client_name)
  return client_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DeviceInfoSpecifics::release_client_name() {
  // @@protoc_insertion_point(field_release:sync_pb.DeviceInfoSpecifics.client_name)
  clear_has_client_name();
  return client_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DeviceInfoSpecifics::set_allocated_client_name(::std::string* client_name) {
  if (client_name != NULL) {
    set_has_client_name();
  } else {
    clear_has_client_name();
  }
  client_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), client_name);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.DeviceInfoSpecifics.client_name)
}

// optional .sync_pb.SyncEnums.DeviceType device_type = 3;
inline bool DeviceInfoSpecifics::has_device_type() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void DeviceInfoSpecifics::set_has_device_type() {
  _has_bits_[0] |= 0x00000080u;
}
inline void DeviceInfoSpecifics::clear_has_device_type() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void DeviceInfoSpecifics::clear_device_type() {
  device_type_ = 0;
  clear_has_device_type();
}
inline ::sync_pb::SyncEnums_DeviceType DeviceInfoSpecifics::device_type() const {
  // @@protoc_insertion_point(field_get:sync_pb.DeviceInfoSpecifics.device_type)
  return static_cast< ::sync_pb::SyncEnums_DeviceType >(device_type_);
}
inline void DeviceInfoSpecifics::set_device_type(::sync_pb::SyncEnums_DeviceType value) {
  assert(::sync_pb::SyncEnums_DeviceType_IsValid(value));
  set_has_device_type();
  device_type_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.DeviceInfoSpecifics.device_type)
}

// optional string sync_user_agent = 4;
inline bool DeviceInfoSpecifics::has_sync_user_agent() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DeviceInfoSpecifics::set_has_sync_user_agent() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DeviceInfoSpecifics::clear_has_sync_user_agent() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DeviceInfoSpecifics::clear_sync_user_agent() {
  sync_user_agent_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_sync_user_agent();
}
inline const ::std::string& DeviceInfoSpecifics::sync_user_agent() const {
  // @@protoc_insertion_point(field_get:sync_pb.DeviceInfoSpecifics.sync_user_agent)
  return sync_user_agent_.GetNoArena();
}
inline void DeviceInfoSpecifics::set_sync_user_agent(const ::std::string& value) {
  set_has_sync_user_agent();
  sync_user_agent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.DeviceInfoSpecifics.sync_user_agent)
}
#if LANG_CXX11
inline void DeviceInfoSpecifics::set_sync_user_agent(::std::string&& value) {
  set_has_sync_user_agent();
  sync_user_agent_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.DeviceInfoSpecifics.sync_user_agent)
}
#endif
inline void DeviceInfoSpecifics::set_sync_user_agent(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_sync_user_agent();
  sync_user_agent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.DeviceInfoSpecifics.sync_user_agent)
}
inline void DeviceInfoSpecifics::set_sync_user_agent(const char* value, size_t size) {
  set_has_sync_user_agent();
  sync_user_agent_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.DeviceInfoSpecifics.sync_user_agent)
}
inline ::std::string* DeviceInfoSpecifics::mutable_sync_user_agent() {
  set_has_sync_user_agent();
  // @@protoc_insertion_point(field_mutable:sync_pb.DeviceInfoSpecifics.sync_user_agent)
  return sync_user_agent_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DeviceInfoSpecifics::release_sync_user_agent() {
  // @@protoc_insertion_point(field_release:sync_pb.DeviceInfoSpecifics.sync_user_agent)
  clear_has_sync_user_agent();
  return sync_user_agent_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DeviceInfoSpecifics::set_allocated_sync_user_agent(::std::string* sync_user_agent) {
  if (sync_user_agent != NULL) {
    set_has_sync_user_agent();
  } else {
    clear_has_sync_user_agent();
  }
  sync_user_agent_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sync_user_agent);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.DeviceInfoSpecifics.sync_user_agent)
}

// optional string chrome_version = 5;
inline bool DeviceInfoSpecifics::has_chrome_version() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DeviceInfoSpecifics::set_has_chrome_version() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DeviceInfoSpecifics::clear_has_chrome_version() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DeviceInfoSpecifics::clear_chrome_version() {
  chrome_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_chrome_version();
}
inline const ::std::string& DeviceInfoSpecifics::chrome_version() const {
  // @@protoc_insertion_point(field_get:sync_pb.DeviceInfoSpecifics.chrome_version)
  return chrome_version_.GetNoArena();
}
inline void DeviceInfoSpecifics::set_chrome_version(const ::std::string& value) {
  set_has_chrome_version();
  chrome_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.DeviceInfoSpecifics.chrome_version)
}
#if LANG_CXX11
inline void DeviceInfoSpecifics::set_chrome_version(::std::string&& value) {
  set_has_chrome_version();
  chrome_version_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.DeviceInfoSpecifics.chrome_version)
}
#endif
inline void DeviceInfoSpecifics::set_chrome_version(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_chrome_version();
  chrome_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.DeviceInfoSpecifics.chrome_version)
}
inline void DeviceInfoSpecifics::set_chrome_version(const char* value, size_t size) {
  set_has_chrome_version();
  chrome_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.DeviceInfoSpecifics.chrome_version)
}
inline ::std::string* DeviceInfoSpecifics::mutable_chrome_version() {
  set_has_chrome_version();
  // @@protoc_insertion_point(field_mutable:sync_pb.DeviceInfoSpecifics.chrome_version)
  return chrome_version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DeviceInfoSpecifics::release_chrome_version() {
  // @@protoc_insertion_point(field_release:sync_pb.DeviceInfoSpecifics.chrome_version)
  clear_has_chrome_version();
  return chrome_version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DeviceInfoSpecifics::set_allocated_chrome_version(::std::string* chrome_version) {
  if (chrome_version != NULL) {
    set_has_chrome_version();
  } else {
    clear_has_chrome_version();
  }
  chrome_version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), chrome_version);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.DeviceInfoSpecifics.chrome_version)
}

// optional int64 deprecated_backup_timestamp = 6 [deprecated = true];
inline bool DeviceInfoSpecifics::has_deprecated_backup_timestamp() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void DeviceInfoSpecifics::set_has_deprecated_backup_timestamp() {
  _has_bits_[0] |= 0x00000020u;
}
inline void DeviceInfoSpecifics::clear_has_deprecated_backup_timestamp() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void DeviceInfoSpecifics::clear_deprecated_backup_timestamp() {
  deprecated_backup_timestamp_ = GOOGLE_LONGLONG(0);
  clear_has_deprecated_backup_timestamp();
}
inline ::google::protobuf::int64 DeviceInfoSpecifics::deprecated_backup_timestamp() const {
  // @@protoc_insertion_point(field_get:sync_pb.DeviceInfoSpecifics.deprecated_backup_timestamp)
  return deprecated_backup_timestamp_;
}
inline void DeviceInfoSpecifics::set_deprecated_backup_timestamp(::google::protobuf::int64 value) {
  set_has_deprecated_backup_timestamp();
  deprecated_backup_timestamp_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.DeviceInfoSpecifics.deprecated_backup_timestamp)
}

// optional string signin_scoped_device_id = 7;
inline bool DeviceInfoSpecifics::has_signin_scoped_device_id() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void DeviceInfoSpecifics::set_has_signin_scoped_device_id() {
  _has_bits_[0] |= 0x00000010u;
}
inline void DeviceInfoSpecifics::clear_has_signin_scoped_device_id() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void DeviceInfoSpecifics::clear_signin_scoped_device_id() {
  signin_scoped_device_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_signin_scoped_device_id();
}
inline const ::std::string& DeviceInfoSpecifics::signin_scoped_device_id() const {
  // @@protoc_insertion_point(field_get:sync_pb.DeviceInfoSpecifics.signin_scoped_device_id)
  return signin_scoped_device_id_.GetNoArena();
}
inline void DeviceInfoSpecifics::set_signin_scoped_device_id(const ::std::string& value) {
  set_has_signin_scoped_device_id();
  signin_scoped_device_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.DeviceInfoSpecifics.signin_scoped_device_id)
}
#if LANG_CXX11
inline void DeviceInfoSpecifics::set_signin_scoped_device_id(::std::string&& value) {
  set_has_signin_scoped_device_id();
  signin_scoped_device_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.DeviceInfoSpecifics.signin_scoped_device_id)
}
#endif
inline void DeviceInfoSpecifics::set_signin_scoped_device_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_signin_scoped_device_id();
  signin_scoped_device_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.DeviceInfoSpecifics.signin_scoped_device_id)
}
inline void DeviceInfoSpecifics::set_signin_scoped_device_id(const char* value, size_t size) {
  set_has_signin_scoped_device_id();
  signin_scoped_device_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.DeviceInfoSpecifics.signin_scoped_device_id)
}
inline ::std::string* DeviceInfoSpecifics::mutable_signin_scoped_device_id() {
  set_has_signin_scoped_device_id();
  // @@protoc_insertion_point(field_mutable:sync_pb.DeviceInfoSpecifics.signin_scoped_device_id)
  return signin_scoped_device_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DeviceInfoSpecifics::release_signin_scoped_device_id() {
  // @@protoc_insertion_point(field_release:sync_pb.DeviceInfoSpecifics.signin_scoped_device_id)
  clear_has_signin_scoped_device_id();
  return signin_scoped_device_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DeviceInfoSpecifics::set_allocated_signin_scoped_device_id(::std::string* signin_scoped_device_id) {
  if (signin_scoped_device_id != NULL) {
    set_has_signin_scoped_device_id();
  } else {
    clear_has_signin_scoped_device_id();
  }
  signin_scoped_device_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), signin_scoped_device_id);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.DeviceInfoSpecifics.signin_scoped_device_id)
}

// optional int64 last_updated_timestamp = 8;
inline bool DeviceInfoSpecifics::has_last_updated_timestamp() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void DeviceInfoSpecifics::set_has_last_updated_timestamp() {
  _has_bits_[0] |= 0x00000040u;
}
inline void DeviceInfoSpecifics::clear_has_last_updated_timestamp() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void DeviceInfoSpecifics::clear_last_updated_timestamp() {
  last_updated_timestamp_ = GOOGLE_LONGLONG(0);
  clear_has_last_updated_timestamp();
}
inline ::google::protobuf::int64 DeviceInfoSpecifics::last_updated_timestamp() const {
  // @@protoc_insertion_point(field_get:sync_pb.DeviceInfoSpecifics.last_updated_timestamp)
  return last_updated_timestamp_;
}
inline void DeviceInfoSpecifics::set_last_updated_timestamp(::google::protobuf::int64 value) {
  set_has_last_updated_timestamp();
  last_updated_timestamp_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.DeviceInfoSpecifics.last_updated_timestamp)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_device_5finfo_5fspecifics_2eproto__INCLUDED