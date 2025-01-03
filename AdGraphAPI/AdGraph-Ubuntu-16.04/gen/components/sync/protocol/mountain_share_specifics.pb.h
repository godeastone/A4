// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mountain_share_specifics.proto

#ifndef PROTOBUF_mountain_5fshare_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_mountain_5fshare_5fspecifics_2eproto__INCLUDED

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
class MountainShareSpecifics;
class MountainShareSpecificsDefaultTypeInternal;
extern MountainShareSpecificsDefaultTypeInternal _MountainShareSpecifics_default_instance_;
}  // namespace sync_pb

namespace sync_pb {

namespace protobuf_mountain_5fshare_5fspecifics_2eproto {
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
}  // namespace protobuf_mountain_5fshare_5fspecifics_2eproto

// ===================================================================

class MountainShareSpecifics : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:sync_pb.MountainShareSpecifics) */ {
 public:
  MountainShareSpecifics();
  virtual ~MountainShareSpecifics();

  MountainShareSpecifics(const MountainShareSpecifics& from);

  inline MountainShareSpecifics& operator=(const MountainShareSpecifics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const MountainShareSpecifics& default_instance();

  static inline const MountainShareSpecifics* internal_default_instance() {
    return reinterpret_cast<const MountainShareSpecifics*>(
               &_MountainShareSpecifics_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(MountainShareSpecifics* other);

  // implements Message ----------------------------------------------

  inline MountainShareSpecifics* New() const PROTOBUF_FINAL { return New(NULL); }

  MountainShareSpecifics* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const MountainShareSpecifics& from);
  void MergeFrom(const MountainShareSpecifics& from);
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
  void InternalSwap(MountainShareSpecifics* other);
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

  // optional string url = 2;
  bool has_url() const;
  void clear_url();
  static const int kUrlFieldNumber = 2;
  const ::std::string& url() const;
  void set_url(const ::std::string& value);
  #if LANG_CXX11
  void set_url(::std::string&& value);
  #endif
  void set_url(const char* value);
  void set_url(const char* value, size_t size);
  ::std::string* mutable_url();
  ::std::string* release_url();
  void set_allocated_url(::std::string* url);

  // optional bytes favicon = 3;
  bool has_favicon() const;
  void clear_favicon();
  static const int kFaviconFieldNumber = 3;
  const ::std::string& favicon() const;
  void set_favicon(const ::std::string& value);
  #if LANG_CXX11
  void set_favicon(::std::string&& value);
  #endif
  void set_favicon(const char* value);
  void set_favicon(const void* value, size_t size);
  ::std::string* mutable_favicon();
  ::std::string* release_favicon();
  void set_allocated_favicon(::std::string* favicon);

  // optional string title = 4;
  bool has_title() const;
  void clear_title();
  static const int kTitleFieldNumber = 4;
  const ::std::string& title() const;
  void set_title(const ::std::string& value);
  #if LANG_CXX11
  void set_title(::std::string&& value);
  #endif
  void set_title(const char* value);
  void set_title(const char* value, size_t size);
  ::std::string* mutable_title();
  ::std::string* release_title();
  void set_allocated_title(::std::string* title);

  // optional string icon_url = 6;
  bool has_icon_url() const;
  void clear_icon_url();
  static const int kIconUrlFieldNumber = 6;
  const ::std::string& icon_url() const;
  void set_icon_url(const ::std::string& value);
  #if LANG_CXX11
  void set_icon_url(::std::string&& value);
  #endif
  void set_icon_url(const char* value);
  void set_icon_url(const char* value, size_t size);
  ::std::string* mutable_icon_url();
  ::std::string* release_icon_url();
  void set_allocated_icon_url(::std::string* icon_url);

  // optional int64 creation_time_ms = 5;
  bool has_creation_time_ms() const;
  void clear_creation_time_ms();
  static const int kCreationTimeMsFieldNumber = 5;
  ::google::protobuf::int64 creation_time_ms() const;
  void set_creation_time_ms(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:sync_pb.MountainShareSpecifics)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_url();
  void clear_has_url();
  void set_has_favicon();
  void clear_has_favicon();
  void set_has_title();
  void clear_has_title();
  void set_has_creation_time_ms();
  void clear_has_creation_time_ms();
  void set_has_icon_url();
  void clear_has_icon_url();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr url_;
  ::google::protobuf::internal::ArenaStringPtr favicon_;
  ::google::protobuf::internal::ArenaStringPtr title_;
  ::google::protobuf::internal::ArenaStringPtr icon_url_;
  ::google::protobuf::int64 creation_time_ms_;
  friend struct protobuf_mountain_5fshare_5fspecifics_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MountainShareSpecifics

// optional string id = 1;
inline bool MountainShareSpecifics::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MountainShareSpecifics::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MountainShareSpecifics::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MountainShareSpecifics::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& MountainShareSpecifics::id() const {
  // @@protoc_insertion_point(field_get:sync_pb.MountainShareSpecifics.id)
  return id_.GetNoArena();
}
inline void MountainShareSpecifics::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.MountainShareSpecifics.id)
}
#if LANG_CXX11
inline void MountainShareSpecifics::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.MountainShareSpecifics.id)
}
#endif
inline void MountainShareSpecifics::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.MountainShareSpecifics.id)
}
inline void MountainShareSpecifics::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.MountainShareSpecifics.id)
}
inline ::std::string* MountainShareSpecifics::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:sync_pb.MountainShareSpecifics.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MountainShareSpecifics::release_id() {
  // @@protoc_insertion_point(field_release:sync_pb.MountainShareSpecifics.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MountainShareSpecifics::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.MountainShareSpecifics.id)
}

// optional string url = 2;
inline bool MountainShareSpecifics::has_url() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MountainShareSpecifics::set_has_url() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MountainShareSpecifics::clear_has_url() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MountainShareSpecifics::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_url();
}
inline const ::std::string& MountainShareSpecifics::url() const {
  // @@protoc_insertion_point(field_get:sync_pb.MountainShareSpecifics.url)
  return url_.GetNoArena();
}
inline void MountainShareSpecifics::set_url(const ::std::string& value) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.MountainShareSpecifics.url)
}
#if LANG_CXX11
inline void MountainShareSpecifics::set_url(::std::string&& value) {
  set_has_url();
  url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.MountainShareSpecifics.url)
}
#endif
inline void MountainShareSpecifics::set_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.MountainShareSpecifics.url)
}
inline void MountainShareSpecifics::set_url(const char* value, size_t size) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.MountainShareSpecifics.url)
}
inline ::std::string* MountainShareSpecifics::mutable_url() {
  set_has_url();
  // @@protoc_insertion_point(field_mutable:sync_pb.MountainShareSpecifics.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MountainShareSpecifics::release_url() {
  // @@protoc_insertion_point(field_release:sync_pb.MountainShareSpecifics.url)
  clear_has_url();
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MountainShareSpecifics::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    set_has_url();
  } else {
    clear_has_url();
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.MountainShareSpecifics.url)
}

// optional bytes favicon = 3;
inline bool MountainShareSpecifics::has_favicon() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MountainShareSpecifics::set_has_favicon() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MountainShareSpecifics::clear_has_favicon() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MountainShareSpecifics::clear_favicon() {
  favicon_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_favicon();
}
inline const ::std::string& MountainShareSpecifics::favicon() const {
  // @@protoc_insertion_point(field_get:sync_pb.MountainShareSpecifics.favicon)
  return favicon_.GetNoArena();
}
inline void MountainShareSpecifics::set_favicon(const ::std::string& value) {
  set_has_favicon();
  favicon_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.MountainShareSpecifics.favicon)
}
#if LANG_CXX11
inline void MountainShareSpecifics::set_favicon(::std::string&& value) {
  set_has_favicon();
  favicon_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.MountainShareSpecifics.favicon)
}
#endif
inline void MountainShareSpecifics::set_favicon(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_favicon();
  favicon_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.MountainShareSpecifics.favicon)
}
inline void MountainShareSpecifics::set_favicon(const void* value, size_t size) {
  set_has_favicon();
  favicon_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.MountainShareSpecifics.favicon)
}
inline ::std::string* MountainShareSpecifics::mutable_favicon() {
  set_has_favicon();
  // @@protoc_insertion_point(field_mutable:sync_pb.MountainShareSpecifics.favicon)
  return favicon_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MountainShareSpecifics::release_favicon() {
  // @@protoc_insertion_point(field_release:sync_pb.MountainShareSpecifics.favicon)
  clear_has_favicon();
  return favicon_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MountainShareSpecifics::set_allocated_favicon(::std::string* favicon) {
  if (favicon != NULL) {
    set_has_favicon();
  } else {
    clear_has_favicon();
  }
  favicon_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), favicon);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.MountainShareSpecifics.favicon)
}

// optional string title = 4;
inline bool MountainShareSpecifics::has_title() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MountainShareSpecifics::set_has_title() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MountainShareSpecifics::clear_has_title() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MountainShareSpecifics::clear_title() {
  title_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_title();
}
inline const ::std::string& MountainShareSpecifics::title() const {
  // @@protoc_insertion_point(field_get:sync_pb.MountainShareSpecifics.title)
  return title_.GetNoArena();
}
inline void MountainShareSpecifics::set_title(const ::std::string& value) {
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.MountainShareSpecifics.title)
}
#if LANG_CXX11
inline void MountainShareSpecifics::set_title(::std::string&& value) {
  set_has_title();
  title_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.MountainShareSpecifics.title)
}
#endif
inline void MountainShareSpecifics::set_title(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.MountainShareSpecifics.title)
}
inline void MountainShareSpecifics::set_title(const char* value, size_t size) {
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.MountainShareSpecifics.title)
}
inline ::std::string* MountainShareSpecifics::mutable_title() {
  set_has_title();
  // @@protoc_insertion_point(field_mutable:sync_pb.MountainShareSpecifics.title)
  return title_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MountainShareSpecifics::release_title() {
  // @@protoc_insertion_point(field_release:sync_pb.MountainShareSpecifics.title)
  clear_has_title();
  return title_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MountainShareSpecifics::set_allocated_title(::std::string* title) {
  if (title != NULL) {
    set_has_title();
  } else {
    clear_has_title();
  }
  title_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), title);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.MountainShareSpecifics.title)
}

// optional int64 creation_time_ms = 5;
inline bool MountainShareSpecifics::has_creation_time_ms() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void MountainShareSpecifics::set_has_creation_time_ms() {
  _has_bits_[0] |= 0x00000020u;
}
inline void MountainShareSpecifics::clear_has_creation_time_ms() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void MountainShareSpecifics::clear_creation_time_ms() {
  creation_time_ms_ = GOOGLE_LONGLONG(0);
  clear_has_creation_time_ms();
}
inline ::google::protobuf::int64 MountainShareSpecifics::creation_time_ms() const {
  // @@protoc_insertion_point(field_get:sync_pb.MountainShareSpecifics.creation_time_ms)
  return creation_time_ms_;
}
inline void MountainShareSpecifics::set_creation_time_ms(::google::protobuf::int64 value) {
  set_has_creation_time_ms();
  creation_time_ms_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.MountainShareSpecifics.creation_time_ms)
}

// optional string icon_url = 6;
inline bool MountainShareSpecifics::has_icon_url() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void MountainShareSpecifics::set_has_icon_url() {
  _has_bits_[0] |= 0x00000010u;
}
inline void MountainShareSpecifics::clear_has_icon_url() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void MountainShareSpecifics::clear_icon_url() {
  icon_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_icon_url();
}
inline const ::std::string& MountainShareSpecifics::icon_url() const {
  // @@protoc_insertion_point(field_get:sync_pb.MountainShareSpecifics.icon_url)
  return icon_url_.GetNoArena();
}
inline void MountainShareSpecifics::set_icon_url(const ::std::string& value) {
  set_has_icon_url();
  icon_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.MountainShareSpecifics.icon_url)
}
#if LANG_CXX11
inline void MountainShareSpecifics::set_icon_url(::std::string&& value) {
  set_has_icon_url();
  icon_url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.MountainShareSpecifics.icon_url)
}
#endif
inline void MountainShareSpecifics::set_icon_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_icon_url();
  icon_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.MountainShareSpecifics.icon_url)
}
inline void MountainShareSpecifics::set_icon_url(const char* value, size_t size) {
  set_has_icon_url();
  icon_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.MountainShareSpecifics.icon_url)
}
inline ::std::string* MountainShareSpecifics::mutable_icon_url() {
  set_has_icon_url();
  // @@protoc_insertion_point(field_mutable:sync_pb.MountainShareSpecifics.icon_url)
  return icon_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MountainShareSpecifics::release_icon_url() {
  // @@protoc_insertion_point(field_release:sync_pb.MountainShareSpecifics.icon_url)
  clear_has_icon_url();
  return icon_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MountainShareSpecifics::set_allocated_icon_url(::std::string* icon_url) {
  if (icon_url != NULL) {
    set_has_icon_url();
  } else {
    clear_has_icon_url();
  }
  icon_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), icon_url);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.MountainShareSpecifics.icon_url)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_mountain_5fshare_5fspecifics_2eproto__INCLUDED