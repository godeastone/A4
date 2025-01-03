// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_H_

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
#include "content/common/service_worker/service_worker_fetch_response_callback.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
using ServiceWorkerResponseDataView = mojo::native::NativeStructDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ServiceWorkerFetchResponseCallbackInterfaceBase {};

using ServiceWorkerFetchResponseCallbackPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerFetchResponseCallbackInterfaceBase>;
using ServiceWorkerFetchResponseCallbackRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerFetchResponseCallbackInterfaceBase>;
using ServiceWorkerFetchResponseCallbackAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerFetchResponseCallbackInterfaceBase>;
using ServiceWorkerFetchResponseCallbackAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerFetchResponseCallbackInterfaceBase>;
class ServiceWorkerFetchResponseCallback_OnResponse_ParamsDataView {
 public:
  ServiceWorkerFetchResponseCallback_OnResponse_ParamsDataView() {}

  ServiceWorkerFetchResponseCallback_OnResponse_ParamsDataView(
      internal::ServiceWorkerFetchResponseCallback_OnResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResponseDataView(
      ServiceWorkerResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<::content::mojom::ServiceWorkerResponseDataView>(
        pointer, output, context_);
  }
  inline void GetDispatchEventTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDispatchEventTime(UserType* output) {
    auto* pointer = data_->dispatch_event_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerFetchResponseCallback_OnResponse_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerFetchResponseCallback_OnResponseBlob_ParamsDataView {
 public:
  ServiceWorkerFetchResponseCallback_OnResponseBlob_ParamsDataView() {}

  ServiceWorkerFetchResponseCallback_OnResponseBlob_ParamsDataView(
      internal::ServiceWorkerFetchResponseCallback_OnResponseBlob_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResponseDataView(
      ServiceWorkerResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<::content::mojom::ServiceWorkerResponseDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeBodyAsBlob() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobPtrDataView>(
            &data_->body_as_blob, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetDispatchEventTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDispatchEventTime(UserType* output) {
    auto* pointer = data_->dispatch_event_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerFetchResponseCallback_OnResponseBlob_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ParamsDataView {
 public:
  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ParamsDataView() {}

  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ParamsDataView(
      internal::ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResponseDataView(
      ServiceWorkerResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<::content::mojom::ServiceWorkerResponseDataView>(
        pointer, output, context_);
  }
  inline void GetDispatchEventTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDispatchEventTime(UserType* output) {
    auto* pointer = data_->dispatch_event_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParamsDataView {
 public:
  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParamsDataView() {}

  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParamsDataView(
      internal::ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorkerFetchResponseCallback_OnResponseStream_ParamsDataView {
 public:
  ServiceWorkerFetchResponseCallback_OnResponseStream_ParamsDataView() {}

  ServiceWorkerFetchResponseCallback_OnResponseStream_ParamsDataView(
      internal::ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResponseDataView(
      ServiceWorkerResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<::content::mojom::ServiceWorkerResponseDataView>(
        pointer, output, context_);
  }
  inline void GetBodyAsStreamDataView(
      ::blink::mojom::ServiceWorkerStreamHandleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBodyAsStream(UserType* output) {
    auto* pointer = data_->body_as_stream.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerStreamHandleDataView>(
        pointer, output, context_);
  }
  inline void GetDispatchEventTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDispatchEventTime(UserType* output) {
    auto* pointer = data_->dispatch_event_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerFetchResponseCallback_OnFallback_ParamsDataView {
 public:
  ServiceWorkerFetchResponseCallback_OnFallback_ParamsDataView() {}

  ServiceWorkerFetchResponseCallback_OnFallback_ParamsDataView(
      internal::ServiceWorkerFetchResponseCallback_OnFallback_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDispatchEventTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDispatchEventTime(UserType* output) {
    auto* pointer = data_->dispatch_event_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerFetchResponseCallback_OnFallback_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace content {
namespace mojom {

inline void ServiceWorkerFetchResponseCallback_OnResponse_ParamsDataView::GetResponseDataView(
    ServiceWorkerResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = ServiceWorkerResponseDataView(pointer, context_);
}
inline void ServiceWorkerFetchResponseCallback_OnResponse_ParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void ServiceWorkerFetchResponseCallback_OnResponseBlob_ParamsDataView::GetResponseDataView(
    ServiceWorkerResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = ServiceWorkerResponseDataView(pointer, context_);
}
inline void ServiceWorkerFetchResponseCallback_OnResponseBlob_ParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ParamsDataView::GetResponseDataView(
    ServiceWorkerResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = ServiceWorkerResponseDataView(pointer, context_);
}
inline void ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}




inline void ServiceWorkerFetchResponseCallback_OnResponseStream_ParamsDataView::GetResponseDataView(
    ServiceWorkerResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = ServiceWorkerResponseDataView(pointer, context_);
}
inline void ServiceWorkerFetchResponseCallback_OnResponseStream_ParamsDataView::GetBodyAsStreamDataView(
    ::blink::mojom::ServiceWorkerStreamHandleDataView* output) {
  auto pointer = data_->body_as_stream.Get();
  *output = ::blink::mojom::ServiceWorkerStreamHandleDataView(pointer, context_);
}
inline void ServiceWorkerFetchResponseCallback_OnResponseStream_ParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void ServiceWorkerFetchResponseCallback_OnFallback_ParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_H_
