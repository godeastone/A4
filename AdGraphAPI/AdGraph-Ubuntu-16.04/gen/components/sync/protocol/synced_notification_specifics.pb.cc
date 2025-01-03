// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: synced_notification_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "synced_notification_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {
class SyncedNotificationSpecificsDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<SyncedNotificationSpecifics> {
} _SyncedNotificationSpecifics_default_instance_;

namespace protobuf_synced_5fnotification_5fspecifics_2eproto {

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
  _SyncedNotificationSpecifics_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _SyncedNotificationSpecifics_default_instance_.DefaultConstruct();
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

}  // namespace protobuf_synced_5fnotification_5fspecifics_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SyncedNotificationSpecifics::SyncedNotificationSpecifics()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_synced_5fnotification_5fspecifics_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.SyncedNotificationSpecifics)
}
SyncedNotificationSpecifics::SyncedNotificationSpecifics(const SyncedNotificationSpecifics& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:sync_pb.SyncedNotificationSpecifics)
}

void SyncedNotificationSpecifics::SharedCtor() {
  _cached_size_ = 0;
}

SyncedNotificationSpecifics::~SyncedNotificationSpecifics() {
  // @@protoc_insertion_point(destructor:sync_pb.SyncedNotificationSpecifics)
  SharedDtor();
}

void SyncedNotificationSpecifics::SharedDtor() {
}

void SyncedNotificationSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SyncedNotificationSpecifics& SyncedNotificationSpecifics::default_instance() {
  protobuf_synced_5fnotification_5fspecifics_2eproto::InitDefaults();
  return *internal_default_instance();
}

SyncedNotificationSpecifics* SyncedNotificationSpecifics::New(::google::protobuf::Arena* arena) const {
  SyncedNotificationSpecifics* n = new SyncedNotificationSpecifics;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SyncedNotificationSpecifics::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.SyncedNotificationSpecifics)
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SyncedNotificationSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.SyncedNotificationSpecifics)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(
        input, tag, &unknown_fields_stream));
  }
success:
  // @@protoc_insertion_point(parse_success:sync_pb.SyncedNotificationSpecifics)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.SyncedNotificationSpecifics)
  return false;
#undef DO_
}

void SyncedNotificationSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.SyncedNotificationSpecifics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.SyncedNotificationSpecifics)
}

size_t SyncedNotificationSpecifics::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.SyncedNotificationSpecifics)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SyncedNotificationSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SyncedNotificationSpecifics*>(&from));
}

void SyncedNotificationSpecifics::MergeFrom(const SyncedNotificationSpecifics& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.SyncedNotificationSpecifics)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void SyncedNotificationSpecifics::CopyFrom(const SyncedNotificationSpecifics& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.SyncedNotificationSpecifics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SyncedNotificationSpecifics::IsInitialized() const {
  return true;
}

void SyncedNotificationSpecifics::Swap(SyncedNotificationSpecifics* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SyncedNotificationSpecifics::InternalSwap(SyncedNotificationSpecifics* other) {
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string SyncedNotificationSpecifics::GetTypeName() const {
  return "sync_pb.SyncedNotificationSpecifics";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SyncedNotificationSpecifics

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
