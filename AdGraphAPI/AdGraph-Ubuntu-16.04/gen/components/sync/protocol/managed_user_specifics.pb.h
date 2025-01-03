// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: managed_user_specifics.proto

#ifndef PROTOBUF_managed_5fuser_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_managed_5fuser_5fspecifics_2eproto__INCLUDED

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
class ManagedUserSpecifics;
class ManagedUserSpecificsDefaultTypeInternal;
extern ManagedUserSpecificsDefaultTypeInternal _ManagedUserSpecifics_default_instance_;
}  // namespace sync_pb

namespace sync_pb {

namespace protobuf_managed_5fuser_5fspecifics_2eproto {
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
}  // namespace protobuf_managed_5fuser_5fspecifics_2eproto

// ===================================================================

class ManagedUserSpecifics : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:sync_pb.ManagedUserSpecifics) */ {
 public:
  ManagedUserSpecifics();
  virtual ~ManagedUserSpecifics();

  ManagedUserSpecifics(const ManagedUserSpecifics& from);

  inline ManagedUserSpecifics& operator=(const ManagedUserSpecifics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ManagedUserSpecifics& default_instance();

  static inline const ManagedUserSpecifics* internal_default_instance() {
    return reinterpret_cast<const ManagedUserSpecifics*>(
               &_ManagedUserSpecifics_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ManagedUserSpecifics* other);

  // implements Message ----------------------------------------------

  inline ManagedUserSpecifics* New() const PROTOBUF_FINAL { return New(NULL); }

  ManagedUserSpecifics* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ManagedUserSpecifics& from);
  void MergeFrom(const ManagedUserSpecifics& from);
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
  void InternalSwap(ManagedUserSpecifics* other);
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

  // optional string id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // optional string name = 2;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string master_key = 4;
  bool has_master_key() const;
  void clear_master_key();
  static const int kMasterKeyFieldNumber = 4;
  const ::std::string& master_key() const;
  void set_master_key(const ::std::string& value);
  #if LANG_CXX11
  void set_master_key(::std::string&& value);
  #endif
  void set_master_key(const char* value);
  void set_master_key(const char* value, size_t size);
  ::std::string* mutable_master_key();
  ::std::string* release_master_key();
  void set_allocated_master_key(::std::string* master_key);

  // optional string chrome_avatar = 5;
  bool has_chrome_avatar() const;
  void clear_chrome_avatar();
  static const int kChromeAvatarFieldNumber = 5;
  const ::std::string& chrome_avatar() const;
  void set_chrome_avatar(const ::std::string& value);
  #if LANG_CXX11
  void set_chrome_avatar(::std::string&& value);
  #endif
  void set_chrome_avatar(const char* value);
  void set_chrome_avatar(const char* value, size_t size);
  ::std::string* mutable_chrome_avatar();
  ::std::string* release_chrome_avatar();
  void set_allocated_chrome_avatar(::std::string* chrome_avatar);

  // optional string chromeos_avatar = 6;
  bool has_chromeos_avatar() const;
  void clear_chromeos_avatar();
  static const int kChromeosAvatarFieldNumber = 6;
  const ::std::string& chromeos_avatar() const;
  void set_chromeos_avatar(const ::std::string& value);
  #if LANG_CXX11
  void set_chromeos_avatar(::std::string&& value);
  #endif
  void set_chromeos_avatar(const char* value);
  void set_chromeos_avatar(const char* value, size_t size);
  ::std::string* mutable_chromeos_avatar();
  ::std::string* release_chromeos_avatar();
  void set_allocated_chromeos_avatar(::std::string* chromeos_avatar);

  // optional string password_signature_key = 7;
  bool has_password_signature_key() const;
  void clear_password_signature_key();
  static const int kPasswordSignatureKeyFieldNumber = 7;
  const ::std::string& password_signature_key() const;
  void set_password_signature_key(const ::std::string& value);
  #if LANG_CXX11
  void set_password_signature_key(::std::string&& value);
  #endif
  void set_password_signature_key(const char* value);
  void set_password_signature_key(const char* value, size_t size);
  ::std::string* mutable_password_signature_key();
  ::std::string* release_password_signature_key();
  void set_allocated_password_signature_key(::std::string* password_signature_key);

  // optional string password_encryption_key = 8;
  bool has_password_encryption_key() const;
  void clear_password_encryption_key();
  static const int kPasswordEncryptionKeyFieldNumber = 8;
  const ::std::string& password_encryption_key() const;
  void set_password_encryption_key(const ::std::string& value);
  #if LANG_CXX11
  void set_password_encryption_key(::std::string&& value);
  #endif
  void set_password_encryption_key(const char* value);
  void set_password_encryption_key(const char* value, size_t size);
  ::std::string* mutable_password_encryption_key();
  ::std::string* release_password_encryption_key();
  void set_allocated_password_encryption_key(::std::string* password_encryption_key);

  // optional bool acknowledged = 3 [default = false];
  bool has_acknowledged() const;
  void clear_acknowledged();
  static const int kAcknowledgedFieldNumber = 3;
  bool acknowledged() const;
  void set_acknowledged(bool value);

  // @@protoc_insertion_point(class_scope:sync_pb.ManagedUserSpecifics)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_name();
  void clear_has_name();
  void set_has_acknowledged();
  void clear_has_acknowledged();
  void set_has_master_key();
  void clear_has_master_key();
  void set_has_chrome_avatar();
  void clear_has_chrome_avatar();
  void set_has_chromeos_avatar();
  void clear_has_chromeos_avatar();
  void set_has_password_signature_key();
  void clear_has_password_signature_key();
  void set_has_password_encryption_key();
  void clear_has_password_encryption_key();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr master_key_;
  ::google::protobuf::internal::ArenaStringPtr chrome_avatar_;
  ::google::protobuf::internal::ArenaStringPtr chromeos_avatar_;
  ::google::protobuf::internal::ArenaStringPtr password_signature_key_;
  ::google::protobuf::internal::ArenaStringPtr password_encryption_key_;
  bool acknowledged_;
  friend struct protobuf_managed_5fuser_5fspecifics_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ManagedUserSpecifics

// optional string id = 1;
inline bool ManagedUserSpecifics::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ManagedUserSpecifics::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ManagedUserSpecifics::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ManagedUserSpecifics::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& ManagedUserSpecifics::id() const {
  // @@protoc_insertion_point(field_get:sync_pb.ManagedUserSpecifics.id)
  return id_.GetNoArena();
}
inline void ManagedUserSpecifics::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ManagedUserSpecifics.id)
}
#if LANG_CXX11
inline void ManagedUserSpecifics::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ManagedUserSpecifics.id)
}
#endif
inline void ManagedUserSpecifics::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ManagedUserSpecifics.id)
}
inline void ManagedUserSpecifics::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ManagedUserSpecifics.id)
}
inline ::std::string* ManagedUserSpecifics::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:sync_pb.ManagedUserSpecifics.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ManagedUserSpecifics::release_id() {
  // @@protoc_insertion_point(field_release:sync_pb.ManagedUserSpecifics.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ManagedUserSpecifics::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ManagedUserSpecifics.id)
}

// optional string name = 2;
inline bool ManagedUserSpecifics::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ManagedUserSpecifics::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ManagedUserSpecifics::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ManagedUserSpecifics::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& ManagedUserSpecifics::name() const {
  // @@protoc_insertion_point(field_get:sync_pb.ManagedUserSpecifics.name)
  return name_.GetNoArena();
}
inline void ManagedUserSpecifics::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ManagedUserSpecifics.name)
}
#if LANG_CXX11
inline void ManagedUserSpecifics::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ManagedUserSpecifics.name)
}
#endif
inline void ManagedUserSpecifics::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ManagedUserSpecifics.name)
}
inline void ManagedUserSpecifics::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ManagedUserSpecifics.name)
}
inline ::std::string* ManagedUserSpecifics::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:sync_pb.ManagedUserSpecifics.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ManagedUserSpecifics::release_name() {
  // @@protoc_insertion_point(field_release:sync_pb.ManagedUserSpecifics.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ManagedUserSpecifics::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ManagedUserSpecifics.name)
}

// optional bool acknowledged = 3 [default = false];
inline bool ManagedUserSpecifics::has_acknowledged() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ManagedUserSpecifics::set_has_acknowledged() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ManagedUserSpecifics::clear_has_acknowledged() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ManagedUserSpecifics::clear_acknowledged() {
  acknowledged_ = false;
  clear_has_acknowledged();
}
inline bool ManagedUserSpecifics::acknowledged() const {
  // @@protoc_insertion_point(field_get:sync_pb.ManagedUserSpecifics.acknowledged)
  return acknowledged_;
}
inline void ManagedUserSpecifics::set_acknowledged(bool value) {
  set_has_acknowledged();
  acknowledged_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ManagedUserSpecifics.acknowledged)
}

// optional string master_key = 4;
inline bool ManagedUserSpecifics::has_master_key() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ManagedUserSpecifics::set_has_master_key() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ManagedUserSpecifics::clear_has_master_key() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ManagedUserSpecifics::clear_master_key() {
  master_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_master_key();
}
inline const ::std::string& ManagedUserSpecifics::master_key() const {
  // @@protoc_insertion_point(field_get:sync_pb.ManagedUserSpecifics.master_key)
  return master_key_.GetNoArena();
}
inline void ManagedUserSpecifics::set_master_key(const ::std::string& value) {
  set_has_master_key();
  master_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ManagedUserSpecifics.master_key)
}
#if LANG_CXX11
inline void ManagedUserSpecifics::set_master_key(::std::string&& value) {
  set_has_master_key();
  master_key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ManagedUserSpecifics.master_key)
}
#endif
inline void ManagedUserSpecifics::set_master_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_master_key();
  master_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ManagedUserSpecifics.master_key)
}
inline void ManagedUserSpecifics::set_master_key(const char* value, size_t size) {
  set_has_master_key();
  master_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ManagedUserSpecifics.master_key)
}
inline ::std::string* ManagedUserSpecifics::mutable_master_key() {
  set_has_master_key();
  // @@protoc_insertion_point(field_mutable:sync_pb.ManagedUserSpecifics.master_key)
  return master_key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ManagedUserSpecifics::release_master_key() {
  // @@protoc_insertion_point(field_release:sync_pb.ManagedUserSpecifics.master_key)
  clear_has_master_key();
  return master_key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ManagedUserSpecifics::set_allocated_master_key(::std::string* master_key) {
  if (master_key != NULL) {
    set_has_master_key();
  } else {
    clear_has_master_key();
  }
  master_key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), master_key);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ManagedUserSpecifics.master_key)
}

// optional string chrome_avatar = 5;
inline bool ManagedUserSpecifics::has_chrome_avatar() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ManagedUserSpecifics::set_has_chrome_avatar() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ManagedUserSpecifics::clear_has_chrome_avatar() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ManagedUserSpecifics::clear_chrome_avatar() {
  chrome_avatar_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_chrome_avatar();
}
inline const ::std::string& ManagedUserSpecifics::chrome_avatar() const {
  // @@protoc_insertion_point(field_get:sync_pb.ManagedUserSpecifics.chrome_avatar)
  return chrome_avatar_.GetNoArena();
}
inline void ManagedUserSpecifics::set_chrome_avatar(const ::std::string& value) {
  set_has_chrome_avatar();
  chrome_avatar_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ManagedUserSpecifics.chrome_avatar)
}
#if LANG_CXX11
inline void ManagedUserSpecifics::set_chrome_avatar(::std::string&& value) {
  set_has_chrome_avatar();
  chrome_avatar_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ManagedUserSpecifics.chrome_avatar)
}
#endif
inline void ManagedUserSpecifics::set_chrome_avatar(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_chrome_avatar();
  chrome_avatar_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ManagedUserSpecifics.chrome_avatar)
}
inline void ManagedUserSpecifics::set_chrome_avatar(const char* value, size_t size) {
  set_has_chrome_avatar();
  chrome_avatar_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ManagedUserSpecifics.chrome_avatar)
}
inline ::std::string* ManagedUserSpecifics::mutable_chrome_avatar() {
  set_has_chrome_avatar();
  // @@protoc_insertion_point(field_mutable:sync_pb.ManagedUserSpecifics.chrome_avatar)
  return chrome_avatar_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ManagedUserSpecifics::release_chrome_avatar() {
  // @@protoc_insertion_point(field_release:sync_pb.ManagedUserSpecifics.chrome_avatar)
  clear_has_chrome_avatar();
  return chrome_avatar_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ManagedUserSpecifics::set_allocated_chrome_avatar(::std::string* chrome_avatar) {
  if (chrome_avatar != NULL) {
    set_has_chrome_avatar();
  } else {
    clear_has_chrome_avatar();
  }
  chrome_avatar_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), chrome_avatar);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ManagedUserSpecifics.chrome_avatar)
}

// optional string chromeos_avatar = 6;
inline bool ManagedUserSpecifics::has_chromeos_avatar() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ManagedUserSpecifics::set_has_chromeos_avatar() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ManagedUserSpecifics::clear_has_chromeos_avatar() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ManagedUserSpecifics::clear_chromeos_avatar() {
  chromeos_avatar_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_chromeos_avatar();
}
inline const ::std::string& ManagedUserSpecifics::chromeos_avatar() const {
  // @@protoc_insertion_point(field_get:sync_pb.ManagedUserSpecifics.chromeos_avatar)
  return chromeos_avatar_.GetNoArena();
}
inline void ManagedUserSpecifics::set_chromeos_avatar(const ::std::string& value) {
  set_has_chromeos_avatar();
  chromeos_avatar_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ManagedUserSpecifics.chromeos_avatar)
}
#if LANG_CXX11
inline void ManagedUserSpecifics::set_chromeos_avatar(::std::string&& value) {
  set_has_chromeos_avatar();
  chromeos_avatar_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ManagedUserSpecifics.chromeos_avatar)
}
#endif
inline void ManagedUserSpecifics::set_chromeos_avatar(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_chromeos_avatar();
  chromeos_avatar_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ManagedUserSpecifics.chromeos_avatar)
}
inline void ManagedUserSpecifics::set_chromeos_avatar(const char* value, size_t size) {
  set_has_chromeos_avatar();
  chromeos_avatar_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ManagedUserSpecifics.chromeos_avatar)
}
inline ::std::string* ManagedUserSpecifics::mutable_chromeos_avatar() {
  set_has_chromeos_avatar();
  // @@protoc_insertion_point(field_mutable:sync_pb.ManagedUserSpecifics.chromeos_avatar)
  return chromeos_avatar_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ManagedUserSpecifics::release_chromeos_avatar() {
  // @@protoc_insertion_point(field_release:sync_pb.ManagedUserSpecifics.chromeos_avatar)
  clear_has_chromeos_avatar();
  return chromeos_avatar_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ManagedUserSpecifics::set_allocated_chromeos_avatar(::std::string* chromeos_avatar) {
  if (chromeos_avatar != NULL) {
    set_has_chromeos_avatar();
  } else {
    clear_has_chromeos_avatar();
  }
  chromeos_avatar_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), chromeos_avatar);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ManagedUserSpecifics.chromeos_avatar)
}

// optional string password_signature_key = 7;
inline bool ManagedUserSpecifics::has_password_signature_key() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ManagedUserSpecifics::set_has_password_signature_key() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ManagedUserSpecifics::clear_has_password_signature_key() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ManagedUserSpecifics::clear_password_signature_key() {
  password_signature_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_password_signature_key();
}
inline const ::std::string& ManagedUserSpecifics::password_signature_key() const {
  // @@protoc_insertion_point(field_get:sync_pb.ManagedUserSpecifics.password_signature_key)
  return password_signature_key_.GetNoArena();
}
inline void ManagedUserSpecifics::set_password_signature_key(const ::std::string& value) {
  set_has_password_signature_key();
  password_signature_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ManagedUserSpecifics.password_signature_key)
}
#if LANG_CXX11
inline void ManagedUserSpecifics::set_password_signature_key(::std::string&& value) {
  set_has_password_signature_key();
  password_signature_key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ManagedUserSpecifics.password_signature_key)
}
#endif
inline void ManagedUserSpecifics::set_password_signature_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_password_signature_key();
  password_signature_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ManagedUserSpecifics.password_signature_key)
}
inline void ManagedUserSpecifics::set_password_signature_key(const char* value, size_t size) {
  set_has_password_signature_key();
  password_signature_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ManagedUserSpecifics.password_signature_key)
}
inline ::std::string* ManagedUserSpecifics::mutable_password_signature_key() {
  set_has_password_signature_key();
  // @@protoc_insertion_point(field_mutable:sync_pb.ManagedUserSpecifics.password_signature_key)
  return password_signature_key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ManagedUserSpecifics::release_password_signature_key() {
  // @@protoc_insertion_point(field_release:sync_pb.ManagedUserSpecifics.password_signature_key)
  clear_has_password_signature_key();
  return password_signature_key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ManagedUserSpecifics::set_allocated_password_signature_key(::std::string* password_signature_key) {
  if (password_signature_key != NULL) {
    set_has_password_signature_key();
  } else {
    clear_has_password_signature_key();
  }
  password_signature_key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), password_signature_key);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ManagedUserSpecifics.password_signature_key)
}

// optional string password_encryption_key = 8;
inline bool ManagedUserSpecifics::has_password_encryption_key() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ManagedUserSpecifics::set_has_password_encryption_key() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ManagedUserSpecifics::clear_has_password_encryption_key() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ManagedUserSpecifics::clear_password_encryption_key() {
  password_encryption_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_password_encryption_key();
}
inline const ::std::string& ManagedUserSpecifics::password_encryption_key() const {
  // @@protoc_insertion_point(field_get:sync_pb.ManagedUserSpecifics.password_encryption_key)
  return password_encryption_key_.GetNoArena();
}
inline void ManagedUserSpecifics::set_password_encryption_key(const ::std::string& value) {
  set_has_password_encryption_key();
  password_encryption_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ManagedUserSpecifics.password_encryption_key)
}
#if LANG_CXX11
inline void ManagedUserSpecifics::set_password_encryption_key(::std::string&& value) {
  set_has_password_encryption_key();
  password_encryption_key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ManagedUserSpecifics.password_encryption_key)
}
#endif
inline void ManagedUserSpecifics::set_password_encryption_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_password_encryption_key();
  password_encryption_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ManagedUserSpecifics.password_encryption_key)
}
inline void ManagedUserSpecifics::set_password_encryption_key(const char* value, size_t size) {
  set_has_password_encryption_key();
  password_encryption_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ManagedUserSpecifics.password_encryption_key)
}
inline ::std::string* ManagedUserSpecifics::mutable_password_encryption_key() {
  set_has_password_encryption_key();
  // @@protoc_insertion_point(field_mutable:sync_pb.ManagedUserSpecifics.password_encryption_key)
  return password_encryption_key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ManagedUserSpecifics::release_password_encryption_key() {
  // @@protoc_insertion_point(field_release:sync_pb.ManagedUserSpecifics.password_encryption_key)
  clear_has_password_encryption_key();
  return password_encryption_key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ManagedUserSpecifics::set_allocated_password_encryption_key(::std::string* password_encryption_key) {
  if (password_encryption_key != NULL) {
    set_has_password_encryption_key();
  } else {
    clear_has_password_encryption_key();
  }
  password_encryption_key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), password_encryption_key);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ManagedUserSpecifics.password_encryption_key)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_managed_5fuser_5fspecifics_2eproto__INCLUDED
