// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: local_storage_database.proto

#ifndef PROTOBUF_local_5fstorage_5fdatabase_2eproto__INCLUDED
#define PROTOBUF_local_5fstorage_5fdatabase_2eproto__INCLUDED

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
namespace content {
class LocalStorageOriginMetaData;
class LocalStorageOriginMetaDataDefaultTypeInternal;
extern LocalStorageOriginMetaDataDefaultTypeInternal _LocalStorageOriginMetaData_default_instance_;
}  // namespace content

namespace content {

namespace protobuf_local_5fstorage_5fdatabase_2eproto {
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
}  // namespace protobuf_local_5fstorage_5fdatabase_2eproto

// ===================================================================

class LocalStorageOriginMetaData : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:content.LocalStorageOriginMetaData) */ {
 public:
  LocalStorageOriginMetaData();
  virtual ~LocalStorageOriginMetaData();

  LocalStorageOriginMetaData(const LocalStorageOriginMetaData& from);

  inline LocalStorageOriginMetaData& operator=(const LocalStorageOriginMetaData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const LocalStorageOriginMetaData& default_instance();

  static inline const LocalStorageOriginMetaData* internal_default_instance() {
    return reinterpret_cast<const LocalStorageOriginMetaData*>(
               &_LocalStorageOriginMetaData_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(LocalStorageOriginMetaData* other);

  // implements Message ----------------------------------------------

  inline LocalStorageOriginMetaData* New() const PROTOBUF_FINAL { return New(NULL); }

  LocalStorageOriginMetaData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const LocalStorageOriginMetaData& from);
  void MergeFrom(const LocalStorageOriginMetaData& from);
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
  void InternalSwap(LocalStorageOriginMetaData* other);
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

  // required int64 last_modified = 1;
  bool has_last_modified() const;
  void clear_last_modified();
  static const int kLastModifiedFieldNumber = 1;
  ::google::protobuf::int64 last_modified() const;
  void set_last_modified(::google::protobuf::int64 value);

  // required uint64 size_bytes = 2;
  bool has_size_bytes() const;
  void clear_size_bytes();
  static const int kSizeBytesFieldNumber = 2;
  ::google::protobuf::uint64 size_bytes() const;
  void set_size_bytes(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:content.LocalStorageOriginMetaData)
 private:
  void set_has_last_modified();
  void clear_has_last_modified();
  void set_has_size_bytes();
  void clear_has_size_bytes();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int64 last_modified_;
  ::google::protobuf::uint64 size_bytes_;
  friend struct protobuf_local_5fstorage_5fdatabase_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LocalStorageOriginMetaData

// required int64 last_modified = 1;
inline bool LocalStorageOriginMetaData::has_last_modified() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LocalStorageOriginMetaData::set_has_last_modified() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LocalStorageOriginMetaData::clear_has_last_modified() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LocalStorageOriginMetaData::clear_last_modified() {
  last_modified_ = GOOGLE_LONGLONG(0);
  clear_has_last_modified();
}
inline ::google::protobuf::int64 LocalStorageOriginMetaData::last_modified() const {
  // @@protoc_insertion_point(field_get:content.LocalStorageOriginMetaData.last_modified)
  return last_modified_;
}
inline void LocalStorageOriginMetaData::set_last_modified(::google::protobuf::int64 value) {
  set_has_last_modified();
  last_modified_ = value;
  // @@protoc_insertion_point(field_set:content.LocalStorageOriginMetaData.last_modified)
}

// required uint64 size_bytes = 2;
inline bool LocalStorageOriginMetaData::has_size_bytes() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LocalStorageOriginMetaData::set_has_size_bytes() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LocalStorageOriginMetaData::clear_has_size_bytes() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LocalStorageOriginMetaData::clear_size_bytes() {
  size_bytes_ = GOOGLE_ULONGLONG(0);
  clear_has_size_bytes();
}
inline ::google::protobuf::uint64 LocalStorageOriginMetaData::size_bytes() const {
  // @@protoc_insertion_point(field_get:content.LocalStorageOriginMetaData.size_bytes)
  return size_bytes_;
}
inline void LocalStorageOriginMetaData::set_size_bytes(::google::protobuf::uint64 value) {
  set_has_size_bytes();
  size_bytes_ = value;
  // @@protoc_insertion_point(field_set:content.LocalStorageOriginMetaData.size_bytes)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace content

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_local_5fstorage_5fdatabase_2eproto__INCLUDED