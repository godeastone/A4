// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: scheduling.proto

#ifndef PROTOBUF_scheduling_2eproto__INCLUDED
#define PROTOBUF_scheduling_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
namespace protodb {
class SchedulingParams;
class SchedulingParamsDefaultTypeInternal;
extern SchedulingParamsDefaultTypeInternal _SchedulingParams_default_instance_;
}  // namespace protodb

namespace protodb {

namespace protobuf_scheduling_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_scheduling_2eproto

enum SchedulingParams_NetworkRequirements {
  SchedulingParams_NetworkRequirements_NONE = 0,
  SchedulingParams_NetworkRequirements_OPTIMISTIC = 1,
  SchedulingParams_NetworkRequirements_UNMETERED = 2
};
bool SchedulingParams_NetworkRequirements_IsValid(int value);
const SchedulingParams_NetworkRequirements SchedulingParams_NetworkRequirements_NetworkRequirements_MIN = SchedulingParams_NetworkRequirements_NONE;
const SchedulingParams_NetworkRequirements SchedulingParams_NetworkRequirements_NetworkRequirements_MAX = SchedulingParams_NetworkRequirements_UNMETERED;
const int SchedulingParams_NetworkRequirements_NetworkRequirements_ARRAYSIZE = SchedulingParams_NetworkRequirements_NetworkRequirements_MAX + 1;

enum SchedulingParams_BatteryRequirements {
  SchedulingParams_BatteryRequirements_BATTERY_INSENSITIVE = 0,
  SchedulingParams_BatteryRequirements_BATTERY_SENSITIVE = 1,
  SchedulingParams_BatteryRequirements_BATTERY_CHARGING = 2
};
bool SchedulingParams_BatteryRequirements_IsValid(int value);
const SchedulingParams_BatteryRequirements SchedulingParams_BatteryRequirements_BatteryRequirements_MIN = SchedulingParams_BatteryRequirements_BATTERY_INSENSITIVE;
const SchedulingParams_BatteryRequirements SchedulingParams_BatteryRequirements_BatteryRequirements_MAX = SchedulingParams_BatteryRequirements_BATTERY_CHARGING;
const int SchedulingParams_BatteryRequirements_BatteryRequirements_ARRAYSIZE = SchedulingParams_BatteryRequirements_BatteryRequirements_MAX + 1;

enum SchedulingParams_Priority {
  SchedulingParams_Priority_LOW = 0,
  SchedulingParams_Priority_NORMAL = 1,
  SchedulingParams_Priority_HIGH = 2,
  SchedulingParams_Priority_UI = 3
};
bool SchedulingParams_Priority_IsValid(int value);
const SchedulingParams_Priority SchedulingParams_Priority_Priority_MIN = SchedulingParams_Priority_LOW;
const SchedulingParams_Priority SchedulingParams_Priority_Priority_MAX = SchedulingParams_Priority_UI;
const int SchedulingParams_Priority_Priority_ARRAYSIZE = SchedulingParams_Priority_Priority_MAX + 1;

// ===================================================================

class SchedulingParams : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:protodb.SchedulingParams) */ {
 public:
  SchedulingParams();
  virtual ~SchedulingParams();

  SchedulingParams(const SchedulingParams& from);

  inline SchedulingParams& operator=(const SchedulingParams& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const SchedulingParams& default_instance();

  static inline const SchedulingParams* internal_default_instance() {
    return reinterpret_cast<const SchedulingParams*>(
               &_SchedulingParams_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(SchedulingParams* other);

  // implements Message ----------------------------------------------

  inline SchedulingParams* New() const PROTOBUF_FINAL { return New(NULL); }

  SchedulingParams* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const SchedulingParams& from);
  void MergeFrom(const SchedulingParams& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SchedulingParams* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef SchedulingParams_NetworkRequirements NetworkRequirements;
  static const NetworkRequirements NONE =
    SchedulingParams_NetworkRequirements_NONE;
  static const NetworkRequirements OPTIMISTIC =
    SchedulingParams_NetworkRequirements_OPTIMISTIC;
  static const NetworkRequirements UNMETERED =
    SchedulingParams_NetworkRequirements_UNMETERED;
  static inline bool NetworkRequirements_IsValid(int value) {
    return SchedulingParams_NetworkRequirements_IsValid(value);
  }
  static const NetworkRequirements NetworkRequirements_MIN =
    SchedulingParams_NetworkRequirements_NetworkRequirements_MIN;
  static const NetworkRequirements NetworkRequirements_MAX =
    SchedulingParams_NetworkRequirements_NetworkRequirements_MAX;
  static const int NetworkRequirements_ARRAYSIZE =
    SchedulingParams_NetworkRequirements_NetworkRequirements_ARRAYSIZE;

  typedef SchedulingParams_BatteryRequirements BatteryRequirements;
  static const BatteryRequirements BATTERY_INSENSITIVE =
    SchedulingParams_BatteryRequirements_BATTERY_INSENSITIVE;
  static const BatteryRequirements BATTERY_SENSITIVE =
    SchedulingParams_BatteryRequirements_BATTERY_SENSITIVE;
  static const BatteryRequirements BATTERY_CHARGING =
    SchedulingParams_BatteryRequirements_BATTERY_CHARGING;
  static inline bool BatteryRequirements_IsValid(int value) {
    return SchedulingParams_BatteryRequirements_IsValid(value);
  }
  static const BatteryRequirements BatteryRequirements_MIN =
    SchedulingParams_BatteryRequirements_BatteryRequirements_MIN;
  static const BatteryRequirements BatteryRequirements_MAX =
    SchedulingParams_BatteryRequirements_BatteryRequirements_MAX;
  static const int BatteryRequirements_ARRAYSIZE =
    SchedulingParams_BatteryRequirements_BatteryRequirements_ARRAYSIZE;

  typedef SchedulingParams_Priority Priority;
  static const Priority LOW =
    SchedulingParams_Priority_LOW;
  static const Priority NORMAL =
    SchedulingParams_Priority_NORMAL;
  static const Priority HIGH =
    SchedulingParams_Priority_HIGH;
  static const Priority UI =
    SchedulingParams_Priority_UI;
  static inline bool Priority_IsValid(int value) {
    return SchedulingParams_Priority_IsValid(value);
  }
  static const Priority Priority_MIN =
    SchedulingParams_Priority_Priority_MIN;
  static const Priority Priority_MAX =
    SchedulingParams_Priority_Priority_MAX;
  static const int Priority_ARRAYSIZE =
    SchedulingParams_Priority_Priority_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // optional int64 cancel_time = 2;
  bool has_cancel_time() const;
  void clear_cancel_time();
  static const int kCancelTimeFieldNumber = 2;
  ::google::protobuf::int64 cancel_time() const;
  void set_cancel_time(::google::protobuf::int64 value);

  // optional .protodb.SchedulingParams.Priority priority = 3;
  bool has_priority() const;
  void clear_priority();
  static const int kPriorityFieldNumber = 3;
  ::protodb::SchedulingParams_Priority priority() const;
  void set_priority(::protodb::SchedulingParams_Priority value);

  // optional .protodb.SchedulingParams.NetworkRequirements network_requirements = 4;
  bool has_network_requirements() const;
  void clear_network_requirements();
  static const int kNetworkRequirementsFieldNumber = 4;
  ::protodb::SchedulingParams_NetworkRequirements network_requirements() const;
  void set_network_requirements(::protodb::SchedulingParams_NetworkRequirements value);

  // optional .protodb.SchedulingParams.BatteryRequirements battery_requirements = 5;
  bool has_battery_requirements() const;
  void clear_battery_requirements();
  static const int kBatteryRequirementsFieldNumber = 5;
  ::protodb::SchedulingParams_BatteryRequirements battery_requirements() const;
  void set_battery_requirements(::protodb::SchedulingParams_BatteryRequirements value);

  // @@protoc_insertion_point(class_scope:protodb.SchedulingParams)
 private:
  void set_has_cancel_time();
  void clear_has_cancel_time();
  void set_has_priority();
  void clear_has_priority();
  void set_has_network_requirements();
  void clear_has_network_requirements();
  void set_has_battery_requirements();
  void clear_has_battery_requirements();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int64 cancel_time_;
  int priority_;
  int network_requirements_;
  int battery_requirements_;
  friend struct protobuf_scheduling_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SchedulingParams

// optional int64 cancel_time = 2;
inline bool SchedulingParams::has_cancel_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SchedulingParams::set_has_cancel_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SchedulingParams::clear_has_cancel_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SchedulingParams::clear_cancel_time() {
  cancel_time_ = GOOGLE_LONGLONG(0);
  clear_has_cancel_time();
}
inline ::google::protobuf::int64 SchedulingParams::cancel_time() const {
  // @@protoc_insertion_point(field_get:protodb.SchedulingParams.cancel_time)
  return cancel_time_;
}
inline void SchedulingParams::set_cancel_time(::google::protobuf::int64 value) {
  set_has_cancel_time();
  cancel_time_ = value;
  // @@protoc_insertion_point(field_set:protodb.SchedulingParams.cancel_time)
}

// optional .protodb.SchedulingParams.Priority priority = 3;
inline bool SchedulingParams::has_priority() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SchedulingParams::set_has_priority() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SchedulingParams::clear_has_priority() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SchedulingParams::clear_priority() {
  priority_ = 0;
  clear_has_priority();
}
inline ::protodb::SchedulingParams_Priority SchedulingParams::priority() const {
  // @@protoc_insertion_point(field_get:protodb.SchedulingParams.priority)
  return static_cast< ::protodb::SchedulingParams_Priority >(priority_);
}
inline void SchedulingParams::set_priority(::protodb::SchedulingParams_Priority value) {
  assert(::protodb::SchedulingParams_Priority_IsValid(value));
  set_has_priority();
  priority_ = value;
  // @@protoc_insertion_point(field_set:protodb.SchedulingParams.priority)
}

// optional .protodb.SchedulingParams.NetworkRequirements network_requirements = 4;
inline bool SchedulingParams::has_network_requirements() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SchedulingParams::set_has_network_requirements() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SchedulingParams::clear_has_network_requirements() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SchedulingParams::clear_network_requirements() {
  network_requirements_ = 0;
  clear_has_network_requirements();
}
inline ::protodb::SchedulingParams_NetworkRequirements SchedulingParams::network_requirements() const {
  // @@protoc_insertion_point(field_get:protodb.SchedulingParams.network_requirements)
  return static_cast< ::protodb::SchedulingParams_NetworkRequirements >(network_requirements_);
}
inline void SchedulingParams::set_network_requirements(::protodb::SchedulingParams_NetworkRequirements value) {
  assert(::protodb::SchedulingParams_NetworkRequirements_IsValid(value));
  set_has_network_requirements();
  network_requirements_ = value;
  // @@protoc_insertion_point(field_set:protodb.SchedulingParams.network_requirements)
}

// optional .protodb.SchedulingParams.BatteryRequirements battery_requirements = 5;
inline bool SchedulingParams::has_battery_requirements() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SchedulingParams::set_has_battery_requirements() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SchedulingParams::clear_has_battery_requirements() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SchedulingParams::clear_battery_requirements() {
  battery_requirements_ = 0;
  clear_has_battery_requirements();
}
inline ::protodb::SchedulingParams_BatteryRequirements SchedulingParams::battery_requirements() const {
  // @@protoc_insertion_point(field_get:protodb.SchedulingParams.battery_requirements)
  return static_cast< ::protodb::SchedulingParams_BatteryRequirements >(battery_requirements_);
}
inline void SchedulingParams::set_battery_requirements(::protodb::SchedulingParams_BatteryRequirements value) {
  assert(::protodb::SchedulingParams_BatteryRequirements_IsValid(value));
  set_has_battery_requirements();
  battery_requirements_ = value;
  // @@protoc_insertion_point(field_set:protodb.SchedulingParams.battery_requirements)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace protodb

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::protodb::SchedulingParams_NetworkRequirements> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::protodb::SchedulingParams_BatteryRequirements> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::protodb::SchedulingParams_Priority> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_scheduling_2eproto__INCLUDED