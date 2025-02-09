// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: annotations.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "annotations.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace userfeedback {
class AnnotationDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Annotation> {
} _Annotation_default_instance_;

namespace protobuf_annotations_2eproto {

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
  _Annotation_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::userfeedback::protobuf_math_2eproto::InitDefaults();
  ::userfeedback::protobuf_dom_2eproto::InitDefaults();
  _Annotation_default_instance_.DefaultConstruct();
  _Annotation_default_instance_.get_mutable()->rectangle_ = const_cast< ::userfeedback::Rectangle*>(
      ::userfeedback::Rectangle::internal_default_instance());
  _Annotation_default_instance_.get_mutable()->annotatedelementpath_ = const_cast< ::userfeedback::HtmlPath*>(
      ::userfeedback::HtmlPath::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  ::userfeedback::protobuf_math_2eproto::AddDescriptors();
  ::userfeedback::protobuf_dom_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}

}  // namespace protobuf_annotations_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Annotation::kRectangleFieldNumber;
const int Annotation::kSnippetFieldNumber;
const int Annotation::kAnnotatedElementPathFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Annotation::Annotation()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_annotations_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:userfeedback.Annotation)
}
Annotation::Annotation(const Annotation& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  snippet_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_snippet()) {
    snippet_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.snippet_);
  }
  if (from.has_rectangle()) {
    rectangle_ = new ::userfeedback::Rectangle(*from.rectangle_);
  } else {
    rectangle_ = NULL;
  }
  if (from.has_annotatedelementpath()) {
    annotatedelementpath_ = new ::userfeedback::HtmlPath(*from.annotatedelementpath_);
  } else {
    annotatedelementpath_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:userfeedback.Annotation)
}

void Annotation::SharedCtor() {
  _cached_size_ = 0;
  snippet_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&rectangle_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&annotatedelementpath_) -
      reinterpret_cast<char*>(&rectangle_)) + sizeof(annotatedelementpath_));
}

Annotation::~Annotation() {
  // @@protoc_insertion_point(destructor:userfeedback.Annotation)
  SharedDtor();
}

void Annotation::SharedDtor() {
  snippet_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) {
    delete rectangle_;
  }
  if (this != internal_default_instance()) {
    delete annotatedelementpath_;
  }
}

void Annotation::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Annotation& Annotation::default_instance() {
  protobuf_annotations_2eproto::InitDefaults();
  return *internal_default_instance();
}

Annotation* Annotation::New(::google::protobuf::Arena* arena) const {
  Annotation* n = new Annotation;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Annotation::Clear() {
// @@protoc_insertion_point(message_clear_start:userfeedback.Annotation)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_snippet()) {
      GOOGLE_DCHECK(!snippet_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*snippet_.UnsafeRawStringPointer())->clear();
    }
    if (has_rectangle()) {
      GOOGLE_DCHECK(rectangle_ != NULL);
      rectangle_->::userfeedback::Rectangle::Clear();
    }
    if (has_annotatedelementpath()) {
      GOOGLE_DCHECK(annotatedelementpath_ != NULL);
      annotatedelementpath_->::userfeedback::HtmlPath::Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Annotation::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:userfeedback.Annotation)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .userfeedback.Rectangle rectangle = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rectangle()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string snippet = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_snippet()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .userfeedback.HtmlPath annotatedElementPath = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_annotatedelementpath()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:userfeedback.Annotation)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:userfeedback.Annotation)
  return false;
#undef DO_
}

void Annotation::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:userfeedback.Annotation)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .userfeedback.Rectangle rectangle = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, *this->rectangle_, output);
  }

  // optional string snippet = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->snippet(), output);
  }

  // optional .userfeedback.HtmlPath annotatedElementPath = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, *this->annotatedelementpath_, output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:userfeedback.Annotation)
}

size_t Annotation::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:userfeedback.Annotation)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  // required .userfeedback.Rectangle rectangle = 1;
  if (has_rectangle()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->rectangle_);
  }
  // optional string snippet = 2;
  if (has_snippet()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->snippet());
  }

  // optional .userfeedback.HtmlPath annotatedElementPath = 3;
  if (has_annotatedelementpath()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->annotatedelementpath_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Annotation::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Annotation*>(&from));
}

void Annotation::MergeFrom(const Annotation& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:userfeedback.Annotation)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_snippet();
      snippet_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.snippet_);
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_rectangle()->::userfeedback::Rectangle::MergeFrom(from.rectangle());
    }
    if (cached_has_bits & 0x00000004u) {
      mutable_annotatedelementpath()->::userfeedback::HtmlPath::MergeFrom(from.annotatedelementpath());
    }
  }
}

void Annotation::CopyFrom(const Annotation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:userfeedback.Annotation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Annotation::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;
  if (has_rectangle()) {
    if (!this->rectangle_->IsInitialized()) return false;
  }
  return true;
}

void Annotation::Swap(Annotation* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Annotation::InternalSwap(Annotation* other) {
  snippet_.Swap(&other->snippet_);
  std::swap(rectangle_, other->rectangle_);
  std::swap(annotatedelementpath_, other->annotatedelementpath_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string Annotation::GetTypeName() const {
  return "userfeedback.Annotation";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Annotation

// required .userfeedback.Rectangle rectangle = 1;
bool Annotation::has_rectangle() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Annotation::set_has_rectangle() {
  _has_bits_[0] |= 0x00000002u;
}
void Annotation::clear_has_rectangle() {
  _has_bits_[0] &= ~0x00000002u;
}
void Annotation::clear_rectangle() {
  if (rectangle_ != NULL) rectangle_->::userfeedback::Rectangle::Clear();
  clear_has_rectangle();
}
const ::userfeedback::Rectangle& Annotation::rectangle() const {
  // @@protoc_insertion_point(field_get:userfeedback.Annotation.rectangle)
  return rectangle_ != NULL ? *rectangle_
                         : *::userfeedback::Rectangle::internal_default_instance();
}
::userfeedback::Rectangle* Annotation::mutable_rectangle() {
  set_has_rectangle();
  if (rectangle_ == NULL) {
    rectangle_ = new ::userfeedback::Rectangle;
  }
  // @@protoc_insertion_point(field_mutable:userfeedback.Annotation.rectangle)
  return rectangle_;
}
::userfeedback::Rectangle* Annotation::release_rectangle() {
  // @@protoc_insertion_point(field_release:userfeedback.Annotation.rectangle)
  clear_has_rectangle();
  ::userfeedback::Rectangle* temp = rectangle_;
  rectangle_ = NULL;
  return temp;
}
void Annotation::set_allocated_rectangle(::userfeedback::Rectangle* rectangle) {
  delete rectangle_;
  rectangle_ = rectangle;
  if (rectangle) {
    set_has_rectangle();
  } else {
    clear_has_rectangle();
  }
  // @@protoc_insertion_point(field_set_allocated:userfeedback.Annotation.rectangle)
}

// optional string snippet = 2;
bool Annotation::has_snippet() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Annotation::set_has_snippet() {
  _has_bits_[0] |= 0x00000001u;
}
void Annotation::clear_has_snippet() {
  _has_bits_[0] &= ~0x00000001u;
}
void Annotation::clear_snippet() {
  snippet_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_snippet();
}
const ::std::string& Annotation::snippet() const {
  // @@protoc_insertion_point(field_get:userfeedback.Annotation.snippet)
  return snippet_.GetNoArena();
}
void Annotation::set_snippet(const ::std::string& value) {
  set_has_snippet();
  snippet_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:userfeedback.Annotation.snippet)
}
#if LANG_CXX11
void Annotation::set_snippet(::std::string&& value) {
  set_has_snippet();
  snippet_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:userfeedback.Annotation.snippet)
}
#endif
void Annotation::set_snippet(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_snippet();
  snippet_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:userfeedback.Annotation.snippet)
}
void Annotation::set_snippet(const char* value, size_t size) {
  set_has_snippet();
  snippet_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:userfeedback.Annotation.snippet)
}
::std::string* Annotation::mutable_snippet() {
  set_has_snippet();
  // @@protoc_insertion_point(field_mutable:userfeedback.Annotation.snippet)
  return snippet_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Annotation::release_snippet() {
  // @@protoc_insertion_point(field_release:userfeedback.Annotation.snippet)
  clear_has_snippet();
  return snippet_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Annotation::set_allocated_snippet(::std::string* snippet) {
  if (snippet != NULL) {
    set_has_snippet();
  } else {
    clear_has_snippet();
  }
  snippet_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), snippet);
  // @@protoc_insertion_point(field_set_allocated:userfeedback.Annotation.snippet)
}

// optional .userfeedback.HtmlPath annotatedElementPath = 3;
bool Annotation::has_annotatedelementpath() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Annotation::set_has_annotatedelementpath() {
  _has_bits_[0] |= 0x00000004u;
}
void Annotation::clear_has_annotatedelementpath() {
  _has_bits_[0] &= ~0x00000004u;
}
void Annotation::clear_annotatedelementpath() {
  if (annotatedelementpath_ != NULL) annotatedelementpath_->::userfeedback::HtmlPath::Clear();
  clear_has_annotatedelementpath();
}
const ::userfeedback::HtmlPath& Annotation::annotatedelementpath() const {
  // @@protoc_insertion_point(field_get:userfeedback.Annotation.annotatedElementPath)
  return annotatedelementpath_ != NULL ? *annotatedelementpath_
                         : *::userfeedback::HtmlPath::internal_default_instance();
}
::userfeedback::HtmlPath* Annotation::mutable_annotatedelementpath() {
  set_has_annotatedelementpath();
  if (annotatedelementpath_ == NULL) {
    annotatedelementpath_ = new ::userfeedback::HtmlPath;
  }
  // @@protoc_insertion_point(field_mutable:userfeedback.Annotation.annotatedElementPath)
  return annotatedelementpath_;
}
::userfeedback::HtmlPath* Annotation::release_annotatedelementpath() {
  // @@protoc_insertion_point(field_release:userfeedback.Annotation.annotatedElementPath)
  clear_has_annotatedelementpath();
  ::userfeedback::HtmlPath* temp = annotatedelementpath_;
  annotatedelementpath_ = NULL;
  return temp;
}
void Annotation::set_allocated_annotatedelementpath(::userfeedback::HtmlPath* annotatedelementpath) {
  delete annotatedelementpath_;
  annotatedelementpath_ = annotatedelementpath;
  if (annotatedelementpath) {
    set_has_annotatedelementpath();
  } else {
    clear_has_annotatedelementpath();
  }
  // @@protoc_insertion_point(field_set_allocated:userfeedback.Annotation.annotatedElementPath)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace userfeedback

// @@protoc_insertion_point(global_scope)
