// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: extension_setting_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "extension_setting_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {
class ExtensionSettingSpecificsDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ExtensionSettingSpecifics> {
} _ExtensionSettingSpecifics_default_instance_;

namespace protobuf_extension_5fsetting_5fspecifics_2eproto {

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
  _ExtensionSettingSpecifics_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _ExtensionSettingSpecifics_default_instance_.DefaultConstruct();
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

}  // namespace protobuf_extension_5fsetting_5fspecifics_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ExtensionSettingSpecifics::kExtensionIdFieldNumber;
const int ExtensionSettingSpecifics::kKeyFieldNumber;
const int ExtensionSettingSpecifics::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ExtensionSettingSpecifics::ExtensionSettingSpecifics()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_extension_5fsetting_5fspecifics_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.ExtensionSettingSpecifics)
}
ExtensionSettingSpecifics::ExtensionSettingSpecifics(const ExtensionSettingSpecifics& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  extension_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_extension_id()) {
    extension_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.extension_id_);
  }
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_key()) {
    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_value()) {
    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  // @@protoc_insertion_point(copy_constructor:sync_pb.ExtensionSettingSpecifics)
}

void ExtensionSettingSpecifics::SharedCtor() {
  _cached_size_ = 0;
  extension_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ExtensionSettingSpecifics::~ExtensionSettingSpecifics() {
  // @@protoc_insertion_point(destructor:sync_pb.ExtensionSettingSpecifics)
  SharedDtor();
}

void ExtensionSettingSpecifics::SharedDtor() {
  extension_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ExtensionSettingSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ExtensionSettingSpecifics& ExtensionSettingSpecifics::default_instance() {
  protobuf_extension_5fsetting_5fspecifics_2eproto::InitDefaults();
  return *internal_default_instance();
}

ExtensionSettingSpecifics* ExtensionSettingSpecifics::New(::google::protobuf::Arena* arena) const {
  ExtensionSettingSpecifics* n = new ExtensionSettingSpecifics;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ExtensionSettingSpecifics::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.ExtensionSettingSpecifics)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_extension_id()) {
      GOOGLE_DCHECK(!extension_id_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*extension_id_.UnsafeRawStringPointer())->clear();
    }
    if (has_key()) {
      GOOGLE_DCHECK(!key_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*key_.UnsafeRawStringPointer())->clear();
    }
    if (has_value()) {
      GOOGLE_DCHECK(!value_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*value_.UnsafeRawStringPointer())->clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ExtensionSettingSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.ExtensionSettingSpecifics)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string extension_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_extension_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string key = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string value = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
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
  // @@protoc_insertion_point(parse_success:sync_pb.ExtensionSettingSpecifics)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.ExtensionSettingSpecifics)
  return false;
#undef DO_
}

void ExtensionSettingSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.ExtensionSettingSpecifics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string extension_id = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->extension_id(), output);
  }

  // optional string key = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->key(), output);
  }

  // optional string value = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->value(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.ExtensionSettingSpecifics)
}

size_t ExtensionSettingSpecifics::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.ExtensionSettingSpecifics)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  if (_has_bits_[0 / 32] & 7u) {
    // optional string extension_id = 1;
    if (has_extension_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->extension_id());
    }

    // optional string key = 2;
    if (has_key()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->key());
    }

    // optional string value = 3;
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

void ExtensionSettingSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ExtensionSettingSpecifics*>(&from));
}

void ExtensionSettingSpecifics::MergeFrom(const ExtensionSettingSpecifics& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.ExtensionSettingSpecifics)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_extension_id();
      extension_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.extension_id_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_key();
      key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_value();
      value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
    }
  }
}

void ExtensionSettingSpecifics::CopyFrom(const ExtensionSettingSpecifics& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.ExtensionSettingSpecifics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExtensionSettingSpecifics::IsInitialized() const {
  return true;
}

void ExtensionSettingSpecifics::Swap(ExtensionSettingSpecifics* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ExtensionSettingSpecifics::InternalSwap(ExtensionSettingSpecifics* other) {
  extension_id_.Swap(&other->extension_id_);
  key_.Swap(&other->key_);
  value_.Swap(&other->value_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ExtensionSettingSpecifics::GetTypeName() const {
  return "sync_pb.ExtensionSettingSpecifics";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ExtensionSettingSpecifics

// optional string extension_id = 1;
bool ExtensionSettingSpecifics::has_extension_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ExtensionSettingSpecifics::set_has_extension_id() {
  _has_bits_[0] |= 0x00000001u;
}
void ExtensionSettingSpecifics::clear_has_extension_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void ExtensionSettingSpecifics::clear_extension_id() {
  extension_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_extension_id();
}
const ::std::string& ExtensionSettingSpecifics::extension_id() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExtensionSettingSpecifics.extension_id)
  return extension_id_.GetNoArena();
}
void ExtensionSettingSpecifics::set_extension_id(const ::std::string& value) {
  set_has_extension_id();
  extension_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ExtensionSettingSpecifics.extension_id)
}
#if LANG_CXX11
void ExtensionSettingSpecifics::set_extension_id(::std::string&& value) {
  set_has_extension_id();
  extension_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ExtensionSettingSpecifics.extension_id)
}
#endif
void ExtensionSettingSpecifics::set_extension_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_extension_id();
  extension_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ExtensionSettingSpecifics.extension_id)
}
void ExtensionSettingSpecifics::set_extension_id(const char* value, size_t size) {
  set_has_extension_id();
  extension_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ExtensionSettingSpecifics.extension_id)
}
::std::string* ExtensionSettingSpecifics::mutable_extension_id() {
  set_has_extension_id();
  // @@protoc_insertion_point(field_mutable:sync_pb.ExtensionSettingSpecifics.extension_id)
  return extension_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ExtensionSettingSpecifics::release_extension_id() {
  // @@protoc_insertion_point(field_release:sync_pb.ExtensionSettingSpecifics.extension_id)
  clear_has_extension_id();
  return extension_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ExtensionSettingSpecifics::set_allocated_extension_id(::std::string* extension_id) {
  if (extension_id != NULL) {
    set_has_extension_id();
  } else {
    clear_has_extension_id();
  }
  extension_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), extension_id);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ExtensionSettingSpecifics.extension_id)
}

// optional string key = 2;
bool ExtensionSettingSpecifics::has_key() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ExtensionSettingSpecifics::set_has_key() {
  _has_bits_[0] |= 0x00000002u;
}
void ExtensionSettingSpecifics::clear_has_key() {
  _has_bits_[0] &= ~0x00000002u;
}
void ExtensionSettingSpecifics::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_key();
}
const ::std::string& ExtensionSettingSpecifics::key() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExtensionSettingSpecifics.key)
  return key_.GetNoArena();
}
void ExtensionSettingSpecifics::set_key(const ::std::string& value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ExtensionSettingSpecifics.key)
}
#if LANG_CXX11
void ExtensionSettingSpecifics::set_key(::std::string&& value) {
  set_has_key();
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ExtensionSettingSpecifics.key)
}
#endif
void ExtensionSettingSpecifics::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ExtensionSettingSpecifics.key)
}
void ExtensionSettingSpecifics::set_key(const char* value, size_t size) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ExtensionSettingSpecifics.key)
}
::std::string* ExtensionSettingSpecifics::mutable_key() {
  set_has_key();
  // @@protoc_insertion_point(field_mutable:sync_pb.ExtensionSettingSpecifics.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ExtensionSettingSpecifics::release_key() {
  // @@protoc_insertion_point(field_release:sync_pb.ExtensionSettingSpecifics.key)
  clear_has_key();
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ExtensionSettingSpecifics::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    set_has_key();
  } else {
    clear_has_key();
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ExtensionSettingSpecifics.key)
}

// optional string value = 3;
bool ExtensionSettingSpecifics::has_value() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ExtensionSettingSpecifics::set_has_value() {
  _has_bits_[0] |= 0x00000004u;
}
void ExtensionSettingSpecifics::clear_has_value() {
  _has_bits_[0] &= ~0x00000004u;
}
void ExtensionSettingSpecifics::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_value();
}
const ::std::string& ExtensionSettingSpecifics::value() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExtensionSettingSpecifics.value)
  return value_.GetNoArena();
}
void ExtensionSettingSpecifics::set_value(const ::std::string& value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ExtensionSettingSpecifics.value)
}
#if LANG_CXX11
void ExtensionSettingSpecifics::set_value(::std::string&& value) {
  set_has_value();
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ExtensionSettingSpecifics.value)
}
#endif
void ExtensionSettingSpecifics::set_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ExtensionSettingSpecifics.value)
}
void ExtensionSettingSpecifics::set_value(const char* value, size_t size) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ExtensionSettingSpecifics.value)
}
::std::string* ExtensionSettingSpecifics::mutable_value() {
  set_has_value();
  // @@protoc_insertion_point(field_mutable:sync_pb.ExtensionSettingSpecifics.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ExtensionSettingSpecifics::release_value() {
  // @@protoc_insertion_point(field_release:sync_pb.ExtensionSettingSpecifics.value)
  clear_has_value();
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ExtensionSettingSpecifics::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    set_has_value();
  } else {
    clear_has_value();
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ExtensionSettingSpecifics.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
