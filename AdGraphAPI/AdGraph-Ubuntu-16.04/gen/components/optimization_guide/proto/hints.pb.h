// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hints.proto

#ifndef PROTOBUF_hints_2eproto__INCLUDED
#define PROTOBUF_hints_2eproto__INCLUDED

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
namespace optimization_guide {
namespace proto {
class Configuration;
class ConfigurationDefaultTypeInternal;
extern ConfigurationDefaultTypeInternal _Configuration_default_instance_;
class Hint;
class HintDefaultTypeInternal;
extern HintDefaultTypeInternal _Hint_default_instance_;
class Optimization;
class OptimizationDefaultTypeInternal;
extern OptimizationDefaultTypeInternal _Optimization_default_instance_;
}  // namespace proto
}  // namespace optimization_guide

namespace optimization_guide {
namespace proto {

namespace protobuf_hints_2eproto {
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
}  // namespace protobuf_hints_2eproto

enum OptimizationType {
  TYPE_UNSPECIFIED = 0,
  NOSCRIPT = 1
};
bool OptimizationType_IsValid(int value);
const OptimizationType OptimizationType_MIN = TYPE_UNSPECIFIED;
const OptimizationType OptimizationType_MAX = NOSCRIPT;
const int OptimizationType_ARRAYSIZE = OptimizationType_MAX + 1;

enum KeyRepresentation {
  REPRESENTATION_UNSPECIFIED = 0,
  HOST_SUFFIX = 1
};
bool KeyRepresentation_IsValid(int value);
const KeyRepresentation KeyRepresentation_MIN = REPRESENTATION_UNSPECIFIED;
const KeyRepresentation KeyRepresentation_MAX = HOST_SUFFIX;
const int KeyRepresentation_ARRAYSIZE = KeyRepresentation_MAX + 1;

// ===================================================================

class Optimization : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:optimization_guide.proto.Optimization) */ {
 public:
  Optimization();
  virtual ~Optimization();

  Optimization(const Optimization& from);

  inline Optimization& operator=(const Optimization& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const Optimization& default_instance();

  static inline const Optimization* internal_default_instance() {
    return reinterpret_cast<const Optimization*>(
               &_Optimization_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(Optimization* other);

  // implements Message ----------------------------------------------

  inline Optimization* New() const PROTOBUF_FINAL { return New(NULL); }

  Optimization* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Optimization& from);
  void MergeFrom(const Optimization& from);
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
  void InternalSwap(Optimization* other);
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

  // optional int64 inflation_percent = 2;
  bool has_inflation_percent() const;
  void clear_inflation_percent();
  static const int kInflationPercentFieldNumber = 2;
  ::google::protobuf::int64 inflation_percent() const;
  void set_inflation_percent(::google::protobuf::int64 value);

  // optional .optimization_guide.proto.OptimizationType optimization_type = 1;
  bool has_optimization_type() const;
  void clear_optimization_type();
  static const int kOptimizationTypeFieldNumber = 1;
  ::optimization_guide::proto::OptimizationType optimization_type() const;
  void set_optimization_type(::optimization_guide::proto::OptimizationType value);

  // @@protoc_insertion_point(class_scope:optimization_guide.proto.Optimization)
 private:
  void set_has_optimization_type();
  void clear_has_optimization_type();
  void set_has_inflation_percent();
  void clear_has_inflation_percent();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int64 inflation_percent_;
  int optimization_type_;
  friend struct protobuf_hints_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Hint : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:optimization_guide.proto.Hint) */ {
 public:
  Hint();
  virtual ~Hint();

  Hint(const Hint& from);

  inline Hint& operator=(const Hint& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const Hint& default_instance();

  static inline const Hint* internal_default_instance() {
    return reinterpret_cast<const Hint*>(
               &_Hint_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(Hint* other);

  // implements Message ----------------------------------------------

  inline Hint* New() const PROTOBUF_FINAL { return New(NULL); }

  Hint* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Hint& from);
  void MergeFrom(const Hint& from);
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
  void InternalSwap(Hint* other);
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

  // repeated .optimization_guide.proto.Optimization whitelisted_optimizations = 3;
  int whitelisted_optimizations_size() const;
  void clear_whitelisted_optimizations();
  static const int kWhitelistedOptimizationsFieldNumber = 3;
  const ::optimization_guide::proto::Optimization& whitelisted_optimizations(int index) const;
  ::optimization_guide::proto::Optimization* mutable_whitelisted_optimizations(int index);
  ::optimization_guide::proto::Optimization* add_whitelisted_optimizations();
  ::google::protobuf::RepeatedPtrField< ::optimization_guide::proto::Optimization >*
      mutable_whitelisted_optimizations();
  const ::google::protobuf::RepeatedPtrField< ::optimization_guide::proto::Optimization >&
      whitelisted_optimizations() const;

  // optional string key = 2;
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 2;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // optional .optimization_guide.proto.KeyRepresentation key_representation = 1;
  bool has_key_representation() const;
  void clear_key_representation();
  static const int kKeyRepresentationFieldNumber = 1;
  ::optimization_guide::proto::KeyRepresentation key_representation() const;
  void set_key_representation(::optimization_guide::proto::KeyRepresentation value);

  // @@protoc_insertion_point(class_scope:optimization_guide.proto.Hint)
 private:
  void set_has_key_representation();
  void clear_has_key_representation();
  void set_has_key();
  void clear_has_key();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::optimization_guide::proto::Optimization > whitelisted_optimizations_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  int key_representation_;
  friend struct protobuf_hints_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Configuration : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:optimization_guide.proto.Configuration) */ {
 public:
  Configuration();
  virtual ~Configuration();

  Configuration(const Configuration& from);

  inline Configuration& operator=(const Configuration& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const Configuration& default_instance();

  static inline const Configuration* internal_default_instance() {
    return reinterpret_cast<const Configuration*>(
               &_Configuration_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(Configuration* other);

  // implements Message ----------------------------------------------

  inline Configuration* New() const PROTOBUF_FINAL { return New(NULL); }

  Configuration* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Configuration& from);
  void MergeFrom(const Configuration& from);
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
  void InternalSwap(Configuration* other);
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

  // repeated .optimization_guide.proto.Hint hints = 1;
  int hints_size() const;
  void clear_hints();
  static const int kHintsFieldNumber = 1;
  const ::optimization_guide::proto::Hint& hints(int index) const;
  ::optimization_guide::proto::Hint* mutable_hints(int index);
  ::optimization_guide::proto::Hint* add_hints();
  ::google::protobuf::RepeatedPtrField< ::optimization_guide::proto::Hint >*
      mutable_hints();
  const ::google::protobuf::RepeatedPtrField< ::optimization_guide::proto::Hint >&
      hints() const;

  // @@protoc_insertion_point(class_scope:optimization_guide.proto.Configuration)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::optimization_guide::proto::Hint > hints_;
  friend struct protobuf_hints_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Optimization

// optional .optimization_guide.proto.OptimizationType optimization_type = 1;
inline bool Optimization::has_optimization_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Optimization::set_has_optimization_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Optimization::clear_has_optimization_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Optimization::clear_optimization_type() {
  optimization_type_ = 0;
  clear_has_optimization_type();
}
inline ::optimization_guide::proto::OptimizationType Optimization::optimization_type() const {
  // @@protoc_insertion_point(field_get:optimization_guide.proto.Optimization.optimization_type)
  return static_cast< ::optimization_guide::proto::OptimizationType >(optimization_type_);
}
inline void Optimization::set_optimization_type(::optimization_guide::proto::OptimizationType value) {
  assert(::optimization_guide::proto::OptimizationType_IsValid(value));
  set_has_optimization_type();
  optimization_type_ = value;
  // @@protoc_insertion_point(field_set:optimization_guide.proto.Optimization.optimization_type)
}

// optional int64 inflation_percent = 2;
inline bool Optimization::has_inflation_percent() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Optimization::set_has_inflation_percent() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Optimization::clear_has_inflation_percent() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Optimization::clear_inflation_percent() {
  inflation_percent_ = GOOGLE_LONGLONG(0);
  clear_has_inflation_percent();
}
inline ::google::protobuf::int64 Optimization::inflation_percent() const {
  // @@protoc_insertion_point(field_get:optimization_guide.proto.Optimization.inflation_percent)
  return inflation_percent_;
}
inline void Optimization::set_inflation_percent(::google::protobuf::int64 value) {
  set_has_inflation_percent();
  inflation_percent_ = value;
  // @@protoc_insertion_point(field_set:optimization_guide.proto.Optimization.inflation_percent)
}

// -------------------------------------------------------------------

// Hint

// optional .optimization_guide.proto.KeyRepresentation key_representation = 1;
inline bool Hint::has_key_representation() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Hint::set_has_key_representation() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Hint::clear_has_key_representation() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Hint::clear_key_representation() {
  key_representation_ = 0;
  clear_has_key_representation();
}
inline ::optimization_guide::proto::KeyRepresentation Hint::key_representation() const {
  // @@protoc_insertion_point(field_get:optimization_guide.proto.Hint.key_representation)
  return static_cast< ::optimization_guide::proto::KeyRepresentation >(key_representation_);
}
inline void Hint::set_key_representation(::optimization_guide::proto::KeyRepresentation value) {
  assert(::optimization_guide::proto::KeyRepresentation_IsValid(value));
  set_has_key_representation();
  key_representation_ = value;
  // @@protoc_insertion_point(field_set:optimization_guide.proto.Hint.key_representation)
}

// optional string key = 2;
inline bool Hint::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Hint::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Hint::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Hint::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_key();
}
inline const ::std::string& Hint::key() const {
  // @@protoc_insertion_point(field_get:optimization_guide.proto.Hint.key)
  return key_.GetNoArena();
}
inline void Hint::set_key(const ::std::string& value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:optimization_guide.proto.Hint.key)
}
#if LANG_CXX11
inline void Hint::set_key(::std::string&& value) {
  set_has_key();
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:optimization_guide.proto.Hint.key)
}
#endif
inline void Hint::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:optimization_guide.proto.Hint.key)
}
inline void Hint::set_key(const char* value, size_t size) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:optimization_guide.proto.Hint.key)
}
inline ::std::string* Hint::mutable_key() {
  set_has_key();
  // @@protoc_insertion_point(field_mutable:optimization_guide.proto.Hint.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Hint::release_key() {
  // @@protoc_insertion_point(field_release:optimization_guide.proto.Hint.key)
  clear_has_key();
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Hint::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    set_has_key();
  } else {
    clear_has_key();
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:optimization_guide.proto.Hint.key)
}

// repeated .optimization_guide.proto.Optimization whitelisted_optimizations = 3;
inline int Hint::whitelisted_optimizations_size() const {
  return whitelisted_optimizations_.size();
}
inline void Hint::clear_whitelisted_optimizations() {
  whitelisted_optimizations_.Clear();
}
inline const ::optimization_guide::proto::Optimization& Hint::whitelisted_optimizations(int index) const {
  // @@protoc_insertion_point(field_get:optimization_guide.proto.Hint.whitelisted_optimizations)
  return whitelisted_optimizations_.Get(index);
}
inline ::optimization_guide::proto::Optimization* Hint::mutable_whitelisted_optimizations(int index) {
  // @@protoc_insertion_point(field_mutable:optimization_guide.proto.Hint.whitelisted_optimizations)
  return whitelisted_optimizations_.Mutable(index);
}
inline ::optimization_guide::proto::Optimization* Hint::add_whitelisted_optimizations() {
  // @@protoc_insertion_point(field_add:optimization_guide.proto.Hint.whitelisted_optimizations)
  return whitelisted_optimizations_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::optimization_guide::proto::Optimization >*
Hint::mutable_whitelisted_optimizations() {
  // @@protoc_insertion_point(field_mutable_list:optimization_guide.proto.Hint.whitelisted_optimizations)
  return &whitelisted_optimizations_;
}
inline const ::google::protobuf::RepeatedPtrField< ::optimization_guide::proto::Optimization >&
Hint::whitelisted_optimizations() const {
  // @@protoc_insertion_point(field_list:optimization_guide.proto.Hint.whitelisted_optimizations)
  return whitelisted_optimizations_;
}

// -------------------------------------------------------------------

// Configuration

// repeated .optimization_guide.proto.Hint hints = 1;
inline int Configuration::hints_size() const {
  return hints_.size();
}
inline void Configuration::clear_hints() {
  hints_.Clear();
}
inline const ::optimization_guide::proto::Hint& Configuration::hints(int index) const {
  // @@protoc_insertion_point(field_get:optimization_guide.proto.Configuration.hints)
  return hints_.Get(index);
}
inline ::optimization_guide::proto::Hint* Configuration::mutable_hints(int index) {
  // @@protoc_insertion_point(field_mutable:optimization_guide.proto.Configuration.hints)
  return hints_.Mutable(index);
}
inline ::optimization_guide::proto::Hint* Configuration::add_hints() {
  // @@protoc_insertion_point(field_add:optimization_guide.proto.Configuration.hints)
  return hints_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::optimization_guide::proto::Hint >*
Configuration::mutable_hints() {
  // @@protoc_insertion_point(field_mutable_list:optimization_guide.proto.Configuration.hints)
  return &hints_;
}
inline const ::google::protobuf::RepeatedPtrField< ::optimization_guide::proto::Hint >&
Configuration::hints() const {
  // @@protoc_insertion_point(field_list:optimization_guide.proto.Configuration.hints)
  return hints_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace proto
}  // namespace optimization_guide

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::optimization_guide::proto::OptimizationType> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::optimization_guide::proto::KeyRepresentation> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_hints_2eproto__INCLUDED
