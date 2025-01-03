// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: experiment_status.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "experiment_status.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {
class ExperimentStatusRequestDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ExperimentStatusRequest> {
} _ExperimentStatusRequest_default_instance_;
class ExperimentStatusResponseDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ExperimentStatusResponse> {
} _ExperimentStatusResponse_default_instance_;

namespace protobuf_experiment_5fstatus_2eproto {

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
  _ExperimentStatusRequest_default_instance_.Shutdown();
  _ExperimentStatusResponse_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::sync_pb::protobuf_experiments_5fspecifics_2eproto::InitDefaults();
  _ExperimentStatusRequest_default_instance_.DefaultConstruct();
  _ExperimentStatusResponse_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  ::sync_pb::protobuf_experiments_5fspecifics_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}

}  // namespace protobuf_experiment_5fstatus_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ExperimentStatusRequest::kExperimentNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ExperimentStatusRequest::ExperimentStatusRequest()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_experiment_5fstatus_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.ExperimentStatusRequest)
}
ExperimentStatusRequest::ExperimentStatusRequest(const ExperimentStatusRequest& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      experiment_name_(from.experiment_name_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:sync_pb.ExperimentStatusRequest)
}

void ExperimentStatusRequest::SharedCtor() {
  _cached_size_ = 0;
}

ExperimentStatusRequest::~ExperimentStatusRequest() {
  // @@protoc_insertion_point(destructor:sync_pb.ExperimentStatusRequest)
  SharedDtor();
}

void ExperimentStatusRequest::SharedDtor() {
}

void ExperimentStatusRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ExperimentStatusRequest& ExperimentStatusRequest::default_instance() {
  protobuf_experiment_5fstatus_2eproto::InitDefaults();
  return *internal_default_instance();
}

ExperimentStatusRequest* ExperimentStatusRequest::New(::google::protobuf::Arena* arena) const {
  ExperimentStatusRequest* n = new ExperimentStatusRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ExperimentStatusRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.ExperimentStatusRequest)
  experiment_name_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ExperimentStatusRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.ExperimentStatusRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string experiment_name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_experiment_name()));
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
  // @@protoc_insertion_point(parse_success:sync_pb.ExperimentStatusRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.ExperimentStatusRequest)
  return false;
#undef DO_
}

void ExperimentStatusRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.ExperimentStatusRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string experiment_name = 1;
  for (int i = 0, n = this->experiment_name_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->experiment_name(i), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.ExperimentStatusRequest)
}

size_t ExperimentStatusRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.ExperimentStatusRequest)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  // repeated string experiment_name = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->experiment_name_size());
  for (int i = 0, n = this->experiment_name_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->experiment_name(i));
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ExperimentStatusRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ExperimentStatusRequest*>(&from));
}

void ExperimentStatusRequest::MergeFrom(const ExperimentStatusRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.ExperimentStatusRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  experiment_name_.MergeFrom(from.experiment_name_);
}

void ExperimentStatusRequest::CopyFrom(const ExperimentStatusRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.ExperimentStatusRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExperimentStatusRequest::IsInitialized() const {
  return true;
}

void ExperimentStatusRequest::Swap(ExperimentStatusRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ExperimentStatusRequest::InternalSwap(ExperimentStatusRequest* other) {
  experiment_name_.InternalSwap(&other->experiment_name_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ExperimentStatusRequest::GetTypeName() const {
  return "sync_pb.ExperimentStatusRequest";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ExperimentStatusRequest

// repeated string experiment_name = 1;
int ExperimentStatusRequest::experiment_name_size() const {
  return experiment_name_.size();
}
void ExperimentStatusRequest::clear_experiment_name() {
  experiment_name_.Clear();
}
const ::std::string& ExperimentStatusRequest::experiment_name(int index) const {
  // @@protoc_insertion_point(field_get:sync_pb.ExperimentStatusRequest.experiment_name)
  return experiment_name_.Get(index);
}
::std::string* ExperimentStatusRequest::mutable_experiment_name(int index) {
  // @@protoc_insertion_point(field_mutable:sync_pb.ExperimentStatusRequest.experiment_name)
  return experiment_name_.Mutable(index);
}
void ExperimentStatusRequest::set_experiment_name(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:sync_pb.ExperimentStatusRequest.experiment_name)
  experiment_name_.Mutable(index)->assign(value);
}
#if LANG_CXX11
void ExperimentStatusRequest::set_experiment_name(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:sync_pb.ExperimentStatusRequest.experiment_name)
  experiment_name_.Mutable(index)->assign(std::move(value));
}
#endif
void ExperimentStatusRequest::set_experiment_name(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  experiment_name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:sync_pb.ExperimentStatusRequest.experiment_name)
}
void ExperimentStatusRequest::set_experiment_name(int index, const char* value, size_t size) {
  experiment_name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ExperimentStatusRequest.experiment_name)
}
::std::string* ExperimentStatusRequest::add_experiment_name() {
  // @@protoc_insertion_point(field_add_mutable:sync_pb.ExperimentStatusRequest.experiment_name)
  return experiment_name_.Add();
}
void ExperimentStatusRequest::add_experiment_name(const ::std::string& value) {
  experiment_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:sync_pb.ExperimentStatusRequest.experiment_name)
}
#if LANG_CXX11
void ExperimentStatusRequest::add_experiment_name(::std::string&& value) {
  experiment_name_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:sync_pb.ExperimentStatusRequest.experiment_name)
}
#endif
void ExperimentStatusRequest::add_experiment_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  experiment_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:sync_pb.ExperimentStatusRequest.experiment_name)
}
void ExperimentStatusRequest::add_experiment_name(const char* value, size_t size) {
  experiment_name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:sync_pb.ExperimentStatusRequest.experiment_name)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
ExperimentStatusRequest::experiment_name() const {
  // @@protoc_insertion_point(field_list:sync_pb.ExperimentStatusRequest.experiment_name)
  return experiment_name_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
ExperimentStatusRequest::mutable_experiment_name() {
  // @@protoc_insertion_point(field_mutable_list:sync_pb.ExperimentStatusRequest.experiment_name)
  return &experiment_name_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ExperimentStatusResponse::kPollIntervalSecondsFieldNumber;
const int ExperimentStatusResponse::kExperimentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ExperimentStatusResponse::ExperimentStatusResponse()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_experiment_5fstatus_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.ExperimentStatusResponse)
}
ExperimentStatusResponse::ExperimentStatusResponse(const ExperimentStatusResponse& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      experiment_(from.experiment_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  poll_interval_seconds_ = from.poll_interval_seconds_;
  // @@protoc_insertion_point(copy_constructor:sync_pb.ExperimentStatusResponse)
}

void ExperimentStatusResponse::SharedCtor() {
  _cached_size_ = 0;
  poll_interval_seconds_ = 3600;
}

ExperimentStatusResponse::~ExperimentStatusResponse() {
  // @@protoc_insertion_point(destructor:sync_pb.ExperimentStatusResponse)
  SharedDtor();
}

void ExperimentStatusResponse::SharedDtor() {
}

void ExperimentStatusResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ExperimentStatusResponse& ExperimentStatusResponse::default_instance() {
  protobuf_experiment_5fstatus_2eproto::InitDefaults();
  return *internal_default_instance();
}

ExperimentStatusResponse* ExperimentStatusResponse::New(::google::protobuf::Arena* arena) const {
  ExperimentStatusResponse* n = new ExperimentStatusResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ExperimentStatusResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.ExperimentStatusResponse)
  experiment_.Clear();
  poll_interval_seconds_ = 3600;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ExperimentStatusResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.ExperimentStatusResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 poll_interval_seconds = 1 [default = 3600];
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          set_has_poll_interval_seconds();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &poll_interval_seconds_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .sync_pb.ExperimentsSpecifics experiment = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_experiment()));
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
  // @@protoc_insertion_point(parse_success:sync_pb.ExperimentStatusResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.ExperimentStatusResponse)
  return false;
#undef DO_
}

void ExperimentStatusResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.ExperimentStatusResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 poll_interval_seconds = 1 [default = 3600];
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->poll_interval_seconds(), output);
  }

  // repeated .sync_pb.ExperimentsSpecifics experiment = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->experiment_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->experiment(static_cast<int>(i)), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.ExperimentStatusResponse)
}

size_t ExperimentStatusResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.ExperimentStatusResponse)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  // repeated .sync_pb.ExperimentsSpecifics experiment = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->experiment_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->experiment(static_cast<int>(i)));
    }
  }

  // optional int32 poll_interval_seconds = 1 [default = 3600];
  if (has_poll_interval_seconds()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->poll_interval_seconds());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ExperimentStatusResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ExperimentStatusResponse*>(&from));
}

void ExperimentStatusResponse::MergeFrom(const ExperimentStatusResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.ExperimentStatusResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  experiment_.MergeFrom(from.experiment_);
  if (from.has_poll_interval_seconds()) {
    set_poll_interval_seconds(from.poll_interval_seconds());
  }
}

void ExperimentStatusResponse::CopyFrom(const ExperimentStatusResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.ExperimentStatusResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExperimentStatusResponse::IsInitialized() const {
  return true;
}

void ExperimentStatusResponse::Swap(ExperimentStatusResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ExperimentStatusResponse::InternalSwap(ExperimentStatusResponse* other) {
  experiment_.InternalSwap(&other->experiment_);
  std::swap(poll_interval_seconds_, other->poll_interval_seconds_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ExperimentStatusResponse::GetTypeName() const {
  return "sync_pb.ExperimentStatusResponse";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ExperimentStatusResponse

// optional int32 poll_interval_seconds = 1 [default = 3600];
bool ExperimentStatusResponse::has_poll_interval_seconds() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ExperimentStatusResponse::set_has_poll_interval_seconds() {
  _has_bits_[0] |= 0x00000001u;
}
void ExperimentStatusResponse::clear_has_poll_interval_seconds() {
  _has_bits_[0] &= ~0x00000001u;
}
void ExperimentStatusResponse::clear_poll_interval_seconds() {
  poll_interval_seconds_ = 3600;
  clear_has_poll_interval_seconds();
}
::google::protobuf::int32 ExperimentStatusResponse::poll_interval_seconds() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExperimentStatusResponse.poll_interval_seconds)
  return poll_interval_seconds_;
}
void ExperimentStatusResponse::set_poll_interval_seconds(::google::protobuf::int32 value) {
  set_has_poll_interval_seconds();
  poll_interval_seconds_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ExperimentStatusResponse.poll_interval_seconds)
}

// repeated .sync_pb.ExperimentsSpecifics experiment = 2;
int ExperimentStatusResponse::experiment_size() const {
  return experiment_.size();
}
void ExperimentStatusResponse::clear_experiment() {
  experiment_.Clear();
}
const ::sync_pb::ExperimentsSpecifics& ExperimentStatusResponse::experiment(int index) const {
  // @@protoc_insertion_point(field_get:sync_pb.ExperimentStatusResponse.experiment)
  return experiment_.Get(index);
}
::sync_pb::ExperimentsSpecifics* ExperimentStatusResponse::mutable_experiment(int index) {
  // @@protoc_insertion_point(field_mutable:sync_pb.ExperimentStatusResponse.experiment)
  return experiment_.Mutable(index);
}
::sync_pb::ExperimentsSpecifics* ExperimentStatusResponse::add_experiment() {
  // @@protoc_insertion_point(field_add:sync_pb.ExperimentStatusResponse.experiment)
  return experiment_.Add();
}
::google::protobuf::RepeatedPtrField< ::sync_pb::ExperimentsSpecifics >*
ExperimentStatusResponse::mutable_experiment() {
  // @@protoc_insertion_point(field_mutable_list:sync_pb.ExperimentStatusResponse.experiment)
  return &experiment_;
}
const ::google::protobuf::RepeatedPtrField< ::sync_pb::ExperimentsSpecifics >&
ExperimentStatusResponse::experiment() const {
  // @@protoc_insertion_point(field_list:sync_pb.ExperimentStatusResponse.experiment)
  return experiment_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
