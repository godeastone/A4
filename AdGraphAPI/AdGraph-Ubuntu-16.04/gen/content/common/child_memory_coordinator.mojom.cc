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

#include "content/common/child_memory_coordinator.mojom.h"

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

#include "content/common/child_memory_coordinator.mojom-shared-message-ids.h"
namespace content {
namespace mojom {
const char ChildMemoryCoordinator::Name_[] = "content.mojom.ChildMemoryCoordinator";

ChildMemoryCoordinatorProxy::ChildMemoryCoordinatorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ChildMemoryCoordinatorProxy::OnStateChange(
    MemoryState in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ChildMemoryCoordinator::OnStateChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChildMemoryCoordinator_OnStateChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ChildMemoryCoordinator_OnStateChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::content::mojom::MemoryState>(
      in_state, &params->state);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ChildMemoryCoordinatorProxy::PurgeMemory(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ChildMemoryCoordinator::PurgeMemory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChildMemoryCoordinator_PurgeMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ChildMemoryCoordinator_PurgeMemory_Params_Data::BufferWriter
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
bool ChildMemoryCoordinatorStubDispatch::Accept(
    ChildMemoryCoordinator* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kChildMemoryCoordinator_OnStateChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ChildMemoryCoordinator::OnStateChange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ChildMemoryCoordinator_OnStateChange_Params_Data* params =
          reinterpret_cast<internal::ChildMemoryCoordinator_OnStateChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MemoryState p_state{};
      ChildMemoryCoordinator_OnStateChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ChildMemoryCoordinator::OnStateChange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnStateChange(
std::move(p_state));
      return true;
    }
    case internal::kChildMemoryCoordinator_PurgeMemory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ChildMemoryCoordinator::PurgeMemory",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ChildMemoryCoordinator_PurgeMemory_Params_Data* params =
          reinterpret_cast<internal::ChildMemoryCoordinator_PurgeMemory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ChildMemoryCoordinator_PurgeMemory_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ChildMemoryCoordinator::PurgeMemory deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PurgeMemory();
      return true;
    }
  }
  return false;
}

// static
bool ChildMemoryCoordinatorStubDispatch::AcceptWithResponder(
    ChildMemoryCoordinator* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kChildMemoryCoordinator_OnStateChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ChildMemoryCoordinator::OnStateChange",
               "message", message->name());
#endif
      break;
    }
    case internal::kChildMemoryCoordinator_PurgeMemory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ChildMemoryCoordinator::PurgeMemory",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ChildMemoryCoordinatorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ChildMemoryCoordinator RequestValidator");

  switch (message->header()->name) {
    case internal::kChildMemoryCoordinator_OnStateChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChildMemoryCoordinator_OnStateChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kChildMemoryCoordinator_PurgeMemory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChildMemoryCoordinator_PurgeMemory_Params_Data>(
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

void ChildMemoryCoordinatorInterceptorForTesting::OnStateChange(MemoryState state) {
  GetForwardingInterface()->OnStateChange(std::move(state));
}
void ChildMemoryCoordinatorInterceptorForTesting::PurgeMemory() {
  GetForwardingInterface()->PurgeMemory();
}
ChildMemoryCoordinatorAsyncWaiter::ChildMemoryCoordinatorAsyncWaiter(
    ChildMemoryCoordinator* proxy) : proxy_(proxy) {}

ChildMemoryCoordinatorAsyncWaiter::~ChildMemoryCoordinatorAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif