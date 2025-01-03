// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chunk.proto

#ifndef PROTOBUF_chunk_2eproto__INCLUDED
#define PROTOBUF_chunk_2eproto__INCLUDED

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
namespace safe_browsing {
class ChunkData;
class ChunkDataDefaultTypeInternal;
extern ChunkDataDefaultTypeInternal _ChunkData_default_instance_;
}  // namespace safe_browsing

namespace safe_browsing {

namespace protobuf_chunk_2eproto {
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
}  // namespace protobuf_chunk_2eproto

enum ChunkData_ChunkType {
  ChunkData_ChunkType_ADD = 0,
  ChunkData_ChunkType_SUB = 1
};
bool ChunkData_ChunkType_IsValid(int value);
const ChunkData_ChunkType ChunkData_ChunkType_ChunkType_MIN = ChunkData_ChunkType_ADD;
const ChunkData_ChunkType ChunkData_ChunkType_ChunkType_MAX = ChunkData_ChunkType_SUB;
const int ChunkData_ChunkType_ChunkType_ARRAYSIZE = ChunkData_ChunkType_ChunkType_MAX + 1;

enum ChunkData_PrefixType {
  ChunkData_PrefixType_PREFIX_4B = 0,
  ChunkData_PrefixType_FULL_32B = 1
};
bool ChunkData_PrefixType_IsValid(int value);
const ChunkData_PrefixType ChunkData_PrefixType_PrefixType_MIN = ChunkData_PrefixType_PREFIX_4B;
const ChunkData_PrefixType ChunkData_PrefixType_PrefixType_MAX = ChunkData_PrefixType_FULL_32B;
const int ChunkData_PrefixType_PrefixType_ARRAYSIZE = ChunkData_PrefixType_PrefixType_MAX + 1;

// ===================================================================

class ChunkData : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:safe_browsing.ChunkData) */ {
 public:
  ChunkData();
  virtual ~ChunkData();

  ChunkData(const ChunkData& from);

  inline ChunkData& operator=(const ChunkData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ChunkData& default_instance();

  static inline const ChunkData* internal_default_instance() {
    return reinterpret_cast<const ChunkData*>(
               &_ChunkData_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ChunkData* other);

  // implements Message ----------------------------------------------

  inline ChunkData* New() const PROTOBUF_FINAL { return New(NULL); }

  ChunkData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ChunkData& from);
  void MergeFrom(const ChunkData& from);
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
  void InternalSwap(ChunkData* other);
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

  typedef ChunkData_ChunkType ChunkType;
  static const ChunkType ADD =
    ChunkData_ChunkType_ADD;
  static const ChunkType SUB =
    ChunkData_ChunkType_SUB;
  static inline bool ChunkType_IsValid(int value) {
    return ChunkData_ChunkType_IsValid(value);
  }
  static const ChunkType ChunkType_MIN =
    ChunkData_ChunkType_ChunkType_MIN;
  static const ChunkType ChunkType_MAX =
    ChunkData_ChunkType_ChunkType_MAX;
  static const int ChunkType_ARRAYSIZE =
    ChunkData_ChunkType_ChunkType_ARRAYSIZE;

  typedef ChunkData_PrefixType PrefixType;
  static const PrefixType PREFIX_4B =
    ChunkData_PrefixType_PREFIX_4B;
  static const PrefixType FULL_32B =
    ChunkData_PrefixType_FULL_32B;
  static inline bool PrefixType_IsValid(int value) {
    return ChunkData_PrefixType_IsValid(value);
  }
  static const PrefixType PrefixType_MIN =
    ChunkData_PrefixType_PrefixType_MIN;
  static const PrefixType PrefixType_MAX =
    ChunkData_PrefixType_PrefixType_MAX;
  static const int PrefixType_ARRAYSIZE =
    ChunkData_PrefixType_PrefixType_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // repeated int32 add_numbers = 5 [packed = true];
  int add_numbers_size() const;
  void clear_add_numbers();
  static const int kAddNumbersFieldNumber = 5;
  ::google::protobuf::int32 add_numbers(int index) const;
  void set_add_numbers(int index, ::google::protobuf::int32 value);
  void add_add_numbers(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      add_numbers() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_add_numbers();

  // optional bytes hashes = 4;
  bool has_hashes() const;
  void clear_hashes();
  static const int kHashesFieldNumber = 4;
  const ::std::string& hashes() const;
  void set_hashes(const ::std::string& value);
  #if LANG_CXX11
  void set_hashes(::std::string&& value);
  #endif
  void set_hashes(const char* value);
  void set_hashes(const void* value, size_t size);
  ::std::string* mutable_hashes();
  ::std::string* release_hashes();
  void set_allocated_hashes(::std::string* hashes);

  // required int32 chunk_number = 1;
  bool has_chunk_number() const;
  void clear_chunk_number();
  static const int kChunkNumberFieldNumber = 1;
  ::google::protobuf::int32 chunk_number() const;
  void set_chunk_number(::google::protobuf::int32 value);

  // optional .safe_browsing.ChunkData.ChunkType chunk_type = 2 [default = ADD];
  bool has_chunk_type() const;
  void clear_chunk_type();
  static const int kChunkTypeFieldNumber = 2;
  ::safe_browsing::ChunkData_ChunkType chunk_type() const;
  void set_chunk_type(::safe_browsing::ChunkData_ChunkType value);

  // optional .safe_browsing.ChunkData.PrefixType prefix_type = 3 [default = PREFIX_4B];
  bool has_prefix_type() const;
  void clear_prefix_type();
  static const int kPrefixTypeFieldNumber = 3;
  ::safe_browsing::ChunkData_PrefixType prefix_type() const;
  void set_prefix_type(::safe_browsing::ChunkData_PrefixType value);

  // @@protoc_insertion_point(class_scope:safe_browsing.ChunkData)
 private:
  void set_has_chunk_number();
  void clear_has_chunk_number();
  void set_has_chunk_type();
  void clear_has_chunk_type();
  void set_has_prefix_type();
  void clear_has_prefix_type();
  void set_has_hashes();
  void clear_has_hashes();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > add_numbers_;
  mutable int _add_numbers_cached_byte_size_;
  ::google::protobuf::internal::ArenaStringPtr hashes_;
  ::google::protobuf::int32 chunk_number_;
  int chunk_type_;
  int prefix_type_;
  friend struct protobuf_chunk_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ChunkData

// required int32 chunk_number = 1;
inline bool ChunkData::has_chunk_number() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ChunkData::set_has_chunk_number() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ChunkData::clear_has_chunk_number() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ChunkData::clear_chunk_number() {
  chunk_number_ = 0;
  clear_has_chunk_number();
}
inline ::google::protobuf::int32 ChunkData::chunk_number() const {
  // @@protoc_insertion_point(field_get:safe_browsing.ChunkData.chunk_number)
  return chunk_number_;
}
inline void ChunkData::set_chunk_number(::google::protobuf::int32 value) {
  set_has_chunk_number();
  chunk_number_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.ChunkData.chunk_number)
}

// optional .safe_browsing.ChunkData.ChunkType chunk_type = 2 [default = ADD];
inline bool ChunkData::has_chunk_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ChunkData::set_has_chunk_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ChunkData::clear_has_chunk_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ChunkData::clear_chunk_type() {
  chunk_type_ = 0;
  clear_has_chunk_type();
}
inline ::safe_browsing::ChunkData_ChunkType ChunkData::chunk_type() const {
  // @@protoc_insertion_point(field_get:safe_browsing.ChunkData.chunk_type)
  return static_cast< ::safe_browsing::ChunkData_ChunkType >(chunk_type_);
}
inline void ChunkData::set_chunk_type(::safe_browsing::ChunkData_ChunkType value) {
  assert(::safe_browsing::ChunkData_ChunkType_IsValid(value));
  set_has_chunk_type();
  chunk_type_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.ChunkData.chunk_type)
}

// optional .safe_browsing.ChunkData.PrefixType prefix_type = 3 [default = PREFIX_4B];
inline bool ChunkData::has_prefix_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ChunkData::set_has_prefix_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ChunkData::clear_has_prefix_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ChunkData::clear_prefix_type() {
  prefix_type_ = 0;
  clear_has_prefix_type();
}
inline ::safe_browsing::ChunkData_PrefixType ChunkData::prefix_type() const {
  // @@protoc_insertion_point(field_get:safe_browsing.ChunkData.prefix_type)
  return static_cast< ::safe_browsing::ChunkData_PrefixType >(prefix_type_);
}
inline void ChunkData::set_prefix_type(::safe_browsing::ChunkData_PrefixType value) {
  assert(::safe_browsing::ChunkData_PrefixType_IsValid(value));
  set_has_prefix_type();
  prefix_type_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.ChunkData.prefix_type)
}

// optional bytes hashes = 4;
inline bool ChunkData::has_hashes() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChunkData::set_has_hashes() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChunkData::clear_has_hashes() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChunkData::clear_hashes() {
  hashes_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_hashes();
}
inline const ::std::string& ChunkData::hashes() const {
  // @@protoc_insertion_point(field_get:safe_browsing.ChunkData.hashes)
  return hashes_.GetNoArena();
}
inline void ChunkData::set_hashes(const ::std::string& value) {
  set_has_hashes();
  hashes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:safe_browsing.ChunkData.hashes)
}
#if LANG_CXX11
inline void ChunkData::set_hashes(::std::string&& value) {
  set_has_hashes();
  hashes_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:safe_browsing.ChunkData.hashes)
}
#endif
inline void ChunkData::set_hashes(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_hashes();
  hashes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:safe_browsing.ChunkData.hashes)
}
inline void ChunkData::set_hashes(const void* value, size_t size) {
  set_has_hashes();
  hashes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:safe_browsing.ChunkData.hashes)
}
inline ::std::string* ChunkData::mutable_hashes() {
  set_has_hashes();
  // @@protoc_insertion_point(field_mutable:safe_browsing.ChunkData.hashes)
  return hashes_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ChunkData::release_hashes() {
  // @@protoc_insertion_point(field_release:safe_browsing.ChunkData.hashes)
  clear_has_hashes();
  return hashes_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ChunkData::set_allocated_hashes(::std::string* hashes) {
  if (hashes != NULL) {
    set_has_hashes();
  } else {
    clear_has_hashes();
  }
  hashes_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hashes);
  // @@protoc_insertion_point(field_set_allocated:safe_browsing.ChunkData.hashes)
}

// repeated int32 add_numbers = 5 [packed = true];
inline int ChunkData::add_numbers_size() const {
  return add_numbers_.size();
}
inline void ChunkData::clear_add_numbers() {
  add_numbers_.Clear();
}
inline ::google::protobuf::int32 ChunkData::add_numbers(int index) const {
  // @@protoc_insertion_point(field_get:safe_browsing.ChunkData.add_numbers)
  return add_numbers_.Get(index);
}
inline void ChunkData::set_add_numbers(int index, ::google::protobuf::int32 value) {
  add_numbers_.Set(index, value);
  // @@protoc_insertion_point(field_set:safe_browsing.ChunkData.add_numbers)
}
inline void ChunkData::add_add_numbers(::google::protobuf::int32 value) {
  add_numbers_.Add(value);
  // @@protoc_insertion_point(field_add:safe_browsing.ChunkData.add_numbers)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ChunkData::add_numbers() const {
  // @@protoc_insertion_point(field_list:safe_browsing.ChunkData.add_numbers)
  return add_numbers_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ChunkData::mutable_add_numbers() {
  // @@protoc_insertion_point(field_mutable_list:safe_browsing.ChunkData.add_numbers)
  return &add_numbers_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace safe_browsing

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::safe_browsing::ChunkData_ChunkType> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::safe_browsing::ChunkData_PrefixType> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_chunk_2eproto__INCLUDED
