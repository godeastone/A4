// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: arc_package_specifics.proto

#ifndef PROTOBUF_arc_5fpackage_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_arc_5fpackage_5fspecifics_2eproto__INCLUDED

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
class ArcPackageSpecifics;
class ArcPackageSpecificsDefaultTypeInternal;
extern ArcPackageSpecificsDefaultTypeInternal _ArcPackageSpecifics_default_instance_;
}  // namespace sync_pb

namespace sync_pb {

namespace protobuf_arc_5fpackage_5fspecifics_2eproto {
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
}  // namespace protobuf_arc_5fpackage_5fspecifics_2eproto

// ===================================================================

class ArcPackageSpecifics : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:sync_pb.ArcPackageSpecifics) */ {
 public:
  ArcPackageSpecifics();
  virtual ~ArcPackageSpecifics();

  ArcPackageSpecifics(const ArcPackageSpecifics& from);

  inline ArcPackageSpecifics& operator=(const ArcPackageSpecifics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ArcPackageSpecifics& default_instance();

  static inline const ArcPackageSpecifics* internal_default_instance() {
    return reinterpret_cast<const ArcPackageSpecifics*>(
               &_ArcPackageSpecifics_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ArcPackageSpecifics* other);

  // implements Message ----------------------------------------------

  inline ArcPackageSpecifics* New() const PROTOBUF_FINAL { return New(NULL); }

  ArcPackageSpecifics* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ArcPackageSpecifics& from);
  void MergeFrom(const ArcPackageSpecifics& from);
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
  void InternalSwap(ArcPackageSpecifics* other);
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

  // optional string package_name = 1;
  bool has_package_name() const;
  void clear_package_name();
  static const int kPackageNameFieldNumber = 1;
  const ::std::string& package_name() const;
  void set_package_name(const ::std::string& value);
  #if LANG_CXX11
  void set_package_name(::std::string&& value);
  #endif
  void set_package_name(const char* value);
  void set_package_name(const char* value, size_t size);
  ::std::string* mutable_package_name();
  ::std::string* release_package_name();
  void set_allocated_package_name(::std::string* package_name);

  // optional int64 last_backup_android_id = 3;
  bool has_last_backup_android_id() const;
  void clear_last_backup_android_id();
  static const int kLastBackupAndroidIdFieldNumber = 3;
  ::google::protobuf::int64 last_backup_android_id() const;
  void set_last_backup_android_id(::google::protobuf::int64 value);

  // optional int64 last_backup_time = 4;
  bool has_last_backup_time() const;
  void clear_last_backup_time();
  static const int kLastBackupTimeFieldNumber = 4;
  ::google::protobuf::int64 last_backup_time() const;
  void set_last_backup_time(::google::protobuf::int64 value);

  // optional int32 package_version = 2;
  bool has_package_version() const;
  void clear_package_version();
  static const int kPackageVersionFieldNumber = 2;
  ::google::protobuf::int32 package_version() const;
  void set_package_version(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:sync_pb.ArcPackageSpecifics)
 private:
  void set_has_package_name();
  void clear_has_package_name();
  void set_has_package_version();
  void clear_has_package_version();
  void set_has_last_backup_android_id();
  void clear_has_last_backup_android_id();
  void set_has_last_backup_time();
  void clear_has_last_backup_time();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr package_name_;
  ::google::protobuf::int64 last_backup_android_id_;
  ::google::protobuf::int64 last_backup_time_;
  ::google::protobuf::int32 package_version_;
  friend struct protobuf_arc_5fpackage_5fspecifics_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ArcPackageSpecifics

// optional string package_name = 1;
inline bool ArcPackageSpecifics::has_package_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ArcPackageSpecifics::set_has_package_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ArcPackageSpecifics::clear_has_package_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ArcPackageSpecifics::clear_package_name() {
  package_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_package_name();
}
inline const ::std::string& ArcPackageSpecifics::package_name() const {
  // @@protoc_insertion_point(field_get:sync_pb.ArcPackageSpecifics.package_name)
  return package_name_.GetNoArena();
}
inline void ArcPackageSpecifics::set_package_name(const ::std::string& value) {
  set_has_package_name();
  package_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ArcPackageSpecifics.package_name)
}
#if LANG_CXX11
inline void ArcPackageSpecifics::set_package_name(::std::string&& value) {
  set_has_package_name();
  package_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ArcPackageSpecifics.package_name)
}
#endif
inline void ArcPackageSpecifics::set_package_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_package_name();
  package_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ArcPackageSpecifics.package_name)
}
inline void ArcPackageSpecifics::set_package_name(const char* value, size_t size) {
  set_has_package_name();
  package_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ArcPackageSpecifics.package_name)
}
inline ::std::string* ArcPackageSpecifics::mutable_package_name() {
  set_has_package_name();
  // @@protoc_insertion_point(field_mutable:sync_pb.ArcPackageSpecifics.package_name)
  return package_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ArcPackageSpecifics::release_package_name() {
  // @@protoc_insertion_point(field_release:sync_pb.ArcPackageSpecifics.package_name)
  clear_has_package_name();
  return package_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ArcPackageSpecifics::set_allocated_package_name(::std::string* package_name) {
  if (package_name != NULL) {
    set_has_package_name();
  } else {
    clear_has_package_name();
  }
  package_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), package_name);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ArcPackageSpecifics.package_name)
}

// optional int32 package_version = 2;
inline bool ArcPackageSpecifics::has_package_version() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ArcPackageSpecifics::set_has_package_version() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ArcPackageSpecifics::clear_has_package_version() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ArcPackageSpecifics::clear_package_version() {
  package_version_ = 0;
  clear_has_package_version();
}
inline ::google::protobuf::int32 ArcPackageSpecifics::package_version() const {
  // @@protoc_insertion_point(field_get:sync_pb.ArcPackageSpecifics.package_version)
  return package_version_;
}
inline void ArcPackageSpecifics::set_package_version(::google::protobuf::int32 value) {
  set_has_package_version();
  package_version_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ArcPackageSpecifics.package_version)
}

// optional int64 last_backup_android_id = 3;
inline bool ArcPackageSpecifics::has_last_backup_android_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ArcPackageSpecifics::set_has_last_backup_android_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ArcPackageSpecifics::clear_has_last_backup_android_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ArcPackageSpecifics::clear_last_backup_android_id() {
  last_backup_android_id_ = GOOGLE_LONGLONG(0);
  clear_has_last_backup_android_id();
}
inline ::google::protobuf::int64 ArcPackageSpecifics::last_backup_android_id() const {
  // @@protoc_insertion_point(field_get:sync_pb.ArcPackageSpecifics.last_backup_android_id)
  return last_backup_android_id_;
}
inline void ArcPackageSpecifics::set_last_backup_android_id(::google::protobuf::int64 value) {
  set_has_last_backup_android_id();
  last_backup_android_id_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ArcPackageSpecifics.last_backup_android_id)
}

// optional int64 last_backup_time = 4;
inline bool ArcPackageSpecifics::has_last_backup_time() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ArcPackageSpecifics::set_has_last_backup_time() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ArcPackageSpecifics::clear_has_last_backup_time() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ArcPackageSpecifics::clear_last_backup_time() {
  last_backup_time_ = GOOGLE_LONGLONG(0);
  clear_has_last_backup_time();
}
inline ::google::protobuf::int64 ArcPackageSpecifics::last_backup_time() const {
  // @@protoc_insertion_point(field_get:sync_pb.ArcPackageSpecifics.last_backup_time)
  return last_backup_time_;
}
inline void ArcPackageSpecifics::set_last_backup_time(::google::protobuf::int64 value) {
  set_has_last_backup_time();
  last_backup_time_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ArcPackageSpecifics.last_backup_time)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_arc_5fpackage_5fspecifics_2eproto__INCLUDED
