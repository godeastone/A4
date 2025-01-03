// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rappor_metric.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "rappor_metric.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace rappor {
class RapporReports_ReportDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<RapporReports_Report> {
} _RapporReports_Report_default_instance_;
class RapporReportsDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<RapporReports> {
} _RapporReports_default_instance_;

namespace protobuf_rappor_5fmetric_2eproto {

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
  _RapporReports_Report_default_instance_.Shutdown();
  _RapporReports_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _RapporReports_Report_default_instance_.DefaultConstruct();
  _RapporReports_default_instance_.DefaultConstruct();
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

}  // namespace protobuf_rappor_5fmetric_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RapporReports_Report::kNameHashFieldNumber;
const int RapporReports_Report::kBitsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RapporReports_Report::RapporReports_Report()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_rappor_5fmetric_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:rappor.RapporReports.Report)
}
RapporReports_Report::RapporReports_Report(const RapporReports_Report& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bits_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_bits()) {
    bits_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.bits_);
  }
  name_hash_ = from.name_hash_;
  // @@protoc_insertion_point(copy_constructor:rappor.RapporReports.Report)
}

void RapporReports_Report::SharedCtor() {
  _cached_size_ = 0;
  bits_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_hash_ = GOOGLE_ULONGLONG(0);
}

RapporReports_Report::~RapporReports_Report() {
  // @@protoc_insertion_point(destructor:rappor.RapporReports.Report)
  SharedDtor();
}

void RapporReports_Report::SharedDtor() {
  bits_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void RapporReports_Report::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const RapporReports_Report& RapporReports_Report::default_instance() {
  protobuf_rappor_5fmetric_2eproto::InitDefaults();
  return *internal_default_instance();
}

RapporReports_Report* RapporReports_Report::New(::google::protobuf::Arena* arena) const {
  RapporReports_Report* n = new RapporReports_Report;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RapporReports_Report::Clear() {
// @@protoc_insertion_point(message_clear_start:rappor.RapporReports.Report)
  if (has_bits()) {
    GOOGLE_DCHECK(!bits_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*bits_.UnsafeRawStringPointer())->clear();
  }
  name_hash_ = GOOGLE_ULONGLONG(0);
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool RapporReports_Report::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:rappor.RapporReports.Report)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional fixed64 name_hash = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u)) {
          set_has_name_hash();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &name_hash_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes bits = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_bits()));
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
  // @@protoc_insertion_point(parse_success:rappor.RapporReports.Report)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:rappor.RapporReports.Report)
  return false;
#undef DO_
}

void RapporReports_Report::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:rappor.RapporReports.Report)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional fixed64 name_hash = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->name_hash(), output);
  }

  // optional bytes bits = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->bits(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:rappor.RapporReports.Report)
}

size_t RapporReports_Report::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:rappor.RapporReports.Report)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  if (_has_bits_[0 / 32] & 3u) {
    // optional bytes bits = 2;
    if (has_bits()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->bits());
    }

    // optional fixed64 name_hash = 1;
    if (has_name_hash()) {
      total_size += 1 + 8;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RapporReports_Report::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const RapporReports_Report*>(&from));
}

void RapporReports_Report::MergeFrom(const RapporReports_Report& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:rappor.RapporReports.Report)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_bits();
      bits_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.bits_);
    }
    if (cached_has_bits & 0x00000002u) {
      name_hash_ = from.name_hash_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void RapporReports_Report::CopyFrom(const RapporReports_Report& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:rappor.RapporReports.Report)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RapporReports_Report::IsInitialized() const {
  return true;
}

void RapporReports_Report::Swap(RapporReports_Report* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RapporReports_Report::InternalSwap(RapporReports_Report* other) {
  bits_.Swap(&other->bits_);
  std::swap(name_hash_, other->name_hash_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string RapporReports_Report::GetTypeName() const {
  return "rappor.RapporReports.Report";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RapporReports_Report

// optional fixed64 name_hash = 1;
bool RapporReports_Report::has_name_hash() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void RapporReports_Report::set_has_name_hash() {
  _has_bits_[0] |= 0x00000002u;
}
void RapporReports_Report::clear_has_name_hash() {
  _has_bits_[0] &= ~0x00000002u;
}
void RapporReports_Report::clear_name_hash() {
  name_hash_ = GOOGLE_ULONGLONG(0);
  clear_has_name_hash();
}
::google::protobuf::uint64 RapporReports_Report::name_hash() const {
  // @@protoc_insertion_point(field_get:rappor.RapporReports.Report.name_hash)
  return name_hash_;
}
void RapporReports_Report::set_name_hash(::google::protobuf::uint64 value) {
  set_has_name_hash();
  name_hash_ = value;
  // @@protoc_insertion_point(field_set:rappor.RapporReports.Report.name_hash)
}

// optional bytes bits = 2;
bool RapporReports_Report::has_bits() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void RapporReports_Report::set_has_bits() {
  _has_bits_[0] |= 0x00000001u;
}
void RapporReports_Report::clear_has_bits() {
  _has_bits_[0] &= ~0x00000001u;
}
void RapporReports_Report::clear_bits() {
  bits_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_bits();
}
const ::std::string& RapporReports_Report::bits() const {
  // @@protoc_insertion_point(field_get:rappor.RapporReports.Report.bits)
  return bits_.GetNoArena();
}
void RapporReports_Report::set_bits(const ::std::string& value) {
  set_has_bits();
  bits_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:rappor.RapporReports.Report.bits)
}
#if LANG_CXX11
void RapporReports_Report::set_bits(::std::string&& value) {
  set_has_bits();
  bits_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:rappor.RapporReports.Report.bits)
}
#endif
void RapporReports_Report::set_bits(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_bits();
  bits_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:rappor.RapporReports.Report.bits)
}
void RapporReports_Report::set_bits(const void* value, size_t size) {
  set_has_bits();
  bits_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:rappor.RapporReports.Report.bits)
}
::std::string* RapporReports_Report::mutable_bits() {
  set_has_bits();
  // @@protoc_insertion_point(field_mutable:rappor.RapporReports.Report.bits)
  return bits_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* RapporReports_Report::release_bits() {
  // @@protoc_insertion_point(field_release:rappor.RapporReports.Report.bits)
  clear_has_bits();
  return bits_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void RapporReports_Report::set_allocated_bits(::std::string* bits) {
  if (bits != NULL) {
    set_has_bits();
  } else {
    clear_has_bits();
  }
  bits_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), bits);
  // @@protoc_insertion_point(field_set_allocated:rappor.RapporReports.Report.bits)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RapporReports::kCohortFieldNumber;
const int RapporReports::kReportFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RapporReports::RapporReports()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_rappor_5fmetric_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:rappor.RapporReports)
}
RapporReports::RapporReports(const RapporReports& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      report_(from.report_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  cohort_ = from.cohort_;
  // @@protoc_insertion_point(copy_constructor:rappor.RapporReports)
}

void RapporReports::SharedCtor() {
  _cached_size_ = 0;
  cohort_ = 0;
}

RapporReports::~RapporReports() {
  // @@protoc_insertion_point(destructor:rappor.RapporReports)
  SharedDtor();
}

void RapporReports::SharedDtor() {
}

void RapporReports::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const RapporReports& RapporReports::default_instance() {
  protobuf_rappor_5fmetric_2eproto::InitDefaults();
  return *internal_default_instance();
}

RapporReports* RapporReports::New(::google::protobuf::Arena* arena) const {
  RapporReports* n = new RapporReports;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RapporReports::Clear() {
// @@protoc_insertion_point(message_clear_start:rappor.RapporReports)
  report_.Clear();
  cohort_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool RapporReports::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:rappor.RapporReports)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 cohort = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          set_has_cohort();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cohort_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .rappor.RapporReports.Report report = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_report()));
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
  // @@protoc_insertion_point(parse_success:rappor.RapporReports)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:rappor.RapporReports)
  return false;
#undef DO_
}

void RapporReports::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:rappor.RapporReports)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 cohort = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->cohort(), output);
  }

  // repeated .rappor.RapporReports.Report report = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->report_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->report(static_cast<int>(i)), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:rappor.RapporReports)
}

size_t RapporReports::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:rappor.RapporReports)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  // repeated .rappor.RapporReports.Report report = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->report_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->report(static_cast<int>(i)));
    }
  }

  // optional int32 cohort = 1;
  if (has_cohort()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->cohort());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RapporReports::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const RapporReports*>(&from));
}

void RapporReports::MergeFrom(const RapporReports& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:rappor.RapporReports)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  report_.MergeFrom(from.report_);
  if (from.has_cohort()) {
    set_cohort(from.cohort());
  }
}

void RapporReports::CopyFrom(const RapporReports& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:rappor.RapporReports)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RapporReports::IsInitialized() const {
  return true;
}

void RapporReports::Swap(RapporReports* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RapporReports::InternalSwap(RapporReports* other) {
  report_.InternalSwap(&other->report_);
  std::swap(cohort_, other->cohort_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string RapporReports::GetTypeName() const {
  return "rappor.RapporReports";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RapporReports

// optional int32 cohort = 1;
bool RapporReports::has_cohort() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void RapporReports::set_has_cohort() {
  _has_bits_[0] |= 0x00000001u;
}
void RapporReports::clear_has_cohort() {
  _has_bits_[0] &= ~0x00000001u;
}
void RapporReports::clear_cohort() {
  cohort_ = 0;
  clear_has_cohort();
}
::google::protobuf::int32 RapporReports::cohort() const {
  // @@protoc_insertion_point(field_get:rappor.RapporReports.cohort)
  return cohort_;
}
void RapporReports::set_cohort(::google::protobuf::int32 value) {
  set_has_cohort();
  cohort_ = value;
  // @@protoc_insertion_point(field_set:rappor.RapporReports.cohort)
}

// repeated .rappor.RapporReports.Report report = 2;
int RapporReports::report_size() const {
  return report_.size();
}
void RapporReports::clear_report() {
  report_.Clear();
}
const ::rappor::RapporReports_Report& RapporReports::report(int index) const {
  // @@protoc_insertion_point(field_get:rappor.RapporReports.report)
  return report_.Get(index);
}
::rappor::RapporReports_Report* RapporReports::mutable_report(int index) {
  // @@protoc_insertion_point(field_mutable:rappor.RapporReports.report)
  return report_.Mutable(index);
}
::rappor::RapporReports_Report* RapporReports::add_report() {
  // @@protoc_insertion_point(field_add:rappor.RapporReports.report)
  return report_.Add();
}
::google::protobuf::RepeatedPtrField< ::rappor::RapporReports_Report >*
RapporReports::mutable_report() {
  // @@protoc_insertion_point(field_mutable_list:rappor.RapporReports.report)
  return &report_;
}
const ::google::protobuf::RepeatedPtrField< ::rappor::RapporReports_Report >&
RapporReports::report() const {
  // @@protoc_insertion_point(field_list:rappor.RapporReports.report)
  return report_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace rappor

// @@protoc_insertion_point(global_scope)
