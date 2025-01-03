// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model_type_store_schema_descriptor.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "model_type_store_schema_descriptor.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {
class ModelTypeStoreSchemaDescriptorDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ModelTypeStoreSchemaDescriptor> {
} _ModelTypeStoreSchemaDescriptor_default_instance_;

namespace protobuf_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto {

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
  _ModelTypeStoreSchemaDescriptor_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _ModelTypeStoreSchemaDescriptor_default_instance_.DefaultConstruct();
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

}  // namespace protobuf_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ModelTypeStoreSchemaDescriptor::kVersionNumberFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ModelTypeStoreSchemaDescriptor::ModelTypeStoreSchemaDescriptor()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.ModelTypeStoreSchemaDescriptor)
}
ModelTypeStoreSchemaDescriptor::ModelTypeStoreSchemaDescriptor(const ModelTypeStoreSchemaDescriptor& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  version_number_ = from.version_number_;
  // @@protoc_insertion_point(copy_constructor:sync_pb.ModelTypeStoreSchemaDescriptor)
}

void ModelTypeStoreSchemaDescriptor::SharedCtor() {
  _cached_size_ = 0;
  version_number_ = GOOGLE_LONGLONG(0);
}

ModelTypeStoreSchemaDescriptor::~ModelTypeStoreSchemaDescriptor() {
  // @@protoc_insertion_point(destructor:sync_pb.ModelTypeStoreSchemaDescriptor)
  SharedDtor();
}

void ModelTypeStoreSchemaDescriptor::SharedDtor() {
}

void ModelTypeStoreSchemaDescriptor::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ModelTypeStoreSchemaDescriptor& ModelTypeStoreSchemaDescriptor::default_instance() {
  protobuf_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto::InitDefaults();
  return *internal_default_instance();
}

ModelTypeStoreSchemaDescriptor* ModelTypeStoreSchemaDescriptor::New(::google::protobuf::Arena* arena) const {
  ModelTypeStoreSchemaDescriptor* n = new ModelTypeStoreSchemaDescriptor;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ModelTypeStoreSchemaDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.ModelTypeStoreSchemaDescriptor)
  version_number_ = GOOGLE_LONGLONG(0);
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ModelTypeStoreSchemaDescriptor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.ModelTypeStoreSchemaDescriptor)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 version_number = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          set_has_version_number();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &version_number_)));
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
  // @@protoc_insertion_point(parse_success:sync_pb.ModelTypeStoreSchemaDescriptor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.ModelTypeStoreSchemaDescriptor)
  return false;
#undef DO_
}

void ModelTypeStoreSchemaDescriptor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.ModelTypeStoreSchemaDescriptor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int64 version_number = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->version_number(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.ModelTypeStoreSchemaDescriptor)
}

size_t ModelTypeStoreSchemaDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.ModelTypeStoreSchemaDescriptor)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  // optional int64 version_number = 1;
  if (has_version_number()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->version_number());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ModelTypeStoreSchemaDescriptor::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ModelTypeStoreSchemaDescriptor*>(&from));
}

void ModelTypeStoreSchemaDescriptor::MergeFrom(const ModelTypeStoreSchemaDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.ModelTypeStoreSchemaDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_version_number()) {
    set_version_number(from.version_number());
  }
}

void ModelTypeStoreSchemaDescriptor::CopyFrom(const ModelTypeStoreSchemaDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.ModelTypeStoreSchemaDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ModelTypeStoreSchemaDescriptor::IsInitialized() const {
  return true;
}

void ModelTypeStoreSchemaDescriptor::Swap(ModelTypeStoreSchemaDescriptor* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ModelTypeStoreSchemaDescriptor::InternalSwap(ModelTypeStoreSchemaDescriptor* other) {
  std::swap(version_number_, other->version_number_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ModelTypeStoreSchemaDescriptor::GetTypeName() const {
  return "sync_pb.ModelTypeStoreSchemaDescriptor";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ModelTypeStoreSchemaDescriptor

// optional int64 version_number = 1;
bool ModelTypeStoreSchemaDescriptor::has_version_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ModelTypeStoreSchemaDescriptor::set_has_version_number() {
  _has_bits_[0] |= 0x00000001u;
}
void ModelTypeStoreSchemaDescriptor::clear_has_version_number() {
  _has_bits_[0] &= ~0x00000001u;
}
void ModelTypeStoreSchemaDescriptor::clear_version_number() {
  version_number_ = GOOGLE_LONGLONG(0);
  clear_has_version_number();
}
::google::protobuf::int64 ModelTypeStoreSchemaDescriptor::version_number() const {
  // @@protoc_insertion_point(field_get:sync_pb.ModelTypeStoreSchemaDescriptor.version_number)
  return version_number_;
}
void ModelTypeStoreSchemaDescriptor::set_version_number(::google::protobuf::int64 value) {
  set_has_version_number();
  version_number_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ModelTypeStoreSchemaDescriptor.version_number)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
