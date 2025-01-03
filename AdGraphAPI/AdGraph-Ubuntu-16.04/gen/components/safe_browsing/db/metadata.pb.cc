// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metadata.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "metadata.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace safe_browsing {
class MalwarePatternTypeDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<MalwarePatternType> {
} _MalwarePatternType_default_instance_;
class SocialEngineeringPatternTypeDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<SocialEngineeringPatternType> {
} _SocialEngineeringPatternType_default_instance_;

namespace protobuf_metadata_2eproto {

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
  { NULL, NULL, 0, -1, -1, false },
};


void TableStruct::Shutdown() {
  _MalwarePatternType_default_instance_.Shutdown();
  _SocialEngineeringPatternType_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _MalwarePatternType_default_instance_.DefaultConstruct();
  _SocialEngineeringPatternType_default_instance_.DefaultConstruct();
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

}  // namespace protobuf_metadata_2eproto

bool MalwarePatternType_PATTERN_TYPE_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const MalwarePatternType_PATTERN_TYPE MalwarePatternType::TYPE_UNSPECIFIED;
const MalwarePatternType_PATTERN_TYPE MalwarePatternType::LANDING;
const MalwarePatternType_PATTERN_TYPE MalwarePatternType::DISTRIBUTION;
const MalwarePatternType_PATTERN_TYPE MalwarePatternType::PATTERN_TYPE_MIN;
const MalwarePatternType_PATTERN_TYPE MalwarePatternType::PATTERN_TYPE_MAX;
const int MalwarePatternType::PATTERN_TYPE_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
bool SocialEngineeringPatternType_PATTERN_TYPE_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SocialEngineeringPatternType_PATTERN_TYPE SocialEngineeringPatternType::TYPE_UNSPECIFIED;
const SocialEngineeringPatternType_PATTERN_TYPE SocialEngineeringPatternType::SOCIAL_ENGINEERING_ADS;
const SocialEngineeringPatternType_PATTERN_TYPE SocialEngineeringPatternType::SOCIAL_ENGINEERING_LANDING;
const SocialEngineeringPatternType_PATTERN_TYPE SocialEngineeringPatternType::PHISHING;
const SocialEngineeringPatternType_PATTERN_TYPE SocialEngineeringPatternType::PATTERN_TYPE_MIN;
const SocialEngineeringPatternType_PATTERN_TYPE SocialEngineeringPatternType::PATTERN_TYPE_MAX;
const int SocialEngineeringPatternType::PATTERN_TYPE_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MalwarePatternType::kPatternTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MalwarePatternType::MalwarePatternType()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_metadata_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:safe_browsing.MalwarePatternType)
}
MalwarePatternType::MalwarePatternType(const MalwarePatternType& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  pattern_type_ = from.pattern_type_;
  // @@protoc_insertion_point(copy_constructor:safe_browsing.MalwarePatternType)
}

void MalwarePatternType::SharedCtor() {
  _cached_size_ = 0;
  pattern_type_ = 0;
}

MalwarePatternType::~MalwarePatternType() {
  // @@protoc_insertion_point(destructor:safe_browsing.MalwarePatternType)
  SharedDtor();
}

void MalwarePatternType::SharedDtor() {
}

void MalwarePatternType::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MalwarePatternType& MalwarePatternType::default_instance() {
  protobuf_metadata_2eproto::InitDefaults();
  return *internal_default_instance();
}

MalwarePatternType* MalwarePatternType::New(::google::protobuf::Arena* arena) const {
  MalwarePatternType* n = new MalwarePatternType;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MalwarePatternType::Clear() {
// @@protoc_insertion_point(message_clear_start:safe_browsing.MalwarePatternType)
  pattern_type_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool MalwarePatternType::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:safe_browsing.MalwarePatternType)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .safe_browsing.MalwarePatternType.PATTERN_TYPE pattern_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::safe_browsing::MalwarePatternType_PATTERN_TYPE_IsValid(value)) {
            set_pattern_type(static_cast< ::safe_browsing::MalwarePatternType_PATTERN_TYPE >(value));
          } else {
            unknown_fields_stream.WriteVarint32(8u);
            unknown_fields_stream.WriteVarint32(
                static_cast< ::google::protobuf::uint32>(value));
          }
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
  // @@protoc_insertion_point(parse_success:safe_browsing.MalwarePatternType)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:safe_browsing.MalwarePatternType)
  return false;
#undef DO_
}

void MalwarePatternType::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:safe_browsing.MalwarePatternType)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .safe_browsing.MalwarePatternType.PATTERN_TYPE pattern_type = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->pattern_type(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:safe_browsing.MalwarePatternType)
}

size_t MalwarePatternType::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:safe_browsing.MalwarePatternType)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  // required .safe_browsing.MalwarePatternType.PATTERN_TYPE pattern_type = 1;
  if (has_pattern_type()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->pattern_type());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MalwarePatternType::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MalwarePatternType*>(&from));
}

void MalwarePatternType::MergeFrom(const MalwarePatternType& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:safe_browsing.MalwarePatternType)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_pattern_type()) {
    set_pattern_type(from.pattern_type());
  }
}

void MalwarePatternType::CopyFrom(const MalwarePatternType& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:safe_browsing.MalwarePatternType)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MalwarePatternType::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void MalwarePatternType::Swap(MalwarePatternType* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MalwarePatternType::InternalSwap(MalwarePatternType* other) {
  std::swap(pattern_type_, other->pattern_type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string MalwarePatternType::GetTypeName() const {
  return "safe_browsing.MalwarePatternType";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MalwarePatternType

// required .safe_browsing.MalwarePatternType.PATTERN_TYPE pattern_type = 1;
bool MalwarePatternType::has_pattern_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MalwarePatternType::set_has_pattern_type() {
  _has_bits_[0] |= 0x00000001u;
}
void MalwarePatternType::clear_has_pattern_type() {
  _has_bits_[0] &= ~0x00000001u;
}
void MalwarePatternType::clear_pattern_type() {
  pattern_type_ = 0;
  clear_has_pattern_type();
}
::safe_browsing::MalwarePatternType_PATTERN_TYPE MalwarePatternType::pattern_type() const {
  // @@protoc_insertion_point(field_get:safe_browsing.MalwarePatternType.pattern_type)
  return static_cast< ::safe_browsing::MalwarePatternType_PATTERN_TYPE >(pattern_type_);
}
void MalwarePatternType::set_pattern_type(::safe_browsing::MalwarePatternType_PATTERN_TYPE value) {
  assert(::safe_browsing::MalwarePatternType_PATTERN_TYPE_IsValid(value));
  set_has_pattern_type();
  pattern_type_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.MalwarePatternType.pattern_type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SocialEngineeringPatternType::kPatternTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SocialEngineeringPatternType::SocialEngineeringPatternType()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_metadata_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:safe_browsing.SocialEngineeringPatternType)
}
SocialEngineeringPatternType::SocialEngineeringPatternType(const SocialEngineeringPatternType& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  pattern_type_ = from.pattern_type_;
  // @@protoc_insertion_point(copy_constructor:safe_browsing.SocialEngineeringPatternType)
}

void SocialEngineeringPatternType::SharedCtor() {
  _cached_size_ = 0;
  pattern_type_ = 0;
}

SocialEngineeringPatternType::~SocialEngineeringPatternType() {
  // @@protoc_insertion_point(destructor:safe_browsing.SocialEngineeringPatternType)
  SharedDtor();
}

void SocialEngineeringPatternType::SharedDtor() {
}

void SocialEngineeringPatternType::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SocialEngineeringPatternType& SocialEngineeringPatternType::default_instance() {
  protobuf_metadata_2eproto::InitDefaults();
  return *internal_default_instance();
}

SocialEngineeringPatternType* SocialEngineeringPatternType::New(::google::protobuf::Arena* arena) const {
  SocialEngineeringPatternType* n = new SocialEngineeringPatternType;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SocialEngineeringPatternType::Clear() {
// @@protoc_insertion_point(message_clear_start:safe_browsing.SocialEngineeringPatternType)
  pattern_type_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SocialEngineeringPatternType::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:safe_browsing.SocialEngineeringPatternType)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .safe_browsing.SocialEngineeringPatternType.PATTERN_TYPE pattern_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::safe_browsing::SocialEngineeringPatternType_PATTERN_TYPE_IsValid(value)) {
            set_pattern_type(static_cast< ::safe_browsing::SocialEngineeringPatternType_PATTERN_TYPE >(value));
          } else {
            unknown_fields_stream.WriteVarint32(8u);
            unknown_fields_stream.WriteVarint32(
                static_cast< ::google::protobuf::uint32>(value));
          }
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
  // @@protoc_insertion_point(parse_success:safe_browsing.SocialEngineeringPatternType)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:safe_browsing.SocialEngineeringPatternType)
  return false;
#undef DO_
}

void SocialEngineeringPatternType::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:safe_browsing.SocialEngineeringPatternType)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .safe_browsing.SocialEngineeringPatternType.PATTERN_TYPE pattern_type = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->pattern_type(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:safe_browsing.SocialEngineeringPatternType)
}

size_t SocialEngineeringPatternType::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:safe_browsing.SocialEngineeringPatternType)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  // optional .safe_browsing.SocialEngineeringPatternType.PATTERN_TYPE pattern_type = 1;
  if (has_pattern_type()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->pattern_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SocialEngineeringPatternType::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SocialEngineeringPatternType*>(&from));
}

void SocialEngineeringPatternType::MergeFrom(const SocialEngineeringPatternType& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:safe_browsing.SocialEngineeringPatternType)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_pattern_type()) {
    set_pattern_type(from.pattern_type());
  }
}

void SocialEngineeringPatternType::CopyFrom(const SocialEngineeringPatternType& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:safe_browsing.SocialEngineeringPatternType)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SocialEngineeringPatternType::IsInitialized() const {
  return true;
}

void SocialEngineeringPatternType::Swap(SocialEngineeringPatternType* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SocialEngineeringPatternType::InternalSwap(SocialEngineeringPatternType* other) {
  std::swap(pattern_type_, other->pattern_type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string SocialEngineeringPatternType::GetTypeName() const {
  return "safe_browsing.SocialEngineeringPatternType";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SocialEngineeringPatternType

// optional .safe_browsing.SocialEngineeringPatternType.PATTERN_TYPE pattern_type = 1;
bool SocialEngineeringPatternType::has_pattern_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void SocialEngineeringPatternType::set_has_pattern_type() {
  _has_bits_[0] |= 0x00000001u;
}
void SocialEngineeringPatternType::clear_has_pattern_type() {
  _has_bits_[0] &= ~0x00000001u;
}
void SocialEngineeringPatternType::clear_pattern_type() {
  pattern_type_ = 0;
  clear_has_pattern_type();
}
::safe_browsing::SocialEngineeringPatternType_PATTERN_TYPE SocialEngineeringPatternType::pattern_type() const {
  // @@protoc_insertion_point(field_get:safe_browsing.SocialEngineeringPatternType.pattern_type)
  return static_cast< ::safe_browsing::SocialEngineeringPatternType_PATTERN_TYPE >(pattern_type_);
}
void SocialEngineeringPatternType::set_pattern_type(::safe_browsing::SocialEngineeringPatternType_PATTERN_TYPE value) {
  assert(::safe_browsing::SocialEngineeringPatternType_PATTERN_TYPE_IsValid(value));
  set_has_pattern_type();
  pattern_type_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.SocialEngineeringPatternType.pattern_type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace safe_browsing

// @@protoc_insertion_point(global_scope)