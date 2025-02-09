// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client_test_internal.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "client_test_internal.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace ipc {
namespace invalidation {
class RegistrationManagerStatePDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<RegistrationManagerStateP> {
} _RegistrationManagerStateP_default_instance_;

namespace protobuf_client_5ftest_5finternal_2eproto {

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
  _RegistrationManagerStateP_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::ipc::invalidation::protobuf_client_5fprotocol_2eproto::InitDefaults();
  _RegistrationManagerStateP_default_instance_.DefaultConstruct();
  _RegistrationManagerStateP_default_instance_.get_mutable()->client_summary_ = const_cast< ::ipc::invalidation::RegistrationSummary*>(
      ::ipc::invalidation::RegistrationSummary::internal_default_instance());
  _RegistrationManagerStateP_default_instance_.get_mutable()->server_summary_ = const_cast< ::ipc::invalidation::RegistrationSummary*>(
      ::ipc::invalidation::RegistrationSummary::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  ::ipc::invalidation::protobuf_client_5fprotocol_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}

}  // namespace protobuf_client_5ftest_5finternal_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RegistrationManagerStateP::kClientSummaryFieldNumber;
const int RegistrationManagerStateP::kServerSummaryFieldNumber;
const int RegistrationManagerStateP::kRegisteredObjectsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RegistrationManagerStateP::RegistrationManagerStateP()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_client_5ftest_5finternal_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:ipc.invalidation.RegistrationManagerStateP)
}
RegistrationManagerStateP::RegistrationManagerStateP(const RegistrationManagerStateP& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      registered_objects_(from.registered_objects_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_client_summary()) {
    client_summary_ = new ::ipc::invalidation::RegistrationSummary(*from.client_summary_);
  } else {
    client_summary_ = NULL;
  }
  if (from.has_server_summary()) {
    server_summary_ = new ::ipc::invalidation::RegistrationSummary(*from.server_summary_);
  } else {
    server_summary_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:ipc.invalidation.RegistrationManagerStateP)
}

void RegistrationManagerStateP::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&client_summary_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&server_summary_) -
      reinterpret_cast<char*>(&client_summary_)) + sizeof(server_summary_));
}

RegistrationManagerStateP::~RegistrationManagerStateP() {
  // @@protoc_insertion_point(destructor:ipc.invalidation.RegistrationManagerStateP)
  SharedDtor();
}

void RegistrationManagerStateP::SharedDtor() {
  if (this != internal_default_instance()) {
    delete client_summary_;
  }
  if (this != internal_default_instance()) {
    delete server_summary_;
  }
}

void RegistrationManagerStateP::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const RegistrationManagerStateP& RegistrationManagerStateP::default_instance() {
  protobuf_client_5ftest_5finternal_2eproto::InitDefaults();
  return *internal_default_instance();
}

RegistrationManagerStateP* RegistrationManagerStateP::New(::google::protobuf::Arena* arena) const {
  RegistrationManagerStateP* n = new RegistrationManagerStateP;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RegistrationManagerStateP::Clear() {
// @@protoc_insertion_point(message_clear_start:ipc.invalidation.RegistrationManagerStateP)
  registered_objects_.Clear();
  if (_has_bits_[0 / 32] & 3u) {
    if (has_client_summary()) {
      GOOGLE_DCHECK(client_summary_ != NULL);
      client_summary_->::ipc::invalidation::RegistrationSummary::Clear();
    }
    if (has_server_summary()) {
      GOOGLE_DCHECK(server_summary_ != NULL);
      server_summary_->::ipc::invalidation::RegistrationSummary::Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool RegistrationManagerStateP::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:ipc.invalidation.RegistrationManagerStateP)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .ipc.invalidation.RegistrationSummary client_summary = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_client_summary()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .ipc.invalidation.RegistrationSummary server_summary = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_server_summary()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .ipc.invalidation.ObjectIdP registered_objects = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_registered_objects()));
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
  // @@protoc_insertion_point(parse_success:ipc.invalidation.RegistrationManagerStateP)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ipc.invalidation.RegistrationManagerStateP)
  return false;
#undef DO_
}

void RegistrationManagerStateP::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ipc.invalidation.RegistrationManagerStateP)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .ipc.invalidation.RegistrationSummary client_summary = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, *this->client_summary_, output);
  }

  // optional .ipc.invalidation.RegistrationSummary server_summary = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, *this->server_summary_, output);
  }

  // repeated .ipc.invalidation.ObjectIdP registered_objects = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->registered_objects_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->registered_objects(static_cast<int>(i)), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:ipc.invalidation.RegistrationManagerStateP)
}

size_t RegistrationManagerStateP::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ipc.invalidation.RegistrationManagerStateP)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  // repeated .ipc.invalidation.ObjectIdP registered_objects = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->registered_objects_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->registered_objects(static_cast<int>(i)));
    }
  }

  if (_has_bits_[0 / 32] & 3u) {
    // optional .ipc.invalidation.RegistrationSummary client_summary = 1;
    if (has_client_summary()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->client_summary_);
    }

    // optional .ipc.invalidation.RegistrationSummary server_summary = 2;
    if (has_server_summary()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->server_summary_);
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RegistrationManagerStateP::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const RegistrationManagerStateP*>(&from));
}

void RegistrationManagerStateP::MergeFrom(const RegistrationManagerStateP& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ipc.invalidation.RegistrationManagerStateP)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  registered_objects_.MergeFrom(from.registered_objects_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_client_summary()->::ipc::invalidation::RegistrationSummary::MergeFrom(from.client_summary());
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_server_summary()->::ipc::invalidation::RegistrationSummary::MergeFrom(from.server_summary());
    }
  }
}

void RegistrationManagerStateP::CopyFrom(const RegistrationManagerStateP& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ipc.invalidation.RegistrationManagerStateP)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RegistrationManagerStateP::IsInitialized() const {
  return true;
}

void RegistrationManagerStateP::Swap(RegistrationManagerStateP* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RegistrationManagerStateP::InternalSwap(RegistrationManagerStateP* other) {
  registered_objects_.InternalSwap(&other->registered_objects_);
  std::swap(client_summary_, other->client_summary_);
  std::swap(server_summary_, other->server_summary_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string RegistrationManagerStateP::GetTypeName() const {
  return "ipc.invalidation.RegistrationManagerStateP";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RegistrationManagerStateP

// optional .ipc.invalidation.RegistrationSummary client_summary = 1;
bool RegistrationManagerStateP::has_client_summary() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void RegistrationManagerStateP::set_has_client_summary() {
  _has_bits_[0] |= 0x00000001u;
}
void RegistrationManagerStateP::clear_has_client_summary() {
  _has_bits_[0] &= ~0x00000001u;
}
void RegistrationManagerStateP::clear_client_summary() {
  if (client_summary_ != NULL) client_summary_->::ipc::invalidation::RegistrationSummary::Clear();
  clear_has_client_summary();
}
const ::ipc::invalidation::RegistrationSummary& RegistrationManagerStateP::client_summary() const {
  // @@protoc_insertion_point(field_get:ipc.invalidation.RegistrationManagerStateP.client_summary)
  return client_summary_ != NULL ? *client_summary_
                         : *::ipc::invalidation::RegistrationSummary::internal_default_instance();
}
::ipc::invalidation::RegistrationSummary* RegistrationManagerStateP::mutable_client_summary() {
  set_has_client_summary();
  if (client_summary_ == NULL) {
    client_summary_ = new ::ipc::invalidation::RegistrationSummary;
  }
  // @@protoc_insertion_point(field_mutable:ipc.invalidation.RegistrationManagerStateP.client_summary)
  return client_summary_;
}
::ipc::invalidation::RegistrationSummary* RegistrationManagerStateP::release_client_summary() {
  // @@protoc_insertion_point(field_release:ipc.invalidation.RegistrationManagerStateP.client_summary)
  clear_has_client_summary();
  ::ipc::invalidation::RegistrationSummary* temp = client_summary_;
  client_summary_ = NULL;
  return temp;
}
void RegistrationManagerStateP::set_allocated_client_summary(::ipc::invalidation::RegistrationSummary* client_summary) {
  delete client_summary_;
  client_summary_ = client_summary;
  if (client_summary) {
    set_has_client_summary();
  } else {
    clear_has_client_summary();
  }
  // @@protoc_insertion_point(field_set_allocated:ipc.invalidation.RegistrationManagerStateP.client_summary)
}

// optional .ipc.invalidation.RegistrationSummary server_summary = 2;
bool RegistrationManagerStateP::has_server_summary() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void RegistrationManagerStateP::set_has_server_summary() {
  _has_bits_[0] |= 0x00000002u;
}
void RegistrationManagerStateP::clear_has_server_summary() {
  _has_bits_[0] &= ~0x00000002u;
}
void RegistrationManagerStateP::clear_server_summary() {
  if (server_summary_ != NULL) server_summary_->::ipc::invalidation::RegistrationSummary::Clear();
  clear_has_server_summary();
}
const ::ipc::invalidation::RegistrationSummary& RegistrationManagerStateP::server_summary() const {
  // @@protoc_insertion_point(field_get:ipc.invalidation.RegistrationManagerStateP.server_summary)
  return server_summary_ != NULL ? *server_summary_
                         : *::ipc::invalidation::RegistrationSummary::internal_default_instance();
}
::ipc::invalidation::RegistrationSummary* RegistrationManagerStateP::mutable_server_summary() {
  set_has_server_summary();
  if (server_summary_ == NULL) {
    server_summary_ = new ::ipc::invalidation::RegistrationSummary;
  }
  // @@protoc_insertion_point(field_mutable:ipc.invalidation.RegistrationManagerStateP.server_summary)
  return server_summary_;
}
::ipc::invalidation::RegistrationSummary* RegistrationManagerStateP::release_server_summary() {
  // @@protoc_insertion_point(field_release:ipc.invalidation.RegistrationManagerStateP.server_summary)
  clear_has_server_summary();
  ::ipc::invalidation::RegistrationSummary* temp = server_summary_;
  server_summary_ = NULL;
  return temp;
}
void RegistrationManagerStateP::set_allocated_server_summary(::ipc::invalidation::RegistrationSummary* server_summary) {
  delete server_summary_;
  server_summary_ = server_summary;
  if (server_summary) {
    set_has_server_summary();
  } else {
    clear_has_server_summary();
  }
  // @@protoc_insertion_point(field_set_allocated:ipc.invalidation.RegistrationManagerStateP.server_summary)
}

// repeated .ipc.invalidation.ObjectIdP registered_objects = 3;
int RegistrationManagerStateP::registered_objects_size() const {
  return registered_objects_.size();
}
void RegistrationManagerStateP::clear_registered_objects() {
  registered_objects_.Clear();
}
const ::ipc::invalidation::ObjectIdP& RegistrationManagerStateP::registered_objects(int index) const {
  // @@protoc_insertion_point(field_get:ipc.invalidation.RegistrationManagerStateP.registered_objects)
  return registered_objects_.Get(index);
}
::ipc::invalidation::ObjectIdP* RegistrationManagerStateP::mutable_registered_objects(int index) {
  // @@protoc_insertion_point(field_mutable:ipc.invalidation.RegistrationManagerStateP.registered_objects)
  return registered_objects_.Mutable(index);
}
::ipc::invalidation::ObjectIdP* RegistrationManagerStateP::add_registered_objects() {
  // @@protoc_insertion_point(field_add:ipc.invalidation.RegistrationManagerStateP.registered_objects)
  return registered_objects_.Add();
}
::google::protobuf::RepeatedPtrField< ::ipc::invalidation::ObjectIdP >*
RegistrationManagerStateP::mutable_registered_objects() {
  // @@protoc_insertion_point(field_mutable_list:ipc.invalidation.RegistrationManagerStateP.registered_objects)
  return &registered_objects_;
}
const ::google::protobuf::RepeatedPtrField< ::ipc::invalidation::ObjectIdP >&
RegistrationManagerStateP::registered_objects() const {
  // @@protoc_insertion_point(field_list:ipc.invalidation.RegistrationManagerStateP.registered_objects)
  return registered_objects_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace invalidation
}  // namespace ipc

// @@protoc_insertion_point(global_scope)
