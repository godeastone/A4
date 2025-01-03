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

#include "third_party/blink/public/platform/modules/insecure_input/insecure_input_service.mojom-blink.h"

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

#include "third_party/blink/public/platform/modules/insecure_input/insecure_input_service.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace blink {
namespace mojom {
namespace blink {
const char InsecureInputService::Name_[] = "blink.mojom.InsecureInputService";

InsecureInputServiceProxy::InsecureInputServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void InsecureInputServiceProxy::PasswordFieldVisibleInInsecureContext(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::InsecureInputService::PasswordFieldVisibleInInsecureContext");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInsecureInputService_PasswordFieldVisibleInInsecureContext_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::InsecureInputService_PasswordFieldVisibleInInsecureContext_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InsecureInputServiceProxy::AllPasswordFieldsInInsecureContextInvisible(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::InsecureInputService::AllPasswordFieldsInInsecureContextInvisible");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InsecureInputServiceProxy::DidEditFieldInInsecureContext(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::InsecureInputService::DidEditFieldInInsecureContext");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInsecureInputService_DidEditFieldInInsecureContext_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::InsecureInputService_DidEditFieldInInsecureContext_Params_Data::BufferWriter
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
bool InsecureInputServiceStubDispatch::Accept(
    InsecureInputService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kInsecureInputService_PasswordFieldVisibleInInsecureContext_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::InsecureInputService::PasswordFieldVisibleInInsecureContext",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InsecureInputService_PasswordFieldVisibleInInsecureContext_Params_Data* params =
          reinterpret_cast<internal::InsecureInputService_PasswordFieldVisibleInInsecureContext_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InsecureInputService_PasswordFieldVisibleInInsecureContext_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InsecureInputService::PasswordFieldVisibleInInsecureContext deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PasswordFieldVisibleInInsecureContext();
      return true;
    }
    case internal::kInsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::InsecureInputService::AllPasswordFieldsInInsecureContextInvisible",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Params_Data* params =
          reinterpret_cast<internal::InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InsecureInputService::AllPasswordFieldsInInsecureContextInvisible deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AllPasswordFieldsInInsecureContextInvisible();
      return true;
    }
    case internal::kInsecureInputService_DidEditFieldInInsecureContext_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::InsecureInputService::DidEditFieldInInsecureContext",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InsecureInputService_DidEditFieldInInsecureContext_Params_Data* params =
          reinterpret_cast<internal::InsecureInputService_DidEditFieldInInsecureContext_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      InsecureInputService_DidEditFieldInInsecureContext_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InsecureInputService::DidEditFieldInInsecureContext deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidEditFieldInInsecureContext();
      return true;
    }
  }
  return false;
}

// static
bool InsecureInputServiceStubDispatch::AcceptWithResponder(
    InsecureInputService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kInsecureInputService_PasswordFieldVisibleInInsecureContext_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::InsecureInputService::PasswordFieldVisibleInInsecureContext",
               "message", message->name());
#endif
      break;
    }
    case internal::kInsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::InsecureInputService::AllPasswordFieldsInInsecureContextInvisible",
               "message", message->name());
#endif
      break;
    }
    case internal::kInsecureInputService_DidEditFieldInInsecureContext_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::InsecureInputService::DidEditFieldInInsecureContext",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool InsecureInputServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InsecureInputService RequestValidator");

  switch (message->header()->name) {
    case internal::kInsecureInputService_PasswordFieldVisibleInInsecureContext_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InsecureInputService_PasswordFieldVisibleInInsecureContext_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InsecureInputService_AllPasswordFieldsInInsecureContextInvisible_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInsecureInputService_DidEditFieldInInsecureContext_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InsecureInputService_DidEditFieldInInsecureContext_Params_Data>(
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

void InsecureInputServiceInterceptorForTesting::PasswordFieldVisibleInInsecureContext() {
  GetForwardingInterface()->PasswordFieldVisibleInInsecureContext();
}
void InsecureInputServiceInterceptorForTesting::AllPasswordFieldsInInsecureContextInvisible() {
  GetForwardingInterface()->AllPasswordFieldsInInsecureContextInvisible();
}
void InsecureInputServiceInterceptorForTesting::DidEditFieldInInsecureContext() {
  GetForwardingInterface()->DidEditFieldInInsecureContext();
}
InsecureInputServiceAsyncWaiter::InsecureInputServiceAsyncWaiter(
    InsecureInputService* proxy) : proxy_(proxy) {}

InsecureInputServiceAsyncWaiter::~InsecureInputServiceAsyncWaiter() = default;


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