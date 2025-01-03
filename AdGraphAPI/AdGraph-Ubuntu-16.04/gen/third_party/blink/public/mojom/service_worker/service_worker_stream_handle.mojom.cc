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

#include "third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom.h"

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

#include "third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom-shared-message-ids.h"
namespace blink {
namespace mojom {
ServiceWorkerStreamHandle::ServiceWorkerStreamHandle()
    : stream(),
      callback_request() {}

ServiceWorkerStreamHandle::ServiceWorkerStreamHandle(
    mojo::ScopedDataPipeConsumerHandle stream_in,
    ServiceWorkerStreamCallbackRequest callback_request_in)
    : stream(std::move(stream_in)),
      callback_request(std::move(callback_request_in)) {}

ServiceWorkerStreamHandle::~ServiceWorkerStreamHandle() = default;

bool ServiceWorkerStreamHandle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ServiceWorkerStreamCallback::Name_[] = "blink.mojom.ServiceWorkerStreamCallback";

ServiceWorkerStreamCallbackProxy::ServiceWorkerStreamCallbackProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerStreamCallbackProxy::OnCompleted(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerStreamCallback::OnCompleted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerStreamCallback_OnCompleted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerStreamCallback_OnCompleted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerStreamCallbackProxy::OnAborted(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::ServiceWorkerStreamCallback::OnAborted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerStreamCallback_OnAborted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerStreamCallback_OnAborted_Params_Data::BufferWriter
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
bool ServiceWorkerStreamCallbackStubDispatch::Accept(
    ServiceWorkerStreamCallback* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerStreamCallback_OnCompleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerStreamCallback::OnCompleted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerStreamCallback_OnCompleted_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerStreamCallback_OnCompleted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerStreamCallback_OnCompleted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerStreamCallback::OnCompleted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnCompleted();
      return true;
    }
    case internal::kServiceWorkerStreamCallback_OnAborted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerStreamCallback::OnAborted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerStreamCallback_OnAborted_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerStreamCallback_OnAborted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerStreamCallback_OnAborted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerStreamCallback::OnAborted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnAborted();
      return true;
    }
  }
  return false;
}

// static
bool ServiceWorkerStreamCallbackStubDispatch::AcceptWithResponder(
    ServiceWorkerStreamCallback* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerStreamCallback_OnCompleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerStreamCallback::OnCompleted",
               "message", message->name());
#endif
      break;
    }
    case internal::kServiceWorkerStreamCallback_OnAborted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::ServiceWorkerStreamCallback::OnAborted",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ServiceWorkerStreamCallbackRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerStreamCallback RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerStreamCallback_OnCompleted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerStreamCallback_OnCompleted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerStreamCallback_OnAborted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerStreamCallback_OnAborted_Params_Data>(
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

void ServiceWorkerStreamCallbackInterceptorForTesting::OnCompleted() {
  GetForwardingInterface()->OnCompleted();
}
void ServiceWorkerStreamCallbackInterceptorForTesting::OnAborted() {
  GetForwardingInterface()->OnAborted();
}
ServiceWorkerStreamCallbackAsyncWaiter::ServiceWorkerStreamCallbackAsyncWaiter(
    ServiceWorkerStreamCallback* proxy) : proxy_(proxy) {}

ServiceWorkerStreamCallbackAsyncWaiter::~ServiceWorkerStreamCallbackAsyncWaiter() = default;


}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::ServiceWorkerStreamHandle::DataView, ::blink::mojom::ServiceWorkerStreamHandlePtr>::Read(
    ::blink::mojom::ServiceWorkerStreamHandle::DataView input,
    ::blink::mojom::ServiceWorkerStreamHandlePtr* output) {
  bool success = true;
  ::blink::mojom::ServiceWorkerStreamHandlePtr result(::blink::mojom::ServiceWorkerStreamHandle::New());
  
      result->stream = input.TakeStream();
      result->callback_request =
          input.TakeCallbackRequest<decltype(result->callback_request)>();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif