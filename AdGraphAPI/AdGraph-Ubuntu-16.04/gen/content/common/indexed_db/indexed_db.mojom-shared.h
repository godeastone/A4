// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INDEXED_DB_INDEXED_DB_MOJOM_SHARED_H_
#define CONTENT_COMMON_INDEXED_DB_INDEXED_DB_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "content/common/indexed_db/indexed_db.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace indexed_db {
namespace mojom {
class KeyDataView;

class KeyPathDataView;

class KeyRangeDataView;

class IndexMetadataDataView;

class ObjectStoreMetadataDataView;

class DatabaseMetadataDataView;

class IndexKeysDataView;

class FileInfoDataView;

class BlobInfoDataView;

class ValueDataView;

class ReturnValueDataView;

class ObservationDataView;

class ObserverTransactionDataView;

class ObserverChangesDataView;

class KeyDataDataView;
class KeyPathDataDataView;


}  // namespace mojom
}  // namespace indexed_db

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::indexed_db::mojom::KeyDataView> {
  using Data = ::indexed_db::mojom::internal::Key_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::indexed_db::mojom::KeyPathDataView> {
  using Data = ::indexed_db::mojom::internal::KeyPath_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::indexed_db::mojom::KeyRangeDataView> {
  using Data = ::indexed_db::mojom::internal::KeyRange_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::indexed_db::mojom::IndexMetadataDataView> {
  using Data = ::indexed_db::mojom::internal::IndexMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::indexed_db::mojom::ObjectStoreMetadataDataView> {
  using Data = ::indexed_db::mojom::internal::ObjectStoreMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::indexed_db::mojom::DatabaseMetadataDataView> {
  using Data = ::indexed_db::mojom::internal::DatabaseMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::indexed_db::mojom::IndexKeysDataView> {
  using Data = ::indexed_db::mojom::internal::IndexKeys_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::indexed_db::mojom::FileInfoDataView> {
  using Data = ::indexed_db::mojom::internal::FileInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::indexed_db::mojom::BlobInfoDataView> {
  using Data = ::indexed_db::mojom::internal::BlobInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::indexed_db::mojom::ValueDataView> {
  using Data = ::indexed_db::mojom::internal::Value_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::indexed_db::mojom::ReturnValueDataView> {
  using Data = ::indexed_db::mojom::internal::ReturnValue_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::indexed_db::mojom::ObservationDataView> {
  using Data = ::indexed_db::mojom::internal::Observation_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::indexed_db::mojom::ObserverTransactionDataView> {
  using Data = ::indexed_db::mojom::internal::ObserverTransaction_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::indexed_db::mojom::ObserverChangesDataView> {
  using Data = ::indexed_db::mojom::internal::ObserverChanges_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::indexed_db::mojom::KeyDataDataView> {
  using Data = ::indexed_db::mojom::internal::KeyData_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

template <>
struct MojomTypeTraits<::indexed_db::mojom::KeyPathDataDataView> {
  using Data = ::indexed_db::mojom::internal::KeyPathData_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace indexed_db {
namespace mojom {

enum class CursorDirection : int32_t {
  Next,
  NextNoDuplicate,
  Prev,
  PrevNoDuplicate,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, CursorDirection value) {
  switch(value) {
    case CursorDirection::Next:
      return os << "CursorDirection::Next";
    case CursorDirection::NextNoDuplicate:
      return os << "CursorDirection::NextNoDuplicate";
    case CursorDirection::Prev:
      return os << "CursorDirection::Prev";
    case CursorDirection::PrevNoDuplicate:
      return os << "CursorDirection::PrevNoDuplicate";
    default:
      return os << "Unknown CursorDirection value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CursorDirection value) {
  return internal::CursorDirection_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class DataLoss : int32_t {
  None,
  Total,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, DataLoss value) {
  switch(value) {
    case DataLoss::None:
      return os << "DataLoss::None";
    case DataLoss::Total:
      return os << "DataLoss::Total";
    default:
      return os << "Unknown DataLoss value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(DataLoss value) {
  return internal::DataLoss_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class DatalessKeyType : int32_t {
  Invalid,
  Null,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, DatalessKeyType value) {
  switch(value) {
    case DatalessKeyType::Invalid:
      return os << "DatalessKeyType::Invalid";
    case DatalessKeyType::Null:
      return os << "DatalessKeyType::Null";
    default:
      return os << "Unknown DatalessKeyType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(DatalessKeyType value) {
  return internal::DatalessKeyType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class OperationType : int32_t {
  Add,
  Put,
  Delete,
  Clear,
  kMinValue = 0,
  kMaxValue = 3,
};

inline std::ostream& operator<<(std::ostream& os, OperationType value) {
  switch(value) {
    case OperationType::Add:
      return os << "OperationType::Add";
    case OperationType::Put:
      return os << "OperationType::Put";
    case OperationType::Delete:
      return os << "OperationType::Delete";
    case OperationType::Clear:
      return os << "OperationType::Clear";
    default:
      return os << "Unknown OperationType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(OperationType value) {
  return internal::OperationType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PutMode : int32_t {
  AddOrUpdate,
  AddOnly,
  CursorUpdate,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, PutMode value) {
  switch(value) {
    case PutMode::AddOrUpdate:
      return os << "PutMode::AddOrUpdate";
    case PutMode::AddOnly:
      return os << "PutMode::AddOnly";
    case PutMode::CursorUpdate:
      return os << "PutMode::CursorUpdate";
    default:
      return os << "Unknown PutMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PutMode value) {
  return internal::PutMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TaskType : int32_t {
  Normal,
  Preemptive,
  kMinValue = 0,
  kMaxValue = 1,
};

inline std::ostream& operator<<(std::ostream& os, TaskType value) {
  switch(value) {
    case TaskType::Normal:
      return os << "TaskType::Normal";
    case TaskType::Preemptive:
      return os << "TaskType::Preemptive";
    default:
      return os << "Unknown TaskType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TaskType value) {
  return internal::TaskType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TransactionMode : int32_t {
  ReadOnly,
  ReadWrite,
  VersionChange,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, TransactionMode value) {
  switch(value) {
    case TransactionMode::ReadOnly:
      return os << "TransactionMode::ReadOnly";
    case TransactionMode::ReadWrite:
      return os << "TransactionMode::ReadWrite";
    case TransactionMode::VersionChange:
      return os << "TransactionMode::VersionChange";
    default:
      return os << "Unknown TransactionMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TransactionMode value) {
  return internal::TransactionMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class Status : int32_t {
  OK,
  NotFound,
  Corruption,
  NotSupported,
  InvalidArgument,
  IOError,
  kMinValue = 0,
  kMaxValue = 5,
};

inline std::ostream& operator<<(std::ostream& os, Status value) {
  switch(value) {
    case Status::OK:
      return os << "Status::OK";
    case Status::NotFound:
      return os << "Status::NotFound";
    case Status::Corruption:
      return os << "Status::Corruption";
    case Status::NotSupported:
      return os << "Status::NotSupported";
    case Status::InvalidArgument:
      return os << "Status::InvalidArgument";
    case Status::IOError:
      return os << "Status::IOError";
    default:
      return os << "Unknown Status value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Status value) {
  return internal::Status_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class CallbacksInterfaceBase {};

using CallbacksPtrDataView =
    mojo::InterfacePtrDataView<CallbacksInterfaceBase>;
using CallbacksRequestDataView =
    mojo::InterfaceRequestDataView<CallbacksInterfaceBase>;
using CallbacksAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CallbacksInterfaceBase>;
using CallbacksAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CallbacksInterfaceBase>;
class DatabaseCallbacksInterfaceBase {};

using DatabaseCallbacksPtrDataView =
    mojo::InterfacePtrDataView<DatabaseCallbacksInterfaceBase>;
using DatabaseCallbacksRequestDataView =
    mojo::InterfaceRequestDataView<DatabaseCallbacksInterfaceBase>;
using DatabaseCallbacksAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DatabaseCallbacksInterfaceBase>;
using DatabaseCallbacksAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DatabaseCallbacksInterfaceBase>;
class CursorInterfaceBase {};

using CursorPtrDataView =
    mojo::InterfacePtrDataView<CursorInterfaceBase>;
using CursorRequestDataView =
    mojo::InterfaceRequestDataView<CursorInterfaceBase>;
using CursorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CursorInterfaceBase>;
using CursorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CursorInterfaceBase>;
class DatabaseInterfaceBase {};

using DatabasePtrDataView =
    mojo::InterfacePtrDataView<DatabaseInterfaceBase>;
using DatabaseRequestDataView =
    mojo::InterfaceRequestDataView<DatabaseInterfaceBase>;
using DatabaseAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DatabaseInterfaceBase>;
using DatabaseAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DatabaseInterfaceBase>;
class FactoryInterfaceBase {};

using FactoryPtrDataView =
    mojo::InterfacePtrDataView<FactoryInterfaceBase>;
using FactoryRequestDataView =
    mojo::InterfaceRequestDataView<FactoryInterfaceBase>;
using FactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FactoryInterfaceBase>;
using FactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FactoryInterfaceBase>;
class KeyDataView {
 public:
  KeyDataView() {}

  KeyDataView(
      internal::Key_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      KeyDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = !data_->data.is_null() ? &data_->data : nullptr;
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::Key_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class KeyPathDataView {
 public:
  KeyPathDataView() {}

  KeyPathDataView(
      internal::KeyPath_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      KeyPathDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = !data_->data.is_null() ? &data_->data : nullptr;
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyPathDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::KeyPath_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class KeyRangeDataView {
 public:
  KeyRangeDataView() {}

  KeyRangeDataView(
      internal::KeyRange_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLowerDataView(
      KeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLower(UserType* output) {
    auto* pointer = data_->lower.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyDataView>(
        pointer, output, context_);
  }
  inline void GetUpperDataView(
      KeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpper(UserType* output) {
    auto* pointer = data_->upper.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyDataView>(
        pointer, output, context_);
  }
  bool lower_open() const {
    return data_->lower_open;
  }
  bool upper_open() const {
    return data_->upper_open;
  }
 private:
  internal::KeyRange_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IndexMetadataDataView {
 public:
  IndexMetadataDataView() {}

  IndexMetadataDataView(
      internal::IndexMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t id() const {
    return data_->id;
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetKeyPathDataView(
      KeyPathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyPath(UserType* output) {
    auto* pointer = data_->key_path.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyPathDataView>(
        pointer, output, context_);
  }
  bool unique() const {
    return data_->unique;
  }
  bool multi_entry() const {
    return data_->multi_entry;
  }
 private:
  internal::IndexMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ObjectStoreMetadataDataView {
 public:
  ObjectStoreMetadataDataView() {}

  ObjectStoreMetadataDataView(
      internal::ObjectStoreMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t id() const {
    return data_->id;
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetKeyPathDataView(
      KeyPathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyPath(UserType* output) {
    auto* pointer = data_->key_path.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyPathDataView>(
        pointer, output, context_);
  }
  bool auto_increment() const {
    return data_->auto_increment;
  }
  int64_t max_index_id() const {
    return data_->max_index_id;
  }
  inline void GetIndexesDataView(
      mojo::ArrayDataView<IndexMetadataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIndexes(UserType* output) {
    auto* pointer = data_->indexes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::indexed_db::mojom::IndexMetadataDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ObjectStoreMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DatabaseMetadataDataView {
 public:
  DatabaseMetadataDataView() {}

  DatabaseMetadataDataView(
      internal::DatabaseMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t id() const {
    return data_->id;
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int64_t version() const {
    return data_->version;
  }
  int64_t max_object_store_id() const {
    return data_->max_object_store_id;
  }
  inline void GetObjectStoresDataView(
      mojo::ArrayDataView<ObjectStoreMetadataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadObjectStores(UserType* output) {
    auto* pointer = data_->object_stores.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::indexed_db::mojom::ObjectStoreMetadataDataView>>(
        pointer, output, context_);
  }
 private:
  internal::DatabaseMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IndexKeysDataView {
 public:
  IndexKeysDataView() {}

  IndexKeysDataView(
      internal::IndexKeys_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t index_id() const {
    return data_->index_id;
  }
  inline void GetIndexKeysDataView(
      mojo::ArrayDataView<KeyDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIndexKeys(UserType* output) {
    auto* pointer = data_->index_keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::indexed_db::mojom::KeyDataView>>(
        pointer, output, context_);
  }
 private:
  internal::IndexKeys_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileInfoDataView {
 public:
  FileInfoDataView() {}

  FileInfoDataView(
      internal::FileInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetLastModifiedDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLastModified(UserType* output) {
    auto* pointer = data_->last_modified.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobInfoDataView {
 public:
  BlobInfoDataView() {}

  BlobInfoDataView(
      internal::BlobInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeBlob() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobPtrDataView>(
            &data_->blob, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUuid(UserType* output) {
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMimeTypeDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMimeType(UserType* output) {
    auto* pointer = data_->mime_type.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int64_t size() const {
    return data_->size;
  }
  inline void GetFileDataView(
      FileInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFile(UserType* output) {
    auto* pointer = data_->file.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::FileInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::BlobInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ValueDataView {
 public:
  ValueDataView() {}

  ValueDataView(
      internal::Value_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBitsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBits(UserType* output) {
    auto* pointer = data_->bits.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetBlobOrFileInfoDataView(
      mojo::ArrayDataView<BlobInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlobOrFileInfo(UserType* output) {
    auto* pointer = data_->blob_or_file_info.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::indexed_db::mojom::BlobInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Value_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ReturnValueDataView {
 public:
  ReturnValueDataView() {}

  ReturnValueDataView(
      internal::ReturnValue_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      ValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::ValueDataView>(
        pointer, output, context_);
  }
  inline void GetPrimaryKeyDataView(
      KeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryKey(UserType* output) {
    auto* pointer = data_->primary_key.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyDataView>(
        pointer, output, context_);
  }
  inline void GetKeyPathDataView(
      KeyPathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyPath(UserType* output) {
    auto* pointer = data_->key_path.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyPathDataView>(
        pointer, output, context_);
  }
 private:
  internal::ReturnValue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ObservationDataView {
 public:
  ObservationDataView() {}

  ObservationDataView(
      internal::Observation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::indexed_db::mojom::OperationType>(
        data_value, output);
  }

  OperationType type() const {
    return static_cast<OperationType>(data_->type);
  }
  inline void GetKeyRangeDataView(
      KeyRangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyRange(UserType* output) {
    auto* pointer = data_->key_range.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyRangeDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      ValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::ValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::Observation_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ObserverTransactionDataView {
 public:
  ObserverTransactionDataView() {}

  ObserverTransactionDataView(
      internal::ObserverTransaction_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t id() const {
    return data_->id;
  }
  inline void GetScopeDataView(
      mojo::ArrayDataView<int64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScope(UserType* output) {
    auto* pointer = data_->scope.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int64_t>>(
        pointer, output, context_);
  }
 private:
  internal::ObserverTransaction_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ObserverChangesDataView {
 public:
  ObserverChangesDataView() {}

  ObserverChangesDataView(
      internal::ObserverChanges_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetObservationIndexMapDataView(
      mojo::MapDataView<int32_t, mojo::ArrayDataView<int32_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadObservationIndexMap(UserType* output) {
    auto* pointer = data_->observation_index_map.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<int32_t, mojo::ArrayDataView<int32_t>>>(
        pointer, output, context_);
  }
  inline void GetTransactionMapDataView(
      mojo::MapDataView<int32_t, ObserverTransactionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransactionMap(UserType* output) {
    auto* pointer = data_->transaction_map.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<int32_t, ::indexed_db::mojom::ObserverTransactionDataView>>(
        pointer, output, context_);
  }
  inline void GetObservationsDataView(
      mojo::ArrayDataView<ObservationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadObservations(UserType* output) {
    auto* pointer = data_->observations.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::indexed_db::mojom::ObservationDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ObserverChanges_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Callbacks_Error_ParamsDataView {
 public:
  Callbacks_Error_ParamsDataView() {}

  Callbacks_Error_ParamsDataView(
      internal::Callbacks_Error_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t code() const {
    return data_->code;
  }
  inline void GetMessageDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::Callbacks_Error_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Callbacks_SuccessStringList_ParamsDataView {
 public:
  Callbacks_SuccessStringList_ParamsDataView() {}

  Callbacks_SuccessStringList_ParamsDataView(
      internal::Callbacks_SuccessStringList_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        pointer, output, context_);
  }
 private:
  internal::Callbacks_SuccessStringList_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Callbacks_Blocked_ParamsDataView {
 public:
  Callbacks_Blocked_ParamsDataView() {}

  Callbacks_Blocked_ParamsDataView(
      internal::Callbacks_Blocked_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t existing_version() const {
    return data_->existing_version;
  }
 private:
  internal::Callbacks_Blocked_Params_Data* data_ = nullptr;
};

class Callbacks_UpgradeNeeded_ParamsDataView {
 public:
  Callbacks_UpgradeNeeded_ParamsDataView() {}

  Callbacks_UpgradeNeeded_ParamsDataView(
      internal::Callbacks_UpgradeNeeded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDatabase() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::indexed_db::mojom::DatabaseAssociatedPtrInfoDataView>(
            &data_->database, &result, context_);
    DCHECK(ret);
    return result;
  }
  int64_t old_version() const {
    return data_->old_version;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataLoss(UserType* output) const {
    auto data_value = data_->data_loss;
    return mojo::internal::Deserialize<::indexed_db::mojom::DataLoss>(
        data_value, output);
  }

  DataLoss data_loss() const {
    return static_cast<DataLoss>(data_->data_loss);
  }
  inline void GetDataLossMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataLossMessage(UserType* output) {
    auto* pointer = data_->data_loss_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDbMetadataDataView(
      DatabaseMetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDbMetadata(UserType* output) {
    auto* pointer = data_->db_metadata.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::DatabaseMetadataDataView>(
        pointer, output, context_);
  }
 private:
  internal::Callbacks_UpgradeNeeded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Callbacks_SuccessDatabase_ParamsDataView {
 public:
  Callbacks_SuccessDatabase_ParamsDataView() {}

  Callbacks_SuccessDatabase_ParamsDataView(
      internal::Callbacks_SuccessDatabase_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDatabase() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::indexed_db::mojom::DatabaseAssociatedPtrInfoDataView>(
            &data_->database, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetMetadataDataView(
      DatabaseMetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::DatabaseMetadataDataView>(
        pointer, output, context_);
  }
 private:
  internal::Callbacks_SuccessDatabase_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Callbacks_SuccessCursor_ParamsDataView {
 public:
  Callbacks_SuccessCursor_ParamsDataView() {}

  Callbacks_SuccessCursor_ParamsDataView(
      internal::Callbacks_SuccessCursor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeCursor() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::indexed_db::mojom::CursorAssociatedPtrInfoDataView>(
            &data_->cursor, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetKeyDataView(
      KeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyDataView>(
        pointer, output, context_);
  }
  inline void GetPrimaryKeyDataView(
      KeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryKey(UserType* output) {
    auto* pointer = data_->primary_key.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      ValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::ValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::Callbacks_SuccessCursor_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Callbacks_SuccessValue_ParamsDataView {
 public:
  Callbacks_SuccessValue_ParamsDataView() {}

  Callbacks_SuccessValue_ParamsDataView(
      internal::Callbacks_SuccessValue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      ReturnValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::ReturnValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::Callbacks_SuccessValue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Callbacks_SuccessCursorContinue_ParamsDataView {
 public:
  Callbacks_SuccessCursorContinue_ParamsDataView() {}

  Callbacks_SuccessCursorContinue_ParamsDataView(
      internal::Callbacks_SuccessCursorContinue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      KeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyDataView>(
        pointer, output, context_);
  }
  inline void GetPrimaryKeyDataView(
      KeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryKey(UserType* output) {
    auto* pointer = data_->primary_key.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      ValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::ValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::Callbacks_SuccessCursorContinue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Callbacks_SuccessCursorPrefetch_ParamsDataView {
 public:
  Callbacks_SuccessCursorPrefetch_ParamsDataView() {}

  Callbacks_SuccessCursorPrefetch_ParamsDataView(
      internal::Callbacks_SuccessCursorPrefetch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeysDataView(
      mojo::ArrayDataView<KeyDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeys(UserType* output) {
    auto* pointer = data_->keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::indexed_db::mojom::KeyDataView>>(
        pointer, output, context_);
  }
  inline void GetPrimaryKeysDataView(
      mojo::ArrayDataView<KeyDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryKeys(UserType* output) {
    auto* pointer = data_->primary_keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::indexed_db::mojom::KeyDataView>>(
        pointer, output, context_);
  }
  inline void GetValuesDataView(
      mojo::ArrayDataView<ValueDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValues(UserType* output) {
    auto* pointer = data_->values.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::indexed_db::mojom::ValueDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Callbacks_SuccessCursorPrefetch_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Callbacks_SuccessArray_ParamsDataView {
 public:
  Callbacks_SuccessArray_ParamsDataView() {}

  Callbacks_SuccessArray_ParamsDataView(
      internal::Callbacks_SuccessArray_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValuesDataView(
      mojo::ArrayDataView<ReturnValueDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValues(UserType* output) {
    auto* pointer = data_->values.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::indexed_db::mojom::ReturnValueDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Callbacks_SuccessArray_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Callbacks_SuccessKey_ParamsDataView {
 public:
  Callbacks_SuccessKey_ParamsDataView() {}

  Callbacks_SuccessKey_ParamsDataView(
      internal::Callbacks_SuccessKey_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      KeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyDataView>(
        pointer, output, context_);
  }
 private:
  internal::Callbacks_SuccessKey_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Callbacks_SuccessInteger_ParamsDataView {
 public:
  Callbacks_SuccessInteger_ParamsDataView() {}

  Callbacks_SuccessInteger_ParamsDataView(
      internal::Callbacks_SuccessInteger_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t value() const {
    return data_->value;
  }
 private:
  internal::Callbacks_SuccessInteger_Params_Data* data_ = nullptr;
};

class Callbacks_Success_ParamsDataView {
 public:
  Callbacks_Success_ParamsDataView() {}

  Callbacks_Success_ParamsDataView(
      internal::Callbacks_Success_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Callbacks_Success_Params_Data* data_ = nullptr;
};

class DatabaseCallbacks_ForcedClose_ParamsDataView {
 public:
  DatabaseCallbacks_ForcedClose_ParamsDataView() {}

  DatabaseCallbacks_ForcedClose_ParamsDataView(
      internal::DatabaseCallbacks_ForcedClose_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DatabaseCallbacks_ForcedClose_Params_Data* data_ = nullptr;
};

class DatabaseCallbacks_VersionChange_ParamsDataView {
 public:
  DatabaseCallbacks_VersionChange_ParamsDataView() {}

  DatabaseCallbacks_VersionChange_ParamsDataView(
      internal::DatabaseCallbacks_VersionChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t old_version() const {
    return data_->old_version;
  }
  int64_t new_version() const {
    return data_->new_version;
  }
 private:
  internal::DatabaseCallbacks_VersionChange_Params_Data* data_ = nullptr;
};

class DatabaseCallbacks_Abort_ParamsDataView {
 public:
  DatabaseCallbacks_Abort_ParamsDataView() {}

  DatabaseCallbacks_Abort_ParamsDataView(
      internal::DatabaseCallbacks_Abort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int32_t code() const {
    return data_->code;
  }
  inline void GetMessageDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::DatabaseCallbacks_Abort_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DatabaseCallbacks_Complete_ParamsDataView {
 public:
  DatabaseCallbacks_Complete_ParamsDataView() {}

  DatabaseCallbacks_Complete_ParamsDataView(
      internal::DatabaseCallbacks_Complete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
 private:
  internal::DatabaseCallbacks_Complete_Params_Data* data_ = nullptr;
};

class DatabaseCallbacks_Changes_ParamsDataView {
 public:
  DatabaseCallbacks_Changes_ParamsDataView() {}

  DatabaseCallbacks_Changes_ParamsDataView(
      internal::DatabaseCallbacks_Changes_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetChangesDataView(
      ObserverChangesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChanges(UserType* output) {
    auto* pointer = data_->changes.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::ObserverChangesDataView>(
        pointer, output, context_);
  }
 private:
  internal::DatabaseCallbacks_Changes_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Cursor_Advance_ParamsDataView {
 public:
  Cursor_Advance_ParamsDataView() {}

  Cursor_Advance_ParamsDataView(
      internal::Cursor_Advance_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t count() const {
    return data_->count;
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Cursor_Advance_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Cursor_Continue_ParamsDataView {
 public:
  Cursor_Continue_ParamsDataView() {}

  Cursor_Continue_ParamsDataView(
      internal::Cursor_Continue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      KeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyDataView>(
        pointer, output, context_);
  }
  inline void GetPrimaryKeyDataView(
      KeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryKey(UserType* output) {
    auto* pointer = data_->primary_key.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Cursor_Continue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Cursor_Prefetch_ParamsDataView {
 public:
  Cursor_Prefetch_ParamsDataView() {}

  Cursor_Prefetch_ParamsDataView(
      internal::Cursor_Prefetch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t count() const {
    return data_->count;
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Cursor_Prefetch_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Cursor_PrefetchReset_ParamsDataView {
 public:
  Cursor_PrefetchReset_ParamsDataView() {}

  Cursor_PrefetchReset_ParamsDataView(
      internal::Cursor_PrefetchReset_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t used_prefetches() const {
    return data_->used_prefetches;
  }
  int32_t unused_prefetches() const {
    return data_->unused_prefetches;
  }
 private:
  internal::Cursor_PrefetchReset_Params_Data* data_ = nullptr;
};

class Database_CreateObjectStore_ParamsDataView {
 public:
  Database_CreateObjectStore_ParamsDataView() {}

  Database_CreateObjectStore_ParamsDataView(
      internal::Database_CreateObjectStore_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetKeyPathDataView(
      KeyPathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyPath(UserType* output) {
    auto* pointer = data_->key_path.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyPathDataView>(
        pointer, output, context_);
  }
  bool auto_increment() const {
    return data_->auto_increment;
  }
 private:
  internal::Database_CreateObjectStore_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Database_DeleteObjectStore_ParamsDataView {
 public:
  Database_DeleteObjectStore_ParamsDataView() {}

  Database_DeleteObjectStore_ParamsDataView(
      internal::Database_DeleteObjectStore_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
 private:
  internal::Database_DeleteObjectStore_Params_Data* data_ = nullptr;
};

class Database_RenameObjectStore_ParamsDataView {
 public:
  Database_RenameObjectStore_ParamsDataView() {}

  Database_RenameObjectStore_ParamsDataView(
      internal::Database_RenameObjectStore_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  inline void GetNewNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewName(UserType* output) {
    auto* pointer = data_->new_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::Database_RenameObjectStore_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Database_CreateTransaction_ParamsDataView {
 public:
  Database_CreateTransaction_ParamsDataView() {}

  Database_CreateTransaction_ParamsDataView(
      internal::Database_CreateTransaction_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  inline void GetObjectStoreIdsDataView(
      mojo::ArrayDataView<int64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadObjectStoreIds(UserType* output) {
    auto* pointer = data_->object_store_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int64_t>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::indexed_db::mojom::TransactionMode>(
        data_value, output);
  }

  TransactionMode mode() const {
    return static_cast<TransactionMode>(data_->mode);
  }
 private:
  internal::Database_CreateTransaction_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Database_Close_ParamsDataView {
 public:
  Database_Close_ParamsDataView() {}

  Database_Close_ParamsDataView(
      internal::Database_Close_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Database_Close_Params_Data* data_ = nullptr;
};

class Database_VersionChangeIgnored_ParamsDataView {
 public:
  Database_VersionChangeIgnored_ParamsDataView() {}

  Database_VersionChangeIgnored_ParamsDataView(
      internal::Database_VersionChangeIgnored_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Database_VersionChangeIgnored_Params_Data* data_ = nullptr;
};

class Database_AddObserver_ParamsDataView {
 public:
  Database_AddObserver_ParamsDataView() {}

  Database_AddObserver_ParamsDataView(
      internal::Database_AddObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int32_t observer_id() const {
    return data_->observer_id;
  }
  bool include_transaction() const {
    return data_->include_transaction;
  }
  bool no_records() const {
    return data_->no_records;
  }
  bool values() const {
    return data_->values;
  }
  uint16_t operation_types() const {
    return data_->operation_types;
  }
 private:
  internal::Database_AddObserver_Params_Data* data_ = nullptr;
};

class Database_RemoveObservers_ParamsDataView {
 public:
  Database_RemoveObservers_ParamsDataView() {}

  Database_RemoveObservers_ParamsDataView(
      internal::Database_RemoveObservers_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetObserversDataView(
      mojo::ArrayDataView<int32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadObservers(UserType* output) {
    auto* pointer = data_->observers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int32_t>>(
        pointer, output, context_);
  }
 private:
  internal::Database_RemoveObservers_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Database_Get_ParamsDataView {
 public:
  Database_Get_ParamsDataView() {}

  Database_Get_ParamsDataView(
      internal::Database_Get_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  int64_t index_id() const {
    return data_->index_id;
  }
  inline void GetKeyRangeDataView(
      KeyRangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyRange(UserType* output) {
    auto* pointer = data_->key_range.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyRangeDataView>(
        pointer, output, context_);
  }
  bool key_only() const {
    return data_->key_only;
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Database_Get_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Database_GetAll_ParamsDataView {
 public:
  Database_GetAll_ParamsDataView() {}

  Database_GetAll_ParamsDataView(
      internal::Database_GetAll_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  int64_t index_id() const {
    return data_->index_id;
  }
  inline void GetKeyRangeDataView(
      KeyRangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyRange(UserType* output) {
    auto* pointer = data_->key_range.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyRangeDataView>(
        pointer, output, context_);
  }
  bool key_only() const {
    return data_->key_only;
  }
  int64_t max_count() const {
    return data_->max_count;
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Database_GetAll_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Database_Put_ParamsDataView {
 public:
  Database_Put_ParamsDataView() {}

  Database_Put_ParamsDataView(
      internal::Database_Put_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  inline void GetValueDataView(
      ValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::ValueDataView>(
        pointer, output, context_);
  }
  inline void GetKeyDataView(
      KeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::indexed_db::mojom::PutMode>(
        data_value, output);
  }

  PutMode mode() const {
    return static_cast<PutMode>(data_->mode);
  }
  inline void GetIndexKeysDataView(
      mojo::ArrayDataView<IndexKeysDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIndexKeys(UserType* output) {
    auto* pointer = data_->index_keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::indexed_db::mojom::IndexKeysDataView>>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Database_Put_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Database_SetIndexKeys_ParamsDataView {
 public:
  Database_SetIndexKeys_ParamsDataView() {}

  Database_SetIndexKeys_ParamsDataView(
      internal::Database_SetIndexKeys_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  inline void GetPrimaryKeyDataView(
      KeyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryKey(UserType* output) {
    auto* pointer = data_->primary_key.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyDataView>(
        pointer, output, context_);
  }
  inline void GetIndexKeysDataView(
      mojo::ArrayDataView<IndexKeysDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIndexKeys(UserType* output) {
    auto* pointer = data_->index_keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::indexed_db::mojom::IndexKeysDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Database_SetIndexKeys_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Database_SetIndexesReady_ParamsDataView {
 public:
  Database_SetIndexesReady_ParamsDataView() {}

  Database_SetIndexesReady_ParamsDataView(
      internal::Database_SetIndexesReady_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  inline void GetIndexIdsDataView(
      mojo::ArrayDataView<int64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIndexIds(UserType* output) {
    auto* pointer = data_->index_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int64_t>>(
        pointer, output, context_);
  }
 private:
  internal::Database_SetIndexesReady_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Database_OpenCursor_ParamsDataView {
 public:
  Database_OpenCursor_ParamsDataView() {}

  Database_OpenCursor_ParamsDataView(
      internal::Database_OpenCursor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  int64_t index_id() const {
    return data_->index_id;
  }
  inline void GetKeyRangeDataView(
      KeyRangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyRange(UserType* output) {
    auto* pointer = data_->key_range.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyRangeDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDirection(UserType* output) const {
    auto data_value = data_->direction;
    return mojo::internal::Deserialize<::indexed_db::mojom::CursorDirection>(
        data_value, output);
  }

  CursorDirection direction() const {
    return static_cast<CursorDirection>(data_->direction);
  }
  bool key_only() const {
    return data_->key_only;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTaskType(UserType* output) const {
    auto data_value = data_->task_type;
    return mojo::internal::Deserialize<::indexed_db::mojom::TaskType>(
        data_value, output);
  }

  TaskType task_type() const {
    return static_cast<TaskType>(data_->task_type);
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Database_OpenCursor_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Database_Count_ParamsDataView {
 public:
  Database_Count_ParamsDataView() {}

  Database_Count_ParamsDataView(
      internal::Database_Count_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  int64_t index_id() const {
    return data_->index_id;
  }
  inline void GetKeyRangeDataView(
      KeyRangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyRange(UserType* output) {
    auto* pointer = data_->key_range.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyRangeDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Database_Count_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Database_DeleteRange_ParamsDataView {
 public:
  Database_DeleteRange_ParamsDataView() {}

  Database_DeleteRange_ParamsDataView(
      internal::Database_DeleteRange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  inline void GetKeyRangeDataView(
      KeyRangeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyRange(UserType* output) {
    auto* pointer = data_->key_range.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyRangeDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Database_DeleteRange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Database_Clear_ParamsDataView {
 public:
  Database_Clear_ParamsDataView() {}

  Database_Clear_ParamsDataView(
      internal::Database_Clear_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Database_Clear_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Database_CreateIndex_ParamsDataView {
 public:
  Database_CreateIndex_ParamsDataView() {}

  Database_CreateIndex_ParamsDataView(
      internal::Database_CreateIndex_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  int64_t index_id() const {
    return data_->index_id;
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetKeyPathDataView(
      KeyPathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyPath(UserType* output) {
    auto* pointer = data_->key_path.Get();
    return mojo::internal::Deserialize<::indexed_db::mojom::KeyPathDataView>(
        pointer, output, context_);
  }
  bool unique() const {
    return data_->unique;
  }
  bool multi_entry() const {
    return data_->multi_entry;
  }
 private:
  internal::Database_CreateIndex_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Database_DeleteIndex_ParamsDataView {
 public:
  Database_DeleteIndex_ParamsDataView() {}

  Database_DeleteIndex_ParamsDataView(
      internal::Database_DeleteIndex_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  int64_t index_id() const {
    return data_->index_id;
  }
 private:
  internal::Database_DeleteIndex_Params_Data* data_ = nullptr;
};

class Database_RenameIndex_ParamsDataView {
 public:
  Database_RenameIndex_ParamsDataView() {}

  Database_RenameIndex_ParamsDataView(
      internal::Database_RenameIndex_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
  int64_t object_store_id() const {
    return data_->object_store_id;
  }
  int64_t index_id() const {
    return data_->index_id;
  }
  inline void GetNewNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewName(UserType* output) {
    auto* pointer = data_->new_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::Database_RenameIndex_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Database_Abort_ParamsDataView {
 public:
  Database_Abort_ParamsDataView() {}

  Database_Abort_ParamsDataView(
      internal::Database_Abort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
 private:
  internal::Database_Abort_Params_Data* data_ = nullptr;
};

class Database_Commit_ParamsDataView {
 public:
  Database_Commit_ParamsDataView() {}

  Database_Commit_ParamsDataView(
      internal::Database_Commit_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
 private:
  internal::Database_Commit_Params_Data* data_ = nullptr;
};

class Factory_GetDatabaseNames_ParamsDataView {
 public:
  Factory_GetDatabaseNames_ParamsDataView() {}

  Factory_GetDatabaseNames_ParamsDataView(
      internal::Factory_GetDatabaseNames_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
 private:
  internal::Factory_GetDatabaseNames_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Factory_Open_ParamsDataView {
 public:
  Factory_Open_ParamsDataView() {}

  Factory_Open_ParamsDataView(
      internal::Factory_Open_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeDatabaseCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::indexed_db::mojom::DatabaseCallbacksAssociatedPtrInfoDataView>(
            &data_->database_callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  int64_t version() const {
    return data_->version;
  }
  int64_t transaction_id() const {
    return data_->transaction_id;
  }
 private:
  internal::Factory_Open_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Factory_DeleteDatabase_ParamsDataView {
 public:
  Factory_DeleteDatabase_ParamsDataView() {}

  Factory_DeleteDatabase_ParamsDataView(
      internal::Factory_DeleteDatabase_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeCallbacks() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
            &data_->callbacks, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  bool force_close() const {
    return data_->force_close;
  }
 private:
  internal::Factory_DeleteDatabase_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Factory_AbortTransactionsAndCompactDatabase_ParamsDataView {
 public:
  Factory_AbortTransactionsAndCompactDatabase_ParamsDataView() {}

  Factory_AbortTransactionsAndCompactDatabase_ParamsDataView(
      internal::Factory_AbortTransactionsAndCompactDatabase_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
 private:
  internal::Factory_AbortTransactionsAndCompactDatabase_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Factory_AbortTransactionsAndCompactDatabase_ResponseParamsDataView {
 public:
  Factory_AbortTransactionsAndCompactDatabase_ResponseParamsDataView() {}

  Factory_AbortTransactionsAndCompactDatabase_ResponseParamsDataView(
      internal::Factory_AbortTransactionsAndCompactDatabase_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::indexed_db::mojom::Status>(
        data_value, output);
  }

  Status status() const {
    return static_cast<Status>(data_->status);
  }
 private:
  internal::Factory_AbortTransactionsAndCompactDatabase_ResponseParams_Data* data_ = nullptr;
};

class Factory_AbortTransactionsForDatabase_ParamsDataView {
 public:
  Factory_AbortTransactionsForDatabase_ParamsDataView() {}

  Factory_AbortTransactionsForDatabase_ParamsDataView(
      internal::Factory_AbortTransactionsForDatabase_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
 private:
  internal::Factory_AbortTransactionsForDatabase_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Factory_AbortTransactionsForDatabase_ResponseParamsDataView {
 public:
  Factory_AbortTransactionsForDatabase_ResponseParamsDataView() {}

  Factory_AbortTransactionsForDatabase_ResponseParamsDataView(
      internal::Factory_AbortTransactionsForDatabase_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::indexed_db::mojom::Status>(
        data_value, output);
  }

  Status status() const {
    return static_cast<Status>(data_->status);
  }
 private:
  internal::Factory_AbortTransactionsForDatabase_ResponseParams_Data* data_ = nullptr;
};

class KeyDataDataView {
 public:
  using Tag = internal::KeyData_Data::KeyData_Tag;

  KeyDataDataView() {}

  KeyDataDataView(
      internal::KeyData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_key_array() const { return data_->tag == Tag::KEY_ARRAY; }
  inline void GetKeyArrayDataView(
      mojo::ArrayDataView<KeyDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyArray(UserType* output) {
    DCHECK(is_key_array());
    return mojo::internal::Deserialize<mojo::ArrayDataView<::indexed_db::mojom::KeyDataView>>(
        data_->data.f_key_array.Get(), output, context_);
  }
  bool is_binary() const { return data_->tag == Tag::BINARY; }
  inline void GetBinaryDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBinary(UserType* output) {
    DCHECK(is_binary());
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        data_->data.f_binary.Get(), output, context_);
  }
  bool is_string() const { return data_->tag == Tag::STRING; }
  inline void GetStringDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadString(UserType* output) {
    DCHECK(is_string());
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        data_->data.f_string.Get(), output, context_);
  }
  bool is_date() const { return data_->tag == Tag::DATE; }
  double date() const {
    DCHECK(is_date());
    return data_->data.f_date;
  }
  bool is_number() const { return data_->tag == Tag::NUMBER; }
  double number() const {
    DCHECK(is_number());
    return data_->data.f_number;
  }
  bool is_other() const { return data_->tag == Tag::OTHER; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOther(UserType* output) const {
    DCHECK(is_other());
    return mojo::internal::Deserialize<::indexed_db::mojom::DatalessKeyType>(
        data_->data.f_other, output);
  }

  DatalessKeyType other() const {
    DCHECK(is_other());
    return static_cast<DatalessKeyType>(
        data_->data.f_other);
  }

 private:
  internal::KeyData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class KeyPathDataDataView {
 public:
  using Tag = internal::KeyPathData_Data::KeyPathData_Tag;

  KeyPathDataDataView() {}

  KeyPathDataDataView(
      internal::KeyPathData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_string() const { return data_->tag == Tag::STRING; }
  inline void GetStringDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadString(UserType* output) {
    DCHECK(is_string());
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        data_->data.f_string.Get(), output, context_);
  }
  bool is_string_array() const { return data_->tag == Tag::STRING_ARRAY; }
  inline void GetStringArrayDataView(
      mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStringArray(UserType* output) {
    DCHECK(is_string_array());
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        data_->data.f_string_array.Get(), output, context_);
  }

 private:
  internal::KeyPathData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace indexed_db

namespace std {

template <>
struct hash<::indexed_db::mojom::CursorDirection>
    : public mojo::internal::EnumHashImpl<::indexed_db::mojom::CursorDirection> {};

template <>
struct hash<::indexed_db::mojom::DataLoss>
    : public mojo::internal::EnumHashImpl<::indexed_db::mojom::DataLoss> {};

template <>
struct hash<::indexed_db::mojom::DatalessKeyType>
    : public mojo::internal::EnumHashImpl<::indexed_db::mojom::DatalessKeyType> {};

template <>
struct hash<::indexed_db::mojom::OperationType>
    : public mojo::internal::EnumHashImpl<::indexed_db::mojom::OperationType> {};

template <>
struct hash<::indexed_db::mojom::PutMode>
    : public mojo::internal::EnumHashImpl<::indexed_db::mojom::PutMode> {};

template <>
struct hash<::indexed_db::mojom::TaskType>
    : public mojo::internal::EnumHashImpl<::indexed_db::mojom::TaskType> {};

template <>
struct hash<::indexed_db::mojom::TransactionMode>
    : public mojo::internal::EnumHashImpl<::indexed_db::mojom::TransactionMode> {};

template <>
struct hash<::indexed_db::mojom::Status>
    : public mojo::internal::EnumHashImpl<::indexed_db::mojom::Status> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::indexed_db::mojom::CursorDirection, ::indexed_db::mojom::CursorDirection> {
  static ::indexed_db::mojom::CursorDirection ToMojom(::indexed_db::mojom::CursorDirection input) { return input; }
  static bool FromMojom(::indexed_db::mojom::CursorDirection input, ::indexed_db::mojom::CursorDirection* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::CursorDirection, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::indexed_db::mojom::CursorDirection, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::indexed_db::mojom::CursorDirection>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::indexed_db::mojom::DataLoss, ::indexed_db::mojom::DataLoss> {
  static ::indexed_db::mojom::DataLoss ToMojom(::indexed_db::mojom::DataLoss input) { return input; }
  static bool FromMojom(::indexed_db::mojom::DataLoss input, ::indexed_db::mojom::DataLoss* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::DataLoss, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::indexed_db::mojom::DataLoss, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::indexed_db::mojom::DataLoss>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::indexed_db::mojom::DatalessKeyType, ::indexed_db::mojom::DatalessKeyType> {
  static ::indexed_db::mojom::DatalessKeyType ToMojom(::indexed_db::mojom::DatalessKeyType input) { return input; }
  static bool FromMojom(::indexed_db::mojom::DatalessKeyType input, ::indexed_db::mojom::DatalessKeyType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::DatalessKeyType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::indexed_db::mojom::DatalessKeyType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::indexed_db::mojom::DatalessKeyType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::indexed_db::mojom::OperationType, ::indexed_db::mojom::OperationType> {
  static ::indexed_db::mojom::OperationType ToMojom(::indexed_db::mojom::OperationType input) { return input; }
  static bool FromMojom(::indexed_db::mojom::OperationType input, ::indexed_db::mojom::OperationType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::OperationType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::indexed_db::mojom::OperationType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::indexed_db::mojom::OperationType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::indexed_db::mojom::PutMode, ::indexed_db::mojom::PutMode> {
  static ::indexed_db::mojom::PutMode ToMojom(::indexed_db::mojom::PutMode input) { return input; }
  static bool FromMojom(::indexed_db::mojom::PutMode input, ::indexed_db::mojom::PutMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::PutMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::indexed_db::mojom::PutMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::indexed_db::mojom::PutMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::indexed_db::mojom::TaskType, ::indexed_db::mojom::TaskType> {
  static ::indexed_db::mojom::TaskType ToMojom(::indexed_db::mojom::TaskType input) { return input; }
  static bool FromMojom(::indexed_db::mojom::TaskType input, ::indexed_db::mojom::TaskType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::TaskType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::indexed_db::mojom::TaskType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::indexed_db::mojom::TaskType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::indexed_db::mojom::TransactionMode, ::indexed_db::mojom::TransactionMode> {
  static ::indexed_db::mojom::TransactionMode ToMojom(::indexed_db::mojom::TransactionMode input) { return input; }
  static bool FromMojom(::indexed_db::mojom::TransactionMode input, ::indexed_db::mojom::TransactionMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::TransactionMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::indexed_db::mojom::TransactionMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::indexed_db::mojom::TransactionMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::indexed_db::mojom::Status, ::indexed_db::mojom::Status> {
  static ::indexed_db::mojom::Status ToMojom(::indexed_db::mojom::Status input) { return input; }
  static bool FromMojom(::indexed_db::mojom::Status input, ::indexed_db::mojom::Status* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::Status, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::indexed_db::mojom::Status, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::indexed_db::mojom::Status>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::KeyDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::indexed_db::mojom::KeyDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::indexed_db::mojom::internal::Key_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
    typename decltype((*output)->data)::BufferWriter data_writer;
    data_writer.AllocateInline(buffer, &(*output)->data);
    mojo::internal::Serialize<::indexed_db::mojom::KeyDataDataView>(
        in_data, buffer, &data_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in Key struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::indexed_db::mojom::internal::Key_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::indexed_db::mojom::KeyDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::KeyPathDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::indexed_db::mojom::KeyPathDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::indexed_db::mojom::internal::KeyPath_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
    typename decltype((*output)->data)::BufferWriter data_writer;
    data_writer.AllocateInline(buffer, &(*output)->data);
    mojo::internal::Serialize<::indexed_db::mojom::KeyPathDataDataView>(
        in_data, buffer, &data_writer, true, context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::indexed_db::mojom::internal::KeyPath_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::indexed_db::mojom::KeyPathDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::KeyRangeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::indexed_db::mojom::KeyRangeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::indexed_db::mojom::internal::KeyRange_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::lower, input, custom_context)) in_lower = CallWithContext(Traits::lower, input, custom_context);
    typename decltype((*output)->lower)::BaseType::BufferWriter
        lower_writer;
    mojo::internal::Serialize<::indexed_db::mojom::KeyDataView>(
        in_lower, buffer, &lower_writer, context);
    (*output)->lower.Set(
        lower_writer.is_null() ? nullptr : lower_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->lower.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null lower in KeyRange struct");
    decltype(CallWithContext(Traits::upper, input, custom_context)) in_upper = CallWithContext(Traits::upper, input, custom_context);
    typename decltype((*output)->upper)::BaseType::BufferWriter
        upper_writer;
    mojo::internal::Serialize<::indexed_db::mojom::KeyDataView>(
        in_upper, buffer, &upper_writer, context);
    (*output)->upper.Set(
        upper_writer.is_null() ? nullptr : upper_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->upper.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null upper in KeyRange struct");
    (*output)->lower_open = CallWithContext(Traits::lower_open, input, custom_context);
    (*output)->upper_open = CallWithContext(Traits::upper_open, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::indexed_db::mojom::internal::KeyRange_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::indexed_db::mojom::KeyRangeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::IndexMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::indexed_db::mojom::IndexMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::indexed_db::mojom::internal::IndexMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->id = CallWithContext(Traits::id, input, custom_context);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in IndexMetadata struct");
    decltype(CallWithContext(Traits::key_path, input, custom_context)) in_key_path = CallWithContext(Traits::key_path, input, custom_context);
    typename decltype((*output)->key_path)::BaseType::BufferWriter
        key_path_writer;
    mojo::internal::Serialize<::indexed_db::mojom::KeyPathDataView>(
        in_key_path, buffer, &key_path_writer, context);
    (*output)->key_path.Set(
        key_path_writer.is_null() ? nullptr : key_path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key_path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key_path in IndexMetadata struct");
    (*output)->unique = CallWithContext(Traits::unique, input, custom_context);
    (*output)->multi_entry = CallWithContext(Traits::multi_entry, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::indexed_db::mojom::internal::IndexMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::indexed_db::mojom::IndexMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::ObjectStoreMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::indexed_db::mojom::ObjectStoreMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::indexed_db::mojom::internal::ObjectStoreMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->id = CallWithContext(Traits::id, input, custom_context);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in ObjectStoreMetadata struct");
    decltype(CallWithContext(Traits::key_path, input, custom_context)) in_key_path = CallWithContext(Traits::key_path, input, custom_context);
    typename decltype((*output)->key_path)::BaseType::BufferWriter
        key_path_writer;
    mojo::internal::Serialize<::indexed_db::mojom::KeyPathDataView>(
        in_key_path, buffer, &key_path_writer, context);
    (*output)->key_path.Set(
        key_path_writer.is_null() ? nullptr : key_path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key_path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key_path in ObjectStoreMetadata struct");
    (*output)->auto_increment = CallWithContext(Traits::auto_increment, input, custom_context);
    (*output)->max_index_id = CallWithContext(Traits::max_index_id, input, custom_context);
    decltype(CallWithContext(Traits::indexes, input, custom_context)) in_indexes = CallWithContext(Traits::indexes, input, custom_context);
    typename decltype((*output)->indexes)::BaseType::BufferWriter
        indexes_writer;
    const mojo::internal::ContainerValidateParams indexes_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::indexed_db::mojom::IndexMetadataDataView>>(
        in_indexes, buffer, &indexes_writer, &indexes_validate_params,
        context);
    (*output)->indexes.Set(
        indexes_writer.is_null() ? nullptr : indexes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->indexes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null indexes in ObjectStoreMetadata struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::indexed_db::mojom::internal::ObjectStoreMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::indexed_db::mojom::ObjectStoreMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::DatabaseMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::indexed_db::mojom::DatabaseMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::indexed_db::mojom::internal::DatabaseMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->id = CallWithContext(Traits::id, input, custom_context);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in DatabaseMetadata struct");
    (*output)->version = CallWithContext(Traits::version, input, custom_context);
    (*output)->max_object_store_id = CallWithContext(Traits::max_object_store_id, input, custom_context);
    decltype(CallWithContext(Traits::object_stores, input, custom_context)) in_object_stores = CallWithContext(Traits::object_stores, input, custom_context);
    typename decltype((*output)->object_stores)::BaseType::BufferWriter
        object_stores_writer;
    const mojo::internal::ContainerValidateParams object_stores_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::indexed_db::mojom::ObjectStoreMetadataDataView>>(
        in_object_stores, buffer, &object_stores_writer, &object_stores_validate_params,
        context);
    (*output)->object_stores.Set(
        object_stores_writer.is_null() ? nullptr : object_stores_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->object_stores.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null object_stores in DatabaseMetadata struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::indexed_db::mojom::internal::DatabaseMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::indexed_db::mojom::DatabaseMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::IndexKeysDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::indexed_db::mojom::IndexKeysDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::indexed_db::mojom::internal::IndexKeys_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->index_id = CallWithContext(Traits::index_id, input, custom_context);
    decltype(CallWithContext(Traits::index_keys, input, custom_context)) in_index_keys = CallWithContext(Traits::index_keys, input, custom_context);
    typename decltype((*output)->index_keys)::BaseType::BufferWriter
        index_keys_writer;
    const mojo::internal::ContainerValidateParams index_keys_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::indexed_db::mojom::KeyDataView>>(
        in_index_keys, buffer, &index_keys_writer, &index_keys_validate_params,
        context);
    (*output)->index_keys.Set(
        index_keys_writer.is_null() ? nullptr : index_keys_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->index_keys.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null index_keys in IndexKeys struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::indexed_db::mojom::internal::IndexKeys_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::indexed_db::mojom::IndexKeysDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::FileInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::indexed_db::mojom::FileInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::indexed_db::mojom::internal::FileInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::path, input, custom_context)) in_path = CallWithContext(Traits::path, input, custom_context);
    typename decltype((*output)->path)::BaseType::BufferWriter
        path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_path, buffer, &path_writer, context);
    (*output)->path.Set(
        path_writer.is_null() ? nullptr : path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null path in FileInfo struct");
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in FileInfo struct");
    decltype(CallWithContext(Traits::last_modified, input, custom_context)) in_last_modified = CallWithContext(Traits::last_modified, input, custom_context);
    typename decltype((*output)->last_modified)::BaseType::BufferWriter
        last_modified_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_last_modified, buffer, &last_modified_writer, context);
    (*output)->last_modified.Set(
        last_modified_writer.is_null() ? nullptr : last_modified_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->last_modified.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null last_modified in FileInfo struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::indexed_db::mojom::internal::FileInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::indexed_db::mojom::FileInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::BlobInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::indexed_db::mojom::BlobInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::indexed_db::mojom::internal::BlobInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::blob, input, custom_context)) in_blob = CallWithContext(Traits::blob, input, custom_context);
    mojo::internal::Serialize<::blink::mojom::BlobPtrDataView>(
        in_blob, &(*output)->blob, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->blob),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid blob in BlobInfo struct");
    decltype(CallWithContext(Traits::uuid, input, custom_context)) in_uuid = CallWithContext(Traits::uuid, input, custom_context);
    typename decltype((*output)->uuid)::BaseType::BufferWriter
        uuid_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_uuid, buffer, &uuid_writer, context);
    (*output)->uuid.Set(
        uuid_writer.is_null() ? nullptr : uuid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->uuid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null uuid in BlobInfo struct");
    decltype(CallWithContext(Traits::mime_type, input, custom_context)) in_mime_type = CallWithContext(Traits::mime_type, input, custom_context);
    typename decltype((*output)->mime_type)::BaseType::BufferWriter
        mime_type_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_mime_type, buffer, &mime_type_writer, context);
    (*output)->mime_type.Set(
        mime_type_writer.is_null() ? nullptr : mime_type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mime_type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mime_type in BlobInfo struct");
    (*output)->size = CallWithContext(Traits::size, input, custom_context);
    decltype(CallWithContext(Traits::file, input, custom_context)) in_file = CallWithContext(Traits::file, input, custom_context);
    typename decltype((*output)->file)::BaseType::BufferWriter
        file_writer;
    mojo::internal::Serialize<::indexed_db::mojom::FileInfoDataView>(
        in_file, buffer, &file_writer, context);
    (*output)->file.Set(
        file_writer.is_null() ? nullptr : file_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::indexed_db::mojom::internal::BlobInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::indexed_db::mojom::BlobInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::ValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::indexed_db::mojom::ValueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::indexed_db::mojom::internal::Value_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::bits, input, custom_context)) in_bits = CallWithContext(Traits::bits, input, custom_context);
    typename decltype((*output)->bits)::BaseType::BufferWriter
        bits_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_bits, buffer, &bits_writer, context);
    (*output)->bits.Set(
        bits_writer.is_null() ? nullptr : bits_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->bits.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null bits in Value struct");
    decltype(CallWithContext(Traits::blob_or_file_info, input, custom_context)) in_blob_or_file_info = CallWithContext(Traits::blob_or_file_info, input, custom_context);
    typename decltype((*output)->blob_or_file_info)::BaseType::BufferWriter
        blob_or_file_info_writer;
    const mojo::internal::ContainerValidateParams blob_or_file_info_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::indexed_db::mojom::BlobInfoDataView>>(
        in_blob_or_file_info, buffer, &blob_or_file_info_writer, &blob_or_file_info_validate_params,
        context);
    (*output)->blob_or_file_info.Set(
        blob_or_file_info_writer.is_null() ? nullptr : blob_or_file_info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->blob_or_file_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null blob_or_file_info in Value struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::indexed_db::mojom::internal::Value_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::indexed_db::mojom::ValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::ReturnValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::indexed_db::mojom::ReturnValueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::indexed_db::mojom::internal::ReturnValue_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<::indexed_db::mojom::ValueDataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in ReturnValue struct");
    decltype(CallWithContext(Traits::primary_key, input, custom_context)) in_primary_key = CallWithContext(Traits::primary_key, input, custom_context);
    typename decltype((*output)->primary_key)::BaseType::BufferWriter
        primary_key_writer;
    mojo::internal::Serialize<::indexed_db::mojom::KeyDataView>(
        in_primary_key, buffer, &primary_key_writer, context);
    (*output)->primary_key.Set(
        primary_key_writer.is_null() ? nullptr : primary_key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->primary_key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null primary_key in ReturnValue struct");
    decltype(CallWithContext(Traits::key_path, input, custom_context)) in_key_path = CallWithContext(Traits::key_path, input, custom_context);
    typename decltype((*output)->key_path)::BaseType::BufferWriter
        key_path_writer;
    mojo::internal::Serialize<::indexed_db::mojom::KeyPathDataView>(
        in_key_path, buffer, &key_path_writer, context);
    (*output)->key_path.Set(
        key_path_writer.is_null() ? nullptr : key_path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key_path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key_path in ReturnValue struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::indexed_db::mojom::internal::ReturnValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::indexed_db::mojom::ReturnValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::ObservationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::indexed_db::mojom::ObservationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::indexed_db::mojom::internal::Observation_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->object_store_id = CallWithContext(Traits::object_store_id, input, custom_context);
    mojo::internal::Serialize<::indexed_db::mojom::OperationType>(
        CallWithContext(Traits::type, input, custom_context), &(*output)->type);
    decltype(CallWithContext(Traits::key_range, input, custom_context)) in_key_range = CallWithContext(Traits::key_range, input, custom_context);
    typename decltype((*output)->key_range)::BaseType::BufferWriter
        key_range_writer;
    mojo::internal::Serialize<::indexed_db::mojom::KeyRangeDataView>(
        in_key_range, buffer, &key_range_writer, context);
    (*output)->key_range.Set(
        key_range_writer.is_null() ? nullptr : key_range_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key_range.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key_range in Observation struct");
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<::indexed_db::mojom::ValueDataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::indexed_db::mojom::internal::Observation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::indexed_db::mojom::ObservationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::ObserverTransactionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::indexed_db::mojom::ObserverTransactionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::indexed_db::mojom::internal::ObserverTransaction_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->id = CallWithContext(Traits::id, input, custom_context);
    decltype(CallWithContext(Traits::scope, input, custom_context)) in_scope = CallWithContext(Traits::scope, input, custom_context);
    typename decltype((*output)->scope)::BaseType::BufferWriter
        scope_writer;
    const mojo::internal::ContainerValidateParams scope_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<int64_t>>(
        in_scope, buffer, &scope_writer, &scope_validate_params,
        context);
    (*output)->scope.Set(
        scope_writer.is_null() ? nullptr : scope_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->scope.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scope in ObserverTransaction struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::indexed_db::mojom::internal::ObserverTransaction_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::indexed_db::mojom::ObserverTransactionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::ObserverChangesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::indexed_db::mojom::ObserverChangesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::indexed_db::mojom::internal::ObserverChanges_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::observation_index_map, input, custom_context)) in_observation_index_map = CallWithContext(Traits::observation_index_map, input, custom_context);
    typename decltype((*output)->observation_index_map)::BaseType::BufferWriter
        observation_index_map_writer;
    const mojo::internal::ContainerValidateParams observation_index_map_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<int32_t, mojo::ArrayDataView<int32_t>>>(
        in_observation_index_map, buffer, &observation_index_map_writer, &observation_index_map_validate_params,
        context);
    (*output)->observation_index_map.Set(
        observation_index_map_writer.is_null() ? nullptr : observation_index_map_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->observation_index_map.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null observation_index_map in ObserverChanges struct");
    decltype(CallWithContext(Traits::transaction_map, input, custom_context)) in_transaction_map = CallWithContext(Traits::transaction_map, input, custom_context);
    typename decltype((*output)->transaction_map)::BaseType::BufferWriter
        transaction_map_writer;
    const mojo::internal::ContainerValidateParams transaction_map_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<int32_t, ::indexed_db::mojom::ObserverTransactionDataView>>(
        in_transaction_map, buffer, &transaction_map_writer, &transaction_map_validate_params,
        context);
    (*output)->transaction_map.Set(
        transaction_map_writer.is_null() ? nullptr : transaction_map_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->transaction_map.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null transaction_map in ObserverChanges struct");
    decltype(CallWithContext(Traits::observations, input, custom_context)) in_observations = CallWithContext(Traits::observations, input, custom_context);
    typename decltype((*output)->observations)::BaseType::BufferWriter
        observations_writer;
    const mojo::internal::ContainerValidateParams observations_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::indexed_db::mojom::ObservationDataView>>(
        in_observations, buffer, &observations_writer, &observations_validate_params,
        context);
    (*output)->observations.Set(
        observations_writer.is_null() ? nullptr : observations_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->observations.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null observations in ObserverChanges struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::indexed_db::mojom::internal::ObserverChanges_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::indexed_db::mojom::ObserverChangesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::KeyDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::indexed_db::mojom::KeyDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::indexed_db::mojom::internal::KeyData_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);

    if (!inlined)
      writer->Allocate(buffer);

    ::indexed_db::mojom::internal::KeyData_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = CallWithContext(Traits::GetTag, input, custom_context);
    switch (result->tag) {
      case ::indexed_db::mojom::KeyDataDataView::Tag::KEY_ARRAY: {
        decltype(CallWithContext(Traits::key_array, input, custom_context))
            in_key_array = CallWithContext(Traits::key_array, input,
                                          custom_context);
        typename decltype(result->data.f_key_array)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams key_array_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<::indexed_db::mojom::KeyDataView>>(
            in_key_array, buffer, &value_writer, &key_array_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null key_array in KeyData union");
        result->data.f_key_array.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::indexed_db::mojom::KeyDataDataView::Tag::BINARY: {
        decltype(CallWithContext(Traits::binary, input, custom_context))
            in_binary = CallWithContext(Traits::binary, input,
                                          custom_context);
        typename decltype(result->data.f_binary)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams binary_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
            in_binary, buffer, &value_writer, &binary_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null binary in KeyData union");
        result->data.f_binary.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::indexed_db::mojom::KeyDataDataView::Tag::STRING: {
        decltype(CallWithContext(Traits::string, input, custom_context))
            in_string = CallWithContext(Traits::string, input,
                                          custom_context);
        typename decltype(result->data.f_string)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
            in_string, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null string in KeyData union");
        result->data.f_string.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::indexed_db::mojom::KeyDataDataView::Tag::DATE: {
        decltype(CallWithContext(Traits::date, input, custom_context))
            in_date = CallWithContext(Traits::date, input,
                                          custom_context);
        result->data.f_date = in_date;
        break;
      }
      case ::indexed_db::mojom::KeyDataDataView::Tag::NUMBER: {
        decltype(CallWithContext(Traits::number, input, custom_context))
            in_number = CallWithContext(Traits::number, input,
                                          custom_context);
        result->data.f_number = in_number;
        break;
      }
      case ::indexed_db::mojom::KeyDataDataView::Tag::OTHER: {
        decltype(CallWithContext(Traits::other, input, custom_context))
            in_other = CallWithContext(Traits::other, input,
                                          custom_context);
        mojo::internal::Serialize<::indexed_db::mojom::DatalessKeyType>(
            in_other, &result->data.f_other);
        break;
      }
    }

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::indexed_db::mojom::internal::KeyData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::indexed_db::mojom::KeyDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::indexed_db::mojom::KeyPathDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::indexed_db::mojom::KeyPathDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::indexed_db::mojom::internal::KeyPathData_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);

    if (!inlined)
      writer->Allocate(buffer);

    ::indexed_db::mojom::internal::KeyPathData_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = CallWithContext(Traits::GetTag, input, custom_context);
    switch (result->tag) {
      case ::indexed_db::mojom::KeyPathDataDataView::Tag::STRING: {
        decltype(CallWithContext(Traits::string, input, custom_context))
            in_string = CallWithContext(Traits::string, input,
                                          custom_context);
        typename decltype(result->data.f_string)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
            in_string, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null string in KeyPathData union");
        result->data.f_string.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::indexed_db::mojom::KeyPathDataDataView::Tag::STRING_ARRAY: {
        decltype(CallWithContext(Traits::string_array, input, custom_context))
            in_string_array = CallWithContext(Traits::string_array, input,
                                          custom_context);
        typename decltype(result->data.f_string_array)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams string_array_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
            in_string_array, buffer, &value_writer, &string_array_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null string_array in KeyPathData union");
        result->data.f_string_array.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::indexed_db::mojom::internal::KeyPathData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::indexed_db::mojom::KeyPathDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace indexed_db {
namespace mojom {

inline void KeyDataView::GetDataDataView(
    KeyDataDataView* output) {
  auto pointer = &data_->data;
  *output = KeyDataDataView(pointer, context_);
}


inline void KeyPathDataView::GetDataDataView(
    KeyPathDataDataView* output) {
  auto pointer = &data_->data;
  *output = KeyPathDataDataView(pointer, context_);
}


inline void KeyRangeDataView::GetLowerDataView(
    KeyDataView* output) {
  auto pointer = data_->lower.Get();
  *output = KeyDataView(pointer, context_);
}
inline void KeyRangeDataView::GetUpperDataView(
    KeyDataView* output) {
  auto pointer = data_->upper.Get();
  *output = KeyDataView(pointer, context_);
}


inline void IndexMetadataDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void IndexMetadataDataView::GetKeyPathDataView(
    KeyPathDataView* output) {
  auto pointer = data_->key_path.Get();
  *output = KeyPathDataView(pointer, context_);
}


inline void ObjectStoreMetadataDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ObjectStoreMetadataDataView::GetKeyPathDataView(
    KeyPathDataView* output) {
  auto pointer = data_->key_path.Get();
  *output = KeyPathDataView(pointer, context_);
}
inline void ObjectStoreMetadataDataView::GetIndexesDataView(
    mojo::ArrayDataView<IndexMetadataDataView>* output) {
  auto pointer = data_->indexes.Get();
  *output = mojo::ArrayDataView<IndexMetadataDataView>(pointer, context_);
}


inline void DatabaseMetadataDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void DatabaseMetadataDataView::GetObjectStoresDataView(
    mojo::ArrayDataView<ObjectStoreMetadataDataView>* output) {
  auto pointer = data_->object_stores.Get();
  *output = mojo::ArrayDataView<ObjectStoreMetadataDataView>(pointer, context_);
}


inline void IndexKeysDataView::GetIndexKeysDataView(
    mojo::ArrayDataView<KeyDataView>* output) {
  auto pointer = data_->index_keys.Get();
  *output = mojo::ArrayDataView<KeyDataView>(pointer, context_);
}


inline void FileInfoDataView::GetPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void FileInfoDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void FileInfoDataView::GetLastModifiedDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->last_modified.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void BlobInfoDataView::GetUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BlobInfoDataView::GetMimeTypeDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->mime_type.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void BlobInfoDataView::GetFileDataView(
    FileInfoDataView* output) {
  auto pointer = data_->file.Get();
  *output = FileInfoDataView(pointer, context_);
}


inline void ValueDataView::GetBitsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->bits.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ValueDataView::GetBlobOrFileInfoDataView(
    mojo::ArrayDataView<BlobInfoDataView>* output) {
  auto pointer = data_->blob_or_file_info.Get();
  *output = mojo::ArrayDataView<BlobInfoDataView>(pointer, context_);
}


inline void ReturnValueDataView::GetValueDataView(
    ValueDataView* output) {
  auto pointer = data_->value.Get();
  *output = ValueDataView(pointer, context_);
}
inline void ReturnValueDataView::GetPrimaryKeyDataView(
    KeyDataView* output) {
  auto pointer = data_->primary_key.Get();
  *output = KeyDataView(pointer, context_);
}
inline void ReturnValueDataView::GetKeyPathDataView(
    KeyPathDataView* output) {
  auto pointer = data_->key_path.Get();
  *output = KeyPathDataView(pointer, context_);
}


inline void ObservationDataView::GetKeyRangeDataView(
    KeyRangeDataView* output) {
  auto pointer = data_->key_range.Get();
  *output = KeyRangeDataView(pointer, context_);
}
inline void ObservationDataView::GetValueDataView(
    ValueDataView* output) {
  auto pointer = data_->value.Get();
  *output = ValueDataView(pointer, context_);
}


inline void ObserverTransactionDataView::GetScopeDataView(
    mojo::ArrayDataView<int64_t>* output) {
  auto pointer = data_->scope.Get();
  *output = mojo::ArrayDataView<int64_t>(pointer, context_);
}


inline void ObserverChangesDataView::GetObservationIndexMapDataView(
    mojo::MapDataView<int32_t, mojo::ArrayDataView<int32_t>>* output) {
  auto pointer = data_->observation_index_map.Get();
  *output = mojo::MapDataView<int32_t, mojo::ArrayDataView<int32_t>>(pointer, context_);
}
inline void ObserverChangesDataView::GetTransactionMapDataView(
    mojo::MapDataView<int32_t, ObserverTransactionDataView>* output) {
  auto pointer = data_->transaction_map.Get();
  *output = mojo::MapDataView<int32_t, ObserverTransactionDataView>(pointer, context_);
}
inline void ObserverChangesDataView::GetObservationsDataView(
    mojo::ArrayDataView<ObservationDataView>* output) {
  auto pointer = data_->observations.Get();
  *output = mojo::ArrayDataView<ObservationDataView>(pointer, context_);
}


inline void Callbacks_Error_ParamsDataView::GetMessageDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->message.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void Callbacks_SuccessStringList_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::String16DataView>(pointer, context_);
}




inline void Callbacks_UpgradeNeeded_ParamsDataView::GetDataLossMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->data_loss_message.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Callbacks_UpgradeNeeded_ParamsDataView::GetDbMetadataDataView(
    DatabaseMetadataDataView* output) {
  auto pointer = data_->db_metadata.Get();
  *output = DatabaseMetadataDataView(pointer, context_);
}


inline void Callbacks_SuccessDatabase_ParamsDataView::GetMetadataDataView(
    DatabaseMetadataDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = DatabaseMetadataDataView(pointer, context_);
}


inline void Callbacks_SuccessCursor_ParamsDataView::GetKeyDataView(
    KeyDataView* output) {
  auto pointer = data_->key.Get();
  *output = KeyDataView(pointer, context_);
}
inline void Callbacks_SuccessCursor_ParamsDataView::GetPrimaryKeyDataView(
    KeyDataView* output) {
  auto pointer = data_->primary_key.Get();
  *output = KeyDataView(pointer, context_);
}
inline void Callbacks_SuccessCursor_ParamsDataView::GetValueDataView(
    ValueDataView* output) {
  auto pointer = data_->value.Get();
  *output = ValueDataView(pointer, context_);
}


inline void Callbacks_SuccessValue_ParamsDataView::GetValueDataView(
    ReturnValueDataView* output) {
  auto pointer = data_->value.Get();
  *output = ReturnValueDataView(pointer, context_);
}


inline void Callbacks_SuccessCursorContinue_ParamsDataView::GetKeyDataView(
    KeyDataView* output) {
  auto pointer = data_->key.Get();
  *output = KeyDataView(pointer, context_);
}
inline void Callbacks_SuccessCursorContinue_ParamsDataView::GetPrimaryKeyDataView(
    KeyDataView* output) {
  auto pointer = data_->primary_key.Get();
  *output = KeyDataView(pointer, context_);
}
inline void Callbacks_SuccessCursorContinue_ParamsDataView::GetValueDataView(
    ValueDataView* output) {
  auto pointer = data_->value.Get();
  *output = ValueDataView(pointer, context_);
}


inline void Callbacks_SuccessCursorPrefetch_ParamsDataView::GetKeysDataView(
    mojo::ArrayDataView<KeyDataView>* output) {
  auto pointer = data_->keys.Get();
  *output = mojo::ArrayDataView<KeyDataView>(pointer, context_);
}
inline void Callbacks_SuccessCursorPrefetch_ParamsDataView::GetPrimaryKeysDataView(
    mojo::ArrayDataView<KeyDataView>* output) {
  auto pointer = data_->primary_keys.Get();
  *output = mojo::ArrayDataView<KeyDataView>(pointer, context_);
}
inline void Callbacks_SuccessCursorPrefetch_ParamsDataView::GetValuesDataView(
    mojo::ArrayDataView<ValueDataView>* output) {
  auto pointer = data_->values.Get();
  *output = mojo::ArrayDataView<ValueDataView>(pointer, context_);
}


inline void Callbacks_SuccessArray_ParamsDataView::GetValuesDataView(
    mojo::ArrayDataView<ReturnValueDataView>* output) {
  auto pointer = data_->values.Get();
  *output = mojo::ArrayDataView<ReturnValueDataView>(pointer, context_);
}


inline void Callbacks_SuccessKey_ParamsDataView::GetKeyDataView(
    KeyDataView* output) {
  auto pointer = data_->key.Get();
  *output = KeyDataView(pointer, context_);
}










inline void DatabaseCallbacks_Abort_ParamsDataView::GetMessageDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->message.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}




inline void DatabaseCallbacks_Changes_ParamsDataView::GetChangesDataView(
    ObserverChangesDataView* output) {
  auto pointer = data_->changes.Get();
  *output = ObserverChangesDataView(pointer, context_);
}




inline void Cursor_Continue_ParamsDataView::GetKeyDataView(
    KeyDataView* output) {
  auto pointer = data_->key.Get();
  *output = KeyDataView(pointer, context_);
}
inline void Cursor_Continue_ParamsDataView::GetPrimaryKeyDataView(
    KeyDataView* output) {
  auto pointer = data_->primary_key.Get();
  *output = KeyDataView(pointer, context_);
}






inline void Database_CreateObjectStore_ParamsDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void Database_CreateObjectStore_ParamsDataView::GetKeyPathDataView(
    KeyPathDataView* output) {
  auto pointer = data_->key_path.Get();
  *output = KeyPathDataView(pointer, context_);
}




inline void Database_RenameObjectStore_ParamsDataView::GetNewNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->new_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void Database_CreateTransaction_ParamsDataView::GetObjectStoreIdsDataView(
    mojo::ArrayDataView<int64_t>* output) {
  auto pointer = data_->object_store_ids.Get();
  *output = mojo::ArrayDataView<int64_t>(pointer, context_);
}








inline void Database_RemoveObservers_ParamsDataView::GetObserversDataView(
    mojo::ArrayDataView<int32_t>* output) {
  auto pointer = data_->observers.Get();
  *output = mojo::ArrayDataView<int32_t>(pointer, context_);
}


inline void Database_Get_ParamsDataView::GetKeyRangeDataView(
    KeyRangeDataView* output) {
  auto pointer = data_->key_range.Get();
  *output = KeyRangeDataView(pointer, context_);
}


inline void Database_GetAll_ParamsDataView::GetKeyRangeDataView(
    KeyRangeDataView* output) {
  auto pointer = data_->key_range.Get();
  *output = KeyRangeDataView(pointer, context_);
}


inline void Database_Put_ParamsDataView::GetValueDataView(
    ValueDataView* output) {
  auto pointer = data_->value.Get();
  *output = ValueDataView(pointer, context_);
}
inline void Database_Put_ParamsDataView::GetKeyDataView(
    KeyDataView* output) {
  auto pointer = data_->key.Get();
  *output = KeyDataView(pointer, context_);
}
inline void Database_Put_ParamsDataView::GetIndexKeysDataView(
    mojo::ArrayDataView<IndexKeysDataView>* output) {
  auto pointer = data_->index_keys.Get();
  *output = mojo::ArrayDataView<IndexKeysDataView>(pointer, context_);
}


inline void Database_SetIndexKeys_ParamsDataView::GetPrimaryKeyDataView(
    KeyDataView* output) {
  auto pointer = data_->primary_key.Get();
  *output = KeyDataView(pointer, context_);
}
inline void Database_SetIndexKeys_ParamsDataView::GetIndexKeysDataView(
    mojo::ArrayDataView<IndexKeysDataView>* output) {
  auto pointer = data_->index_keys.Get();
  *output = mojo::ArrayDataView<IndexKeysDataView>(pointer, context_);
}


inline void Database_SetIndexesReady_ParamsDataView::GetIndexIdsDataView(
    mojo::ArrayDataView<int64_t>* output) {
  auto pointer = data_->index_ids.Get();
  *output = mojo::ArrayDataView<int64_t>(pointer, context_);
}


inline void Database_OpenCursor_ParamsDataView::GetKeyRangeDataView(
    KeyRangeDataView* output) {
  auto pointer = data_->key_range.Get();
  *output = KeyRangeDataView(pointer, context_);
}


inline void Database_Count_ParamsDataView::GetKeyRangeDataView(
    KeyRangeDataView* output) {
  auto pointer = data_->key_range.Get();
  *output = KeyRangeDataView(pointer, context_);
}


inline void Database_DeleteRange_ParamsDataView::GetKeyRangeDataView(
    KeyRangeDataView* output) {
  auto pointer = data_->key_range.Get();
  *output = KeyRangeDataView(pointer, context_);
}




inline void Database_CreateIndex_ParamsDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void Database_CreateIndex_ParamsDataView::GetKeyPathDataView(
    KeyPathDataView* output) {
  auto pointer = data_->key_path.Get();
  *output = KeyPathDataView(pointer, context_);
}




inline void Database_RenameIndex_ParamsDataView::GetNewNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->new_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}






inline void Factory_GetDatabaseNames_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}


inline void Factory_Open_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void Factory_Open_ParamsDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void Factory_DeleteDatabase_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void Factory_DeleteDatabase_ParamsDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void Factory_AbortTransactionsAndCompactDatabase_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}




inline void Factory_AbortTransactionsForDatabase_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}




inline void KeyDataDataView::GetKeyArrayDataView(
    mojo::ArrayDataView<KeyDataView>* output) {
  DCHECK(is_key_array());
  *output = mojo::ArrayDataView<KeyDataView>(data_->data.f_key_array.Get(), context_);
}
inline void KeyDataDataView::GetBinaryDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  DCHECK(is_binary());
  *output = mojo::ArrayDataView<uint8_t>(data_->data.f_binary.Get(), context_);
}
inline void KeyDataDataView::GetStringDataView(
    ::mojo_base::mojom::String16DataView* output) {
  DCHECK(is_string());
  *output = ::mojo_base::mojom::String16DataView(data_->data.f_string.Get(), context_);
}

inline void KeyPathDataDataView::GetStringDataView(
    ::mojo_base::mojom::String16DataView* output) {
  DCHECK(is_string());
  *output = ::mojo_base::mojom::String16DataView(data_->data.f_string.Get(), context_);
}
inline void KeyPathDataDataView::GetStringArrayDataView(
    mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output) {
  DCHECK(is_string_array());
  *output = mojo::ArrayDataView<::mojo_base::mojom::String16DataView>(data_->data.f_string_array.Get(), context_);
}


}  // namespace mojom
}  // namespace indexed_db

#endif  // CONTENT_COMMON_INDEXED_DB_INDEXED_DB_MOJOM_SHARED_H_
