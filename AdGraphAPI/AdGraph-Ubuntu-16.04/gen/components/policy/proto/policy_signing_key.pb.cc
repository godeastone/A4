// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: policy_signing_key.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "policy_signing_key.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace enterprise_management {
class PolicySigningKeyDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<PolicySigningKey> {
} _PolicySigningKey_default_instance_;

namespace protobuf_policy_5fsigning_5fkey_2eproto {

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
  _PolicySigningKey_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _PolicySigningKey_default_instance_.DefaultConstruct();
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

}  // namespace protobuf_policy_5fsigning_5fkey_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PolicySigningKey::kSigningKeyFieldNumber;
const int PolicySigningKey::kSigningKeySignatureFieldNumber;
const int PolicySigningKey::kVerificationKeyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PolicySigningKey::PolicySigningKey()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_policy_5fsigning_5fkey_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:enterprise_management.PolicySigningKey)
}
PolicySigningKey::PolicySigningKey(const PolicySigningKey& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  signing_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_signing_key()) {
    signing_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.signing_key_);
  }
  signing_key_signature_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_signing_key_signature()) {
    signing_key_signature_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.signing_key_signature_);
  }
  verification_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_verification_key()) {
    verification_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.verification_key_);
  }
  // @@protoc_insertion_point(copy_constructor:enterprise_management.PolicySigningKey)
}

void PolicySigningKey::SharedCtor() {
  _cached_size_ = 0;
  signing_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  signing_key_signature_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  verification_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PolicySigningKey::~PolicySigningKey() {
  // @@protoc_insertion_point(destructor:enterprise_management.PolicySigningKey)
  SharedDtor();
}

void PolicySigningKey::SharedDtor() {
  signing_key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  signing_key_signature_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  verification_key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PolicySigningKey::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PolicySigningKey& PolicySigningKey::default_instance() {
  protobuf_policy_5fsigning_5fkey_2eproto::InitDefaults();
  return *internal_default_instance();
}

PolicySigningKey* PolicySigningKey::New(::google::protobuf::Arena* arena) const {
  PolicySigningKey* n = new PolicySigningKey;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PolicySigningKey::Clear() {
// @@protoc_insertion_point(message_clear_start:enterprise_management.PolicySigningKey)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_signing_key()) {
      GOOGLE_DCHECK(!signing_key_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*signing_key_.UnsafeRawStringPointer())->clear();
    }
    if (has_signing_key_signature()) {
      GOOGLE_DCHECK(!signing_key_signature_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*signing_key_signature_.UnsafeRawStringPointer())->clear();
    }
    if (has_verification_key()) {
      GOOGLE_DCHECK(!verification_key_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*verification_key_.UnsafeRawStringPointer())->clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PolicySigningKey::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:enterprise_management.PolicySigningKey)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes signing_key = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_signing_key()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes signing_key_signature = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_signing_key_signature()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes verification_key = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_verification_key()));
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
  // @@protoc_insertion_point(parse_success:enterprise_management.PolicySigningKey)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:enterprise_management.PolicySigningKey)
  return false;
#undef DO_
}

void PolicySigningKey::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:enterprise_management.PolicySigningKey)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bytes signing_key = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->signing_key(), output);
  }

  // optional bytes signing_key_signature = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->signing_key_signature(), output);
  }

  // optional bytes verification_key = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->verification_key(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:enterprise_management.PolicySigningKey)
}

size_t PolicySigningKey::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:enterprise_management.PolicySigningKey)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  if (_has_bits_[0 / 32] & 7u) {
    // optional bytes signing_key = 1;
    if (has_signing_key()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->signing_key());
    }

    // optional bytes signing_key_signature = 2;
    if (has_signing_key_signature()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->signing_key_signature());
    }

    // optional bytes verification_key = 3;
    if (has_verification_key()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->verification_key());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PolicySigningKey::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PolicySigningKey*>(&from));
}

void PolicySigningKey::MergeFrom(const PolicySigningKey& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:enterprise_management.PolicySigningKey)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_signing_key();
      signing_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.signing_key_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_signing_key_signature();
      signing_key_signature_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.signing_key_signature_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_verification_key();
      verification_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.verification_key_);
    }
  }
}

void PolicySigningKey::CopyFrom(const PolicySigningKey& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:enterprise_management.PolicySigningKey)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PolicySigningKey::IsInitialized() const {
  return true;
}

void PolicySigningKey::Swap(PolicySigningKey* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PolicySigningKey::InternalSwap(PolicySigningKey* other) {
  signing_key_.Swap(&other->signing_key_);
  signing_key_signature_.Swap(&other->signing_key_signature_);
  verification_key_.Swap(&other->verification_key_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string PolicySigningKey::GetTypeName() const {
  return "enterprise_management.PolicySigningKey";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PolicySigningKey

// optional bytes signing_key = 1;
bool PolicySigningKey::has_signing_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PolicySigningKey::set_has_signing_key() {
  _has_bits_[0] |= 0x00000001u;
}
void PolicySigningKey::clear_has_signing_key() {
  _has_bits_[0] &= ~0x00000001u;
}
void PolicySigningKey::clear_signing_key() {
  signing_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_signing_key();
}
const ::std::string& PolicySigningKey::signing_key() const {
  // @@protoc_insertion_point(field_get:enterprise_management.PolicySigningKey.signing_key)
  return signing_key_.GetNoArena();
}
void PolicySigningKey::set_signing_key(const ::std::string& value) {
  set_has_signing_key();
  signing_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:enterprise_management.PolicySigningKey.signing_key)
}
#if LANG_CXX11
void PolicySigningKey::set_signing_key(::std::string&& value) {
  set_has_signing_key();
  signing_key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:enterprise_management.PolicySigningKey.signing_key)
}
#endif
void PolicySigningKey::set_signing_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_signing_key();
  signing_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:enterprise_management.PolicySigningKey.signing_key)
}
void PolicySigningKey::set_signing_key(const void* value, size_t size) {
  set_has_signing_key();
  signing_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:enterprise_management.PolicySigningKey.signing_key)
}
::std::string* PolicySigningKey::mutable_signing_key() {
  set_has_signing_key();
  // @@protoc_insertion_point(field_mutable:enterprise_management.PolicySigningKey.signing_key)
  return signing_key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PolicySigningKey::release_signing_key() {
  // @@protoc_insertion_point(field_release:enterprise_management.PolicySigningKey.signing_key)
  clear_has_signing_key();
  return signing_key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PolicySigningKey::set_allocated_signing_key(::std::string* signing_key) {
  if (signing_key != NULL) {
    set_has_signing_key();
  } else {
    clear_has_signing_key();
  }
  signing_key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), signing_key);
  // @@protoc_insertion_point(field_set_allocated:enterprise_management.PolicySigningKey.signing_key)
}

// optional bytes signing_key_signature = 2;
bool PolicySigningKey::has_signing_key_signature() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void PolicySigningKey::set_has_signing_key_signature() {
  _has_bits_[0] |= 0x00000002u;
}
void PolicySigningKey::clear_has_signing_key_signature() {
  _has_bits_[0] &= ~0x00000002u;
}
void PolicySigningKey::clear_signing_key_signature() {
  signing_key_signature_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_signing_key_signature();
}
const ::std::string& PolicySigningKey::signing_key_signature() const {
  // @@protoc_insertion_point(field_get:enterprise_management.PolicySigningKey.signing_key_signature)
  return signing_key_signature_.GetNoArena();
}
void PolicySigningKey::set_signing_key_signature(const ::std::string& value) {
  set_has_signing_key_signature();
  signing_key_signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:enterprise_management.PolicySigningKey.signing_key_signature)
}
#if LANG_CXX11
void PolicySigningKey::set_signing_key_signature(::std::string&& value) {
  set_has_signing_key_signature();
  signing_key_signature_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:enterprise_management.PolicySigningKey.signing_key_signature)
}
#endif
void PolicySigningKey::set_signing_key_signature(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_signing_key_signature();
  signing_key_signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:enterprise_management.PolicySigningKey.signing_key_signature)
}
void PolicySigningKey::set_signing_key_signature(const void* value, size_t size) {
  set_has_signing_key_signature();
  signing_key_signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:enterprise_management.PolicySigningKey.signing_key_signature)
}
::std::string* PolicySigningKey::mutable_signing_key_signature() {
  set_has_signing_key_signature();
  // @@protoc_insertion_point(field_mutable:enterprise_management.PolicySigningKey.signing_key_signature)
  return signing_key_signature_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PolicySigningKey::release_signing_key_signature() {
  // @@protoc_insertion_point(field_release:enterprise_management.PolicySigningKey.signing_key_signature)
  clear_has_signing_key_signature();
  return signing_key_signature_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PolicySigningKey::set_allocated_signing_key_signature(::std::string* signing_key_signature) {
  if (signing_key_signature != NULL) {
    set_has_signing_key_signature();
  } else {
    clear_has_signing_key_signature();
  }
  signing_key_signature_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), signing_key_signature);
  // @@protoc_insertion_point(field_set_allocated:enterprise_management.PolicySigningKey.signing_key_signature)
}

// optional bytes verification_key = 3;
bool PolicySigningKey::has_verification_key() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void PolicySigningKey::set_has_verification_key() {
  _has_bits_[0] |= 0x00000004u;
}
void PolicySigningKey::clear_has_verification_key() {
  _has_bits_[0] &= ~0x00000004u;
}
void PolicySigningKey::clear_verification_key() {
  verification_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_verification_key();
}
const ::std::string& PolicySigningKey::verification_key() const {
  // @@protoc_insertion_point(field_get:enterprise_management.PolicySigningKey.verification_key)
  return verification_key_.GetNoArena();
}
void PolicySigningKey::set_verification_key(const ::std::string& value) {
  set_has_verification_key();
  verification_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:enterprise_management.PolicySigningKey.verification_key)
}
#if LANG_CXX11
void PolicySigningKey::set_verification_key(::std::string&& value) {
  set_has_verification_key();
  verification_key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:enterprise_management.PolicySigningKey.verification_key)
}
#endif
void PolicySigningKey::set_verification_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_verification_key();
  verification_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:enterprise_management.PolicySigningKey.verification_key)
}
void PolicySigningKey::set_verification_key(const void* value, size_t size) {
  set_has_verification_key();
  verification_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:enterprise_management.PolicySigningKey.verification_key)
}
::std::string* PolicySigningKey::mutable_verification_key() {
  set_has_verification_key();
  // @@protoc_insertion_point(field_mutable:enterprise_management.PolicySigningKey.verification_key)
  return verification_key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PolicySigningKey::release_verification_key() {
  // @@protoc_insertion_point(field_release:enterprise_management.PolicySigningKey.verification_key)
  clear_has_verification_key();
  return verification_key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PolicySigningKey::set_allocated_verification_key(::std::string* verification_key) {
  if (verification_key != NULL) {
    set_has_verification_key();
  } else {
    clear_has_verification_key();
  }
  verification_key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), verification_key);
  // @@protoc_insertion_point(field_set_allocated:enterprise_management.PolicySigningKey.verification_key)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace enterprise_management

// @@protoc_insertion_point(global_scope)
