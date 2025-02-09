// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: media_engagement_preload.proto

#ifndef PROTOBUF_media_5fengagement_5fpreload_2eproto__INCLUDED
#define PROTOBUF_media_5fengagement_5fpreload_2eproto__INCLUDED

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
namespace chrome_browser_media {
class PreloadedData;
class PreloadedDataDefaultTypeInternal;
extern PreloadedDataDefaultTypeInternal _PreloadedData_default_instance_;
}  // namespace chrome_browser_media

namespace chrome_browser_media {

namespace protobuf_media_5fengagement_5fpreload_2eproto {
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
}  // namespace protobuf_media_5fengagement_5fpreload_2eproto

// ===================================================================

class PreloadedData : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:chrome_browser_media.PreloadedData) */ {
 public:
  PreloadedData();
  virtual ~PreloadedData();

  PreloadedData(const PreloadedData& from);

  inline PreloadedData& operator=(const PreloadedData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const PreloadedData& default_instance();

  static inline const PreloadedData* internal_default_instance() {
    return reinterpret_cast<const PreloadedData*>(
               &_PreloadedData_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(PreloadedData* other);

  // implements Message ----------------------------------------------

  inline PreloadedData* New() const PROTOBUF_FINAL { return New(NULL); }

  PreloadedData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const PreloadedData& from);
  void MergeFrom(const PreloadedData& from);
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
  void InternalSwap(PreloadedData* other);
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

  // optional bytes dafsa = 1;
  bool has_dafsa() const;
  void clear_dafsa();
  static const int kDafsaFieldNumber = 1;
  const ::std::string& dafsa() const;
  void set_dafsa(const ::std::string& value);
  #if LANG_CXX11
  void set_dafsa(::std::string&& value);
  #endif
  void set_dafsa(const char* value);
  void set_dafsa(const void* value, size_t size);
  ::std::string* mutable_dafsa();
  ::std::string* release_dafsa();
  void set_allocated_dafsa(::std::string* dafsa);

  // @@protoc_insertion_point(class_scope:chrome_browser_media.PreloadedData)
 private:
  void set_has_dafsa();
  void clear_has_dafsa();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr dafsa_;
  friend struct protobuf_media_5fengagement_5fpreload_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PreloadedData

// optional bytes dafsa = 1;
inline bool PreloadedData::has_dafsa() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PreloadedData::set_has_dafsa() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PreloadedData::clear_has_dafsa() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PreloadedData::clear_dafsa() {
  dafsa_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_dafsa();
}
inline const ::std::string& PreloadedData::dafsa() const {
  // @@protoc_insertion_point(field_get:chrome_browser_media.PreloadedData.dafsa)
  return dafsa_.GetNoArena();
}
inline void PreloadedData::set_dafsa(const ::std::string& value) {
  set_has_dafsa();
  dafsa_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:chrome_browser_media.PreloadedData.dafsa)
}
#if LANG_CXX11
inline void PreloadedData::set_dafsa(::std::string&& value) {
  set_has_dafsa();
  dafsa_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:chrome_browser_media.PreloadedData.dafsa)
}
#endif
inline void PreloadedData::set_dafsa(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_dafsa();
  dafsa_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:chrome_browser_media.PreloadedData.dafsa)
}
inline void PreloadedData::set_dafsa(const void* value, size_t size) {
  set_has_dafsa();
  dafsa_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:chrome_browser_media.PreloadedData.dafsa)
}
inline ::std::string* PreloadedData::mutable_dafsa() {
  set_has_dafsa();
  // @@protoc_insertion_point(field_mutable:chrome_browser_media.PreloadedData.dafsa)
  return dafsa_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PreloadedData::release_dafsa() {
  // @@protoc_insertion_point(field_release:chrome_browser_media.PreloadedData.dafsa)
  clear_has_dafsa();
  return dafsa_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PreloadedData::set_allocated_dafsa(::std::string* dafsa) {
  if (dafsa != NULL) {
    set_has_dafsa();
  } else {
    clear_has_dafsa();
  }
  dafsa_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), dafsa);
  // @@protoc_insertion_point(field_set_allocated:chrome_browser_media.PreloadedData.dafsa)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace chrome_browser_media

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_media_5fengagement_5fpreload_2eproto__INCLUDED
