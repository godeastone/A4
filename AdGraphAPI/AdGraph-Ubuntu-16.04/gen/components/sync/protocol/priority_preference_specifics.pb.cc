// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: priority_preference_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "priority_preference_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {
class PriorityPreferenceSpecificsDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<PriorityPreferenceSpecifics> {
} _PriorityPreferenceSpecifics_default_instance_;

namespace protobuf_priority_5fpreference_5fspecifics_2eproto {

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
  _PriorityPreferenceSpecifics_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::sync_pb::protobuf_preference_5fspecifics_2eproto::InitDefaults();
  _PriorityPreferenceSpecifics_default_instance_.DefaultConstruct();
  _PriorityPreferenceSpecifics_default_instance_.get_mutable()->preference_ = const_cast< ::sync_pb::PreferenceSpecifics*>(
      ::sync_pb::PreferenceSpecifics::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  ::sync_pb::protobuf_preference_5fspecifics_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}

}  // namespace protobuf_priority_5fpreference_5fspecifics_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PriorityPreferenceSpecifics::kPreferenceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PriorityPreferenceSpecifics::PriorityPreferenceSpecifics()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_priority_5fpreference_5fspecifics_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.PriorityPreferenceSpecifics)
}
PriorityPreferenceSpecifics::PriorityPreferenceSpecifics(const PriorityPreferenceSpecifics& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_preference()) {
    preference_ = new ::sync_pb::PreferenceSpecifics(*from.preference_);
  } else {
    preference_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:sync_pb.PriorityPreferenceSpecifics)
}

void PriorityPreferenceSpecifics::SharedCtor() {
  _cached_size_ = 0;
  preference_ = NULL;
}

PriorityPreferenceSpecifics::~PriorityPreferenceSpecifics() {
  // @@protoc_insertion_point(destructor:sync_pb.PriorityPreferenceSpecifics)
  SharedDtor();
}

void PriorityPreferenceSpecifics::SharedDtor() {
  if (this != internal_default_instance()) {
    delete preference_;
  }
}

void PriorityPreferenceSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PriorityPreferenceSpecifics& PriorityPreferenceSpecifics::default_instance() {
  protobuf_priority_5fpreference_5fspecifics_2eproto::InitDefaults();
  return *internal_default_instance();
}

PriorityPreferenceSpecifics* PriorityPreferenceSpecifics::New(::google::protobuf::Arena* arena) const {
  PriorityPreferenceSpecifics* n = new PriorityPreferenceSpecifics;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PriorityPreferenceSpecifics::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.PriorityPreferenceSpecifics)
  if (has_preference()) {
    GOOGLE_DCHECK(preference_ != NULL);
    preference_->::sync_pb::PreferenceSpecifics::Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PriorityPreferenceSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.PriorityPreferenceSpecifics)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .sync_pb.PreferenceSpecifics preference = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_preference()));
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
  // @@protoc_insertion_point(parse_success:sync_pb.PriorityPreferenceSpecifics)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.PriorityPreferenceSpecifics)
  return false;
#undef DO_
}

void PriorityPreferenceSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.PriorityPreferenceSpecifics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .sync_pb.PreferenceSpecifics preference = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, *this->preference_, output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.PriorityPreferenceSpecifics)
}

size_t PriorityPreferenceSpecifics::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.PriorityPreferenceSpecifics)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  // optional .sync_pb.PreferenceSpecifics preference = 1;
  if (has_preference()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->preference_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PriorityPreferenceSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PriorityPreferenceSpecifics*>(&from));
}

void PriorityPreferenceSpecifics::MergeFrom(const PriorityPreferenceSpecifics& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.PriorityPreferenceSpecifics)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_preference()) {
    mutable_preference()->::sync_pb::PreferenceSpecifics::MergeFrom(from.preference());
  }
}

void PriorityPreferenceSpecifics::CopyFrom(const PriorityPreferenceSpecifics& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.PriorityPreferenceSpecifics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PriorityPreferenceSpecifics::IsInitialized() const {
  return true;
}

void PriorityPreferenceSpecifics::Swap(PriorityPreferenceSpecifics* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PriorityPreferenceSpecifics::InternalSwap(PriorityPreferenceSpecifics* other) {
  std::swap(preference_, other->preference_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string PriorityPreferenceSpecifics::GetTypeName() const {
  return "sync_pb.PriorityPreferenceSpecifics";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PriorityPreferenceSpecifics

// optional .sync_pb.PreferenceSpecifics preference = 1;
bool PriorityPreferenceSpecifics::has_preference() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PriorityPreferenceSpecifics::set_has_preference() {
  _has_bits_[0] |= 0x00000001u;
}
void PriorityPreferenceSpecifics::clear_has_preference() {
  _has_bits_[0] &= ~0x00000001u;
}
void PriorityPreferenceSpecifics::clear_preference() {
  if (preference_ != NULL) preference_->::sync_pb::PreferenceSpecifics::Clear();
  clear_has_preference();
}
const ::sync_pb::PreferenceSpecifics& PriorityPreferenceSpecifics::preference() const {
  // @@protoc_insertion_point(field_get:sync_pb.PriorityPreferenceSpecifics.preference)
  return preference_ != NULL ? *preference_
                         : *::sync_pb::PreferenceSpecifics::internal_default_instance();
}
::sync_pb::PreferenceSpecifics* PriorityPreferenceSpecifics::mutable_preference() {
  set_has_preference();
  if (preference_ == NULL) {
    preference_ = new ::sync_pb::PreferenceSpecifics;
  }
  // @@protoc_insertion_point(field_mutable:sync_pb.PriorityPreferenceSpecifics.preference)
  return preference_;
}
::sync_pb::PreferenceSpecifics* PriorityPreferenceSpecifics::release_preference() {
  // @@protoc_insertion_point(field_release:sync_pb.PriorityPreferenceSpecifics.preference)
  clear_has_preference();
  ::sync_pb::PreferenceSpecifics* temp = preference_;
  preference_ = NULL;
  return temp;
}
void PriorityPreferenceSpecifics::set_allocated_preference(::sync_pb::PreferenceSpecifics* preference) {
  delete preference_;
  preference_ = preference;
  if (preference) {
    set_has_preference();
  } else {
    clear_has_preference();
  }
  // @@protoc_insertion_point(field_set_allocated:sync_pb.PriorityPreferenceSpecifics.preference)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
