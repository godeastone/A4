// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: managed_user_shared_setting_specifics.proto

#ifndef PROTOBUF_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)
namespace sync_pb {
class ManagedUserSharedSettingSpecifics;
class ManagedUserSharedSettingSpecificsDefaultTypeInternal;
extern ManagedUserSharedSettingSpecificsDefaultTypeInternal _ManagedUserSharedSettingSpecifics_default_instance_;
}  // namespace sync_pb

namespace sync_pb {

namespace protobuf_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto {
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
}  // namespace protobuf_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto

// ===================================================================

class ManagedUserSharedSettingSpecifics : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:sync_pb.ManagedUserSharedSettingSpecifics) */ {
 public:
  ManagedUserSharedSettingSpecifics();
  virtual ~ManagedUserSharedSettingSpecifics();

  ManagedUserSharedSettingSpecifics(const ManagedUserSharedSettingSpecifics& from);

  inline ManagedUserSharedSettingSpecifics& operator=(const ManagedUserSharedSettingSpecifics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ManagedUserSharedSettingSpecifics& default_instance();

  static inline const ManagedUserSharedSettingSpecifics* internal_default_instance() {
    return reinterpret_cast<const ManagedUserSharedSettingSpecifics*>(
               &_ManagedUserSharedSettingSpecifics_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ManagedUserSharedSettingSpecifics* other);

  // implements Message ----------------------------------------------

  inline ManagedUserSharedSettingSpecifics* New() const PROTOBUF_FINAL { return New(NULL); }

  ManagedUserSharedSettingSpecifics* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ManagedUserSharedSettingSpecifics& from);
  void MergeFrom(const ManagedUserSharedSettingSpecifics& from);
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
  void InternalSwap(ManagedUserSharedSettingSpecifics* other);
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

  // optional string mu_id = 1;
  bool has_mu_id() const;
  void clear_mu_id();
  static const int kMuIdFieldNumber = 1;
  const ::std::string& mu_id() const;
  void set_mu_id(const ::std::string& value);
  #if LANG_CXX11
  void set_mu_id(::std::string&& value);
  #endif
  void set_mu_id(const char* value);
  void set_mu_id(const char* value, size_t size);
  ::std::string* mutable_mu_id();
  ::std::string* release_mu_id();
  void set_allocated_mu_id(::std::string* mu_id);

  // optional string key = 2;
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 2;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // optional string value = 3;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 3;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // optional bool acknowledged = 4 [default = false];
  bool has_acknowledged() const;
  void clear_acknowledged();
  static const int kAcknowledgedFieldNumber = 4;
  bool acknowledged() const;
  void set_acknowledged(bool value);

  // @@protoc_insertion_point(class_scope:sync_pb.ManagedUserSharedSettingSpecifics)
 private:
  void set_has_mu_id();
  void clear_has_mu_id();
  void set_has_key();
  void clear_has_key();
  void set_has_value();
  void clear_has_value();
  void set_has_acknowledged();
  void clear_has_acknowledged();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr mu_id_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  bool acknowledged_;
  friend struct protobuf_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ManagedUserSharedSettingSpecifics

// optional string mu_id = 1;
inline bool ManagedUserSharedSettingSpecifics::has_mu_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ManagedUserSharedSettingSpecifics::set_has_mu_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ManagedUserSharedSettingSpecifics::clear_has_mu_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ManagedUserSharedSettingSpecifics::clear_mu_id() {
  mu_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_mu_id();
}
inline const ::std::string& ManagedUserSharedSettingSpecifics::mu_id() const {
  // @@protoc_insertion_point(field_get:sync_pb.ManagedUserSharedSettingSpecifics.mu_id)
  return mu_id_.GetNoArena();
}
inline void ManagedUserSharedSettingSpecifics::set_mu_id(const ::std::string& value) {
  set_has_mu_id();
  mu_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ManagedUserSharedSettingSpecifics.mu_id)
}
#if LANG_CXX11
inline void ManagedUserSharedSettingSpecifics::set_mu_id(::std::string&& value) {
  set_has_mu_id();
  mu_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ManagedUserSharedSettingSpecifics.mu_id)
}
#endif
inline void ManagedUserSharedSettingSpecifics::set_mu_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_mu_id();
  mu_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ManagedUserSharedSettingSpecifics.mu_id)
}
inline void ManagedUserSharedSettingSpecifics::set_mu_id(const char* value, size_t size) {
  set_has_mu_id();
  mu_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ManagedUserSharedSettingSpecifics.mu_id)
}
inline ::std::string* ManagedUserSharedSettingSpecifics::mutable_mu_id() {
  set_has_mu_id();
  // @@protoc_insertion_point(field_mutable:sync_pb.ManagedUserSharedSettingSpecifics.mu_id)
  return mu_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ManagedUserSharedSettingSpecifics::release_mu_id() {
  // @@protoc_insertion_point(field_release:sync_pb.ManagedUserSharedSettingSpecifics.mu_id)
  clear_has_mu_id();
  return mu_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ManagedUserSharedSettingSpecifics::set_allocated_mu_id(::std::string* mu_id) {
  if (mu_id != NULL) {
    set_has_mu_id();
  } else {
    clear_has_mu_id();
  }
  mu_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), mu_id);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ManagedUserSharedSettingSpecifics.mu_id)
}

// optional string key = 2;
inline bool ManagedUserSharedSettingSpecifics::has_key() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ManagedUserSharedSettingSpecifics::set_has_key() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ManagedUserSharedSettingSpecifics::clear_has_key() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ManagedUserSharedSettingSpecifics::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_key();
}
inline const ::std::string& ManagedUserSharedSettingSpecifics::key() const {
  // @@protoc_insertion_point(field_get:sync_pb.ManagedUserSharedSettingSpecifics.key)
  return key_.GetNoArena();
}
inline void ManagedUserSharedSettingSpecifics::set_key(const ::std::string& value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ManagedUserSharedSettingSpecifics.key)
}
#if LANG_CXX11
inline void ManagedUserSharedSettingSpecifics::set_key(::std::string&& value) {
  set_has_key();
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ManagedUserSharedSettingSpecifics.key)
}
#endif
inline void ManagedUserSharedSettingSpecifics::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ManagedUserSharedSettingSpecifics.key)
}
inline void ManagedUserSharedSettingSpecifics::set_key(const char* value, size_t size) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ManagedUserSharedSettingSpecifics.key)
}
inline ::std::string* ManagedUserSharedSettingSpecifics::mutable_key() {
  set_has_key();
  // @@protoc_insertion_point(field_mutable:sync_pb.ManagedUserSharedSettingSpecifics.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ManagedUserSharedSettingSpecifics::release_key() {
  // @@protoc_insertion_point(field_release:sync_pb.ManagedUserSharedSettingSpecifics.key)
  clear_has_key();
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ManagedUserSharedSettingSpecifics::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    set_has_key();
  } else {
    clear_has_key();
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ManagedUserSharedSettingSpecifics.key)
}

// optional string value = 3;
inline bool ManagedUserSharedSettingSpecifics::has_value() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ManagedUserSharedSettingSpecifics::set_has_value() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ManagedUserSharedSettingSpecifics::clear_has_value() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ManagedUserSharedSettingSpecifics::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_value();
}
inline const ::std::string& ManagedUserSharedSettingSpecifics::value() const {
  // @@protoc_insertion_point(field_get:sync_pb.ManagedUserSharedSettingSpecifics.value)
  return value_.GetNoArena();
}
inline void ManagedUserSharedSettingSpecifics::set_value(const ::std::string& value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ManagedUserSharedSettingSpecifics.value)
}
#if LANG_CXX11
inline void ManagedUserSharedSettingSpecifics::set_value(::std::string&& value) {
  set_has_value();
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ManagedUserSharedSettingSpecifics.value)
}
#endif
inline void ManagedUserSharedSettingSpecifics::set_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ManagedUserSharedSettingSpecifics.value)
}
inline void ManagedUserSharedSettingSpecifics::set_value(const char* value, size_t size) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ManagedUserSharedSettingSpecifics.value)
}
inline ::std::string* ManagedUserSharedSettingSpecifics::mutable_value() {
  set_has_value();
  // @@protoc_insertion_point(field_mutable:sync_pb.ManagedUserSharedSettingSpecifics.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ManagedUserSharedSettingSpecifics::release_value() {
  // @@protoc_insertion_point(field_release:sync_pb.ManagedUserSharedSettingSpecifics.value)
  clear_has_value();
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ManagedUserSharedSettingSpecifics::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    set_has_value();
  } else {
    clear_has_value();
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ManagedUserSharedSettingSpecifics.value)
}

// optional bool acknowledged = 4 [default = false];
inline bool ManagedUserSharedSettingSpecifics::has_acknowledged() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ManagedUserSharedSettingSpecifics::set_has_acknowledged() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ManagedUserSharedSettingSpecifics::clear_has_acknowledged() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ManagedUserSharedSettingSpecifics::clear_acknowledged() {
  acknowledged_ = false;
  clear_has_acknowledged();
}
inline bool ManagedUserSharedSettingSpecifics::acknowledged() const {
  // @@protoc_insertion_point(field_get:sync_pb.ManagedUserSharedSettingSpecifics.acknowledged)
  return acknowledged_;
}
inline void ManagedUserSharedSettingSpecifics::set_acknowledged(bool value) {
  set_has_acknowledged();
  acknowledged_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ManagedUserSharedSettingSpecifics.acknowledged)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto__INCLUDED
