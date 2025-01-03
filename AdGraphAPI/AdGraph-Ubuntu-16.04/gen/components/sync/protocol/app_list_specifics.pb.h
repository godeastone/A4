// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: app_list_specifics.proto

#ifndef PROTOBUF_app_5flist_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_app_5flist_5fspecifics_2eproto__INCLUDED

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
class AppListSpecifics;
class AppListSpecificsDefaultTypeInternal;
extern AppListSpecificsDefaultTypeInternal _AppListSpecifics_default_instance_;
}  // namespace sync_pb

namespace sync_pb {

namespace protobuf_app_5flist_5fspecifics_2eproto {
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
}  // namespace protobuf_app_5flist_5fspecifics_2eproto

enum AppListSpecifics_AppListItemType {
  AppListSpecifics_AppListItemType_TYPE_APP = 1,
  AppListSpecifics_AppListItemType_TYPE_REMOVE_DEFAULT_APP = 2,
  AppListSpecifics_AppListItemType_TYPE_FOLDER = 3,
  AppListSpecifics_AppListItemType_TYPE_URL = 4
};
bool AppListSpecifics_AppListItemType_IsValid(int value);
const AppListSpecifics_AppListItemType AppListSpecifics_AppListItemType_AppListItemType_MIN = AppListSpecifics_AppListItemType_TYPE_APP;
const AppListSpecifics_AppListItemType AppListSpecifics_AppListItemType_AppListItemType_MAX = AppListSpecifics_AppListItemType_TYPE_URL;
const int AppListSpecifics_AppListItemType_AppListItemType_ARRAYSIZE = AppListSpecifics_AppListItemType_AppListItemType_MAX + 1;

// ===================================================================

class AppListSpecifics : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:sync_pb.AppListSpecifics) */ {
 public:
  AppListSpecifics();
  virtual ~AppListSpecifics();

  AppListSpecifics(const AppListSpecifics& from);

  inline AppListSpecifics& operator=(const AppListSpecifics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const AppListSpecifics& default_instance();

  static inline const AppListSpecifics* internal_default_instance() {
    return reinterpret_cast<const AppListSpecifics*>(
               &_AppListSpecifics_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(AppListSpecifics* other);

  // implements Message ----------------------------------------------

  inline AppListSpecifics* New() const PROTOBUF_FINAL { return New(NULL); }

  AppListSpecifics* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const AppListSpecifics& from);
  void MergeFrom(const AppListSpecifics& from);
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
  void InternalSwap(AppListSpecifics* other);
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

  typedef AppListSpecifics_AppListItemType AppListItemType;
  static const AppListItemType TYPE_APP =
    AppListSpecifics_AppListItemType_TYPE_APP;
  static const AppListItemType TYPE_REMOVE_DEFAULT_APP =
    AppListSpecifics_AppListItemType_TYPE_REMOVE_DEFAULT_APP;
  static const AppListItemType TYPE_FOLDER =
    AppListSpecifics_AppListItemType_TYPE_FOLDER;
  static const AppListItemType TYPE_URL =
    AppListSpecifics_AppListItemType_TYPE_URL;
  static inline bool AppListItemType_IsValid(int value) {
    return AppListSpecifics_AppListItemType_IsValid(value);
  }
  static const AppListItemType AppListItemType_MIN =
    AppListSpecifics_AppListItemType_AppListItemType_MIN;
  static const AppListItemType AppListItemType_MAX =
    AppListSpecifics_AppListItemType_AppListItemType_MAX;
  static const int AppListItemType_ARRAYSIZE =
    AppListSpecifics_AppListItemType_AppListItemType_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // optional string item_id = 1;
  bool has_item_id() const;
  void clear_item_id();
  static const int kItemIdFieldNumber = 1;
  const ::std::string& item_id() const;
  void set_item_id(const ::std::string& value);
  #if LANG_CXX11
  void set_item_id(::std::string&& value);
  #endif
  void set_item_id(const char* value);
  void set_item_id(const char* value, size_t size);
  ::std::string* mutable_item_id();
  ::std::string* release_item_id();
  void set_allocated_item_id(::std::string* item_id);

  // optional string item_name = 3;
  bool has_item_name() const;
  void clear_item_name();
  static const int kItemNameFieldNumber = 3;
  const ::std::string& item_name() const;
  void set_item_name(const ::std::string& value);
  #if LANG_CXX11
  void set_item_name(::std::string&& value);
  #endif
  void set_item_name(const char* value);
  void set_item_name(const char* value, size_t size);
  ::std::string* mutable_item_name();
  ::std::string* release_item_name();
  void set_allocated_item_name(::std::string* item_name);

  // optional string parent_id = 4;
  bool has_parent_id() const;
  void clear_parent_id();
  static const int kParentIdFieldNumber = 4;
  const ::std::string& parent_id() const;
  void set_parent_id(const ::std::string& value);
  #if LANG_CXX11
  void set_parent_id(::std::string&& value);
  #endif
  void set_parent_id(const char* value);
  void set_parent_id(const char* value, size_t size);
  ::std::string* mutable_parent_id();
  ::std::string* release_parent_id();
  void set_allocated_parent_id(::std::string* parent_id);

  // optional string OBSOLETE_page_ordinal = 5 [deprecated = true];
  GOOGLE_PROTOBUF_DEPRECATED_ATTR bool has_obsolete_page_ordinal() const;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void clear_obsolete_page_ordinal();
  GOOGLE_PROTOBUF_DEPRECATED_ATTR static const int kOBSOLETEPageOrdinalFieldNumber = 5;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR const ::std::string& obsolete_page_ordinal() const;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void set_obsolete_page_ordinal(const ::std::string& value);
  #if LANG_CXX11
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void set_obsolete_page_ordinal(::std::string&& value);
  #endif
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void set_obsolete_page_ordinal(const char* value);
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void set_obsolete_page_ordinal(const char* value, size_t size);
  GOOGLE_PROTOBUF_DEPRECATED_ATTR ::std::string* mutable_obsolete_page_ordinal();
  GOOGLE_PROTOBUF_DEPRECATED_ATTR ::std::string* release_obsolete_page_ordinal();
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void set_allocated_obsolete_page_ordinal(::std::string* obsolete_page_ordinal);

  // optional string item_ordinal = 6;
  bool has_item_ordinal() const;
  void clear_item_ordinal();
  static const int kItemOrdinalFieldNumber = 6;
  const ::std::string& item_ordinal() const;
  void set_item_ordinal(const ::std::string& value);
  #if LANG_CXX11
  void set_item_ordinal(::std::string&& value);
  #endif
  void set_item_ordinal(const char* value);
  void set_item_ordinal(const char* value, size_t size);
  ::std::string* mutable_item_ordinal();
  ::std::string* release_item_ordinal();
  void set_allocated_item_ordinal(::std::string* item_ordinal);

  // optional string item_pin_ordinal = 7;
  bool has_item_pin_ordinal() const;
  void clear_item_pin_ordinal();
  static const int kItemPinOrdinalFieldNumber = 7;
  const ::std::string& item_pin_ordinal() const;
  void set_item_pin_ordinal(const ::std::string& value);
  #if LANG_CXX11
  void set_item_pin_ordinal(::std::string&& value);
  #endif
  void set_item_pin_ordinal(const char* value);
  void set_item_pin_ordinal(const char* value, size_t size);
  ::std::string* mutable_item_pin_ordinal();
  ::std::string* release_item_pin_ordinal();
  void set_allocated_item_pin_ordinal(::std::string* item_pin_ordinal);

  // optional .sync_pb.AppListSpecifics.AppListItemType item_type = 2;
  bool has_item_type() const;
  void clear_item_type();
  static const int kItemTypeFieldNumber = 2;
  ::sync_pb::AppListSpecifics_AppListItemType item_type() const;
  void set_item_type(::sync_pb::AppListSpecifics_AppListItemType value);

  // @@protoc_insertion_point(class_scope:sync_pb.AppListSpecifics)
 private:
  void set_has_item_id();
  void clear_has_item_id();
  void set_has_item_type();
  void clear_has_item_type();
  void set_has_item_name();
  void clear_has_item_name();
  void set_has_parent_id();
  void clear_has_parent_id();
  void set_has_obsolete_page_ordinal();
  void clear_has_obsolete_page_ordinal();
  void set_has_item_ordinal();
  void clear_has_item_ordinal();
  void set_has_item_pin_ordinal();
  void clear_has_item_pin_ordinal();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr item_id_;
  ::google::protobuf::internal::ArenaStringPtr item_name_;
  ::google::protobuf::internal::ArenaStringPtr parent_id_;
  ::google::protobuf::internal::ArenaStringPtr obsolete_page_ordinal_;
  ::google::protobuf::internal::ArenaStringPtr item_ordinal_;
  ::google::protobuf::internal::ArenaStringPtr item_pin_ordinal_;
  int item_type_;
  friend struct protobuf_app_5flist_5fspecifics_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// AppListSpecifics

// optional string item_id = 1;
inline bool AppListSpecifics::has_item_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AppListSpecifics::set_has_item_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AppListSpecifics::clear_has_item_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AppListSpecifics::clear_item_id() {
  item_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_item_id();
}
inline const ::std::string& AppListSpecifics::item_id() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppListSpecifics.item_id)
  return item_id_.GetNoArena();
}
inline void AppListSpecifics::set_item_id(const ::std::string& value) {
  set_has_item_id();
  item_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppListSpecifics.item_id)
}
#if LANG_CXX11
inline void AppListSpecifics::set_item_id(::std::string&& value) {
  set_has_item_id();
  item_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.AppListSpecifics.item_id)
}
#endif
inline void AppListSpecifics::set_item_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_item_id();
  item_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppListSpecifics.item_id)
}
inline void AppListSpecifics::set_item_id(const char* value, size_t size) {
  set_has_item_id();
  item_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppListSpecifics.item_id)
}
inline ::std::string* AppListSpecifics::mutable_item_id() {
  set_has_item_id();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppListSpecifics.item_id)
  return item_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AppListSpecifics::release_item_id() {
  // @@protoc_insertion_point(field_release:sync_pb.AppListSpecifics.item_id)
  clear_has_item_id();
  return item_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppListSpecifics::set_allocated_item_id(::std::string* item_id) {
  if (item_id != NULL) {
    set_has_item_id();
  } else {
    clear_has_item_id();
  }
  item_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), item_id);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppListSpecifics.item_id)
}

// optional .sync_pb.AppListSpecifics.AppListItemType item_type = 2;
inline bool AppListSpecifics::has_item_type() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void AppListSpecifics::set_has_item_type() {
  _has_bits_[0] |= 0x00000040u;
}
inline void AppListSpecifics::clear_has_item_type() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void AppListSpecifics::clear_item_type() {
  item_type_ = 1;
  clear_has_item_type();
}
inline ::sync_pb::AppListSpecifics_AppListItemType AppListSpecifics::item_type() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppListSpecifics.item_type)
  return static_cast< ::sync_pb::AppListSpecifics_AppListItemType >(item_type_);
}
inline void AppListSpecifics::set_item_type(::sync_pb::AppListSpecifics_AppListItemType value) {
  assert(::sync_pb::AppListSpecifics_AppListItemType_IsValid(value));
  set_has_item_type();
  item_type_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.AppListSpecifics.item_type)
}

// optional string item_name = 3;
inline bool AppListSpecifics::has_item_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AppListSpecifics::set_has_item_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AppListSpecifics::clear_has_item_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AppListSpecifics::clear_item_name() {
  item_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_item_name();
}
inline const ::std::string& AppListSpecifics::item_name() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppListSpecifics.item_name)
  return item_name_.GetNoArena();
}
inline void AppListSpecifics::set_item_name(const ::std::string& value) {
  set_has_item_name();
  item_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppListSpecifics.item_name)
}
#if LANG_CXX11
inline void AppListSpecifics::set_item_name(::std::string&& value) {
  set_has_item_name();
  item_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.AppListSpecifics.item_name)
}
#endif
inline void AppListSpecifics::set_item_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_item_name();
  item_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppListSpecifics.item_name)
}
inline void AppListSpecifics::set_item_name(const char* value, size_t size) {
  set_has_item_name();
  item_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppListSpecifics.item_name)
}
inline ::std::string* AppListSpecifics::mutable_item_name() {
  set_has_item_name();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppListSpecifics.item_name)
  return item_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AppListSpecifics::release_item_name() {
  // @@protoc_insertion_point(field_release:sync_pb.AppListSpecifics.item_name)
  clear_has_item_name();
  return item_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppListSpecifics::set_allocated_item_name(::std::string* item_name) {
  if (item_name != NULL) {
    set_has_item_name();
  } else {
    clear_has_item_name();
  }
  item_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), item_name);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppListSpecifics.item_name)
}

// optional string parent_id = 4;
inline bool AppListSpecifics::has_parent_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AppListSpecifics::set_has_parent_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AppListSpecifics::clear_has_parent_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AppListSpecifics::clear_parent_id() {
  parent_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_parent_id();
}
inline const ::std::string& AppListSpecifics::parent_id() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppListSpecifics.parent_id)
  return parent_id_.GetNoArena();
}
inline void AppListSpecifics::set_parent_id(const ::std::string& value) {
  set_has_parent_id();
  parent_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppListSpecifics.parent_id)
}
#if LANG_CXX11
inline void AppListSpecifics::set_parent_id(::std::string&& value) {
  set_has_parent_id();
  parent_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.AppListSpecifics.parent_id)
}
#endif
inline void AppListSpecifics::set_parent_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_parent_id();
  parent_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppListSpecifics.parent_id)
}
inline void AppListSpecifics::set_parent_id(const char* value, size_t size) {
  set_has_parent_id();
  parent_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppListSpecifics.parent_id)
}
inline ::std::string* AppListSpecifics::mutable_parent_id() {
  set_has_parent_id();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppListSpecifics.parent_id)
  return parent_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AppListSpecifics::release_parent_id() {
  // @@protoc_insertion_point(field_release:sync_pb.AppListSpecifics.parent_id)
  clear_has_parent_id();
  return parent_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppListSpecifics::set_allocated_parent_id(::std::string* parent_id) {
  if (parent_id != NULL) {
    set_has_parent_id();
  } else {
    clear_has_parent_id();
  }
  parent_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), parent_id);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppListSpecifics.parent_id)
}

// optional string OBSOLETE_page_ordinal = 5 [deprecated = true];
inline bool AppListSpecifics::has_obsolete_page_ordinal() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AppListSpecifics::set_has_obsolete_page_ordinal() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AppListSpecifics::clear_has_obsolete_page_ordinal() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AppListSpecifics::clear_obsolete_page_ordinal() {
  obsolete_page_ordinal_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_obsolete_page_ordinal();
}
inline const ::std::string& AppListSpecifics::obsolete_page_ordinal() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppListSpecifics.OBSOLETE_page_ordinal)
  return obsolete_page_ordinal_.GetNoArena();
}
inline void AppListSpecifics::set_obsolete_page_ordinal(const ::std::string& value) {
  set_has_obsolete_page_ordinal();
  obsolete_page_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppListSpecifics.OBSOLETE_page_ordinal)
}
#if LANG_CXX11
inline void AppListSpecifics::set_obsolete_page_ordinal(::std::string&& value) {
  set_has_obsolete_page_ordinal();
  obsolete_page_ordinal_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.AppListSpecifics.OBSOLETE_page_ordinal)
}
#endif
inline void AppListSpecifics::set_obsolete_page_ordinal(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_obsolete_page_ordinal();
  obsolete_page_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppListSpecifics.OBSOLETE_page_ordinal)
}
inline void AppListSpecifics::set_obsolete_page_ordinal(const char* value, size_t size) {
  set_has_obsolete_page_ordinal();
  obsolete_page_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppListSpecifics.OBSOLETE_page_ordinal)
}
inline ::std::string* AppListSpecifics::mutable_obsolete_page_ordinal() {
  set_has_obsolete_page_ordinal();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppListSpecifics.OBSOLETE_page_ordinal)
  return obsolete_page_ordinal_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AppListSpecifics::release_obsolete_page_ordinal() {
  // @@protoc_insertion_point(field_release:sync_pb.AppListSpecifics.OBSOLETE_page_ordinal)
  clear_has_obsolete_page_ordinal();
  return obsolete_page_ordinal_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppListSpecifics::set_allocated_obsolete_page_ordinal(::std::string* obsolete_page_ordinal) {
  if (obsolete_page_ordinal != NULL) {
    set_has_obsolete_page_ordinal();
  } else {
    clear_has_obsolete_page_ordinal();
  }
  obsolete_page_ordinal_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), obsolete_page_ordinal);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppListSpecifics.OBSOLETE_page_ordinal)
}

// optional string item_ordinal = 6;
inline bool AppListSpecifics::has_item_ordinal() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void AppListSpecifics::set_has_item_ordinal() {
  _has_bits_[0] |= 0x00000010u;
}
inline void AppListSpecifics::clear_has_item_ordinal() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void AppListSpecifics::clear_item_ordinal() {
  item_ordinal_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_item_ordinal();
}
inline const ::std::string& AppListSpecifics::item_ordinal() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppListSpecifics.item_ordinal)
  return item_ordinal_.GetNoArena();
}
inline void AppListSpecifics::set_item_ordinal(const ::std::string& value) {
  set_has_item_ordinal();
  item_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppListSpecifics.item_ordinal)
}
#if LANG_CXX11
inline void AppListSpecifics::set_item_ordinal(::std::string&& value) {
  set_has_item_ordinal();
  item_ordinal_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.AppListSpecifics.item_ordinal)
}
#endif
inline void AppListSpecifics::set_item_ordinal(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_item_ordinal();
  item_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppListSpecifics.item_ordinal)
}
inline void AppListSpecifics::set_item_ordinal(const char* value, size_t size) {
  set_has_item_ordinal();
  item_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppListSpecifics.item_ordinal)
}
inline ::std::string* AppListSpecifics::mutable_item_ordinal() {
  set_has_item_ordinal();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppListSpecifics.item_ordinal)
  return item_ordinal_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AppListSpecifics::release_item_ordinal() {
  // @@protoc_insertion_point(field_release:sync_pb.AppListSpecifics.item_ordinal)
  clear_has_item_ordinal();
  return item_ordinal_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppListSpecifics::set_allocated_item_ordinal(::std::string* item_ordinal) {
  if (item_ordinal != NULL) {
    set_has_item_ordinal();
  } else {
    clear_has_item_ordinal();
  }
  item_ordinal_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), item_ordinal);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppListSpecifics.item_ordinal)
}

// optional string item_pin_ordinal = 7;
inline bool AppListSpecifics::has_item_pin_ordinal() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void AppListSpecifics::set_has_item_pin_ordinal() {
  _has_bits_[0] |= 0x00000020u;
}
inline void AppListSpecifics::clear_has_item_pin_ordinal() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void AppListSpecifics::clear_item_pin_ordinal() {
  item_pin_ordinal_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_item_pin_ordinal();
}
inline const ::std::string& AppListSpecifics::item_pin_ordinal() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppListSpecifics.item_pin_ordinal)
  return item_pin_ordinal_.GetNoArena();
}
inline void AppListSpecifics::set_item_pin_ordinal(const ::std::string& value) {
  set_has_item_pin_ordinal();
  item_pin_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppListSpecifics.item_pin_ordinal)
}
#if LANG_CXX11
inline void AppListSpecifics::set_item_pin_ordinal(::std::string&& value) {
  set_has_item_pin_ordinal();
  item_pin_ordinal_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.AppListSpecifics.item_pin_ordinal)
}
#endif
inline void AppListSpecifics::set_item_pin_ordinal(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_item_pin_ordinal();
  item_pin_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppListSpecifics.item_pin_ordinal)
}
inline void AppListSpecifics::set_item_pin_ordinal(const char* value, size_t size) {
  set_has_item_pin_ordinal();
  item_pin_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppListSpecifics.item_pin_ordinal)
}
inline ::std::string* AppListSpecifics::mutable_item_pin_ordinal() {
  set_has_item_pin_ordinal();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppListSpecifics.item_pin_ordinal)
  return item_pin_ordinal_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AppListSpecifics::release_item_pin_ordinal() {
  // @@protoc_insertion_point(field_release:sync_pb.AppListSpecifics.item_pin_ordinal)
  clear_has_item_pin_ordinal();
  return item_pin_ordinal_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppListSpecifics::set_allocated_item_pin_ordinal(::std::string* item_pin_ordinal) {
  if (item_pin_ordinal != NULL) {
    set_has_item_pin_ordinal();
  } else {
    clear_has_item_pin_ordinal();
  }
  item_pin_ordinal_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), item_pin_ordinal);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppListSpecifics.item_pin_ordinal)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace sync_pb

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::sync_pb::AppListSpecifics_AppListItemType> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_app_5flist_5fspecifics_2eproto__INCLUDED