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

#include "content/common/widget.mojom.h"

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

#include "content/common/widget.mojom-shared-message-ids.h"
namespace content {
namespace mojom {
const char Widget::Name_[] = "content.mojom.Widget";

WidgetProxy::WidgetProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WidgetProxy::SetupWidgetInputHandler(
    ::content::mojom::WidgetInputHandlerRequest in_request, ::content::mojom::WidgetInputHandlerHostPtr in_host) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::Widget::SetupWidgetInputHandler");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWidget_SetupWidgetInputHandler_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::Widget_SetupWidgetInputHandler_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::content::mojom::WidgetInputHandlerRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in Widget.SetupWidgetInputHandler request");
  mojo::internal::Serialize<::content::mojom::WidgetInputHandlerHostPtrDataView>(
      in_host, &params->host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid host in Widget.SetupWidgetInputHandler request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WidgetStubDispatch::Accept(
    Widget* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWidget_SetupWidgetInputHandler_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Widget::SetupWidgetInputHandler",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Widget_SetupWidgetInputHandler_Params_Data* params =
          reinterpret_cast<internal::Widget_SetupWidgetInputHandler_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::content::mojom::WidgetInputHandlerRequest p_request{};
      ::content::mojom::WidgetInputHandlerHostPtr p_host{};
      Widget_SetupWidgetInputHandler_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      p_host =
          input_data_view.TakeHost<decltype(p_host)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Widget::SetupWidgetInputHandler deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetupWidgetInputHandler(
std::move(p_request), 
std::move(p_host));
      return true;
    }
  }
  return false;
}

// static
bool WidgetStubDispatch::AcceptWithResponder(
    Widget* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWidget_SetupWidgetInputHandler_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::Widget::SetupWidgetInputHandler",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool WidgetRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Widget RequestValidator");

  switch (message->header()->name) {
    case internal::kWidget_SetupWidgetInputHandler_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Widget_SetupWidgetInputHandler_Params_Data>(
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

void WidgetInterceptorForTesting::SetupWidgetInputHandler(::content::mojom::WidgetInputHandlerRequest request, ::content::mojom::WidgetInputHandlerHostPtr host) {
  GetForwardingInterface()->SetupWidgetInputHandler(std::move(request), std::move(host));
}
WidgetAsyncWaiter::WidgetAsyncWaiter(
    Widget* proxy) : proxy_(proxy) {}

WidgetAsyncWaiter::~WidgetAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif