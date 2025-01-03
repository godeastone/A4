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

#include "content/common/service_worker/service_worker_fetch_response_callback.mojom.h"

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

#include "content/common/service_worker/service_worker_fetch_response_callback.mojom-shared-message-ids.h"
#include "content/common/platform_notification_messages.h"
#include "content/common/service_worker/service_worker_messages.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
namespace content {
namespace mojom {
const char ServiceWorkerFetchResponseCallback::Name_[] = "content.mojom.ServiceWorkerFetchResponseCallback";

class ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ForwardToCallback(
      ServiceWorkerFetchResponseCallback::OnResponseLegacyBlobCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerFetchResponseCallback::OnResponseLegacyBlobCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ForwardToCallback);
};

ServiceWorkerFetchResponseCallbackProxy::ServiceWorkerFetchResponseCallbackProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerFetchResponseCallbackProxy::OnResponse(
    const ::content::ServiceWorkerResponse& in_response, base::Time in_dispatch_event_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerFetchResponseCallback::OnResponse");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerFetchResponseCallback_OnResponse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerFetchResponseCallback_OnResponse_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->response)::BaseType::BufferWriter
      response_writer;
  mojo::internal::Serialize<::content::mojom::ServiceWorkerResponseDataView>(
      in_response, buffer, &response_writer, &serialization_context);
  params->response.Set(
      response_writer.is_null() ? nullptr : response_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in ServiceWorkerFetchResponseCallback.OnResponse request");
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ServiceWorkerFetchResponseCallback.OnResponse request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerFetchResponseCallbackProxy::OnResponseBlob(
    const ::content::ServiceWorkerResponse& in_response, ::blink::mojom::BlobPtr in_body_as_blob, base::Time in_dispatch_event_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerFetchResponseCallback::OnResponseBlob");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerFetchResponseCallback_OnResponseBlob_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerFetchResponseCallback_OnResponseBlob_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->response)::BaseType::BufferWriter
      response_writer;
  mojo::internal::Serialize<::content::mojom::ServiceWorkerResponseDataView>(
      in_response, buffer, &response_writer, &serialization_context);
  params->response.Set(
      response_writer.is_null() ? nullptr : response_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in ServiceWorkerFetchResponseCallback.OnResponseBlob request");
  mojo::internal::Serialize<::blink::mojom::BlobPtrDataView>(
      in_body_as_blob, &params->body_as_blob, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->body_as_blob),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid body_as_blob in ServiceWorkerFetchResponseCallback.OnResponseBlob request");
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ServiceWorkerFetchResponseCallback.OnResponseBlob request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerFetchResponseCallbackProxy::OnResponseLegacyBlob(
    const ::content::ServiceWorkerResponse& in_response, base::Time in_dispatch_event_time, OnResponseLegacyBlobCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerFetchResponseCallback::OnResponseLegacyBlob");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->response)::BaseType::BufferWriter
      response_writer;
  mojo::internal::Serialize<::content::mojom::ServiceWorkerResponseDataView>(
      in_response, buffer, &response_writer, &serialization_context);
  params->response.Set(
      response_writer.is_null() ? nullptr : response_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in ServiceWorkerFetchResponseCallback.OnResponseLegacyBlob request");
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ServiceWorkerFetchResponseCallback.OnResponseLegacyBlob request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ServiceWorkerFetchResponseCallbackProxy::OnResponseStream(
    const ::content::ServiceWorkerResponse& in_response, ::blink::mojom::ServiceWorkerStreamHandlePtr in_body_as_stream, base::Time in_dispatch_event_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerFetchResponseCallback::OnResponseStream");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerFetchResponseCallback_OnResponseStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->response)::BaseType::BufferWriter
      response_writer;
  mojo::internal::Serialize<::content::mojom::ServiceWorkerResponseDataView>(
      in_response, buffer, &response_writer, &serialization_context);
  params->response.Set(
      response_writer.is_null() ? nullptr : response_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in ServiceWorkerFetchResponseCallback.OnResponseStream request");
  typename decltype(params->body_as_stream)::BaseType::BufferWriter
      body_as_stream_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerStreamHandleDataView>(
      in_body_as_stream, buffer, &body_as_stream_writer, &serialization_context);
  params->body_as_stream.Set(
      body_as_stream_writer.is_null() ? nullptr : body_as_stream_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->body_as_stream.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null body_as_stream in ServiceWorkerFetchResponseCallback.OnResponseStream request");
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ServiceWorkerFetchResponseCallback.OnResponseStream request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerFetchResponseCallbackProxy::OnFallback(
    base::Time in_dispatch_event_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerFetchResponseCallback::OnFallback");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerFetchResponseCallback_OnFallback_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerFetchResponseCallback_OnFallback_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->dispatch_event_time)::BaseType::BufferWriter
      dispatch_event_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_dispatch_event_time, buffer, &dispatch_event_time_writer, &serialization_context);
  params->dispatch_event_time.Set(
      dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dispatch_event_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dispatch_event_time in ServiceWorkerFetchResponseCallback.OnFallback request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ProxyToResponder {
 public:
  static ServiceWorkerFetchResponseCallback::OnResponseLegacyBlobCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ProxyToResponder> proxy(
        new ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ProxyToResponder() {
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
  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ProxyToResponder(
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
        << "ServiceWorkerFetchResponseCallback::OnResponseLegacyBlobCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ProxyToResponder);
};

bool ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ServiceWorkerFetchResponseCallback::OnResponseLegacyBlobCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ServiceWorkerFetchResponseCallback::OnResponseLegacyBlob response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerFetchResponseCallback::OnResponseLegacyBlobCallback",
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
bool ServiceWorkerFetchResponseCallbackStubDispatch::Accept(
    ServiceWorkerFetchResponseCallback* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerFetchResponseCallback_OnResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerFetchResponseCallback::OnResponse",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerFetchResponseCallback_OnResponse_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerFetchResponseCallback_OnResponse_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::content::ServiceWorkerResponse p_response{};
      base::Time p_dispatch_event_time{};
      ServiceWorkerFetchResponseCallback_OnResponse_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResponse(&p_response))
        success = false;
      if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerFetchResponseCallback::OnResponse deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnResponse(
std::move(p_response), 
std::move(p_dispatch_event_time));
      return true;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnResponseBlob_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerFetchResponseCallback::OnResponseBlob",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerFetchResponseCallback_OnResponseBlob_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerFetchResponseCallback_OnResponseBlob_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::content::ServiceWorkerResponse p_response{};
      ::blink::mojom::BlobPtr p_body_as_blob{};
      base::Time p_dispatch_event_time{};
      ServiceWorkerFetchResponseCallback_OnResponseBlob_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResponse(&p_response))
        success = false;
      p_body_as_blob =
          input_data_view.TakeBodyAsBlob<decltype(p_body_as_blob)>();
      if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerFetchResponseCallback::OnResponseBlob deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnResponseBlob(
std::move(p_response), 
std::move(p_body_as_blob), 
std::move(p_dispatch_event_time));
      return true;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerFetchResponseCallback::OnResponseLegacyBlob",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnResponseStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerFetchResponseCallback::OnResponseStream",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::content::ServiceWorkerResponse p_response{};
      ::blink::mojom::ServiceWorkerStreamHandlePtr p_body_as_stream{};
      base::Time p_dispatch_event_time{};
      ServiceWorkerFetchResponseCallback_OnResponseStream_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResponse(&p_response))
        success = false;
      if (!input_data_view.ReadBodyAsStream(&p_body_as_stream))
        success = false;
      if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerFetchResponseCallback::OnResponseStream deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnResponseStream(
std::move(p_response), 
std::move(p_body_as_stream), 
std::move(p_dispatch_event_time));
      return true;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnFallback_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerFetchResponseCallback::OnFallback",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerFetchResponseCallback_OnFallback_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerFetchResponseCallback_OnFallback_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Time p_dispatch_event_time{};
      ServiceWorkerFetchResponseCallback_OnFallback_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerFetchResponseCallback::OnFallback deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnFallback(
std::move(p_dispatch_event_time));
      return true;
    }
  }
  return false;
}

// static
bool ServiceWorkerFetchResponseCallbackStubDispatch::AcceptWithResponder(
    ServiceWorkerFetchResponseCallback* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerFetchResponseCallback_OnResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerFetchResponseCallback::OnResponse",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnResponseBlob_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerFetchResponseCallback::OnResponseBlob",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerFetchResponseCallback::OnResponseLegacyBlob",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::content::ServiceWorkerResponse p_response{};
      base::Time p_dispatch_event_time{};
      ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResponse(&p_response))
        success = false;
      if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerFetchResponseCallback::OnResponseLegacyBlob deserializer");
        return false;
      }
      ServiceWorkerFetchResponseCallback::OnResponseLegacyBlobCallback callback =
          ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnResponseLegacyBlob(
std::move(p_response), 
std::move(p_dispatch_event_time), std::move(callback));
      return true;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnResponseStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerFetchResponseCallback::OnResponseStream",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnFallback_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerFetchResponseCallback::OnFallback",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ServiceWorkerFetchResponseCallbackRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerFetchResponseCallback RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerFetchResponseCallback_OnResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerFetchResponseCallback_OnResponse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnResponseBlob_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerFetchResponseCallback_OnResponseBlob_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnResponseStream_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnFallback_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerFetchResponseCallback_OnFallback_Params_Data>(
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

bool ServiceWorkerFetchResponseCallbackResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerFetchResponseCallback ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerFetchResponseCallback_OnResponseLegacyBlob_ResponseParams_Data>(
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
void ServiceWorkerFetchResponseCallbackInterceptorForTesting::OnResponse(const ::content::ServiceWorkerResponse& response, base::Time dispatch_event_time) {
  GetForwardingInterface()->OnResponse(std::move(response), std::move(dispatch_event_time));
}
void ServiceWorkerFetchResponseCallbackInterceptorForTesting::OnResponseBlob(const ::content::ServiceWorkerResponse& response, ::blink::mojom::BlobPtr body_as_blob, base::Time dispatch_event_time) {
  GetForwardingInterface()->OnResponseBlob(std::move(response), std::move(body_as_blob), std::move(dispatch_event_time));
}
void ServiceWorkerFetchResponseCallbackInterceptorForTesting::OnResponseLegacyBlob(const ::content::ServiceWorkerResponse& response, base::Time dispatch_event_time, OnResponseLegacyBlobCallback callback) {
  GetForwardingInterface()->OnResponseLegacyBlob(std::move(response), std::move(dispatch_event_time), std::move(callback));
}
void ServiceWorkerFetchResponseCallbackInterceptorForTesting::OnResponseStream(const ::content::ServiceWorkerResponse& response, ::blink::mojom::ServiceWorkerStreamHandlePtr body_as_stream, base::Time dispatch_event_time) {
  GetForwardingInterface()->OnResponseStream(std::move(response), std::move(body_as_stream), std::move(dispatch_event_time));
}
void ServiceWorkerFetchResponseCallbackInterceptorForTesting::OnFallback(base::Time dispatch_event_time) {
  GetForwardingInterface()->OnFallback(std::move(dispatch_event_time));
}
ServiceWorkerFetchResponseCallbackAsyncWaiter::ServiceWorkerFetchResponseCallbackAsyncWaiter(
    ServiceWorkerFetchResponseCallback* proxy) : proxy_(proxy) {}

ServiceWorkerFetchResponseCallbackAsyncWaiter::~ServiceWorkerFetchResponseCallbackAsyncWaiter() = default;

void ServiceWorkerFetchResponseCallbackAsyncWaiter::OnResponseLegacyBlob(
    const ::content::ServiceWorkerResponse& response, base::Time dispatch_event_time) {
  base::RunLoop loop;
  proxy_->OnResponseLegacyBlob(std::move(response),std::move(dispatch_event_time),
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

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif