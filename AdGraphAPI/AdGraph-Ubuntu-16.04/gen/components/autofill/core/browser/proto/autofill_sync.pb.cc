// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: autofill_sync.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "autofill_sync.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace autofill {
class AutofillSyncStorageKeyDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<AutofillSyncStorageKey> {
} _AutofillSyncStorageKey_default_instance_;

namespace protobuf_autofill_5fsync_2eproto {

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
  _AutofillSyncStorageKey_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _AutofillSyncStorageKey_default_instance_.DefaultConstruct();
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

}  // namespace protobuf_autofill_5fsync_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AutofillSyncStorageKey::kNameFieldNumber;
const int AutofillSyncStorageKey::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AutofillSyncStorageKey::AutofillSyncStorageKey()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_autofill_5fsync_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:autofill.AutofillSyncStorageKey)
}
AutofillSyncStorageKey::AutofillSyncStorageKey(const AutofillSyncStorageKey& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_name()) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_value()) {
    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  // @@protoc_insertion_point(copy_constructor:autofill.AutofillSyncStorageKey)
}

void AutofillSyncStorageKey::SharedCtor() {
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

AutofillSyncStorageKey::~AutofillSyncStorageKey() {
  // @@protoc_insertion_point(destructor:autofill.AutofillSyncStorageKey)
  SharedDtor();
}

void AutofillSyncStorageKey::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void AutofillSyncStorageKey::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AutofillSyncStorageKey& AutofillSyncStorageKey::default_instance() {
  protobuf_autofill_5fsync_2eproto::InitDefaults();
  return *internal_default_instance();
}

AutofillSyncStorageKey* AutofillSyncStorageKey::New(::google::protobuf::Arena* arena) const {
  AutofillSyncStorageKey* n = new AutofillSyncStorageKey;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AutofillSyncStorageKey::Clear() {
// @@protoc_insertion_point(message_clear_start:autofill.AutofillSyncStorageKey)
  if (_has_bits_[0 / 32] & 3u) {
    if (has_name()) {
      GOOGLE_DCHECK(!name_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*name_.UnsafeRawStringPointer())->clear();
    }
    if (has_value()) {
      GOOGLE_DCHECK(!value_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*value_.UnsafeRawStringPointer())->clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool AutofillSyncStorageKey::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:autofill.AutofillSyncStorageKey)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string value = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
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
  // @@protoc_insertion_point(parse_success:autofill.AutofillSyncStorageKey)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:autofill.AutofillSyncStorageKey)
  return false;
#undef DO_
}

void AutofillSyncStorageKey::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:autofill.AutofillSyncStorageKey)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional string value = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->value(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:autofill.AutofillSyncStorageKey)
}

size_t AutofillSyncStorageKey::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:autofill.AutofillSyncStorageKey)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  if (_has_bits_[0 / 32] & 3u) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional string value = 2;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->value());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AutofillSyncStorageKey::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AutofillSyncStorageKey*>(&from));
}

void AutofillSyncStorageKey::MergeFrom(const AutofillSyncStorageKey& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:autofill.AutofillSyncStorageKey)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_value();
      value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
    }
  }
}

void AutofillSyncStorageKey::CopyFrom(const AutofillSyncStorageKey& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:autofill.AutofillSyncStorageKey)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AutofillSyncStorageKey::IsInitialized() const {
  return true;
}

void AutofillSyncStorageKey::Swap(AutofillSyncStorageKey* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AutofillSyncStorageKey::InternalSwap(AutofillSyncStorageKey* other) {
  name_.Swap(&other->name_);
  value_.Swap(&other->value_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string AutofillSyncStorageKey::GetTypeName() const {
  return "autofill.AutofillSyncStorageKey";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AutofillSyncStorageKey

// optional string name = 1;
bool AutofillSyncStorageKey::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void AutofillSyncStorageKey::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
void AutofillSyncStorageKey::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void AutofillSyncStorageKey::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
const ::std::string& AutofillSyncStorageKey::name() const {
  // @@protoc_insertion_point(field_get:autofill.AutofillSyncStorageKey.name)
  return name_.GetNoArena();
}
void AutofillSyncStorageKey::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:autofill.AutofillSyncStorageKey.name)
}
#if LANG_CXX11
void AutofillSyncStorageKey::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:autofill.AutofillSyncStorageKey.name)
}
#endif
void AutofillSyncStorageKey::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:autofill.AutofillSyncStorageKey.name)
}
void AutofillSyncStorageKey::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:autofill.AutofillSyncStorageKey.name)
}
::std::string* AutofillSyncStorageKey::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:autofill.AutofillSyncStorageKey.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* AutofillSyncStorageKey::release_name() {
  // @@protoc_insertion_point(field_release:autofill.AutofillSyncStorageKey.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void AutofillSyncStorageKey::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:autofill.AutofillSyncStorageKey.name)
}

// optional string value = 2;
bool AutofillSyncStorageKey::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void AutofillSyncStorageKey::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
void AutofillSyncStorageKey::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
void AutofillSyncStorageKey::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_value();
}
const ::std::string& AutofillSyncStorageKey::value() const {
  // @@protoc_insertion_point(field_get:autofill.AutofillSyncStorageKey.value)
  return value_.GetNoArena();
}
void AutofillSyncStorageKey::set_value(const ::std::string& value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:autofill.AutofillSyncStorageKey.value)
}
#if LANG_CXX11
void AutofillSyncStorageKey::set_value(::std::string&& value) {
  set_has_value();
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:autofill.AutofillSyncStorageKey.value)
}
#endif
void AutofillSyncStorageKey::set_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:autofill.AutofillSyncStorageKey.value)
}
void AutofillSyncStorageKey::set_value(const char* value, size_t size) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:autofill.AutofillSyncStorageKey.value)
}
::std::string* AutofillSyncStorageKey::mutable_value() {
  set_has_value();
  // @@protoc_insertion_point(field_mutable:autofill.AutofillSyncStorageKey.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* AutofillSyncStorageKey::release_value() {
  // @@protoc_insertion_point(field_release:autofill.AutofillSyncStorageKey.value)
  clear_has_value();
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void AutofillSyncStorageKey::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    set_has_value();
  } else {
    clear_has_value();
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:autofill.AutofillSyncStorageKey.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace autofill

// @@protoc_insertion_point(global_scope)
