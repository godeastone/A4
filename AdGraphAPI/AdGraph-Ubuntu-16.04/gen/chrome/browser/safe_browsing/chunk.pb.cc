// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chunk.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "chunk.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace safe_browsing {
class ChunkDataDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ChunkData> {
} _ChunkData_default_instance_;

namespace protobuf_chunk_2eproto {

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};


void TableStruct::Shutdown() {
  _ChunkData_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _ChunkData_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}

}  // namespace protobuf_chunk_2eproto

bool ChunkData_ChunkType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const ChunkData_ChunkType ChunkData::ADD;
const ChunkData_ChunkType ChunkData::SUB;
const ChunkData_ChunkType ChunkData::ChunkType_MIN;
const ChunkData_ChunkType ChunkData::ChunkType_MAX;
const int ChunkData::ChunkType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
bool ChunkData_PrefixType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const ChunkData_PrefixType ChunkData::PREFIX_4B;
const ChunkData_PrefixType ChunkData::FULL_32B;
const ChunkData_PrefixType ChunkData::PrefixType_MIN;
const ChunkData_PrefixType ChunkData::PrefixType_MAX;
const int ChunkData::PrefixType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ChunkData::kChunkNumberFieldNumber;
const int ChunkData::kChunkTypeFieldNumber;
const int ChunkData::kPrefixTypeFieldNumber;
const int ChunkData::kHashesFieldNumber;
const int ChunkData::kAddNumbersFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ChunkData::ChunkData()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_chunk_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:safe_browsing.ChunkData)
}
ChunkData::ChunkData(const ChunkData& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      add_numbers_(from.add_numbers_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  hashes_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_hashes()) {
    hashes_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.hashes_);
  }
  ::memcpy(&chunk_number_, &from.chunk_number_,
    static_cast<size_t>(reinterpret_cast<char*>(&prefix_type_) -
    reinterpret_cast<char*>(&chunk_number_)) + sizeof(prefix_type_));
  // @@protoc_insertion_point(copy_constructor:safe_browsing.ChunkData)
}

void ChunkData::SharedCtor() {
  _cached_size_ = 0;
  hashes_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&chunk_number_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&prefix_type_) -
      reinterpret_cast<char*>(&chunk_number_)) + sizeof(prefix_type_));
}

ChunkData::~ChunkData() {
  // @@protoc_insertion_point(destructor:safe_browsing.ChunkData)
  SharedDtor();
}

void ChunkData::SharedDtor() {
  hashes_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ChunkData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ChunkData& ChunkData::default_instance() {
  protobuf_chunk_2eproto::InitDefaults();
  return *internal_default_instance();
}

ChunkData* ChunkData::New(::google::protobuf::Arena* arena) const {
  ChunkData* n = new ChunkData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ChunkData::Clear() {
// @@protoc_insertion_point(message_clear_start:safe_browsing.ChunkData)
  add_numbers_.Clear();
  if (has_hashes()) {
    GOOGLE_DCHECK(!hashes_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*hashes_.UnsafeRawStringPointer())->clear();
  }
  if (_has_bits_[0 / 32] & 14u) {
    ::memset(&chunk_number_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&prefix_type_) -
        reinterpret_cast<char*>(&chunk_number_)) + sizeof(prefix_type_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ChunkData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:safe_browsing.ChunkData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 chunk_number = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          set_has_chunk_number();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &chunk_number_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .safe_browsing.ChunkData.ChunkType chunk_type = 2 [default = ADD];
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::safe_browsing::ChunkData_ChunkType_IsValid(value)) {
            set_chunk_type(static_cast< ::safe_browsing::ChunkData_ChunkType >(value));
          } else {
            unknown_fields_stream.WriteVarint32(16u);
            unknown_fields_stream.WriteVarint32(
                static_cast< ::google::protobuf::uint32>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .safe_browsing.ChunkData.PrefixType prefix_type = 3 [default = PREFIX_4B];
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::safe_browsing::ChunkData_PrefixType_IsValid(value)) {
            set_prefix_type(static_cast< ::safe_browsing::ChunkData_PrefixType >(value));
          } else {
            unknown_fields_stream.WriteVarint32(24u);
            unknown_fields_stream.WriteVarint32(
                static_cast< ::google::protobuf::uint32>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes hashes = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_hashes()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated int32 add_numbers = 5 [packed = true];
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_add_numbers())));
        } else if (static_cast< ::google::protobuf::uint8>(tag) ==
                   static_cast< ::google::protobuf::uint8>(40u)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 42u, input, this->mutable_add_numbers())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:safe_browsing.ChunkData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:safe_browsing.ChunkData)
  return false;
#undef DO_
}

void ChunkData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:safe_browsing.ChunkData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 chunk_number = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->chunk_number(), output);
  }

  // optional .safe_browsing.ChunkData.ChunkType chunk_type = 2 [default = ADD];
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->chunk_type(), output);
  }

  // optional .safe_browsing.ChunkData.PrefixType prefix_type = 3 [default = PREFIX_4B];
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->prefix_type(), output);
  }

  // optional bytes hashes = 4;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->hashes(), output);
  }

  // repeated int32 add_numbers = 5 [packed = true];
  if (this->add_numbers_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(5, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _add_numbers_cached_byte_size_));
  }
  for (int i = 0, n = this->add_numbers_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->add_numbers(i), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:safe_browsing.ChunkData)
}

size_t ChunkData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:safe_browsing.ChunkData)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  // required int32 chunk_number = 1;
  if (has_chunk_number()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->chunk_number());
  }
  // repeated int32 add_numbers = 5 [packed = true];
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int32Size(this->add_numbers_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _add_numbers_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // optional bytes hashes = 4;
  if (has_hashes()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->hashes());
  }

  if (_has_bits_[0 / 32] & 12u) {
    // optional .safe_browsing.ChunkData.ChunkType chunk_type = 2 [default = ADD];
    if (has_chunk_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->chunk_type());
    }

    // optional .safe_browsing.ChunkData.PrefixType prefix_type = 3 [default = PREFIX_4B];
    if (has_prefix_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->prefix_type());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ChunkData::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ChunkData*>(&from));
}

void ChunkData::MergeFrom(const ChunkData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:safe_browsing.ChunkData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  add_numbers_.MergeFrom(from.add_numbers_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_hashes();
      hashes_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.hashes_);
    }
    if (cached_has_bits & 0x00000002u) {
      chunk_number_ = from.chunk_number_;
    }
    if (cached_has_bits & 0x00000004u) {
      chunk_type_ = from.chunk_type_;
    }
    if (cached_has_bits & 0x00000008u) {
      prefix_type_ = from.prefix_type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ChunkData::CopyFrom(const ChunkData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:safe_browsing.ChunkData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChunkData::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;
  return true;
}

void ChunkData::Swap(ChunkData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ChunkData::InternalSwap(ChunkData* other) {
  add_numbers_.InternalSwap(&other->add_numbers_);
  hashes_.Swap(&other->hashes_);
  std::swap(chunk_number_, other->chunk_number_);
  std::swap(chunk_type_, other->chunk_type_);
  std::swap(prefix_type_, other->prefix_type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ChunkData::GetTypeName() const {
  return "safe_browsing.ChunkData";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ChunkData

// required int32 chunk_number = 1;
bool ChunkData::has_chunk_number() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ChunkData::set_has_chunk_number() {
  _has_bits_[0] |= 0x00000002u;
}
void ChunkData::clear_has_chunk_number() {
  _has_bits_[0] &= ~0x00000002u;
}
void ChunkData::clear_chunk_number() {
  chunk_number_ = 0;
  clear_has_chunk_number();
}
::google::protobuf::int32 ChunkData::chunk_number() const {
  // @@protoc_insertion_point(field_get:safe_browsing.ChunkData.chunk_number)
  return chunk_number_;
}
void ChunkData::set_chunk_number(::google::protobuf::int32 value) {
  set_has_chunk_number();
  chunk_number_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.ChunkData.chunk_number)
}

// optional .safe_browsing.ChunkData.ChunkType chunk_type = 2 [default = ADD];
bool ChunkData::has_chunk_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ChunkData::set_has_chunk_type() {
  _has_bits_[0] |= 0x00000004u;
}
void ChunkData::clear_has_chunk_type() {
  _has_bits_[0] &= ~0x00000004u;
}
void ChunkData::clear_chunk_type() {
  chunk_type_ = 0;
  clear_has_chunk_type();
}
::safe_browsing::ChunkData_ChunkType ChunkData::chunk_type() const {
  // @@protoc_insertion_point(field_get:safe_browsing.ChunkData.chunk_type)
  return static_cast< ::safe_browsing::ChunkData_ChunkType >(chunk_type_);
}
void ChunkData::set_chunk_type(::safe_browsing::ChunkData_ChunkType value) {
  assert(::safe_browsing::ChunkData_ChunkType_IsValid(value));
  set_has_chunk_type();
  chunk_type_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.ChunkData.chunk_type)
}

// optional .safe_browsing.ChunkData.PrefixType prefix_type = 3 [default = PREFIX_4B];
bool ChunkData::has_prefix_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void ChunkData::set_has_prefix_type() {
  _has_bits_[0] |= 0x00000008u;
}
void ChunkData::clear_has_prefix_type() {
  _has_bits_[0] &= ~0x00000008u;
}
void ChunkData::clear_prefix_type() {
  prefix_type_ = 0;
  clear_has_prefix_type();
}
::safe_browsing::ChunkData_PrefixType ChunkData::prefix_type() const {
  // @@protoc_insertion_point(field_get:safe_browsing.ChunkData.prefix_type)
  return static_cast< ::safe_browsing::ChunkData_PrefixType >(prefix_type_);
}
void ChunkData::set_prefix_type(::safe_browsing::ChunkData_PrefixType value) {
  assert(::safe_browsing::ChunkData_PrefixType_IsValid(value));
  set_has_prefix_type();
  prefix_type_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.ChunkData.prefix_type)
}

// optional bytes hashes = 4;
bool ChunkData::has_hashes() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ChunkData::set_has_hashes() {
  _has_bits_[0] |= 0x00000001u;
}
void ChunkData::clear_has_hashes() {
  _has_bits_[0] &= ~0x00000001u;
}
void ChunkData::clear_hashes() {
  hashes_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_hashes();
}
const ::std::string& ChunkData::hashes() const {
  // @@protoc_insertion_point(field_get:safe_browsing.ChunkData.hashes)
  return hashes_.GetNoArena();
}
void ChunkData::set_hashes(const ::std::string& value) {
  set_has_hashes();
  hashes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:safe_browsing.ChunkData.hashes)
}
#if LANG_CXX11
void ChunkData::set_hashes(::std::string&& value) {
  set_has_hashes();
  hashes_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:safe_browsing.ChunkData.hashes)
}
#endif
void ChunkData::set_hashes(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_hashes();
  hashes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:safe_browsing.ChunkData.hashes)
}
void ChunkData::set_hashes(const void* value, size_t size) {
  set_has_hashes();
  hashes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:safe_browsing.ChunkData.hashes)
}
::std::string* ChunkData::mutable_hashes() {
  set_has_hashes();
  // @@protoc_insertion_point(field_mutable:safe_browsing.ChunkData.hashes)
  return hashes_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ChunkData::release_hashes() {
  // @@protoc_insertion_point(field_release:safe_browsing.ChunkData.hashes)
  clear_has_hashes();
  return hashes_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ChunkData::set_allocated_hashes(::std::string* hashes) {
  if (hashes != NULL) {
    set_has_hashes();
  } else {
    clear_has_hashes();
  }
  hashes_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hashes);
  // @@protoc_insertion_point(field_set_allocated:safe_browsing.ChunkData.hashes)
}

// repeated int32 add_numbers = 5 [packed = true];
int ChunkData::add_numbers_size() const {
  return add_numbers_.size();
}
void ChunkData::clear_add_numbers() {
  add_numbers_.Clear();
}
::google::protobuf::int32 ChunkData::add_numbers(int index) const {
  // @@protoc_insertion_point(field_get:safe_browsing.ChunkData.add_numbers)
  return add_numbers_.Get(index);
}
void ChunkData::set_add_numbers(int index, ::google::protobuf::int32 value) {
  add_numbers_.Set(index, value);
  // @@protoc_insertion_point(field_set:safe_browsing.ChunkData.add_numbers)
}
void ChunkData::add_add_numbers(::google::protobuf::int32 value) {
  add_numbers_.Add(value);
  // @@protoc_insertion_point(field_add:safe_browsing.ChunkData.add_numbers)
}
const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ChunkData::add_numbers() const {
  // @@protoc_insertion_point(field_list:safe_browsing.ChunkData.add_numbers)
  return add_numbers_;
}
::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ChunkData::mutable_add_numbers() {
  // @@protoc_insertion_point(field_mutable_list:safe_browsing.ChunkData.add_numbers)
  return &add_numbers_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace safe_browsing

// @@protoc_insertion_point(global_scope)
