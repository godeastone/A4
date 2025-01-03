// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_APPCACHE_MOJOM_SHARED_H_
#define CONTENT_COMMON_APPCACHE_MOJOM_SHARED_H_

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
#include "content/common/appcache.mojom-shared-internal.h"
#include "content/public/common/appcache_info.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
class AppCacheResourceInfoDataView;

class AppCacheErrorDetailsDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::AppCacheResourceInfoDataView> {
  using Data = ::content::mojom::internal::AppCacheResourceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::AppCacheErrorDetailsDataView> {
  using Data = ::content::mojom::internal::AppCacheErrorDetails_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {

enum class AppCacheEventID : int32_t {
  APPCACHE_CHECKING_EVENT,
  APPCACHE_ERROR_EVENT,
  APPCACHE_NO_UPDATE_EVENT,
  APPCACHE_DOWNLOADING_EVENT,
  APPCACHE_PROGRESS_EVENT,
  APPCACHE_UPDATE_READY_EVENT,
  APPCACHE_CACHED_EVENT,
  APPCACHE_OBSOLETE_EVENT,
  kMinValue = 0,
  kMaxValue = 7,
};

inline std::ostream& operator<<(std::ostream& os, AppCacheEventID value) {
  switch(value) {
    case AppCacheEventID::APPCACHE_CHECKING_EVENT:
      return os << "AppCacheEventID::APPCACHE_CHECKING_EVENT";
    case AppCacheEventID::APPCACHE_ERROR_EVENT:
      return os << "AppCacheEventID::APPCACHE_ERROR_EVENT";
    case AppCacheEventID::APPCACHE_NO_UPDATE_EVENT:
      return os << "AppCacheEventID::APPCACHE_NO_UPDATE_EVENT";
    case AppCacheEventID::APPCACHE_DOWNLOADING_EVENT:
      return os << "AppCacheEventID::APPCACHE_DOWNLOADING_EVENT";
    case AppCacheEventID::APPCACHE_PROGRESS_EVENT:
      return os << "AppCacheEventID::APPCACHE_PROGRESS_EVENT";
    case AppCacheEventID::APPCACHE_UPDATE_READY_EVENT:
      return os << "AppCacheEventID::APPCACHE_UPDATE_READY_EVENT";
    case AppCacheEventID::APPCACHE_CACHED_EVENT:
      return os << "AppCacheEventID::APPCACHE_CACHED_EVENT";
    case AppCacheEventID::APPCACHE_OBSOLETE_EVENT:
      return os << "AppCacheEventID::APPCACHE_OBSOLETE_EVENT";
    default:
      return os << "Unknown AppCacheEventID value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(AppCacheEventID value) {
  return internal::AppCacheEventID_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class AppCacheErrorReason : int32_t {
  APPCACHE_MANIFEST_ERROR,
  APPCACHE_SIGNATURE_ERROR,
  APPCACHE_RESOURCE_ERROR,
  APPCACHE_CHANGED_ERROR,
  APPCACHE_ABORT_ERROR,
  APPCACHE_QUOTA_ERROR,
  APPCACHE_POLICY_ERROR,
  APPCACHE_UNKNOWN_ERROR,
  kMinValue = 0,
  kMaxValue = 7,
};

inline std::ostream& operator<<(std::ostream& os, AppCacheErrorReason value) {
  switch(value) {
    case AppCacheErrorReason::APPCACHE_MANIFEST_ERROR:
      return os << "AppCacheErrorReason::APPCACHE_MANIFEST_ERROR";
    case AppCacheErrorReason::APPCACHE_SIGNATURE_ERROR:
      return os << "AppCacheErrorReason::APPCACHE_SIGNATURE_ERROR";
    case AppCacheErrorReason::APPCACHE_RESOURCE_ERROR:
      return os << "AppCacheErrorReason::APPCACHE_RESOURCE_ERROR";
    case AppCacheErrorReason::APPCACHE_CHANGED_ERROR:
      return os << "AppCacheErrorReason::APPCACHE_CHANGED_ERROR";
    case AppCacheErrorReason::APPCACHE_ABORT_ERROR:
      return os << "AppCacheErrorReason::APPCACHE_ABORT_ERROR";
    case AppCacheErrorReason::APPCACHE_QUOTA_ERROR:
      return os << "AppCacheErrorReason::APPCACHE_QUOTA_ERROR";
    case AppCacheErrorReason::APPCACHE_POLICY_ERROR:
      return os << "AppCacheErrorReason::APPCACHE_POLICY_ERROR";
    case AppCacheErrorReason::APPCACHE_UNKNOWN_ERROR:
      return os << "AppCacheErrorReason::APPCACHE_UNKNOWN_ERROR";
    default:
      return os << "Unknown AppCacheErrorReason value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(AppCacheErrorReason value) {
  return internal::AppCacheErrorReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class AppCacheBackendInterfaceBase {};

using AppCacheBackendPtrDataView =
    mojo::InterfacePtrDataView<AppCacheBackendInterfaceBase>;
using AppCacheBackendRequestDataView =
    mojo::InterfaceRequestDataView<AppCacheBackendInterfaceBase>;
using AppCacheBackendAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AppCacheBackendInterfaceBase>;
using AppCacheBackendAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AppCacheBackendInterfaceBase>;
class AppCacheFrontendInterfaceBase {};

using AppCacheFrontendPtrDataView =
    mojo::InterfacePtrDataView<AppCacheFrontendInterfaceBase>;
using AppCacheFrontendRequestDataView =
    mojo::InterfaceRequestDataView<AppCacheFrontendInterfaceBase>;
using AppCacheFrontendAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AppCacheFrontendInterfaceBase>;
using AppCacheFrontendAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AppCacheFrontendInterfaceBase>;
class AppCacheResourceInfoDataView {
 public:
  AppCacheResourceInfoDataView() {}

  AppCacheResourceInfoDataView(
      internal::AppCacheResourceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int64_t size() const {
    return data_->size;
  }
  bool is_master() const {
    return data_->is_master;
  }
  bool is_manifest() const {
    return data_->is_manifest;
  }
  bool is_intercept() const {
    return data_->is_intercept;
  }
  bool is_fallback() const {
    return data_->is_fallback;
  }
  bool is_foreign() const {
    return data_->is_foreign;
  }
  bool is_explicit() const {
    return data_->is_explicit;
  }
  int64_t response_id() const {
    return data_->response_id;
  }
 private:
  internal::AppCacheResourceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheErrorDetailsDataView {
 public:
  AppCacheErrorDetailsDataView() {}

  AppCacheErrorDetailsDataView(
      internal::AppCacheErrorDetails_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::content::mojom::AppCacheErrorReason>(
        data_value, output);
  }

  AppCacheErrorReason reason() const {
    return static_cast<AppCacheErrorReason>(data_->reason);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int32_t status() const {
    return data_->status;
  }
  bool is_cross_origin() const {
    return data_->is_cross_origin;
  }
 private:
  internal::AppCacheErrorDetails_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheBackend_RegisterHost_ParamsDataView {
 public:
  AppCacheBackend_RegisterHost_ParamsDataView() {}

  AppCacheBackend_RegisterHost_ParamsDataView(
      internal::AppCacheBackend_RegisterHost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t host_id() const {
    return data_->host_id;
  }
 private:
  internal::AppCacheBackend_RegisterHost_Params_Data* data_ = nullptr;
};

class AppCacheBackend_UnregisterHost_ParamsDataView {
 public:
  AppCacheBackend_UnregisterHost_ParamsDataView() {}

  AppCacheBackend_UnregisterHost_ParamsDataView(
      internal::AppCacheBackend_UnregisterHost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t host_id() const {
    return data_->host_id;
  }
 private:
  internal::AppCacheBackend_UnregisterHost_Params_Data* data_ = nullptr;
};

class AppCacheBackend_SetSpawningHostId_ParamsDataView {
 public:
  AppCacheBackend_SetSpawningHostId_ParamsDataView() {}

  AppCacheBackend_SetSpawningHostId_ParamsDataView(
      internal::AppCacheBackend_SetSpawningHostId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t host_id() const {
    return data_->host_id;
  }
  int32_t spawning_host_id() const {
    return data_->spawning_host_id;
  }
 private:
  internal::AppCacheBackend_SetSpawningHostId_Params_Data* data_ = nullptr;
};

class AppCacheBackend_SelectCache_ParamsDataView {
 public:
  AppCacheBackend_SelectCache_ParamsDataView() {}

  AppCacheBackend_SelectCache_ParamsDataView(
      internal::AppCacheBackend_SelectCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t host_id() const {
    return data_->host_id;
  }
  inline void GetDocumentUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDocumentUrl(UserType* output) {
    auto* pointer = data_->document_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int64_t appcache_document_was_loaded_from() const {
    return data_->appcache_document_was_loaded_from;
  }
  inline void GetOptManifestUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptManifestUrl(UserType* output) {
    auto* pointer = data_->opt_manifest_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::AppCacheBackend_SelectCache_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheBackend_SelectCacheForSharedWorker_ParamsDataView {
 public:
  AppCacheBackend_SelectCacheForSharedWorker_ParamsDataView() {}

  AppCacheBackend_SelectCacheForSharedWorker_ParamsDataView(
      internal::AppCacheBackend_SelectCacheForSharedWorker_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t host_id() const {
    return data_->host_id;
  }
  int64_t appcache_id() const {
    return data_->appcache_id;
  }
 private:
  internal::AppCacheBackend_SelectCacheForSharedWorker_Params_Data* data_ = nullptr;
};

class AppCacheBackend_MarkAsForeignEntry_ParamsDataView {
 public:
  AppCacheBackend_MarkAsForeignEntry_ParamsDataView() {}

  AppCacheBackend_MarkAsForeignEntry_ParamsDataView(
      internal::AppCacheBackend_MarkAsForeignEntry_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t host_id() const {
    return data_->host_id;
  }
  inline void GetDocumentUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDocumentUrl(UserType* output) {
    auto* pointer = data_->document_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int64_t appcache_document_was_loaded_from() const {
    return data_->appcache_document_was_loaded_from;
  }
 private:
  internal::AppCacheBackend_MarkAsForeignEntry_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheBackend_GetStatus_ParamsDataView {
 public:
  AppCacheBackend_GetStatus_ParamsDataView() {}

  AppCacheBackend_GetStatus_ParamsDataView(
      internal::AppCacheBackend_GetStatus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t host_id() const {
    return data_->host_id;
  }
 private:
  internal::AppCacheBackend_GetStatus_Params_Data* data_ = nullptr;
};

class AppCacheBackend_GetStatus_ResponseParamsDataView {
 public:
  AppCacheBackend_GetStatus_ResponseParamsDataView() {}

  AppCacheBackend_GetStatus_ResponseParamsDataView(
      internal::AppCacheBackend_GetStatus_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::content::mojom::AppCacheStatus>(
        data_value, output);
  }

  ::content::mojom::AppCacheStatus status() const {
    return static_cast<::content::mojom::AppCacheStatus>(data_->status);
  }
 private:
  internal::AppCacheBackend_GetStatus_ResponseParams_Data* data_ = nullptr;
};

class AppCacheBackend_StartUpdate_ParamsDataView {
 public:
  AppCacheBackend_StartUpdate_ParamsDataView() {}

  AppCacheBackend_StartUpdate_ParamsDataView(
      internal::AppCacheBackend_StartUpdate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t host_id() const {
    return data_->host_id;
  }
 private:
  internal::AppCacheBackend_StartUpdate_Params_Data* data_ = nullptr;
};

class AppCacheBackend_StartUpdate_ResponseParamsDataView {
 public:
  AppCacheBackend_StartUpdate_ResponseParamsDataView() {}

  AppCacheBackend_StartUpdate_ResponseParamsDataView(
      internal::AppCacheBackend_StartUpdate_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::AppCacheBackend_StartUpdate_ResponseParams_Data* data_ = nullptr;
};

class AppCacheBackend_SwapCache_ParamsDataView {
 public:
  AppCacheBackend_SwapCache_ParamsDataView() {}

  AppCacheBackend_SwapCache_ParamsDataView(
      internal::AppCacheBackend_SwapCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t host_id() const {
    return data_->host_id;
  }
 private:
  internal::AppCacheBackend_SwapCache_Params_Data* data_ = nullptr;
};

class AppCacheBackend_SwapCache_ResponseParamsDataView {
 public:
  AppCacheBackend_SwapCache_ResponseParamsDataView() {}

  AppCacheBackend_SwapCache_ResponseParamsDataView(
      internal::AppCacheBackend_SwapCache_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::AppCacheBackend_SwapCache_ResponseParams_Data* data_ = nullptr;
};

class AppCacheBackend_GetResourceList_ParamsDataView {
 public:
  AppCacheBackend_GetResourceList_ParamsDataView() {}

  AppCacheBackend_GetResourceList_ParamsDataView(
      internal::AppCacheBackend_GetResourceList_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t host_id() const {
    return data_->host_id;
  }
 private:
  internal::AppCacheBackend_GetResourceList_Params_Data* data_ = nullptr;
};

class AppCacheBackend_GetResourceList_ResponseParamsDataView {
 public:
  AppCacheBackend_GetResourceList_ResponseParamsDataView() {}

  AppCacheBackend_GetResourceList_ResponseParamsDataView(
      internal::AppCacheBackend_GetResourceList_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResourcesDataView(
      mojo::ArrayDataView<AppCacheResourceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResources(UserType* output) {
    auto* pointer = data_->resources.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content::mojom::AppCacheResourceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::AppCacheBackend_GetResourceList_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheFrontend_CacheSelected_ParamsDataView {
 public:
  AppCacheFrontend_CacheSelected_ParamsDataView() {}

  AppCacheFrontend_CacheSelected_ParamsDataView(
      internal::AppCacheFrontend_CacheSelected_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t host_id() const {
    return data_->host_id;
  }
  inline void GetInfoDataView(
      ::content::mojom::AppCacheInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::content::mojom::AppCacheInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::AppCacheFrontend_CacheSelected_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheFrontend_StatusChanged_ParamsDataView {
 public:
  AppCacheFrontend_StatusChanged_ParamsDataView() {}

  AppCacheFrontend_StatusChanged_ParamsDataView(
      internal::AppCacheFrontend_StatusChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostIdsDataView(
      mojo::ArrayDataView<int32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHostIds(UserType* output) {
    auto* pointer = data_->host_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int32_t>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::content::mojom::AppCacheStatus>(
        data_value, output);
  }

  ::content::mojom::AppCacheStatus status() const {
    return static_cast<::content::mojom::AppCacheStatus>(data_->status);
  }
 private:
  internal::AppCacheFrontend_StatusChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheFrontend_EventRaised_ParamsDataView {
 public:
  AppCacheFrontend_EventRaised_ParamsDataView() {}

  AppCacheFrontend_EventRaised_ParamsDataView(
      internal::AppCacheFrontend_EventRaised_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostIdsDataView(
      mojo::ArrayDataView<int32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHostIds(UserType* output) {
    auto* pointer = data_->host_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int32_t>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEventId(UserType* output) const {
    auto data_value = data_->event_id;
    return mojo::internal::Deserialize<::content::mojom::AppCacheEventID>(
        data_value, output);
  }

  AppCacheEventID event_id() const {
    return static_cast<AppCacheEventID>(data_->event_id);
  }
 private:
  internal::AppCacheFrontend_EventRaised_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheFrontend_ProgressEventRaised_ParamsDataView {
 public:
  AppCacheFrontend_ProgressEventRaised_ParamsDataView() {}

  AppCacheFrontend_ProgressEventRaised_ParamsDataView(
      internal::AppCacheFrontend_ProgressEventRaised_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostIdsDataView(
      mojo::ArrayDataView<int32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHostIds(UserType* output) {
    auto* pointer = data_->host_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int32_t>>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int32_t total() const {
    return data_->total;
  }
  int32_t complete() const {
    return data_->complete;
  }
 private:
  internal::AppCacheFrontend_ProgressEventRaised_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheFrontend_ErrorEventRaised_ParamsDataView {
 public:
  AppCacheFrontend_ErrorEventRaised_ParamsDataView() {}

  AppCacheFrontend_ErrorEventRaised_ParamsDataView(
      internal::AppCacheFrontend_ErrorEventRaised_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostIdsDataView(
      mojo::ArrayDataView<int32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHostIds(UserType* output) {
    auto* pointer = data_->host_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int32_t>>(
        pointer, output, context_);
  }
  inline void GetErrorDetailsDataView(
      AppCacheErrorDetailsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorDetails(UserType* output) {
    auto* pointer = data_->error_details.Get();
    return mojo::internal::Deserialize<::content::mojom::AppCacheErrorDetailsDataView>(
        pointer, output, context_);
  }
 private:
  internal::AppCacheFrontend_ErrorEventRaised_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheFrontend_LogMessage_ParamsDataView {
 public:
  AppCacheFrontend_LogMessage_ParamsDataView() {}

  AppCacheFrontend_LogMessage_ParamsDataView(
      internal::AppCacheFrontend_LogMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t host_id() const {
    return data_->host_id;
  }
  int32_t log_level() const {
    return data_->log_level;
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::AppCacheFrontend_LogMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheFrontend_ContentBlocked_ParamsDataView {
 public:
  AppCacheFrontend_ContentBlocked_ParamsDataView() {}

  AppCacheFrontend_ContentBlocked_ParamsDataView(
      internal::AppCacheFrontend_ContentBlocked_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t host_id() const {
    return data_->host_id;
  }
  inline void GetManifestUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadManifestUrl(UserType* output) {
    auto* pointer = data_->manifest_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::AppCacheFrontend_ContentBlocked_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheFrontend_SetSubresourceFactory_ParamsDataView {
 public:
  AppCacheFrontend_SetSubresourceFactory_ParamsDataView() {}

  AppCacheFrontend_SetSubresourceFactory_ParamsDataView(
      internal::AppCacheFrontend_SetSubresourceFactory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t host_id() const {
    return data_->host_id;
  }
  template <typename UserType>
  UserType TakeUrlLoaderFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryPtrDataView>(
            &data_->url_loader_factory, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::AppCacheFrontend_SetSubresourceFactory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

template <>
struct hash<::content::mojom::AppCacheEventID>
    : public mojo::internal::EnumHashImpl<::content::mojom::AppCacheEventID> {};

template <>
struct hash<::content::mojom::AppCacheErrorReason>
    : public mojo::internal::EnumHashImpl<::content::mojom::AppCacheErrorReason> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::content::mojom::AppCacheEventID, ::content::mojom::AppCacheEventID> {
  static ::content::mojom::AppCacheEventID ToMojom(::content::mojom::AppCacheEventID input) { return input; }
  static bool FromMojom(::content::mojom::AppCacheEventID input, ::content::mojom::AppCacheEventID* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::AppCacheEventID, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::AppCacheEventID, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::AppCacheEventID>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::content::mojom::AppCacheErrorReason, ::content::mojom::AppCacheErrorReason> {
  static ::content::mojom::AppCacheErrorReason ToMojom(::content::mojom::AppCacheErrorReason input) { return input; }
  static bool FromMojom(::content::mojom::AppCacheErrorReason input, ::content::mojom::AppCacheErrorReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::AppCacheErrorReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::AppCacheErrorReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::AppCacheErrorReason>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::AppCacheResourceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::AppCacheResourceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::AppCacheResourceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in AppCacheResourceInfo struct");
    (*output)->size = CallWithContext(Traits::size, input, custom_context);
    (*output)->is_master = CallWithContext(Traits::is_master, input, custom_context);
    (*output)->is_manifest = CallWithContext(Traits::is_manifest, input, custom_context);
    (*output)->is_intercept = CallWithContext(Traits::is_intercept, input, custom_context);
    (*output)->is_fallback = CallWithContext(Traits::is_fallback, input, custom_context);
    (*output)->is_foreign = CallWithContext(Traits::is_foreign, input, custom_context);
    (*output)->is_explicit = CallWithContext(Traits::is_explicit, input, custom_context);
    (*output)->response_id = CallWithContext(Traits::response_id, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::AppCacheResourceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::AppCacheResourceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::AppCacheErrorDetailsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::AppCacheErrorDetailsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::AppCacheErrorDetails_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::message, input, custom_context)) in_message = CallWithContext(Traits::message, input, custom_context);
    typename decltype((*output)->message)::BaseType::BufferWriter
        message_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_message, buffer, &message_writer, context);
    (*output)->message.Set(
        message_writer.is_null() ? nullptr : message_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null message in AppCacheErrorDetails struct");
    mojo::internal::Serialize<::content::mojom::AppCacheErrorReason>(
        CallWithContext(Traits::reason, input, custom_context), &(*output)->reason);
    decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in AppCacheErrorDetails struct");
    (*output)->status = CallWithContext(Traits::status, input, custom_context);
    (*output)->is_cross_origin = CallWithContext(Traits::is_cross_origin, input, custom_context);
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::AppCacheErrorDetails_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::AppCacheErrorDetailsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void AppCacheResourceInfoDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void AppCacheErrorDetailsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AppCacheErrorDetailsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}








inline void AppCacheBackend_SelectCache_ParamsDataView::GetDocumentUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->document_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void AppCacheBackend_SelectCache_ParamsDataView::GetOptManifestUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->opt_manifest_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void AppCacheBackend_MarkAsForeignEntry_ParamsDataView::GetDocumentUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->document_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
















inline void AppCacheBackend_GetResourceList_ResponseParamsDataView::GetResourcesDataView(
    mojo::ArrayDataView<AppCacheResourceInfoDataView>* output) {
  auto pointer = data_->resources.Get();
  *output = mojo::ArrayDataView<AppCacheResourceInfoDataView>(pointer, context_);
}


inline void AppCacheFrontend_CacheSelected_ParamsDataView::GetInfoDataView(
    ::content::mojom::AppCacheInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = ::content::mojom::AppCacheInfoDataView(pointer, context_);
}


inline void AppCacheFrontend_StatusChanged_ParamsDataView::GetHostIdsDataView(
    mojo::ArrayDataView<int32_t>* output) {
  auto pointer = data_->host_ids.Get();
  *output = mojo::ArrayDataView<int32_t>(pointer, context_);
}


inline void AppCacheFrontend_EventRaised_ParamsDataView::GetHostIdsDataView(
    mojo::ArrayDataView<int32_t>* output) {
  auto pointer = data_->host_ids.Get();
  *output = mojo::ArrayDataView<int32_t>(pointer, context_);
}


inline void AppCacheFrontend_ProgressEventRaised_ParamsDataView::GetHostIdsDataView(
    mojo::ArrayDataView<int32_t>* output) {
  auto pointer = data_->host_ids.Get();
  *output = mojo::ArrayDataView<int32_t>(pointer, context_);
}
inline void AppCacheFrontend_ProgressEventRaised_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void AppCacheFrontend_ErrorEventRaised_ParamsDataView::GetHostIdsDataView(
    mojo::ArrayDataView<int32_t>* output) {
  auto pointer = data_->host_ids.Get();
  *output = mojo::ArrayDataView<int32_t>(pointer, context_);
}
inline void AppCacheFrontend_ErrorEventRaised_ParamsDataView::GetErrorDetailsDataView(
    AppCacheErrorDetailsDataView* output) {
  auto pointer = data_->error_details.Get();
  *output = AppCacheErrorDetailsDataView(pointer, context_);
}


inline void AppCacheFrontend_LogMessage_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void AppCacheFrontend_ContentBlocked_ParamsDataView::GetManifestUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->manifest_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_APPCACHE_MOJOM_SHARED_H_
