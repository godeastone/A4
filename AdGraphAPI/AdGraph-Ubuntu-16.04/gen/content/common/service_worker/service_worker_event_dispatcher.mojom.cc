// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "content/common/service_worker/service_worker_event_dispatcher.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "content/common/service_worker/service_worker_event_dispatcher.mojom-shared-message-ids.h"
#include "content/common/background_fetch/background_fetch_struct_traits.h"
#include "content/common/platform_notification_messages.h"
#include "content/common/service_worker/service_worker_fetch_request_mojom_traits.h"
#include "content/common/service_worker/service_worker_messages.h"
#include "content/public/common/referrer_struct_traits.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "services/network/public/cpp/cookie_manager_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/url_request_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "third_party/blink/common/message_port/cloneable_message_struct_traits.h"
#include "third_party/blink/common/message_port/transferable_message_struct_traits.h"
#include "third_party/blink/public/platform/referrer_policy_enum_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace content {
namespace mojom {
BackgroundFetchSettledFetch::BackgroundFetchSettledFetch()
    : request(),
      response() {}

BackgroundFetchSettledFetch::BackgroundFetchSettledFetch(
    const ::content::ServiceWorkerFetchRequest& request_in,
    const ::content::ServiceWorkerResponse& response_in)
    : request(std::move(request_in)),
      response(std::move(response_in)) {}

BackgroundFetchSettledFetch::~BackgroundFetchSettledFetch() = default;

bool BackgroundFetchSettledFetch::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ExtendableMessageEvent::ExtendableMessageEvent()
    : message(),
      source_origin(),
      source_info_for_client(),
      source_info_for_service_worker() {}

ExtendableMessageEvent::ExtendableMessageEvent(
    ::blink::TransferableMessage message_in,
    const url::Origin& source_origin_in,
    ::blink::mojom::ServiceWorkerClientInfoPtr source_info_for_client_in,
    ::blink::mojom::ServiceWorkerObjectInfoPtr source_info_for_service_worker_in)
    : message(std::move(message_in)),
      source_origin(std::move(source_origin_in)),
      source_info_for_client(std::move(source_info_for_client_in)),
      source_info_for_service_worker(std::move(source_info_for_service_worker_in)) {}

ExtendableMessageEvent::~ExtendableMessageEvent() = default;

bool ExtendableMessageEvent::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ServiceWorkerEventDispatcher::Name_[] = "content.mojom.ServiceWorkerEventDispatcher";

class ServiceWorkerEventDispatcher_DispatchInstallEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerEventDispatcher_DispatchInstallEvent_ForwardToCallback(
      ServiceWorkerEventDispatcher::DispatchInstallEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerEventDispatcher::DispatchInstallEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchInstallEvent_ForwardToCallback);
};

class ServiceWorkerEventDispatcher_DispatchActivateEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerEventDispatcher_DispatchActivateEvent_ForwardToCallback(
      ServiceWorkerEventDispatcher::DispatchActivateEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerEventDispatcher::DispatchActivateEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchActivateEvent_ForwardToCallback);
};

class ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ForwardToCallback(
      ServiceWorkerEventDispatcher::DispatchBackgroundFetchAbortEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerEventDispatcher::DispatchBackgroundFetchAbortEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ForwardToCallback);
};

class ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ForwardToCallback(
      ServiceWorkerEventDispatcher::DispatchBackgroundFetchClickEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerEventDispatcher::DispatchBackgroundFetchClickEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ForwardToCallback);
};

class ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ForwardToCallback(
      ServiceWorkerEventDispatcher::DispatchBackgroundFetchFailEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerEventDispatcher::DispatchBackgroundFetchFailEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ForwardToCallback);
};

class ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ForwardToCallback(
      ServiceWorkerEventDispatcher::DispatchBackgroundFetchedEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerEventDispatcher::DispatchBackgroundFetchedEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ForwardToCallback);
};

class ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ForwardToCallback(
      ServiceWorkerEventDispatcher::DispatchCookieChangeEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerEventDispatcher::DispatchCookieChangeEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ForwardToCallback);
};

class ServiceWorkerEventDispatcher_DispatchFetchEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerEventDispatcher_DispatchFetchEvent_ForwardToCallback(
      ServiceWorkerEventDispatcher::DispatchFetchEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerEventDispatcher::DispatchFetchEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchFetchEvent_ForwardToCallback);
};

class ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ForwardToCallback(
      ServiceWorkerEventDispatcher::DispatchNotificationClickEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerEventDispatcher::DispatchNotificationClickEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ForwardToCallback);
};

class ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ForwardToCallback(
      ServiceWorkerEventDispatcher::DispatchNotificationCloseEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerEventDispatcher::DispatchNotificationCloseEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ForwardToCallback);
};

class ServiceWorkerEventDispatcher_DispatchPushEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerEventDispatcher_DispatchPushEvent_ForwardToCallback(
      ServiceWorkerEventDispatcher::DispatchPushEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerEventDispatcher::DispatchPushEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchPushEvent_ForwardToCallback);
};

class ServiceWorkerEventDispatcher_DispatchSyncEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerEventDispatcher_DispatchSyncEvent_ForwardToCallback(
      ServiceWorkerEventDispatcher::DispatchSyncEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerEventDispatcher::DispatchSyncEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchSyncEvent_ForwardToCallback);
};

class ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ForwardToCallback(
      ServiceWorkerEventDispatcher::DispatchAbortPaymentEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerEventDispatcher::DispatchAbortPaymentEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ForwardToCallback);
};

class ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ForwardToCallback(
      ServiceWorkerEventDispatcher::DispatchCanMakePaymentEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerEventDispatcher::DispatchCanMakePaymentEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ForwardToCallback);
};

class ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ForwardToCallback(
      ServiceWorkerEventDispatcher::DispatchPaymentRequestEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerEventDispatcher::DispatchPaymentRequestEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ForwardToCallback);
};

class ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ForwardToCallback(
      ServiceWorkerEventDispatcher::DispatchExtendableMessageEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerEventDispatcher::DispatchExtendableMessageEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ForwardToCallback);
};

class ServiceWorkerEventDispatcher_Ping_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerEventDispatcher_Ping_ForwardToCallback(
      ServiceWorkerEventDispatcher::PingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerEventDispatcher::PingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_Ping_ForwardToCallback);
};

ServiceWorkerEventDispatcherProxy::ServiceWorkerEventDispatcherProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerEventDispatcherProxy::InitializeGlobalScope(
    ::blink::mojom::ServiceWorkerHostAssociatedPtrInfo in_service_worker_host, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr in_registration_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::InitializeGlobalScope");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_InitializeGlobalScope_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerHostAssociatedPtrInfoDataView>(
      in_service_worker_host, &params->service_worker_host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->service_worker_host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid service_worker_host in ServiceWorkerEventDispatcher.InitializeGlobalScope request");
  typename decltype(params->registration_info)::BaseType::BufferWriter
      registration_info_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView>(
      in_registration_info, buffer, &registration_info_writer, &serialization_context);
  params->registration_info.Set(
      registration_info_writer.is_null() ? nullptr : registration_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->registration_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null registration_info in ServiceWorkerEventDispatcher.InitializeGlobalScope request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerEventDispatcherProxy::DispatchInstallEvent(
    DispatchInstallEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchInstallEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchInstallEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerEventDispatcher_DispatchInstallEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerEventDispatcherProxy::DispatchActivateEvent(
    DispatchActivateEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchActivateEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchActivateEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerEventDispatcher_DispatchActivateEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerEventDispatcherProxy::DispatchBackgroundFetchAbortEvent(
    const std::string& in_developer_id, const std::string& in_unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& in_fetches, DispatchBackgroundFetchAbortEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchAbortEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->developer_id)::BaseType::BufferWriter
      developer_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_developer_id, buffer, &developer_id_writer, &serialization_context);
  params->developer_id.Set(
      developer_id_writer.is_null() ? nullptr : developer_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->developer_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null developer_id in ServiceWorkerEventDispatcher.DispatchBackgroundFetchAbortEvent request");
  typename decltype(params->unique_id)::BaseType::BufferWriter
      unique_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_unique_id, buffer, &unique_id_writer, &serialization_context);
  params->unique_id.Set(
      unique_id_writer.is_null() ? nullptr : unique_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->unique_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null unique_id in ServiceWorkerEventDispatcher.DispatchBackgroundFetchAbortEvent request");
  typename decltype(params->fetches)::BaseType::BufferWriter
      fetches_writer;
  const mojo::internal::ContainerValidateParams fetches_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::content::mojom::BackgroundFetchSettledFetchDataView>>(
      in_fetches, buffer, &fetches_writer, &fetches_validate_params,
      &serialization_context);
  params->fetches.Set(
      fetches_writer.is_null() ? nullptr : fetches_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->fetches.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null fetches in ServiceWorkerEventDispatcher.DispatchBackgroundFetchAbortEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerEventDispatcherProxy::DispatchBackgroundFetchClickEvent(
    const std::string& in_developer_id, BackgroundFetchState in_state, DispatchBackgroundFetchClickEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchClickEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->developer_id)::BaseType::BufferWriter
      developer_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_developer_id, buffer, &developer_id_writer, &serialization_context);
  params->developer_id.Set(
      developer_id_writer.is_null() ? nullptr : developer_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->developer_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null developer_id in ServiceWorkerEventDispatcher.DispatchBackgroundFetchClickEvent request");
  mojo::internal::Serialize<::content::mojom::BackgroundFetchState>(
      in_state, &params->state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerEventDispatcherProxy::DispatchBackgroundFetchFailEvent(
    const std::string& in_developer_id, const std::string& in_unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& in_fetches, DispatchBackgroundFetchFailEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchFailEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->developer_id)::BaseType::BufferWriter
      developer_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_developer_id, buffer, &developer_id_writer, &serialization_context);
  params->developer_id.Set(
      developer_id_writer.is_null() ? nullptr : developer_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->developer_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null developer_id in ServiceWorkerEventDispatcher.DispatchBackgroundFetchFailEvent request");
  typename decltype(params->unique_id)::BaseType::BufferWriter
      unique_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_unique_id, buffer, &unique_id_writer, &serialization_context);
  params->unique_id.Set(
      unique_id_writer.is_null() ? nullptr : unique_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->unique_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null unique_id in ServiceWorkerEventDispatcher.DispatchBackgroundFetchFailEvent request");
  typename decltype(params->fetches)::BaseType::BufferWriter
      fetches_writer;
  const mojo::internal::ContainerValidateParams fetches_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::content::mojom::BackgroundFetchSettledFetchDataView>>(
      in_fetches, buffer, &fetches_writer, &fetches_validate_params,
      &serialization_context);
  params->fetches.Set(
      fetches_writer.is_null() ? nullptr : fetches_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->fetches.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null fetches in ServiceWorkerEventDispatcher.DispatchBackgroundFetchFailEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerEventDispatcherProxy::DispatchBackgroundFetchedEvent(
    const std::string& in_developer_id, const std::string& in_unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& in_fetches, DispatchBackgroundFetchedEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchedEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->developer_id)::BaseType::BufferWriter
      developer_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_developer_id, buffer, &developer_id_writer, &serialization_context);
  params->developer_id.Set(
      developer_id_writer.is_null() ? nullptr : developer_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->developer_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null developer_id in ServiceWorkerEventDispatcher.DispatchBackgroundFetchedEvent request");
  typename decltype(params->unique_id)::BaseType::BufferWriter
      unique_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_unique_id, buffer, &unique_id_writer, &serialization_context);
  params->unique_id.Set(
      unique_id_writer.is_null() ? nullptr : unique_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->unique_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null unique_id in ServiceWorkerEventDispatcher.DispatchBackgroundFetchedEvent request");
  typename decltype(params->fetches)::BaseType::BufferWriter
      fetches_writer;
  const mojo::internal::ContainerValidateParams fetches_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::content::mojom::BackgroundFetchSettledFetchDataView>>(
      in_fetches, buffer, &fetches_writer, &fetches_validate_params,
      &serialization_context);
  params->fetches.Set(
      fetches_writer.is_null() ? nullptr : fetches_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->fetches.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null fetches in ServiceWorkerEventDispatcher.DispatchBackgroundFetchedEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerEventDispatcherProxy::DispatchCookieChangeEvent(
    const net::CanonicalCookie& in_cookie, ::network::mojom::CookieChangeCause in_cause, DispatchCookieChangeEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchCookieChangeEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cookie)::BaseType::BufferWriter
      cookie_writer;
  mojo::internal::Serialize<::network::mojom::CanonicalCookieDataView>(
      in_cookie, buffer, &cookie_writer, &serialization_context);
  params->cookie.Set(
      cookie_writer.is_null() ? nullptr : cookie_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookie.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookie in ServiceWorkerEventDispatcher.DispatchCookieChangeEvent request");
  mojo::internal::Serialize<::network::mojom::CookieChangeCause>(
      in_cause, &params->cause);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerEventDispatcherProxy::DispatchFetchEvent(
    ::content::mojom::DispatchFetchEventParamsPtr in_params, ::content::mojom::ServiceWorkerFetchResponseCallbackPtr in_response_callback, DispatchFetchEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchFetchEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchFetchEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::content::mojom::DispatchFetchEventParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in ServiceWorkerEventDispatcher.DispatchFetchEvent request");
  mojo::internal::Serialize<::content::mojom::ServiceWorkerFetchResponseCallbackPtrDataView>(
      in_response_callback, &params->response_callback, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->response_callback),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid response_callback in ServiceWorkerEventDispatcher.DispatchFetchEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerEventDispatcher_DispatchFetchEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerEventDispatcherProxy::DispatchNotificationClickEvent(
    const std::string& in_notification_id, const ::content::PlatformNotificationData& in_notification_data, int32_t in_action_index, const base::Optional<base::string16>& in_reply, DispatchNotificationClickEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchNotificationClickEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->notification_id)::BaseType::BufferWriter
      notification_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_notification_id, buffer, &notification_id_writer, &serialization_context);
  params->notification_id.Set(
      notification_id_writer.is_null() ? nullptr : notification_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->notification_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null notification_id in ServiceWorkerEventDispatcher.DispatchNotificationClickEvent request");
  typename decltype(params->notification_data)::BaseType::BufferWriter
      notification_data_writer;
  mojo::internal::Serialize<::content::mojom::PlatformNotificationDataDataView>(
      in_notification_data, buffer, &notification_data_writer, &serialization_context);
  params->notification_data.Set(
      notification_data_writer.is_null() ? nullptr : notification_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->notification_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null notification_data in ServiceWorkerEventDispatcher.DispatchNotificationClickEvent request");
  params->action_index = in_action_index;
  typename decltype(params->reply)::BaseType::BufferWriter
      reply_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_reply, buffer, &reply_writer, &serialization_context);
  params->reply.Set(
      reply_writer.is_null() ? nullptr : reply_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerEventDispatcherProxy::DispatchNotificationCloseEvent(
    const std::string& in_notification_id, const ::content::PlatformNotificationData& in_notification_data, DispatchNotificationCloseEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchNotificationCloseEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->notification_id)::BaseType::BufferWriter
      notification_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_notification_id, buffer, &notification_id_writer, &serialization_context);
  params->notification_id.Set(
      notification_id_writer.is_null() ? nullptr : notification_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->notification_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null notification_id in ServiceWorkerEventDispatcher.DispatchNotificationCloseEvent request");
  typename decltype(params->notification_data)::BaseType::BufferWriter
      notification_data_writer;
  mojo::internal::Serialize<::content::mojom::PlatformNotificationDataDataView>(
      in_notification_data, buffer, &notification_data_writer, &serialization_context);
  params->notification_data.Set(
      notification_data_writer.is_null() ? nullptr : notification_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->notification_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null notification_data in ServiceWorkerEventDispatcher.DispatchNotificationCloseEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerEventDispatcherProxy::DispatchPushEvent(
    const ::content::PushEventPayload& in_payload, DispatchPushEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchPushEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchPushEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->payload)::BaseType::BufferWriter
      payload_writer;
  mojo::internal::Serialize<::content::mojom::PushEventPayloadDataView>(
      in_payload, buffer, &payload_writer, &serialization_context);
  params->payload.Set(
      payload_writer.is_null() ? nullptr : payload_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->payload.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null payload in ServiceWorkerEventDispatcher.DispatchPushEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerEventDispatcher_DispatchPushEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerEventDispatcherProxy::DispatchSyncEvent(
    const std::string& in_id, bool in_last_chance, base::TimeDelta in_timeout, DispatchSyncEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchSyncEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchSyncEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in ServiceWorkerEventDispatcher.DispatchSyncEvent request");
  params->last_chance = in_last_chance;
  typename decltype(params->timeout)::BaseType::BufferWriter
      timeout_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_timeout, buffer, &timeout_writer, &serialization_context);
  params->timeout.Set(
      timeout_writer.is_null() ? nullptr : timeout_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timeout.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timeout in ServiceWorkerEventDispatcher.DispatchSyncEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerEventDispatcher_DispatchSyncEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerEventDispatcherProxy::DispatchAbortPaymentEvent(
    int32_t in_event_id, ::payments::mojom::PaymentHandlerResponseCallbackPtr in_result_of_abort_payment, DispatchAbortPaymentEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchAbortPaymentEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->event_id = in_event_id;
  mojo::internal::Serialize<::payments::mojom::PaymentHandlerResponseCallbackPtrDataView>(
      in_result_of_abort_payment, &params->result_of_abort_payment, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->result_of_abort_payment),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid result_of_abort_payment in ServiceWorkerEventDispatcher.DispatchAbortPaymentEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerEventDispatcherProxy::DispatchCanMakePaymentEvent(
    int32_t in_event_id, ::payments::mojom::CanMakePaymentEventDataPtr in_event_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr in_result_of_can_make_payment, DispatchCanMakePaymentEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchCanMakePaymentEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->event_id = in_event_id;
  typename decltype(params->event_data)::BaseType::BufferWriter
      event_data_writer;
  mojo::internal::Serialize<::payments::mojom::CanMakePaymentEventDataDataView>(
      in_event_data, buffer, &event_data_writer, &serialization_context);
  params->event_data.Set(
      event_data_writer.is_null() ? nullptr : event_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event_data in ServiceWorkerEventDispatcher.DispatchCanMakePaymentEvent request");
  mojo::internal::Serialize<::payments::mojom::PaymentHandlerResponseCallbackPtrDataView>(
      in_result_of_can_make_payment, &params->result_of_can_make_payment, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->result_of_can_make_payment),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid result_of_can_make_payment in ServiceWorkerEventDispatcher.DispatchCanMakePaymentEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerEventDispatcherProxy::DispatchPaymentRequestEvent(
    int32_t in_payment_request_id, ::payments::mojom::PaymentRequestEventDataPtr in_request_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr in_response_callback, DispatchPaymentRequestEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchPaymentRequestEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->payment_request_id = in_payment_request_id;
  typename decltype(params->request_data)::BaseType::BufferWriter
      request_data_writer;
  mojo::internal::Serialize<::payments::mojom::PaymentRequestEventDataDataView>(
      in_request_data, buffer, &request_data_writer, &serialization_context);
  params->request_data.Set(
      request_data_writer.is_null() ? nullptr : request_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_data in ServiceWorkerEventDispatcher.DispatchPaymentRequestEvent request");
  mojo::internal::Serialize<::payments::mojom::PaymentHandlerResponseCallbackPtrDataView>(
      in_response_callback, &params->response_callback, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->response_callback),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid response_callback in ServiceWorkerEventDispatcher.DispatchPaymentRequestEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerEventDispatcherProxy::DispatchExtendableMessageEvent(
    ExtendableMessageEventPtr in_event, DispatchExtendableMessageEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchExtendableMessageEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->event)::BaseType::BufferWriter
      event_writer;
  mojo::internal::Serialize<::content::mojom::ExtendableMessageEventDataView>(
      in_event, buffer, &event_writer, &serialization_context);
  params->event.Set(
      event_writer.is_null() ? nullptr : event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in ServiceWorkerEventDispatcher.DispatchExtendableMessageEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerEventDispatcherProxy::Ping(
    PingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::Ping");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_Ping_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_Ping_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerEventDispatcher_Ping_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerEventDispatcherProxy::SetIdleTimerDelayToZero(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerEventDispatcher::SetIdleTimerDelayToZero");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class ServiceWorkerEventDispatcher_DispatchInstallEvent_ProxyToResponder {
 public:
  static ServiceWorkerEventDispatcher::DispatchInstallEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerEventDispatcher_DispatchInstallEvent_ProxyToResponder> proxy(
        new ServiceWorkerEventDispatcher_DispatchInstallEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerEventDispatcher_DispatchInstallEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerEventDispatcher_DispatchInstallEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ServiceWorkerEventDispatcher_DispatchInstallEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerEventDispatcher::DispatchInstallEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status, bool in_has_fetch_handler, base::Time in_dispatch_event_time);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchInstallEvent_ProxyToResponder);
};

bool ServiceWorkerEventDispatcher_DispatchInstallEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchInstallEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  bool p_has_fetch_handler{};
  base::Time p_dispatch_event_time{};
  ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  p_has_fetch_handler = input_data_view.has_fetch_handler();
  if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerEventDispatcher::DispatchInstallEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_has_fetch_handler), 
std::move(p_dispatch_event_time));
  return true;
}

void ServiceWorkerEventDispatcher_DispatchInstallEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, bool in_has_fetch_handler, base::Time in_dispatch_event_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchInstallEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  params->has_fetch_handler = in_has_fetch_handler;
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchInstallEventCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerEventDispatcher_DispatchActivateEvent_ProxyToResponder {
 public:
  static ServiceWorkerEventDispatcher::DispatchActivateEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerEventDispatcher_DispatchActivateEvent_ProxyToResponder> proxy(
        new ServiceWorkerEventDispatcher_DispatchActivateEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerEventDispatcher_DispatchActivateEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerEventDispatcher_DispatchActivateEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ServiceWorkerEventDispatcher_DispatchActivateEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerEventDispatcher::DispatchActivateEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchActivateEvent_ProxyToResponder);
};

bool ServiceWorkerEventDispatcher_DispatchActivateEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchActivateEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  base::Time p_dispatch_event_time{};
  ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerEventDispatcher::DispatchActivateEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_dispatch_event_time));
  return true;
}

void ServiceWorkerEventDispatcher_DispatchActivateEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchActivateEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchActivateEventCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ProxyToResponder {
 public:
  static ServiceWorkerEventDispatcher::DispatchBackgroundFetchAbortEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ProxyToResponder> proxy(
        new ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerEventDispatcher::DispatchBackgroundFetchAbortEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ProxyToResponder);
};

bool ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchAbortEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  base::Time p_dispatch_event_time{};
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerEventDispatcher::DispatchBackgroundFetchAbortEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_dispatch_event_time));
  return true;
}

void ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchAbortEventCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ProxyToResponder {
 public:
  static ServiceWorkerEventDispatcher::DispatchBackgroundFetchClickEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ProxyToResponder> proxy(
        new ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerEventDispatcher::DispatchBackgroundFetchClickEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ProxyToResponder);
};

bool ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchClickEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  base::Time p_dispatch_event_time{};
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerEventDispatcher::DispatchBackgroundFetchClickEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_dispatch_event_time));
  return true;
}

void ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchClickEventCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ProxyToResponder {
 public:
  static ServiceWorkerEventDispatcher::DispatchBackgroundFetchFailEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ProxyToResponder> proxy(
        new ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerEventDispatcher::DispatchBackgroundFetchFailEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ProxyToResponder);
};

bool ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchFailEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  base::Time p_dispatch_event_time{};
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerEventDispatcher::DispatchBackgroundFetchFailEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_dispatch_event_time));
  return true;
}

void ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchFailEventCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ProxyToResponder {
 public:
  static ServiceWorkerEventDispatcher::DispatchBackgroundFetchedEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ProxyToResponder> proxy(
        new ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerEventDispatcher::DispatchBackgroundFetchedEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ProxyToResponder);
};

bool ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchedEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  base::Time p_dispatch_event_time{};
  ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerEventDispatcher::DispatchBackgroundFetchedEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_dispatch_event_time));
  return true;
}

void ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchedEventCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ProxyToResponder {
 public:
  static ServiceWorkerEventDispatcher::DispatchCookieChangeEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ProxyToResponder> proxy(
        new ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerEventDispatcher::DispatchCookieChangeEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ProxyToResponder);
};

bool ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchCookieChangeEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  base::Time p_dispatch_event_time{};
  ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerEventDispatcher::DispatchCookieChangeEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_dispatch_event_time));
  return true;
}

void ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchCookieChangeEventCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerEventDispatcher_DispatchFetchEvent_ProxyToResponder {
 public:
  static ServiceWorkerEventDispatcher::DispatchFetchEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerEventDispatcher_DispatchFetchEvent_ProxyToResponder> proxy(
        new ServiceWorkerEventDispatcher_DispatchFetchEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerEventDispatcher_DispatchFetchEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerEventDispatcher_DispatchFetchEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ServiceWorkerEventDispatcher_DispatchFetchEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerEventDispatcher::DispatchFetchEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchFetchEvent_ProxyToResponder);
};

bool ServiceWorkerEventDispatcher_DispatchFetchEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchFetchEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  base::Time p_dispatch_event_time{};
  ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerEventDispatcher::DispatchFetchEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_dispatch_event_time));
  return true;
}

void ServiceWorkerEventDispatcher_DispatchFetchEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchFetchEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchFetchEventCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ProxyToResponder {
 public:
  static ServiceWorkerEventDispatcher::DispatchNotificationClickEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ProxyToResponder> proxy(
        new ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerEventDispatcher::DispatchNotificationClickEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ProxyToResponder);
};

bool ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchNotificationClickEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  base::Time p_dispatch_event_time{};
  ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerEventDispatcher::DispatchNotificationClickEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_dispatch_event_time));
  return true;
}

void ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchNotificationClickEventCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ProxyToResponder {
 public:
  static ServiceWorkerEventDispatcher::DispatchNotificationCloseEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ProxyToResponder> proxy(
        new ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerEventDispatcher::DispatchNotificationCloseEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ProxyToResponder);
};

bool ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchNotificationCloseEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  base::Time p_dispatch_event_time{};
  ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerEventDispatcher::DispatchNotificationCloseEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_dispatch_event_time));
  return true;
}

void ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchNotificationCloseEventCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerEventDispatcher_DispatchPushEvent_ProxyToResponder {
 public:
  static ServiceWorkerEventDispatcher::DispatchPushEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerEventDispatcher_DispatchPushEvent_ProxyToResponder> proxy(
        new ServiceWorkerEventDispatcher_DispatchPushEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerEventDispatcher_DispatchPushEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerEventDispatcher_DispatchPushEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ServiceWorkerEventDispatcher_DispatchPushEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerEventDispatcher::DispatchPushEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchPushEvent_ProxyToResponder);
};

bool ServiceWorkerEventDispatcher_DispatchPushEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchPushEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  base::Time p_dispatch_event_time{};
  ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerEventDispatcher::DispatchPushEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_dispatch_event_time));
  return true;
}

void ServiceWorkerEventDispatcher_DispatchPushEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchPushEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchPushEventCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerEventDispatcher_DispatchSyncEvent_ProxyToResponder {
 public:
  static ServiceWorkerEventDispatcher::DispatchSyncEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerEventDispatcher_DispatchSyncEvent_ProxyToResponder> proxy(
        new ServiceWorkerEventDispatcher_DispatchSyncEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerEventDispatcher_DispatchSyncEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerEventDispatcher_DispatchSyncEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ServiceWorkerEventDispatcher_DispatchSyncEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerEventDispatcher::DispatchSyncEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchSyncEvent_ProxyToResponder);
};

bool ServiceWorkerEventDispatcher_DispatchSyncEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchSyncEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  base::Time p_dispatch_event_time{};
  ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerEventDispatcher::DispatchSyncEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_dispatch_event_time));
  return true;
}

void ServiceWorkerEventDispatcher_DispatchSyncEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchSyncEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchSyncEventCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ProxyToResponder {
 public:
  static ServiceWorkerEventDispatcher::DispatchAbortPaymentEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ProxyToResponder> proxy(
        new ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerEventDispatcher::DispatchAbortPaymentEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ProxyToResponder);
};

bool ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchAbortPaymentEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  base::Time p_dispatch_event_time{};
  ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerEventDispatcher::DispatchAbortPaymentEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_dispatch_event_time));
  return true;
}

void ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchAbortPaymentEventCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ProxyToResponder {
 public:
  static ServiceWorkerEventDispatcher::DispatchCanMakePaymentEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ProxyToResponder> proxy(
        new ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerEventDispatcher::DispatchCanMakePaymentEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ProxyToResponder);
};

bool ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchCanMakePaymentEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  base::Time p_dispatch_event_time{};
  ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerEventDispatcher::DispatchCanMakePaymentEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_dispatch_event_time));
  return true;
}

void ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchCanMakePaymentEventCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ProxyToResponder {
 public:
  static ServiceWorkerEventDispatcher::DispatchPaymentRequestEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ProxyToResponder> proxy(
        new ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerEventDispatcher::DispatchPaymentRequestEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ProxyToResponder);
};

bool ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchPaymentRequestEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  base::Time p_dispatch_event_time{};
  ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerEventDispatcher::DispatchPaymentRequestEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_dispatch_event_time));
  return true;
}

void ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchPaymentRequestEventCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ProxyToResponder {
 public:
  static ServiceWorkerEventDispatcher::DispatchExtendableMessageEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ProxyToResponder> proxy(
        new ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerEventDispatcher::DispatchExtendableMessageEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ProxyToResponder);
};

bool ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerEventDispatcher::DispatchExtendableMessageEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  base::Time p_dispatch_event_time{};
  ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerEventDispatcher::DispatchExtendableMessageEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_dispatch_event_time));
  return true;
}

void ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchExtendableMessageEventCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerEventDispatcher_Ping_ProxyToResponder {
 public:
  static ServiceWorkerEventDispatcher::PingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerEventDispatcher_Ping_ProxyToResponder> proxy(
        new ServiceWorkerEventDispatcher_Ping_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerEventDispatcher_Ping_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerEventDispatcher_Ping_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ServiceWorkerEventDispatcher_Ping_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerEventDispatcher::PingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerEventDispatcher_Ping_ProxyToResponder);
};

bool ServiceWorkerEventDispatcher_Ping_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerEventDispatcher::PingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerEventDispatcher_Ping_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerEventDispatcher_Ping_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ServiceWorkerEventDispatcher_Ping_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerEventDispatcher::Ping response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void ServiceWorkerEventDispatcher_Ping_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerEventDispatcher_Ping_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerEventDispatcher_Ping_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::PingCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ServiceWorkerEventDispatcherStubDispatch::Accept(
    ServiceWorkerEventDispatcher* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerEventDispatcher_InitializeGlobalScope_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::InitializeGlobalScope",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::ServiceWorkerHostAssociatedPtrInfo p_service_worker_host{};
      ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr p_registration_info{};
      ServiceWorkerEventDispatcher_InitializeGlobalScope_ParamsDataView input_data_view(params, &serialization_context);
      
      p_service_worker_host =
          input_data_view.TakeServiceWorkerHost<decltype(p_service_worker_host)>();
      if (!input_data_view.ReadRegistrationInfo(&p_registration_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::InitializeGlobalScope deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->InitializeGlobalScope(
std::move(p_service_worker_host), 
std::move(p_registration_info));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchInstallEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchInstallEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchActivateEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchActivateEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchAbortEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchClickEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchFailEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchedEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchCookieChangeEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchFetchEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchFetchEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchNotificationClickEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchNotificationCloseEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchPushEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchPushEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchSyncEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchSyncEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchAbortPaymentEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchCanMakePaymentEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchPaymentRequestEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchExtendableMessageEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_Ping_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::Ping",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::SetIdleTimerDelayToZero",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::SetIdleTimerDelayToZero deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetIdleTimerDelayToZero();
      return true;
    }
  }
  return false;
}

// static
bool ServiceWorkerEventDispatcherStubDispatch::AcceptWithResponder(
    ServiceWorkerEventDispatcher* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerEventDispatcher_InitializeGlobalScope_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::InitializeGlobalScope",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchInstallEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchInstallEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerEventDispatcher_DispatchInstallEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::DispatchInstallEvent deserializer");
        return false;
      }
      ServiceWorkerEventDispatcher::DispatchInstallEventCallback callback =
          ServiceWorkerEventDispatcher_DispatchInstallEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchInstallEvent(std::move(callback));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchActivateEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchActivateEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerEventDispatcher_DispatchActivateEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::DispatchActivateEvent deserializer");
        return false;
      }
      ServiceWorkerEventDispatcher::DispatchActivateEventCallback callback =
          ServiceWorkerEventDispatcher_DispatchActivateEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchActivateEvent(std::move(callback));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchAbortEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_developer_id{};
      std::string p_unique_id{};
      std::vector<::content::BackgroundFetchSettledFetch> p_fetches{};
      ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeveloperId(&p_developer_id))
        success = false;
      if (!input_data_view.ReadUniqueId(&p_unique_id))
        success = false;
      if (!input_data_view.ReadFetches(&p_fetches))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::DispatchBackgroundFetchAbortEvent deserializer");
        return false;
      }
      ServiceWorkerEventDispatcher::DispatchBackgroundFetchAbortEventCallback callback =
          ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchBackgroundFetchAbortEvent(
std::move(p_developer_id), 
std::move(p_unique_id), 
std::move(p_fetches), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchClickEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_developer_id{};
      BackgroundFetchState p_state{};
      ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeveloperId(&p_developer_id))
        success = false;
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::DispatchBackgroundFetchClickEvent deserializer");
        return false;
      }
      ServiceWorkerEventDispatcher::DispatchBackgroundFetchClickEventCallback callback =
          ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchBackgroundFetchClickEvent(
std::move(p_developer_id), 
std::move(p_state), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchFailEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_developer_id{};
      std::string p_unique_id{};
      std::vector<::content::BackgroundFetchSettledFetch> p_fetches{};
      ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeveloperId(&p_developer_id))
        success = false;
      if (!input_data_view.ReadUniqueId(&p_unique_id))
        success = false;
      if (!input_data_view.ReadFetches(&p_fetches))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::DispatchBackgroundFetchFailEvent deserializer");
        return false;
      }
      ServiceWorkerEventDispatcher::DispatchBackgroundFetchFailEventCallback callback =
          ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchBackgroundFetchFailEvent(
std::move(p_developer_id), 
std::move(p_unique_id), 
std::move(p_fetches), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchBackgroundFetchedEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_developer_id{};
      std::string p_unique_id{};
      std::vector<::content::BackgroundFetchSettledFetch> p_fetches{};
      ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDeveloperId(&p_developer_id))
        success = false;
      if (!input_data_view.ReadUniqueId(&p_unique_id))
        success = false;
      if (!input_data_view.ReadFetches(&p_fetches))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::DispatchBackgroundFetchedEvent deserializer");
        return false;
      }
      ServiceWorkerEventDispatcher::DispatchBackgroundFetchedEventCallback callback =
          ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchBackgroundFetchedEvent(
std::move(p_developer_id), 
std::move(p_unique_id), 
std::move(p_fetches), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchCookieChangeEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::CanonicalCookie p_cookie{};
      ::network::mojom::CookieChangeCause p_cause{};
      ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCookie(&p_cookie))
        success = false;
      if (!input_data_view.ReadCause(&p_cause))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::DispatchCookieChangeEvent deserializer");
        return false;
      }
      ServiceWorkerEventDispatcher::DispatchCookieChangeEventCallback callback =
          ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchCookieChangeEvent(
std::move(p_cookie), 
std::move(p_cause), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchFetchEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchFetchEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::content::mojom::DispatchFetchEventParamsPtr p_params{};
      ::content::mojom::ServiceWorkerFetchResponseCallbackPtr p_response_callback{};
      ServiceWorkerEventDispatcher_DispatchFetchEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      p_response_callback =
          input_data_view.TakeResponseCallback<decltype(p_response_callback)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::DispatchFetchEvent deserializer");
        return false;
      }
      ServiceWorkerEventDispatcher::DispatchFetchEventCallback callback =
          ServiceWorkerEventDispatcher_DispatchFetchEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchFetchEvent(
std::move(p_params), 
std::move(p_response_callback), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchNotificationClickEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_notification_id{};
      ::content::PlatformNotificationData p_notification_data{};
      int32_t p_action_index{};
      base::Optional<base::string16> p_reply{};
      ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadNotificationId(&p_notification_id))
        success = false;
      if (!input_data_view.ReadNotificationData(&p_notification_data))
        success = false;
      p_action_index = input_data_view.action_index();
      if (!input_data_view.ReadReply(&p_reply))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::DispatchNotificationClickEvent deserializer");
        return false;
      }
      ServiceWorkerEventDispatcher::DispatchNotificationClickEventCallback callback =
          ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchNotificationClickEvent(
std::move(p_notification_id), 
std::move(p_notification_data), 
std::move(p_action_index), 
std::move(p_reply), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchNotificationCloseEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_notification_id{};
      ::content::PlatformNotificationData p_notification_data{};
      ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadNotificationId(&p_notification_id))
        success = false;
      if (!input_data_view.ReadNotificationData(&p_notification_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::DispatchNotificationCloseEvent deserializer");
        return false;
      }
      ServiceWorkerEventDispatcher::DispatchNotificationCloseEventCallback callback =
          ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchNotificationCloseEvent(
std::move(p_notification_id), 
std::move(p_notification_data), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchPushEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchPushEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::content::PushEventPayload p_payload{};
      ServiceWorkerEventDispatcher_DispatchPushEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPayload(&p_payload))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::DispatchPushEvent deserializer");
        return false;
      }
      ServiceWorkerEventDispatcher::DispatchPushEventCallback callback =
          ServiceWorkerEventDispatcher_DispatchPushEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchPushEvent(
std::move(p_payload), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchSyncEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchSyncEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_id{};
      bool p_last_chance{};
      base::TimeDelta p_timeout{};
      ServiceWorkerEventDispatcher_DispatchSyncEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadId(&p_id))
        success = false;
      p_last_chance = input_data_view.last_chance();
      if (!input_data_view.ReadTimeout(&p_timeout))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::DispatchSyncEvent deserializer");
        return false;
      }
      ServiceWorkerEventDispatcher::DispatchSyncEventCallback callback =
          ServiceWorkerEventDispatcher_DispatchSyncEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchSyncEvent(
std::move(p_id), 
std::move(p_last_chance), 
std::move(p_timeout), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchAbortPaymentEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_event_id{};
      ::payments::mojom::PaymentHandlerResponseCallbackPtr p_result_of_abort_payment{};
      ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_event_id = input_data_view.event_id();
      p_result_of_abort_payment =
          input_data_view.TakeResultOfAbortPayment<decltype(p_result_of_abort_payment)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::DispatchAbortPaymentEvent deserializer");
        return false;
      }
      ServiceWorkerEventDispatcher::DispatchAbortPaymentEventCallback callback =
          ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchAbortPaymentEvent(
std::move(p_event_id), 
std::move(p_result_of_abort_payment), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchCanMakePaymentEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_event_id{};
      ::payments::mojom::CanMakePaymentEventDataPtr p_event_data{};
      ::payments::mojom::PaymentHandlerResponseCallbackPtr p_result_of_can_make_payment{};
      ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_event_id = input_data_view.event_id();
      if (!input_data_view.ReadEventData(&p_event_data))
        success = false;
      p_result_of_can_make_payment =
          input_data_view.TakeResultOfCanMakePayment<decltype(p_result_of_can_make_payment)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::DispatchCanMakePaymentEvent deserializer");
        return false;
      }
      ServiceWorkerEventDispatcher::DispatchCanMakePaymentEventCallback callback =
          ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchCanMakePaymentEvent(
std::move(p_event_id), 
std::move(p_event_data), 
std::move(p_result_of_can_make_payment), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchPaymentRequestEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_payment_request_id{};
      ::payments::mojom::PaymentRequestEventDataPtr p_request_data{};
      ::payments::mojom::PaymentHandlerResponseCallbackPtr p_response_callback{};
      ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_payment_request_id = input_data_view.payment_request_id();
      if (!input_data_view.ReadRequestData(&p_request_data))
        success = false;
      p_response_callback =
          input_data_view.TakeResponseCallback<decltype(p_response_callback)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::DispatchPaymentRequestEvent deserializer");
        return false;
      }
      ServiceWorkerEventDispatcher::DispatchPaymentRequestEventCallback callback =
          ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchPaymentRequestEvent(
std::move(p_payment_request_id), 
std::move(p_request_data), 
std::move(p_response_callback), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::DispatchExtendableMessageEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ExtendableMessageEventPtr p_event{};
      ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::DispatchExtendableMessageEvent deserializer");
        return false;
      }
      ServiceWorkerEventDispatcher::DispatchExtendableMessageEventCallback callback =
          ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DispatchExtendableMessageEvent(
std::move(p_event), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_Ping_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::Ping",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerEventDispatcher_Ping_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerEventDispatcher_Ping_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerEventDispatcher_Ping_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerEventDispatcher::Ping deserializer");
        return false;
      }
      ServiceWorkerEventDispatcher::PingCallback callback =
          ServiceWorkerEventDispatcher_Ping_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Ping(std::move(callback));
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerEventDispatcher::SetIdleTimerDelayToZero",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ServiceWorkerEventDispatcherRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerEventDispatcher RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerEventDispatcher_InitializeGlobalScope_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_InitializeGlobalScope_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchInstallEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchInstallEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchActivateEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchActivateEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchFetchEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchFetchEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchPushEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchPushEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchSyncEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchSyncEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_Ping_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_Ping_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_SetIdleTimerDelayToZero_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool ServiceWorkerEventDispatcherResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerEventDispatcher ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kServiceWorkerEventDispatcher_DispatchInstallEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchInstallEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchActivateEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchActivateEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchAbortEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchClickEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchFailEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchBackgroundFetchedEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchCookieChangeEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchCookieChangeEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchFetchEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchFetchEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchNotificationClickEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchNotificationClickEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchNotificationCloseEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchPushEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchPushEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchSyncEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchSyncEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchAbortPaymentEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchCanMakePaymentEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchPaymentRequestEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_DispatchExtendableMessageEvent_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerEventDispatcher_Ping_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerEventDispatcher_Ping_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
void ServiceWorkerEventDispatcherInterceptorForTesting::InitializeGlobalScope(::blink::mojom::ServiceWorkerHostAssociatedPtrInfo service_worker_host, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr registration_info) {
  GetForwardingInterface()->InitializeGlobalScope(std::move(service_worker_host), std::move(registration_info));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::DispatchInstallEvent(DispatchInstallEventCallback callback) {
  GetForwardingInterface()->DispatchInstallEvent(std::move(callback));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::DispatchActivateEvent(DispatchActivateEventCallback callback) {
  GetForwardingInterface()->DispatchActivateEvent(std::move(callback));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::DispatchBackgroundFetchAbortEvent(const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, DispatchBackgroundFetchAbortEventCallback callback) {
  GetForwardingInterface()->DispatchBackgroundFetchAbortEvent(std::move(developer_id), std::move(unique_id), std::move(fetches), std::move(callback));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::DispatchBackgroundFetchClickEvent(const std::string& developer_id, BackgroundFetchState state, DispatchBackgroundFetchClickEventCallback callback) {
  GetForwardingInterface()->DispatchBackgroundFetchClickEvent(std::move(developer_id), std::move(state), std::move(callback));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::DispatchBackgroundFetchFailEvent(const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, DispatchBackgroundFetchFailEventCallback callback) {
  GetForwardingInterface()->DispatchBackgroundFetchFailEvent(std::move(developer_id), std::move(unique_id), std::move(fetches), std::move(callback));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::DispatchBackgroundFetchedEvent(const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, DispatchBackgroundFetchedEventCallback callback) {
  GetForwardingInterface()->DispatchBackgroundFetchedEvent(std::move(developer_id), std::move(unique_id), std::move(fetches), std::move(callback));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::DispatchCookieChangeEvent(const net::CanonicalCookie& cookie, ::network::mojom::CookieChangeCause cause, DispatchCookieChangeEventCallback callback) {
  GetForwardingInterface()->DispatchCookieChangeEvent(std::move(cookie), std::move(cause), std::move(callback));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::DispatchFetchEvent(::content::mojom::DispatchFetchEventParamsPtr params, ::content::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) {
  GetForwardingInterface()->DispatchFetchEvent(std::move(params), std::move(response_callback), std::move(callback));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::DispatchNotificationClickEvent(const std::string& notification_id, const ::content::PlatformNotificationData& notification_data, int32_t action_index, const base::Optional<base::string16>& reply, DispatchNotificationClickEventCallback callback) {
  GetForwardingInterface()->DispatchNotificationClickEvent(std::move(notification_id), std::move(notification_data), std::move(action_index), std::move(reply), std::move(callback));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::DispatchNotificationCloseEvent(const std::string& notification_id, const ::content::PlatformNotificationData& notification_data, DispatchNotificationCloseEventCallback callback) {
  GetForwardingInterface()->DispatchNotificationCloseEvent(std::move(notification_id), std::move(notification_data), std::move(callback));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::DispatchPushEvent(const ::content::PushEventPayload& payload, DispatchPushEventCallback callback) {
  GetForwardingInterface()->DispatchPushEvent(std::move(payload), std::move(callback));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::DispatchSyncEvent(const std::string& id, bool last_chance, base::TimeDelta timeout, DispatchSyncEventCallback callback) {
  GetForwardingInterface()->DispatchSyncEvent(std::move(id), std::move(last_chance), std::move(timeout), std::move(callback));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::DispatchAbortPaymentEvent(int32_t event_id, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_abort_payment, DispatchAbortPaymentEventCallback callback) {
  GetForwardingInterface()->DispatchAbortPaymentEvent(std::move(event_id), std::move(result_of_abort_payment), std::move(callback));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::DispatchCanMakePaymentEvent(int32_t event_id, ::payments::mojom::CanMakePaymentEventDataPtr event_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_can_make_payment, DispatchCanMakePaymentEventCallback callback) {
  GetForwardingInterface()->DispatchCanMakePaymentEvent(std::move(event_id), std::move(event_data), std::move(result_of_can_make_payment), std::move(callback));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::DispatchPaymentRequestEvent(int32_t payment_request_id, ::payments::mojom::PaymentRequestEventDataPtr request_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr response_callback, DispatchPaymentRequestEventCallback callback) {
  GetForwardingInterface()->DispatchPaymentRequestEvent(std::move(payment_request_id), std::move(request_data), std::move(response_callback), std::move(callback));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::DispatchExtendableMessageEvent(ExtendableMessageEventPtr event, DispatchExtendableMessageEventCallback callback) {
  GetForwardingInterface()->DispatchExtendableMessageEvent(std::move(event), std::move(callback));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::Ping(PingCallback callback) {
  GetForwardingInterface()->Ping(std::move(callback));
}
void ServiceWorkerEventDispatcherInterceptorForTesting::SetIdleTimerDelayToZero() {
  GetForwardingInterface()->SetIdleTimerDelayToZero();
}
ServiceWorkerEventDispatcherAsyncWaiter::ServiceWorkerEventDispatcherAsyncWaiter(
    ServiceWorkerEventDispatcher* proxy) : proxy_(proxy) {}

ServiceWorkerEventDispatcherAsyncWaiter::~ServiceWorkerEventDispatcherAsyncWaiter() = default;

void ServiceWorkerEventDispatcherAsyncWaiter::DispatchInstallEvent(
    ::blink::mojom::ServiceWorkerEventStatus* out_status, bool* out_has_fetch_handler, base::Time* out_dispatch_event_time) {
  base::RunLoop loop;
  proxy_->DispatchInstallEvent(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             bool* out_has_fetch_handler
,
             base::Time* out_dispatch_event_time
,
             ::blink::mojom::ServiceWorkerEventStatus status,
             bool has_fetch_handler,
             base::Time dispatch_event_time) {*out_status = std::move(status);*out_has_fetch_handler = std::move(has_fetch_handler);*out_dispatch_event_time = std::move(dispatch_event_time);
            loop->Quit();
          },
          &loop,
          out_status,
          out_has_fetch_handler,
          out_dispatch_event_time));
  loop.Run();
}
void ServiceWorkerEventDispatcherAsyncWaiter::DispatchActivateEvent(
    ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time) {
  base::RunLoop loop;
  proxy_->DispatchActivateEvent(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             base::Time* out_dispatch_event_time
,
             ::blink::mojom::ServiceWorkerEventStatus status,
             base::Time dispatch_event_time) {*out_status = std::move(status);*out_dispatch_event_time = std::move(dispatch_event_time);
            loop->Quit();
          },
          &loop,
          out_status,
          out_dispatch_event_time));
  loop.Run();
}
void ServiceWorkerEventDispatcherAsyncWaiter::DispatchBackgroundFetchAbortEvent(
    const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time) {
  base::RunLoop loop;
  proxy_->DispatchBackgroundFetchAbortEvent(std::move(developer_id),std::move(unique_id),std::move(fetches),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             base::Time* out_dispatch_event_time
,
             ::blink::mojom::ServiceWorkerEventStatus status,
             base::Time dispatch_event_time) {*out_status = std::move(status);*out_dispatch_event_time = std::move(dispatch_event_time);
            loop->Quit();
          },
          &loop,
          out_status,
          out_dispatch_event_time));
  loop.Run();
}
void ServiceWorkerEventDispatcherAsyncWaiter::DispatchBackgroundFetchClickEvent(
    const std::string& developer_id, BackgroundFetchState state, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time) {
  base::RunLoop loop;
  proxy_->DispatchBackgroundFetchClickEvent(std::move(developer_id),std::move(state),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             base::Time* out_dispatch_event_time
,
             ::blink::mojom::ServiceWorkerEventStatus status,
             base::Time dispatch_event_time) {*out_status = std::move(status);*out_dispatch_event_time = std::move(dispatch_event_time);
            loop->Quit();
          },
          &loop,
          out_status,
          out_dispatch_event_time));
  loop.Run();
}
void ServiceWorkerEventDispatcherAsyncWaiter::DispatchBackgroundFetchFailEvent(
    const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time) {
  base::RunLoop loop;
  proxy_->DispatchBackgroundFetchFailEvent(std::move(developer_id),std::move(unique_id),std::move(fetches),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             base::Time* out_dispatch_event_time
,
             ::blink::mojom::ServiceWorkerEventStatus status,
             base::Time dispatch_event_time) {*out_status = std::move(status);*out_dispatch_event_time = std::move(dispatch_event_time);
            loop->Quit();
          },
          &loop,
          out_status,
          out_dispatch_event_time));
  loop.Run();
}
void ServiceWorkerEventDispatcherAsyncWaiter::DispatchBackgroundFetchedEvent(
    const std::string& developer_id, const std::string& unique_id, const std::vector<::content::BackgroundFetchSettledFetch>& fetches, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time) {
  base::RunLoop loop;
  proxy_->DispatchBackgroundFetchedEvent(std::move(developer_id),std::move(unique_id),std::move(fetches),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             base::Time* out_dispatch_event_time
,
             ::blink::mojom::ServiceWorkerEventStatus status,
             base::Time dispatch_event_time) {*out_status = std::move(status);*out_dispatch_event_time = std::move(dispatch_event_time);
            loop->Quit();
          },
          &loop,
          out_status,
          out_dispatch_event_time));
  loop.Run();
}
void ServiceWorkerEventDispatcherAsyncWaiter::DispatchCookieChangeEvent(
    const net::CanonicalCookie& cookie, ::network::mojom::CookieChangeCause cause, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time) {
  base::RunLoop loop;
  proxy_->DispatchCookieChangeEvent(std::move(cookie),std::move(cause),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             base::Time* out_dispatch_event_time
,
             ::blink::mojom::ServiceWorkerEventStatus status,
             base::Time dispatch_event_time) {*out_status = std::move(status);*out_dispatch_event_time = std::move(dispatch_event_time);
            loop->Quit();
          },
          &loop,
          out_status,
          out_dispatch_event_time));
  loop.Run();
}
void ServiceWorkerEventDispatcherAsyncWaiter::DispatchFetchEvent(
    ::content::mojom::DispatchFetchEventParamsPtr params, ::content::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time) {
  base::RunLoop loop;
  proxy_->DispatchFetchEvent(std::move(params),std::move(response_callback),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             base::Time* out_dispatch_event_time
,
             ::blink::mojom::ServiceWorkerEventStatus status,
             base::Time dispatch_event_time) {*out_status = std::move(status);*out_dispatch_event_time = std::move(dispatch_event_time);
            loop->Quit();
          },
          &loop,
          out_status,
          out_dispatch_event_time));
  loop.Run();
}
void ServiceWorkerEventDispatcherAsyncWaiter::DispatchNotificationClickEvent(
    const std::string& notification_id, const ::content::PlatformNotificationData& notification_data, int32_t action_index, const base::Optional<base::string16>& reply, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time) {
  base::RunLoop loop;
  proxy_->DispatchNotificationClickEvent(std::move(notification_id),std::move(notification_data),std::move(action_index),std::move(reply),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             base::Time* out_dispatch_event_time
,
             ::blink::mojom::ServiceWorkerEventStatus status,
             base::Time dispatch_event_time) {*out_status = std::move(status);*out_dispatch_event_time = std::move(dispatch_event_time);
            loop->Quit();
          },
          &loop,
          out_status,
          out_dispatch_event_time));
  loop.Run();
}
void ServiceWorkerEventDispatcherAsyncWaiter::DispatchNotificationCloseEvent(
    const std::string& notification_id, const ::content::PlatformNotificationData& notification_data, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time) {
  base::RunLoop loop;
  proxy_->DispatchNotificationCloseEvent(std::move(notification_id),std::move(notification_data),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             base::Time* out_dispatch_event_time
,
             ::blink::mojom::ServiceWorkerEventStatus status,
             base::Time dispatch_event_time) {*out_status = std::move(status);*out_dispatch_event_time = std::move(dispatch_event_time);
            loop->Quit();
          },
          &loop,
          out_status,
          out_dispatch_event_time));
  loop.Run();
}
void ServiceWorkerEventDispatcherAsyncWaiter::DispatchPushEvent(
    const ::content::PushEventPayload& payload, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time) {
  base::RunLoop loop;
  proxy_->DispatchPushEvent(std::move(payload),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             base::Time* out_dispatch_event_time
,
             ::blink::mojom::ServiceWorkerEventStatus status,
             base::Time dispatch_event_time) {*out_status = std::move(status);*out_dispatch_event_time = std::move(dispatch_event_time);
            loop->Quit();
          },
          &loop,
          out_status,
          out_dispatch_event_time));
  loop.Run();
}
void ServiceWorkerEventDispatcherAsyncWaiter::DispatchSyncEvent(
    const std::string& id, bool last_chance, base::TimeDelta timeout, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time) {
  base::RunLoop loop;
  proxy_->DispatchSyncEvent(std::move(id),std::move(last_chance),std::move(timeout),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             base::Time* out_dispatch_event_time
,
             ::blink::mojom::ServiceWorkerEventStatus status,
             base::Time dispatch_event_time) {*out_status = std::move(status);*out_dispatch_event_time = std::move(dispatch_event_time);
            loop->Quit();
          },
          &loop,
          out_status,
          out_dispatch_event_time));
  loop.Run();
}
void ServiceWorkerEventDispatcherAsyncWaiter::DispatchAbortPaymentEvent(
    int32_t event_id, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_abort_payment, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time) {
  base::RunLoop loop;
  proxy_->DispatchAbortPaymentEvent(std::move(event_id),std::move(result_of_abort_payment),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             base::Time* out_dispatch_event_time
,
             ::blink::mojom::ServiceWorkerEventStatus status,
             base::Time dispatch_event_time) {*out_status = std::move(status);*out_dispatch_event_time = std::move(dispatch_event_time);
            loop->Quit();
          },
          &loop,
          out_status,
          out_dispatch_event_time));
  loop.Run();
}
void ServiceWorkerEventDispatcherAsyncWaiter::DispatchCanMakePaymentEvent(
    int32_t event_id, ::payments::mojom::CanMakePaymentEventDataPtr event_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr result_of_can_make_payment, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time) {
  base::RunLoop loop;
  proxy_->DispatchCanMakePaymentEvent(std::move(event_id),std::move(event_data),std::move(result_of_can_make_payment),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             base::Time* out_dispatch_event_time
,
             ::blink::mojom::ServiceWorkerEventStatus status,
             base::Time dispatch_event_time) {*out_status = std::move(status);*out_dispatch_event_time = std::move(dispatch_event_time);
            loop->Quit();
          },
          &loop,
          out_status,
          out_dispatch_event_time));
  loop.Run();
}
void ServiceWorkerEventDispatcherAsyncWaiter::DispatchPaymentRequestEvent(
    int32_t payment_request_id, ::payments::mojom::PaymentRequestEventDataPtr request_data, ::payments::mojom::PaymentHandlerResponseCallbackPtr response_callback, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time) {
  base::RunLoop loop;
  proxy_->DispatchPaymentRequestEvent(std::move(payment_request_id),std::move(request_data),std::move(response_callback),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             base::Time* out_dispatch_event_time
,
             ::blink::mojom::ServiceWorkerEventStatus status,
             base::Time dispatch_event_time) {*out_status = std::move(status);*out_dispatch_event_time = std::move(dispatch_event_time);
            loop->Quit();
          },
          &loop,
          out_status,
          out_dispatch_event_time));
  loop.Run();
}
void ServiceWorkerEventDispatcherAsyncWaiter::DispatchExtendableMessageEvent(
    ExtendableMessageEventPtr event, ::blink::mojom::ServiceWorkerEventStatus* out_status, base::Time* out_dispatch_event_time) {
  base::RunLoop loop;
  proxy_->DispatchExtendableMessageEvent(std::move(event),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ServiceWorkerEventStatus* out_status
,
             base::Time* out_dispatch_event_time
,
             ::blink::mojom::ServiceWorkerEventStatus status,
             base::Time dispatch_event_time) {*out_status = std::move(status);*out_dispatch_event_time = std::move(dispatch_event_time);
            loop->Quit();
          },
          &loop,
          out_status,
          out_dispatch_event_time));
  loop.Run();
}
void ServiceWorkerEventDispatcherAsyncWaiter::Ping(
    ) {
  base::RunLoop loop;
  proxy_->Ping(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::BackgroundFetchSettledFetch::DataView, ::content::mojom::BackgroundFetchSettledFetchPtr>::Read(
    ::content::mojom::BackgroundFetchSettledFetch::DataView input,
    ::content::mojom::BackgroundFetchSettledFetchPtr* output) {
  bool success = true;
  ::content::mojom::BackgroundFetchSettledFetchPtr result(::content::mojom::BackgroundFetchSettledFetch::New());
  
      if (!input.ReadRequest(&result->request))
        success = false;
      if (!input.ReadResponse(&result->response))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::ExtendableMessageEvent::DataView, ::content::mojom::ExtendableMessageEventPtr>::Read(
    ::content::mojom::ExtendableMessageEvent::DataView input,
    ::content::mojom::ExtendableMessageEventPtr* output) {
  bool success = true;
  ::content::mojom::ExtendableMessageEventPtr result(::content::mojom::ExtendableMessageEvent::New());
  
      if (!input.ReadMessage(&result->message))
        success = false;
      if (!input.ReadSourceOrigin(&result->source_origin))
        success = false;
      if (!input.ReadSourceInfoForClient(&result->source_info_for_client))
        success = false;
      if (!input.ReadSourceInfoForServiceWorker(&result->source_info_for_service_worker))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif