// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: local_storage_database.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "local_storage_database.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace content {
class LocalStorageOriginMetaDataDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LocalStorageOriginMetaData> {
} _LocalStorageOriginMetaData_default_instance_;

namespace protobuf_local_5fstorage_5fdatabase_2eproto {

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
  _LocalStorageOriginMetaData_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _LocalStorageOriginMetaData_default_instance_.DefaultConstruct();
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

}  // namespace protobuf_local_5fstorage_5fdatabase_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LocalStorageOriginMetaData::kLastModifiedFieldNumber;
const int LocalStorageOriginMetaData::kSizeBytesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LocalStorageOriginMetaData::LocalStorageOriginMetaData()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_local_5fstorage_5fdatabase_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:content.LocalStorageOriginMetaData)
}
LocalStorageOriginMetaData::LocalStorageOriginMetaData(const LocalStorageOriginMetaData& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&last_modified_, &from.last_modified_,
    static_cast<size_t>(reinterpret_cast<char*>(&size_bytes_) -
    reinterpret_cast<char*>(&last_modified_)) + sizeof(size_bytes_));
  // @@protoc_insertion_point(copy_constructor:content.LocalStorageOriginMetaData)
}

void LocalStorageOriginMetaData::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&last_modified_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&size_bytes_) -
      reinterpret_cast<char*>(&last_modified_)) + sizeof(size_bytes_));
}

LocalStorageOriginMetaData::~LocalStorageOriginMetaData() {
  // @@protoc_insertion_point(destructor:content.LocalStorageOriginMetaData)
  SharedDtor();
}

void LocalStorageOriginMetaData::SharedDtor() {
}

void LocalStorageOriginMetaData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const LocalStorageOriginMetaData& LocalStorageOriginMetaData::default_instance() {
  protobuf_local_5fstorage_5fdatabase_2eproto::InitDefaults();
  return *internal_default_instance();
}

LocalStorageOriginMetaData* LocalStorageOriginMetaData::New(::google::protobuf::Arena* arena) const {
  LocalStorageOriginMetaData* n = new LocalStorageOriginMetaData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LocalStorageOriginMetaData::Clear() {
// @@protoc_insertion_point(message_clear_start:content.LocalStorageOriginMetaData)
  if (_has_bits_[0 / 32] & 3u) {
    ::memset(&last_modified_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&size_bytes_) -
        reinterpret_cast<char*>(&last_modified_)) + sizeof(size_bytes_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool LocalStorageOriginMetaData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:content.LocalStorageOriginMetaData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 last_modified = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          set_has_last_modified();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &last_modified_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required uint64 size_bytes = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          set_has_size_bytes();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &size_bytes_)));
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
  // @@protoc_insertion_point(parse_success:content.LocalStorageOriginMetaData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:content.LocalStorageOriginMetaData)
  return false;
#undef DO_
}

void LocalStorageOriginMetaData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:content.LocalStorageOriginMetaData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int64 last_modified = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->last_modified(), output);
  }

  // required uint64 size_bytes = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->size_bytes(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:content.LocalStorageOriginMetaData)
}

size_t LocalStorageOriginMetaData::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:content.LocalStorageOriginMetaData)
  size_t total_size = 0;

  if (has_last_modified()) {
    // required int64 last_modified = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->last_modified());
  }

  if (has_size_bytes()) {
    // required uint64 size_bytes = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->size_bytes());
  }

  return total_size;
}
size_t LocalStorageOriginMetaData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:content.LocalStorageOriginMetaData)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int64 last_modified = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->last_modified());

    // required uint64 size_bytes = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->size_bytes());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LocalStorageOriginMetaData::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const LocalStorageOriginMetaData*>(&from));
}

void LocalStorageOriginMetaData::MergeFrom(const LocalStorageOriginMetaData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:content.LocalStorageOriginMetaData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      last_modified_ = from.last_modified_;
    }
    if (cached_has_bits & 0x00000002u) {
      size_bytes_ = from.size_bytes_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void LocalStorageOriginMetaData::CopyFrom(const LocalStorageOriginMetaData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:content.LocalStorageOriginMetaData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LocalStorageOriginMetaData::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void LocalStorageOriginMetaData::Swap(LocalStorageOriginMetaData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LocalStorageOriginMetaData::InternalSwap(LocalStorageOriginMetaData* other) {
  std::swap(last_modified_, other->last_modified_);
  std::swap(size_bytes_, other->size_bytes_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string LocalStorageOriginMetaData::GetTypeName() const {
  return "content.LocalStorageOriginMetaData";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LocalStorageOriginMetaData

// required int64 last_modified = 1;
bool LocalStorageOriginMetaData::has_last_modified() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void LocalStorageOriginMetaData::set_has_last_modified() {
  _has_bits_[0] |= 0x00000001u;
}
void LocalStorageOriginMetaData::clear_has_last_modified() {
  _has_bits_[0] &= ~0x00000001u;
}
void LocalStorageOriginMetaData::clear_last_modified() {
  last_modified_ = GOOGLE_LONGLONG(0);
  clear_has_last_modified();
}
::google::protobuf::int64 LocalStorageOriginMetaData::last_modified() const {
  // @@protoc_insertion_point(field_get:content.LocalStorageOriginMetaData.last_modified)
  return last_modified_;
}
void LocalStorageOriginMetaData::set_last_modified(::google::protobuf::int64 value) {
  set_has_last_modified();
  last_modified_ = value;
  // @@protoc_insertion_point(field_set:content.LocalStorageOriginMetaData.last_modified)
}

// required uint64 size_bytes = 2;
bool LocalStorageOriginMetaData::has_size_bytes() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void LocalStorageOriginMetaData::set_has_size_bytes() {
  _has_bits_[0] |= 0x00000002u;
}
void LocalStorageOriginMetaData::clear_has_size_bytes() {
  _has_bits_[0] &= ~0x00000002u;
}
void LocalStorageOriginMetaData::clear_size_bytes() {
  size_bytes_ = GOOGLE_ULONGLONG(0);
  clear_has_size_bytes();
}
::google::protobuf::uint64 LocalStorageOriginMetaData::size_bytes() const {
  // @@protoc_insertion_point(field_get:content.LocalStorageOriginMetaData.size_bytes)
  return size_bytes_;
}
void LocalStorageOriginMetaData::set_size_bytes(::google::protobuf::uint64 value) {
  set_has_size_bytes();
  size_bytes_ = value;
  // @@protoc_insertion_point(field_set:content.LocalStorageOriginMetaData.size_bytes)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace content

// @@protoc_insertion_point(global_scope)