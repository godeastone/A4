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

#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-blink.h"

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

#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
namespace blink {
namespace mojom {
namespace blink {
ServiceWorkerRegistrationOptions::ServiceWorkerRegistrationOptions()
    : scope(),
      update_via_cache(ServiceWorkerUpdateViaCache::kImports) {}

ServiceWorkerRegistrationOptions::ServiceWorkerRegistrationOptions(
    const ::blink::KURL& scope_in,
    ServiceWorkerUpdateViaCache update_via_cache_in)
    : scope(std::move(scope_in)),
      update_via_cache(std::move(update_via_cache_in)) {}

ServiceWorkerRegistrationOptions::~ServiceWorkerRegistrationOptions() = default;

bool ServiceWorkerRegistrationOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ServiceWorkerRegistrationObjectInfo::ServiceWorkerRegistrationObjectInfo()
    : registration_id(kInvalidServiceWorkerRegistrationId),
      options(),
      host_ptr_info(),
      request(),
      installing(),
      waiting(),
      active() {}

ServiceWorkerRegistrationObjectInfo::ServiceWorkerRegistrationObjectInfo(
    int64_t registration_id_in,
    ServiceWorkerRegistrationOptionsPtr options_in,
    ServiceWorkerRegistrationObjectHostAssociatedPtrInfo host_ptr_info_in,
    ServiceWorkerRegistrationObjectAssociatedRequest request_in,
    ::blink::mojom::blink::ServiceWorkerObjectInfoPtr installing_in,
    ::blink::mojom::blink::ServiceWorkerObjectInfoPtr waiting_in,
    ::blink::mojom::blink::ServiceWorkerObjectInfoPtr active_in)
    : registration_id(std::move(registration_id_in)),
      options(std::move(options_in)),
      host_ptr_info(std::move(host_ptr_info_in)),
      request(std::move(request_in)),
      installing(std::move(installing_in)),
      waiting(std::move(waiting_in)),
      active(std::move(active_in)) {}

ServiceWorkerRegistrationObjectInfo::~ServiceWorkerRegistrationObjectInfo() = default;

bool ServiceWorkerRegistrationObjectInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ServiceWorkerRegistrationObjectHost::Name_[] = "blink.mojom.ServiceWorkerRegistrationObjectHost";

class ServiceWorkerRegistrationObjectHost_Update_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerRegistrationObjectHost_Update_ForwardToCallback(
      ServiceWorkerRegistrationObjectHost::UpdateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerRegistrationObjectHost::UpdateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_Update_ForwardToCallback);
};

class ServiceWorkerRegistrationObjectHost_Unregister_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerRegistrationObjectHost_Unregister_ForwardToCallback(
      ServiceWorkerRegistrationObjectHost::UnregisterCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerRegistrationObjectHost::UnregisterCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_Unregister_ForwardToCallback);
};

class ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ForwardToCallback(
      ServiceWorkerRegistrationObjectHost::EnableNavigationPreloadCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerRegistrationObjectHost::EnableNavigationPreloadCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ForwardToCallback);
};

class ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ForwardToCallback(
      ServiceWorkerRegistrationObjectHost::GetNavigationPreloadStateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerRegistrationObjectHost::GetNavigationPreloadStateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ForwardToCallback);
};

class ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ForwardToCallback(
      ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeaderCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeaderCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ForwardToCallback);
};

ServiceWorkerRegistrationObjectHostProxy::ServiceWorkerRegistrationObjectHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerRegistrationObjectHostProxy::Update(
    UpdateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerRegistrationObjectHost::Update");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_Update_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_Update_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerRegistrationObjectHost_Update_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerRegistrationObjectHostProxy::Unregister(
    UnregisterCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerRegistrationObjectHost::Unregister");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_Unregister_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_Unregister_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerRegistrationObjectHost_Unregister_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerRegistrationObjectHostProxy::EnableNavigationPreload(
    bool in_enable, EnableNavigationPreloadCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerRegistrationObjectHost::EnableNavigationPreload");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->enable = in_enable;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerRegistrationObjectHostProxy::GetNavigationPreloadState(
    GetNavigationPreloadStateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerRegistrationObjectHost::GetNavigationPreloadState");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerRegistrationObjectHostProxy::SetNavigationPreloadHeader(
    const WTF::String& in_value, SetNavigationPreloadHeaderCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeader");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in ServiceWorkerRegistrationObjectHost.SetNavigationPreloadHeader request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder {
 public:
  static ServiceWorkerRegistrationObjectHost::UpdateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder> proxy(
        new ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder() {
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
  ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder(
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
        << "ServiceWorkerRegistrationObjectHost::UpdateCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder);
};

bool ServiceWorkerRegistrationObjectHost_Update_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::ServiceWorkerRegistrationObjectHost::UpdateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerErrorType p_error{};
  WTF::String p_error_msg{};
  ServiceWorkerRegistrationObjectHost_Update_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerRegistrationObjectHost::Update response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_error_msg));
  return true;
}

void ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder::Run(
    ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_Update_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObjectHost::UpdateCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder {
 public:
  static ServiceWorkerRegistrationObjectHost::UnregisterCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder> proxy(
        new ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder() {
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
  ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder(
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
        << "ServiceWorkerRegistrationObjectHost::UnregisterCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder);
};

bool ServiceWorkerRegistrationObjectHost_Unregister_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::ServiceWorkerRegistrationObjectHost::UnregisterCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerErrorType p_error{};
  WTF::String p_error_msg{};
  ServiceWorkerRegistrationObjectHost_Unregister_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerRegistrationObjectHost::Unregister response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_error_msg));
  return true;
}

void ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder::Run(
    ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_Unregister_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObjectHost::UnregisterCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder {
 public:
  static ServiceWorkerRegistrationObjectHost::EnableNavigationPreloadCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder> proxy(
        new ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder() {
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
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder(
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
        << "ServiceWorkerRegistrationObjectHost::EnableNavigationPreloadCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder);
};

bool ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::ServiceWorkerRegistrationObjectHost::EnableNavigationPreloadCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerErrorType p_error{};
  WTF::String p_error_msg{};
  ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerRegistrationObjectHost::EnableNavigationPreload response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_error_msg));
  return true;
}

void ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder::Run(
    ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObjectHost::EnableNavigationPreloadCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder {
 public:
  static ServiceWorkerRegistrationObjectHost::GetNavigationPreloadStateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder> proxy(
        new ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder() {
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
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder(
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
        << "ServiceWorkerRegistrationObjectHost::GetNavigationPreloadStateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg, ::blink::mojom::blink::NavigationPreloadStatePtr in_state);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder);
};

bool ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::ServiceWorkerRegistrationObjectHost::GetNavigationPreloadStateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerErrorType p_error{};
  WTF::String p_error_msg{};
  ::blink::mojom::blink::NavigationPreloadStatePtr p_state{};
  ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!input_data_view.ReadState(&p_state))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerRegistrationObjectHost::GetNavigationPreloadState response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_error_msg), 
std::move(p_state));
  return true;
}

void ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder::Run(
    ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg, ::blink::mojom::blink::NavigationPreloadStatePtr in_state) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data::BufferWriter
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
  typename decltype(params->state)::BaseType::BufferWriter
      state_writer;
  mojo::internal::Serialize<::blink::mojom::NavigationPreloadStateDataView>(
      in_state, buffer, &state_writer, &serialization_context);
  params->state.Set(
      state_writer.is_null() ? nullptr : state_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObjectHost::GetNavigationPreloadStateCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder {
 public:
  static ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeaderCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder> proxy(
        new ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder() {
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
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder(
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
        << "ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeaderCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder);
};

bool ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeaderCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerErrorType p_error{};
  WTF::String p_error_msg{};
  ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadErrorMsg(&p_error_msg))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeader response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error), 
std::move(p_error_msg));
  return true;
}

void ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder::Run(
    ::blink::mojom::blink::ServiceWorkerErrorType in_error, const WTF::String& in_error_msg) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeaderCallback",
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
bool ServiceWorkerRegistrationObjectHostStubDispatch::Accept(
    ServiceWorkerRegistrationObjectHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerRegistrationObjectHost_Update_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObjectHost::Update",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerRegistrationObjectHost_Unregister_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObjectHost::Unregister",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObjectHost::EnableNavigationPreload",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObjectHost::GetNavigationPreloadState",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeader",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool ServiceWorkerRegistrationObjectHostStubDispatch::AcceptWithResponder(
    ServiceWorkerRegistrationObjectHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerRegistrationObjectHost_Update_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObjectHost::Update",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerRegistrationObjectHost_Update_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerRegistrationObjectHost_Update_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerRegistrationObjectHost_Update_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerRegistrationObjectHost::Update deserializer");
        return false;
      }
      ServiceWorkerRegistrationObjectHost::UpdateCallback callback =
          ServiceWorkerRegistrationObjectHost_Update_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Update(std::move(callback));
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_Unregister_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObjectHost::Unregister",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerRegistrationObjectHost_Unregister_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerRegistrationObjectHost_Unregister_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerRegistrationObjectHost_Unregister_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerRegistrationObjectHost::Unregister deserializer");
        return false;
      }
      ServiceWorkerRegistrationObjectHost::UnregisterCallback callback =
          ServiceWorkerRegistrationObjectHost_Unregister_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Unregister(std::move(callback));
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObjectHost::EnableNavigationPreload",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_enable{};
      ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ParamsDataView input_data_view(params, &serialization_context);
      
      p_enable = input_data_view.enable();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerRegistrationObjectHost::EnableNavigationPreload deserializer");
        return false;
      }
      ServiceWorkerRegistrationObjectHost::EnableNavigationPreloadCallback callback =
          ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->EnableNavigationPreload(
std::move(p_enable), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObjectHost::GetNavigationPreloadState",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerRegistrationObjectHost::GetNavigationPreloadState deserializer");
        return false;
      }
      ServiceWorkerRegistrationObjectHost::GetNavigationPreloadStateCallback callback =
          ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetNavigationPreloadState(std::move(callback));
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeader",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_value{};
      ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeader deserializer");
        return false;
      }
      ServiceWorkerRegistrationObjectHost::SetNavigationPreloadHeaderCallback callback =
          ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetNavigationPreloadHeader(
std::move(p_value), std::move(callback));
      return true;
    }
  }
  return false;
}

bool ServiceWorkerRegistrationObjectHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerRegistrationObjectHost RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerRegistrationObjectHost_Update_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_Update_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_Unregister_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_Unregister_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Params_Data>(
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

bool ServiceWorkerRegistrationObjectHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerRegistrationObjectHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kServiceWorkerRegistrationObjectHost_Update_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_Update_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_Unregister_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_Unregister_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_EnableNavigationPreload_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_ResponseParams_Data>(
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
void ServiceWorkerRegistrationObjectHostInterceptorForTesting::Update(UpdateCallback callback) {
  GetForwardingInterface()->Update(std::move(callback));
}
void ServiceWorkerRegistrationObjectHostInterceptorForTesting::Unregister(UnregisterCallback callback) {
  GetForwardingInterface()->Unregister(std::move(callback));
}
void ServiceWorkerRegistrationObjectHostInterceptorForTesting::EnableNavigationPreload(bool enable, EnableNavigationPreloadCallback callback) {
  GetForwardingInterface()->EnableNavigationPreload(std::move(enable), std::move(callback));
}
void ServiceWorkerRegistrationObjectHostInterceptorForTesting::GetNavigationPreloadState(GetNavigationPreloadStateCallback callback) {
  GetForwardingInterface()->GetNavigationPreloadState(std::move(callback));
}
void ServiceWorkerRegistrationObjectHostInterceptorForTesting::SetNavigationPreloadHeader(const WTF::String& value, SetNavigationPreloadHeaderCallback callback) {
  GetForwardingInterface()->SetNavigationPreloadHeader(std::move(value), std::move(callback));
}
ServiceWorkerRegistrationObjectHostAsyncWaiter::ServiceWorkerRegistrationObjectHostAsyncWaiter(
    ServiceWorkerRegistrationObjectHost* proxy) : proxy_(proxy) {}

ServiceWorkerRegistrationObjectHostAsyncWaiter::~ServiceWorkerRegistrationObjectHostAsyncWaiter() = default;

void ServiceWorkerRegistrationObjectHostAsyncWaiter::Update(
    ::blink::mojom::blink::ServiceWorkerErrorType* out_error, WTF::String* out_error_msg) {
  base::RunLoop loop;
  proxy_->Update(
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
void ServiceWorkerRegistrationObjectHostAsyncWaiter::Unregister(
    ::blink::mojom::blink::ServiceWorkerErrorType* out_error, WTF::String* out_error_msg) {
  base::RunLoop loop;
  proxy_->Unregister(
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
void ServiceWorkerRegistrationObjectHostAsyncWaiter::EnableNavigationPreload(
    bool enable, ::blink::mojom::blink::ServiceWorkerErrorType* out_error, WTF::String* out_error_msg) {
  base::RunLoop loop;
  proxy_->EnableNavigationPreload(std::move(enable),
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
void ServiceWorkerRegistrationObjectHostAsyncWaiter::GetNavigationPreloadState(
    ::blink::mojom::blink::ServiceWorkerErrorType* out_error, WTF::String* out_error_msg, ::blink::mojom::blink::NavigationPreloadStatePtr* out_state) {
  base::RunLoop loop;
  proxy_->GetNavigationPreloadState(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::blink::ServiceWorkerErrorType* out_error
,
             WTF::String* out_error_msg
,
             ::blink::mojom::blink::NavigationPreloadStatePtr* out_state
,
             ::blink::mojom::blink::ServiceWorkerErrorType error,
             const WTF::String& error_msg,
             ::blink::mojom::blink::NavigationPreloadStatePtr state) {*out_error = std::move(error);*out_error_msg = std::move(error_msg);*out_state = std::move(state);
            loop->Quit();
          },
          &loop,
          out_error,
          out_error_msg,
          out_state));
  loop.Run();
}
void ServiceWorkerRegistrationObjectHostAsyncWaiter::SetNavigationPreloadHeader(
    const WTF::String& value, ::blink::mojom::blink::ServiceWorkerErrorType* out_error, WTF::String* out_error_msg) {
  base::RunLoop loop;
  proxy_->SetNavigationPreloadHeader(std::move(value),
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

const char ServiceWorkerRegistrationObject::Name_[] = "blink.mojom.ServiceWorkerRegistrationObject";

ServiceWorkerRegistrationObjectProxy::ServiceWorkerRegistrationObjectProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerRegistrationObjectProxy::SetVersionAttributes(
    int32_t in_changed_mask, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr in_installing, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr in_waiting, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr in_active) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerRegistrationObject::SetVersionAttributes");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObject_SetVersionAttributes_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObject_SetVersionAttributes_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->changed_mask = in_changed_mask;
  typename decltype(params->installing)::BaseType::BufferWriter
      installing_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
      in_installing, buffer, &installing_writer, &serialization_context);
  params->installing.Set(
      installing_writer.is_null() ? nullptr : installing_writer.data());
  typename decltype(params->waiting)::BaseType::BufferWriter
      waiting_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
      in_waiting, buffer, &waiting_writer, &serialization_context);
  params->waiting.Set(
      waiting_writer.is_null() ? nullptr : waiting_writer.data());
  typename decltype(params->active)::BaseType::BufferWriter
      active_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
      in_active, buffer, &active_writer, &serialization_context);
  params->active.Set(
      active_writer.is_null() ? nullptr : active_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerRegistrationObjectProxy::SetUpdateViaCache(
    ServiceWorkerUpdateViaCache in_update_via_cache) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerRegistrationObject::SetUpdateViaCache");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObject_SetUpdateViaCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerUpdateViaCache>(
      in_update_via_cache, &params->update_via_cache);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerRegistrationObjectProxy::UpdateFound(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerRegistrationObject::UpdateFound");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerRegistrationObject_UpdateFound_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerRegistrationObject_UpdateFound_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ServiceWorkerRegistrationObjectStubDispatch::Accept(
    ServiceWorkerRegistrationObject* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerRegistrationObject_SetVersionAttributes_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObject::SetVersionAttributes",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerRegistrationObject_SetVersionAttributes_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerRegistrationObject_SetVersionAttributes_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_changed_mask{};
      ::blink::mojom::blink::ServiceWorkerObjectInfoPtr p_installing{};
      ::blink::mojom::blink::ServiceWorkerObjectInfoPtr p_waiting{};
      ::blink::mojom::blink::ServiceWorkerObjectInfoPtr p_active{};
      ServiceWorkerRegistrationObject_SetVersionAttributes_ParamsDataView input_data_view(params, &serialization_context);
      
      p_changed_mask = input_data_view.changed_mask();
      if (!input_data_view.ReadInstalling(&p_installing))
        success = false;
      if (!input_data_view.ReadWaiting(&p_waiting))
        success = false;
      if (!input_data_view.ReadActive(&p_active))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerRegistrationObject::SetVersionAttributes deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetVersionAttributes(
std::move(p_changed_mask), 
std::move(p_installing), 
std::move(p_waiting), 
std::move(p_active));
      return true;
    }
    case internal::kServiceWorkerRegistrationObject_SetUpdateViaCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObject::SetUpdateViaCache",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerUpdateViaCache p_update_via_cache{};
      ServiceWorkerRegistrationObject_SetUpdateViaCache_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUpdateViaCache(&p_update_via_cache))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerRegistrationObject::SetUpdateViaCache deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetUpdateViaCache(
std::move(p_update_via_cache));
      return true;
    }
    case internal::kServiceWorkerRegistrationObject_UpdateFound_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObject::UpdateFound",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerRegistrationObject_UpdateFound_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerRegistrationObject_UpdateFound_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerRegistrationObject_UpdateFound_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerRegistrationObject::UpdateFound deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpdateFound();
      return true;
    }
  }
  return false;
}

// static
bool ServiceWorkerRegistrationObjectStubDispatch::AcceptWithResponder(
    ServiceWorkerRegistrationObject* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerRegistrationObject_SetVersionAttributes_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObject::SetVersionAttributes",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerRegistrationObject_SetUpdateViaCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObject::SetUpdateViaCache",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerRegistrationObject_UpdateFound_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerRegistrationObject::UpdateFound",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ServiceWorkerRegistrationObjectRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerRegistrationObject RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerRegistrationObject_SetVersionAttributes_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObject_SetVersionAttributes_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObject_SetUpdateViaCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObject_SetUpdateViaCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerRegistrationObject_UpdateFound_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerRegistrationObject_UpdateFound_Params_Data>(
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

void ServiceWorkerRegistrationObjectInterceptorForTesting::SetVersionAttributes(int32_t changed_mask, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr installing, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr waiting, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr active) {
  GetForwardingInterface()->SetVersionAttributes(std::move(changed_mask), std::move(installing), std::move(waiting), std::move(active));
}
void ServiceWorkerRegistrationObjectInterceptorForTesting::SetUpdateViaCache(ServiceWorkerUpdateViaCache update_via_cache) {
  GetForwardingInterface()->SetUpdateViaCache(std::move(update_via_cache));
}
void ServiceWorkerRegistrationObjectInterceptorForTesting::UpdateFound() {
  GetForwardingInterface()->UpdateFound();
}
ServiceWorkerRegistrationObjectAsyncWaiter::ServiceWorkerRegistrationObjectAsyncWaiter(
    ServiceWorkerRegistrationObject* proxy) : proxy_(proxy) {}

ServiceWorkerRegistrationObjectAsyncWaiter::~ServiceWorkerRegistrationObjectAsyncWaiter() = default;


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::ServiceWorkerRegistrationOptions::DataView, ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr>::Read(
    ::blink::mojom::blink::ServiceWorkerRegistrationOptions::DataView input,
    ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr result(::blink::mojom::blink::ServiceWorkerRegistrationOptions::New());
  
      if (!input.ReadScope(&result->scope))
        success = false;
      if (!input.ReadUpdateViaCache(&result->update_via_cache))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::ServiceWorkerRegistrationObjectInfo::DataView, ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr>::Read(
    ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfo::DataView input,
    ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr result(::blink::mojom::blink::ServiceWorkerRegistrationObjectInfo::New());
  
      result->registration_id = input.registration_id();
      if (!input.ReadOptions(&result->options))
        success = false;
      result->host_ptr_info =
          input.TakeHostPtrInfo<decltype(result->host_ptr_info)>();
      result->request =
          input.TakeRequest<decltype(result->request)>();
      if (!input.ReadInstalling(&result->installing))
        success = false;
      if (!input.ReadWaiting(&result->waiting))
        success = false;
      if (!input.ReadActive(&result->active))
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