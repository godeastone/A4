// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: probe_message.proto

#ifndef PROTOBUF_probe_5fmessage_2eproto__INCLUDED
#define PROTOBUF_probe_5fmessage_2eproto__INCLUDED

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
namespace chrome_browser_net {
class ProbePacket;
class ProbePacketDefaultTypeInternal;
extern ProbePacketDefaultTypeInternal _ProbePacket_default_instance_;
class ProbePacket_Header;
class ProbePacket_HeaderDefaultTypeInternal;
extern ProbePacket_HeaderDefaultTypeInternal _ProbePacket_Header_default_instance_;
class ProbePacket_Token;
class ProbePacket_TokenDefaultTypeInternal;
extern ProbePacket_TokenDefaultTypeInternal _ProbePacket_Token_default_instance_;
}  // namespace chrome_browser_net

namespace chrome_browser_net {

namespace protobuf_probe_5fmessage_2eproto {
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
}  // namespace protobuf_probe_5fmessage_2eproto

enum ProbePacket_Type {
  ProbePacket_Type_UNKNOWN = 0,
  ProbePacket_Type_HELLO_REQUEST = 1,
  ProbePacket_Type_HELLO_REPLY = 2,
  ProbePacket_Type_PROBE_REQUEST = 3,
  ProbePacket_Type_PROBE_REPLY = 4
};
bool ProbePacket_Type_IsValid(int value);
const ProbePacket_Type ProbePacket_Type_Type_MIN = ProbePacket_Type_UNKNOWN;
const ProbePacket_Type ProbePacket_Type_Type_MAX = ProbePacket_Type_PROBE_REPLY;
const int ProbePacket_Type_Type_ARRAYSIZE = ProbePacket_Type_Type_MAX + 1;

// ===================================================================

class ProbePacket_Header : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:chrome_browser_net.ProbePacket.Header) */ {
 public:
  ProbePacket_Header();
  virtual ~ProbePacket_Header();

  ProbePacket_Header(const ProbePacket_Header& from);

  inline ProbePacket_Header& operator=(const ProbePacket_Header& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ProbePacket_Header& default_instance();

  static inline const ProbePacket_Header* internal_default_instance() {
    return reinterpret_cast<const ProbePacket_Header*>(
               &_ProbePacket_Header_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ProbePacket_Header* other);

  // implements Message ----------------------------------------------

  inline ProbePacket_Header* New() const PROTOBUF_FINAL { return New(NULL); }

  ProbePacket_Header* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ProbePacket_Header& from);
  void MergeFrom(const ProbePacket_Header& from);
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
  void InternalSwap(ProbePacket_Header* other);
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

  // required uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional uint32 checksum = 2;
  bool has_checksum() const;
  void clear_checksum();
  static const int kChecksumFieldNumber = 2;
  ::google::protobuf::uint32 checksum() const;
  void set_checksum(::google::protobuf::uint32 value);

  // optional .chrome_browser_net.ProbePacket.Type type = 3;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 3;
  ::chrome_browser_net::ProbePacket_Type type() const;
  void set_type(::chrome_browser_net::ProbePacket_Type value);

  // @@protoc_insertion_point(class_scope:chrome_browser_net.ProbePacket.Header)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_checksum();
  void clear_has_checksum();
  void set_has_type();
  void clear_has_type();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 version_;
  ::google::protobuf::uint32 checksum_;
  int type_;
  friend struct protobuf_probe_5fmessage_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ProbePacket_Token : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:chrome_browser_net.ProbePacket.Token) */ {
 public:
  ProbePacket_Token();
  virtual ~ProbePacket_Token();

  ProbePacket_Token(const ProbePacket_Token& from);

  inline ProbePacket_Token& operator=(const ProbePacket_Token& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ProbePacket_Token& default_instance();

  static inline const ProbePacket_Token* internal_default_instance() {
    return reinterpret_cast<const ProbePacket_Token*>(
               &_ProbePacket_Token_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ProbePacket_Token* other);

  // implements Message ----------------------------------------------

  inline ProbePacket_Token* New() const PROTOBUF_FINAL { return New(NULL); }

  ProbePacket_Token* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ProbePacket_Token& from);
  void MergeFrom(const ProbePacket_Token& from);
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
  void InternalSwap(ProbePacket_Token* other);
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

  // required bytes hash = 2;
  bool has_hash() const;
  void clear_hash();
  static const int kHashFieldNumber = 2;
  const ::std::string& hash() const;
  void set_hash(const ::std::string& value);
  #if LANG_CXX11
  void set_hash(::std::string&& value);
  #endif
  void set_hash(const char* value);
  void set_hash(const void* value, size_t size);
  ::std::string* mutable_hash();
  ::std::string* release_hash();
  void set_allocated_hash(::std::string* hash);

  // required uint64 timestamp_micros = 1;
  bool has_timestamp_micros() const;
  void clear_timestamp_micros();
  static const int kTimestampMicrosFieldNumber = 1;
  ::google::protobuf::uint64 timestamp_micros() const;
  void set_timestamp_micros(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:chrome_browser_net.ProbePacket.Token)
 private:
  void set_has_timestamp_micros();
  void clear_has_timestamp_micros();
  void set_has_hash();
  void clear_has_hash();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr hash_;
  ::google::protobuf::uint64 timestamp_micros_;
  friend struct protobuf_probe_5fmessage_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ProbePacket : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:chrome_browser_net.ProbePacket) */ {
 public:
  ProbePacket();
  virtual ~ProbePacket();

  ProbePacket(const ProbePacket& from);

  inline ProbePacket& operator=(const ProbePacket& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ProbePacket& default_instance();

  static inline const ProbePacket* internal_default_instance() {
    return reinterpret_cast<const ProbePacket*>(
               &_ProbePacket_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ProbePacket* other);

  // implements Message ----------------------------------------------

  inline ProbePacket* New() const PROTOBUF_FINAL { return New(NULL); }

  ProbePacket* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ProbePacket& from);
  void MergeFrom(const ProbePacket& from);
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
  void InternalSwap(ProbePacket* other);
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

  typedef ProbePacket_Header Header;
  typedef ProbePacket_Token Token;

  typedef ProbePacket_Type Type;
  static const Type UNKNOWN =
    ProbePacket_Type_UNKNOWN;
  static const Type HELLO_REQUEST =
    ProbePacket_Type_HELLO_REQUEST;
  static const Type HELLO_REPLY =
    ProbePacket_Type_HELLO_REPLY;
  static const Type PROBE_REQUEST =
    ProbePacket_Type_PROBE_REQUEST;
  static const Type PROBE_REPLY =
    ProbePacket_Type_PROBE_REPLY;
  static inline bool Type_IsValid(int value) {
    return ProbePacket_Type_IsValid(value);
  }
  static const Type Type_MIN =
    ProbePacket_Type_Type_MIN;
  static const Type Type_MAX =
    ProbePacket_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    ProbePacket_Type_Type_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // optional bytes padding = 8;
  bool has_padding() const;
  void clear_padding();
  static const int kPaddingFieldNumber = 8;
  const ::std::string& padding() const;
  void set_padding(const ::std::string& value);
  #if LANG_CXX11
  void set_padding(::std::string&& value);
  #endif
  void set_padding(const char* value);
  void set_padding(const void* value, size_t size);
  ::std::string* mutable_padding();
  ::std::string* release_padding();
  void set_allocated_padding(::std::string* padding);

  // optional .chrome_browser_net.ProbePacket.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::chrome_browser_net::ProbePacket_Header& header() const;
  ::chrome_browser_net::ProbePacket_Header* mutable_header();
  ::chrome_browser_net::ProbePacket_Header* release_header();
  void set_allocated_header(::chrome_browser_net::ProbePacket_Header* header);

  // optional .chrome_browser_net.ProbePacket.Token token = 2;
  bool has_token() const;
  void clear_token();
  static const int kTokenFieldNumber = 2;
  const ::chrome_browser_net::ProbePacket_Token& token() const;
  ::chrome_browser_net::ProbePacket_Token* mutable_token();
  ::chrome_browser_net::ProbePacket_Token* release_token();
  void set_allocated_token(::chrome_browser_net::ProbePacket_Token* token);

  // optional uint32 group_id = 3;
  bool has_group_id() const;
  void clear_group_id();
  static const int kGroupIdFieldNumber = 3;
  ::google::protobuf::uint32 group_id() const;
  void set_group_id(::google::protobuf::uint32 value);

  // optional uint32 packet_index = 4;
  bool has_packet_index() const;
  void clear_packet_index();
  static const int kPacketIndexFieldNumber = 4;
  ::google::protobuf::uint32 packet_index() const;
  void set_packet_index(::google::protobuf::uint32 value);

  // optional uint32 probe_size_bytes = 5;
  bool has_probe_size_bytes() const;
  void clear_probe_size_bytes();
  static const int kProbeSizeBytesFieldNumber = 5;
  ::google::protobuf::uint32 probe_size_bytes() const;
  void set_probe_size_bytes(::google::protobuf::uint32 value);

  // optional uint32 pacing_interval_micros = 6;
  bool has_pacing_interval_micros() const;
  void clear_pacing_interval_micros();
  static const int kPacingIntervalMicrosFieldNumber = 6;
  ::google::protobuf::uint32 pacing_interval_micros() const;
  void set_pacing_interval_micros(::google::protobuf::uint32 value);

  // optional int64 server_processing_micros = 9;
  bool has_server_processing_micros() const;
  void clear_server_processing_micros();
  static const int kServerProcessingMicrosFieldNumber = 9;
  ::google::protobuf::int64 server_processing_micros() const;
  void set_server_processing_micros(::google::protobuf::int64 value);

  // optional uint32 number_probe_packets = 7;
  bool has_number_probe_packets() const;
  void clear_number_probe_packets();
  static const int kNumberProbePacketsFieldNumber = 7;
  ::google::protobuf::uint32 number_probe_packets() const;
  void set_number_probe_packets(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:chrome_browser_net.ProbePacket)
 private:
  void set_has_header();
  void clear_has_header();
  void set_has_token();
  void clear_has_token();
  void set_has_group_id();
  void clear_has_group_id();
  void set_has_packet_index();
  void clear_has_packet_index();
  void set_has_probe_size_bytes();
  void clear_has_probe_size_bytes();
  void set_has_pacing_interval_micros();
  void clear_has_pacing_interval_micros();
  void set_has_number_probe_packets();
  void clear_has_number_probe_packets();
  void set_has_server_processing_micros();
  void clear_has_server_processing_micros();
  void set_has_padding();
  void clear_has_padding();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr padding_;
  ::chrome_browser_net::ProbePacket_Header* header_;
  ::chrome_browser_net::ProbePacket_Token* token_;
  ::google::protobuf::uint32 group_id_;
  ::google::protobuf::uint32 packet_index_;
  ::google::protobuf::uint32 probe_size_bytes_;
  ::google::protobuf::uint32 pacing_interval_micros_;
  ::google::protobuf::int64 server_processing_micros_;
  ::google::protobuf::uint32 number_probe_packets_;
  friend struct protobuf_probe_5fmessage_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ProbePacket_Header

// required uint32 version = 1;
inline bool ProbePacket_Header::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProbePacket_Header::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ProbePacket_Header::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ProbePacket_Header::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 ProbePacket_Header::version() const {
  // @@protoc_insertion_point(field_get:chrome_browser_net.ProbePacket.Header.version)
  return version_;
}
inline void ProbePacket_Header::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:chrome_browser_net.ProbePacket.Header.version)
}

// optional uint32 checksum = 2;
inline bool ProbePacket_Header::has_checksum() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ProbePacket_Header::set_has_checksum() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ProbePacket_Header::clear_has_checksum() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ProbePacket_Header::clear_checksum() {
  checksum_ = 0u;
  clear_has_checksum();
}
inline ::google::protobuf::uint32 ProbePacket_Header::checksum() const {
  // @@protoc_insertion_point(field_get:chrome_browser_net.ProbePacket.Header.checksum)
  return checksum_;
}
inline void ProbePacket_Header::set_checksum(::google::protobuf::uint32 value) {
  set_has_checksum();
  checksum_ = value;
  // @@protoc_insertion_point(field_set:chrome_browser_net.ProbePacket.Header.checksum)
}

// optional .chrome_browser_net.ProbePacket.Type type = 3;
inline bool ProbePacket_Header::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ProbePacket_Header::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ProbePacket_Header::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ProbePacket_Header::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::chrome_browser_net::ProbePacket_Type ProbePacket_Header::type() const {
  // @@protoc_insertion_point(field_get:chrome_browser_net.ProbePacket.Header.type)
  return static_cast< ::chrome_browser_net::ProbePacket_Type >(type_);
}
inline void ProbePacket_Header::set_type(::chrome_browser_net::ProbePacket_Type value) {
  assert(::chrome_browser_net::ProbePacket_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:chrome_browser_net.ProbePacket.Header.type)
}

// -------------------------------------------------------------------

// ProbePacket_Token

// required uint64 timestamp_micros = 1;
inline bool ProbePacket_Token::has_timestamp_micros() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ProbePacket_Token::set_has_timestamp_micros() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ProbePacket_Token::clear_has_timestamp_micros() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ProbePacket_Token::clear_timestamp_micros() {
  timestamp_micros_ = GOOGLE_ULONGLONG(0);
  clear_has_timestamp_micros();
}
inline ::google::protobuf::uint64 ProbePacket_Token::timestamp_micros() const {
  // @@protoc_insertion_point(field_get:chrome_browser_net.ProbePacket.Token.timestamp_micros)
  return timestamp_micros_;
}
inline void ProbePacket_Token::set_timestamp_micros(::google::protobuf::uint64 value) {
  set_has_timestamp_micros();
  timestamp_micros_ = value;
  // @@protoc_insertion_point(field_set:chrome_browser_net.ProbePacket.Token.timestamp_micros)
}

// required bytes hash = 2;
inline bool ProbePacket_Token::has_hash() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProbePacket_Token::set_has_hash() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ProbePacket_Token::clear_has_hash() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ProbePacket_Token::clear_hash() {
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_hash();
}
inline const ::std::string& ProbePacket_Token::hash() const {
  // @@protoc_insertion_point(field_get:chrome_browser_net.ProbePacket.Token.hash)
  return hash_.GetNoArena();
}
inline void ProbePacket_Token::set_hash(const ::std::string& value) {
  set_has_hash();
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chrome_browser_net.ProbePacket.Token.hash)
}
#if LANG_CXX11
inline void ProbePacket_Token::set_hash(::std::string&& value) {
  set_has_hash();
  hash_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chrome_browser_net.ProbePacket.Token.hash)
}
#endif
inline void ProbePacket_Token::set_hash(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_hash();
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chrome_browser_net.ProbePacket.Token.hash)
}
inline void ProbePacket_Token::set_hash(const void* value, size_t size) {
  set_has_hash();
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chrome_browser_net.ProbePacket.Token.hash)
}
inline ::std::string* ProbePacket_Token::mutable_hash() {
  set_has_hash();
  // @@protoc_insertion_point(field_mutable:chrome_browser_net.ProbePacket.Token.hash)
  return hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProbePacket_Token::release_hash() {
  // @@protoc_insertion_point(field_release:chrome_browser_net.ProbePacket.Token.hash)
  clear_has_hash();
  return hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProbePacket_Token::set_allocated_hash(::std::string* hash) {
  if (hash != NULL) {
    set_has_hash();
  } else {
    clear_has_hash();
  }
  hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hash);
  // @@protoc_insertion_point(field_set_allocated:chrome_browser_net.ProbePacket.Token.hash)
}

// -------------------------------------------------------------------

// ProbePacket

// optional .chrome_browser_net.ProbePacket.Header header = 1;
inline bool ProbePacket::has_header() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ProbePacket::set_has_header() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ProbePacket::clear_has_header() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ProbePacket::clear_header() {
  if (header_ != NULL) header_->::chrome_browser_net::ProbePacket_Header::Clear();
  clear_has_header();
}
inline const ::chrome_browser_net::ProbePacket_Header& ProbePacket::header() const {
  // @@protoc_insertion_point(field_get:chrome_browser_net.ProbePacket.header)
  return header_ != NULL ? *header_
                         : *::chrome_browser_net::ProbePacket_Header::internal_default_instance();
}
inline ::chrome_browser_net::ProbePacket_Header* ProbePacket::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::chrome_browser_net::ProbePacket_Header;
  }
  // @@protoc_insertion_point(field_mutable:chrome_browser_net.ProbePacket.header)
  return header_;
}
inline ::chrome_browser_net::ProbePacket_Header* ProbePacket::release_header() {
  // @@protoc_insertion_point(field_release:chrome_browser_net.ProbePacket.header)
  clear_has_header();
  ::chrome_browser_net::ProbePacket_Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void ProbePacket::set_allocated_header(::chrome_browser_net::ProbePacket_Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:chrome_browser_net.ProbePacket.header)
}

// optional .chrome_browser_net.ProbePacket.Token token = 2;
inline bool ProbePacket::has_token() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ProbePacket::set_has_token() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ProbePacket::clear_has_token() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ProbePacket::clear_token() {
  if (token_ != NULL) token_->::chrome_browser_net::ProbePacket_Token::Clear();
  clear_has_token();
}
inline const ::chrome_browser_net::ProbePacket_Token& ProbePacket::token() const {
  // @@protoc_insertion_point(field_get:chrome_browser_net.ProbePacket.token)
  return token_ != NULL ? *token_
                         : *::chrome_browser_net::ProbePacket_Token::internal_default_instance();
}
inline ::chrome_browser_net::ProbePacket_Token* ProbePacket::mutable_token() {
  set_has_token();
  if (token_ == NULL) {
    token_ = new ::chrome_browser_net::ProbePacket_Token;
  }
  // @@protoc_insertion_point(field_mutable:chrome_browser_net.ProbePacket.token)
  return token_;
}
inline ::chrome_browser_net::ProbePacket_Token* ProbePacket::release_token() {
  // @@protoc_insertion_point(field_release:chrome_browser_net.ProbePacket.token)
  clear_has_token();
  ::chrome_browser_net::ProbePacket_Token* temp = token_;
  token_ = NULL;
  return temp;
}
inline void ProbePacket::set_allocated_token(::chrome_browser_net::ProbePacket_Token* token) {
  delete token_;
  token_ = token;
  if (token) {
    set_has_token();
  } else {
    clear_has_token();
  }
  // @@protoc_insertion_point(field_set_allocated:chrome_browser_net.ProbePacket.token)
}

// optional uint32 group_id = 3;
inline bool ProbePacket::has_group_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ProbePacket::set_has_group_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ProbePacket::clear_has_group_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ProbePacket::clear_group_id() {
  group_id_ = 0u;
  clear_has_group_id();
}
inline ::google::protobuf::uint32 ProbePacket::group_id() const {
  // @@protoc_insertion_point(field_get:chrome_browser_net.ProbePacket.group_id)
  return group_id_;
}
inline void ProbePacket::set_group_id(::google::protobuf::uint32 value) {
  set_has_group_id();
  group_id_ = value;
  // @@protoc_insertion_point(field_set:chrome_browser_net.ProbePacket.group_id)
}

// optional uint32 packet_index = 4;
inline bool ProbePacket::has_packet_index() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ProbePacket::set_has_packet_index() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ProbePacket::clear_has_packet_index() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ProbePacket::clear_packet_index() {
  packet_index_ = 0u;
  clear_has_packet_index();
}
inline ::google::protobuf::uint32 ProbePacket::packet_index() const {
  // @@protoc_insertion_point(field_get:chrome_browser_net.ProbePacket.packet_index)
  return packet_index_;
}
inline void ProbePacket::set_packet_index(::google::protobuf::uint32 value) {
  set_has_packet_index();
  packet_index_ = value;
  // @@protoc_insertion_point(field_set:chrome_browser_net.ProbePacket.packet_index)
}

// optional uint32 probe_size_bytes = 5;
inline bool ProbePacket::has_probe_size_bytes() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ProbePacket::set_has_probe_size_bytes() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ProbePacket::clear_has_probe_size_bytes() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ProbePacket::clear_probe_size_bytes() {
  probe_size_bytes_ = 0u;
  clear_has_probe_size_bytes();
}
inline ::google::protobuf::uint32 ProbePacket::probe_size_bytes() const {
  // @@protoc_insertion_point(field_get:chrome_browser_net.ProbePacket.probe_size_bytes)
  return probe_size_bytes_;
}
inline void ProbePacket::set_probe_size_bytes(::google::protobuf::uint32 value) {
  set_has_probe_size_bytes();
  probe_size_bytes_ = value;
  // @@protoc_insertion_point(field_set:chrome_browser_net.ProbePacket.probe_size_bytes)
}

// optional uint32 pacing_interval_micros = 6;
inline bool ProbePacket::has_pacing_interval_micros() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ProbePacket::set_has_pacing_interval_micros() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ProbePacket::clear_has_pacing_interval_micros() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ProbePacket::clear_pacing_interval_micros() {
  pacing_interval_micros_ = 0u;
  clear_has_pacing_interval_micros();
}
inline ::google::protobuf::uint32 ProbePacket::pacing_interval_micros() const {
  // @@protoc_insertion_point(field_get:chrome_browser_net.ProbePacket.pacing_interval_micros)
  return pacing_interval_micros_;
}
inline void ProbePacket::set_pacing_interval_micros(::google::protobuf::uint32 value) {
  set_has_pacing_interval_micros();
  pacing_interval_micros_ = value;
  // @@protoc_insertion_point(field_set:chrome_browser_net.ProbePacket.pacing_interval_micros)
}

// optional uint32 number_probe_packets = 7;
inline bool ProbePacket::has_number_probe_packets() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void ProbePacket::set_has_number_probe_packets() {
  _has_bits_[0] |= 0x00000100u;
}
inline void ProbePacket::clear_has_number_probe_packets() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void ProbePacket::clear_number_probe_packets() {
  number_probe_packets_ = 0u;
  clear_has_number_probe_packets();
}
inline ::google::protobuf::uint32 ProbePacket::number_probe_packets() const {
  // @@protoc_insertion_point(field_get:chrome_browser_net.ProbePacket.number_probe_packets)
  return number_probe_packets_;
}
inline void ProbePacket::set_number_probe_packets(::google::protobuf::uint32 value) {
  set_has_number_probe_packets();
  number_probe_packets_ = value;
  // @@protoc_insertion_point(field_set:chrome_browser_net.ProbePacket.number_probe_packets)
}

// optional int64 server_processing_micros = 9;
inline bool ProbePacket::has_server_processing_micros() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ProbePacket::set_has_server_processing_micros() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ProbePacket::clear_has_server_processing_micros() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ProbePacket::clear_server_processing_micros() {
  server_processing_micros_ = GOOGLE_LONGLONG(0);
  clear_has_server_processing_micros();
}
inline ::google::protobuf::int64 ProbePacket::server_processing_micros() const {
  // @@protoc_insertion_point(field_get:chrome_browser_net.ProbePacket.server_processing_micros)
  return server_processing_micros_;
}
inline void ProbePacket::set_server_processing_micros(::google::protobuf::int64 value) {
  set_has_server_processing_micros();
  server_processing_micros_ = value;
  // @@protoc_insertion_point(field_set:chrome_browser_net.ProbePacket.server_processing_micros)
}

// optional bytes padding = 8;
inline bool ProbePacket::has_padding() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProbePacket::set_has_padding() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ProbePacket::clear_has_padding() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ProbePacket::clear_padding() {
  padding_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_padding();
}
inline const ::std::string& ProbePacket::padding() const {
  // @@protoc_insertion_point(field_get:chrome_browser_net.ProbePacket.padding)
  return padding_.GetNoArena();
}
inline void ProbePacket::set_padding(const ::std::string& value) {
  set_has_padding();
  padding_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chrome_browser_net.ProbePacket.padding)
}
#if LANG_CXX11
inline void ProbePacket::set_padding(::std::string&& value) {
  set_has_padding();
  padding_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chrome_browser_net.ProbePacket.padding)
}
#endif
inline void ProbePacket::set_padding(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_padding();
  padding_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chrome_browser_net.ProbePacket.padding)
}
inline void ProbePacket::set_padding(const void* value, size_t size) {
  set_has_padding();
  padding_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chrome_browser_net.ProbePacket.padding)
}
inline ::std::string* ProbePacket::mutable_padding() {
  set_has_padding();
  // @@protoc_insertion_point(field_mutable:chrome_browser_net.ProbePacket.padding)
  return padding_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProbePacket::release_padding() {
  // @@protoc_insertion_point(field_release:chrome_browser_net.ProbePacket.padding)
  clear_has_padding();
  return padding_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProbePacket::set_allocated_padding(::std::string* padding) {
  if (padding != NULL) {
    set_has_padding();
  } else {
    clear_has_padding();
  }
  padding_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), padding);
  // @@protoc_insertion_point(field_set_allocated:chrome_browser_net.ProbePacket.padding)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace chrome_browser_net

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::chrome_browser_net::ProbePacket_Type> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_probe_5fmessage_2eproto__INCLUDED