// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common.proto

#ifndef PROTOBUF_common_2eproto__INCLUDED
#define PROTOBUF_common_2eproto__INCLUDED

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
namespace userfeedback {
class CommonData;
class CommonDataDefaultTypeInternal;
extern CommonDataDefaultTypeInternal _CommonData_default_instance_;
}  // namespace userfeedback

namespace userfeedback {

namespace protobuf_common_2eproto {
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
}  // namespace protobuf_common_2eproto

// ===================================================================

class CommonData : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:userfeedback.CommonData) */ {
 public:
  CommonData();
  virtual ~CommonData();

  CommonData(const CommonData& from);

  inline CommonData& operator=(const CommonData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const CommonData& default_instance();

  static inline const CommonData* internal_default_instance() {
    return reinterpret_cast<const CommonData*>(
               &_CommonData_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(CommonData* other);

  // implements Message ----------------------------------------------

  inline CommonData* New() const PROTOBUF_FINAL { return New(NULL); }

  CommonData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const CommonData& from);
  void MergeFrom(const CommonData& from);
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
  void InternalSwap(CommonData* other);
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

  // optional string description = 2;
  bool has_description() const;
  void clear_description();
  static const int kDescriptionFieldNumber = 2;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  #if LANG_CXX11
  void set_description(::std::string&& value);
  #endif
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // optional string user_email = 3;
  bool has_user_email() const;
  void clear_user_email();
  static const int kUserEmailFieldNumber = 3;
  const ::std::string& user_email() const;
  void set_user_email(const ::std::string& value);
  #if LANG_CXX11
  void set_user_email(::std::string&& value);
  #endif
  void set_user_email(const char* value);
  void set_user_email(const char* value, size_t size);
  ::std::string* mutable_user_email();
  ::std::string* release_user_email();
  void set_allocated_user_email(::std::string* user_email);

  // optional string description_translated = 4;
  bool has_description_translated() const;
  void clear_description_translated();
  static const int kDescriptionTranslatedFieldNumber = 4;
  const ::std::string& description_translated() const;
  void set_description_translated(const ::std::string& value);
  #if LANG_CXX11
  void set_description_translated(::std::string&& value);
  #endif
  void set_description_translated(const char* value);
  void set_description_translated(const char* value, size_t size);
  ::std::string* mutable_description_translated();
  ::std::string* release_description_translated();
  void set_allocated_description_translated(::std::string* description_translated);

  // optional string source_description_language = 5 [default = "en"];
  bool has_source_description_language() const;
  void clear_source_description_language();
  static const int kSourceDescriptionLanguageFieldNumber = 5;
  const ::std::string& source_description_language() const;
  void set_source_description_language(const ::std::string& value);
  #if LANG_CXX11
  void set_source_description_language(::std::string&& value);
  #endif
  void set_source_description_language(const char* value);
  void set_source_description_language(const char* value, size_t size);
  ::std::string* mutable_source_description_language();
  ::std::string* release_source_description_language();
  void set_allocated_source_description_language(::std::string* source_description_language);

  // optional string ui_language = 6 [default = "en_US"];
  bool has_ui_language() const;
  void clear_ui_language();
  static const int kUiLanguageFieldNumber = 6;
  const ::std::string& ui_language() const;
  void set_ui_language(const ::std::string& value);
  #if LANG_CXX11
  void set_ui_language(::std::string&& value);
  #endif
  void set_ui_language(const char* value);
  void set_ui_language(const char* value, size_t size);
  ::std::string* mutable_ui_language();
  ::std::string* release_ui_language();
  void set_allocated_ui_language(::std::string* ui_language);

  // optional string unique_report_identifier = 7;
  bool has_unique_report_identifier() const;
  void clear_unique_report_identifier();
  static const int kUniqueReportIdentifierFieldNumber = 7;
  const ::std::string& unique_report_identifier() const;
  void set_unique_report_identifier(const ::std::string& value);
  #if LANG_CXX11
  void set_unique_report_identifier(::std::string&& value);
  #endif
  void set_unique_report_identifier(const char* value);
  void set_unique_report_identifier(const char* value, size_t size);
  ::std::string* mutable_unique_report_identifier();
  ::std::string* release_unique_report_identifier();
  void set_allocated_unique_report_identifier(::std::string* unique_report_identifier);

  // optional fixed64 gaia_id = 1;
  bool has_gaia_id() const;
  void clear_gaia_id();
  static const int kGaiaIdFieldNumber = 1;
  ::google::protobuf::uint64 gaia_id() const;
  void set_gaia_id(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:userfeedback.CommonData)
 private:
  void set_has_gaia_id();
  void clear_has_gaia_id();
  void set_has_description();
  void clear_has_description();
  void set_has_description_translated();
  void clear_has_description_translated();
  void set_has_source_description_language();
  void clear_has_source_description_language();
  void set_has_ui_language();
  void clear_has_ui_language();
  void set_has_user_email();
  void clear_has_user_email();
  void set_has_unique_report_identifier();
  void clear_has_unique_report_identifier();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  ::google::protobuf::internal::ArenaStringPtr user_email_;
  ::google::protobuf::internal::ArenaStringPtr description_translated_;
  static ::google::protobuf::internal::ExplicitlyConstructed< ::std::string> _default_source_description_language_;
  ::google::protobuf::internal::ArenaStringPtr source_description_language_;
  static ::google::protobuf::internal::ExplicitlyConstructed< ::std::string> _default_ui_language_;
  ::google::protobuf::internal::ArenaStringPtr ui_language_;
  ::google::protobuf::internal::ArenaStringPtr unique_report_identifier_;
  ::google::protobuf::uint64 gaia_id_;
  friend struct protobuf_common_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CommonData

// optional fixed64 gaia_id = 1;
inline bool CommonData::has_gaia_id() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void CommonData::set_has_gaia_id() {
  _has_bits_[0] |= 0x00000040u;
}
inline void CommonData::clear_has_gaia_id() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void CommonData::clear_gaia_id() {
  gaia_id_ = GOOGLE_ULONGLONG(0);
  clear_has_gaia_id();
}
inline ::google::protobuf::uint64 CommonData::gaia_id() const {
  // @@protoc_insertion_point(field_get:userfeedback.CommonData.gaia_id)
  return gaia_id_;
}
inline void CommonData::set_gaia_id(::google::protobuf::uint64 value) {
  set_has_gaia_id();
  gaia_id_ = value;
  // @@protoc_insertion_point(field_set:userfeedback.CommonData.gaia_id)
}

// optional string description = 2;
inline bool CommonData::has_description() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CommonData::set_has_description() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CommonData::clear_has_description() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CommonData::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_description();
}
inline const ::std::string& CommonData::description() const {
  // @@protoc_insertion_point(field_get:userfeedback.CommonData.description)
  return description_.GetNoArena();
}
inline void CommonData::set_description(const ::std::string& value) {
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:userfeedback.CommonData.description)
}
#if LANG_CXX11
inline void CommonData::set_description(::std::string&& value) {
  set_has_description();
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:userfeedback.CommonData.description)
}
#endif
inline void CommonData::set_description(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:userfeedback.CommonData.description)
}
inline void CommonData::set_description(const char* value, size_t size) {
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:userfeedback.CommonData.description)
}
inline ::std::string* CommonData::mutable_description() {
  set_has_description();
  // @@protoc_insertion_point(field_mutable:userfeedback.CommonData.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CommonData::release_description() {
  // @@protoc_insertion_point(field_release:userfeedback.CommonData.description)
  clear_has_description();
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CommonData::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    set_has_description();
  } else {
    clear_has_description();
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:userfeedback.CommonData.description)
}

// optional string description_translated = 4;
inline bool CommonData::has_description_translated() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CommonData::set_has_description_translated() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CommonData::clear_has_description_translated() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CommonData::clear_description_translated() {
  description_translated_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_description_translated();
}
inline const ::std::string& CommonData::description_translated() const {
  // @@protoc_insertion_point(field_get:userfeedback.CommonData.description_translated)
  return description_translated_.GetNoArena();
}
inline void CommonData::set_description_translated(const ::std::string& value) {
  set_has_description_translated();
  description_translated_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:userfeedback.CommonData.description_translated)
}
#if LANG_CXX11
inline void CommonData::set_description_translated(::std::string&& value) {
  set_has_description_translated();
  description_translated_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:userfeedback.CommonData.description_translated)
}
#endif
inline void CommonData::set_description_translated(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_description_translated();
  description_translated_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:userfeedback.CommonData.description_translated)
}
inline void CommonData::set_description_translated(const char* value, size_t size) {
  set_has_description_translated();
  description_translated_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:userfeedback.CommonData.description_translated)
}
inline ::std::string* CommonData::mutable_description_translated() {
  set_has_description_translated();
  // @@protoc_insertion_point(field_mutable:userfeedback.CommonData.description_translated)
  return description_translated_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CommonData::release_description_translated() {
  // @@protoc_insertion_point(field_release:userfeedback.CommonData.description_translated)
  clear_has_description_translated();
  return description_translated_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CommonData::set_allocated_description_translated(::std::string* description_translated) {
  if (description_translated != NULL) {
    set_has_description_translated();
  } else {
    clear_has_description_translated();
  }
  description_translated_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description_translated);
  // @@protoc_insertion_point(field_set_allocated:userfeedback.CommonData.description_translated)
}

// optional string source_description_language = 5 [default = "en"];
inline bool CommonData::has_source_description_language() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CommonData::set_has_source_description_language() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CommonData::clear_has_source_description_language() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CommonData::clear_source_description_language() {
  source_description_language_.ClearToDefaultNoArena(&CommonData::_default_source_description_language_.get());
  clear_has_source_description_language();
}
inline const ::std::string& CommonData::source_description_language() const {
  // @@protoc_insertion_point(field_get:userfeedback.CommonData.source_description_language)
  return source_description_language_.GetNoArena();
}
inline void CommonData::set_source_description_language(const ::std::string& value) {
  set_has_source_description_language();
  source_description_language_.SetNoArena(&CommonData::_default_source_description_language_.get(), value);
  // @@protoc_insertion_point(field_set:userfeedback.CommonData.source_description_language)
}
#if LANG_CXX11
inline void CommonData::set_source_description_language(::std::string&& value) {
  set_has_source_description_language();
  source_description_language_.SetNoArena(
    &CommonData::_default_source_description_language_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:userfeedback.CommonData.source_description_language)
}
#endif
inline void CommonData::set_source_description_language(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_source_description_language();
  source_description_language_.SetNoArena(&CommonData::_default_source_description_language_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:userfeedback.CommonData.source_description_language)
}
inline void CommonData::set_source_description_language(const char* value, size_t size) {
  set_has_source_description_language();
  source_description_language_.SetNoArena(&CommonData::_default_source_description_language_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:userfeedback.CommonData.source_description_language)
}
inline ::std::string* CommonData::mutable_source_description_language() {
  set_has_source_description_language();
  // @@protoc_insertion_point(field_mutable:userfeedback.CommonData.source_description_language)
  return source_description_language_.MutableNoArena(&CommonData::_default_source_description_language_.get());
}
inline ::std::string* CommonData::release_source_description_language() {
  // @@protoc_insertion_point(field_release:userfeedback.CommonData.source_description_language)
  clear_has_source_description_language();
  return source_description_language_.ReleaseNoArena(&CommonData::_default_source_description_language_.get());
}
inline void CommonData::set_allocated_source_description_language(::std::string* source_description_language) {
  if (source_description_language != NULL) {
    set_has_source_description_language();
  } else {
    clear_has_source_description_language();
  }
  source_description_language_.SetAllocatedNoArena(&CommonData::_default_source_description_language_.get(), source_description_language);
  // @@protoc_insertion_point(field_set_allocated:userfeedback.CommonData.source_description_language)
}

// optional string ui_language = 6 [default = "en_US"];
inline bool CommonData::has_ui_language() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CommonData::set_has_ui_language() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CommonData::clear_has_ui_language() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CommonData::clear_ui_language() {
  ui_language_.ClearToDefaultNoArena(&CommonData::_default_ui_language_.get());
  clear_has_ui_language();
}
inline const ::std::string& CommonData::ui_language() const {
  // @@protoc_insertion_point(field_get:userfeedback.CommonData.ui_language)
  return ui_language_.GetNoArena();
}
inline void CommonData::set_ui_language(const ::std::string& value) {
  set_has_ui_language();
  ui_language_.SetNoArena(&CommonData::_default_ui_language_.get(), value);
  // @@protoc_insertion_point(field_set:userfeedback.CommonData.ui_language)
}
#if LANG_CXX11
inline void CommonData::set_ui_language(::std::string&& value) {
  set_has_ui_language();
  ui_language_.SetNoArena(
    &CommonData::_default_ui_language_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:userfeedback.CommonData.ui_language)
}
#endif
inline void CommonData::set_ui_language(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_ui_language();
  ui_language_.SetNoArena(&CommonData::_default_ui_language_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:userfeedback.CommonData.ui_language)
}
inline void CommonData::set_ui_language(const char* value, size_t size) {
  set_has_ui_language();
  ui_language_.SetNoArena(&CommonData::_default_ui_language_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:userfeedback.CommonData.ui_language)
}
inline ::std::string* CommonData::mutable_ui_language() {
  set_has_ui_language();
  // @@protoc_insertion_point(field_mutable:userfeedback.CommonData.ui_language)
  return ui_language_.MutableNoArena(&CommonData::_default_ui_language_.get());
}
inline ::std::string* CommonData::release_ui_language() {
  // @@protoc_insertion_point(field_release:userfeedback.CommonData.ui_language)
  clear_has_ui_language();
  return ui_language_.ReleaseNoArena(&CommonData::_default_ui_language_.get());
}
inline void CommonData::set_allocated_ui_language(::std::string* ui_language) {
  if (ui_language != NULL) {
    set_has_ui_language();
  } else {
    clear_has_ui_language();
  }
  ui_language_.SetAllocatedNoArena(&CommonData::_default_ui_language_.get(), ui_language);
  // @@protoc_insertion_point(field_set_allocated:userfeedback.CommonData.ui_language)
}

// optional string user_email = 3;
inline bool CommonData::has_user_email() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CommonData::set_has_user_email() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CommonData::clear_has_user_email() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CommonData::clear_user_email() {
  user_email_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_user_email();
}
inline const ::std::string& CommonData::user_email() const {
  // @@protoc_insertion_point(field_get:userfeedback.CommonData.user_email)
  return user_email_.GetNoArena();
}
inline void CommonData::set_user_email(const ::std::string& value) {
  set_has_user_email();
  user_email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:userfeedback.CommonData.user_email)
}
#if LANG_CXX11
inline void CommonData::set_user_email(::std::string&& value) {
  set_has_user_email();
  user_email_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:userfeedback.CommonData.user_email)
}
#endif
inline void CommonData::set_user_email(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_user_email();
  user_email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:userfeedback.CommonData.user_email)
}
inline void CommonData::set_user_email(const char* value, size_t size) {
  set_has_user_email();
  user_email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:userfeedback.CommonData.user_email)
}
inline ::std::string* CommonData::mutable_user_email() {
  set_has_user_email();
  // @@protoc_insertion_point(field_mutable:userfeedback.CommonData.user_email)
  return user_email_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CommonData::release_user_email() {
  // @@protoc_insertion_point(field_release:userfeedback.CommonData.user_email)
  clear_has_user_email();
  return user_email_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CommonData::set_allocated_user_email(::std::string* user_email) {
  if (user_email != NULL) {
    set_has_user_email();
  } else {
    clear_has_user_email();
  }
  user_email_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user_email);
  // @@protoc_insertion_point(field_set_allocated:userfeedback.CommonData.user_email)
}

// optional string unique_report_identifier = 7;
inline bool CommonData::has_unique_report_identifier() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void CommonData::set_has_unique_report_identifier() {
  _has_bits_[0] |= 0x00000020u;
}
inline void CommonData::clear_has_unique_report_identifier() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void CommonData::clear_unique_report_identifier() {
  unique_report_identifier_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_unique_report_identifier();
}
inline const ::std::string& CommonData::unique_report_identifier() const {
  // @@protoc_insertion_point(field_get:userfeedback.CommonData.unique_report_identifier)
  return unique_report_identifier_.GetNoArena();
}
inline void CommonData::set_unique_report_identifier(const ::std::string& value) {
  set_has_unique_report_identifier();
  unique_report_identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:userfeedback.CommonData.unique_report_identifier)
}
#if LANG_CXX11
inline void CommonData::set_unique_report_identifier(::std::string&& value) {
  set_has_unique_report_identifier();
  unique_report_identifier_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:userfeedback.CommonData.unique_report_identifier)
}
#endif
inline void CommonData::set_unique_report_identifier(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_unique_report_identifier();
  unique_report_identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:userfeedback.CommonData.unique_report_identifier)
}
inline void CommonData::set_unique_report_identifier(const char* value, size_t size) {
  set_has_unique_report_identifier();
  unique_report_identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:userfeedback.CommonData.unique_report_identifier)
}
inline ::std::string* CommonData::mutable_unique_report_identifier() {
  set_has_unique_report_identifier();
  // @@protoc_insertion_point(field_mutable:userfeedback.CommonData.unique_report_identifier)
  return unique_report_identifier_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CommonData::release_unique_report_identifier() {
  // @@protoc_insertion_point(field_release:userfeedback.CommonData.unique_report_identifier)
  clear_has_unique_report_identifier();
  return unique_report_identifier_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CommonData::set_allocated_unique_report_identifier(::std::string* unique_report_identifier) {
  if (unique_report_identifier != NULL) {
    set_has_unique_report_identifier();
  } else {
    clear_has_unique_report_identifier();
  }
  unique_report_identifier_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), unique_report_identifier);
  // @@protoc_insertion_point(field_set_allocated:userfeedback.CommonData.unique_report_identifier)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace userfeedback

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_common_2eproto__INCLUDED
