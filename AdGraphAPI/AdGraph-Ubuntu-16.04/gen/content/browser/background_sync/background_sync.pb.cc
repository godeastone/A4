// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: background_sync.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "background_sync.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace content {
class BackgroundSyncRegistrationProtoDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<BackgroundSyncRegistrationProto> {
} _BackgroundSyncRegistrationProto_default_instance_;
class BackgroundSyncRegistrationsProtoDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<BackgroundSyncRegistrationsProto> {
} _BackgroundSyncRegistrationsProto_default_instance_;

namespace protobuf_background_5fsync_2eproto {

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
  _BackgroundSyncRegistrationProto_default_instance_.Shutdown();
  _BackgroundSyncRegistrationsProto_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _BackgroundSyncRegistrationProto_default_instance_.DefaultConstruct();
  _BackgroundSyncRegistrationsProto_default_instance_.DefaultConstruct();
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

}  // namespace protobuf_background_5fsync_2eproto

bool SyncNetworkState_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BackgroundSyncRegistrationProto::kIdFieldNumber;
const int BackgroundSyncRegistrationProto::kTagFieldNumber;
const int BackgroundSyncRegistrationProto::kNetworkStateFieldNumber;
const int BackgroundSyncRegistrationProto::kNumAttemptsFieldNumber;
const int BackgroundSyncRegistrationProto::kDelayUntilFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BackgroundSyncRegistrationProto::BackgroundSyncRegistrationProto()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_background_5fsync_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:content.BackgroundSyncRegistrationProto)
}
BackgroundSyncRegistrationProto::BackgroundSyncRegistrationProto(const BackgroundSyncRegistrationProto& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  tag_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_tag()) {
    tag_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.tag_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&delay_until_) -
    reinterpret_cast<char*>(&id_)) + sizeof(delay_until_));
  // @@protoc_insertion_point(copy_constructor:content.BackgroundSyncRegistrationProto)
}

void BackgroundSyncRegistrationProto::SharedCtor() {
  _cached_size_ = 0;
  tag_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&delay_until_) -
      reinterpret_cast<char*>(&id_)) + sizeof(delay_until_));
}

BackgroundSyncRegistrationProto::~BackgroundSyncRegistrationProto() {
  // @@protoc_insertion_point(destructor:content.BackgroundSyncRegistrationProto)
  SharedDtor();
}

void BackgroundSyncRegistrationProto::SharedDtor() {
  tag_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void BackgroundSyncRegistrationProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BackgroundSyncRegistrationProto& BackgroundSyncRegistrationProto::default_instance() {
  protobuf_background_5fsync_2eproto::InitDefaults();
  return *internal_default_instance();
}

BackgroundSyncRegistrationProto* BackgroundSyncRegistrationProto::New(::google::protobuf::Arena* arena) const {
  BackgroundSyncRegistrationProto* n = new BackgroundSyncRegistrationProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BackgroundSyncRegistrationProto::Clear() {
// @@protoc_insertion_point(message_clear_start:content.BackgroundSyncRegistrationProto)
  if (has_tag()) {
    GOOGLE_DCHECK(!tag_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*tag_.UnsafeRawStringPointer())->clear();
  }
  if (_has_bits_[0 / 32] & 30u) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&delay_until_) -
        reinterpret_cast<char*>(&id_)) + sizeof(delay_until_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool BackgroundSyncRegistrationProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:content.BackgroundSyncRegistrationProto)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          set_has_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string tag = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_tag()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required .content.SyncNetworkState network_state = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::content::SyncNetworkState_IsValid(value)) {
            set_network_state(static_cast< ::content::SyncNetworkState >(value));
          } else {
            unknown_fields_stream.WriteVarint32(40u);
            unknown_fields_stream.WriteVarint32(
                static_cast< ::google::protobuf::uint32>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 num_attempts = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u)) {
          set_has_num_attempts();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_attempts_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int64 delay_until = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u)) {
          set_has_delay_until();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &delay_until_)));
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
  // @@protoc_insertion_point(parse_success:content.BackgroundSyncRegistrationProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:content.BackgroundSyncRegistrationProto)
  return false;
#undef DO_
}

void BackgroundSyncRegistrationProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:content.BackgroundSyncRegistrationProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int64 id = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->id(), output);
  }

  // required string tag = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->tag(), output);
  }

  // required .content.SyncNetworkState network_state = 5;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->network_state(), output);
  }

  // required int32 num_attempts = 7;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->num_attempts(), output);
  }

  // required int64 delay_until = 8;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(8, this->delay_until(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:content.BackgroundSyncRegistrationProto)
}

size_t BackgroundSyncRegistrationProto::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:content.BackgroundSyncRegistrationProto)
  size_t total_size = 0;

  if (has_tag()) {
    // required string tag = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->tag());
  }

  if (has_id()) {
    // required int64 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->id());
  }

  if (has_network_state()) {
    // required .content.SyncNetworkState network_state = 5;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->network_state());
  }

  if (has_num_attempts()) {
    // required int32 num_attempts = 7;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->num_attempts());
  }

  if (has_delay_until()) {
    // required int64 delay_until = 8;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->delay_until());
  }

  return total_size;
}
size_t BackgroundSyncRegistrationProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:content.BackgroundSyncRegistrationProto)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  if (((_has_bits_[0] & 0x0000001f) ^ 0x0000001f) == 0) {  // All required fields are present.
    // required string tag = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->tag());

    // required int64 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->id());

    // required .content.SyncNetworkState network_state = 5;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->network_state());

    // required int32 num_attempts = 7;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->num_attempts());

    // required int64 delay_until = 8;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->delay_until());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BackgroundSyncRegistrationProto::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BackgroundSyncRegistrationProto*>(&from));
}

void BackgroundSyncRegistrationProto::MergeFrom(const BackgroundSyncRegistrationProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:content.BackgroundSyncRegistrationProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 31u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_tag();
      tag_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.tag_);
    }
    if (cached_has_bits & 0x00000002u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000004u) {
      network_state_ = from.network_state_;
    }
    if (cached_has_bits & 0x00000008u) {
      num_attempts_ = from.num_attempts_;
    }
    if (cached_has_bits & 0x00000010u) {
      delay_until_ = from.delay_until_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void BackgroundSyncRegistrationProto::CopyFrom(const BackgroundSyncRegistrationProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:content.BackgroundSyncRegistrationProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BackgroundSyncRegistrationProto::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;
  return true;
}

void BackgroundSyncRegistrationProto::Swap(BackgroundSyncRegistrationProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BackgroundSyncRegistrationProto::InternalSwap(BackgroundSyncRegistrationProto* other) {
  tag_.Swap(&other->tag_);
  std::swap(id_, other->id_);
  std::swap(network_state_, other->network_state_);
  std::swap(num_attempts_, other->num_attempts_);
  std::swap(delay_until_, other->delay_until_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string BackgroundSyncRegistrationProto::GetTypeName() const {
  return "content.BackgroundSyncRegistrationProto";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BackgroundSyncRegistrationProto

// required int64 id = 1;
bool BackgroundSyncRegistrationProto::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void BackgroundSyncRegistrationProto::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
void BackgroundSyncRegistrationProto::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
void BackgroundSyncRegistrationProto::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
::google::protobuf::int64 BackgroundSyncRegistrationProto::id() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationProto.id)
  return id_;
}
void BackgroundSyncRegistrationProto::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationProto.id)
}

// required string tag = 2;
bool BackgroundSyncRegistrationProto::has_tag() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void BackgroundSyncRegistrationProto::set_has_tag() {
  _has_bits_[0] |= 0x00000001u;
}
void BackgroundSyncRegistrationProto::clear_has_tag() {
  _has_bits_[0] &= ~0x00000001u;
}
void BackgroundSyncRegistrationProto::clear_tag() {
  tag_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_tag();
}
const ::std::string& BackgroundSyncRegistrationProto::tag() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationProto.tag)
  return tag_.GetNoArena();
}
void BackgroundSyncRegistrationProto::set_tag(const ::std::string& value) {
  set_has_tag();
  tag_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationProto.tag)
}
#if LANG_CXX11
void BackgroundSyncRegistrationProto::set_tag(::std::string&& value) {
  set_has_tag();
  tag_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:content.BackgroundSyncRegistrationProto.tag)
}
#endif
void BackgroundSyncRegistrationProto::set_tag(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_tag();
  tag_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:content.BackgroundSyncRegistrationProto.tag)
}
void BackgroundSyncRegistrationProto::set_tag(const char* value, size_t size) {
  set_has_tag();
  tag_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:content.BackgroundSyncRegistrationProto.tag)
}
::std::string* BackgroundSyncRegistrationProto::mutable_tag() {
  set_has_tag();
  // @@protoc_insertion_point(field_mutable:content.BackgroundSyncRegistrationProto.tag)
  return tag_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* BackgroundSyncRegistrationProto::release_tag() {
  // @@protoc_insertion_point(field_release:content.BackgroundSyncRegistrationProto.tag)
  clear_has_tag();
  return tag_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void BackgroundSyncRegistrationProto::set_allocated_tag(::std::string* tag) {
  if (tag != NULL) {
    set_has_tag();
  } else {
    clear_has_tag();
  }
  tag_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tag);
  // @@protoc_insertion_point(field_set_allocated:content.BackgroundSyncRegistrationProto.tag)
}

// required .content.SyncNetworkState network_state = 5;
bool BackgroundSyncRegistrationProto::has_network_state() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void BackgroundSyncRegistrationProto::set_has_network_state() {
  _has_bits_[0] |= 0x00000004u;
}
void BackgroundSyncRegistrationProto::clear_has_network_state() {
  _has_bits_[0] &= ~0x00000004u;
}
void BackgroundSyncRegistrationProto::clear_network_state() {
  network_state_ = 0;
  clear_has_network_state();
}
::content::SyncNetworkState BackgroundSyncRegistrationProto::network_state() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationProto.network_state)
  return static_cast< ::content::SyncNetworkState >(network_state_);
}
void BackgroundSyncRegistrationProto::set_network_state(::content::SyncNetworkState value) {
  assert(::content::SyncNetworkState_IsValid(value));
  set_has_network_state();
  network_state_ = value;
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationProto.network_state)
}

// required int32 num_attempts = 7;
bool BackgroundSyncRegistrationProto::has_num_attempts() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void BackgroundSyncRegistrationProto::set_has_num_attempts() {
  _has_bits_[0] |= 0x00000008u;
}
void BackgroundSyncRegistrationProto::clear_has_num_attempts() {
  _has_bits_[0] &= ~0x00000008u;
}
void BackgroundSyncRegistrationProto::clear_num_attempts() {
  num_attempts_ = 0;
  clear_has_num_attempts();
}
::google::protobuf::int32 BackgroundSyncRegistrationProto::num_attempts() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationProto.num_attempts)
  return num_attempts_;
}
void BackgroundSyncRegistrationProto::set_num_attempts(::google::protobuf::int32 value) {
  set_has_num_attempts();
  num_attempts_ = value;
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationProto.num_attempts)
}

// required int64 delay_until = 8;
bool BackgroundSyncRegistrationProto::has_delay_until() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void BackgroundSyncRegistrationProto::set_has_delay_until() {
  _has_bits_[0] |= 0x00000010u;
}
void BackgroundSyncRegistrationProto::clear_has_delay_until() {
  _has_bits_[0] &= ~0x00000010u;
}
void BackgroundSyncRegistrationProto::clear_delay_until() {
  delay_until_ = GOOGLE_LONGLONG(0);
  clear_has_delay_until();
}
::google::protobuf::int64 BackgroundSyncRegistrationProto::delay_until() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationProto.delay_until)
  return delay_until_;
}
void BackgroundSyncRegistrationProto::set_delay_until(::google::protobuf::int64 value) {
  set_has_delay_until();
  delay_until_ = value;
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationProto.delay_until)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BackgroundSyncRegistrationsProto::kRegistrationFieldNumber;
const int BackgroundSyncRegistrationsProto::kNextRegistrationIdFieldNumber;
const int BackgroundSyncRegistrationsProto::kOriginFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BackgroundSyncRegistrationsProto::BackgroundSyncRegistrationsProto()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_background_5fsync_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:content.BackgroundSyncRegistrationsProto)
}
BackgroundSyncRegistrationsProto::BackgroundSyncRegistrationsProto(const BackgroundSyncRegistrationsProto& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      registration_(from.registration_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  origin_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_origin()) {
    origin_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.origin_);
  }
  next_registration_id_ = from.next_registration_id_;
  // @@protoc_insertion_point(copy_constructor:content.BackgroundSyncRegistrationsProto)
}

void BackgroundSyncRegistrationsProto::SharedCtor() {
  _cached_size_ = 0;
  origin_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  next_registration_id_ = GOOGLE_LONGLONG(0);
}

BackgroundSyncRegistrationsProto::~BackgroundSyncRegistrationsProto() {
  // @@protoc_insertion_point(destructor:content.BackgroundSyncRegistrationsProto)
  SharedDtor();
}

void BackgroundSyncRegistrationsProto::SharedDtor() {
  origin_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void BackgroundSyncRegistrationsProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const BackgroundSyncRegistrationsProto& BackgroundSyncRegistrationsProto::default_instance() {
  protobuf_background_5fsync_2eproto::InitDefaults();
  return *internal_default_instance();
}

BackgroundSyncRegistrationsProto* BackgroundSyncRegistrationsProto::New(::google::protobuf::Arena* arena) const {
  BackgroundSyncRegistrationsProto* n = new BackgroundSyncRegistrationsProto;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BackgroundSyncRegistrationsProto::Clear() {
// @@protoc_insertion_point(message_clear_start:content.BackgroundSyncRegistrationsProto)
  registration_.Clear();
  if (has_origin()) {
    GOOGLE_DCHECK(!origin_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*origin_.UnsafeRawStringPointer())->clear();
  }
  next_registration_id_ = GOOGLE_LONGLONG(0);
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool BackgroundSyncRegistrationsProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:content.BackgroundSyncRegistrationsProto)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .content.BackgroundSyncRegistrationProto registration = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_registration()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int64 next_registration_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          set_has_next_registration_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &next_registration_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string origin = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_origin()));
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
  // @@protoc_insertion_point(parse_success:content.BackgroundSyncRegistrationsProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:content.BackgroundSyncRegistrationsProto)
  return false;
#undef DO_
}

void BackgroundSyncRegistrationsProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:content.BackgroundSyncRegistrationsProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .content.BackgroundSyncRegistrationProto registration = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->registration_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->registration(static_cast<int>(i)), output);
  }

  cached_has_bits = _has_bits_[0];
  // required int64 next_registration_id = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->next_registration_id(), output);
  }

  // required string origin = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->origin(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:content.BackgroundSyncRegistrationsProto)
}

size_t BackgroundSyncRegistrationsProto::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:content.BackgroundSyncRegistrationsProto)
  size_t total_size = 0;

  if (has_origin()) {
    // required string origin = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->origin());
  }

  if (has_next_registration_id()) {
    // required int64 next_registration_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->next_registration_id());
  }

  return total_size;
}
size_t BackgroundSyncRegistrationsProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:content.BackgroundSyncRegistrationsProto)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string origin = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->origin());

    // required int64 next_registration_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->next_registration_id());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // repeated .content.BackgroundSyncRegistrationProto registration = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->registration_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->registration(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BackgroundSyncRegistrationsProto::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const BackgroundSyncRegistrationsProto*>(&from));
}

void BackgroundSyncRegistrationsProto::MergeFrom(const BackgroundSyncRegistrationsProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:content.BackgroundSyncRegistrationsProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  registration_.MergeFrom(from.registration_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_origin();
      origin_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.origin_);
    }
    if (cached_has_bits & 0x00000002u) {
      next_registration_id_ = from.next_registration_id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void BackgroundSyncRegistrationsProto::CopyFrom(const BackgroundSyncRegistrationsProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:content.BackgroundSyncRegistrationsProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BackgroundSyncRegistrationsProto::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->registration())) return false;
  return true;
}

void BackgroundSyncRegistrationsProto::Swap(BackgroundSyncRegistrationsProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BackgroundSyncRegistrationsProto::InternalSwap(BackgroundSyncRegistrationsProto* other) {
  registration_.InternalSwap(&other->registration_);
  origin_.Swap(&other->origin_);
  std::swap(next_registration_id_, other->next_registration_id_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string BackgroundSyncRegistrationsProto::GetTypeName() const {
  return "content.BackgroundSyncRegistrationsProto";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BackgroundSyncRegistrationsProto

// repeated .content.BackgroundSyncRegistrationProto registration = 1;
int BackgroundSyncRegistrationsProto::registration_size() const {
  return registration_.size();
}
void BackgroundSyncRegistrationsProto::clear_registration() {
  registration_.Clear();
}
const ::content::BackgroundSyncRegistrationProto& BackgroundSyncRegistrationsProto::registration(int index) const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationsProto.registration)
  return registration_.Get(index);
}
::content::BackgroundSyncRegistrationProto* BackgroundSyncRegistrationsProto::mutable_registration(int index) {
  // @@protoc_insertion_point(field_mutable:content.BackgroundSyncRegistrationsProto.registration)
  return registration_.Mutable(index);
}
::content::BackgroundSyncRegistrationProto* BackgroundSyncRegistrationsProto::add_registration() {
  // @@protoc_insertion_point(field_add:content.BackgroundSyncRegistrationsProto.registration)
  return registration_.Add();
}
::google::protobuf::RepeatedPtrField< ::content::BackgroundSyncRegistrationProto >*
BackgroundSyncRegistrationsProto::mutable_registration() {
  // @@protoc_insertion_point(field_mutable_list:content.BackgroundSyncRegistrationsProto.registration)
  return &registration_;
}
const ::google::protobuf::RepeatedPtrField< ::content::BackgroundSyncRegistrationProto >&
BackgroundSyncRegistrationsProto::registration() const {
  // @@protoc_insertion_point(field_list:content.BackgroundSyncRegistrationsProto.registration)
  return registration_;
}

// required int64 next_registration_id = 2;
bool BackgroundSyncRegistrationsProto::has_next_registration_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void BackgroundSyncRegistrationsProto::set_has_next_registration_id() {
  _has_bits_[0] |= 0x00000002u;
}
void BackgroundSyncRegistrationsProto::clear_has_next_registration_id() {
  _has_bits_[0] &= ~0x00000002u;
}
void BackgroundSyncRegistrationsProto::clear_next_registration_id() {
  next_registration_id_ = GOOGLE_LONGLONG(0);
  clear_has_next_registration_id();
}
::google::protobuf::int64 BackgroundSyncRegistrationsProto::next_registration_id() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationsProto.next_registration_id)
  return next_registration_id_;
}
void BackgroundSyncRegistrationsProto::set_next_registration_id(::google::protobuf::int64 value) {
  set_has_next_registration_id();
  next_registration_id_ = value;
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationsProto.next_registration_id)
}

// required string origin = 3;
bool BackgroundSyncRegistrationsProto::has_origin() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void BackgroundSyncRegistrationsProto::set_has_origin() {
  _has_bits_[0] |= 0x00000001u;
}
void BackgroundSyncRegistrationsProto::clear_has_origin() {
  _has_bits_[0] &= ~0x00000001u;
}
void BackgroundSyncRegistrationsProto::clear_origin() {
  origin_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_origin();
}
const ::std::string& BackgroundSyncRegistrationsProto::origin() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationsProto.origin)
  return origin_.GetNoArena();
}
void BackgroundSyncRegistrationsProto::set_origin(const ::std::string& value) {
  set_has_origin();
  origin_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationsProto.origin)
}
#if LANG_CXX11
void BackgroundSyncRegistrationsProto::set_origin(::std::string&& value) {
  set_has_origin();
  origin_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:content.BackgroundSyncRegistrationsProto.origin)
}
#endif
void BackgroundSyncRegistrationsProto::set_origin(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_origin();
  origin_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:content.BackgroundSyncRegistrationsProto.origin)
}
void BackgroundSyncRegistrationsProto::set_origin(const char* value, size_t size) {
  set_has_origin();
  origin_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:content.BackgroundSyncRegistrationsProto.origin)
}
::std::string* BackgroundSyncRegistrationsProto::mutable_origin() {
  set_has_origin();
  // @@protoc_insertion_point(field_mutable:content.BackgroundSyncRegistrationsProto.origin)
  return origin_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* BackgroundSyncRegistrationsProto::release_origin() {
  // @@protoc_insertion_point(field_release:content.BackgroundSyncRegistrationsProto.origin)
  clear_has_origin();
  return origin_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void BackgroundSyncRegistrationsProto::set_allocated_origin(::std::string* origin) {
  if (origin != NULL) {
    set_has_origin();
  } else {
    clear_has_origin();
  }
  origin_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), origin);
  // @@protoc_insertion_point(field_set_allocated:content.BackgroundSyncRegistrationsProto.origin)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace content

// @@protoc_insertion_point(global_scope)
