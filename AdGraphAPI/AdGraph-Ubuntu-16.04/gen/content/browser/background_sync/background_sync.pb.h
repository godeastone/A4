// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: background_sync.proto

#ifndef PROTOBUF_background_5fsync_2eproto__INCLUDED
#define PROTOBUF_background_5fsync_2eproto__INCLUDED

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
namespace content {
class BackgroundSyncRegistrationProto;
class BackgroundSyncRegistrationProtoDefaultTypeInternal;
extern BackgroundSyncRegistrationProtoDefaultTypeInternal _BackgroundSyncRegistrationProto_default_instance_;
class BackgroundSyncRegistrationsProto;
class BackgroundSyncRegistrationsProtoDefaultTypeInternal;
extern BackgroundSyncRegistrationsProtoDefaultTypeInternal _BackgroundSyncRegistrationsProto_default_instance_;
}  // namespace content

namespace content {

namespace protobuf_background_5fsync_2eproto {
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
}  // namespace protobuf_background_5fsync_2eproto

enum SyncNetworkState {
  NETWORK_STATE_ANY = 0,
  NETWORK_STATE_AVOID_CELLULAR = 1,
  NETWORK_STATE_ONLINE = 2
};
bool SyncNetworkState_IsValid(int value);
const SyncNetworkState SyncNetworkState_MIN = NETWORK_STATE_ANY;
const SyncNetworkState SyncNetworkState_MAX = NETWORK_STATE_ONLINE;
const int SyncNetworkState_ARRAYSIZE = SyncNetworkState_MAX + 1;

// ===================================================================

class BackgroundSyncRegistrationProto : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:content.BackgroundSyncRegistrationProto) */ {
 public:
  BackgroundSyncRegistrationProto();
  virtual ~BackgroundSyncRegistrationProto();

  BackgroundSyncRegistrationProto(const BackgroundSyncRegistrationProto& from);

  inline BackgroundSyncRegistrationProto& operator=(const BackgroundSyncRegistrationProto& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const BackgroundSyncRegistrationProto& default_instance();

  static inline const BackgroundSyncRegistrationProto* internal_default_instance() {
    return reinterpret_cast<const BackgroundSyncRegistrationProto*>(
               &_BackgroundSyncRegistrationProto_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(BackgroundSyncRegistrationProto* other);

  // implements Message ----------------------------------------------

  inline BackgroundSyncRegistrationProto* New() const PROTOBUF_FINAL { return New(NULL); }

  BackgroundSyncRegistrationProto* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const BackgroundSyncRegistrationProto& from);
  void MergeFrom(const BackgroundSyncRegistrationProto& from);
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
  void InternalSwap(BackgroundSyncRegistrationProto* other);
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

  // accessors -------------------------------------------------------

  // required string tag = 2;
  bool has_tag() const;
  void clear_tag();
  static const int kTagFieldNumber = 2;
  const ::std::string& tag() const;
  void set_tag(const ::std::string& value);
  #if LANG_CXX11
  void set_tag(::std::string&& value);
  #endif
  void set_tag(const char* value);
  void set_tag(const char* value, size_t size);
  ::std::string* mutable_tag();
  ::std::string* release_tag();
  void set_allocated_tag(::std::string* tag);

  // required int64 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int64 id() const;
  void set_id(::google::protobuf::int64 value);

  // required .content.SyncNetworkState network_state = 5;
  bool has_network_state() const;
  void clear_network_state();
  static const int kNetworkStateFieldNumber = 5;
  ::content::SyncNetworkState network_state() const;
  void set_network_state(::content::SyncNetworkState value);

  // required int32 num_attempts = 7;
  bool has_num_attempts() const;
  void clear_num_attempts();
  static const int kNumAttemptsFieldNumber = 7;
  ::google::protobuf::int32 num_attempts() const;
  void set_num_attempts(::google::protobuf::int32 value);

  // required int64 delay_until = 8;
  bool has_delay_until() const;
  void clear_delay_until();
  static const int kDelayUntilFieldNumber = 8;
  ::google::protobuf::int64 delay_until() const;
  void set_delay_until(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:content.BackgroundSyncRegistrationProto)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_tag();
  void clear_has_tag();
  void set_has_network_state();
  void clear_has_network_state();
  void set_has_num_attempts();
  void clear_has_num_attempts();
  void set_has_delay_until();
  void clear_has_delay_until();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr tag_;
  ::google::protobuf::int64 id_;
  int network_state_;
  ::google::protobuf::int32 num_attempts_;
  ::google::protobuf::int64 delay_until_;
  friend struct protobuf_background_5fsync_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class BackgroundSyncRegistrationsProto : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:content.BackgroundSyncRegistrationsProto) */ {
 public:
  BackgroundSyncRegistrationsProto();
  virtual ~BackgroundSyncRegistrationsProto();

  BackgroundSyncRegistrationsProto(const BackgroundSyncRegistrationsProto& from);

  inline BackgroundSyncRegistrationsProto& operator=(const BackgroundSyncRegistrationsProto& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const BackgroundSyncRegistrationsProto& default_instance();

  static inline const BackgroundSyncRegistrationsProto* internal_default_instance() {
    return reinterpret_cast<const BackgroundSyncRegistrationsProto*>(
               &_BackgroundSyncRegistrationsProto_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(BackgroundSyncRegistrationsProto* other);

  // implements Message ----------------------------------------------

  inline BackgroundSyncRegistrationsProto* New() const PROTOBUF_FINAL { return New(NULL); }

  BackgroundSyncRegistrationsProto* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const BackgroundSyncRegistrationsProto& from);
  void MergeFrom(const BackgroundSyncRegistrationsProto& from);
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
  void InternalSwap(BackgroundSyncRegistrationsProto* other);
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

  // accessors -------------------------------------------------------

  // repeated .content.BackgroundSyncRegistrationProto registration = 1;
  int registration_size() const;
  void clear_registration();
  static const int kRegistrationFieldNumber = 1;
  const ::content::BackgroundSyncRegistrationProto& registration(int index) const;
  ::content::BackgroundSyncRegistrationProto* mutable_registration(int index);
  ::content::BackgroundSyncRegistrationProto* add_registration();
  ::google::protobuf::RepeatedPtrField< ::content::BackgroundSyncRegistrationProto >*
      mutable_registration();
  const ::google::protobuf::RepeatedPtrField< ::content::BackgroundSyncRegistrationProto >&
      registration() const;

  // required string origin = 3;
  bool has_origin() const;
  void clear_origin();
  static const int kOriginFieldNumber = 3;
  const ::std::string& origin() const;
  void set_origin(const ::std::string& value);
  #if LANG_CXX11
  void set_origin(::std::string&& value);
  #endif
  void set_origin(const char* value);
  void set_origin(const char* value, size_t size);
  ::std::string* mutable_origin();
  ::std::string* release_origin();
  void set_allocated_origin(::std::string* origin);

  // required int64 next_registration_id = 2;
  bool has_next_registration_id() const;
  void clear_next_registration_id();
  static const int kNextRegistrationIdFieldNumber = 2;
  ::google::protobuf::int64 next_registration_id() const;
  void set_next_registration_id(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:content.BackgroundSyncRegistrationsProto)
 private:
  void set_has_next_registration_id();
  void clear_has_next_registration_id();
  void set_has_origin();
  void clear_has_origin();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::content::BackgroundSyncRegistrationProto > registration_;
  ::google::protobuf::internal::ArenaStringPtr origin_;
  ::google::protobuf::int64 next_registration_id_;
  friend struct protobuf_background_5fsync_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// BackgroundSyncRegistrationProto

// required int64 id = 1;
inline bool BackgroundSyncRegistrationProto::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BackgroundSyncRegistrationProto::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BackgroundSyncRegistrationProto::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BackgroundSyncRegistrationProto::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 BackgroundSyncRegistrationProto::id() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationProto.id)
  return id_;
}
inline void BackgroundSyncRegistrationProto::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationProto.id)
}

// required string tag = 2;
inline bool BackgroundSyncRegistrationProto::has_tag() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BackgroundSyncRegistrationProto::set_has_tag() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BackgroundSyncRegistrationProto::clear_has_tag() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BackgroundSyncRegistrationProto::clear_tag() {
  tag_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_tag();
}
inline const ::std::string& BackgroundSyncRegistrationProto::tag() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationProto.tag)
  return tag_.GetNoArena();
}
inline void BackgroundSyncRegistrationProto::set_tag(const ::std::string& value) {
  set_has_tag();
  tag_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationProto.tag)
}
#if LANG_CXX11
inline void BackgroundSyncRegistrationProto::set_tag(::std::string&& value) {
  set_has_tag();
  tag_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:content.BackgroundSyncRegistrationProto.tag)
}
#endif
inline void BackgroundSyncRegistrationProto::set_tag(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_tag();
  tag_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:content.BackgroundSyncRegistrationProto.tag)
}
inline void BackgroundSyncRegistrationProto::set_tag(const char* value, size_t size) {
  set_has_tag();
  tag_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:content.BackgroundSyncRegistrationProto.tag)
}
inline ::std::string* BackgroundSyncRegistrationProto::mutable_tag() {
  set_has_tag();
  // @@protoc_insertion_point(field_mutable:content.BackgroundSyncRegistrationProto.tag)
  return tag_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BackgroundSyncRegistrationProto::release_tag() {
  // @@protoc_insertion_point(field_release:content.BackgroundSyncRegistrationProto.tag)
  clear_has_tag();
  return tag_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BackgroundSyncRegistrationProto::set_allocated_tag(::std::string* tag) {
  if (tag != NULL) {
    set_has_tag();
  } else {
    clear_has_tag();
  }
  tag_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tag);
  // @@protoc_insertion_point(field_set_allocated:content.BackgroundSyncRegistrationProto.tag)
}

// required .content.SyncNetworkState network_state = 5;
inline bool BackgroundSyncRegistrationProto::has_network_state() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BackgroundSyncRegistrationProto::set_has_network_state() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BackgroundSyncRegistrationProto::clear_has_network_state() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BackgroundSyncRegistrationProto::clear_network_state() {
  network_state_ = 0;
  clear_has_network_state();
}
inline ::content::SyncNetworkState BackgroundSyncRegistrationProto::network_state() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationProto.network_state)
  return static_cast< ::content::SyncNetworkState >(network_state_);
}
inline void BackgroundSyncRegistrationProto::set_network_state(::content::SyncNetworkState value) {
  assert(::content::SyncNetworkState_IsValid(value));
  set_has_network_state();
  network_state_ = value;
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationProto.network_state)
}

// required int32 num_attempts = 7;
inline bool BackgroundSyncRegistrationProto::has_num_attempts() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BackgroundSyncRegistrationProto::set_has_num_attempts() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BackgroundSyncRegistrationProto::clear_has_num_attempts() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BackgroundSyncRegistrationProto::clear_num_attempts() {
  num_attempts_ = 0;
  clear_has_num_attempts();
}
inline ::google::protobuf::int32 BackgroundSyncRegistrationProto::num_attempts() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationProto.num_attempts)
  return num_attempts_;
}
inline void BackgroundSyncRegistrationProto::set_num_attempts(::google::protobuf::int32 value) {
  set_has_num_attempts();
  num_attempts_ = value;
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationProto.num_attempts)
}

// required int64 delay_until = 8;
inline bool BackgroundSyncRegistrationProto::has_delay_until() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void BackgroundSyncRegistrationProto::set_has_delay_until() {
  _has_bits_[0] |= 0x00000010u;
}
inline void BackgroundSyncRegistrationProto::clear_has_delay_until() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void BackgroundSyncRegistrationProto::clear_delay_until() {
  delay_until_ = GOOGLE_LONGLONG(0);
  clear_has_delay_until();
}
inline ::google::protobuf::int64 BackgroundSyncRegistrationProto::delay_until() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationProto.delay_until)
  return delay_until_;
}
inline void BackgroundSyncRegistrationProto::set_delay_until(::google::protobuf::int64 value) {
  set_has_delay_until();
  delay_until_ = value;
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationProto.delay_until)
}

// -------------------------------------------------------------------

// BackgroundSyncRegistrationsProto

// repeated .content.BackgroundSyncRegistrationProto registration = 1;
inline int BackgroundSyncRegistrationsProto::registration_size() const {
  return registration_.size();
}
inline void BackgroundSyncRegistrationsProto::clear_registration() {
  registration_.Clear();
}
inline const ::content::BackgroundSyncRegistrationProto& BackgroundSyncRegistrationsProto::registration(int index) const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationsProto.registration)
  return registration_.Get(index);
}
inline ::content::BackgroundSyncRegistrationProto* BackgroundSyncRegistrationsProto::mutable_registration(int index) {
  // @@protoc_insertion_point(field_mutable:content.BackgroundSyncRegistrationsProto.registration)
  return registration_.Mutable(index);
}
inline ::content::BackgroundSyncRegistrationProto* BackgroundSyncRegistrationsProto::add_registration() {
  // @@protoc_insertion_point(field_add:content.BackgroundSyncRegistrationsProto.registration)
  return registration_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::content::BackgroundSyncRegistrationProto >*
BackgroundSyncRegistrationsProto::mutable_registration() {
  // @@protoc_insertion_point(field_mutable_list:content.BackgroundSyncRegistrationsProto.registration)
  return &registration_;
}
inline const ::google::protobuf::RepeatedPtrField< ::content::BackgroundSyncRegistrationProto >&
BackgroundSyncRegistrationsProto::registration() const {
  // @@protoc_insertion_point(field_list:content.BackgroundSyncRegistrationsProto.registration)
  return registration_;
}

// required int64 next_registration_id = 2;
inline bool BackgroundSyncRegistrationsProto::has_next_registration_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BackgroundSyncRegistrationsProto::set_has_next_registration_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BackgroundSyncRegistrationsProto::clear_has_next_registration_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BackgroundSyncRegistrationsProto::clear_next_registration_id() {
  next_registration_id_ = GOOGLE_LONGLONG(0);
  clear_has_next_registration_id();
}
inline ::google::protobuf::int64 BackgroundSyncRegistrationsProto::next_registration_id() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationsProto.next_registration_id)
  return next_registration_id_;
}
inline void BackgroundSyncRegistrationsProto::set_next_registration_id(::google::protobuf::int64 value) {
  set_has_next_registration_id();
  next_registration_id_ = value;
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationsProto.next_registration_id)
}

// required string origin = 3;
inline bool BackgroundSyncRegistrationsProto::has_origin() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BackgroundSyncRegistrationsProto::set_has_origin() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BackgroundSyncRegistrationsProto::clear_has_origin() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BackgroundSyncRegistrationsProto::clear_origin() {
  origin_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_origin();
}
inline const ::std::string& BackgroundSyncRegistrationsProto::origin() const {
  // @@protoc_insertion_point(field_get:content.BackgroundSyncRegistrationsProto.origin)
  return origin_.GetNoArena();
}
inline void BackgroundSyncRegistrationsProto::set_origin(const ::std::string& value) {
  set_has_origin();
  origin_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:content.BackgroundSyncRegistrationsProto.origin)
}
#if LANG_CXX11
inline void BackgroundSyncRegistrationsProto::set_origin(::std::string&& value) {
  set_has_origin();
  origin_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:content.BackgroundSyncRegistrationsProto.origin)
}
#endif
inline void BackgroundSyncRegistrationsProto::set_origin(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_origin();
  origin_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:content.BackgroundSyncRegistrationsProto.origin)
}
inline void BackgroundSyncRegistrationsProto::set_origin(const char* value, size_t size) {
  set_has_origin();
  origin_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:content.BackgroundSyncRegistrationsProto.origin)
}
inline ::std::string* BackgroundSyncRegistrationsProto::mutable_origin() {
  set_has_origin();
  // @@protoc_insertion_point(field_mutable:content.BackgroundSyncRegistrationsProto.origin)
  return origin_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BackgroundSyncRegistrationsProto::release_origin() {
  // @@protoc_insertion_point(field_release:content.BackgroundSyncRegistrationsProto.origin)
  clear_has_origin();
  return origin_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BackgroundSyncRegistrationsProto::set_allocated_origin(::std::string* origin) {
  if (origin != NULL) {
    set_has_origin();
  } else {
    clear_has_origin();
  }
  origin_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), origin);
  // @@protoc_insertion_point(field_set_allocated:content.BackgroundSyncRegistrationsProto.origin)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace content

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::content::SyncNetworkState> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_background_5fsync_2eproto__INCLUDED