// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client_model.proto

#ifndef PROTOBUF_client_5fmodel_2eproto__INCLUDED
#define PROTOBUF_client_5fmodel_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)
namespace safe_browsing {
class ClientSideModel;
class ClientSideModelDefaultTypeInternal;
extern ClientSideModelDefaultTypeInternal _ClientSideModel_default_instance_;
class ClientSideModel_IPSubnet;
class ClientSideModel_IPSubnetDefaultTypeInternal;
extern ClientSideModel_IPSubnetDefaultTypeInternal _ClientSideModel_IPSubnet_default_instance_;
class ClientSideModel_Rule;
class ClientSideModel_RuleDefaultTypeInternal;
extern ClientSideModel_RuleDefaultTypeInternal _ClientSideModel_Rule_default_instance_;
}  // namespace safe_browsing

namespace safe_browsing {

namespace protobuf_client_5fmodel_2eproto {
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
}  // namespace protobuf_client_5fmodel_2eproto

// ===================================================================

class ClientSideModel_Rule : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:safe_browsing.ClientSideModel.Rule) */ {
 public:
  ClientSideModel_Rule();
  virtual ~ClientSideModel_Rule();

  ClientSideModel_Rule(const ClientSideModel_Rule& from);

  inline ClientSideModel_Rule& operator=(const ClientSideModel_Rule& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ClientSideModel_Rule& default_instance();

  static inline const ClientSideModel_Rule* internal_default_instance() {
    return reinterpret_cast<const ClientSideModel_Rule*>(
               &_ClientSideModel_Rule_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ClientSideModel_Rule* other);

  // implements Message ----------------------------------------------

  inline ClientSideModel_Rule* New() const PROTOBUF_FINAL { return New(NULL); }

  ClientSideModel_Rule* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ClientSideModel_Rule& from);
  void MergeFrom(const ClientSideModel_Rule& from);
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
  void InternalSwap(ClientSideModel_Rule* other);
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

  // repeated int32 feature = 1;
  int feature_size() const;
  void clear_feature();
  static const int kFeatureFieldNumber = 1;
  ::google::protobuf::int32 feature(int index) const;
  void set_feature(int index, ::google::protobuf::int32 value);
  void add_feature(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      feature() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_feature();

  // required float weight = 2;
  bool has_weight() const;
  void clear_weight();
  static const int kWeightFieldNumber = 2;
  float weight() const;
  void set_weight(float value);

  // @@protoc_insertion_point(class_scope:safe_browsing.ClientSideModel.Rule)
 private:
  void set_has_weight();
  void clear_has_weight();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > feature_;
  float weight_;
  friend struct protobuf_client_5fmodel_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ClientSideModel_IPSubnet : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:safe_browsing.ClientSideModel.IPSubnet) */ {
 public:
  ClientSideModel_IPSubnet();
  virtual ~ClientSideModel_IPSubnet();

  ClientSideModel_IPSubnet(const ClientSideModel_IPSubnet& from);

  inline ClientSideModel_IPSubnet& operator=(const ClientSideModel_IPSubnet& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ClientSideModel_IPSubnet& default_instance();

  static inline const ClientSideModel_IPSubnet* internal_default_instance() {
    return reinterpret_cast<const ClientSideModel_IPSubnet*>(
               &_ClientSideModel_IPSubnet_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ClientSideModel_IPSubnet* other);

  // implements Message ----------------------------------------------

  inline ClientSideModel_IPSubnet* New() const PROTOBUF_FINAL { return New(NULL); }

  ClientSideModel_IPSubnet* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ClientSideModel_IPSubnet& from);
  void MergeFrom(const ClientSideModel_IPSubnet& from);
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
  void InternalSwap(ClientSideModel_IPSubnet* other);
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

  // required bytes prefix = 1;
  bool has_prefix() const;
  void clear_prefix();
  static const int kPrefixFieldNumber = 1;
  const ::std::string& prefix() const;
  void set_prefix(const ::std::string& value);
  #if LANG_CXX11
  void set_prefix(::std::string&& value);
  #endif
  void set_prefix(const char* value);
  void set_prefix(const void* value, size_t size);
  ::std::string* mutable_prefix();
  ::std::string* release_prefix();
  void set_allocated_prefix(::std::string* prefix);

  // optional int32 size = 2 [default = 128];
  bool has_size() const;
  void clear_size();
  static const int kSizeFieldNumber = 2;
  ::google::protobuf::int32 size() const;
  void set_size(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:safe_browsing.ClientSideModel.IPSubnet)
 private:
  void set_has_prefix();
  void clear_has_prefix();
  void set_has_size();
  void clear_has_size();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr prefix_;
  ::google::protobuf::int32 size_;
  friend struct protobuf_client_5fmodel_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ClientSideModel : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:safe_browsing.ClientSideModel) */ {
 public:
  ClientSideModel();
  virtual ~ClientSideModel();

  ClientSideModel(const ClientSideModel& from);

  inline ClientSideModel& operator=(const ClientSideModel& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ClientSideModel& default_instance();

  static inline const ClientSideModel* internal_default_instance() {
    return reinterpret_cast<const ClientSideModel*>(
               &_ClientSideModel_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ClientSideModel* other);

  // implements Message ----------------------------------------------

  inline ClientSideModel* New() const PROTOBUF_FINAL { return New(NULL); }

  ClientSideModel* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ClientSideModel& from);
  void MergeFrom(const ClientSideModel& from);
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
  void InternalSwap(ClientSideModel* other);
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

  typedef ClientSideModel_Rule Rule;
  typedef ClientSideModel_IPSubnet IPSubnet;

  // accessors -------------------------------------------------------

  // repeated bytes hashes = 1;
  int hashes_size() const;
  void clear_hashes();
  static const int kHashesFieldNumber = 1;
  const ::std::string& hashes(int index) const;
  ::std::string* mutable_hashes(int index);
  void set_hashes(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_hashes(int index, ::std::string&& value);
  #endif
  void set_hashes(int index, const char* value);
  void set_hashes(int index, const void* value, size_t size);
  ::std::string* add_hashes();
  void add_hashes(const ::std::string& value);
  #if LANG_CXX11
  void add_hashes(::std::string&& value);
  #endif
  void add_hashes(const char* value);
  void add_hashes(const void* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& hashes() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_hashes();

  // repeated .safe_browsing.ClientSideModel.Rule rule = 2;
  int rule_size() const;
  void clear_rule();
  static const int kRuleFieldNumber = 2;
  const ::safe_browsing::ClientSideModel_Rule& rule(int index) const;
  ::safe_browsing::ClientSideModel_Rule* mutable_rule(int index);
  ::safe_browsing::ClientSideModel_Rule* add_rule();
  ::google::protobuf::RepeatedPtrField< ::safe_browsing::ClientSideModel_Rule >*
      mutable_rule();
  const ::google::protobuf::RepeatedPtrField< ::safe_browsing::ClientSideModel_Rule >&
      rule() const;

  // repeated int32 page_term = 3;
  int page_term_size() const;
  void clear_page_term();
  static const int kPageTermFieldNumber = 3;
  ::google::protobuf::int32 page_term(int index) const;
  void set_page_term(int index, ::google::protobuf::int32 value);
  void add_page_term(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      page_term() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_page_term();

  // repeated fixed32 page_word = 4;
  int page_word_size() const;
  void clear_page_word();
  static const int kPageWordFieldNumber = 4;
  ::google::protobuf::uint32 page_word(int index) const;
  void set_page_word(int index, ::google::protobuf::uint32 value);
  void add_page_word(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      page_word() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_page_word();

  // repeated .safe_browsing.ClientSideModel.IPSubnet bad_subnet = 7;
  int bad_subnet_size() const;
  void clear_bad_subnet();
  static const int kBadSubnetFieldNumber = 7;
  const ::safe_browsing::ClientSideModel_IPSubnet& bad_subnet(int index) const;
  ::safe_browsing::ClientSideModel_IPSubnet* mutable_bad_subnet(int index);
  ::safe_browsing::ClientSideModel_IPSubnet* add_bad_subnet();
  ::google::protobuf::RepeatedPtrField< ::safe_browsing::ClientSideModel_IPSubnet >*
      mutable_bad_subnet();
  const ::google::protobuf::RepeatedPtrField< ::safe_browsing::ClientSideModel_IPSubnet >&
      bad_subnet() const;

  // required int32 max_words_per_term = 5;
  bool has_max_words_per_term() const;
  void clear_max_words_per_term();
  static const int kMaxWordsPerTermFieldNumber = 5;
  ::google::protobuf::int32 max_words_per_term() const;
  void set_max_words_per_term(::google::protobuf::int32 value);

  // optional int32 version = 6;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 6;
  ::google::protobuf::int32 version() const;
  void set_version(::google::protobuf::int32 value);

  // optional fixed32 murmur_hash_seed = 8;
  bool has_murmur_hash_seed() const;
  void clear_murmur_hash_seed();
  static const int kMurmurHashSeedFieldNumber = 8;
  ::google::protobuf::uint32 murmur_hash_seed() const;
  void set_murmur_hash_seed(::google::protobuf::uint32 value);

  // optional int32 max_shingles_per_page = 9 [default = 200];
  bool has_max_shingles_per_page() const;
  void clear_max_shingles_per_page();
  static const int kMaxShinglesPerPageFieldNumber = 9;
  ::google::protobuf::int32 max_shingles_per_page() const;
  void set_max_shingles_per_page(::google::protobuf::int32 value);

  // optional int32 shingle_size = 10 [default = 4];
  bool has_shingle_size() const;
  void clear_shingle_size();
  static const int kShingleSizeFieldNumber = 10;
  ::google::protobuf::int32 shingle_size() const;
  void set_shingle_size(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:safe_browsing.ClientSideModel)
 private:
  void set_has_max_words_per_term();
  void clear_has_max_words_per_term();
  void set_has_version();
  void clear_has_version();
  void set_has_murmur_hash_seed();
  void clear_has_murmur_hash_seed();
  void set_has_max_shingles_per_page();
  void clear_has_max_shingles_per_page();
  void set_has_shingle_size();
  void clear_has_shingle_size();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> hashes_;
  ::google::protobuf::RepeatedPtrField< ::safe_browsing::ClientSideModel_Rule > rule_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > page_term_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > page_word_;
  ::google::protobuf::RepeatedPtrField< ::safe_browsing::ClientSideModel_IPSubnet > bad_subnet_;
  ::google::protobuf::int32 max_words_per_term_;
  ::google::protobuf::int32 version_;
  ::google::protobuf::uint32 murmur_hash_seed_;
  ::google::protobuf::int32 max_shingles_per_page_;
  ::google::protobuf::int32 shingle_size_;
  friend struct protobuf_client_5fmodel_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ClientSideModel_Rule

// repeated int32 feature = 1;
inline int ClientSideModel_Rule::feature_size() const {
  return feature_.size();
}
inline void ClientSideModel_Rule::clear_feature() {
  feature_.Clear();
}
inline ::google::protobuf::int32 ClientSideModel_Rule::feature(int index) const {
  // @@protoc_insertion_point(field_get:safe_browsing.ClientSideModel.Rule.feature)
  return feature_.Get(index);
}
inline void ClientSideModel_Rule::set_feature(int index, ::google::protobuf::int32 value) {
  feature_.Set(index, value);
  // @@protoc_insertion_point(field_set:safe_browsing.ClientSideModel.Rule.feature)
}
inline void ClientSideModel_Rule::add_feature(::google::protobuf::int32 value) {
  feature_.Add(value);
  // @@protoc_insertion_point(field_add:safe_browsing.ClientSideModel.Rule.feature)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ClientSideModel_Rule::feature() const {
  // @@protoc_insertion_point(field_list:safe_browsing.ClientSideModel.Rule.feature)
  return feature_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ClientSideModel_Rule::mutable_feature() {
  // @@protoc_insertion_point(field_mutable_list:safe_browsing.ClientSideModel.Rule.feature)
  return &feature_;
}

// required float weight = 2;
inline bool ClientSideModel_Rule::has_weight() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ClientSideModel_Rule::set_has_weight() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ClientSideModel_Rule::clear_has_weight() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ClientSideModel_Rule::clear_weight() {
  weight_ = 0;
  clear_has_weight();
}
inline float ClientSideModel_Rule::weight() const {
  // @@protoc_insertion_point(field_get:safe_browsing.ClientSideModel.Rule.weight)
  return weight_;
}
inline void ClientSideModel_Rule::set_weight(float value) {
  set_has_weight();
  weight_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.ClientSideModel.Rule.weight)
}

// -------------------------------------------------------------------

// ClientSideModel_IPSubnet

// required bytes prefix = 1;
inline bool ClientSideModel_IPSubnet::has_prefix() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ClientSideModel_IPSubnet::set_has_prefix() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ClientSideModel_IPSubnet::clear_has_prefix() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ClientSideModel_IPSubnet::clear_prefix() {
  prefix_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_prefix();
}
inline const ::std::string& ClientSideModel_IPSubnet::prefix() const {
  // @@protoc_insertion_point(field_get:safe_browsing.ClientSideModel.IPSubnet.prefix)
  return prefix_.GetNoArena();
}
inline void ClientSideModel_IPSubnet::set_prefix(const ::std::string& value) {
  set_has_prefix();
  prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:safe_browsing.ClientSideModel.IPSubnet.prefix)
}
#if LANG_CXX11
inline void ClientSideModel_IPSubnet::set_prefix(::std::string&& value) {
  set_has_prefix();
  prefix_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:safe_browsing.ClientSideModel.IPSubnet.prefix)
}
#endif
inline void ClientSideModel_IPSubnet::set_prefix(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_prefix();
  prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:safe_browsing.ClientSideModel.IPSubnet.prefix)
}
inline void ClientSideModel_IPSubnet::set_prefix(const void* value, size_t size) {
  set_has_prefix();
  prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:safe_browsing.ClientSideModel.IPSubnet.prefix)
}
inline ::std::string* ClientSideModel_IPSubnet::mutable_prefix() {
  set_has_prefix();
  // @@protoc_insertion_point(field_mutable:safe_browsing.ClientSideModel.IPSubnet.prefix)
  return prefix_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ClientSideModel_IPSubnet::release_prefix() {
  // @@protoc_insertion_point(field_release:safe_browsing.ClientSideModel.IPSubnet.prefix)
  clear_has_prefix();
  return prefix_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ClientSideModel_IPSubnet::set_allocated_prefix(::std::string* prefix) {
  if (prefix != NULL) {
    set_has_prefix();
  } else {
    clear_has_prefix();
  }
  prefix_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), prefix);
  // @@protoc_insertion_point(field_set_allocated:safe_browsing.ClientSideModel.IPSubnet.prefix)
}

// optional int32 size = 2 [default = 128];
inline bool ClientSideModel_IPSubnet::has_size() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ClientSideModel_IPSubnet::set_has_size() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ClientSideModel_IPSubnet::clear_has_size() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ClientSideModel_IPSubnet::clear_size() {
  size_ = 128;
  clear_has_size();
}
inline ::google::protobuf::int32 ClientSideModel_IPSubnet::size() const {
  // @@protoc_insertion_point(field_get:safe_browsing.ClientSideModel.IPSubnet.size)
  return size_;
}
inline void ClientSideModel_IPSubnet::set_size(::google::protobuf::int32 value) {
  set_has_size();
  size_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.ClientSideModel.IPSubnet.size)
}

// -------------------------------------------------------------------

// ClientSideModel

// repeated bytes hashes = 1;
inline int ClientSideModel::hashes_size() const {
  return hashes_.size();
}
inline void ClientSideModel::clear_hashes() {
  hashes_.Clear();
}
inline const ::std::string& ClientSideModel::hashes(int index) const {
  // @@protoc_insertion_point(field_get:safe_browsing.ClientSideModel.hashes)
  return hashes_.Get(index);
}
inline ::std::string* ClientSideModel::mutable_hashes(int index) {
  // @@protoc_insertion_point(field_mutable:safe_browsing.ClientSideModel.hashes)
  return hashes_.Mutable(index);
}
inline void ClientSideModel::set_hashes(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:safe_browsing.ClientSideModel.hashes)
  hashes_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void ClientSideModel::set_hashes(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:safe_browsing.ClientSideModel.hashes)
  hashes_.Mutable(index)->assign(std::move(value));
}
#endif
inline void ClientSideModel::set_hashes(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  hashes_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:safe_browsing.ClientSideModel.hashes)
}
inline void ClientSideModel::set_hashes(int index, const void* value, size_t size) {
  hashes_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:safe_browsing.ClientSideModel.hashes)
}
inline ::std::string* ClientSideModel::add_hashes() {
  // @@protoc_insertion_point(field_add_mutable:safe_browsing.ClientSideModel.hashes)
  return hashes_.Add();
}
inline void ClientSideModel::add_hashes(const ::std::string& value) {
  hashes_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:safe_browsing.ClientSideModel.hashes)
}
#if LANG_CXX11
inline void ClientSideModel::add_hashes(::std::string&& value) {
  hashes_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:safe_browsing.ClientSideModel.hashes)
}
#endif
inline void ClientSideModel::add_hashes(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  hashes_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:safe_browsing.ClientSideModel.hashes)
}
inline void ClientSideModel::add_hashes(const void* value, size_t size) {
  hashes_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:safe_browsing.ClientSideModel.hashes)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
ClientSideModel::hashes() const {
  // @@protoc_insertion_point(field_list:safe_browsing.ClientSideModel.hashes)
  return hashes_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
ClientSideModel::mutable_hashes() {
  // @@protoc_insertion_point(field_mutable_list:safe_browsing.ClientSideModel.hashes)
  return &hashes_;
}

// repeated .safe_browsing.ClientSideModel.Rule rule = 2;
inline int ClientSideModel::rule_size() const {
  return rule_.size();
}
inline void ClientSideModel::clear_rule() {
  rule_.Clear();
}
inline const ::safe_browsing::ClientSideModel_Rule& ClientSideModel::rule(int index) const {
  // @@protoc_insertion_point(field_get:safe_browsing.ClientSideModel.rule)
  return rule_.Get(index);
}
inline ::safe_browsing::ClientSideModel_Rule* ClientSideModel::mutable_rule(int index) {
  // @@protoc_insertion_point(field_mutable:safe_browsing.ClientSideModel.rule)
  return rule_.Mutable(index);
}
inline ::safe_browsing::ClientSideModel_Rule* ClientSideModel::add_rule() {
  // @@protoc_insertion_point(field_add:safe_browsing.ClientSideModel.rule)
  return rule_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::safe_browsing::ClientSideModel_Rule >*
ClientSideModel::mutable_rule() {
  // @@protoc_insertion_point(field_mutable_list:safe_browsing.ClientSideModel.rule)
  return &rule_;
}
inline const ::google::protobuf::RepeatedPtrField< ::safe_browsing::ClientSideModel_Rule >&
ClientSideModel::rule() const {
  // @@protoc_insertion_point(field_list:safe_browsing.ClientSideModel.rule)
  return rule_;
}

// repeated int32 page_term = 3;
inline int ClientSideModel::page_term_size() const {
  return page_term_.size();
}
inline void ClientSideModel::clear_page_term() {
  page_term_.Clear();
}
inline ::google::protobuf::int32 ClientSideModel::page_term(int index) const {
  // @@protoc_insertion_point(field_get:safe_browsing.ClientSideModel.page_term)
  return page_term_.Get(index);
}
inline void ClientSideModel::set_page_term(int index, ::google::protobuf::int32 value) {
  page_term_.Set(index, value);
  // @@protoc_insertion_point(field_set:safe_browsing.ClientSideModel.page_term)
}
inline void ClientSideModel::add_page_term(::google::protobuf::int32 value) {
  page_term_.Add(value);
  // @@protoc_insertion_point(field_add:safe_browsing.ClientSideModel.page_term)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ClientSideModel::page_term() const {
  // @@protoc_insertion_point(field_list:safe_browsing.ClientSideModel.page_term)
  return page_term_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ClientSideModel::mutable_page_term() {
  // @@protoc_insertion_point(field_mutable_list:safe_browsing.ClientSideModel.page_term)
  return &page_term_;
}

// repeated fixed32 page_word = 4;
inline int ClientSideModel::page_word_size() const {
  return page_word_.size();
}
inline void ClientSideModel::clear_page_word() {
  page_word_.Clear();
}
inline ::google::protobuf::uint32 ClientSideModel::page_word(int index) const {
  // @@protoc_insertion_point(field_get:safe_browsing.ClientSideModel.page_word)
  return page_word_.Get(index);
}
inline void ClientSideModel::set_page_word(int index, ::google::protobuf::uint32 value) {
  page_word_.Set(index, value);
  // @@protoc_insertion_point(field_set:safe_browsing.ClientSideModel.page_word)
}
inline void ClientSideModel::add_page_word(::google::protobuf::uint32 value) {
  page_word_.Add(value);
  // @@protoc_insertion_point(field_add:safe_browsing.ClientSideModel.page_word)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
ClientSideModel::page_word() const {
  // @@protoc_insertion_point(field_list:safe_browsing.ClientSideModel.page_word)
  return page_word_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
ClientSideModel::mutable_page_word() {
  // @@protoc_insertion_point(field_mutable_list:safe_browsing.ClientSideModel.page_word)
  return &page_word_;
}

// required int32 max_words_per_term = 5;
inline bool ClientSideModel::has_max_words_per_term() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ClientSideModel::set_has_max_words_per_term() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ClientSideModel::clear_has_max_words_per_term() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ClientSideModel::clear_max_words_per_term() {
  max_words_per_term_ = 0;
  clear_has_max_words_per_term();
}
inline ::google::protobuf::int32 ClientSideModel::max_words_per_term() const {
  // @@protoc_insertion_point(field_get:safe_browsing.ClientSideModel.max_words_per_term)
  return max_words_per_term_;
}
inline void ClientSideModel::set_max_words_per_term(::google::protobuf::int32 value) {
  set_has_max_words_per_term();
  max_words_per_term_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.ClientSideModel.max_words_per_term)
}

// optional int32 version = 6;
inline bool ClientSideModel::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ClientSideModel::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ClientSideModel::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ClientSideModel::clear_version() {
  version_ = 0;
  clear_has_version();
}
inline ::google::protobuf::int32 ClientSideModel::version() const {
  // @@protoc_insertion_point(field_get:safe_browsing.ClientSideModel.version)
  return version_;
}
inline void ClientSideModel::set_version(::google::protobuf::int32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.ClientSideModel.version)
}

// repeated .safe_browsing.ClientSideModel.IPSubnet bad_subnet = 7;
inline int ClientSideModel::bad_subnet_size() const {
  return bad_subnet_.size();
}
inline void ClientSideModel::clear_bad_subnet() {
  bad_subnet_.Clear();
}
inline const ::safe_browsing::ClientSideModel_IPSubnet& ClientSideModel::bad_subnet(int index) const {
  // @@protoc_insertion_point(field_get:safe_browsing.ClientSideModel.bad_subnet)
  return bad_subnet_.Get(index);
}
inline ::safe_browsing::ClientSideModel_IPSubnet* ClientSideModel::mutable_bad_subnet(int index) {
  // @@protoc_insertion_point(field_mutable:safe_browsing.ClientSideModel.bad_subnet)
  return bad_subnet_.Mutable(index);
}
inline ::safe_browsing::ClientSideModel_IPSubnet* ClientSideModel::add_bad_subnet() {
  // @@protoc_insertion_point(field_add:safe_browsing.ClientSideModel.bad_subnet)
  return bad_subnet_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::safe_browsing::ClientSideModel_IPSubnet >*
ClientSideModel::mutable_bad_subnet() {
  // @@protoc_insertion_point(field_mutable_list:safe_browsing.ClientSideModel.bad_subnet)
  return &bad_subnet_;
}
inline const ::google::protobuf::RepeatedPtrField< ::safe_browsing::ClientSideModel_IPSubnet >&
ClientSideModel::bad_subnet() const {
  // @@protoc_insertion_point(field_list:safe_browsing.ClientSideModel.bad_subnet)
  return bad_subnet_;
}

// optional fixed32 murmur_hash_seed = 8;
inline bool ClientSideModel::has_murmur_hash_seed() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ClientSideModel::set_has_murmur_hash_seed() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ClientSideModel::clear_has_murmur_hash_seed() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ClientSideModel::clear_murmur_hash_seed() {
  murmur_hash_seed_ = 0u;
  clear_has_murmur_hash_seed();
}
inline ::google::protobuf::uint32 ClientSideModel::murmur_hash_seed() const {
  // @@protoc_insertion_point(field_get:safe_browsing.ClientSideModel.murmur_hash_seed)
  return murmur_hash_seed_;
}
inline void ClientSideModel::set_murmur_hash_seed(::google::protobuf::uint32 value) {
  set_has_murmur_hash_seed();
  murmur_hash_seed_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.ClientSideModel.murmur_hash_seed)
}

// optional int32 max_shingles_per_page = 9 [default = 200];
inline bool ClientSideModel::has_max_shingles_per_page() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ClientSideModel::set_has_max_shingles_per_page() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ClientSideModel::clear_has_max_shingles_per_page() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ClientSideModel::clear_max_shingles_per_page() {
  max_shingles_per_page_ = 200;
  clear_has_max_shingles_per_page();
}
inline ::google::protobuf::int32 ClientSideModel::max_shingles_per_page() const {
  // @@protoc_insertion_point(field_get:safe_browsing.ClientSideModel.max_shingles_per_page)
  return max_shingles_per_page_;
}
inline void ClientSideModel::set_max_shingles_per_page(::google::protobuf::int32 value) {
  set_has_max_shingles_per_page();
  max_shingles_per_page_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.ClientSideModel.max_shingles_per_page)
}

// optional int32 shingle_size = 10 [default = 4];
inline bool ClientSideModel::has_shingle_size() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ClientSideModel::set_has_shingle_size() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ClientSideModel::clear_has_shingle_size() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ClientSideModel::clear_shingle_size() {
  shingle_size_ = 4;
  clear_has_shingle_size();
}
inline ::google::protobuf::int32 ClientSideModel::shingle_size() const {
  // @@protoc_insertion_point(field_get:safe_browsing.ClientSideModel.shingle_size)
  return shingle_size_;
}
inline void ClientSideModel::set_shingle_size(::google::protobuf::int32 value) {
  set_has_shingle_size();
  shingle_size_ = value;
  // @@protoc_insertion_point(field_set:safe_browsing.ClientSideModel.shingle_size)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace safe_browsing

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_client_5fmodel_2eproto__INCLUDED
