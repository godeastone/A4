// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perfetto/trace/trusted_packet.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "perfetto/trace/trusted_packet.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace perfetto {
namespace protos {
class TrustedPacketDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<TrustedPacket> {
  public:
  ::google::protobuf::int32 trusted_uid_;
} _TrustedPacket_default_instance_;

namespace protobuf_perfetto_2ftrace_2ftrusted_5fpacket_2eproto {

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
  _TrustedPacket_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::perfetto::protos::protobuf_perfetto_2fconfig_2ftrace_5fconfig_2eproto::InitDefaults();
  ::perfetto::protos::protobuf_perfetto_2ftrace_2fclock_5fsnapshot_2eproto::InitDefaults();
  ::perfetto::protos::protobuf_perfetto_2ftrace_2ftrace_5fstats_2eproto::InitDefaults();
  _TrustedPacket_default_instance_.DefaultConstruct();
  _TrustedPacket_default_instance_.get_mutable()->clock_snapshot_ = const_cast< ::perfetto::protos::ClockSnapshot*>(
      ::perfetto::protos::ClockSnapshot::internal_default_instance());
  _TrustedPacket_default_instance_.get_mutable()->trace_config_ = const_cast< ::perfetto::protos::TraceConfig*>(
      ::perfetto::protos::TraceConfig::internal_default_instance());
  _TrustedPacket_default_instance_.get_mutable()->trace_stats_ = const_cast< ::perfetto::protos::TraceStats*>(
      ::perfetto::protos::TraceStats::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  ::perfetto::protos::protobuf_perfetto_2fconfig_2ftrace_5fconfig_2eproto::AddDescriptors();
  ::perfetto::protos::protobuf_perfetto_2ftrace_2fclock_5fsnapshot_2eproto::AddDescriptors();
  ::perfetto::protos::protobuf_perfetto_2ftrace_2ftrace_5fstats_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}

}  // namespace protobuf_perfetto_2ftrace_2ftrusted_5fpacket_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TrustedPacket::kTrustedUidFieldNumber;
const int TrustedPacket::kClockSnapshotFieldNumber;
const int TrustedPacket::kTraceConfigFieldNumber;
const int TrustedPacket::kTraceStatsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TrustedPacket::TrustedPacket()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_perfetto_2ftrace_2ftrusted_5fpacket_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:perfetto.protos.TrustedPacket)
}
TrustedPacket::TrustedPacket(const TrustedPacket& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_clock_snapshot()) {
    clock_snapshot_ = new ::perfetto::protos::ClockSnapshot(*from.clock_snapshot_);
  } else {
    clock_snapshot_ = NULL;
  }
  if (from.has_trace_config()) {
    trace_config_ = new ::perfetto::protos::TraceConfig(*from.trace_config_);
  } else {
    trace_config_ = NULL;
  }
  if (from.has_trace_stats()) {
    trace_stats_ = new ::perfetto::protos::TraceStats(*from.trace_stats_);
  } else {
    trace_stats_ = NULL;
  }
  clear_has_optional_trusted_uid();
  switch (from.optional_trusted_uid_case()) {
    case kTrustedUid: {
      set_trusted_uid(from.trusted_uid());
      break;
    }
    case OPTIONAL_TRUSTED_UID_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.TrustedPacket)
}

void TrustedPacket::SharedCtor() {
  ::memset(&clock_snapshot_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&trace_stats_) -
      reinterpret_cast<char*>(&clock_snapshot_)) + sizeof(trace_stats_));
  clear_has_optional_trusted_uid();
  _cached_size_ = 0;
}

TrustedPacket::~TrustedPacket() {
  // @@protoc_insertion_point(destructor:perfetto.protos.TrustedPacket)
  SharedDtor();
}

void TrustedPacket::SharedDtor() {
  if (this != internal_default_instance()) {
    delete clock_snapshot_;
  }
  if (this != internal_default_instance()) {
    delete trace_config_;
  }
  if (this != internal_default_instance()) {
    delete trace_stats_;
  }
  if (has_optional_trusted_uid()) {
    clear_optional_trusted_uid();
  }
}

void TrustedPacket::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const TrustedPacket& TrustedPacket::default_instance() {
  protobuf_perfetto_2ftrace_2ftrusted_5fpacket_2eproto::InitDefaults();
  return *internal_default_instance();
}

TrustedPacket* TrustedPacket::New(::google::protobuf::Arena* arena) const {
  TrustedPacket* n = new TrustedPacket;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TrustedPacket::clear_optional_trusted_uid() {
// @@protoc_insertion_point(one_of_clear_start:perfetto.protos.TrustedPacket)
  switch (optional_trusted_uid_case()) {
    case kTrustedUid: {
      // No need to clear
      break;
    }
    case OPTIONAL_TRUSTED_UID_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = OPTIONAL_TRUSTED_UID_NOT_SET;
}


void TrustedPacket::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.TrustedPacket)
  if (GetArenaNoVirtual() == NULL && clock_snapshot_ != NULL) {
    delete clock_snapshot_;
  }
  clock_snapshot_ = NULL;
  if (GetArenaNoVirtual() == NULL && trace_config_ != NULL) {
    delete trace_config_;
  }
  trace_config_ = NULL;
  if (GetArenaNoVirtual() == NULL && trace_stats_ != NULL) {
    delete trace_stats_;
  }
  trace_stats_ = NULL;
  clear_optional_trusted_uid();
}

bool TrustedPacket::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:perfetto.protos.TrustedPacket)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 trusted_uid = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {
          clear_optional_trusted_uid();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &optional_trusted_uid_.trusted_uid_)));
          set_has_trusted_uid();
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .perfetto.protos.ClockSnapshot clock_snapshot = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_clock_snapshot()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .perfetto.protos.TraceConfig trace_config = 33;
      case 33: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_trace_config()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .perfetto.protos.TraceStats trace_stats = 35;
      case 35: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_trace_stats()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:perfetto.protos.TrustedPacket)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:perfetto.protos.TrustedPacket)
  return false;
#undef DO_
}

void TrustedPacket::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:perfetto.protos.TrustedPacket)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 trusted_uid = 3;
  if (has_trusted_uid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->trusted_uid(), output);
  }

  // .perfetto.protos.ClockSnapshot clock_snapshot = 6;
  if (this->has_clock_snapshot()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      6, *this->clock_snapshot_, output);
  }

  // .perfetto.protos.TraceConfig trace_config = 33;
  if (this->has_trace_config()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      33, *this->trace_config_, output);
  }

  // .perfetto.protos.TraceStats trace_stats = 35;
  if (this->has_trace_stats()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      35, *this->trace_stats_, output);
  }

  // @@protoc_insertion_point(serialize_end:perfetto.protos.TrustedPacket)
}

size_t TrustedPacket::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.TrustedPacket)
  size_t total_size = 0;

  // .perfetto.protos.ClockSnapshot clock_snapshot = 6;
  if (this->has_clock_snapshot()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->clock_snapshot_);
  }

  // .perfetto.protos.TraceConfig trace_config = 33;
  if (this->has_trace_config()) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->trace_config_);
  }

  // .perfetto.protos.TraceStats trace_stats = 35;
  if (this->has_trace_stats()) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->trace_stats_);
  }

  switch (optional_trusted_uid_case()) {
    // int32 trusted_uid = 3;
    case kTrustedUid: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->trusted_uid());
      break;
    }
    case OPTIONAL_TRUSTED_UID_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TrustedPacket::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const TrustedPacket*>(&from));
}

void TrustedPacket::MergeFrom(const TrustedPacket& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.TrustedPacket)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_clock_snapshot()) {
    mutable_clock_snapshot()->::perfetto::protos::ClockSnapshot::MergeFrom(from.clock_snapshot());
  }
  if (from.has_trace_config()) {
    mutable_trace_config()->::perfetto::protos::TraceConfig::MergeFrom(from.trace_config());
  }
  if (from.has_trace_stats()) {
    mutable_trace_stats()->::perfetto::protos::TraceStats::MergeFrom(from.trace_stats());
  }
  switch (from.optional_trusted_uid_case()) {
    case kTrustedUid: {
      set_trusted_uid(from.trusted_uid());
      break;
    }
    case OPTIONAL_TRUSTED_UID_NOT_SET: {
      break;
    }
  }
}

void TrustedPacket::CopyFrom(const TrustedPacket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.TrustedPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrustedPacket::IsInitialized() const {
  return true;
}

void TrustedPacket::Swap(TrustedPacket* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TrustedPacket::InternalSwap(TrustedPacket* other) {
  std::swap(clock_snapshot_, other->clock_snapshot_);
  std::swap(trace_config_, other->trace_config_);
  std::swap(trace_stats_, other->trace_stats_);
  std::swap(optional_trusted_uid_, other->optional_trusted_uid_);
  std::swap(_oneof_case_[0], other->_oneof_case_[0]);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string TrustedPacket::GetTypeName() const {
  return "perfetto.protos.TrustedPacket";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TrustedPacket

// int32 trusted_uid = 3;
bool TrustedPacket::has_trusted_uid() const {
  return optional_trusted_uid_case() == kTrustedUid;
}
void TrustedPacket::set_has_trusted_uid() {
  _oneof_case_[0] = kTrustedUid;
}
void TrustedPacket::clear_trusted_uid() {
  if (has_trusted_uid()) {
    optional_trusted_uid_.trusted_uid_ = 0;
    clear_has_optional_trusted_uid();
  }
}
::google::protobuf::int32 TrustedPacket::trusted_uid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TrustedPacket.trusted_uid)
  if (has_trusted_uid()) {
    return optional_trusted_uid_.trusted_uid_;
  }
  return 0;
}
void TrustedPacket::set_trusted_uid(::google::protobuf::int32 value) {
  if (!has_trusted_uid()) {
    clear_optional_trusted_uid();
    set_has_trusted_uid();
  }
  optional_trusted_uid_.trusted_uid_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TrustedPacket.trusted_uid)
}

// .perfetto.protos.ClockSnapshot clock_snapshot = 6;
bool TrustedPacket::has_clock_snapshot() const {
  return this != internal_default_instance() && clock_snapshot_ != NULL;
}
void TrustedPacket::clear_clock_snapshot() {
  if (GetArenaNoVirtual() == NULL && clock_snapshot_ != NULL) delete clock_snapshot_;
  clock_snapshot_ = NULL;
}
const ::perfetto::protos::ClockSnapshot& TrustedPacket::clock_snapshot() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TrustedPacket.clock_snapshot)
  return clock_snapshot_ != NULL ? *clock_snapshot_
                         : *::perfetto::protos::ClockSnapshot::internal_default_instance();
}
::perfetto::protos::ClockSnapshot* TrustedPacket::mutable_clock_snapshot() {
  
  if (clock_snapshot_ == NULL) {
    clock_snapshot_ = new ::perfetto::protos::ClockSnapshot;
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TrustedPacket.clock_snapshot)
  return clock_snapshot_;
}
::perfetto::protos::ClockSnapshot* TrustedPacket::release_clock_snapshot() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TrustedPacket.clock_snapshot)
  
  ::perfetto::protos::ClockSnapshot* temp = clock_snapshot_;
  clock_snapshot_ = NULL;
  return temp;
}
void TrustedPacket::set_allocated_clock_snapshot(::perfetto::protos::ClockSnapshot* clock_snapshot) {
  delete clock_snapshot_;
  clock_snapshot_ = clock_snapshot;
  if (clock_snapshot) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TrustedPacket.clock_snapshot)
}

// .perfetto.protos.TraceConfig trace_config = 33;
bool TrustedPacket::has_trace_config() const {
  return this != internal_default_instance() && trace_config_ != NULL;
}
void TrustedPacket::clear_trace_config() {
  if (GetArenaNoVirtual() == NULL && trace_config_ != NULL) delete trace_config_;
  trace_config_ = NULL;
}
const ::perfetto::protos::TraceConfig& TrustedPacket::trace_config() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TrustedPacket.trace_config)
  return trace_config_ != NULL ? *trace_config_
                         : *::perfetto::protos::TraceConfig::internal_default_instance();
}
::perfetto::protos::TraceConfig* TrustedPacket::mutable_trace_config() {
  
  if (trace_config_ == NULL) {
    trace_config_ = new ::perfetto::protos::TraceConfig;
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TrustedPacket.trace_config)
  return trace_config_;
}
::perfetto::protos::TraceConfig* TrustedPacket::release_trace_config() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TrustedPacket.trace_config)
  
  ::perfetto::protos::TraceConfig* temp = trace_config_;
  trace_config_ = NULL;
  return temp;
}
void TrustedPacket::set_allocated_trace_config(::perfetto::protos::TraceConfig* trace_config) {
  delete trace_config_;
  trace_config_ = trace_config;
  if (trace_config) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TrustedPacket.trace_config)
}

// .perfetto.protos.TraceStats trace_stats = 35;
bool TrustedPacket::has_trace_stats() const {
  return this != internal_default_instance() && trace_stats_ != NULL;
}
void TrustedPacket::clear_trace_stats() {
  if (GetArenaNoVirtual() == NULL && trace_stats_ != NULL) delete trace_stats_;
  trace_stats_ = NULL;
}
const ::perfetto::protos::TraceStats& TrustedPacket::trace_stats() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TrustedPacket.trace_stats)
  return trace_stats_ != NULL ? *trace_stats_
                         : *::perfetto::protos::TraceStats::internal_default_instance();
}
::perfetto::protos::TraceStats* TrustedPacket::mutable_trace_stats() {
  
  if (trace_stats_ == NULL) {
    trace_stats_ = new ::perfetto::protos::TraceStats;
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TrustedPacket.trace_stats)
  return trace_stats_;
}
::perfetto::protos::TraceStats* TrustedPacket::release_trace_stats() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TrustedPacket.trace_stats)
  
  ::perfetto::protos::TraceStats* temp = trace_stats_;
  trace_stats_ = NULL;
  return temp;
}
void TrustedPacket::set_allocated_trace_stats(::perfetto::protos::TraceStats* trace_stats) {
  delete trace_stats_;
  trace_stats_ = trace_stats;
  if (trace_stats) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TrustedPacket.trace_stats)
}

bool TrustedPacket::has_optional_trusted_uid() const {
  return optional_trusted_uid_case() != OPTIONAL_TRUSTED_UID_NOT_SET;
}
void TrustedPacket::clear_has_optional_trusted_uid() {
  _oneof_case_[0] = OPTIONAL_TRUSTED_UID_NOT_SET;
}
TrustedPacket::OptionalTrustedUidCase TrustedPacket::optional_trusted_uid_case() const {
  return TrustedPacket::OptionalTrustedUidCase(_oneof_case_[0]);
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)
