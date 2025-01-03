// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_EVENT_DISPATCHER_MOJOM_SHARED_H_
#define CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_EVENT_DISPATCHER_MOJOM_SHARED_H_

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
#include "content/common/service_worker/service_worker_event_dispatcher.mojom-shared-internal.h"
#include "content/common/service_worker/dispatch_fetch_event_params.mojom-shared.h"
#include "content/common/service_worker/service_worker_fetch_response_callback.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "services/network/public/mojom/cookie_manager.mojom-shared.h"
#include "third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom-shared.h"
#include "third_party/blink/public/platform/modules/payments/payment_app.mojom-shared.h"
#include "third_party/blink/public/mojom/message_port/message_port.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
using PlatformNotificationDataDataView = mojo::native::NativeStructDataView;

using PushEventPayloadDataView = mojo::native::NativeStructDataView;

using ServiceWorkerResponseDataView = mojo::native::NativeStructDataView;

class BackgroundFetchSettledFetchDataView;

class ExtendableMessageEventDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content::mojom::BackgroundFetchSettledFetchDataView> {
  using Data = ::content::mojom::internal::BackgroundFetchSettledFetch_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content::mojom::ExtendableMessageEventDataView> {
  using Data = ::content::mojom::internal::ExtendableMessageEvent_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {

enum class BackgroundFetchState : int32_t {
  PENDING,
  SUCCEEDED,
  FAILED,
  kMinValue = 0,
  kMaxValue = 2,
};

inline std::ostream& operator<<(std::ostream& os, BackgroundFetchState value) {
  switch(value) {
    case BackgroundFetchState::PENDING:
      return os << "BackgroundFetchState::PENDING";
    case BackgroundFetchState::SUCCEEDED:
      return os << "BackgroundFetchState::SUCCEEDED";
    case BackgroundFetchState::FAILED:
      return os << "BackgroundFetchState::FAILED";
    default:
      return os << "Unknown BackgroundFetchState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(BackgroundFetchState value) {
  return internal::BackgroundFetchState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ServiceWorkerEventDispatcherInterfaceBase {};

using ServiceWorkerEventDispatcherPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerEventDispatcherInterfaceBase>;
using ServiceWorkerEventDispatcherRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerEventDispatcherInterfaceBase>;
using ServiceWorkerEventDispatcherAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerEventDispatcherInterfaceBase>;
using ServiceWorkerEventDispatcherAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerEventDispatcherInterfaceBase>;
class BackgroundFetchSettledFetchDataView {
 public:
  BackgroundFetchSettledFetchDataView() {}

  BackgroundFetchSettledFetchDataView(
      internal::BackgroundFetchSettledFetch_Data* data,
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
  inline void GetResponseDataView(
      ServiceWorkerResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<::content::mojom::ServiceWorkerResponseDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchSettledFetch_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ExtendableMessageEventDataView {
 public:
  ExtendableMessageEventDataView() {}

  ExtendableMessageEventDataView(
      internal::ExtendableMessageEvent_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      ::blink::mojom::TransferableMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::blink::mojom::TransferableMessageDataView>(
        pointer, output, context_);
  }
  inline void GetSourceOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceOrigin(UserType* output) {
    auto* pointer = data_->source_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetSourceInfoForClientDataView(
      ::blink::mojom::ServiceWorkerClientInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceInfoForClient(UserType* output) {
    auto* pointer = data_->source_info_for_client.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
        pointer, output, context_);
  }
  inline void GetSourceInfoForServiceWorkerDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceInfoForServiceWorker(UserType* output) {
    auto* pointer = data_->source_info_for_service_worker.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ExtendableMessageEvent_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_InitializeGlobalScope_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_InitializeGlobalScope_ParamsDataView() {}

  ServiceWorkerEventDispatcher_InitializeGlobalScope_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeServiceWorkerHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerHostAssociatedPtrInfoDataView>(
            &data_->service_worker_host, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetRegistrationInfoDataView(
      ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistrationInfo(UserType* output) {
    auto* pointer = data_->registration_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchInstallEvent_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchInstallEvent_ParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchInstallEvent_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data* data_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
  bool has_fetch_handler() const {
    return data_->has_fetch_handler;
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
  internal::ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchActivateEvent_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchActivateEvent_ParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchActivateEvent_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data* data_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
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
  internal::ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeveloperIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeveloperId(UserType* output) {
    auto* pointer = data_->developer_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUniqueIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUniqueId(UserType* output) {
    auto* pointer = data_->unique_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetFetchesDataView(
      mojo::ArrayDataView<BackgroundFetchSettledFetchDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFetches(UserType* output) {
    auto* pointer = data_->fetches.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content::mojom::BackgroundFetchSettledFetchDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
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
  internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeveloperIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeveloperId(UserType* output) {
    auto* pointer = data_->developer_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::content::mojom::BackgroundFetchState>(
        data_value, output);
  }

  BackgroundFetchState state() const {
    return static_cast<BackgroundFetchState>(data_->state);
  }
 private:
  internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
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
  internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeveloperIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeveloperId(UserType* output) {
    auto* pointer = data_->developer_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUniqueIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUniqueId(UserType* output) {
    auto* pointer = data_->unique_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetFetchesDataView(
      mojo::ArrayDataView<BackgroundFetchSettledFetchDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFetches(UserType* output) {
    auto* pointer = data_->fetches.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content::mojom::BackgroundFetchSettledFetchDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
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
  internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeveloperIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeveloperId(UserType* output) {
    auto* pointer = data_->developer_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUniqueIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUniqueId(UserType* output) {
    auto* pointer = data_->unique_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetFetchesDataView(
      mojo::ArrayDataView<BackgroundFetchSettledFetchDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFetches(UserType* output) {
    auto* pointer = data_->fetches.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content::mojom::BackgroundFetchSettledFetchDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
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
  internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCookieDataView(
      ::network::mojom::CanonicalCookieDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookie(UserType* output) {
    auto* pointer = data_->cookie.Get();
    return mojo::internal::Deserialize<::network::mojom::CanonicalCookieDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCause(UserType* output) const {
    auto data_value = data_->cause;
    return mojo::internal::Deserialize<::network::mojom::CookieChangeCause>(
        data_value, output);
  }

  ::network::mojom::CookieChangeCause cause() const {
    return static_cast<::network::mojom::CookieChangeCause>(data_->cause);
  }
 private:
  internal::ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
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
  internal::ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchFetchEvent_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchFetchEvent_ParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchFetchEvent_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      ::content::mojom::DispatchFetchEventParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::content::mojom::DispatchFetchEventParamsDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeResponseCallback() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::content::mojom::ServiceWorkerFetchResponseCallbackPtrDataView>(
            &data_->response_callback, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
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
  internal::ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNotificationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationId(UserType* output) {
    auto* pointer = data_->notification_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNotificationDataDataView(
      PlatformNotificationDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationData(UserType* output) {
    auto* pointer = data_->notification_data.Get();
    return mojo::internal::Deserialize<::content::mojom::PlatformNotificationDataDataView>(
        pointer, output, context_);
  }
  int32_t action_index() const {
    return data_->action_index;
  }
  inline void GetReplyDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReply(UserType* output) {
    auto* pointer = data_->reply.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
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
  internal::ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNotificationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationId(UserType* output) {
    auto* pointer = data_->notification_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNotificationDataDataView(
      PlatformNotificationDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationData(UserType* output) {
    auto* pointer = data_->notification_data.Get();
    return mojo::internal::Deserialize<::content::mojom::PlatformNotificationDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
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
  internal::ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchPushEvent_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchPushEvent_ParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchPushEvent_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPayloadDataView(
      PushEventPayloadDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPayload(UserType* output) {
    auto* pointer = data_->payload.Get();
    return mojo::internal::Deserialize<::content::mojom::PushEventPayloadDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
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
  internal::ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchSyncEvent_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchSyncEvent_ParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchSyncEvent_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool last_chance() const {
    return data_->last_chance;
  }
  inline void GetTimeoutDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeout(UserType* output) {
    auto* pointer = data_->timeout.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
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
  internal::ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t event_id() const {
    return data_->event_id;
  }
  template <typename UserType>
  UserType TakeResultOfAbortPayment() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::payments::mojom::PaymentHandlerResponseCallbackPtrDataView>(
            &data_->result_of_abort_payment, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
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
  internal::ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t event_id() const {
    return data_->event_id;
  }
  inline void GetEventDataDataView(
      ::payments::mojom::CanMakePaymentEventDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEventData(UserType* output) {
    auto* pointer = data_->event_data.Get();
    return mojo::internal::Deserialize<::payments::mojom::CanMakePaymentEventDataDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeResultOfCanMakePayment() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::payments::mojom::PaymentHandlerResponseCallbackPtrDataView>(
            &data_->result_of_can_make_payment, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
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
  internal::ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t payment_request_id() const {
    return data_->payment_request_id;
  }
  inline void GetRequestDataDataView(
      ::payments::mojom::PaymentRequestEventDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestData(UserType* output) {
    auto* pointer = data_->request_data.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentRequestEventDataDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeResponseCallback() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::payments::mojom::PaymentHandlerResponseCallbackPtrDataView>(
            &data_->response_callback, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
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
  internal::ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEventDataView(
      ExtendableMessageEventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) {
    auto* pointer = data_->event.Get();
    return mojo::internal::Deserialize<::content::mojom::ExtendableMessageEventDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParamsDataView {
 public:
  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParamsDataView() {}

  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParamsDataView(
      internal::ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
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
  internal::ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerEventDispatcher_Ping_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_Ping_ParamsDataView() {}

  ServiceWorkerEventDispatcher_Ping_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_Ping_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerEventDispatcher_Ping_Params_Data* data_ = nullptr;
};

class ServiceWorkerEventDispatcher_Ping_ResponseParamsDataView {
 public:
  ServiceWorkerEventDispatcher_Ping_ResponseParamsDataView() {}

  ServiceWorkerEventDispatcher_Ping_ResponseParamsDataView(
      internal::ServiceWorkerEventDispatcher_Ping_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerEventDispatcher_Ping_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_ParamsDataView {
 public:
  ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_ParamsDataView() {}

  ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_ParamsDataView(
      internal::ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace content

namespace std {

template <>
struct hash<::content::mojom::BackgroundFetchState>
    : public mojo::internal::EnumHashImpl<::content::mojom::BackgroundFetchState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::content::mojom::BackgroundFetchState, ::content::mojom::BackgroundFetchState> {
  static ::content::mojom::BackgroundFetchState ToMojom(::content::mojom::BackgroundFetchState input) { return input; }
  static bool FromMojom(::content::mojom::BackgroundFetchState input, ::content::mojom::BackgroundFetchState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::BackgroundFetchState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content::mojom::BackgroundFetchState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content::mojom::BackgroundFetchState>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::BackgroundFetchSettledFetchDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::BackgroundFetchSettledFetchDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::BackgroundFetchSettledFetch_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
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
        "null request in BackgroundFetchSettledFetch struct");
    decltype(CallWithContext(Traits::response, input, custom_context)) in_response = CallWithContext(Traits::response, input, custom_context);
    typename decltype((*output)->response)::BaseType::BufferWriter
        response_writer;
    mojo::internal::Serialize<::content::mojom::ServiceWorkerResponseDataView>(
        in_response, buffer, &response_writer, context);
    (*output)->response.Set(
        response_writer.is_null() ? nullptr : response_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->response.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null response in BackgroundFetchSettledFetch struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::BackgroundFetchSettledFetch_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::BackgroundFetchSettledFetchDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content::mojom::ExtendableMessageEventDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content::mojom::ExtendableMessageEventDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content::mojom::internal::ExtendableMessageEvent_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    decltype(CallWithContext(Traits::message, input, custom_context)) in_message = CallWithContext(Traits::message, input, custom_context);
    typename decltype((*output)->message)::BaseType::BufferWriter
        message_writer;
    mojo::internal::Serialize<::blink::mojom::TransferableMessageDataView>(
        in_message, buffer, &message_writer, context);
    (*output)->message.Set(
        message_writer.is_null() ? nullptr : message_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null message in ExtendableMessageEvent struct");
    decltype(CallWithContext(Traits::source_origin, input, custom_context)) in_source_origin = CallWithContext(Traits::source_origin, input, custom_context);
    typename decltype((*output)->source_origin)::BaseType::BufferWriter
        source_origin_writer;
    mojo::internal::Serialize<::url::mojom::OriginDataView>(
        in_source_origin, buffer, &source_origin_writer, context);
    (*output)->source_origin.Set(
        source_origin_writer.is_null() ? nullptr : source_origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->source_origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null source_origin in ExtendableMessageEvent struct");
    decltype(CallWithContext(Traits::source_info_for_client, input, custom_context)) in_source_info_for_client = CallWithContext(Traits::source_info_for_client, input, custom_context);
    typename decltype((*output)->source_info_for_client)::BaseType::BufferWriter
        source_info_for_client_writer;
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
        in_source_info_for_client, buffer, &source_info_for_client_writer, context);
    (*output)->source_info_for_client.Set(
        source_info_for_client_writer.is_null() ? nullptr : source_info_for_client_writer.data());
    decltype(CallWithContext(Traits::source_info_for_service_worker, input, custom_context)) in_source_info_for_service_worker = CallWithContext(Traits::source_info_for_service_worker, input, custom_context);
    typename decltype((*output)->source_info_for_service_worker)::BaseType::BufferWriter
        source_info_for_service_worker_writer;
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        in_source_info_for_service_worker, buffer, &source_info_for_service_worker_writer, context);
    (*output)->source_info_for_service_worker.Set(
        source_info_for_service_worker_writer.is_null() ? nullptr : source_info_for_service_worker_writer.data());
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::content::mojom::internal::ExtendableMessageEvent_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content::mojom::ExtendableMessageEventDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content {
namespace mojom {

inline void BackgroundFetchSettledFetchDataView::GetRequestDataView(
    ::blink::mojom::FetchAPIRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::blink::mojom::FetchAPIRequestDataView(pointer, context_);
}
inline void BackgroundFetchSettledFetchDataView::GetResponseDataView(
    ServiceWorkerResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = ServiceWorkerResponseDataView(pointer, context_);
}


inline void ExtendableMessageEventDataView::GetMessageDataView(
    ::blink::mojom::TransferableMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = ::blink::mojom::TransferableMessageDataView(pointer, context_);
}
inline void ExtendableMessageEventDataView::GetSourceOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->source_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void ExtendableMessageEventDataView::GetSourceInfoForClientDataView(
    ::blink::mojom::ServiceWorkerClientInfoDataView* output) {
  auto pointer = data_->source_info_for_client.Get();
  *output = ::blink::mojom::ServiceWorkerClientInfoDataView(pointer, context_);
}
inline void ExtendableMessageEventDataView::GetSourceInfoForServiceWorkerDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->source_info_for_service_worker.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_InitializeGlobalScope_ParamsDataView::GetRegistrationInfoDataView(
    ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView* output) {
  auto pointer = data_->registration_info.Get();
  *output = ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView(pointer, context_);
}




inline void ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}




inline void ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ParamsDataView::GetDeveloperIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->developer_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ParamsDataView::GetUniqueIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->unique_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ParamsDataView::GetFetchesDataView(
    mojo::ArrayDataView<BackgroundFetchSettledFetchDataView>* output) {
  auto pointer = data_->fetches.Get();
  *output = mojo::ArrayDataView<BackgroundFetchSettledFetchDataView>(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ParamsDataView::GetDeveloperIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->developer_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ParamsDataView::GetDeveloperIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->developer_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ParamsDataView::GetUniqueIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->unique_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ParamsDataView::GetFetchesDataView(
    mojo::ArrayDataView<BackgroundFetchSettledFetchDataView>* output) {
  auto pointer = data_->fetches.Get();
  *output = mojo::ArrayDataView<BackgroundFetchSettledFetchDataView>(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ParamsDataView::GetDeveloperIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->developer_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ParamsDataView::GetUniqueIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->unique_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ParamsDataView::GetFetchesDataView(
    mojo::ArrayDataView<BackgroundFetchSettledFetchDataView>* output) {
  auto pointer = data_->fetches.Get();
  *output = mojo::ArrayDataView<BackgroundFetchSettledFetchDataView>(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ParamsDataView::GetCookieDataView(
    ::network::mojom::CanonicalCookieDataView* output) {
  auto pointer = data_->cookie.Get();
  *output = ::network::mojom::CanonicalCookieDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchFetchEvent_ParamsDataView::GetParamsDataView(
    ::content::mojom::DispatchFetchEventParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::content::mojom::DispatchFetchEventParamsDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ParamsDataView::GetNotificationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->notification_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ParamsDataView::GetNotificationDataDataView(
    PlatformNotificationDataDataView* output) {
  auto pointer = data_->notification_data.Get();
  *output = PlatformNotificationDataDataView(pointer, context_);
}
inline void ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ParamsDataView::GetReplyDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->reply.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ParamsDataView::GetNotificationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->notification_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ParamsDataView::GetNotificationDataDataView(
    PlatformNotificationDataDataView* output) {
  auto pointer = data_->notification_data.Get();
  *output = PlatformNotificationDataDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchPushEvent_ParamsDataView::GetPayloadDataView(
    PushEventPayloadDataView* output) {
  auto pointer = data_->payload.Get();
  *output = PushEventPayloadDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchSyncEvent_ParamsDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerEventDispatcher_DispatchSyncEvent_ParamsDataView::GetTimeoutDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timeout.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}




inline void ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ParamsDataView::GetEventDataDataView(
    ::payments::mojom::CanMakePaymentEventDataDataView* output) {
  auto pointer = data_->event_data.Get();
  *output = ::payments::mojom::CanMakePaymentEventDataDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ParamsDataView::GetRequestDataDataView(
    ::payments::mojom::PaymentRequestEventDataDataView* output) {
  auto pointer = data_->request_data.Get();
  *output = ::payments::mojom::PaymentRequestEventDataDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ParamsDataView::GetEventDataView(
    ExtendableMessageEventDataView* output) {
  auto pointer = data_->event.Get();
  *output = ExtendableMessageEventDataView(pointer, context_);
}


inline void ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParamsDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}









}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_WORKER_SERVICE_WORKER_EVENT_DISPATCHER_MOJOM_SHARED_H_
