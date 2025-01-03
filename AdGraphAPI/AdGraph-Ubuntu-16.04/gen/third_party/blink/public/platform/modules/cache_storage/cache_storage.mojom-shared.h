// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/platform/modules/cache_storage/cache_storage.mojom-shared-internal.h"
#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom-shared.h"
#include "third_party/blink/public/platform/modules/fetch/fetch_api_response.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace blink {
namespace mojom {
class QueryParamsDataView;

class BatchOperationDataView;

class OpenResultDataView;
class MatchResultDataView;
class MatchAllResultDataView;
class CacheKeysResultDataView;


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::QueryParamsDataView> {
  using Data = ::blink::mojom::internal::QueryParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::BatchOperationDataView> {
  using Data = ::blink::mojom::internal::BatchOperation_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::OpenResultDataView> {
  using Data = ::blink::mojom::internal::OpenResult_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

template <>
struct MojomTypeTraits<::blink::mojom::MatchResultDataView> {
  using Data = ::blink::mojom::internal::MatchResult_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

template <>
struct MojomTypeTraits<::blink::mojom::MatchAllResultDataView> {
  using Data = ::blink::mojom::internal::MatchAllResult_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

template <>
struct MojomTypeTraits<::blink::mojom::CacheKeysResultDataView> {
  using Data = ::blink::mojom::internal::CacheKeysResult_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {

enum class CacheStorageError : int32_t {
  kSuccess = 0,
  kErrorExists = 1,
  kErrorStorage = 2,
  kErrorNotFound = 3,
  kErrorQuotaExceeded = 4,
  kErrorCacheNameNotFound = 5,
  kErrorQueryTooLarge = 6,
  kErrorNotImplemented = 7,
  kMinValue = 0,
  kMaxValue = 7,
};

inline std::ostream& operator<<(std::ostream& os, CacheStorageError value) {
  switch(value) {
    case CacheStorageError::kSuccess:
      return os << "CacheStorageError::kSuccess";
    case CacheStorageError::kErrorExists:
      return os << "CacheStorageError::kErrorExists";
    case CacheStorageError::kErrorStorage:
      return os << "CacheStorageError::kErrorStorage";
    case CacheStorageError::kErrorNotFound:
      return os << "CacheStorageError::kErrorNotFound";
    case CacheStorageError::kErrorQuotaExceeded:
      return os << "CacheStorageError::kErrorQuotaExceeded";
    case CacheStorageError::kErrorCacheNameNotFound:
      return os << "CacheStorageError::kErrorCacheNameNotFound";
    case CacheStorageError::kErrorQueryTooLarge:
      return os << "CacheStorageError::kErrorQueryTooLarge";
    case CacheStorageError::kErrorNotImplemented:
      return os << "CacheStorageError::kErrorNotImplemented";
    default:
      return os << "Unknown CacheStorageError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CacheStorageError value) {
  return internal::CacheStorageError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class OperationType : int32_t {
  kUndefined,
  kPut,
  kDelete,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, OperationType value) {
  switch(value) {
    case OperationType::kUndefined:
      return os << "OperationType::kUndefined";
    case OperationType::kPut:
      return os << "OperationType::kPut";
    case OperationType::kDelete:
      return os << "OperationType::kDelete";
    default:
      return os << "Unknown OperationType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(OperationType value) {
  return internal::OperationType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class CacheStorageCacheInterfaceBase {};

using CacheStorageCachePtrDataView =
    mojo::InterfacePtrDataView<CacheStorageCacheInterfaceBase>;
using CacheStorageCacheRequestDataView =
    mojo::InterfaceRequestDataView<CacheStorageCacheInterfaceBase>;
using CacheStorageCacheAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CacheStorageCacheInterfaceBase>;
using CacheStorageCacheAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CacheStorageCacheInterfaceBase>;
class CacheStorageInterfaceBase {};

using CacheStoragePtrDataView =
    mojo::InterfacePtrDataView<CacheStorageInterfaceBase>;
using CacheStorageRequestDataView =
    mojo::InterfaceRequestDataView<CacheStorageInterfaceBase>;
using CacheStorageAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CacheStorageInterfaceBase>;
using CacheStorageAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CacheStorageInterfaceBase>;
class QueryParamsDataView {
 public:
  QueryParamsDataView() {}

  QueryParamsDataView(
      internal::QueryParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool ignore_search() const {
    return data_->ignore_search;
  }
  bool ignore_method() const {
    return data_->ignore_method;
  }
  bool ignore_vary() const {
    return data_->ignore_vary;
  }
  inline void GetCacheNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCacheName(UserType* output) {
    auto* pointer = data_->cache_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::QueryParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BatchOperationDataView {
 public:
  BatchOperationDataView() {}

  BatchOperationDataView(
      internal::BatchOperation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOperationType(UserType* output) const {
    auto data_value = data_->operation_type;
    return mojo::internal::Deserialize<::blink::mojom::OperationType>(
        data_value, output);
  }

  OperationType operation_type() const {
    return static_cast<OperationType>(data_->operation_type);
  }
  inline void GetRequestDataView(
      ::blink::mojom::FetchAPIRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIRequestDataView>(
        pointer, output, context_);
  }
  inline void GetResponseDataView(
      ::blink::mojom::FetchAPIResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIResponseDataView>(
        pointer, output, context_);
  }
  inline void GetMatchParamsDataView(
      QueryParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMatchParams(UserType* output) {
    auto* pointer = data_->match_params.Get();
    return mojo::internal::Deserialize<::blink::mojom::QueryParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::BatchOperation_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorageCache_Match_ParamsDataView {
 public:
  CacheStorageCache_Match_ParamsDataView() {}

  CacheStorageCache_Match_ParamsDataView(
      internal::CacheStorageCache_Match_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataView(
      ::blink::mojom::FetchAPIRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIRequestDataView>(
        pointer, output, context_);
  }
  inline void GetQueryParamsDataView(
      QueryParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQueryParams(UserType* output) {
    auto* pointer = data_->query_params.Get();
    return mojo::internal::Deserialize<::blink::mojom::QueryParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorageCache_Match_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorageCache_Match_ResponseParamsDataView {
 public:
  CacheStorageCache_Match_ResponseParamsDataView() {}

  CacheStorageCache_Match_ResponseParamsDataView(
      internal::CacheStorageCache_Match_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      MatchResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::MatchResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorageCache_Match_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorageCache_MatchAll_ParamsDataView {
 public:
  CacheStorageCache_MatchAll_ParamsDataView() {}

  CacheStorageCache_MatchAll_ParamsDataView(
      internal::CacheStorageCache_MatchAll_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataView(
      ::blink::mojom::FetchAPIRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIRequestDataView>(
        pointer, output, context_);
  }
  inline void GetQueryParamsDataView(
      QueryParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQueryParams(UserType* output) {
    auto* pointer = data_->query_params.Get();
    return mojo::internal::Deserialize<::blink::mojom::QueryParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorageCache_MatchAll_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorageCache_MatchAll_ResponseParamsDataView {
 public:
  CacheStorageCache_MatchAll_ResponseParamsDataView() {}

  CacheStorageCache_MatchAll_ResponseParamsDataView(
      internal::CacheStorageCache_MatchAll_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      MatchAllResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::MatchAllResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorageCache_MatchAll_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorageCache_Keys_ParamsDataView {
 public:
  CacheStorageCache_Keys_ParamsDataView() {}

  CacheStorageCache_Keys_ParamsDataView(
      internal::CacheStorageCache_Keys_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataView(
      ::blink::mojom::FetchAPIRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIRequestDataView>(
        pointer, output, context_);
  }
  inline void GetQueryParamsDataView(
      QueryParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQueryParams(UserType* output) {
    auto* pointer = data_->query_params.Get();
    return mojo::internal::Deserialize<::blink::mojom::QueryParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorageCache_Keys_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorageCache_Keys_ResponseParamsDataView {
 public:
  CacheStorageCache_Keys_ResponseParamsDataView() {}

  CacheStorageCache_Keys_ResponseParamsDataView(
      internal::CacheStorageCache_Keys_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CacheKeysResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::CacheKeysResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorageCache_Keys_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorageCache_Batch_ParamsDataView {
 public:
  CacheStorageCache_Batch_ParamsDataView() {}

  CacheStorageCache_Batch_ParamsDataView(
      internal::CacheStorageCache_Batch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBatchOperationsDataView(
      mojo::ArrayDataView<BatchOperationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBatchOperations(UserType* output) {
    auto* pointer = data_->batch_operations.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::BatchOperationDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorageCache_Batch_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorageCache_Batch_ResponseParamsDataView {
 public:
  CacheStorageCache_Batch_ResponseParamsDataView() {}

  CacheStorageCache_Batch_ResponseParamsDataView(
      internal::CacheStorageCache_Batch_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::CacheStorageError>(
        data_value, output);
  }

  CacheStorageError result() const {
    return static_cast<CacheStorageError>(data_->result);
  }
 private:
  internal::CacheStorageCache_Batch_ResponseParams_Data* data_ = nullptr;
};

class CacheStorage_Has_ParamsDataView {
 public:
  CacheStorage_Has_ParamsDataView() {}

  CacheStorage_Has_ParamsDataView(
      internal::CacheStorage_Has_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCacheNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCacheName(UserType* output) {
    auto* pointer = data_->cache_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorage_Has_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorage_Has_ResponseParamsDataView {
 public:
  CacheStorage_Has_ResponseParamsDataView() {}

  CacheStorage_Has_ResponseParamsDataView(
      internal::CacheStorage_Has_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::CacheStorageError>(
        data_value, output);
  }

  CacheStorageError result() const {
    return static_cast<CacheStorageError>(data_->result);
  }
 private:
  internal::CacheStorage_Has_ResponseParams_Data* data_ = nullptr;
};

class CacheStorage_Delete_ParamsDataView {
 public:
  CacheStorage_Delete_ParamsDataView() {}

  CacheStorage_Delete_ParamsDataView(
      internal::CacheStorage_Delete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCacheNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCacheName(UserType* output) {
    auto* pointer = data_->cache_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorage_Delete_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorage_Delete_ResponseParamsDataView {
 public:
  CacheStorage_Delete_ResponseParamsDataView() {}

  CacheStorage_Delete_ResponseParamsDataView(
      internal::CacheStorage_Delete_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::CacheStorageError>(
        data_value, output);
  }

  CacheStorageError result() const {
    return static_cast<CacheStorageError>(data_->result);
  }
 private:
  internal::CacheStorage_Delete_ResponseParams_Data* data_ = nullptr;
};

class CacheStorage_Keys_ParamsDataView {
 public:
  CacheStorage_Keys_ParamsDataView() {}

  CacheStorage_Keys_ParamsDataView(
      internal::CacheStorage_Keys_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CacheStorage_Keys_Params_Data* data_ = nullptr;
};

class CacheStorage_Keys_ResponseParamsDataView {
 public:
  CacheStorage_Keys_ResponseParamsDataView() {}

  CacheStorage_Keys_ResponseParamsDataView(
      internal::CacheStorage_Keys_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeysDataView(
      mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeys(UserType* output) {
    auto* pointer = data_->keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorage_Keys_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorage_Match_ParamsDataView {
 public:
  CacheStorage_Match_ParamsDataView() {}

  CacheStorage_Match_ParamsDataView(
      internal::CacheStorage_Match_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataView(
      ::blink::mojom::FetchAPIRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIRequestDataView>(
        pointer, output, context_);
  }
  inline void GetMatchParamsDataView(
      QueryParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMatchParams(UserType* output) {
    auto* pointer = data_->match_params.Get();
    return mojo::internal::Deserialize<::blink::mojom::QueryParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorage_Match_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorage_Match_ResponseParamsDataView {
 public:
  CacheStorage_Match_ResponseParamsDataView() {}

  CacheStorage_Match_ResponseParamsDataView(
      internal::CacheStorage_Match_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      MatchResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::MatchResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorage_Match_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorage_Open_ParamsDataView {
 public:
  CacheStorage_Open_ParamsDataView() {}

  CacheStorage_Open_ParamsDataView(
      internal::CacheStorage_Open_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCacheNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCacheName(UserType* output) {
    auto* pointer = data_->cache_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorage_Open_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheStorage_Open_ResponseParamsDataView {
 public:
  CacheStorage_Open_ResponseParamsDataView() {}

  CacheStorage_Open_ResponseParamsDataView(
      internal::CacheStorage_Open_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      OpenResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::OpenResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::CacheStorage_Open_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class OpenResultDataView {
 public:
  using Tag = internal::OpenResult_Data::OpenResult_Tag;

  OpenResultDataView() {}

  OpenResultDataView(
      internal::OpenResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_status() const { return data_->tag == Tag::STATUS; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    DCHECK(is_status());
    return mojo::internal::Deserialize<::blink::mojom::CacheStorageError>(
        data_->data.f_status, output);
  }

  CacheStorageError status() const {
    DCHECK(is_status());
    return static_cast<CacheStorageError>(
        data_->data.f_status);
  }
  bool is_cache() const { return data_->tag == Tag::CACHE; }
  template <typename UserType>
  UserType TakeCache() {
    DCHECK(is_cache());
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::CacheStorageCacheAssociatedPtrInfoDataView>(
            &data_->data.f_cache, &result, context_);
    DCHECK(ret);
    return result;
  }

 private:
  internal::OpenResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MatchResultDataView {
 public:
  using Tag = internal::MatchResult_Data::MatchResult_Tag;

  MatchResultDataView() {}

  MatchResultDataView(
      internal::MatchResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_status() const { return data_->tag == Tag::STATUS; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    DCHECK(is_status());
    return mojo::internal::Deserialize<::blink::mojom::CacheStorageError>(
        data_->data.f_status, output);
  }

  CacheStorageError status() const {
    DCHECK(is_status());
    return static_cast<CacheStorageError>(
        data_->data.f_status);
  }
  bool is_response() const { return data_->tag == Tag::RESPONSE; }
  inline void GetResponseDataView(
      ::blink::mojom::FetchAPIResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    DCHECK(is_response());
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIResponseDataView>(
        data_->data.f_response.Get(), output, context_);
  }

 private:
  internal::MatchResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MatchAllResultDataView {
 public:
  using Tag = internal::MatchAllResult_Data::MatchAllResult_Tag;

  MatchAllResultDataView() {}

  MatchAllResultDataView(
      internal::MatchAllResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_status() const { return data_->tag == Tag::STATUS; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    DCHECK(is_status());
    return mojo::internal::Deserialize<::blink::mojom::CacheStorageError>(
        data_->data.f_status, output);
  }

  CacheStorageError status() const {
    DCHECK(is_status());
    return static_cast<CacheStorageError>(
        data_->data.f_status);
  }
  bool is_responses() const { return data_->tag == Tag::RESPONSES; }
  inline void GetResponsesDataView(
      mojo::ArrayDataView<::blink::mojom::FetchAPIResponseDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponses(UserType* output) {
    DCHECK(is_responses());
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::FetchAPIResponseDataView>>(
        data_->data.f_responses.Get(), output, context_);
  }

 private:
  internal::MatchAllResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CacheKeysResultDataView {
 public:
  using Tag = internal::CacheKeysResult_Data::CacheKeysResult_Tag;

  CacheKeysResultDataView() {}

  CacheKeysResultDataView(
      internal::CacheKeysResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_status() const { return data_->tag == Tag::STATUS; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    DCHECK(is_status());
    return mojo::internal::Deserialize<::blink::mojom::CacheStorageError>(
        data_->data.f_status, output);
  }

  CacheStorageError status() const {
    DCHECK(is_status());
    return static_cast<CacheStorageError>(
        data_->data.f_status);
  }
  bool is_keys() const { return data_->tag == Tag::KEYS; }
  inline void GetKeysDataView(
      mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeys(UserType* output) {
    DCHECK(is_keys());
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>>(
        data_->data.f_keys.Get(), output, context_);
  }

 private:
  internal::CacheKeysResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::CacheStorageError>
    : public mojo::internal::EnumHashImpl<::blink::mojom::CacheStorageError> {};

template <>
struct hash<::blink::mojom::OperationType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::OperationType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::CacheStorageError, ::blink::mojom::CacheStorageError> {
  static ::blink::mojom::CacheStorageError ToMojom(::blink::mojom::CacheStorageError input) { return input; }
  static bool FromMojom(::blink::mojom::CacheStorageError input, ::blink::mojom::CacheStorageError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CacheStorageError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::CacheStorageError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::CacheStorageError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::OperationType, ::blink::mojom::OperationType> {
  static ::blink::mojom::OperationType ToMojom(::blink::mojom::OperationType input) { return input; }
  static bool FromMojom(::blink::mojom::OperationType input, ::blink::mojom::OperationType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::OperationType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::OperationType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::OperationType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::QueryParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::QueryParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::QueryParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->ignore_search = CallWithContext(Traits::ignore_search, input, custom_context);
    (*output)->ignore_method = CallWithContext(Traits::ignore_method, input, custom_context);
    (*output)->ignore_vary = CallWithContext(Traits::ignore_vary, input, custom_context);
    decltype(CallWithContext(Traits::cache_name, input, custom_context)) in_cache_name = CallWithContext(Traits::cache_name, input, custom_context);
    typename decltype((*output)->cache_name)::BaseType::BufferWriter
        cache_name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_cache_name, buffer, &cache_name_writer, context);
    (*output)->cache_name.Set(
        cache_name_writer.is_null() ? nullptr : cache_name_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::QueryParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::QueryParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::BatchOperationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::BatchOperationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::BatchOperation_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::OperationType>(
        CallWithContext(Traits::operation_type, input, custom_context), &(*output)->operation_type);
    decltype(CallWithContext(Traits::request, input, custom_context)) in_request = CallWithContext(Traits::request, input, custom_context);
    typename decltype((*output)->request)::BaseType::BufferWriter
        request_writer;
    mojo::internal::Serialize<::blink::mojom::FetchAPIRequestDataView>(
        in_request, buffer, &request_writer, context);
    (*output)->request.Set(
        request_writer.is_null() ? nullptr : request_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->request.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null request in BatchOperation struct");
    decltype(CallWithContext(Traits::response, input, custom_context)) in_response = CallWithContext(Traits::response, input, custom_context);
    typename decltype((*output)->response)::BaseType::BufferWriter
        response_writer;
    mojo::internal::Serialize<::blink::mojom::FetchAPIResponseDataView>(
        in_response, buffer, &response_writer, context);
    (*output)->response.Set(
        response_writer.is_null() ? nullptr : response_writer.data());
    decltype(CallWithContext(Traits::match_params, input, custom_context)) in_match_params = CallWithContext(Traits::match_params, input, custom_context);
    typename decltype((*output)->match_params)::BaseType::BufferWriter
        match_params_writer;
    mojo::internal::Serialize<::blink::mojom::QueryParamsDataView>(
        in_match_params, buffer, &match_params_writer, context);
    (*output)->match_params.Set(
        match_params_writer.is_null() ? nullptr : match_params_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::BatchOperation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::BatchOperationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::OpenResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::OpenResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::OpenResult_Data::BufferWriter* writer,
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

    ::blink::mojom::internal::OpenResult_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = CallWithContext(Traits::GetTag, input, custom_context);
    switch (result->tag) {
      case ::blink::mojom::OpenResultDataView::Tag::STATUS: {
        decltype(CallWithContext(Traits::status, input, custom_context))
            in_status = CallWithContext(Traits::status, input,
                                          custom_context);
        mojo::internal::Serialize<::blink::mojom::CacheStorageError>(
            in_status, &result->data.f_status);
        break;
      }
      case ::blink::mojom::OpenResultDataView::Tag::CACHE: {
        decltype(CallWithContext(Traits::cache, input, custom_context))
            in_cache = CallWithContext(Traits::cache, input,
                                          custom_context);
        mojo::internal::Serialize<::blink::mojom::CacheStorageCacheAssociatedPtrInfoDataView>(
            in_cache, &result->data.f_cache, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !mojo::internal::IsHandleOrInterfaceValid(result->data.f_cache),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
            "invalid cache in OpenResult union");
        break;
      }
    }

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::OpenResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::OpenResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::MatchResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::MatchResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::MatchResult_Data::BufferWriter* writer,
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

    ::blink::mojom::internal::MatchResult_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = CallWithContext(Traits::GetTag, input, custom_context);
    switch (result->tag) {
      case ::blink::mojom::MatchResultDataView::Tag::STATUS: {
        decltype(CallWithContext(Traits::status, input, custom_context))
            in_status = CallWithContext(Traits::status, input,
                                          custom_context);
        mojo::internal::Serialize<::blink::mojom::CacheStorageError>(
            in_status, &result->data.f_status);
        break;
      }
      case ::blink::mojom::MatchResultDataView::Tag::RESPONSE: {
        decltype(CallWithContext(Traits::response, input, custom_context))
            in_response = CallWithContext(Traits::response, input,
                                          custom_context);
        typename decltype(result->data.f_response)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::blink::mojom::FetchAPIResponseDataView>(
            in_response, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null response in MatchResult union");
        result->data.f_response.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::MatchResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::MatchResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::MatchAllResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::MatchAllResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::MatchAllResult_Data::BufferWriter* writer,
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

    ::blink::mojom::internal::MatchAllResult_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = CallWithContext(Traits::GetTag, input, custom_context);
    switch (result->tag) {
      case ::blink::mojom::MatchAllResultDataView::Tag::STATUS: {
        decltype(CallWithContext(Traits::status, input, custom_context))
            in_status = CallWithContext(Traits::status, input,
                                          custom_context);
        mojo::internal::Serialize<::blink::mojom::CacheStorageError>(
            in_status, &result->data.f_status);
        break;
      }
      case ::blink::mojom::MatchAllResultDataView::Tag::RESPONSES: {
        decltype(CallWithContext(Traits::responses, input, custom_context))
            in_responses = CallWithContext(Traits::responses, input,
                                          custom_context);
        typename decltype(result->data.f_responses)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams responses_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::FetchAPIResponseDataView>>(
            in_responses, buffer, &value_writer, &responses_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null responses in MatchAllResult union");
        result->data.f_responses.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::MatchAllResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::MatchAllResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CacheKeysResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::CacheKeysResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::CacheKeysResult_Data::BufferWriter* writer,
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

    ::blink::mojom::internal::CacheKeysResult_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = CallWithContext(Traits::GetTag, input, custom_context);
    switch (result->tag) {
      case ::blink::mojom::CacheKeysResultDataView::Tag::STATUS: {
        decltype(CallWithContext(Traits::status, input, custom_context))
            in_status = CallWithContext(Traits::status, input,
                                          custom_context);
        mojo::internal::Serialize<::blink::mojom::CacheStorageError>(
            in_status, &result->data.f_status);
        break;
      }
      case ::blink::mojom::CacheKeysResultDataView::Tag::KEYS: {
        decltype(CallWithContext(Traits::keys, input, custom_context))
            in_keys = CallWithContext(Traits::keys, input,
                                          custom_context);
        typename decltype(result->data.f_keys)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams keys_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>>(
            in_keys, buffer, &value_writer, &keys_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null keys in CacheKeysResult union");
        result->data.f_keys.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::CacheKeysResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::CacheKeysResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void QueryParamsDataView::GetCacheNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->cache_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void BatchOperationDataView::GetRequestDataView(
    ::blink::mojom::FetchAPIRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::blink::mojom::FetchAPIRequestDataView(pointer, context_);
}
inline void BatchOperationDataView::GetResponseDataView(
    ::blink::mojom::FetchAPIResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = ::blink::mojom::FetchAPIResponseDataView(pointer, context_);
}
inline void BatchOperationDataView::GetMatchParamsDataView(
    QueryParamsDataView* output) {
  auto pointer = data_->match_params.Get();
  *output = QueryParamsDataView(pointer, context_);
}


inline void CacheStorageCache_Match_ParamsDataView::GetRequestDataView(
    ::blink::mojom::FetchAPIRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::blink::mojom::FetchAPIRequestDataView(pointer, context_);
}
inline void CacheStorageCache_Match_ParamsDataView::GetQueryParamsDataView(
    QueryParamsDataView* output) {
  auto pointer = data_->query_params.Get();
  *output = QueryParamsDataView(pointer, context_);
}


inline void CacheStorageCache_Match_ResponseParamsDataView::GetResultDataView(
    MatchResultDataView* output) {
  auto pointer = &data_->result;
  *output = MatchResultDataView(pointer, context_);
}


inline void CacheStorageCache_MatchAll_ParamsDataView::GetRequestDataView(
    ::blink::mojom::FetchAPIRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::blink::mojom::FetchAPIRequestDataView(pointer, context_);
}
inline void CacheStorageCache_MatchAll_ParamsDataView::GetQueryParamsDataView(
    QueryParamsDataView* output) {
  auto pointer = data_->query_params.Get();
  *output = QueryParamsDataView(pointer, context_);
}


inline void CacheStorageCache_MatchAll_ResponseParamsDataView::GetResultDataView(
    MatchAllResultDataView* output) {
  auto pointer = &data_->result;
  *output = MatchAllResultDataView(pointer, context_);
}


inline void CacheStorageCache_Keys_ParamsDataView::GetRequestDataView(
    ::blink::mojom::FetchAPIRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::blink::mojom::FetchAPIRequestDataView(pointer, context_);
}
inline void CacheStorageCache_Keys_ParamsDataView::GetQueryParamsDataView(
    QueryParamsDataView* output) {
  auto pointer = data_->query_params.Get();
  *output = QueryParamsDataView(pointer, context_);
}


inline void CacheStorageCache_Keys_ResponseParamsDataView::GetResultDataView(
    CacheKeysResultDataView* output) {
  auto pointer = &data_->result;
  *output = CacheKeysResultDataView(pointer, context_);
}


inline void CacheStorageCache_Batch_ParamsDataView::GetBatchOperationsDataView(
    mojo::ArrayDataView<BatchOperationDataView>* output) {
  auto pointer = data_->batch_operations.Get();
  *output = mojo::ArrayDataView<BatchOperationDataView>(pointer, context_);
}




inline void CacheStorage_Has_ParamsDataView::GetCacheNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->cache_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}




inline void CacheStorage_Delete_ParamsDataView::GetCacheNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->cache_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}






inline void CacheStorage_Keys_ResponseParamsDataView::GetKeysDataView(
    mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output) {
  auto pointer = data_->keys.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::String16DataView>(pointer, context_);
}


inline void CacheStorage_Match_ParamsDataView::GetRequestDataView(
    ::blink::mojom::FetchAPIRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::blink::mojom::FetchAPIRequestDataView(pointer, context_);
}
inline void CacheStorage_Match_ParamsDataView::GetMatchParamsDataView(
    QueryParamsDataView* output) {
  auto pointer = data_->match_params.Get();
  *output = QueryParamsDataView(pointer, context_);
}


inline void CacheStorage_Match_ResponseParamsDataView::GetResultDataView(
    MatchResultDataView* output) {
  auto pointer = &data_->result;
  *output = MatchResultDataView(pointer, context_);
}


inline void CacheStorage_Open_ParamsDataView::GetCacheNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->cache_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void CacheStorage_Open_ResponseParamsDataView::GetResultDataView(
    OpenResultDataView* output) {
  auto pointer = &data_->result;
  *output = OpenResultDataView(pointer, context_);
}



inline void MatchResultDataView::GetResponseDataView(
    ::blink::mojom::FetchAPIResponseDataView* output) {
  DCHECK(is_response());
  *output = ::blink::mojom::FetchAPIResponseDataView(data_->data.f_response.Get(), context_);
}

inline void MatchAllResultDataView::GetResponsesDataView(
    mojo::ArrayDataView<::blink::mojom::FetchAPIResponseDataView>* output) {
  DCHECK(is_responses());
  *output = mojo::ArrayDataView<::blink::mojom::FetchAPIResponseDataView>(data_->data.f_responses.Get(), context_);
}

inline void CacheKeysResultDataView::GetKeysDataView(
    mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>* output) {
  DCHECK(is_keys());
  *output = mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>(data_->data.f_keys.Get(), context_);
}


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_CACHE_STORAGE_CACHE_STORAGE_MOJOM_SHARED_H_
