// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDER_MESSAGE_FILTER_MOJOM_SHARED_H_
#define CONTENT_COMMON_RENDER_MESSAGE_FILTER_MOJOM_SHARED_H_

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
#include "content/common/render_message_filter.mojom-shared-internal.h"
#include "content/common/input/input_handler.mojom-shared.h"
#include "content/common/native_types.mojom-shared.h"
#include "content/common/widget.mojom-shared.h"
#include "mojo/public/mojom/base/thread_priority.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {


}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
// Interface base classes. They are used for type safety check.
class RenderMessageFilterInterfaceBase {};

using RenderMessageFilterPtrDataView =
    mojo::InterfacePtrDataView<RenderMessageFilterInterfaceBase>;
using RenderMessageFilterRequestDataView =
    mojo::InterfaceRequestDataView<RenderMessageFilterInterfaceBase>;
using RenderMessageFilterAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<RenderMessageFilterInterfaceBase>;
using RenderMessageFilterAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<RenderMessageFilterInterfaceBase>;
class RenderMessageFilter_GenerateRoutingID_ParamsDataView {
 public:
  RenderMessageFilter_GenerateRoutingID_ParamsDataView() {}

  RenderMessageFilter_GenerateRoutingID_ParamsDataView(
      internal::RenderMessageFilter_GenerateRoutingID_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::RenderMessageFilter_GenerateRoutingID_Params_Data* data_ = nullptr;
};

class RenderMessageFilter_GenerateRoutingID_ResponseParamsDataView {
 public:
  RenderMessageFilter_GenerateRoutingID_ResponseParamsDataView() {}

  RenderMessageFilter_GenerateRoutingID_ResponseParamsDataView(
      internal::RenderMessageFilter_GenerateRoutingID_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t routing_id() const {
    return data_->routing_id;
  }
 private:
  internal::RenderMessageFilter_GenerateRoutingID_ResponseParams_Data* data_ = nullptr;
};

class RenderMessageFilter_CreateNewWidget_ParamsDataView {
 public:
  RenderMessageFilter_CreateNewWidget_ParamsDataView() {}

  RenderMessageFilter_CreateNewWidget_ParamsDataView(
      internal::RenderMessageFilter_CreateNewWidget_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t opener_id() const {
    return data_->opener_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPopupType(UserType* output) const {
    auto data_value = data_->popup_type;
    return mojo::internal::Deserialize<::content::mojom::WebPopupType>(
        data_value, output);
  }

  ::content::mojom::WebPopupType popup_type() const {
    return static_cast<::content::mojom::WebPopupType>(data_->popup_type);
  }
  template <typename UserType>
  UserType TakeWidget() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::WidgetPtrDataView>(
            &data_->widget, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::RenderMessageFilter_CreateNewWidget_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RenderMessageFilter_CreateNewWidget_ResponseParamsDataView {
 public:
  RenderMessageFilter_CreateNewWidget_ResponseParamsDataView() {}

  RenderMessageFilter_CreateNewWidget_ResponseParamsDataView(
      internal::RenderMessageFilter_CreateNewWidget_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t route_id() const {
    return data_->route_id;
  }
 private:
  internal::RenderMessageFilter_CreateNewWidget_ResponseParams_Data* data_ = nullptr;
};

class RenderMessageFilter_CreateFullscreenWidget_ParamsDataView {
 public:
  RenderMessageFilter_CreateFullscreenWidget_ParamsDataView() {}

  RenderMessageFilter_CreateFullscreenWidget_ParamsDataView(
      internal::RenderMessageFilter_CreateFullscreenWidget_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t opener_id() const {
    return data_->opener_id;
  }
  template <typename UserType>
  UserType TakeWidget() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::WidgetPtrDataView>(
            &data_->widget, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::RenderMessageFilter_CreateFullscreenWidget_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RenderMessageFilter_CreateFullscreenWidget_ResponseParamsDataView {
 public:
  RenderMessageFilter_CreateFullscreenWidget_ResponseParamsDataView() {}

  RenderMessageFilter_CreateFullscreenWidget_ResponseParamsDataView(
      internal::RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t route_id() const {
    return data_->route_id;
  }
 private:
  internal::RenderMessageFilter_CreateFullscreenWidget_ResponseParams_Data* data_ = nullptr;
};

class RenderMessageFilter_DidGenerateCacheableMetadata_ParamsDataView {
 public:
  RenderMessageFilter_DidGenerateCacheableMetadata_ParamsDataView() {}

  RenderMessageFilter_DidGenerateCacheableMetadata_ParamsDataView(
      internal::RenderMessageFilter_DidGenerateCacheableMetadata_Params_Data* data,
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
  inline void GetExpectedResponseTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExpectedResponseTime(UserType* output) {
    auto* pointer = data_->expected_response_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::RenderMessageFilter_DidGenerateCacheableMetadata_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView {
 public:
  RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView() {}

  RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView(
      internal::RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params_Data* data,
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
  inline void GetExpectedResponseTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExpectedResponseTime(UserType* output) {
    auto* pointer = data_->expected_response_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetCacheStorageOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCacheStorageOrigin(UserType* output) {
    auto* pointer = data_->cache_storage_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetCacheStorageCacheNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCacheStorageCacheName(UserType* output) {
    auto* pointer = data_->cache_storage_cache_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RenderMessageFilter_HasGpuProcess_ParamsDataView {
 public:
  RenderMessageFilter_HasGpuProcess_ParamsDataView() {}

  RenderMessageFilter_HasGpuProcess_ParamsDataView(
      internal::RenderMessageFilter_HasGpuProcess_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::RenderMessageFilter_HasGpuProcess_Params_Data* data_ = nullptr;
};

class RenderMessageFilter_HasGpuProcess_ResponseParamsDataView {
 public:
  RenderMessageFilter_HasGpuProcess_ResponseParamsDataView() {}

  RenderMessageFilter_HasGpuProcess_ResponseParamsDataView(
      internal::RenderMessageFilter_HasGpuProcess_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool has_gpu_process() const {
    return data_->has_gpu_process;
  }
 private:
  internal::RenderMessageFilter_HasGpuProcess_ResponseParams_Data* data_ = nullptr;
};

class RenderMessageFilter_SetThreadPriority_ParamsDataView {
 public:
  RenderMessageFilter_SetThreadPriority_ParamsDataView() {}

  RenderMessageFilter_SetThreadPriority_ParamsDataView(
      internal::RenderMessageFilter_SetThreadPriority_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t platform_thread_id() const {
    return data_->platform_thread_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadThreadPriority(UserType* output) const {
    auto data_value = data_->thread_priority;
    return mojo::internal::Deserialize<::mojo_base::mojom::ThreadPriority>(
        data_value, output);
  }

  ::mojo_base::mojom::ThreadPriority thread_priority() const {
    return static_cast<::mojo_base::mojom::ThreadPriority>(data_->thread_priority);
  }
 private:
  internal::RenderMessageFilter_SetThreadPriority_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace content {
namespace mojom {













inline void RenderMessageFilter_DidGenerateCacheableMetadata_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void RenderMessageFilter_DidGenerateCacheableMetadata_ParamsDataView::GetExpectedResponseTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->expected_response_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void RenderMessageFilter_DidGenerateCacheableMetadata_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView::GetExpectedResponseTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->expected_response_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView::GetCacheStorageOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->cache_storage_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView::GetCacheStorageCacheNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->cache_storage_cache_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}









}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_RENDER_MESSAGE_FILTER_MOJOM_SHARED_H_
