// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ukm/source.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ukm/source.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace ukm {
class Source_UrlInfoDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Source_UrlInfo> {
} _Source_UrlInfo_default_instance_;
class SourceDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Source> {
} _Source_default_instance_;

namespace protobuf_ukm_2fsource_2eproto {

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
  _Source_UrlInfo_default_instance_.Shutdown();
  _Source_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Source_UrlInfo_default_instance_.DefaultConstruct();
  _Source_default_instance_.DefaultConstruct();
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

}  // namespace protobuf_ukm_2fsource_2eproto

bool Source_UrlScheme_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Source_UrlScheme Source::UNSUPPORTED;
const Source_UrlScheme Source::HTTP;
const Source_UrlScheme Source::HTTPS;
const Source_UrlScheme Source::FTP;
const Source_UrlScheme Source::ABOUT;
const Source_UrlScheme Source::CHROME;
const Source_UrlScheme Source::CHROME_EXTENSION;
const Source_UrlScheme Source::UrlScheme_MIN;
const Source_UrlScheme Source::UrlScheme_MAX;
const int Source::UrlScheme_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Source_UrlInfo::kUrlFieldNumber;
const int Source_UrlInfo::kPreviousUrlCountFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Source_UrlInfo::Source_UrlInfo()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_ukm_2fsource_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:ukm.Source.UrlInfo)
}
Source_UrlInfo::Source_UrlInfo(const Source_UrlInfo& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_url()) {
    url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.url_);
  }
  previous_url_count_ = from.previous_url_count_;
  // @@protoc_insertion_point(copy_constructor:ukm.Source.UrlInfo)
}

void Source_UrlInfo::SharedCtor() {
  _cached_size_ = 0;
  url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  previous_url_count_ = 0;
}

Source_UrlInfo::~Source_UrlInfo() {
  // @@protoc_insertion_point(destructor:ukm.Source.UrlInfo)
  SharedDtor();
}

void Source_UrlInfo::SharedDtor() {
  url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Source_UrlInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Source_UrlInfo& Source_UrlInfo::default_instance() {
  protobuf_ukm_2fsource_2eproto::InitDefaults();
  return *internal_default_instance();
}

Source_UrlInfo* Source_UrlInfo::New(::google::protobuf::Arena* arena) const {
  Source_UrlInfo* n = new Source_UrlInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Source_UrlInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:ukm.Source.UrlInfo)
  if (has_url()) {
    GOOGLE_DCHECK(!url_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*url_.UnsafeRawStringPointer())->clear();
  }
  previous_url_count_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Source_UrlInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:ukm.Source.UrlInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string url = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_url()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 previous_url_count = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          set_has_previous_url_count();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &previous_url_count_)));
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
  // @@protoc_insertion_point(parse_success:ukm.Source.UrlInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ukm.Source.UrlInfo)
  return false;
#undef DO_
}

void Source_UrlInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ukm.Source.UrlInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string url = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->url(), output);
  }

  // optional int32 previous_url_count = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->previous_url_count(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:ukm.Source.UrlInfo)
}

size_t Source_UrlInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ukm.Source.UrlInfo)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  if (_has_bits_[0 / 32] & 3u) {
    // optional string url = 1;
    if (has_url()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->url());
    }

    // optional int32 previous_url_count = 2;
    if (has_previous_url_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->previous_url_count());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Source_UrlInfo::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Source_UrlInfo*>(&from));
}

void Source_UrlInfo::MergeFrom(const Source_UrlInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ukm.Source.UrlInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_url();
      url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.url_);
    }
    if (cached_has_bits & 0x00000002u) {
      previous_url_count_ = from.previous_url_count_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Source_UrlInfo::CopyFrom(const Source_UrlInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ukm.Source.UrlInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Source_UrlInfo::IsInitialized() const {
  return true;
}

void Source_UrlInfo::Swap(Source_UrlInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Source_UrlInfo::InternalSwap(Source_UrlInfo* other) {
  url_.Swap(&other->url_);
  std::swap(previous_url_count_, other->previous_url_count_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string Source_UrlInfo::GetTypeName() const {
  return "ukm.Source.UrlInfo";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Source_UrlInfo

// optional string url = 1;
bool Source_UrlInfo::has_url() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Source_UrlInfo::set_has_url() {
  _has_bits_[0] |= 0x00000001u;
}
void Source_UrlInfo::clear_has_url() {
  _has_bits_[0] &= ~0x00000001u;
}
void Source_UrlInfo::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_url();
}
const ::std::string& Source_UrlInfo::url() const {
  // @@protoc_insertion_point(field_get:ukm.Source.UrlInfo.url)
  return url_.GetNoArena();
}
void Source_UrlInfo::set_url(const ::std::string& value) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ukm.Source.UrlInfo.url)
}
#if LANG_CXX11
void Source_UrlInfo::set_url(::std::string&& value) {
  set_has_url();
  url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ukm.Source.UrlInfo.url)
}
#endif
void Source_UrlInfo::set_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ukm.Source.UrlInfo.url)
}
void Source_UrlInfo::set_url(const char* value, size_t size) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ukm.Source.UrlInfo.url)
}
::std::string* Source_UrlInfo::mutable_url() {
  set_has_url();
  // @@protoc_insertion_point(field_mutable:ukm.Source.UrlInfo.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Source_UrlInfo::release_url() {
  // @@protoc_insertion_point(field_release:ukm.Source.UrlInfo.url)
  clear_has_url();
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Source_UrlInfo::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    set_has_url();
  } else {
    clear_has_url();
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:ukm.Source.UrlInfo.url)
}

// optional int32 previous_url_count = 2;
bool Source_UrlInfo::has_previous_url_count() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Source_UrlInfo::set_has_previous_url_count() {
  _has_bits_[0] |= 0x00000002u;
}
void Source_UrlInfo::clear_has_previous_url_count() {
  _has_bits_[0] &= ~0x00000002u;
}
void Source_UrlInfo::clear_previous_url_count() {
  previous_url_count_ = 0;
  clear_has_previous_url_count();
}
::google::protobuf::int32 Source_UrlInfo::previous_url_count() const {
  // @@protoc_insertion_point(field_get:ukm.Source.UrlInfo.previous_url_count)
  return previous_url_count_;
}
void Source_UrlInfo::set_previous_url_count(::google::protobuf::int32 value) {
  set_has_previous_url_count();
  previous_url_count_ = value;
  // @@protoc_insertion_point(field_set:ukm.Source.UrlInfo.previous_url_count)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Source::kIdFieldNumber;
const int Source::kUrlsFieldNumber;
const int Source::kUrlFieldNumber;
const int Source::kInitialUrlFieldNumber;
const int Source::kIsCustomTabFieldNumber;
const int Source::kNavigationTimeMsecFieldNumber;
const int Source::kFirstContentfulPaintMsecFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Source::Source()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_ukm_2fsource_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:ukm.Source)
}
Source::Source(const Source& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      urls_(from.urls_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_url()) {
    url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.url_);
  }
  initial_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_initial_url()) {
    initial_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.initial_url_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&is_custom_tab_) -
    reinterpret_cast<char*>(&id_)) + sizeof(is_custom_tab_));
  // @@protoc_insertion_point(copy_constructor:ukm.Source)
}

void Source::SharedCtor() {
  _cached_size_ = 0;
  url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  initial_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&is_custom_tab_) -
      reinterpret_cast<char*>(&id_)) + sizeof(is_custom_tab_));
}

Source::~Source() {
  // @@protoc_insertion_point(destructor:ukm.Source)
  SharedDtor();
}

void Source::SharedDtor() {
  url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  initial_url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Source::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Source& Source::default_instance() {
  protobuf_ukm_2fsource_2eproto::InitDefaults();
  return *internal_default_instance();
}

Source* Source::New(::google::protobuf::Arena* arena) const {
  Source* n = new Source;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Source::Clear() {
// @@protoc_insertion_point(message_clear_start:ukm.Source)
  urls_.Clear();
  if (_has_bits_[0 / 32] & 3u) {
    if (has_url()) {
      GOOGLE_DCHECK(!url_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*url_.UnsafeRawStringPointer())->clear();
    }
    if (has_initial_url()) {
      GOOGLE_DCHECK(!initial_url_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*initial_url_.UnsafeRawStringPointer())->clear();
    }
  }
  if (_has_bits_[0 / 32] & 60u) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&is_custom_tab_) -
        reinterpret_cast<char*>(&id_)) + sizeof(is_custom_tab_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Source::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:ukm.Source)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 id = 1;
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

      // optional int64 navigation_time_msec = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {
          set_has_navigation_time_msec();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &navigation_time_msec_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int64 first_contentful_paint_msec = 4 [deprecated = true];
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u)) {
          set_has_first_contentful_paint_msec();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &first_contentful_paint_msec_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string initial_url = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_initial_url()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool is_custom_tab = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u)) {
          set_has_is_custom_tab();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_custom_tab_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .ukm.Source.UrlInfo urls = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_urls()));
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
  // @@protoc_insertion_point(parse_success:ukm.Source)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ukm.Source)
  return false;
#undef DO_
}

void Source::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ukm.Source)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int64 id = 1;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->id(), output);
  }

  // optional string url = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->url(), output);
  }

  // optional int64 navigation_time_msec = 3;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->navigation_time_msec(), output);
  }

  // optional int64 first_contentful_paint_msec = 4 [deprecated = true];
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->first_contentful_paint_msec(), output);
  }

  // optional string initial_url = 6;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->initial_url(), output);
  }

  // optional bool is_custom_tab = 7;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->is_custom_tab(), output);
  }

  // repeated .ukm.Source.UrlInfo urls = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->urls_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      8, this->urls(static_cast<int>(i)), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:ukm.Source)
}

size_t Source::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ukm.Source)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  // repeated .ukm.Source.UrlInfo urls = 8;
  {
    unsigned int count = static_cast<unsigned int>(this->urls_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->urls(static_cast<int>(i)));
    }
  }

  if (_has_bits_[0 / 32] & 63u) {
    // optional string url = 2;
    if (has_url()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->url());
    }

    // optional string initial_url = 6;
    if (has_initial_url()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->initial_url());
    }

    // optional int64 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->id());
    }

    // optional int64 navigation_time_msec = 3;
    if (has_navigation_time_msec()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->navigation_time_msec());
    }

    // optional int64 first_contentful_paint_msec = 4 [deprecated = true];
    if (has_first_contentful_paint_msec()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->first_contentful_paint_msec());
    }

    // optional bool is_custom_tab = 7;
    if (has_is_custom_tab()) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Source::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Source*>(&from));
}

void Source::MergeFrom(const Source& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ukm.Source)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  urls_.MergeFrom(from.urls_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 63u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_url();
      url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.url_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_initial_url();
      initial_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.initial_url_);
    }
    if (cached_has_bits & 0x00000004u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000008u) {
      navigation_time_msec_ = from.navigation_time_msec_;
    }
    if (cached_has_bits & 0x00000010u) {
      first_contentful_paint_msec_ = from.first_contentful_paint_msec_;
    }
    if (cached_has_bits & 0x00000020u) {
      is_custom_tab_ = from.is_custom_tab_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Source::CopyFrom(const Source& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ukm.Source)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Source::IsInitialized() const {
  return true;
}

void Source::Swap(Source* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Source::InternalSwap(Source* other) {
  urls_.InternalSwap(&other->urls_);
  url_.Swap(&other->url_);
  initial_url_.Swap(&other->initial_url_);
  std::swap(id_, other->id_);
  std::swap(navigation_time_msec_, other->navigation_time_msec_);
  std::swap(first_contentful_paint_msec_, other->first_contentful_paint_msec_);
  std::swap(is_custom_tab_, other->is_custom_tab_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string Source::GetTypeName() const {
  return "ukm.Source";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Source

// optional int64 id = 1;
bool Source::has_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Source::set_has_id() {
  _has_bits_[0] |= 0x00000004u;
}
void Source::clear_has_id() {
  _has_bits_[0] &= ~0x00000004u;
}
void Source::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
::google::protobuf::int64 Source::id() const {
  // @@protoc_insertion_point(field_get:ukm.Source.id)
  return id_;
}
void Source::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:ukm.Source.id)
}

// repeated .ukm.Source.UrlInfo urls = 8;
int Source::urls_size() const {
  return urls_.size();
}
void Source::clear_urls() {
  urls_.Clear();
}
const ::ukm::Source_UrlInfo& Source::urls(int index) const {
  // @@protoc_insertion_point(field_get:ukm.Source.urls)
  return urls_.Get(index);
}
::ukm::Source_UrlInfo* Source::mutable_urls(int index) {
  // @@protoc_insertion_point(field_mutable:ukm.Source.urls)
  return urls_.Mutable(index);
}
::ukm::Source_UrlInfo* Source::add_urls() {
  // @@protoc_insertion_point(field_add:ukm.Source.urls)
  return urls_.Add();
}
::google::protobuf::RepeatedPtrField< ::ukm::Source_UrlInfo >*
Source::mutable_urls() {
  // @@protoc_insertion_point(field_mutable_list:ukm.Source.urls)
  return &urls_;
}
const ::google::protobuf::RepeatedPtrField< ::ukm::Source_UrlInfo >&
Source::urls() const {
  // @@protoc_insertion_point(field_list:ukm.Source.urls)
  return urls_;
}

// optional string url = 2;
bool Source::has_url() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Source::set_has_url() {
  _has_bits_[0] |= 0x00000001u;
}
void Source::clear_has_url() {
  _has_bits_[0] &= ~0x00000001u;
}
void Source::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_url();
}
const ::std::string& Source::url() const {
  // @@protoc_insertion_point(field_get:ukm.Source.url)
  return url_.GetNoArena();
}
void Source::set_url(const ::std::string& value) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ukm.Source.url)
}
#if LANG_CXX11
void Source::set_url(::std::string&& value) {
  set_has_url();
  url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ukm.Source.url)
}
#endif
void Source::set_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ukm.Source.url)
}
void Source::set_url(const char* value, size_t size) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ukm.Source.url)
}
::std::string* Source::mutable_url() {
  set_has_url();
  // @@protoc_insertion_point(field_mutable:ukm.Source.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Source::release_url() {
  // @@protoc_insertion_point(field_release:ukm.Source.url)
  clear_has_url();
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Source::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    set_has_url();
  } else {
    clear_has_url();
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:ukm.Source.url)
}

// optional string initial_url = 6;
bool Source::has_initial_url() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Source::set_has_initial_url() {
  _has_bits_[0] |= 0x00000002u;
}
void Source::clear_has_initial_url() {
  _has_bits_[0] &= ~0x00000002u;
}
void Source::clear_initial_url() {
  initial_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_initial_url();
}
const ::std::string& Source::initial_url() const {
  // @@protoc_insertion_point(field_get:ukm.Source.initial_url)
  return initial_url_.GetNoArena();
}
void Source::set_initial_url(const ::std::string& value) {
  set_has_initial_url();
  initial_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ukm.Source.initial_url)
}
#if LANG_CXX11
void Source::set_initial_url(::std::string&& value) {
  set_has_initial_url();
  initial_url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ukm.Source.initial_url)
}
#endif
void Source::set_initial_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_initial_url();
  initial_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ukm.Source.initial_url)
}
void Source::set_initial_url(const char* value, size_t size) {
  set_has_initial_url();
  initial_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ukm.Source.initial_url)
}
::std::string* Source::mutable_initial_url() {
  set_has_initial_url();
  // @@protoc_insertion_point(field_mutable:ukm.Source.initial_url)
  return initial_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Source::release_initial_url() {
  // @@protoc_insertion_point(field_release:ukm.Source.initial_url)
  clear_has_initial_url();
  return initial_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Source::set_allocated_initial_url(::std::string* initial_url) {
  if (initial_url != NULL) {
    set_has_initial_url();
  } else {
    clear_has_initial_url();
  }
  initial_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), initial_url);
  // @@protoc_insertion_point(field_set_allocated:ukm.Source.initial_url)
}

// optional bool is_custom_tab = 7;
bool Source::has_is_custom_tab() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void Source::set_has_is_custom_tab() {
  _has_bits_[0] |= 0x00000020u;
}
void Source::clear_has_is_custom_tab() {
  _has_bits_[0] &= ~0x00000020u;
}
void Source::clear_is_custom_tab() {
  is_custom_tab_ = false;
  clear_has_is_custom_tab();
}
bool Source::is_custom_tab() const {
  // @@protoc_insertion_point(field_get:ukm.Source.is_custom_tab)
  return is_custom_tab_;
}
void Source::set_is_custom_tab(bool value) {
  set_has_is_custom_tab();
  is_custom_tab_ = value;
  // @@protoc_insertion_point(field_set:ukm.Source.is_custom_tab)
}

// optional int64 navigation_time_msec = 3;
bool Source::has_navigation_time_msec() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void Source::set_has_navigation_time_msec() {
  _has_bits_[0] |= 0x00000008u;
}
void Source::clear_has_navigation_time_msec() {
  _has_bits_[0] &= ~0x00000008u;
}
void Source::clear_navigation_time_msec() {
  navigation_time_msec_ = GOOGLE_LONGLONG(0);
  clear_has_navigation_time_msec();
}
::google::protobuf::int64 Source::navigation_time_msec() const {
  // @@protoc_insertion_point(field_get:ukm.Source.navigation_time_msec)
  return navigation_time_msec_;
}
void Source::set_navigation_time_msec(::google::protobuf::int64 value) {
  set_has_navigation_time_msec();
  navigation_time_msec_ = value;
  // @@protoc_insertion_point(field_set:ukm.Source.navigation_time_msec)
}

// optional int64 first_contentful_paint_msec = 4 [deprecated = true];
bool Source::has_first_contentful_paint_msec() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void Source::set_has_first_contentful_paint_msec() {
  _has_bits_[0] |= 0x00000010u;
}
void Source::clear_has_first_contentful_paint_msec() {
  _has_bits_[0] &= ~0x00000010u;
}
void Source::clear_first_contentful_paint_msec() {
  first_contentful_paint_msec_ = GOOGLE_LONGLONG(0);
  clear_has_first_contentful_paint_msec();
}
::google::protobuf::int64 Source::first_contentful_paint_msec() const {
  // @@protoc_insertion_point(field_get:ukm.Source.first_contentful_paint_msec)
  return first_contentful_paint_msec_;
}
void Source::set_first_contentful_paint_msec(::google::protobuf::int64 value) {
  set_has_first_contentful_paint_msec();
  first_contentful_paint_msec_ = value;
  // @@protoc_insertion_point(field_set:ukm.Source.first_contentful_paint_msec)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace ukm

// @@protoc_insertion_point(global_scope)