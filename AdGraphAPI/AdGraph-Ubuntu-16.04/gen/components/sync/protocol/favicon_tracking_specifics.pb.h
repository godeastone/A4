// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: favicon_tracking_specifics.proto

#ifndef PROTOBUF_favicon_5ftracking_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_favicon_5ftracking_5fspecifics_2eproto__INCLUDED

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
class FaviconTrackingSpecifics;
class FaviconTrackingSpecificsDefaultTypeInternal;
extern FaviconTrackingSpecificsDefaultTypeInternal _FaviconTrackingSpecifics_default_instance_;
}  // namespace sync_pb

namespace sync_pb {

namespace protobuf_favicon_5ftracking_5fspecifics_2eproto {
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
}  // namespace protobuf_favicon_5ftracking_5fspecifics_2eproto

// ===================================================================

class FaviconTrackingSpecifics : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:sync_pb.FaviconTrackingSpecifics) */ {
 public:
  FaviconTrackingSpecifics();
  virtual ~FaviconTrackingSpecifics();

  FaviconTrackingSpecifics(const FaviconTrackingSpecifics& from);

  inline FaviconTrackingSpecifics& operator=(const FaviconTrackingSpecifics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const FaviconTrackingSpecifics& default_instance();

  static inline const FaviconTrackingSpecifics* internal_default_instance() {
    return reinterpret_cast<const FaviconTrackingSpecifics*>(
               &_FaviconTrackingSpecifics_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(FaviconTrackingSpecifics* other);

  // implements Message ----------------------------------------------

  inline FaviconTrackingSpecifics* New() const PROTOBUF_FINAL { return New(NULL); }

  FaviconTrackingSpecifics* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const FaviconTrackingSpecifics& from);
  void MergeFrom(const FaviconTrackingSpecifics& from);
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
  void InternalSwap(FaviconTrackingSpecifics* other);
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

  // optional string favicon_url = 1;
  bool has_favicon_url() const;
  void clear_favicon_url();
  static const int kFaviconUrlFieldNumber = 1;
  const ::std::string& favicon_url() const;
  void set_favicon_url(const ::std::string& value);
  #if LANG_CXX11
  void set_favicon_url(::std::string&& value);
  #endif
  void set_favicon_url(const char* value);
  void set_favicon_url(const char* value, size_t size);
  ::std::string* mutable_favicon_url();
  ::std::string* release_favicon_url();
  void set_allocated_favicon_url(::std::string* favicon_url);

  // optional int64 last_visit_time_ms = 3;
  bool has_last_visit_time_ms() const;
  void clear_last_visit_time_ms();
  static const int kLastVisitTimeMsFieldNumber = 3;
  ::google::protobuf::int64 last_visit_time_ms() const;
  void set_last_visit_time_ms(::google::protobuf::int64 value);

  // optional bool is_bookmarked = 4;
  bool has_is_bookmarked() const;
  void clear_is_bookmarked();
  static const int kIsBookmarkedFieldNumber = 4;
  bool is_bookmarked() const;
  void set_is_bookmarked(bool value);

  // @@protoc_insertion_point(class_scope:sync_pb.FaviconTrackingSpecifics)
 private:
  void set_has_favicon_url();
  void clear_has_favicon_url();
  void set_has_last_visit_time_ms();
  void clear_has_last_visit_time_ms();
  void set_has_is_bookmarked();
  void clear_has_is_bookmarked();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr favicon_url_;
  ::google::protobuf::int64 last_visit_time_ms_;
  bool is_bookmarked_;
  friend struct protobuf_favicon_5ftracking_5fspecifics_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// FaviconTrackingSpecifics

// optional string favicon_url = 1;
inline bool FaviconTrackingSpecifics::has_favicon_url() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FaviconTrackingSpecifics::set_has_favicon_url() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FaviconTrackingSpecifics::clear_has_favicon_url() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FaviconTrackingSpecifics::clear_favicon_url() {
  favicon_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_favicon_url();
}
inline const ::std::string& FaviconTrackingSpecifics::favicon_url() const {
  // @@protoc_insertion_point(field_get:sync_pb.FaviconTrackingSpecifics.favicon_url)
  return favicon_url_.GetNoArena();
}
inline void FaviconTrackingSpecifics::set_favicon_url(const ::std::string& value) {
  set_has_favicon_url();
  favicon_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.FaviconTrackingSpecifics.favicon_url)
}
#if LANG_CXX11
inline void FaviconTrackingSpecifics::set_favicon_url(::std::string&& value) {
  set_has_favicon_url();
  favicon_url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.FaviconTrackingSpecifics.favicon_url)
}
#endif
inline void FaviconTrackingSpecifics::set_favicon_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_favicon_url();
  favicon_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.FaviconTrackingSpecifics.favicon_url)
}
inline void FaviconTrackingSpecifics::set_favicon_url(const char* value, size_t size) {
  set_has_favicon_url();
  favicon_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.FaviconTrackingSpecifics.favicon_url)
}
inline ::std::string* FaviconTrackingSpecifics::mutable_favicon_url() {
  set_has_favicon_url();
  // @@protoc_insertion_point(field_mutable:sync_pb.FaviconTrackingSpecifics.favicon_url)
  return favicon_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FaviconTrackingSpecifics::release_favicon_url() {
  // @@protoc_insertion_point(field_release:sync_pb.FaviconTrackingSpecifics.favicon_url)
  clear_has_favicon_url();
  return favicon_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FaviconTrackingSpecifics::set_allocated_favicon_url(::std::string* favicon_url) {
  if (favicon_url != NULL) {
    set_has_favicon_url();
  } else {
    clear_has_favicon_url();
  }
  favicon_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), favicon_url);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.FaviconTrackingSpecifics.favicon_url)
}

// optional int64 last_visit_time_ms = 3;
inline bool FaviconTrackingSpecifics::has_last_visit_time_ms() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FaviconTrackingSpecifics::set_has_last_visit_time_ms() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FaviconTrackingSpecifics::clear_has_last_visit_time_ms() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FaviconTrackingSpecifics::clear_last_visit_time_ms() {
  last_visit_time_ms_ = GOOGLE_LONGLONG(0);
  clear_has_last_visit_time_ms();
}
inline ::google::protobuf::int64 FaviconTrackingSpecifics::last_visit_time_ms() const {
  // @@protoc_insertion_point(field_get:sync_pb.FaviconTrackingSpecifics.last_visit_time_ms)
  return last_visit_time_ms_;
}
inline void FaviconTrackingSpecifics::set_last_visit_time_ms(::google::protobuf::int64 value) {
  set_has_last_visit_time_ms();
  last_visit_time_ms_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.FaviconTrackingSpecifics.last_visit_time_ms)
}

// optional bool is_bookmarked = 4;
inline bool FaviconTrackingSpecifics::has_is_bookmarked() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FaviconTrackingSpecifics::set_has_is_bookmarked() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FaviconTrackingSpecifics::clear_has_is_bookmarked() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FaviconTrackingSpecifics::clear_is_bookmarked() {
  is_bookmarked_ = false;
  clear_has_is_bookmarked();
}
inline bool FaviconTrackingSpecifics::is_bookmarked() const {
  // @@protoc_insertion_point(field_get:sync_pb.FaviconTrackingSpecifics.is_bookmarked)
  return is_bookmarked_;
}
inline void FaviconTrackingSpecifics::set_is_bookmarked(bool value) {
  set_has_is_bookmarked();
  is_bookmarked_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.FaviconTrackingSpecifics.is_bookmarked)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_favicon_5ftracking_5fspecifics_2eproto__INCLUDED
