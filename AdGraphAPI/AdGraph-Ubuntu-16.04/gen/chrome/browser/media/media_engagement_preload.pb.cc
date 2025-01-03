// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: media_engagement_preload.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "media_engagement_preload.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace chrome_browser_media {
class PreloadedDataDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<PreloadedData> {
} _PreloadedData_default_instance_;

namespace protobuf_media_5fengagement_5fpreload_2eproto {

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
  _PreloadedData_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _PreloadedData_default_instance_.DefaultConstruct();
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

}  // namespace protobuf_media_5fengagement_5fpreload_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PreloadedData::kDafsaFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PreloadedData::PreloadedData()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_media_5fengagement_5fpreload_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:chrome_browser_media.PreloadedData)
}
PreloadedData::PreloadedData(const PreloadedData& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  dafsa_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_dafsa()) {
    dafsa_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.dafsa_);
  }
  // @@protoc_insertion_point(copy_constructor:chrome_browser_media.PreloadedData)
}

void PreloadedData::SharedCtor() {
  _cached_size_ = 0;
  dafsa_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PreloadedData::~PreloadedData() {
  // @@protoc_insertion_point(destructor:chrome_browser_media.PreloadedData)
  SharedDtor();
}

void PreloadedData::SharedDtor() {
  dafsa_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PreloadedData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PreloadedData& PreloadedData::default_instance() {
  protobuf_media_5fengagement_5fpreload_2eproto::InitDefaults();
  return *internal_default_instance();
}

PreloadedData* PreloadedData::New(::google::protobuf::Arena* arena) const {
  PreloadedData* n = new PreloadedData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PreloadedData::Clear() {
// @@protoc_insertion_point(message_clear_start:chrome_browser_media.PreloadedData)
  if (has_dafsa()) {
    GOOGLE_DCHECK(!dafsa_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*dafsa_.UnsafeRawStringPointer())->clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PreloadedData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:chrome_browser_media.PreloadedData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes dafsa = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_dafsa()));
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
  // @@protoc_insertion_point(parse_success:chrome_browser_media.PreloadedData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:chrome_browser_media.PreloadedData)
  return false;
#undef DO_
}

void PreloadedData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:chrome_browser_media.PreloadedData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bytes dafsa = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->dafsa(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:chrome_browser_media.PreloadedData)
}

size_t PreloadedData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chrome_browser_media.PreloadedData)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  // optional bytes dafsa = 1;
  if (has_dafsa()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->dafsa());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PreloadedData::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PreloadedData*>(&from));
}

void PreloadedData::MergeFrom(const PreloadedData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:chrome_browser_media.PreloadedData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_dafsa()) {
    set_has_dafsa();
    dafsa_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.dafsa_);
  }
}

void PreloadedData::CopyFrom(const PreloadedData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chrome_browser_media.PreloadedData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PreloadedData::IsInitialized() const {
  return true;
}

void PreloadedData::Swap(PreloadedData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PreloadedData::InternalSwap(PreloadedData* other) {
  dafsa_.Swap(&other->dafsa_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string PreloadedData::GetTypeName() const {
  return "chrome_browser_media.PreloadedData";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PreloadedData

// optional bytes dafsa = 1;
bool PreloadedData::has_dafsa() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PreloadedData::set_has_dafsa() {
  _has_bits_[0] |= 0x00000001u;
}
void PreloadedData::clear_has_dafsa() {
  _has_bits_[0] &= ~0x00000001u;
}
void PreloadedData::clear_dafsa() {
  dafsa_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_dafsa();
}
const ::std::string& PreloadedData::dafsa() const {
  // @@protoc_insertion_point(field_get:chrome_browser_media.PreloadedData.dafsa)
  return dafsa_.GetNoArena();
}
void PreloadedData::set_dafsa(const ::std::string& value) {
  set_has_dafsa();
  dafsa_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chrome_browser_media.PreloadedData.dafsa)
}
#if LANG_CXX11
void PreloadedData::set_dafsa(::std::string&& value) {
  set_has_dafsa();
  dafsa_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chrome_browser_media.PreloadedData.dafsa)
}
#endif
void PreloadedData::set_dafsa(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_dafsa();
  dafsa_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chrome_browser_media.PreloadedData.dafsa)
}
void PreloadedData::set_dafsa(const void* value, size_t size) {
  set_has_dafsa();
  dafsa_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chrome_browser_media.PreloadedData.dafsa)
}
::std::string* PreloadedData::mutable_dafsa() {
  set_has_dafsa();
  // @@protoc_insertion_point(field_mutable:chrome_browser_media.PreloadedData.dafsa)
  return dafsa_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PreloadedData::release_dafsa() {
  // @@protoc_insertion_point(field_release:chrome_browser_media.PreloadedData.dafsa)
  clear_has_dafsa();
  return dafsa_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PreloadedData::set_allocated_dafsa(::std::string* dafsa) {
  if (dafsa != NULL) {
    set_has_dafsa();
  } else {
    clear_has_dafsa();
  }
  dafsa_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), dafsa);
  // @@protoc_insertion_point(field_set_allocated:chrome_browser_media.PreloadedData.dafsa)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace chrome_browser_media

// @@protoc_insertion_point(global_scope)