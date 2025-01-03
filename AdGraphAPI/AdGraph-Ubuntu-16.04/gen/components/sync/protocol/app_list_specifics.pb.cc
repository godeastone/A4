// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: app_list_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "app_list_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {
class AppListSpecificsDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<AppListSpecifics> {
} _AppListSpecifics_default_instance_;

namespace protobuf_app_5flist_5fspecifics_2eproto {

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
  _AppListSpecifics_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _AppListSpecifics_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}

}  // namespace protobuf_app_5flist_5fspecifics_2eproto

bool AppListSpecifics_AppListItemType_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const AppListSpecifics_AppListItemType AppListSpecifics::TYPE_APP;
const AppListSpecifics_AppListItemType AppListSpecifics::TYPE_REMOVE_DEFAULT_APP;
const AppListSpecifics_AppListItemType AppListSpecifics::TYPE_FOLDER;
const AppListSpecifics_AppListItemType AppListSpecifics::TYPE_URL;
const AppListSpecifics_AppListItemType AppListSpecifics::AppListItemType_MIN;
const AppListSpecifics_AppListItemType AppListSpecifics::AppListItemType_MAX;
const int AppListSpecifics::AppListItemType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AppListSpecifics::kItemIdFieldNumber;
const int AppListSpecifics::kItemTypeFieldNumber;
const int AppListSpecifics::kItemNameFieldNumber;
const int AppListSpecifics::kParentIdFieldNumber;
const int AppListSpecifics::kOBSOLETEPageOrdinalFieldNumber;
const int AppListSpecifics::kItemOrdinalFieldNumber;
const int AppListSpecifics::kItemPinOrdinalFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AppListSpecifics::AppListSpecifics()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_app_5flist_5fspecifics_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.AppListSpecifics)
}
AppListSpecifics::AppListSpecifics(const AppListSpecifics& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  item_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_item_id()) {
    item_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.item_id_);
  }
  item_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_item_name()) {
    item_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.item_name_);
  }
  parent_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_parent_id()) {
    parent_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.parent_id_);
  }
  obsolete_page_ordinal_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_obsolete_page_ordinal()) {
    obsolete_page_ordinal_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.obsolete_page_ordinal_);
  }
  item_ordinal_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_item_ordinal()) {
    item_ordinal_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.item_ordinal_);
  }
  item_pin_ordinal_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_item_pin_ordinal()) {
    item_pin_ordinal_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.item_pin_ordinal_);
  }
  item_type_ = from.item_type_;
  // @@protoc_insertion_point(copy_constructor:sync_pb.AppListSpecifics)
}

void AppListSpecifics::SharedCtor() {
  _cached_size_ = 0;
  item_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  item_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  parent_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  obsolete_page_ordinal_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  item_ordinal_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  item_pin_ordinal_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  item_type_ = 1;
}

AppListSpecifics::~AppListSpecifics() {
  // @@protoc_insertion_point(destructor:sync_pb.AppListSpecifics)
  SharedDtor();
}

void AppListSpecifics::SharedDtor() {
  item_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  item_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  parent_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  obsolete_page_ordinal_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  item_ordinal_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  item_pin_ordinal_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void AppListSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const AppListSpecifics& AppListSpecifics::default_instance() {
  protobuf_app_5flist_5fspecifics_2eproto::InitDefaults();
  return *internal_default_instance();
}

AppListSpecifics* AppListSpecifics::New(::google::protobuf::Arena* arena) const {
  AppListSpecifics* n = new AppListSpecifics;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AppListSpecifics::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.AppListSpecifics)
  if (_has_bits_[0 / 32] & 127u) {
    if (has_item_id()) {
      GOOGLE_DCHECK(!item_id_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*item_id_.UnsafeRawStringPointer())->clear();
    }
    if (has_item_name()) {
      GOOGLE_DCHECK(!item_name_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*item_name_.UnsafeRawStringPointer())->clear();
    }
    if (has_parent_id()) {
      GOOGLE_DCHECK(!parent_id_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*parent_id_.UnsafeRawStringPointer())->clear();
    }
    if (has_obsolete_page_ordinal()) {
      GOOGLE_DCHECK(!obsolete_page_ordinal_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*obsolete_page_ordinal_.UnsafeRawStringPointer())->clear();
    }
    if (has_item_ordinal()) {
      GOOGLE_DCHECK(!item_ordinal_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*item_ordinal_.UnsafeRawStringPointer())->clear();
    }
    if (has_item_pin_ordinal()) {
      GOOGLE_DCHECK(!item_pin_ordinal_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*item_pin_ordinal_.UnsafeRawStringPointer())->clear();
    }
    item_type_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool AppListSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(&_internal_metadata_,
          &::google::protobuf::internal::InternalMetadataWithArenaLite::
              mutable_unknown_fields));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.AppListSpecifics)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string item_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_item_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .sync_pb.AppListSpecifics.AppListItemType item_type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::sync_pb::AppListSpecifics_AppListItemType_IsValid(value)) {
            set_item_type(static_cast< ::sync_pb::AppListSpecifics_AppListItemType >(value));
          } else {
            unknown_fields_stream.WriteVarint32(16u);
            unknown_fields_stream.WriteVarint32(
                static_cast< ::google::protobuf::uint32>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string item_name = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_item_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string parent_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_parent_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string OBSOLETE_page_ordinal = 5 [deprecated = true];
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_obsolete_page_ordinal()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string item_ordinal = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_item_ordinal()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string item_pin_ordinal = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_item_pin_ordinal()));
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
  // @@protoc_insertion_point(parse_success:sync_pb.AppListSpecifics)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.AppListSpecifics)
  return false;
#undef DO_
}

void AppListSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.AppListSpecifics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string item_id = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->item_id(), output);
  }

  // optional .sync_pb.AppListSpecifics.AppListItemType item_type = 2;
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->item_type(), output);
  }

  // optional string item_name = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->item_name(), output);
  }

  // optional string parent_id = 4;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->parent_id(), output);
  }

  // optional string OBSOLETE_page_ordinal = 5 [deprecated = true];
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->obsolete_page_ordinal(), output);
  }

  // optional string item_ordinal = 6;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->item_ordinal(), output);
  }

  // optional string item_pin_ordinal = 7;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->item_pin_ordinal(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.AppListSpecifics)
}

size_t AppListSpecifics::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.AppListSpecifics)
  size_t total_size = 0;

  total_size += unknown_fields().size();

  if (_has_bits_[0 / 32] & 127u) {
    // optional string item_id = 1;
    if (has_item_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->item_id());
    }

    // optional string item_name = 3;
    if (has_item_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->item_name());
    }

    // optional string parent_id = 4;
    if (has_parent_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->parent_id());
    }

    // optional string OBSOLETE_page_ordinal = 5 [deprecated = true];
    if (has_obsolete_page_ordinal()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->obsolete_page_ordinal());
    }

    // optional string item_ordinal = 6;
    if (has_item_ordinal()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->item_ordinal());
    }

    // optional string item_pin_ordinal = 7;
    if (has_item_pin_ordinal()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->item_pin_ordinal());
    }

    // optional .sync_pb.AppListSpecifics.AppListItemType item_type = 2;
    if (has_item_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->item_type());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AppListSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AppListSpecifics*>(&from));
}

void AppListSpecifics::MergeFrom(const AppListSpecifics& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.AppListSpecifics)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 127u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_item_id();
      item_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.item_id_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_item_name();
      item_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.item_name_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_parent_id();
      parent_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.parent_id_);
    }
    if (cached_has_bits & 0x00000008u) {
      set_has_obsolete_page_ordinal();
      obsolete_page_ordinal_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.obsolete_page_ordinal_);
    }
    if (cached_has_bits & 0x00000010u) {
      set_has_item_ordinal();
      item_ordinal_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.item_ordinal_);
    }
    if (cached_has_bits & 0x00000020u) {
      set_has_item_pin_ordinal();
      item_pin_ordinal_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.item_pin_ordinal_);
    }
    if (cached_has_bits & 0x00000040u) {
      item_type_ = from.item_type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void AppListSpecifics::CopyFrom(const AppListSpecifics& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.AppListSpecifics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AppListSpecifics::IsInitialized() const {
  return true;
}

void AppListSpecifics::Swap(AppListSpecifics* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AppListSpecifics::InternalSwap(AppListSpecifics* other) {
  item_id_.Swap(&other->item_id_);
  item_name_.Swap(&other->item_name_);
  parent_id_.Swap(&other->parent_id_);
  obsolete_page_ordinal_.Swap(&other->obsolete_page_ordinal_);
  item_ordinal_.Swap(&other->item_ordinal_);
  item_pin_ordinal_.Swap(&other->item_pin_ordinal_);
  std::swap(item_type_, other->item_type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string AppListSpecifics::GetTypeName() const {
  return "sync_pb.AppListSpecifics";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AppListSpecifics

// optional string item_id = 1;
bool AppListSpecifics::has_item_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void AppListSpecifics::set_has_item_id() {
  _has_bits_[0] |= 0x00000001u;
}
void AppListSpecifics::clear_has_item_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void AppListSpecifics::clear_item_id() {
  item_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_item_id();
}
const ::std::string& AppListSpecifics::item_id() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppListSpecifics.item_id)
  return item_id_.GetNoArena();
}
void AppListSpecifics::set_item_id(const ::std::string& value) {
  set_has_item_id();
  item_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppListSpecifics.item_id)
}
#if LANG_CXX11
void AppListSpecifics::set_item_id(::std::string&& value) {
  set_has_item_id();
  item_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.AppListSpecifics.item_id)
}
#endif
void AppListSpecifics::set_item_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_item_id();
  item_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppListSpecifics.item_id)
}
void AppListSpecifics::set_item_id(const char* value, size_t size) {
  set_has_item_id();
  item_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppListSpecifics.item_id)
}
::std::string* AppListSpecifics::mutable_item_id() {
  set_has_item_id();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppListSpecifics.item_id)
  return item_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* AppListSpecifics::release_item_id() {
  // @@protoc_insertion_point(field_release:sync_pb.AppListSpecifics.item_id)
  clear_has_item_id();
  return item_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void AppListSpecifics::set_allocated_item_id(::std::string* item_id) {
  if (item_id != NULL) {
    set_has_item_id();
  } else {
    clear_has_item_id();
  }
  item_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), item_id);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppListSpecifics.item_id)
}

// optional .sync_pb.AppListSpecifics.AppListItemType item_type = 2;
bool AppListSpecifics::has_item_type() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void AppListSpecifics::set_has_item_type() {
  _has_bits_[0] |= 0x00000040u;
}
void AppListSpecifics::clear_has_item_type() {
  _has_bits_[0] &= ~0x00000040u;
}
void AppListSpecifics::clear_item_type() {
  item_type_ = 1;
  clear_has_item_type();
}
::sync_pb::AppListSpecifics_AppListItemType AppListSpecifics::item_type() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppListSpecifics.item_type)
  return static_cast< ::sync_pb::AppListSpecifics_AppListItemType >(item_type_);
}
void AppListSpecifics::set_item_type(::sync_pb::AppListSpecifics_AppListItemType value) {
  assert(::sync_pb::AppListSpecifics_AppListItemType_IsValid(value));
  set_has_item_type();
  item_type_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.AppListSpecifics.item_type)
}

// optional string item_name = 3;
bool AppListSpecifics::has_item_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void AppListSpecifics::set_has_item_name() {
  _has_bits_[0] |= 0x00000002u;
}
void AppListSpecifics::clear_has_item_name() {
  _has_bits_[0] &= ~0x00000002u;
}
void AppListSpecifics::clear_item_name() {
  item_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_item_name();
}
const ::std::string& AppListSpecifics::item_name() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppListSpecifics.item_name)
  return item_name_.GetNoArena();
}
void AppListSpecifics::set_item_name(const ::std::string& value) {
  set_has_item_name();
  item_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppListSpecifics.item_name)
}
#if LANG_CXX11
void AppListSpecifics::set_item_name(::std::string&& value) {
  set_has_item_name();
  item_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.AppListSpecifics.item_name)
}
#endif
void AppListSpecifics::set_item_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_item_name();
  item_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppListSpecifics.item_name)
}
void AppListSpecifics::set_item_name(const char* value, size_t size) {
  set_has_item_name();
  item_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppListSpecifics.item_name)
}
::std::string* AppListSpecifics::mutable_item_name() {
  set_has_item_name();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppListSpecifics.item_name)
  return item_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* AppListSpecifics::release_item_name() {
  // @@protoc_insertion_point(field_release:sync_pb.AppListSpecifics.item_name)
  clear_has_item_name();
  return item_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void AppListSpecifics::set_allocated_item_name(::std::string* item_name) {
  if (item_name != NULL) {
    set_has_item_name();
  } else {
    clear_has_item_name();
  }
  item_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), item_name);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppListSpecifics.item_name)
}

// optional string parent_id = 4;
bool AppListSpecifics::has_parent_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void AppListSpecifics::set_has_parent_id() {
  _has_bits_[0] |= 0x00000004u;
}
void AppListSpecifics::clear_has_parent_id() {
  _has_bits_[0] &= ~0x00000004u;
}
void AppListSpecifics::clear_parent_id() {
  parent_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_parent_id();
}
const ::std::string& AppListSpecifics::parent_id() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppListSpecifics.parent_id)
  return parent_id_.GetNoArena();
}
void AppListSpecifics::set_parent_id(const ::std::string& value) {
  set_has_parent_id();
  parent_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppListSpecifics.parent_id)
}
#if LANG_CXX11
void AppListSpecifics::set_parent_id(::std::string&& value) {
  set_has_parent_id();
  parent_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.AppListSpecifics.parent_id)
}
#endif
void AppListSpecifics::set_parent_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_parent_id();
  parent_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppListSpecifics.parent_id)
}
void AppListSpecifics::set_parent_id(const char* value, size_t size) {
  set_has_parent_id();
  parent_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppListSpecifics.parent_id)
}
::std::string* AppListSpecifics::mutable_parent_id() {
  set_has_parent_id();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppListSpecifics.parent_id)
  return parent_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* AppListSpecifics::release_parent_id() {
  // @@protoc_insertion_point(field_release:sync_pb.AppListSpecifics.parent_id)
  clear_has_parent_id();
  return parent_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void AppListSpecifics::set_allocated_parent_id(::std::string* parent_id) {
  if (parent_id != NULL) {
    set_has_parent_id();
  } else {
    clear_has_parent_id();
  }
  parent_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), parent_id);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppListSpecifics.parent_id)
}

// optional string OBSOLETE_page_ordinal = 5 [deprecated = true];
bool AppListSpecifics::has_obsolete_page_ordinal() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void AppListSpecifics::set_has_obsolete_page_ordinal() {
  _has_bits_[0] |= 0x00000008u;
}
void AppListSpecifics::clear_has_obsolete_page_ordinal() {
  _has_bits_[0] &= ~0x00000008u;
}
void AppListSpecifics::clear_obsolete_page_ordinal() {
  obsolete_page_ordinal_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_obsolete_page_ordinal();
}
const ::std::string& AppListSpecifics::obsolete_page_ordinal() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppListSpecifics.OBSOLETE_page_ordinal)
  return obsolete_page_ordinal_.GetNoArena();
}
void AppListSpecifics::set_obsolete_page_ordinal(const ::std::string& value) {
  set_has_obsolete_page_ordinal();
  obsolete_page_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppListSpecifics.OBSOLETE_page_ordinal)
}
#if LANG_CXX11
void AppListSpecifics::set_obsolete_page_ordinal(::std::string&& value) {
  set_has_obsolete_page_ordinal();
  obsolete_page_ordinal_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.AppListSpecifics.OBSOLETE_page_ordinal)
}
#endif
void AppListSpecifics::set_obsolete_page_ordinal(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_obsolete_page_ordinal();
  obsolete_page_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppListSpecifics.OBSOLETE_page_ordinal)
}
void AppListSpecifics::set_obsolete_page_ordinal(const char* value, size_t size) {
  set_has_obsolete_page_ordinal();
  obsolete_page_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppListSpecifics.OBSOLETE_page_ordinal)
}
::std::string* AppListSpecifics::mutable_obsolete_page_ordinal() {
  set_has_obsolete_page_ordinal();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppListSpecifics.OBSOLETE_page_ordinal)
  return obsolete_page_ordinal_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* AppListSpecifics::release_obsolete_page_ordinal() {
  // @@protoc_insertion_point(field_release:sync_pb.AppListSpecifics.OBSOLETE_page_ordinal)
  clear_has_obsolete_page_ordinal();
  return obsolete_page_ordinal_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void AppListSpecifics::set_allocated_obsolete_page_ordinal(::std::string* obsolete_page_ordinal) {
  if (obsolete_page_ordinal != NULL) {
    set_has_obsolete_page_ordinal();
  } else {
    clear_has_obsolete_page_ordinal();
  }
  obsolete_page_ordinal_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), obsolete_page_ordinal);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppListSpecifics.OBSOLETE_page_ordinal)
}

// optional string item_ordinal = 6;
bool AppListSpecifics::has_item_ordinal() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void AppListSpecifics::set_has_item_ordinal() {
  _has_bits_[0] |= 0x00000010u;
}
void AppListSpecifics::clear_has_item_ordinal() {
  _has_bits_[0] &= ~0x00000010u;
}
void AppListSpecifics::clear_item_ordinal() {
  item_ordinal_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_item_ordinal();
}
const ::std::string& AppListSpecifics::item_ordinal() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppListSpecifics.item_ordinal)
  return item_ordinal_.GetNoArena();
}
void AppListSpecifics::set_item_ordinal(const ::std::string& value) {
  set_has_item_ordinal();
  item_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppListSpecifics.item_ordinal)
}
#if LANG_CXX11
void AppListSpecifics::set_item_ordinal(::std::string&& value) {
  set_has_item_ordinal();
  item_ordinal_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.AppListSpecifics.item_ordinal)
}
#endif
void AppListSpecifics::set_item_ordinal(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_item_ordinal();
  item_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppListSpecifics.item_ordinal)
}
void AppListSpecifics::set_item_ordinal(const char* value, size_t size) {
  set_has_item_ordinal();
  item_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppListSpecifics.item_ordinal)
}
::std::string* AppListSpecifics::mutable_item_ordinal() {
  set_has_item_ordinal();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppListSpecifics.item_ordinal)
  return item_ordinal_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* AppListSpecifics::release_item_ordinal() {
  // @@protoc_insertion_point(field_release:sync_pb.AppListSpecifics.item_ordinal)
  clear_has_item_ordinal();
  return item_ordinal_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void AppListSpecifics::set_allocated_item_ordinal(::std::string* item_ordinal) {
  if (item_ordinal != NULL) {
    set_has_item_ordinal();
  } else {
    clear_has_item_ordinal();
  }
  item_ordinal_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), item_ordinal);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppListSpecifics.item_ordinal)
}

// optional string item_pin_ordinal = 7;
bool AppListSpecifics::has_item_pin_ordinal() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void AppListSpecifics::set_has_item_pin_ordinal() {
  _has_bits_[0] |= 0x00000020u;
}
void AppListSpecifics::clear_has_item_pin_ordinal() {
  _has_bits_[0] &= ~0x00000020u;
}
void AppListSpecifics::clear_item_pin_ordinal() {
  item_pin_ordinal_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_item_pin_ordinal();
}
const ::std::string& AppListSpecifics::item_pin_ordinal() const {
  // @@protoc_insertion_point(field_get:sync_pb.AppListSpecifics.item_pin_ordinal)
  return item_pin_ordinal_.GetNoArena();
}
void AppListSpecifics::set_item_pin_ordinal(const ::std::string& value) {
  set_has_item_pin_ordinal();
  item_pin_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.AppListSpecifics.item_pin_ordinal)
}
#if LANG_CXX11
void AppListSpecifics::set_item_pin_ordinal(::std::string&& value) {
  set_has_item_pin_ordinal();
  item_pin_ordinal_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sync_pb.AppListSpecifics.item_pin_ordinal)
}
#endif
void AppListSpecifics::set_item_pin_ordinal(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_item_pin_ordinal();
  item_pin_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.AppListSpecifics.item_pin_ordinal)
}
void AppListSpecifics::set_item_pin_ordinal(const char* value, size_t size) {
  set_has_item_pin_ordinal();
  item_pin_ordinal_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.AppListSpecifics.item_pin_ordinal)
}
::std::string* AppListSpecifics::mutable_item_pin_ordinal() {
  set_has_item_pin_ordinal();
  // @@protoc_insertion_point(field_mutable:sync_pb.AppListSpecifics.item_pin_ordinal)
  return item_pin_ordinal_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* AppListSpecifics::release_item_pin_ordinal() {
  // @@protoc_insertion_point(field_release:sync_pb.AppListSpecifics.item_pin_ordinal)
  clear_has_item_pin_ordinal();
  return item_pin_ordinal_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void AppListSpecifics::set_allocated_item_pin_ordinal(::std::string* item_pin_ordinal) {
  if (item_pin_ordinal != NULL) {
    set_has_item_pin_ordinal();
  } else {
    clear_has_item_pin_ordinal();
  }
  item_pin_ordinal_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), item_pin_ordinal);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.AppListSpecifics.item_pin_ordinal)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)