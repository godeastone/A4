// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: extension_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "extension_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {
class ExtensionSpecificsDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ExtensionSpecifics> {
} _ExtensionSpecifics_default_instance_;

namespace protobuf_extension_5fspecifics_2eproto {

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
  _ExtensionSpecifics_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _ExtensionSpecifics_default_instance_.DefaultConstruct();
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

}  // namespace protobuf_extension_5fspecifics_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ExtensionSpecifics::kIdFieldNumber;
const int ExtensionSpecifics::kVersionFieldNumber;
const int ExtensionSpecifics::kUpdateUrlFieldNumber;
const int ExtensionSpecifics::kEnabledFieldNumber;
const int ExtensionSpecifics::kIncognitoEnabledFieldNumber;
const int ExtensionSpecifics::kNameFieldNumber;
const int ExtensionSpecifics::kRemoteInstallFieldNumber;
const int ExtensionSpecifics::kInstalledByCustodianFieldNumber;
const int ExtensionSpecifics::kAllUrlsEnabledFieldNumber;
const int ExtensionSpecifics::kDisableReasonsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ExtensionSpecifics::ExtensionSpecifics()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_extension_5fspecifics_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.ExtensionSpecifics)
}
ExtensionSpecifics::ExtensionSpecifics(const ExtensionSpecifics& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_id()) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_version()) {
    version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.version_);
  }
  update_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_update_url()) {
    update_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.update_url_);
  }
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_name()) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  ::memcpy(&enabled_, &from.enabled_,
    static_cast<size_t>(reinterpret_cast<char*>(&disable_reasons_) -
    reinterpret_cast<char*>(&enabled_)) + sizeof(disable_reasons_));
  // @@protoc_insertion_point(copy_constructor:sync_pb.ExtensionSpecifics)
}

void ExtensionSpecifics::SharedCtor() {
  _cached_size_ = 0;
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  update_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&enabled_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&disable_reasons_) -
      reinterpret_cast<char*>(&enabled_)) + sizeof(disable_reasons_));
}

ExtensionSpecifics::~ExtensionSpecifics() {
  // @@protoc_insertion_point(destructor:sync_pb.ExtensionSpecifics)
  SharedDtor();
}

void ExtensionSpecifics::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  update_url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ExtensionSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ExtensionSpecifics& ExtensionSpecifics::default_instance() {
  protobuf_extension_5fspecifics_2eproto::InitDefaults();
  return *internal_default_instance();
}

ExtensionSpecifics* ExtensionSpecifics::New(::google::protobuf::Arena* arena) const {
  ExtensionSpecifics* n = new ExtensionSpecifics;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ExtensionSpecifics::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.ExtensionSpecifics)
  if (_has_bits_[0 / 32] & 15u) {
    if (has_id()) {
      GOOGLE_DCHECK(!id_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*id_.UnsafeRawStringPointer())->clear();
    }
    if (has_version()) {
      GOOGLE_DCHECK(!version_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*version_.UnsafeRawStringPointer())->clear();
    }
    if (has_update_url()) {
      GOOGLE_DCHECK(!update_url_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*update_url_.UnsafeRawStringPointer())->clear();
    }
    if (has_name()) {
      GOOGLE_DCHECK(!name_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*name_.UnsafeRawStringPointer())->clear();
    }
  }
  if (_has_bits_[0 / 32] & 240u) {
    ::memset(&enabled_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&installed_by_custodian_) -
        reinterpret_cast<char*>(&enabled_)) + sizeof(installed_by_custodian_));
  }
  if (_has_bits_[8 / 32] & 768u) {
    ::memset(&all_urls_enabled_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&disable_reasons_) -
        reinterpret_cast<char*>(&all_urls_enabled_)) + sizeof(disable_reasons_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ExtensionSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.ExtensionSpecifics)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string version = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_version()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string update_url = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_update_url()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool enabled = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u)) {
          set_has_enabled();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &enabled_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool incognito_enabled = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u)) {
          set_has_incognito_enabled();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &incognito_enabled_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string name = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool remote_install = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u)) {
          set_has_remote_install();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &remote_install_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool installed_by_custodian = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u)) {
          set_has_installed_by_custodian();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &installed_by_custodian_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool all_urls_enabled = 9 [deprecated = true];
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u)) {
          set_has_all_urls_enabled();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &all_urls_enabled_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 disable_reasons = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u)) {
          set_has_disable_reasons();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &disable_reasons_)));
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
  // @@protoc_insertion_point(parse_success:sync_pb.ExtensionSpecifics)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.ExtensionSpecifics)
  return false;
#undef DO_
}

void ExtensionSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.ExtensionSpecifics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string id = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  // optional string version = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->version(), output);
  }

  // optional string update_url = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->update_url(), output);
  }

  // optional bool enabled = 4;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->enabled(), output);
  }

  // optional bool incognito_enabled = 5;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->incognito_enabled(), output);
  }

  // optional string name = 6;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->name(), output);
  }

  // optional bool remote_install = 7;
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->remote_install(), output);
  }

  // optional bool installed_by_custodian = 8;
  if (cached_has_bits & 0x00000080u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->installed_by_custodian(), output);
  }

  // optional bool all_urls_enabled = 9 [deprecated = true];
  if (cached_has_bits & 0x00000100u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(9, this->all_urls_enabled(), output);
  }

  // optional int32 disable_reasons = 10;
  if (cached_has_bits & 0x00000200u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->disable_reasons(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.ExtensionSpecifics)
}

size_t ExtensionSpecifics::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.ExtensionSpecifics)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  if (_has_bits_[0 / 32] & 255u) {
    // optional string id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->id());
    }

    // optional string version = 2;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->version());
    }

    // optional string update_url = 3;
    if (has_update_url()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->update_url());
    }

    // optional string name = 6;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional bool enabled = 4;
    if (has_enabled()) {
      total_size += 1 + 1;
    }

    // optional bool incognito_enabled = 5;
    if (has_incognito_enabled()) {
      total_size += 1 + 1;
    }

    // optional bool remote_install = 7;
    if (has_remote_install()) {
      total_size += 1 + 1;
    }

    // optional bool installed_by_custodian = 8;
    if (has_installed_by_custodian()) {
      total_size += 1 + 1;
    }

  }
  if (_has_bits_[8 / 32] & 768u) {
    // optional bool all_urls_enabled = 9 [deprecated = true];
    if (has_all_urls_enabled()) {
      total_size += 1 + 1;
    }

    // optional int32 disable_reasons = 10;
    if (has_disable_reasons()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->disable_reasons());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ExtensionSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ExtensionSpecifics*>(&from));
}

void ExtensionSpecifics::MergeFrom(const ExtensionSpecifics& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.ExtensionSpecifics)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 255u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_id();
      id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_version();
      version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.version_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_update_url();
      update_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.update_url_);
    }
    if (cached_has_bits & 0x00000008u) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000010u) {
      enabled_ = from.enabled_;
    }
    if (cached_has_bits & 0x00000020u) {
      incognito_enabled_ = from.incognito_enabled_;
    }
    if (cached_has_bits & 0x00000040u) {
      remote_install_ = from.remote_install_;
    }
    if (cached_has_bits & 0x00000080u) {
      installed_by_custodian_ = from.installed_by_custodian_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 768u) {
    if (cached_has_bits & 0x00000100u) {
      all_urls_enabled_ = from.all_urls_enabled_;
    }
    if (cached_has_bits & 0x00000200u) {
      disable_reasons_ = from.disable_reasons_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ExtensionSpecifics::CopyFrom(const ExtensionSpecifics& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.ExtensionSpecifics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExtensionSpecifics::IsInitialized() const {
  return true;
}

void ExtensionSpecifics::Swap(ExtensionSpecifics* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ExtensionSpecifics::InternalSwap(ExtensionSpecifics* other) {
  id_.Swap(&other->id_);
  version_.Swap(&other->version_);
  update_url_.Swap(&other->update_url_);
  name_.Swap(&other->name_);
  std::swap(enabled_, other->enabled_);
  std::swap(incognito_enabled_, other->incognito_enabled_);
  std::swap(remote_install_, other->remote_install_);
  std::swap(installed_by_custodian_, other->installed_by_custodian_);
  std::swap(all_urls_enabled_, other->all_urls_enabled_);
  std::swap(disable_reasons_, other->disable_reasons_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ExtensionSpecifics::GetTypeName() const {
  return "sync_pb.ExtensionSpecifics";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ExtensionSpecifics

// optional string id = 1;
bool ExtensionSpecifics::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ExtensionSpecifics::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
void ExtensionSpecifics::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void ExtensionSpecifics::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
const ::std::string& ExtensionSpecifics::id() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExtensionSpecifics.id)
  return id_.GetNoArena();
}
void ExtensionSpecifics::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ExtensionSpecifics.id)
}
#if LANG_CXX11
void ExtensionSpecifics::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ExtensionSpecifics.id)
}
#endif
void ExtensionSpecifics::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ExtensionSpecifics.id)
}
void ExtensionSpecifics::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ExtensionSpecifics.id)
}
::std::string* ExtensionSpecifics::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:sync_pb.ExtensionSpecifics.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ExtensionSpecifics::release_id() {
  // @@protoc_insertion_point(field_release:sync_pb.ExtensionSpecifics.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ExtensionSpecifics::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ExtensionSpecifics.id)
}

// optional string version = 2;
bool ExtensionSpecifics::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ExtensionSpecifics::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
void ExtensionSpecifics::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
void ExtensionSpecifics::clear_version() {
  version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_version();
}
const ::std::string& ExtensionSpecifics::version() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExtensionSpecifics.version)
  return version_.GetNoArena();
}
void ExtensionSpecifics::set_version(const ::std::string& value) {
  set_has_version();
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ExtensionSpecifics.version)
}
#if LANG_CXX11
void ExtensionSpecifics::set_version(::std::string&& value) {
  set_has_version();
  version_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ExtensionSpecifics.version)
}
#endif
void ExtensionSpecifics::set_version(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_version();
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ExtensionSpecifics.version)
}
void ExtensionSpecifics::set_version(const char* value, size_t size) {
  set_has_version();
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ExtensionSpecifics.version)
}
::std::string* ExtensionSpecifics::mutable_version() {
  set_has_version();
  // @@protoc_insertion_point(field_mutable:sync_pb.ExtensionSpecifics.version)
  return version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ExtensionSpecifics::release_version() {
  // @@protoc_insertion_point(field_release:sync_pb.ExtensionSpecifics.version)
  clear_has_version();
  return version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ExtensionSpecifics::set_allocated_version(::std::string* version) {
  if (version != NULL) {
    set_has_version();
  } else {
    clear_has_version();
  }
  version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), version);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ExtensionSpecifics.version)
}

// optional string update_url = 3;
bool ExtensionSpecifics::has_update_url() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ExtensionSpecifics::set_has_update_url() {
  _has_bits_[0] |= 0x00000004u;
}
void ExtensionSpecifics::clear_has_update_url() {
  _has_bits_[0] &= ~0x00000004u;
}
void ExtensionSpecifics::clear_update_url() {
  update_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_update_url();
}
const ::std::string& ExtensionSpecifics::update_url() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExtensionSpecifics.update_url)
  return update_url_.GetNoArena();
}
void ExtensionSpecifics::set_update_url(const ::std::string& value) {
  set_has_update_url();
  update_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ExtensionSpecifics.update_url)
}
#if LANG_CXX11
void ExtensionSpecifics::set_update_url(::std::string&& value) {
  set_has_update_url();
  update_url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ExtensionSpecifics.update_url)
}
#endif
void ExtensionSpecifics::set_update_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_update_url();
  update_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ExtensionSpecifics.update_url)
}
void ExtensionSpecifics::set_update_url(const char* value, size_t size) {
  set_has_update_url();
  update_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ExtensionSpecifics.update_url)
}
::std::string* ExtensionSpecifics::mutable_update_url() {
  set_has_update_url();
  // @@protoc_insertion_point(field_mutable:sync_pb.ExtensionSpecifics.update_url)
  return update_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ExtensionSpecifics::release_update_url() {
  // @@protoc_insertion_point(field_release:sync_pb.ExtensionSpecifics.update_url)
  clear_has_update_url();
  return update_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ExtensionSpecifics::set_allocated_update_url(::std::string* update_url) {
  if (update_url != NULL) {
    set_has_update_url();
  } else {
    clear_has_update_url();
  }
  update_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), update_url);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ExtensionSpecifics.update_url)
}

// optional bool enabled = 4;
bool ExtensionSpecifics::has_enabled() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void ExtensionSpecifics::set_has_enabled() {
  _has_bits_[0] |= 0x00000010u;
}
void ExtensionSpecifics::clear_has_enabled() {
  _has_bits_[0] &= ~0x00000010u;
}
void ExtensionSpecifics::clear_enabled() {
  enabled_ = false;
  clear_has_enabled();
}
bool ExtensionSpecifics::enabled() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExtensionSpecifics.enabled)
  return enabled_;
}
void ExtensionSpecifics::set_enabled(bool value) {
  set_has_enabled();
  enabled_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ExtensionSpecifics.enabled)
}

// optional bool incognito_enabled = 5;
bool ExtensionSpecifics::has_incognito_enabled() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void ExtensionSpecifics::set_has_incognito_enabled() {
  _has_bits_[0] |= 0x00000020u;
}
void ExtensionSpecifics::clear_has_incognito_enabled() {
  _has_bits_[0] &= ~0x00000020u;
}
void ExtensionSpecifics::clear_incognito_enabled() {
  incognito_enabled_ = false;
  clear_has_incognito_enabled();
}
bool ExtensionSpecifics::incognito_enabled() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExtensionSpecifics.incognito_enabled)
  return incognito_enabled_;
}
void ExtensionSpecifics::set_incognito_enabled(bool value) {
  set_has_incognito_enabled();
  incognito_enabled_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ExtensionSpecifics.incognito_enabled)
}

// optional string name = 6;
bool ExtensionSpecifics::has_name() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void ExtensionSpecifics::set_has_name() {
  _has_bits_[0] |= 0x00000008u;
}
void ExtensionSpecifics::clear_has_name() {
  _has_bits_[0] &= ~0x00000008u;
}
void ExtensionSpecifics::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
const ::std::string& ExtensionSpecifics::name() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExtensionSpecifics.name)
  return name_.GetNoArena();
}
void ExtensionSpecifics::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ExtensionSpecifics.name)
}
#if LANG_CXX11
void ExtensionSpecifics::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ExtensionSpecifics.name)
}
#endif
void ExtensionSpecifics::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ExtensionSpecifics.name)
}
void ExtensionSpecifics::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ExtensionSpecifics.name)
}
::std::string* ExtensionSpecifics::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:sync_pb.ExtensionSpecifics.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ExtensionSpecifics::release_name() {
  // @@protoc_insertion_point(field_release:sync_pb.ExtensionSpecifics.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ExtensionSpecifics::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ExtensionSpecifics.name)
}

// optional bool remote_install = 7;
bool ExtensionSpecifics::has_remote_install() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void ExtensionSpecifics::set_has_remote_install() {
  _has_bits_[0] |= 0x00000040u;
}
void ExtensionSpecifics::clear_has_remote_install() {
  _has_bits_[0] &= ~0x00000040u;
}
void ExtensionSpecifics::clear_remote_install() {
  remote_install_ = false;
  clear_has_remote_install();
}
bool ExtensionSpecifics::remote_install() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExtensionSpecifics.remote_install)
  return remote_install_;
}
void ExtensionSpecifics::set_remote_install(bool value) {
  set_has_remote_install();
  remote_install_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ExtensionSpecifics.remote_install)
}

// optional bool installed_by_custodian = 8;
bool ExtensionSpecifics::has_installed_by_custodian() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
void ExtensionSpecifics::set_has_installed_by_custodian() {
  _has_bits_[0] |= 0x00000080u;
}
void ExtensionSpecifics::clear_has_installed_by_custodian() {
  _has_bits_[0] &= ~0x00000080u;
}
void ExtensionSpecifics::clear_installed_by_custodian() {
  installed_by_custodian_ = false;
  clear_has_installed_by_custodian();
}
bool ExtensionSpecifics::installed_by_custodian() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExtensionSpecifics.installed_by_custodian)
  return installed_by_custodian_;
}
void ExtensionSpecifics::set_installed_by_custodian(bool value) {
  set_has_installed_by_custodian();
  installed_by_custodian_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ExtensionSpecifics.installed_by_custodian)
}

// optional bool all_urls_enabled = 9 [deprecated = true];
bool ExtensionSpecifics::has_all_urls_enabled() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
void ExtensionSpecifics::set_has_all_urls_enabled() {
  _has_bits_[0] |= 0x00000100u;
}
void ExtensionSpecifics::clear_has_all_urls_enabled() {
  _has_bits_[0] &= ~0x00000100u;
}
void ExtensionSpecifics::clear_all_urls_enabled() {
  all_urls_enabled_ = false;
  clear_has_all_urls_enabled();
}
bool ExtensionSpecifics::all_urls_enabled() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExtensionSpecifics.all_urls_enabled)
  return all_urls_enabled_;
}
void ExtensionSpecifics::set_all_urls_enabled(bool value) {
  set_has_all_urls_enabled();
  all_urls_enabled_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ExtensionSpecifics.all_urls_enabled)
}

// optional int32 disable_reasons = 10;
bool ExtensionSpecifics::has_disable_reasons() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
void ExtensionSpecifics::set_has_disable_reasons() {
  _has_bits_[0] |= 0x00000200u;
}
void ExtensionSpecifics::clear_has_disable_reasons() {
  _has_bits_[0] &= ~0x00000200u;
}
void ExtensionSpecifics::clear_disable_reasons() {
  disable_reasons_ = 0;
  clear_has_disable_reasons();
}
::google::protobuf::int32 ExtensionSpecifics::disable_reasons() const {
  // @@protoc_insertion_point(field_get:sync_pb.ExtensionSpecifics.disable_reasons)
  return disable_reasons_;
}
void ExtensionSpecifics::set_disable_reasons(::google::protobuf::int32 value) {
  set_has_disable_reasons();
  disable_reasons_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ExtensionSpecifics.disable_reasons)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
