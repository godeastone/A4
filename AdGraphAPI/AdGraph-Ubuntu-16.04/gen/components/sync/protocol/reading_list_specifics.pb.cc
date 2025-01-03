// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: reading_list_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "reading_list_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {
class ReadingListSpecificsDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ReadingListSpecifics> {
} _ReadingListSpecifics_default_instance_;

namespace protobuf_reading_5flist_5fspecifics_2eproto {

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
  _ReadingListSpecifics_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _ReadingListSpecifics_default_instance_.DefaultConstruct();
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

}  // namespace protobuf_reading_5flist_5fspecifics_2eproto

bool ReadingListSpecifics_ReadingListEntryStatus_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const ReadingListSpecifics_ReadingListEntryStatus ReadingListSpecifics::UNREAD;
const ReadingListSpecifics_ReadingListEntryStatus ReadingListSpecifics::READ;
const ReadingListSpecifics_ReadingListEntryStatus ReadingListSpecifics::UNSEEN;
const ReadingListSpecifics_ReadingListEntryStatus ReadingListSpecifics::ReadingListEntryStatus_MIN;
const ReadingListSpecifics_ReadingListEntryStatus ReadingListSpecifics::ReadingListEntryStatus_MAX;
const int ReadingListSpecifics::ReadingListEntryStatus_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ReadingListSpecifics::kEntryIdFieldNumber;
const int ReadingListSpecifics::kTitleFieldNumber;
const int ReadingListSpecifics::kUrlFieldNumber;
const int ReadingListSpecifics::kCreationTimeUsFieldNumber;
const int ReadingListSpecifics::kUpdateTimeUsFieldNumber;
const int ReadingListSpecifics::kFirstReadTimeUsFieldNumber;
const int ReadingListSpecifics::kUpdateTitleTimeUsFieldNumber;
const int ReadingListSpecifics::kStatusFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ReadingListSpecifics::ReadingListSpecifics()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_reading_5flist_5fspecifics_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.ReadingListSpecifics)
}
ReadingListSpecifics::ReadingListSpecifics(const ReadingListSpecifics& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  entry_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_entry_id()) {
    entry_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.entry_id_);
  }
  title_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_title()) {
    title_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.title_);
  }
  url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_url()) {
    url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.url_);
  }
  ::memcpy(&creation_time_us_, &from.creation_time_us_,
    static_cast<size_t>(reinterpret_cast<char*>(&status_) -
    reinterpret_cast<char*>(&creation_time_us_)) + sizeof(status_));
  // @@protoc_insertion_point(copy_constructor:sync_pb.ReadingListSpecifics)
}

void ReadingListSpecifics::SharedCtor() {
  _cached_size_ = 0;
  entry_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  title_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&creation_time_us_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&status_) -
      reinterpret_cast<char*>(&creation_time_us_)) + sizeof(status_));
}

ReadingListSpecifics::~ReadingListSpecifics() {
  // @@protoc_insertion_point(destructor:sync_pb.ReadingListSpecifics)
  SharedDtor();
}

void ReadingListSpecifics::SharedDtor() {
  entry_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  title_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ReadingListSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ReadingListSpecifics& ReadingListSpecifics::default_instance() {
  protobuf_reading_5flist_5fspecifics_2eproto::InitDefaults();
  return *internal_default_instance();
}

ReadingListSpecifics* ReadingListSpecifics::New(::google::protobuf::Arena* arena) const {
  ReadingListSpecifics* n = new ReadingListSpecifics;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ReadingListSpecifics::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.ReadingListSpecifics)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_entry_id()) {
      GOOGLE_DCHECK(!entry_id_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*entry_id_.UnsafeRawStringPointer())->clear();
    }
    if (has_title()) {
      GOOGLE_DCHECK(!title_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*title_.UnsafeRawStringPointer())->clear();
    }
    if (has_url()) {
      GOOGLE_DCHECK(!url_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*url_.UnsafeRawStringPointer())->clear();
    }
  }
  if (_has_bits_[0 / 32] & 248u) {
    ::memset(&creation_time_us_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&status_) -
        reinterpret_cast<char*>(&creation_time_us_)) + sizeof(status_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ReadingListSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.ReadingListSpecifics)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string entry_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_entry_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string title = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_title()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string url = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_url()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int64 creation_time_us = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u)) {
          set_has_creation_time_us();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &creation_time_us_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int64 update_time_us = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u)) {
          set_has_update_time_us();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &update_time_us_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .sync_pb.ReadingListSpecifics.ReadingListEntryStatus status = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::sync_pb::ReadingListSpecifics_ReadingListEntryStatus_IsValid(value)) {
            set_status(static_cast< ::sync_pb::ReadingListSpecifics_ReadingListEntryStatus >(value));
          } else {
            unknown_fields_stream.WriteVarint32(48u);
            unknown_fields_stream.WriteVarint32(
                static_cast< ::google::protobuf::uint32>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int64 first_read_time_us = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u)) {
          set_has_first_read_time_us();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &first_read_time_us_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int64 update_title_time_us = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u)) {
          set_has_update_title_time_us();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &update_title_time_us_)));
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
  // @@protoc_insertion_point(parse_success:sync_pb.ReadingListSpecifics)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.ReadingListSpecifics)
  return false;
#undef DO_
}

void ReadingListSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.ReadingListSpecifics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string entry_id = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->entry_id(), output);
  }

  // optional string title = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->title(), output);
  }

  // optional string url = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->url(), output);
  }

  // optional int64 creation_time_us = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->creation_time_us(), output);
  }

  // optional int64 update_time_us = 5;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->update_time_us(), output);
  }

  // optional .sync_pb.ReadingListSpecifics.ReadingListEntryStatus status = 6;
  if (cached_has_bits & 0x00000080u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      6, this->status(), output);
  }

  // optional int64 first_read_time_us = 7;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(7, this->first_read_time_us(), output);
  }

  // optional int64 update_title_time_us = 8;
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(8, this->update_title_time_us(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.ReadingListSpecifics)
}

size_t ReadingListSpecifics::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.ReadingListSpecifics)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  if (_has_bits_[0 / 32] & 255u) {
    // optional string entry_id = 1;
    if (has_entry_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->entry_id());
    }

    // optional string title = 2;
    if (has_title()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->title());
    }

    // optional string url = 3;
    if (has_url()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->url());
    }

    // optional int64 creation_time_us = 4;
    if (has_creation_time_us()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->creation_time_us());
    }

    // optional int64 update_time_us = 5;
    if (has_update_time_us()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->update_time_us());
    }

    // optional int64 first_read_time_us = 7;
    if (has_first_read_time_us()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->first_read_time_us());
    }

    // optional int64 update_title_time_us = 8;
    if (has_update_title_time_us()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->update_title_time_us());
    }

    // optional .sync_pb.ReadingListSpecifics.ReadingListEntryStatus status = 6;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ReadingListSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ReadingListSpecifics*>(&from));
}

void ReadingListSpecifics::MergeFrom(const ReadingListSpecifics& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.ReadingListSpecifics)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 255u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_entry_id();
      entry_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.entry_id_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_title();
      title_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.title_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_url();
      url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.url_);
    }
    if (cached_has_bits & 0x00000008u) {
      creation_time_us_ = from.creation_time_us_;
    }
    if (cached_has_bits & 0x00000010u) {
      update_time_us_ = from.update_time_us_;
    }
    if (cached_has_bits & 0x00000020u) {
      first_read_time_us_ = from.first_read_time_us_;
    }
    if (cached_has_bits & 0x00000040u) {
      update_title_time_us_ = from.update_title_time_us_;
    }
    if (cached_has_bits & 0x00000080u) {
      status_ = from.status_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ReadingListSpecifics::CopyFrom(const ReadingListSpecifics& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.ReadingListSpecifics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReadingListSpecifics::IsInitialized() const {
  return true;
}

void ReadingListSpecifics::Swap(ReadingListSpecifics* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ReadingListSpecifics::InternalSwap(ReadingListSpecifics* other) {
  entry_id_.Swap(&other->entry_id_);
  title_.Swap(&other->title_);
  url_.Swap(&other->url_);
  std::swap(creation_time_us_, other->creation_time_us_);
  std::swap(update_time_us_, other->update_time_us_);
  std::swap(first_read_time_us_, other->first_read_time_us_);
  std::swap(update_title_time_us_, other->update_title_time_us_);
  std::swap(status_, other->status_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ReadingListSpecifics::GetTypeName() const {
  return "sync_pb.ReadingListSpecifics";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ReadingListSpecifics

// optional string entry_id = 1;
bool ReadingListSpecifics::has_entry_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ReadingListSpecifics::set_has_entry_id() {
  _has_bits_[0] |= 0x00000001u;
}
void ReadingListSpecifics::clear_has_entry_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void ReadingListSpecifics::clear_entry_id() {
  entry_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_entry_id();
}
const ::std::string& ReadingListSpecifics::entry_id() const {
  // @@protoc_insertion_point(field_get:sync_pb.ReadingListSpecifics.entry_id)
  return entry_id_.GetNoArena();
}
void ReadingListSpecifics::set_entry_id(const ::std::string& value) {
  set_has_entry_id();
  entry_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ReadingListSpecifics.entry_id)
}
#if LANG_CXX11
void ReadingListSpecifics::set_entry_id(::std::string&& value) {
  set_has_entry_id();
  entry_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ReadingListSpecifics.entry_id)
}
#endif
void ReadingListSpecifics::set_entry_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_entry_id();
  entry_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ReadingListSpecifics.entry_id)
}
void ReadingListSpecifics::set_entry_id(const char* value, size_t size) {
  set_has_entry_id();
  entry_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ReadingListSpecifics.entry_id)
}
::std::string* ReadingListSpecifics::mutable_entry_id() {
  set_has_entry_id();
  // @@protoc_insertion_point(field_mutable:sync_pb.ReadingListSpecifics.entry_id)
  return entry_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ReadingListSpecifics::release_entry_id() {
  // @@protoc_insertion_point(field_release:sync_pb.ReadingListSpecifics.entry_id)
  clear_has_entry_id();
  return entry_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ReadingListSpecifics::set_allocated_entry_id(::std::string* entry_id) {
  if (entry_id != NULL) {
    set_has_entry_id();
  } else {
    clear_has_entry_id();
  }
  entry_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), entry_id);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ReadingListSpecifics.entry_id)
}

// optional string title = 2;
bool ReadingListSpecifics::has_title() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void ReadingListSpecifics::set_has_title() {
  _has_bits_[0] |= 0x00000002u;
}
void ReadingListSpecifics::clear_has_title() {
  _has_bits_[0] &= ~0x00000002u;
}
void ReadingListSpecifics::clear_title() {
  title_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_title();
}
const ::std::string& ReadingListSpecifics::title() const {
  // @@protoc_insertion_point(field_get:sync_pb.ReadingListSpecifics.title)
  return title_.GetNoArena();
}
void ReadingListSpecifics::set_title(const ::std::string& value) {
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ReadingListSpecifics.title)
}
#if LANG_CXX11
void ReadingListSpecifics::set_title(::std::string&& value) {
  set_has_title();
  title_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ReadingListSpecifics.title)
}
#endif
void ReadingListSpecifics::set_title(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ReadingListSpecifics.title)
}
void ReadingListSpecifics::set_title(const char* value, size_t size) {
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ReadingListSpecifics.title)
}
::std::string* ReadingListSpecifics::mutable_title() {
  set_has_title();
  // @@protoc_insertion_point(field_mutable:sync_pb.ReadingListSpecifics.title)
  return title_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ReadingListSpecifics::release_title() {
  // @@protoc_insertion_point(field_release:sync_pb.ReadingListSpecifics.title)
  clear_has_title();
  return title_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ReadingListSpecifics::set_allocated_title(::std::string* title) {
  if (title != NULL) {
    set_has_title();
  } else {
    clear_has_title();
  }
  title_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), title);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ReadingListSpecifics.title)
}

// optional string url = 3;
bool ReadingListSpecifics::has_url() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void ReadingListSpecifics::set_has_url() {
  _has_bits_[0] |= 0x00000004u;
}
void ReadingListSpecifics::clear_has_url() {
  _has_bits_[0] &= ~0x00000004u;
}
void ReadingListSpecifics::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_url();
}
const ::std::string& ReadingListSpecifics::url() const {
  // @@protoc_insertion_point(field_get:sync_pb.ReadingListSpecifics.url)
  return url_.GetNoArena();
}
void ReadingListSpecifics::set_url(const ::std::string& value) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.ReadingListSpecifics.url)
}
#if LANG_CXX11
void ReadingListSpecifics::set_url(::std::string&& value) {
  set_has_url();
  url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.ReadingListSpecifics.url)
}
#endif
void ReadingListSpecifics::set_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.ReadingListSpecifics.url)
}
void ReadingListSpecifics::set_url(const char* value, size_t size) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.ReadingListSpecifics.url)
}
::std::string* ReadingListSpecifics::mutable_url() {
  set_has_url();
  // @@protoc_insertion_point(field_mutable:sync_pb.ReadingListSpecifics.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ReadingListSpecifics::release_url() {
  // @@protoc_insertion_point(field_release:sync_pb.ReadingListSpecifics.url)
  clear_has_url();
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ReadingListSpecifics::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    set_has_url();
  } else {
    clear_has_url();
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ReadingListSpecifics.url)
}

// optional int64 creation_time_us = 4;
bool ReadingListSpecifics::has_creation_time_us() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void ReadingListSpecifics::set_has_creation_time_us() {
  _has_bits_[0] |= 0x00000008u;
}
void ReadingListSpecifics::clear_has_creation_time_us() {
  _has_bits_[0] &= ~0x00000008u;
}
void ReadingListSpecifics::clear_creation_time_us() {
  creation_time_us_ = GOOGLE_LONGLONG(0);
  clear_has_creation_time_us();
}
::google::protobuf::int64 ReadingListSpecifics::creation_time_us() const {
  // @@protoc_insertion_point(field_get:sync_pb.ReadingListSpecifics.creation_time_us)
  return creation_time_us_;
}
void ReadingListSpecifics::set_creation_time_us(::google::protobuf::int64 value) {
  set_has_creation_time_us();
  creation_time_us_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ReadingListSpecifics.creation_time_us)
}

// optional int64 update_time_us = 5;
bool ReadingListSpecifics::has_update_time_us() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void ReadingListSpecifics::set_has_update_time_us() {
  _has_bits_[0] |= 0x00000010u;
}
void ReadingListSpecifics::clear_has_update_time_us() {
  _has_bits_[0] &= ~0x00000010u;
}
void ReadingListSpecifics::clear_update_time_us() {
  update_time_us_ = GOOGLE_LONGLONG(0);
  clear_has_update_time_us();
}
::google::protobuf::int64 ReadingListSpecifics::update_time_us() const {
  // @@protoc_insertion_point(field_get:sync_pb.ReadingListSpecifics.update_time_us)
  return update_time_us_;
}
void ReadingListSpecifics::set_update_time_us(::google::protobuf::int64 value) {
  set_has_update_time_us();
  update_time_us_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ReadingListSpecifics.update_time_us)
}

// optional int64 first_read_time_us = 7;
bool ReadingListSpecifics::has_first_read_time_us() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void ReadingListSpecifics::set_has_first_read_time_us() {
  _has_bits_[0] |= 0x00000020u;
}
void ReadingListSpecifics::clear_has_first_read_time_us() {
  _has_bits_[0] &= ~0x00000020u;
}
void ReadingListSpecifics::clear_first_read_time_us() {
  first_read_time_us_ = GOOGLE_LONGLONG(0);
  clear_has_first_read_time_us();
}
::google::protobuf::int64 ReadingListSpecifics::first_read_time_us() const {
  // @@protoc_insertion_point(field_get:sync_pb.ReadingListSpecifics.first_read_time_us)
  return first_read_time_us_;
}
void ReadingListSpecifics::set_first_read_time_us(::google::protobuf::int64 value) {
  set_has_first_read_time_us();
  first_read_time_us_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ReadingListSpecifics.first_read_time_us)
}

// optional int64 update_title_time_us = 8;
bool ReadingListSpecifics::has_update_title_time_us() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void ReadingListSpecifics::set_has_update_title_time_us() {
  _has_bits_[0] |= 0x00000040u;
}
void ReadingListSpecifics::clear_has_update_title_time_us() {
  _has_bits_[0] &= ~0x00000040u;
}
void ReadingListSpecifics::clear_update_title_time_us() {
  update_title_time_us_ = GOOGLE_LONGLONG(0);
  clear_has_update_title_time_us();
}
::google::protobuf::int64 ReadingListSpecifics::update_title_time_us() const {
  // @@protoc_insertion_point(field_get:sync_pb.ReadingListSpecifics.update_title_time_us)
  return update_title_time_us_;
}
void ReadingListSpecifics::set_update_title_time_us(::google::protobuf::int64 value) {
  set_has_update_title_time_us();
  update_title_time_us_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ReadingListSpecifics.update_title_time_us)
}

// optional .sync_pb.ReadingListSpecifics.ReadingListEntryStatus status = 6;
bool ReadingListSpecifics::has_status() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
void ReadingListSpecifics::set_has_status() {
  _has_bits_[0] |= 0x00000080u;
}
void ReadingListSpecifics::clear_has_status() {
  _has_bits_[0] &= ~0x00000080u;
}
void ReadingListSpecifics::clear_status() {
  status_ = 0;
  clear_has_status();
}
::sync_pb::ReadingListSpecifics_ReadingListEntryStatus ReadingListSpecifics::status() const {
  // @@protoc_insertion_point(field_get:sync_pb.ReadingListSpecifics.status)
  return static_cast< ::sync_pb::ReadingListSpecifics_ReadingListEntryStatus >(status_);
}
void ReadingListSpecifics::set_status(::sync_pb::ReadingListSpecifics_ReadingListEntryStatus value) {
  assert(::sync_pb::ReadingListSpecifics_ReadingListEntryStatus_IsValid(value));
  set_has_status();
  status_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ReadingListSpecifics.status)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)