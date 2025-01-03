// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: app_setting_specifics.proto

#ifndef PROTOBUF_app_5fsetting_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_app_5fsetting_5fspecifics_2eproto__INCLUDED

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
#include "extension_setting_specifics.pb.h"
// @@protoc_insertion_point(includes)
namespace sync_pb {
class AppSettingSpecifics;
class AppSettingSpecificsDefaultTypeInternal;
extern AppSettingSpecificsDefaultTypeInternal _AppSettingSpecifics_default_instance_;
}  // namespace sync_pb

namespace sync_pb {

namespace protobuf_app_5fsetting_5fspecifics_2eproto {
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
}  // namespace protobuf_app_5fsetting_5fspecifics_2eproto

// ===================================================================

class AppSettingSpecifics : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:sync_pb.AppSettingSpecifics) */ {
 public:
  AppSettingSpecifics();
  virtual ~AppSettingSpecifics();

  AppSettingSpecifics(const AppSettingSpecifics& from);

  inline AppSettingSpecifics& operator=(const AppSettingSpecifics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const AppSettingSpecifics& default_instance();

  static inline const AppSettingSpecifics* internal_default_instance() {
    return reinterpret_cast<const AppSettingSpecifics*>(
               &_AppSettingSpecifics_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(AppSettingSpecifics* other);

  // implements Message ----------------------------------------------

  inline AppSettingSpecifics* New() const PROTOBUF_FINAL { return New(NULL); }

  AppSettingSpecifics* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const AppSettingSpecifics& from);
  void MergeFrom(const AppSettingSpecifics& from);
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
  void InternalSwap(AppSettingSpecifics* other);
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

  // optional .sync_pb.ExtensionSettingSpecifics extension_setting = 1;
  bool has_extension_setting() const;
  void clear_extension_setting();
  static const int kExtensionSettingFieldNumber = 1;
  const ::sync_pb::ExtensionSettingSpecifics& extension_setting() const;
  ::sync_pb::ExtensionSettingSpecifics* mutable_extension_setting();
  ::sync_pb::ExtensionSettingSpecifics* release_extension_setting();
  void set_allocated_extension_setting(::sync_pb::ExtensionSettingSpecifics* extension_setting);

  // @@protoc_insertion_point(class_scope:sync_pb.AppSettingSpecifics)
 private:
  void set_has_extension_setting();
  void clear_has_extension_setting();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::sync_pb::ExtensionSettingSpecifics* extension_setting_;
  friend struct protobuf_app_5fsetting_5fspecifics_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// AppSettingSpecifics

// optional .sync_pb.ExtensionSettingSpecifics extension_setting = 1;
inline bool AppSettingSpecifics::has_extension_setting() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AppSettingSpecifics::set_has_extension_setting() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AppSettingSpecifics::clear_has_extension_setting() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AppSettingSpecifics::clear_extension_setting() {
  if (extension_setting_ != NULL) extension_setting_->::sync_pb::ExtensionSettingSpecifics::Clear();
  clear_has_extension_setting();
}
inline const ::sync_pb::ExtensionSettingSpecifics& AppSettingSpecifics::extension_setting() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppSettingSpecifics.extension_setting)
  return extension_setting_ != NULL ? *extension_setting_
                         : *::sync_pb::ExtensionSettingSpecifics::internal_default_instance();
}
inline ::sync_pb::ExtensionSettingSpecifics* AppSettingSpecifics::mutable_extension_setting() {
  set_has_extension_setting();
  if (extension_setting_ == NULL) {
    extension_setting_ = new ::sync_pb::ExtensionSettingSpecifics;
  }
  // @@protoc_insertion_point(field_mutable:sync_pb.AppSettingSpecifics.extension_setting)
  return extension_setting_;
}
inline ::sync_pb::ExtensionSettingSpecifics* AppSettingSpecifics::release_extension_setting() {
  // @@protoc_insertion_point(field_release:sync_pb.AppSettingSpecifics.extension_setting)
  clear_has_extension_setting();
  ::sync_pb::ExtensionSettingSpecifics* temp = extension_setting_;
  extension_setting_ = NULL;
  return temp;
}
inline void AppSettingSpecifics::set_allocated_extension_setting(::sync_pb::ExtensionSettingSpecifics* extension_setting) {
  delete extension_setting_;
  extension_setting_ = extension_setting;
  if (extension_setting) {
    set_has_extension_setting();
  } else {
    clear_has_extension_setting();
  }
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppSettingSpecifics.extension_setting)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_app_5fsetting_5fspecifics_2eproto__INCLUDED
