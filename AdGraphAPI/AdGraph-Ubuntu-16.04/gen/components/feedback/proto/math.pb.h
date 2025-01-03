// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: math.proto

#ifndef PROTOBUF_math_2eproto__INCLUDED
#define PROTOBUF_math_2eproto__INCLUDED

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
class Dimensions;
class DimensionsDefaultTypeInternal;
extern DimensionsDefaultTypeInternal _Dimensions_default_instance_;
class Rectangle;
class RectangleDefaultTypeInternal;
extern RectangleDefaultTypeInternal _Rectangle_default_instance_;
}  // namespace userfeedback

namespace userfeedback {

namespace protobuf_math_2eproto {
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
}  // namespace protobuf_math_2eproto

// ===================================================================

class Dimensions : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:userfeedback.Dimensions) */ {
 public:
  Dimensions();
  virtual ~Dimensions();

  Dimensions(const Dimensions& from);

  inline Dimensions& operator=(const Dimensions& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const Dimensions& default_instance();

  static inline const Dimensions* internal_default_instance() {
    return reinterpret_cast<const Dimensions*>(
               &_Dimensions_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(Dimensions* other);

  // implements Message ----------------------------------------------

  inline Dimensions* New() const PROTOBUF_FINAL { return New(NULL); }

  Dimensions* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Dimensions& from);
  void MergeFrom(const Dimensions& from);
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
  void InternalSwap(Dimensions* other);
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

  // required float width = 1;
  bool has_width() const;
  void clear_width();
  static const int kWidthFieldNumber = 1;
  float width() const;
  void set_width(float value);

  // required float height = 2;
  bool has_height() const;
  void clear_height();
  static const int kHeightFieldNumber = 2;
  float height() const;
  void set_height(float value);

  // @@protoc_insertion_point(class_scope:userfeedback.Dimensions)
 private:
  void set_has_width();
  void clear_has_width();
  void set_has_height();
  void clear_has_height();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  float width_;
  float height_;
  friend struct protobuf_math_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Rectangle : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:userfeedback.Rectangle) */ {
 public:
  Rectangle();
  virtual ~Rectangle();

  Rectangle(const Rectangle& from);

  inline Rectangle& operator=(const Rectangle& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const Rectangle& default_instance();

  static inline const Rectangle* internal_default_instance() {
    return reinterpret_cast<const Rectangle*>(
               &_Rectangle_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(Rectangle* other);

  // implements Message ----------------------------------------------

  inline Rectangle* New() const PROTOBUF_FINAL { return New(NULL); }

  Rectangle* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Rectangle& from);
  void MergeFrom(const Rectangle& from);
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
  void InternalSwap(Rectangle* other);
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

  // required float left = 1;
  bool has_left() const;
  void clear_left();
  static const int kLeftFieldNumber = 1;
  float left() const;
  void set_left(float value);

  // required float top = 2;
  bool has_top() const;
  void clear_top();
  static const int kTopFieldNumber = 2;
  float top() const;
  void set_top(float value);

  // required float width = 3;
  bool has_width() const;
  void clear_width();
  static const int kWidthFieldNumber = 3;
  float width() const;
  void set_width(float value);

  // required float height = 4;
  bool has_height() const;
  void clear_height();
  static const int kHeightFieldNumber = 4;
  float height() const;
  void set_height(float value);

  // @@protoc_insertion_point(class_scope:userfeedback.Rectangle)
 private:
  void set_has_left();
  void clear_has_left();
  void set_has_top();
  void clear_has_top();
  void set_has_width();
  void clear_has_width();
  void set_has_height();
  void clear_has_height();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  float left_;
  float top_;
  float width_;
  float height_;
  friend struct protobuf_math_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Dimensions

// required float width = 1;
inline bool Dimensions::has_width() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Dimensions::set_has_width() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Dimensions::clear_has_width() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Dimensions::clear_width() {
  width_ = 0;
  clear_has_width();
}
inline float Dimensions::width() const {
  // @@protoc_insertion_point(field_get:userfeedback.Dimensions.width)
  return width_;
}
inline void Dimensions::set_width(float value) {
  set_has_width();
  width_ = value;
  // @@protoc_insertion_point(field_set:userfeedback.Dimensions.width)
}

// required float height = 2;
inline bool Dimensions::has_height() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Dimensions::set_has_height() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Dimensions::clear_has_height() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Dimensions::clear_height() {
  height_ = 0;
  clear_has_height();
}
inline float Dimensions::height() const {
  // @@protoc_insertion_point(field_get:userfeedback.Dimensions.height)
  return height_;
}
inline void Dimensions::set_height(float value) {
  set_has_height();
  height_ = value;
  // @@protoc_insertion_point(field_set:userfeedback.Dimensions.height)
}

// -------------------------------------------------------------------

// Rectangle

// required float left = 1;
inline bool Rectangle::has_left() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Rectangle::set_has_left() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Rectangle::clear_has_left() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Rectangle::clear_left() {
  left_ = 0;
  clear_has_left();
}
inline float Rectangle::left() const {
  // @@protoc_insertion_point(field_get:userfeedback.Rectangle.left)
  return left_;
}
inline void Rectangle::set_left(float value) {
  set_has_left();
  left_ = value;
  // @@protoc_insertion_point(field_set:userfeedback.Rectangle.left)
}

// required float top = 2;
inline bool Rectangle::has_top() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Rectangle::set_has_top() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Rectangle::clear_has_top() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Rectangle::clear_top() {
  top_ = 0;
  clear_has_top();
}
inline float Rectangle::top() const {
  // @@protoc_insertion_point(field_get:userfeedback.Rectangle.top)
  return top_;
}
inline void Rectangle::set_top(float value) {
  set_has_top();
  top_ = value;
  // @@protoc_insertion_point(field_set:userfeedback.Rectangle.top)
}

// required float width = 3;
inline bool Rectangle::has_width() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Rectangle::set_has_width() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Rectangle::clear_has_width() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Rectangle::clear_width() {
  width_ = 0;
  clear_has_width();
}
inline float Rectangle::width() const {
  // @@protoc_insertion_point(field_get:userfeedback.Rectangle.width)
  return width_;
}
inline void Rectangle::set_width(float value) {
  set_has_width();
  width_ = value;
  // @@protoc_insertion_point(field_set:userfeedback.Rectangle.width)
}

// required float height = 4;
inline bool Rectangle::has_height() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Rectangle::set_has_height() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Rectangle::clear_has_height() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Rectangle::clear_height() {
  height_ = 0;
  clear_has_height();
}
inline float Rectangle::height() const {
  // @@protoc_insertion_point(field_get:userfeedback.Rectangle.height)
  return height_;
}
inline void Rectangle::set_height(float value) {
  set_has_height();
  height_ = value;
  // @@protoc_insertion_point(field_set:userfeedback.Rectangle.height)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace userfeedback

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_math_2eproto__INCLUDED
