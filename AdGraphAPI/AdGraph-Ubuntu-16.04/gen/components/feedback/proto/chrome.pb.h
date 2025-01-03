// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chrome.proto

#ifndef PROTOBUF_chrome_2eproto__INCLUDED
#define PROTOBUF_chrome_2eproto__INCLUDED

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
namespace userfeedback {
class ChromeBrowserData;
class ChromeBrowserDataDefaultTypeInternal;
extern ChromeBrowserDataDefaultTypeInternal _ChromeBrowserData_default_instance_;
class ChromeData;
class ChromeDataDefaultTypeInternal;
extern ChromeDataDefaultTypeInternal _ChromeData_default_instance_;
class ChromeOsData;
class ChromeOsDataDefaultTypeInternal;
extern ChromeOsDataDefaultTypeInternal _ChromeOsData_default_instance_;
}  // namespace userfeedback

namespace userfeedback {

namespace protobuf_chrome_2eproto {
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
}  // namespace protobuf_chrome_2eproto

enum ChromeData_ChromePlatform {
  ChromeData_ChromePlatform_CHROME_OS = 1,
  ChromeData_ChromePlatform_CHROME_BROWSER = 2
};
bool ChromeData_ChromePlatform_IsValid(int value);
const ChromeData_ChromePlatform ChromeData_ChromePlatform_ChromePlatform_MIN = ChromeData_ChromePlatform_CHROME_OS;
const ChromeData_ChromePlatform ChromeData_ChromePlatform_ChromePlatform_MAX = ChromeData_ChromePlatform_CHROME_BROWSER;
const int ChromeData_ChromePlatform_ChromePlatform_ARRAYSIZE = ChromeData_ChromePlatform_ChromePlatform_MAX + 1;

enum ChromeOsData_ChromeOsCategory {
  ChromeOsData_ChromeOsCategory_CONNECTIVITY = 1,
  ChromeOsData_ChromeOsCategory_SYNC = 2,
  ChromeOsData_ChromeOsCategory_CRASH = 3,
  ChromeOsData_ChromeOsCategory_PAGE_FORMATTING_OR_LAYOUT = 4,
  ChromeOsData_ChromeOsCategory_EXTENSIONS_OR_APPS = 5,
  ChromeOsData_ChromeOsCategory_STANDBY_OR_RESUME = 6,
  ChromeOsData_ChromeOsCategory_PHISHING_PAGE = 7,
  ChromeOsData_ChromeOsCategory_OTHER = 8,
  ChromeOsData_ChromeOsCategory_AUTOFILL = 9
};
bool ChromeOsData_ChromeOsCategory_IsValid(int value);
const ChromeOsData_ChromeOsCategory ChromeOsData_ChromeOsCategory_ChromeOsCategory_MIN = ChromeOsData_ChromeOsCategory_CONNECTIVITY;
const ChromeOsData_ChromeOsCategory ChromeOsData_ChromeOsCategory_ChromeOsCategory_MAX = ChromeOsData_ChromeOsCategory_AUTOFILL;
const int ChromeOsData_ChromeOsCategory_ChromeOsCategory_ARRAYSIZE = ChromeOsData_ChromeOsCategory_ChromeOsCategory_MAX + 1;

enum ChromeBrowserData_ChromeBrowserCategory {
  ChromeBrowserData_ChromeBrowserCategory_PAGE_FORMATTING_OR_LAYOUT = 1,
  ChromeBrowserData_ChromeBrowserCategory_PAGES_NOT_LOADING = 2,
  ChromeBrowserData_ChromeBrowserCategory_PLUGINS = 3,
  ChromeBrowserData_ChromeBrowserCategory_TABS_OR_WINDOWS = 4,
  ChromeBrowserData_ChromeBrowserCategory_SYNCED_PREFERENCES = 5,
  ChromeBrowserData_ChromeBrowserCategory_CRASH = 6,
  ChromeBrowserData_ChromeBrowserCategory_EXTENSIONS_OR_APPS = 7,
  ChromeBrowserData_ChromeBrowserCategory_PHISHING_PAGE = 8,
  ChromeBrowserData_ChromeBrowserCategory_OTHER = 9,
  ChromeBrowserData_ChromeBrowserCategory_AUTOFILL = 10
};
bool ChromeBrowserData_ChromeBrowserCategory_IsValid(int value);
const ChromeBrowserData_ChromeBrowserCategory ChromeBrowserData_ChromeBrowserCategory_ChromeBrowserCategory_MIN = ChromeBrowserData_ChromeBrowserCategory_PAGE_FORMATTING_OR_LAYOUT;
const ChromeBrowserData_ChromeBrowserCategory ChromeBrowserData_ChromeBrowserCategory_ChromeBrowserCategory_MAX = ChromeBrowserData_ChromeBrowserCategory_AUTOFILL;
const int ChromeBrowserData_ChromeBrowserCategory_ChromeBrowserCategory_ARRAYSIZE = ChromeBrowserData_ChromeBrowserCategory_ChromeBrowserCategory_MAX + 1;

// ===================================================================

class ChromeData : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:userfeedback.ChromeData) */ {
 public:
  ChromeData();
  virtual ~ChromeData();

  ChromeData(const ChromeData& from);

  inline ChromeData& operator=(const ChromeData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ChromeData& default_instance();

  static inline const ChromeData* internal_default_instance() {
    return reinterpret_cast<const ChromeData*>(
               &_ChromeData_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ChromeData* other);

  // implements Message ----------------------------------------------

  inline ChromeData* New() const PROTOBUF_FINAL { return New(NULL); }

  ChromeData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ChromeData& from);
  void MergeFrom(const ChromeData& from);
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
  void InternalSwap(ChromeData* other);
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

  typedef ChromeData_ChromePlatform ChromePlatform;
  static const ChromePlatform CHROME_OS =
    ChromeData_ChromePlatform_CHROME_OS;
  static const ChromePlatform CHROME_BROWSER =
    ChromeData_ChromePlatform_CHROME_BROWSER;
  static inline bool ChromePlatform_IsValid(int value) {
    return ChromeData_ChromePlatform_IsValid(value);
  }
  static const ChromePlatform ChromePlatform_MIN =
    ChromeData_ChromePlatform_ChromePlatform_MIN;
  static const ChromePlatform ChromePlatform_MAX =
    ChromeData_ChromePlatform_ChromePlatform_MAX;
  static const int ChromePlatform_ARRAYSIZE =
    ChromeData_ChromePlatform_ChromePlatform_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // optional .userfeedback.ChromeOsData chrome_os_data = 2;
  bool has_chrome_os_data() const;
  void clear_chrome_os_data();
  static const int kChromeOsDataFieldNumber = 2;
  const ::userfeedback::ChromeOsData& chrome_os_data() const;
  ::userfeedback::ChromeOsData* mutable_chrome_os_data();
  ::userfeedback::ChromeOsData* release_chrome_os_data();
  void set_allocated_chrome_os_data(::userfeedback::ChromeOsData* chrome_os_data);

  // optional .userfeedback.ChromeBrowserData chrome_browser_data = 3;
  bool has_chrome_browser_data() const;
  void clear_chrome_browser_data();
  static const int kChromeBrowserDataFieldNumber = 3;
  const ::userfeedback::ChromeBrowserData& chrome_browser_data() const;
  ::userfeedback::ChromeBrowserData* mutable_chrome_browser_data();
  ::userfeedback::ChromeBrowserData* release_chrome_browser_data();
  void set_allocated_chrome_browser_data(::userfeedback::ChromeBrowserData* chrome_browser_data);

  // optional .userfeedback.ChromeData.ChromePlatform chrome_platform = 1 [default = CHROME_OS];
  bool has_chrome_platform() const;
  void clear_chrome_platform();
  static const int kChromePlatformFieldNumber = 1;
  ::userfeedback::ChromeData_ChromePlatform chrome_platform() const;
  void set_chrome_platform(::userfeedback::ChromeData_ChromePlatform value);

  // @@protoc_insertion_point(class_scope:userfeedback.ChromeData)
 private:
  void set_has_chrome_platform();
  void clear_has_chrome_platform();
  void set_has_chrome_os_data();
  void clear_has_chrome_os_data();
  void set_has_chrome_browser_data();
  void clear_has_chrome_browser_data();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::userfeedback::ChromeOsData* chrome_os_data_;
  ::userfeedback::ChromeBrowserData* chrome_browser_data_;
  int chrome_platform_;
  friend struct protobuf_chrome_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ChromeOsData : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:userfeedback.ChromeOsData) */ {
 public:
  ChromeOsData();
  virtual ~ChromeOsData();

  ChromeOsData(const ChromeOsData& from);

  inline ChromeOsData& operator=(const ChromeOsData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ChromeOsData& default_instance();

  static inline const ChromeOsData* internal_default_instance() {
    return reinterpret_cast<const ChromeOsData*>(
               &_ChromeOsData_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ChromeOsData* other);

  // implements Message ----------------------------------------------

  inline ChromeOsData* New() const PROTOBUF_FINAL { return New(NULL); }

  ChromeOsData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ChromeOsData& from);
  void MergeFrom(const ChromeOsData& from);
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
  void InternalSwap(ChromeOsData* other);
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

  typedef ChromeOsData_ChromeOsCategory ChromeOsCategory;
  static const ChromeOsCategory CONNECTIVITY =
    ChromeOsData_ChromeOsCategory_CONNECTIVITY;
  static const ChromeOsCategory SYNC =
    ChromeOsData_ChromeOsCategory_SYNC;
  static const ChromeOsCategory CRASH =
    ChromeOsData_ChromeOsCategory_CRASH;
  static const ChromeOsCategory PAGE_FORMATTING_OR_LAYOUT =
    ChromeOsData_ChromeOsCategory_PAGE_FORMATTING_OR_LAYOUT;
  static const ChromeOsCategory EXTENSIONS_OR_APPS =
    ChromeOsData_ChromeOsCategory_EXTENSIONS_OR_APPS;
  static const ChromeOsCategory STANDBY_OR_RESUME =
    ChromeOsData_ChromeOsCategory_STANDBY_OR_RESUME;
  static const ChromeOsCategory PHISHING_PAGE =
    ChromeOsData_ChromeOsCategory_PHISHING_PAGE;
  static const ChromeOsCategory OTHER =
    ChromeOsData_ChromeOsCategory_OTHER;
  static const ChromeOsCategory AUTOFILL =
    ChromeOsData_ChromeOsCategory_AUTOFILL;
  static inline bool ChromeOsCategory_IsValid(int value) {
    return ChromeOsData_ChromeOsCategory_IsValid(value);
  }
  static const ChromeOsCategory ChromeOsCategory_MIN =
    ChromeOsData_ChromeOsCategory_ChromeOsCategory_MIN;
  static const ChromeOsCategory ChromeOsCategory_MAX =
    ChromeOsData_ChromeOsCategory_ChromeOsCategory_MAX;
  static const int ChromeOsCategory_ARRAYSIZE =
    ChromeOsData_ChromeOsCategory_ChromeOsCategory_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // optional .userfeedback.ChromeOsData.ChromeOsCategory category = 1 [default = OTHER];
  bool has_category() const;
  void clear_category();
  static const int kCategoryFieldNumber = 1;
  ::userfeedback::ChromeOsData_ChromeOsCategory category() const;
  void set_category(::userfeedback::ChromeOsData_ChromeOsCategory value);

  // @@protoc_insertion_point(class_scope:userfeedback.ChromeOsData)
 private:
  void set_has_category();
  void clear_has_category();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  int category_;
  friend struct protobuf_chrome_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ChromeBrowserData : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:userfeedback.ChromeBrowserData) */ {
 public:
  ChromeBrowserData();
  virtual ~ChromeBrowserData();

  ChromeBrowserData(const ChromeBrowserData& from);

  inline ChromeBrowserData& operator=(const ChromeBrowserData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ChromeBrowserData& default_instance();

  static inline const ChromeBrowserData* internal_default_instance() {
    return reinterpret_cast<const ChromeBrowserData*>(
               &_ChromeBrowserData_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ChromeBrowserData* other);

  // implements Message ----------------------------------------------

  inline ChromeBrowserData* New() const PROTOBUF_FINAL { return New(NULL); }

  ChromeBrowserData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ChromeBrowserData& from);
  void MergeFrom(const ChromeBrowserData& from);
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
  void InternalSwap(ChromeBrowserData* other);
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

  typedef ChromeBrowserData_ChromeBrowserCategory ChromeBrowserCategory;
  static const ChromeBrowserCategory PAGE_FORMATTING_OR_LAYOUT =
    ChromeBrowserData_ChromeBrowserCategory_PAGE_FORMATTING_OR_LAYOUT;
  static const ChromeBrowserCategory PAGES_NOT_LOADING =
    ChromeBrowserData_ChromeBrowserCategory_PAGES_NOT_LOADING;
  static const ChromeBrowserCategory PLUGINS =
    ChromeBrowserData_ChromeBrowserCategory_PLUGINS;
  static const ChromeBrowserCategory TABS_OR_WINDOWS =
    ChromeBrowserData_ChromeBrowserCategory_TABS_OR_WINDOWS;
  static const ChromeBrowserCategory SYNCED_PREFERENCES =
    ChromeBrowserData_ChromeBrowserCategory_SYNCED_PREFERENCES;
  static const ChromeBrowserCategory CRASH =
    ChromeBrowserData_ChromeBrowserCategory_CRASH;
  static const ChromeBrowserCategory EXTENSIONS_OR_APPS =
    ChromeBrowserData_ChromeBrowserCategory_EXTENSIONS_OR_APPS;
  static const ChromeBrowserCategory PHISHING_PAGE =
    ChromeBrowserData_ChromeBrowserCategory_PHISHING_PAGE;
  static const ChromeBrowserCategory OTHER =
    ChromeBrowserData_ChromeBrowserCategory_OTHER;
  static const ChromeBrowserCategory AUTOFILL =
    ChromeBrowserData_ChromeBrowserCategory_AUTOFILL;
  static inline bool ChromeBrowserCategory_IsValid(int value) {
    return ChromeBrowserData_ChromeBrowserCategory_IsValid(value);
  }
  static const ChromeBrowserCategory ChromeBrowserCategory_MIN =
    ChromeBrowserData_ChromeBrowserCategory_ChromeBrowserCategory_MIN;
  static const ChromeBrowserCategory ChromeBrowserCategory_MAX =
    ChromeBrowserData_ChromeBrowserCategory_ChromeBrowserCategory_MAX;
  static const int ChromeBrowserCategory_ARRAYSIZE =
    ChromeBrowserData_ChromeBrowserCategory_ChromeBrowserCategory_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // optional .userfeedback.ChromeBrowserData.ChromeBrowserCategory category = 1 [default = OTHER];
  bool has_category() const;
  void clear_category();
  static const int kCategoryFieldNumber = 1;
  ::userfeedback::ChromeBrowserData_ChromeBrowserCategory category() const;
  void set_category(::userfeedback::ChromeBrowserData_ChromeBrowserCategory value);

  // @@protoc_insertion_point(class_scope:userfeedback.ChromeBrowserData)
 private:
  void set_has_category();
  void clear_has_category();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  int category_;
  friend struct protobuf_chrome_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ChromeData

// optional .userfeedback.ChromeData.ChromePlatform chrome_platform = 1 [default = CHROME_OS];
inline bool ChromeData::has_chrome_platform() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ChromeData::set_has_chrome_platform() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ChromeData::clear_has_chrome_platform() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ChromeData::clear_chrome_platform() {
  chrome_platform_ = 1;
  clear_has_chrome_platform();
}
inline ::userfeedback::ChromeData_ChromePlatform ChromeData::chrome_platform() const {
  // @@protoc_insertion_point(field_get:userfeedback.ChromeData.chrome_platform)
  return static_cast< ::userfeedback::ChromeData_ChromePlatform >(chrome_platform_);
}
inline void ChromeData::set_chrome_platform(::userfeedback::ChromeData_ChromePlatform value) {
  assert(::userfeedback::ChromeData_ChromePlatform_IsValid(value));
  set_has_chrome_platform();
  chrome_platform_ = value;
  // @@protoc_insertion_point(field_set:userfeedback.ChromeData.chrome_platform)
}

// optional .userfeedback.ChromeOsData chrome_os_data = 2;
inline bool ChromeData::has_chrome_os_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChromeData::set_has_chrome_os_data() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChromeData::clear_has_chrome_os_data() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChromeData::clear_chrome_os_data() {
  if (chrome_os_data_ != NULL) chrome_os_data_->::userfeedback::ChromeOsData::Clear();
  clear_has_chrome_os_data();
}
inline const ::userfeedback::ChromeOsData& ChromeData::chrome_os_data() const {
  // @@protoc_insertion_point(field_get:userfeedback.ChromeData.chrome_os_data)
  return chrome_os_data_ != NULL ? *chrome_os_data_
                         : *::userfeedback::ChromeOsData::internal_default_instance();
}
inline ::userfeedback::ChromeOsData* ChromeData::mutable_chrome_os_data() {
  set_has_chrome_os_data();
  if (chrome_os_data_ == NULL) {
    chrome_os_data_ = new ::userfeedback::ChromeOsData;
  }
  // @@protoc_insertion_point(field_mutable:userfeedback.ChromeData.chrome_os_data)
  return chrome_os_data_;
}
inline ::userfeedback::ChromeOsData* ChromeData::release_chrome_os_data() {
  // @@protoc_insertion_point(field_release:userfeedback.ChromeData.chrome_os_data)
  clear_has_chrome_os_data();
  ::userfeedback::ChromeOsData* temp = chrome_os_data_;
  chrome_os_data_ = NULL;
  return temp;
}
inline void ChromeData::set_allocated_chrome_os_data(::userfeedback::ChromeOsData* chrome_os_data) {
  delete chrome_os_data_;
  chrome_os_data_ = chrome_os_data;
  if (chrome_os_data) {
    set_has_chrome_os_data();
  } else {
    clear_has_chrome_os_data();
  }
  // @@protoc_insertion_point(field_set_allocated:userfeedback.ChromeData.chrome_os_data)
}

// optional .userfeedback.ChromeBrowserData chrome_browser_data = 3;
inline bool ChromeData::has_chrome_browser_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ChromeData::set_has_chrome_browser_data() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ChromeData::clear_has_chrome_browser_data() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ChromeData::clear_chrome_browser_data() {
  if (chrome_browser_data_ != NULL) chrome_browser_data_->::userfeedback::ChromeBrowserData::Clear();
  clear_has_chrome_browser_data();
}
inline const ::userfeedback::ChromeBrowserData& ChromeData::chrome_browser_data() const {
  // @@protoc_insertion_point(field_get:userfeedback.ChromeData.chrome_browser_data)
  return chrome_browser_data_ != NULL ? *chrome_browser_data_
                         : *::userfeedback::ChromeBrowserData::internal_default_instance();
}
inline ::userfeedback::ChromeBrowserData* ChromeData::mutable_chrome_browser_data() {
  set_has_chrome_browser_data();
  if (chrome_browser_data_ == NULL) {
    chrome_browser_data_ = new ::userfeedback::ChromeBrowserData;
  }
  // @@protoc_insertion_point(field_mutable:userfeedback.ChromeData.chrome_browser_data)
  return chrome_browser_data_;
}
inline ::userfeedback::ChromeBrowserData* ChromeData::release_chrome_browser_data() {
  // @@protoc_insertion_point(field_release:userfeedback.ChromeData.chrome_browser_data)
  clear_has_chrome_browser_data();
  ::userfeedback::ChromeBrowserData* temp = chrome_browser_data_;
  chrome_browser_data_ = NULL;
  return temp;
}
inline void ChromeData::set_allocated_chrome_browser_data(::userfeedback::ChromeBrowserData* chrome_browser_data) {
  delete chrome_browser_data_;
  chrome_browser_data_ = chrome_browser_data;
  if (chrome_browser_data) {
    set_has_chrome_browser_data();
  } else {
    clear_has_chrome_browser_data();
  }
  // @@protoc_insertion_point(field_set_allocated:userfeedback.ChromeData.chrome_browser_data)
}

// -------------------------------------------------------------------

// ChromeOsData

// optional .userfeedback.ChromeOsData.ChromeOsCategory category = 1 [default = OTHER];
inline bool ChromeOsData::has_category() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChromeOsData::set_has_category() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChromeOsData::clear_has_category() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChromeOsData::clear_category() {
  category_ = 8;
  clear_has_category();
}
inline ::userfeedback::ChromeOsData_ChromeOsCategory ChromeOsData::category() const {
  // @@protoc_insertion_point(field_get:userfeedback.ChromeOsData.category)
  return static_cast< ::userfeedback::ChromeOsData_ChromeOsCategory >(category_);
}
inline void ChromeOsData::set_category(::userfeedback::ChromeOsData_ChromeOsCategory value) {
  assert(::userfeedback::ChromeOsData_ChromeOsCategory_IsValid(value));
  set_has_category();
  category_ = value;
  // @@protoc_insertion_point(field_set:userfeedback.ChromeOsData.category)
}

// -------------------------------------------------------------------

// ChromeBrowserData

// optional .userfeedback.ChromeBrowserData.ChromeBrowserCategory category = 1 [default = OTHER];
inline bool ChromeBrowserData::has_category() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChromeBrowserData::set_has_category() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChromeBrowserData::clear_has_category() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChromeBrowserData::clear_category() {
  category_ = 9;
  clear_has_category();
}
inline ::userfeedback::ChromeBrowserData_ChromeBrowserCategory ChromeBrowserData::category() const {
  // @@protoc_insertion_point(field_get:userfeedback.ChromeBrowserData.category)
  return static_cast< ::userfeedback::ChromeBrowserData_ChromeBrowserCategory >(category_);
}
inline void ChromeBrowserData::set_category(::userfeedback::ChromeBrowserData_ChromeBrowserCategory value) {
  assert(::userfeedback::ChromeBrowserData_ChromeBrowserCategory_IsValid(value));
  set_has_category();
  category_ = value;
  // @@protoc_insertion_point(field_set:userfeedback.ChromeBrowserData.category)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace userfeedback

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::userfeedback::ChromeData_ChromePlatform> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::userfeedback::ChromeOsData_ChromeOsCategory> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::userfeedback::ChromeBrowserData_ChromeBrowserCategory> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_chrome_2eproto__INCLUDED
