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

#include "extensions/common/mojo/app_window.mojom.h"

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

#include "extensions/common/mojo/app_window.mojom-shared-message-ids.h"
namespace extensions {
namespace mojom {
const char AppWindow::Name_[] = "extensions.mojom.AppWindow";

AppWindowProxy::AppWindowProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AppWindowProxy::SetVisuallyDeemphasized(
    bool in_deemphasized) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "extensions::mojom::AppWindow::SetVisuallyDeemphasized");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAppWindow_SetVisuallyDeemphasized_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::extensions::mojom::internal::AppWindow_SetVisuallyDeemphasized_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->deemphasized = in_deemphasized;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AppWindowStubDispatch::Accept(
    AppWindow* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAppWindow_SetVisuallyDeemphasized_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)extensions::mojom::AppWindow::SetVisuallyDeemphasized",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AppWindow_SetVisuallyDeemphasized_Params_Data* params =
          reinterpret_cast<internal::AppWindow_SetVisuallyDeemphasized_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_deemphasized{};
      AppWindow_SetVisuallyDeemphasized_ParamsDataView input_data_view(params, &serialization_context);
      
      p_deemphasized = input_data_view.deemphasized();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AppWindow::SetVisuallyDeemphasized deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetVisuallyDeemphasized(
std::move(p_deemphasized));
      return true;
    }
  }
  return false;
}

// static
bool AppWindowStubDispatch::AcceptWithResponder(
    AppWindow* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAppWindow_SetVisuallyDeemphasized_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)extensions::mojom::AppWindow::SetVisuallyDeemphasized",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool AppWindowRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AppWindow RequestValidator");

  switch (message->header()->name) {
    case internal::kAppWindow_SetVisuallyDeemphasized_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AppWindow_SetVisuallyDeemphasized_Params_Data>(
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

void AppWindowInterceptorForTesting::SetVisuallyDeemphasized(bool deemphasized) {
  GetForwardingInterface()->SetVisuallyDeemphasized(std::move(deemphasized));
}
AppWindowAsyncWaiter::AppWindowAsyncWaiter(
    AppWindow* proxy) : proxy_(proxy) {}

AppWindowAsyncWaiter::~AppWindowAsyncWaiter() = default;


}  // namespace mojom
}  // namespace extensions

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif