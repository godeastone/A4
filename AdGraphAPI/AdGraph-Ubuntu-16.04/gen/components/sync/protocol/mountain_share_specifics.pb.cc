// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mountain_share_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "mountain_share_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {
class MountainShareSpecificsDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<MountainShareSpecifics> {
} _MountainShareSpecifics_default_instance_;

namespace protobuf_mountain_5fshare_5fspecifics_2eproto {

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
  _MountainShareSpecifics_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _MountainShareSpecifics_default_instance_.DefaultConstruct();
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

}  // namespace protobuf_mountain_5fshare_5fspecifics_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MountainShareSpecifics::kIdFieldNumber;
const int MountainShareSpecifics::kUrlFieldNumber;
const int MountainShareSpecifics::kFaviconFieldNumber;
const int MountainShareSpecifics::kTitleFieldNumber;
const int MountainShareSpecifics::kCreationTimeMsFieldNumber;
const int MountainShareSpecifics::kIconUrlFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MountainShareSpecifics::MountainShareSpecifics()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_mountain_5fshare_5fspecifics_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.MountainShareSpecifics)
}
MountainShareSpecifics::MountainShareSpecifics(const MountainShareSpecifics& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_id()) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_url()) {
    url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.url_);
  }
  favicon_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_favicon()) {
    favicon_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.favicon_);
  }
  title_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_title()) {
    title_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.title_);
  }
  icon_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_icon_url()) {
    icon_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.icon_url_);
  }
  creation_time_ms_ = from.creation_time_ms_;
  // @@protoc_insertion_point(copy_constructor:sync_pb.MountainShareSpecifics)
}

void MountainShareSpecifics::SharedCtor() {
  _cached_size_ = 0;
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  favicon_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  title_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  icon_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  creation_time_ms_ = GOOGLE_LONGLONG(0);
}

MountainShareSpecifics::~MountainShareSpecifics() {
  // @@protoc_insertion_point(destructor:sync_pb.MountainShareSpecifics)
  SharedDtor();
}

void MountainShareSpecifics::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  favicon_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  title_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  icon_url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void MountainShareSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MountainShareSpecifics& MountainShareSpecifics::default_instance() {
  protobuf_mountain_5fshare_5fspecifics_2eproto::InitDefaults();
  return *internal_default_instance();
}

MountainShareSpecifics* MountainShareSpecifics::New(::google::protobuf::Arena* arena) const {
  MountainShareSpecifics* n = new MountainShareSpecifics;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MountainShareSpecifics::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.MountainShareSpecifics)
  if (_has_bits_[0 / 32] & 31u) {
    if (has_id()) {
      GOOGLE_DCHECK(!id_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*id_.UnsafeRawStringPointer())->clear();
    }
    if (has_url()) {
      GOOGLE_DCHECK(!url_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*url_.UnsafeRawStringPointer())->clear();
    }
    if (has_favicon()) {
      GOOGLE_DCHECK(!favicon_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*favicon_.UnsafeRawStringPointer())->clear();
    }
    if (has_title()) {
      GOOGLE_DCHECK(!title_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*title_.UnsafeRawStringPointer())->clear();
    }
    if (has_icon_url()) {
      GOOGLE_DCHECK(!icon_url_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*icon_url_.UnsafeRawStringPointer())->clear();
    }
  }
  creation_time_ms_ = GOOGLE_LONGLONG(0);
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool MountainShareSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.MountainShareSpecifics)
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

      // optional string url = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_url()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes favicon = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_favicon()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string title = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_title()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int64 creation_time_ms = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u)) {
          set_has_creation_time_ms();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &creation_time_ms_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string icon_url = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_icon_url()));
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
  // @@protoc_insertion_point(parse_success:sync_pb.MountainShareSpecifics)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.MountainShareSpecifics)
  return false;
#undef DO_
}

void MountainShareSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.MountainShareSpecifics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string id = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  // optional string url = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->url(), output);
  }

  // optional bytes favicon = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->favicon(), output);
  }

  // optional string title = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->title(), output);
  }

  // optional int64 creation_time_ms = 5;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->creation_time_ms(), output);
  }

  // optional string icon_url = 6;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->icon_url(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.MountainShareSpecifics)
}

size_t MountainShareSpecifics::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.MountainShareSpecifics)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  if (_has_bits_[0 / 32] & 63u) {
    // optional string id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->id());
    }

    // optional string url = 2;
    if (has_url()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->url());
    }

    // optional bytes favicon = 3;
    if (has_favicon()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->favicon());
    }

    // optional string title = 4;
    if (has_title()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->title());
    }

    // optional string icon_url = 6;
    if (has_icon_url()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->icon_url());
    }

    // optional int64 creation_time_ms = 5;
    if (has_creation_time_ms()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->creation_time_ms());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MountainShareSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MountainShareSpecifics*>(&from));
}

void MountainShareSpecifics::MergeFrom(const MountainShareSpecifics& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.MountainShareSpecifics)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 63u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_id();
      id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_url();
      url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.url_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_favicon();
      favicon_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.favicon_);
    }
    if (cached_has_bits & 0x00000008u) {
      set_has_title();
      title_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.title_);
    }
    if (cached_has_bits & 0x00000010u) {
      set_has_icon_url();
      icon_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.icon_url_);
    }
    if (cached_has_bits & 0x00000020u) {
      creation_time_ms_ = from.creation_time_ms_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void MountainShareSpecifics::CopyFrom(const MountainShareSpecifics& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.MountainShareSpecifics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MountainShareSpecifics::IsInitialized() const {
  return true;
}

void MountainShareSpecifics::Swap(MountainShareSpecifics* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MountainShareSpecifics::InternalSwap(MountainShareSpecifics* other) {
  id_.Swap(&other->id_);
  url_.Swap(&other->url_);
  favicon_.Swap(&other->favicon_);
  title_.Swap(&other->title_);
  icon_url_.Swap(&other->icon_url_);
  std::swap(creation_time_ms_, other->creation_time_ms_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string MountainShareSpecifics::GetTypeName() const {
  return "sync_pb.MountainShareSpecifics";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MountainShareSpecifics

// optional string id = 1;
bool MountainShareSpecifics::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MountainShareSpecifics::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
void MountainShareSpecifics::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void MountainShareSpecifics::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
const ::std::string& MountainShareSpecifics::id() const {
  // @@protoc_insertion_point(field_get:sync_pb.MountainShareSpecifics.id)
  return id_.GetNoArena();
}
void MountainShareSpecifics::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.MountainShareSpecifics.id)
}
#if LANG_CXX11
void MountainShareSpecifics::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.MountainShareSpecifics.id)
}
#endif
void MountainShareSpecifics::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.MountainShareSpecifics.id)
}
void MountainShareSpecifics::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.MountainShareSpecifics.id)
}
::std::string* MountainShareSpecifics::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:sync_pb.MountainShareSpecifics.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* MountainShareSpecifics::release_id() {
  // @@protoc_insertion_point(field_release:sync_pb.MountainShareSpecifics.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MountainShareSpecifics::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.MountainShareSpecifics.id)
}

// optional string url = 2;
bool MountainShareSpecifics::has_url() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void MountainShareSpecifics::set_has_url() {
  _has_bits_[0] |= 0x00000002u;
}
void MountainShareSpecifics::clear_has_url() {
  _has_bits_[0] &= ~0x00000002u;
}
void MountainShareSpecifics::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_url();
}
const ::std::string& MountainShareSpecifics::url() const {
  // @@protoc_insertion_point(field_get:sync_pb.MountainShareSpecifics.url)
  return url_.GetNoArena();
}
void MountainShareSpecifics::set_url(const ::std::string& value) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.MountainShareSpecifics.url)
}
#if LANG_CXX11
void MountainShareSpecifics::set_url(::std::string&& value) {
  set_has_url();
  url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.MountainShareSpecifics.url)
}
#endif
void MountainShareSpecifics::set_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.MountainShareSpecifics.url)
}
void MountainShareSpecifics::set_url(const char* value, size_t size) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.MountainShareSpecifics.url)
}
::std::string* MountainShareSpecifics::mutable_url() {
  set_has_url();
  // @@protoc_insertion_point(field_mutable:sync_pb.MountainShareSpecifics.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* MountainShareSpecifics::release_url() {
  // @@protoc_insertion_point(field_release:sync_pb.MountainShareSpecifics.url)
  clear_has_url();
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MountainShareSpecifics::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    set_has_url();
  } else {
    clear_has_url();
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.MountainShareSpecifics.url)
}

// optional bytes favicon = 3;
bool MountainShareSpecifics::has_favicon() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void MountainShareSpecifics::set_has_favicon() {
  _has_bits_[0] |= 0x00000004u;
}
void MountainShareSpecifics::clear_has_favicon() {
  _has_bits_[0] &= ~0x00000004u;
}
void MountainShareSpecifics::clear_favicon() {
  favicon_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_favicon();
}
const ::std::string& MountainShareSpecifics::favicon() const {
  // @@protoc_insertion_point(field_get:sync_pb.MountainShareSpecifics.favicon)
  return favicon_.GetNoArena();
}
void MountainShareSpecifics::set_favicon(const ::std::string& value) {
  set_has_favicon();
  favicon_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.MountainShareSpecifics.favicon)
}
#if LANG_CXX11
void MountainShareSpecifics::set_favicon(::std::string&& value) {
  set_has_favicon();
  favicon_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.MountainShareSpecifics.favicon)
}
#endif
void MountainShareSpecifics::set_favicon(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_favicon();
  favicon_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.MountainShareSpecifics.favicon)
}
void MountainShareSpecifics::set_favicon(const void* value, size_t size) {
  set_has_favicon();
  favicon_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.MountainShareSpecifics.favicon)
}
::std::string* MountainShareSpecifics::mutable_favicon() {
  set_has_favicon();
  // @@protoc_insertion_point(field_mutable:sync_pb.MountainShareSpecifics.favicon)
  return favicon_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* MountainShareSpecifics::release_favicon() {
  // @@protoc_insertion_point(field_release:sync_pb.MountainShareSpecifics.favicon)
  clear_has_favicon();
  return favicon_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MountainShareSpecifics::set_allocated_favicon(::std::string* favicon) {
  if (favicon != NULL) {
    set_has_favicon();
  } else {
    clear_has_favicon();
  }
  favicon_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), favicon);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.MountainShareSpecifics.favicon)
}

// optional string title = 4;
bool MountainShareSpecifics::has_title() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void MountainShareSpecifics::set_has_title() {
  _has_bits_[0] |= 0x00000008u;
}
void MountainShareSpecifics::clear_has_title() {
  _has_bits_[0] &= ~0x00000008u;
}
void MountainShareSpecifics::clear_title() {
  title_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_title();
}
const ::std::string& MountainShareSpecifics::title() const {
  // @@protoc_insertion_point(field_get:sync_pb.MountainShareSpecifics.title)
  return title_.GetNoArena();
}
void MountainShareSpecifics::set_title(const ::std::string& value) {
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.MountainShareSpecifics.title)
}
#if LANG_CXX11
void MountainShareSpecifics::set_title(::std::string&& value) {
  set_has_title();
  title_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.MountainShareSpecifics.title)
}
#endif
void MountainShareSpecifics::set_title(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.MountainShareSpecifics.title)
}
void MountainShareSpecifics::set_title(const char* value, size_t size) {
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.MountainShareSpecifics.title)
}
::std::string* MountainShareSpecifics::mutable_title() {
  set_has_title();
  // @@protoc_insertion_point(field_mutable:sync_pb.MountainShareSpecifics.title)
  return title_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* MountainShareSpecifics::release_title() {
  // @@protoc_insertion_point(field_release:sync_pb.MountainShareSpecifics.title)
  clear_has_title();
  return title_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MountainShareSpecifics::set_allocated_title(::std::string* title) {
  if (title != NULL) {
    set_has_title();
  } else {
    clear_has_title();
  }
  title_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), title);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.MountainShareSpecifics.title)
}

// optional int64 creation_time_ms = 5;
bool MountainShareSpecifics::has_creation_time_ms() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void MountainShareSpecifics::set_has_creation_time_ms() {
  _has_bits_[0] |= 0x00000020u;
}
void MountainShareSpecifics::clear_has_creation_time_ms() {
  _has_bits_[0] &= ~0x00000020u;
}
void MountainShareSpecifics::clear_creation_time_ms() {
  creation_time_ms_ = GOOGLE_LONGLONG(0);
  clear_has_creation_time_ms();
}
::google::protobuf::int64 MountainShareSpecifics::creation_time_ms() const {
  // @@protoc_insertion_point(field_get:sync_pb.MountainShareSpecifics.creation_time_ms)
  return creation_time_ms_;
}
void MountainShareSpecifics::set_creation_time_ms(::google::protobuf::int64 value) {
  set_has_creation_time_ms();
  creation_time_ms_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.MountainShareSpecifics.creation_time_ms)
}

// optional string icon_url = 6;
bool MountainShareSpecifics::has_icon_url() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void MountainShareSpecifics::set_has_icon_url() {
  _has_bits_[0] |= 0x00000010u;
}
void MountainShareSpecifics::clear_has_icon_url() {
  _has_bits_[0] &= ~0x00000010u;
}
void MountainShareSpecifics::clear_icon_url() {
  icon_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_icon_url();
}
const ::std::string& MountainShareSpecifics::icon_url() const {
  // @@protoc_insertion_point(field_get:sync_pb.MountainShareSpecifics.icon_url)
  return icon_url_.GetNoArena();
}
void MountainShareSpecifics::set_icon_url(const ::std::string& value) {
  set_has_icon_url();
  icon_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.MountainShareSpecifics.icon_url)
}
#if LANG_CXX11
void MountainShareSpecifics::set_icon_url(::std::string&& value) {
  set_has_icon_url();
  icon_url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.MountainShareSpecifics.icon_url)
}
#endif
void MountainShareSpecifics::set_icon_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_icon_url();
  icon_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.MountainShareSpecifics.icon_url)
}
void MountainShareSpecifics::set_icon_url(const char* value, size_t size) {
  set_has_icon_url();
  icon_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.MountainShareSpecifics.icon_url)
}
::std::string* MountainShareSpecifics::mutable_icon_url() {
  set_has_icon_url();
  // @@protoc_insertion_point(field_mutable:sync_pb.MountainShareSpecifics.icon_url)
  return icon_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* MountainShareSpecifics::release_icon_url() {
  // @@protoc_insertion_point(field_release:sync_pb.MountainShareSpecifics.icon_url)
  clear_has_icon_url();
  return icon_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MountainShareSpecifics::set_allocated_icon_url(::std::string* icon_url) {
  if (icon_url != NULL) {
    set_has_icon_url();
  } else {
    clear_has_icon_url();
  }
  icon_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), icon_url);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.MountainShareSpecifics.icon_url)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
