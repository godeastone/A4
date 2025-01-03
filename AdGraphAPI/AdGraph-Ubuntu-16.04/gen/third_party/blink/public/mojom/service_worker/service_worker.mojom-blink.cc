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

#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-blink.h"

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

#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "third_party/blink/renderer/core/messaging/blink_cloneable_message_struct_traits.h"
#include "third_party/blink/renderer/core/messaging/blink_transferable_message_struct_traits.h"
#include "third_party/blink/renderer/platform/blob/serialized_blob_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
namespace blink {
namespace mojom {
namespace blink {
const char ServiceWorkerHost::Name_[] = "blink.mojom.ServiceWorkerHost";

class ServiceWorkerHost_GetClients_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerHost_GetClients_ForwardToCallback(
      ServiceWorkerHost::GetClientsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerHost::GetClientsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_GetClients_ForwardToCallback);
};

class ServiceWorkerHost_GetClient_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerHost_GetClient_ForwardToCallback(
      ServiceWorkerHost::GetClientCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerHost::GetClientCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_GetClient_ForwardToCallback);
};

class ServiceWorkerHost_OpenNewTab_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerHost_OpenNewTab_ForwardToCallback(
      ServiceWorkerHost::OpenNewTabCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerHost::OpenNewTabCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_OpenNewTab_ForwardToCallback);
};

class ServiceWorkerHost_OpenPaymentHandlerWindow_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerHost_OpenPaymentHandlerWindow_ForwardToCallback(
      ServiceWorkerHost::OpenPaymentHandlerWindowCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerHost::OpenPaymentHandlerWindowCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_OpenPaymentHandlerWindow_ForwardToCallback);
};

class ServiceWorkerHost_FocusClient_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerHost_FocusClient_ForwardToCallback(
      ServiceWorkerHost::FocusClientCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerHost::FocusClientCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_FocusClient_ForwardToCallback);
};

class ServiceWorkerHost_NavigateClient_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerHost_NavigateClient_ForwardToCallback(
      ServiceWorkerHost::NavigateClientCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerHost::NavigateClientCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_NavigateClient_ForwardToCallback);
};

class ServiceWorkerHost_SkipWaiting_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerHost_SkipWaiting_ForwardToCallback(
      ServiceWorkerHost::SkipWaitingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerHost::SkipWaitingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_SkipWaiting_ForwardToCallback);
};

class ServiceWorkerHost_ClaimClients_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerHost_ClaimClients_ForwardToCallback(
      ServiceWorkerHost::ClaimClientsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerHost::ClaimClientsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_ClaimClients_ForwardToCallback);
};

ServiceWorkerHostProxy::ServiceWorkerHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerHostProxy::SetCachedMetadata(
    const ::blink::KURL& in_url, const WTF::Vector<uint8_t>& in_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerHost::SetCachedMetadata");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_SetCachedMetadata_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_SetCachedMetadata_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ServiceWorkerHost.SetCachedMetadata request");
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ServiceWorkerHost.SetCachedMetadata request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerHostProxy::ClearCachedMetadata(
    const ::blink::KURL& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerHost::ClearCachedMetadata");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_ClearCachedMetadata_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_ClearCachedMetadata_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ServiceWorkerHost.ClearCachedMetadata request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerHostProxy::GetClients(
    ::blink::mojom::blink::ServiceWorkerClientQueryOptionsPtr in_options, GetClientsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerHost::GetClients");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_GetClients_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_GetClients_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerClientQueryOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in ServiceWorkerHost.GetClients request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerHost_GetClients_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerHostProxy::GetClient(
    const WTF::String& in_client_uuid, GetClientCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerHost::GetClient");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_GetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_GetClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->client_uuid)::BaseType::BufferWriter
      client_uuid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_client_uuid, buffer, &client_uuid_writer, &serialization_context);
  params->client_uuid.Set(
      client_uuid_writer.is_null() ? nullptr : client_uuid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->client_uuid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null client_uuid in ServiceWorkerHost.GetClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerHost_GetClient_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerHostProxy::OpenNewTab(
    const ::blink::KURL& in_url, OpenNewTabCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerHost::OpenNewTab");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_OpenNewTab_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_OpenNewTab_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ServiceWorkerHost.OpenNewTab request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerHost_OpenNewTab_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerHostProxy::OpenPaymentHandlerWindow(
    const ::blink::KURL& in_url, OpenPaymentHandlerWindowCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerHost::OpenPaymentHandlerWindow");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_OpenPaymentHandlerWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ServiceWorkerHost.OpenPaymentHandlerWindow request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerHost_OpenPaymentHandlerWindow_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerHostProxy::PostMessageToClient(
    const WTF::String& in_client_uuid, ::blink::BlinkTransferableMessage in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerHost::PostMessageToClient");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_PostMessageToClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_PostMessageToClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->client_uuid)::BaseType::BufferWriter
      client_uuid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_client_uuid, buffer, &client_uuid_writer, &serialization_context);
  params->client_uuid.Set(
      client_uuid_writer.is_null() ? nullptr : client_uuid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->client_uuid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null client_uuid in ServiceWorkerHost.PostMessageToClient request");
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::blink::mojom::TransferableMessageDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in ServiceWorkerHost.PostMessageToClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerHostProxy::FocusClient(
    const WTF::String& in_client_uuid, FocusClientCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerHost::FocusClient");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_FocusClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_FocusClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->client_uuid)::BaseType::BufferWriter
      client_uuid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_client_uuid, buffer, &client_uuid_writer, &serialization_context);
  params->client_uuid.Set(
      client_uuid_writer.is_null() ? nullptr : client_uuid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->client_uuid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null client_uuid in ServiceWorkerHost.FocusClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerHost_FocusClient_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerHostProxy::NavigateClient(
    const WTF::String& in_client_uuid, const ::blink::KURL& in_url, NavigateClientCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerHost::NavigateClient");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_NavigateClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_NavigateClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->client_uuid)::BaseType::BufferWriter
      client_uuid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_client_uuid, buffer, &client_uuid_writer, &serialization_context);
  params->client_uuid.Set(
      client_uuid_writer.is_null() ? nullptr : client_uuid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->client_uuid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null client_uuid in ServiceWorkerHost.NavigateClient request");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ServiceWorkerHost.NavigateClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerHost_NavigateClient_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerHostProxy::SkipWaiting(
    SkipWaitingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerHost::SkipWaiting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_SkipWaiting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_SkipWaiting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerHost_SkipWaiting_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerHostProxy::ClaimClients(
    ClaimClientsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerHost::ClaimClients");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_ClaimClients_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_ClaimClients_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerHost_ClaimClients_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ServiceWorkerHost_GetClients_ProxyToResponder {
 public:
  static ServiceWorkerHost::GetClientsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerHost_GetClients_ProxyToResponder> proxy(
        new ServiceWorkerHost_GetClients_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerHost_GetClients_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerHost_GetClients_ProxyToResponder() {
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
  ServiceWorkerHost_GetClients_ProxyToResponder(
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
        << "ServiceWorkerHost::GetClientsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<::blink::mojom::blink::ServiceWorkerClientInfoPtr> in_clients);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_GetClients_ProxyToResponder);
};

bool ServiceWorkerHost_GetClients_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::ServiceWorkerHost::GetClientsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerHost_GetClients_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerHost_GetClients_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<::blink::mojom::blink::ServiceWorkerClientInfoPtr> p_clients{};
  ServiceWorkerHost_GetClients_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadClients(&p_clients))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerHost::GetClients response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_clients));
  return true;
}

void ServiceWorkerHost_GetClients_ProxyToResponder::Run(
    WTF::Vector<::blink::mojom::blink::ServiceWorkerClientInfoPtr> in_clients) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_GetClients_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_GetClients_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->clients)::BaseType::BufferWriter
      clients_writer;
  const mojo::internal::ContainerValidateParams clients_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ServiceWorkerClientInfoDataView>>(
      in_clients, buffer, &clients_writer, &clients_validate_params,
      &serialization_context);
  params->clients.Set(
      clients_writer.is_null() ? nullptr : clients_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->clients.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null clients in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::GetClientsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerHost_GetClient_ProxyToResponder {
 public:
  static ServiceWorkerHost::GetClientCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerHost_GetClient_ProxyToResponder> proxy(
        new ServiceWorkerHost_GetClient_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerHost_GetClient_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerHost_GetClient_ProxyToResponder() {
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
  ServiceWorkerHost_GetClient_ProxyToResponder(
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
        << "ServiceWorkerHost::GetClientCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::ServiceWorkerClientInfoPtr in_client);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_GetClient_ProxyToResponder);
};

bool ServiceWorkerHost_GetClient_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::ServiceWorkerHost::GetClientCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerHost_GetClient_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerHost_GetClient_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerClientInfoPtr p_client{};
  ServiceWorkerHost_GetClient_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadClient(&p_client))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerHost::GetClient response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_client));
  return true;
}

void ServiceWorkerHost_GetClient_ProxyToResponder::Run(
    ::blink::mojom::blink::ServiceWorkerClientInfoPtr in_client) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_GetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_GetClient_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->client)::BaseType::BufferWriter
      client_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
      in_client, buffer, &client_writer, &serialization_context);
  params->client.Set(
      client_writer.is_null() ? nullptr : client_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::GetClientCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerHost_OpenNewTab_ProxyToResponder {
 public:
  static ServiceWorkerHost::OpenNewTabCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerHost_OpenNewTab_ProxyToResponder> proxy(
        new ServiceWorkerHost_OpenNewTab_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerHost_OpenNewTab_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerHost_OpenNewTab_ProxyToResponder() {
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
  ServiceWorkerHost_OpenNewTab_ProxyToResponder(
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
        << "ServiceWorkerHost::OpenNewTabCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, ::blink::mojom::blink::ServiceWorkerClientInfoPtr in_client, const WTF::String& in_error_msg);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_OpenNewTab_ProxyToResponder);
};

bool ServiceWorkerHost_OpenNewTab_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::ServiceWorkerHost::OpenNewTabCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerHost_OpenNewTab_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerHost_OpenNewTab_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  ::blink::mojom::blink::ServiceWorkerClientInfoPtr p_client{};
  WTF::String p_error_msg{};
  ServiceWorkerHost_OpenNewTab_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadClient(&p_client))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerHost::OpenNewTab response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_client), 
std::move(p_error_msg));
  return true;
}

void ServiceWorkerHost_OpenNewTab_ProxyToResponder::Run(
    bool in_success, ::blink::mojom::blink::ServiceWorkerClientInfoPtr in_client, const WTF::String& in_error_msg) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_OpenNewTab_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_OpenNewTab_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->client)::BaseType::BufferWriter
      client_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
      in_client, buffer, &client_writer, &serialization_context);
  params->client.Set(
      client_writer.is_null() ? nullptr : client_writer.data());
  typename decltype(params->error_msg)::BaseType::BufferWriter
      error_msg_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error_msg, buffer, &error_msg_writer, &serialization_context);
  params->error_msg.Set(
      error_msg_writer.is_null() ? nullptr : error_msg_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::OpenNewTabCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder {
 public:
  static ServiceWorkerHost::OpenPaymentHandlerWindowCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder> proxy(
        new ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder() {
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
  ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder(
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
        << "ServiceWorkerHost::OpenPaymentHandlerWindowCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, ::blink::mojom::blink::ServiceWorkerClientInfoPtr in_client, const WTF::String& in_error_msg);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder);
};

bool ServiceWorkerHost_OpenPaymentHandlerWindow_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::ServiceWorkerHost::OpenPaymentHandlerWindowCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  ::blink::mojom::blink::ServiceWorkerClientInfoPtr p_client{};
  WTF::String p_error_msg{};
  ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadClient(&p_client))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerHost::OpenPaymentHandlerWindow response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_client), 
std::move(p_error_msg));
  return true;
}

void ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder::Run(
    bool in_success, ::blink::mojom::blink::ServiceWorkerClientInfoPtr in_client, const WTF::String& in_error_msg) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_OpenPaymentHandlerWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->client)::BaseType::BufferWriter
      client_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
      in_client, buffer, &client_writer, &serialization_context);
  params->client.Set(
      client_writer.is_null() ? nullptr : client_writer.data());
  typename decltype(params->error_msg)::BaseType::BufferWriter
      error_msg_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error_msg, buffer, &error_msg_writer, &serialization_context);
  params->error_msg.Set(
      error_msg_writer.is_null() ? nullptr : error_msg_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::OpenPaymentHandlerWindowCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerHost_FocusClient_ProxyToResponder {
 public:
  static ServiceWorkerHost::FocusClientCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerHost_FocusClient_ProxyToResponder> proxy(
        new ServiceWorkerHost_FocusClient_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerHost_FocusClient_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerHost_FocusClient_ProxyToResponder() {
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
  ServiceWorkerHost_FocusClient_ProxyToResponder(
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
        << "ServiceWorkerHost::FocusClientCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::ServiceWorkerClientInfoPtr in_client);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_FocusClient_ProxyToResponder);
};

bool ServiceWorkerHost_FocusClient_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::ServiceWorkerHost::FocusClientCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerHost_FocusClient_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerHost_FocusClient_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerClientInfoPtr p_client{};
  ServiceWorkerHost_FocusClient_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadClient(&p_client))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerHost::FocusClient response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_client));
  return true;
}

void ServiceWorkerHost_FocusClient_ProxyToResponder::Run(
    ::blink::mojom::blink::ServiceWorkerClientInfoPtr in_client) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_FocusClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_FocusClient_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->client)::BaseType::BufferWriter
      client_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
      in_client, buffer, &client_writer, &serialization_context);
  params->client.Set(
      client_writer.is_null() ? nullptr : client_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::FocusClientCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerHost_NavigateClient_ProxyToResponder {
 public:
  static ServiceWorkerHost::NavigateClientCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerHost_NavigateClient_ProxyToResponder> proxy(
        new ServiceWorkerHost_NavigateClient_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerHost_NavigateClient_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerHost_NavigateClient_ProxyToResponder() {
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
  ServiceWorkerHost_NavigateClient_ProxyToResponder(
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
        << "ServiceWorkerHost::NavigateClientCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, ::blink::mojom::blink::ServiceWorkerClientInfoPtr in_client, const WTF::String& in_error_msg);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_NavigateClient_ProxyToResponder);
};

bool ServiceWorkerHost_NavigateClient_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::ServiceWorkerHost::NavigateClientCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerHost_NavigateClient_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerHost_NavigateClient_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  ::blink::mojom::blink::ServiceWorkerClientInfoPtr p_client{};
  WTF::String p_error_msg{};
  ServiceWorkerHost_NavigateClient_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadClient(&p_client))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerHost::NavigateClient response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_client), 
std::move(p_error_msg));
  return true;
}

void ServiceWorkerHost_NavigateClient_ProxyToResponder::Run(
    bool in_success, ::blink::mojom::blink::ServiceWorkerClientInfoPtr in_client, const WTF::String& in_error_msg) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_NavigateClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_NavigateClient_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->client)::BaseType::BufferWriter
      client_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
      in_client, buffer, &client_writer, &serialization_context);
  params->client.Set(
      client_writer.is_null() ? nullptr : client_writer.data());
  typename decltype(params->error_msg)::BaseType::BufferWriter
      error_msg_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error_msg, buffer, &error_msg_writer, &serialization_context);
  params->error_msg.Set(
      error_msg_writer.is_null() ? nullptr : error_msg_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::NavigateClientCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerHost_SkipWaiting_ProxyToResponder {
 public:
  static ServiceWorkerHost::SkipWaitingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerHost_SkipWaiting_ProxyToResponder> proxy(
        new ServiceWorkerHost_SkipWaiting_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerHost_SkipWaiting_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerHost_SkipWaiting_ProxyToResponder() {
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
  ServiceWorkerHost_SkipWaiting_ProxyToResponder(
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
        << "ServiceWorkerHost::SkipWaitingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_SkipWaiting_ProxyToResponder);
};

bool ServiceWorkerHost_SkipWaiting_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::ServiceWorkerHost::SkipWaitingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerHost_SkipWaiting_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerHost_SkipWaiting_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  ServiceWorkerHost_SkipWaiting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerHost::SkipWaiting response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void ServiceWorkerHost_SkipWaiting_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_SkipWaiting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_SkipWaiting_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::SkipWaitingCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerHost_ClaimClients_ProxyToResponder {
 public:
  static ServiceWorkerHost::ClaimClientsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerHost_ClaimClients_ProxyToResponder> proxy(
        new ServiceWorkerHost_ClaimClients_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerHost_ClaimClients_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerHost_ClaimClients_ProxyToResponder() {
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
  ServiceWorkerHost_ClaimClients_ProxyToResponder(
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
        << "ServiceWorkerHost::ClaimClientsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerHost_ClaimClients_ProxyToResponder);
};

bool ServiceWorkerHost_ClaimClients_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::ServiceWorkerHost::ClaimClientsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerHost_ClaimClients_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerHost_ClaimClients_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerErrorType p_error{};
  WTF::String p_error_msg{};
  ServiceWorkerHost_ClaimClients_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerHost::ClaimClients response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_error_msg));
  return true;
}

void ServiceWorkerHost_ClaimClients_ProxyToResponder::Run(
    ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerHost_ClaimClients_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerHost_ClaimClients_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerErrorType>(
      in_error, &params->error);
  typename decltype(params->error_msg)::BaseType::BufferWriter
      error_msg_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error_msg, buffer, &error_msg_writer, &serialization_context);
  params->error_msg.Set(
      error_msg_writer.is_null() ? nullptr : error_msg_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::ClaimClientsCallback",
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
bool ServiceWorkerHostStubDispatch::Accept(
    ServiceWorkerHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerHost_SetCachedMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::SetCachedMetadata",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerHost_SetCachedMetadata_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerHost_SetCachedMetadata_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      WTF::Vector<uint8_t> p_data{};
      ServiceWorkerHost_SetCachedMetadata_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerHost::SetCachedMetadata deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetCachedMetadata(
std::move(p_url), 
std::move(p_data));
      return true;
    }
    case internal::kServiceWorkerHost_ClearCachedMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::ClearCachedMetadata",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerHost_ClearCachedMetadata_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerHost_ClearCachedMetadata_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      ServiceWorkerHost_ClearCachedMetadata_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerHost::ClearCachedMetadata deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearCachedMetadata(
std::move(p_url));
      return true;
    }
    case internal::kServiceWorkerHost_GetClients_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::GetClients",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerHost_GetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::GetClient",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerHost_OpenNewTab_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::OpenNewTab",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerHost_OpenPaymentHandlerWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::OpenPaymentHandlerWindow",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerHost_PostMessageToClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::PostMessageToClient",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerHost_PostMessageToClient_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerHost_PostMessageToClient_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_client_uuid{};
      ::blink::BlinkTransferableMessage p_message{};
      ServiceWorkerHost_PostMessageToClient_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadClientUuid(&p_client_uuid))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerHost::PostMessageToClient deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PostMessageToClient(
std::move(p_client_uuid), 
std::move(p_message));
      return true;
    }
    case internal::kServiceWorkerHost_FocusClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::FocusClient",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerHost_NavigateClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::NavigateClient",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerHost_SkipWaiting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::SkipWaiting",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerHost_ClaimClients_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::ClaimClients",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool ServiceWorkerHostStubDispatch::AcceptWithResponder(
    ServiceWorkerHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerHost_SetCachedMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::SetCachedMetadata",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerHost_ClearCachedMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::ClearCachedMetadata",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerHost_GetClients_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::GetClients",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerHost_GetClients_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerHost_GetClients_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::blink::ServiceWorkerClientQueryOptionsPtr p_options{};
      ServiceWorkerHost_GetClients_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerHost::GetClients deserializer");
        return false;
      }
      ServiceWorkerHost::GetClientsCallback callback =
          ServiceWorkerHost_GetClients_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetClients(
std::move(p_options), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerHost_GetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::GetClient",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerHost_GetClient_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerHost_GetClient_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_client_uuid{};
      ServiceWorkerHost_GetClient_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadClientUuid(&p_client_uuid))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerHost::GetClient deserializer");
        return false;
      }
      ServiceWorkerHost::GetClientCallback callback =
          ServiceWorkerHost_GetClient_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetClient(
std::move(p_client_uuid), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerHost_OpenNewTab_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::OpenNewTab",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerHost_OpenNewTab_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerHost_OpenNewTab_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      ServiceWorkerHost_OpenNewTab_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerHost::OpenNewTab deserializer");
        return false;
      }
      ServiceWorkerHost::OpenNewTabCallback callback =
          ServiceWorkerHost_OpenNewTab_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OpenNewTab(
std::move(p_url), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerHost_OpenPaymentHandlerWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::OpenPaymentHandlerWindow",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      ServiceWorkerHost_OpenPaymentHandlerWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerHost::OpenPaymentHandlerWindow deserializer");
        return false;
      }
      ServiceWorkerHost::OpenPaymentHandlerWindowCallback callback =
          ServiceWorkerHost_OpenPaymentHandlerWindow_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OpenPaymentHandlerWindow(
std::move(p_url), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerHost_PostMessageToClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::PostMessageToClient",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerHost_FocusClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::FocusClient",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerHost_FocusClient_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerHost_FocusClient_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_client_uuid{};
      ServiceWorkerHost_FocusClient_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadClientUuid(&p_client_uuid))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerHost::FocusClient deserializer");
        return false;
      }
      ServiceWorkerHost::FocusClientCallback callback =
          ServiceWorkerHost_FocusClient_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FocusClient(
std::move(p_client_uuid), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerHost_NavigateClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::NavigateClient",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerHost_NavigateClient_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerHost_NavigateClient_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_client_uuid{};
      ::blink::KURL p_url{};
      ServiceWorkerHost_NavigateClient_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadClientUuid(&p_client_uuid))
        success = false;
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerHost::NavigateClient deserializer");
        return false;
      }
      ServiceWorkerHost::NavigateClientCallback callback =
          ServiceWorkerHost_NavigateClient_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->NavigateClient(
std::move(p_client_uuid), 
std::move(p_url), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerHost_SkipWaiting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::SkipWaiting",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerHost_SkipWaiting_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerHost_SkipWaiting_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerHost_SkipWaiting_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerHost::SkipWaiting deserializer");
        return false;
      }
      ServiceWorkerHost::SkipWaitingCallback callback =
          ServiceWorkerHost_SkipWaiting_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SkipWaiting(std::move(callback));
      return true;
    }
    case internal::kServiceWorkerHost_ClaimClients_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerHost::ClaimClients",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerHost_ClaimClients_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerHost_ClaimClients_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerHost_ClaimClients_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerHost::ClaimClients deserializer");
        return false;
      }
      ServiceWorkerHost::ClaimClientsCallback callback =
          ServiceWorkerHost_ClaimClients_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClaimClients(std::move(callback));
      return true;
    }
  }
  return false;
}

bool ServiceWorkerHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerHost RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerHost_SetCachedMetadata_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_SetCachedMetadata_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_ClearCachedMetadata_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_ClearCachedMetadata_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_GetClients_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_GetClients_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_GetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_GetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_OpenNewTab_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_OpenNewTab_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_OpenPaymentHandlerWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_OpenPaymentHandlerWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_PostMessageToClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_PostMessageToClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_FocusClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_FocusClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_NavigateClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_NavigateClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_SkipWaiting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_SkipWaiting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_ClaimClients_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_ClaimClients_Params_Data>(
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

bool ServiceWorkerHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kServiceWorkerHost_GetClients_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_GetClients_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_GetClient_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_GetClient_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_OpenNewTab_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_OpenNewTab_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_OpenPaymentHandlerWindow_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_OpenPaymentHandlerWindow_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_FocusClient_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_FocusClient_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_NavigateClient_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_NavigateClient_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_SkipWaiting_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_SkipWaiting_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerHost_ClaimClients_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerHost_ClaimClients_ResponseParams_Data>(
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
void ServiceWorkerHostInterceptorForTesting::SetCachedMetadata(const ::blink::KURL& url, const WTF::Vector<uint8_t>& data) {
  GetForwardingInterface()->SetCachedMetadata(std::move(url), std::move(data));
}
void ServiceWorkerHostInterceptorForTesting::ClearCachedMetadata(const ::blink::KURL& url) {
  GetForwardingInterface()->ClearCachedMetadata(std::move(url));
}
void ServiceWorkerHostInterceptorForTesting::GetClients(::blink::mojom::blink::ServiceWorkerClientQueryOptionsPtr options, GetClientsCallback callback) {
  GetForwardingInterface()->GetClients(std::move(options), std::move(callback));
}
void ServiceWorkerHostInterceptorForTesting::GetClient(const WTF::String& client_uuid, GetClientCallback callback) {
  GetForwardingInterface()->GetClient(std::move(client_uuid), std::move(callback));
}
void ServiceWorkerHostInterceptorForTesting::OpenNewTab(const ::blink::KURL& url, OpenNewTabCallback callback) {
  GetForwardingInterface()->OpenNewTab(std::move(url), std::move(callback));
}
void ServiceWorkerHostInterceptorForTesting::OpenPaymentHandlerWindow(const ::blink::KURL& url, OpenPaymentHandlerWindowCallback callback) {
  GetForwardingInterface()->OpenPaymentHandlerWindow(std::move(url), std::move(callback));
}
void ServiceWorkerHostInterceptorForTesting::PostMessageToClient(const WTF::String& client_uuid, ::blink::BlinkTransferableMessage message) {
  GetForwardingInterface()->PostMessageToClient(std::move(client_uuid), std::move(message));
}
void ServiceWorkerHostInterceptorForTesting::FocusClient(const WTF::String& client_uuid, FocusClientCallback callback) {
  GetForwardingInterface()->FocusClient(std::move(client_uuid), std::move(callback));
}
void ServiceWorkerHostInterceptorForTesting::NavigateClient(const WTF::String& client_uuid, const ::blink::KURL& url, NavigateClientCallback callback) {
  GetForwardingInterface()->NavigateClient(std::move(client_uuid), std::move(url), std::move(callback));
}
void ServiceWorkerHostInterceptorForTesting::SkipWaiting(SkipWaitingCallback callback) {
  GetForwardingInterface()->SkipWaiting(std::move(callback));
}
void ServiceWorkerHostInterceptorForTesting::ClaimClients(ClaimClientsCallback callback) {
  GetForwardingInterface()->ClaimClients(std::move(callback));
}
ServiceWorkerHostAsyncWaiter::ServiceWorkerHostAsyncWaiter(
    ServiceWorkerHost* proxy) : proxy_(proxy) {}

ServiceWorkerHostAsyncWaiter::~ServiceWorkerHostAsyncWaiter() = default;

void ServiceWorkerHostAsyncWaiter::GetClients(
    ::blink::mojom::blink::ServiceWorkerClientQueryOptionsPtr options, WTF::Vector<::blink::mojom::blink::ServiceWorkerClientInfoPtr>* out_clients) {
  base::RunLoop loop;
  proxy_->GetClients(std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<::blink::mojom::blink::ServiceWorkerClientInfoPtr>* out_clients
,
             WTF::Vector<::blink::mojom::blink::ServiceWorkerClientInfoPtr> clients) {*out_clients = std::move(clients);
            loop->Quit();
          },
          &loop,
          out_clients));
  loop.Run();
}
void ServiceWorkerHostAsyncWaiter::GetClient(
    const WTF::String& client_uuid, ::blink::mojom::blink::ServiceWorkerClientInfoPtr* out_client) {
  base::RunLoop loop;
  proxy_->GetClient(std::move(client_uuid),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::blink::ServiceWorkerClientInfoPtr* out_client
,
             ::blink::mojom::blink::ServiceWorkerClientInfoPtr client) {*out_client = std::move(client);
            loop->Quit();
          },
          &loop,
          out_client));
  loop.Run();
}
void ServiceWorkerHostAsyncWaiter::OpenNewTab(
    const ::blink::KURL& url, bool* out_success, ::blink::mojom::blink::ServiceWorkerClientInfoPtr* out_client, WTF::String* out_error_msg) {
  base::RunLoop loop;
  proxy_->OpenNewTab(std::move(url),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             ::blink::mojom::blink::ServiceWorkerClientInfoPtr* out_client
,
             WTF::String* out_error_msg
,
             bool success,
             ::blink::mojom::blink::ServiceWorkerClientInfoPtr client,
             const WTF::String& error_msg) {*out_success = std::move(success);*out_client = std::move(client);*out_error_msg = std::move(error_msg);
            loop->Quit();
          },
          &loop,
          out_success,
          out_client,
          out_error_msg));
  loop.Run();
}
void ServiceWorkerHostAsyncWaiter::OpenPaymentHandlerWindow(
    const ::blink::KURL& url, bool* out_success, ::blink::mojom::blink::ServiceWorkerClientInfoPtr* out_client, WTF::String* out_error_msg) {
  base::RunLoop loop;
  proxy_->OpenPaymentHandlerWindow(std::move(url),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             ::blink::mojom::blink::ServiceWorkerClientInfoPtr* out_client
,
             WTF::String* out_error_msg
,
             bool success,
             ::blink::mojom::blink::ServiceWorkerClientInfoPtr client,
             const WTF::String& error_msg) {*out_success = std::move(success);*out_client = std::move(client);*out_error_msg = std::move(error_msg);
            loop->Quit();
          },
          &loop,
          out_success,
          out_client,
          out_error_msg));
  loop.Run();
}
void ServiceWorkerHostAsyncWaiter::FocusClient(
    const WTF::String& client_uuid, ::blink::mojom::blink::ServiceWorkerClientInfoPtr* out_client) {
  base::RunLoop loop;
  proxy_->FocusClient(std::move(client_uuid),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::blink::ServiceWorkerClientInfoPtr* out_client
,
             ::blink::mojom::blink::ServiceWorkerClientInfoPtr client) {*out_client = std::move(client);
            loop->Quit();
          },
          &loop,
          out_client));
  loop.Run();
}
void ServiceWorkerHostAsyncWaiter::NavigateClient(
    const WTF::String& client_uuid, const ::blink::KURL& url, bool* out_success, ::blink::mojom::blink::ServiceWorkerClientInfoPtr* out_client, WTF::String* out_error_msg) {
  base::RunLoop loop;
  proxy_->NavigateClient(std::move(client_uuid),std::move(url),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             ::blink::mojom::blink::ServiceWorkerClientInfoPtr* out_client
,
             WTF::String* out_error_msg
,
             bool success,
             ::blink::mojom::blink::ServiceWorkerClientInfoPtr client,
             const WTF::String& error_msg) {*out_success = std::move(success);*out_client = std::move(client);*out_error_msg = std::move(error_msg);
            loop->Quit();
          },
          &loop,
          out_success,
          out_client,
          out_error_msg));
  loop.Run();
}
void ServiceWorkerHostAsyncWaiter::SkipWaiting(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->SkipWaiting(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void ServiceWorkerHostAsyncWaiter::ClaimClients(
    ::blink::mojom::blink::ServiceWorkerErrorType* out_error, WTF::String* out_error_msg) {
  base::RunLoop loop;
  proxy_->ClaimClients(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::blink::ServiceWorkerErrorType* out_error
,
             WTF::String* out_error_msg
,
             ::blink::mojom::blink::ServiceWorkerErrorType error,
             const WTF::String& error_msg) {*out_error = std::move(error);*out_error_msg = std::move(error_msg);
            loop->Quit();
          },
          &loop,
          out_error,
          out_error_msg));
  loop.Run();
}

}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif