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

#include "content/common/service_worker/controller_service_worker.mojom.h"

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

#include "content/common/service_worker/controller_service_worker.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/url_request_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace content {
namespace mojom {
ControllerServiceWorkerInfo::ControllerServiceWorkerInfo()
    : endpoint(),
      client_id(),
      object_info() {}

ControllerServiceWorkerInfo::ControllerServiceWorkerInfo(
    ControllerServiceWorkerPtrInfo endpoint_in,
    const std::string& client_id_in,
    ::blink::mojom::ServiceWorkerObjectInfoPtr object_info_in)
    : endpoint(std::move(endpoint_in)),
      client_id(std::move(client_id_in)),
      object_info(std::move(object_info_in)) {}

ControllerServiceWorkerInfo::~ControllerServiceWorkerInfo() = default;

bool ControllerServiceWorkerInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ControllerServiceWorker::Name_[] = "content.mojom.ControllerServiceWorker";

class ControllerServiceWorker_DispatchFetchEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ControllerServiceWorker_DispatchFetchEvent_ForwardToCallback(
      ControllerServiceWorker::DispatchFetchEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ControllerServiceWorker::DispatchFetchEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ControllerServiceWorker_DispatchFetchEvent_ForwardToCallback);
};

ControllerServiceWorkerProxy::ControllerServiceWorkerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ControllerServiceWorkerProxy::DispatchFetchEvent(
    ::content::mojom::DispatchFetchEventParamsPtr in_params, ::content::mojom::ServiceWorkerFetchResponseCallbackPtr in_response_callback, DispatchFetchEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ControllerServiceWorker::DispatchFetchEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kControllerServiceWorker_DispatchFetchEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ControllerServiceWorker_DispatchFetchEvent_Params_Data::BufferWriter
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
      "null params in ControllerServiceWorker.DispatchFetchEvent request");
  mojo::internal::Serialize<::content::mojom::ServiceWorkerFetchResponseCallbackPtrDataView>(
      in_response_callback, &params->response_callback, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->response_callback),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid response_callback in ControllerServiceWorker.DispatchFetchEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ControllerServiceWorker_DispatchFetchEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ControllerServiceWorkerProxy::Clone(
    ControllerServiceWorkerRequest in_controller) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ControllerServiceWorker::Clone");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kControllerServiceWorker_Clone_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ControllerServiceWorker_Clone_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::content::mojom::ControllerServiceWorkerRequestDataView>(
      in_controller, &params->controller, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->controller),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid controller in ControllerServiceWorker.Clone request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder {
 public:
  static ControllerServiceWorker::DispatchFetchEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder> proxy(
        new ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder() {
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
  ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder(
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
        << "ControllerServiceWorker::DispatchFetchEventCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder);
};

bool ControllerServiceWorker_DispatchFetchEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::ControllerServiceWorker::DispatchFetchEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  base::Time p_dispatch_event_time{};
  ControllerServiceWorker_DispatchFetchEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadDispatchEventTime(&p_dispatch_event_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ControllerServiceWorker::DispatchFetchEvent response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_dispatch_event_time));
  return true;
}

void ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status, base::Time in_dispatch_event_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kControllerServiceWorker_DispatchFetchEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ControllerServiceWorker::DispatchFetchEventCallback",
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
bool ControllerServiceWorkerStubDispatch::Accept(
    ControllerServiceWorker* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kControllerServiceWorker_DispatchFetchEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ControllerServiceWorker::DispatchFetchEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kControllerServiceWorker_Clone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ControllerServiceWorker::Clone",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ControllerServiceWorker_Clone_Params_Data* params =
          reinterpret_cast<internal::ControllerServiceWorker_Clone_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ControllerServiceWorkerRequest p_controller{};
      ControllerServiceWorker_Clone_ParamsDataView input_data_view(params, &serialization_context);
      
      p_controller =
          input_data_view.TakeController<decltype(p_controller)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ControllerServiceWorker::Clone deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Clone(
std::move(p_controller));
      return true;
    }
  }
  return false;
}

// static
bool ControllerServiceWorkerStubDispatch::AcceptWithResponder(
    ControllerServiceWorker* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kControllerServiceWorker_DispatchFetchEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ControllerServiceWorker::DispatchFetchEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::ControllerServiceWorker_DispatchFetchEvent_Params_Data* params =
          reinterpret_cast<
              internal::ControllerServiceWorker_DispatchFetchEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::content::mojom::DispatchFetchEventParamsPtr p_params{};
      ::content::mojom::ServiceWorkerFetchResponseCallbackPtr p_response_callback{};
      ControllerServiceWorker_DispatchFetchEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      p_response_callback =
          input_data_view.TakeResponseCallback<decltype(p_response_callback)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ControllerServiceWorker::DispatchFetchEvent deserializer");
        return false;
      }
      ControllerServiceWorker::DispatchFetchEventCallback callback =
          ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder::CreateCallback(
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
    case internal::kControllerServiceWorker_Clone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ControllerServiceWorker::Clone",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ControllerServiceWorkerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ControllerServiceWorker RequestValidator");

  switch (message->header()->name) {
    case internal::kControllerServiceWorker_DispatchFetchEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ControllerServiceWorker_DispatchFetchEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kControllerServiceWorker_Clone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ControllerServiceWorker_Clone_Params_Data>(
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

bool ControllerServiceWorkerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ControllerServiceWorker ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kControllerServiceWorker_DispatchFetchEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data>(
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
void ControllerServiceWorkerInterceptorForTesting::DispatchFetchEvent(::content::mojom::DispatchFetchEventParamsPtr params, ::content::mojom::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) {
  GetForwardingInterface()->DispatchFetchEvent(std::move(params), std::move(response_callback), std::move(callback));
}
void ControllerServiceWorkerInterceptorForTesting::Clone(ControllerServiceWorkerRequest controller) {
  GetForwardingInterface()->Clone(std::move(controller));
}
ControllerServiceWorkerAsyncWaiter::ControllerServiceWorkerAsyncWaiter(
    ControllerServiceWorker* proxy) : proxy_(proxy) {}

ControllerServiceWorkerAsyncWaiter::~ControllerServiceWorkerAsyncWaiter() = default;

void ControllerServiceWorkerAsyncWaiter::DispatchFetchEvent(
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

}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::ControllerServiceWorkerInfo::DataView, ::content::mojom::ControllerServiceWorkerInfoPtr>::Read(
    ::content::mojom::ControllerServiceWorkerInfo::DataView input,
    ::content::mojom::ControllerServiceWorkerInfoPtr* output) {
  bool success = true;
  ::content::mojom::ControllerServiceWorkerInfoPtr result(::content::mojom::ControllerServiceWorkerInfo::New());
  
      result->endpoint =
          input.TakeEndpoint<decltype(result->endpoint)>();
      if (!input.ReadClientId(&result->client_id))
        success = false;
      if (!input.ReadObjectInfo(&result->object_info))
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