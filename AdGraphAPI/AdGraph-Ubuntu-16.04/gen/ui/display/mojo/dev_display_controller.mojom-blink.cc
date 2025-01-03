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

#include "ui/display/mojo/dev_display_controller.mojom-blink.h"

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

#include "ui/display/mojo/dev_display_controller.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace display {
namespace mojom {
namespace blink {
const char DevDisplayController::Name_[] = "display.mojom.DevDisplayController";

DevDisplayControllerProxy::DevDisplayControllerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DevDisplayControllerProxy::ToggleAddRemoveDisplay(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "display::mojom::DevDisplayController::ToggleAddRemoveDisplay");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevDisplayController_ToggleAddRemoveDisplay_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::display::mojom::internal::DevDisplayController_ToggleAddRemoveDisplay_Params_Data::BufferWriter
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
bool DevDisplayControllerStubDispatch::Accept(
    DevDisplayController* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDevDisplayController_ToggleAddRemoveDisplay_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DevDisplayController::ToggleAddRemoveDisplay",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DevDisplayController_ToggleAddRemoveDisplay_Params_Data* params =
          reinterpret_cast<internal::DevDisplayController_ToggleAddRemoveDisplay_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DevDisplayController_ToggleAddRemoveDisplay_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DevDisplayController::ToggleAddRemoveDisplay deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ToggleAddRemoveDisplay();
      return true;
    }
  }
  return false;
}

// static
bool DevDisplayControllerStubDispatch::AcceptWithResponder(
    DevDisplayController* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDevDisplayController_ToggleAddRemoveDisplay_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)display::mojom::DevDisplayController::ToggleAddRemoveDisplay",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool DevDisplayControllerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DevDisplayController RequestValidator");

  switch (message->header()->name) {
    case internal::kDevDisplayController_ToggleAddRemoveDisplay_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DevDisplayController_ToggleAddRemoveDisplay_Params_Data>(
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

void DevDisplayControllerInterceptorForTesting::ToggleAddRemoveDisplay() {
  GetForwardingInterface()->ToggleAddRemoveDisplay();
}
DevDisplayControllerAsyncWaiter::DevDisplayControllerAsyncWaiter(
    DevDisplayController* proxy) : proxy_(proxy) {}

DevDisplayControllerAsyncWaiter::~DevDisplayControllerAsyncWaiter() = default;


}  // namespace blink
}  // namespace mojom
}  // namespace display

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif