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

#include "content/common/memory_coordinator.mojom.h"

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

#include "content/common/memory_coordinator.mojom-shared-message-ids.h"
namespace content {
namespace mojom {
const char MemoryCoordinatorHandle::Name_[] = "content.mojom.MemoryCoordinatorHandle";

MemoryCoordinatorHandleProxy::MemoryCoordinatorHandleProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MemoryCoordinatorHandleProxy::AddChild(
    ::content::mojom::ChildMemoryCoordinatorPtr in_child) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::MemoryCoordinatorHandle::AddChild");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMemoryCoordinatorHandle_AddChild_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::MemoryCoordinatorHandle_AddChild_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::content::mojom::ChildMemoryCoordinatorPtrDataView>(
      in_child, &params->child, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->child),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid child in MemoryCoordinatorHandle.AddChild request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool MemoryCoordinatorHandleStubDispatch::Accept(
    MemoryCoordinatorHandle* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMemoryCoordinatorHandle_AddChild_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::MemoryCoordinatorHandle::AddChild",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MemoryCoordinatorHandle_AddChild_Params_Data* params =
          reinterpret_cast<internal::MemoryCoordinatorHandle_AddChild_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::content::mojom::ChildMemoryCoordinatorPtr p_child{};
      MemoryCoordinatorHandle_AddChild_ParamsDataView input_data_view(params, &serialization_context);
      
      p_child =
          input_data_view.TakeChild<decltype(p_child)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MemoryCoordinatorHandle::AddChild deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddChild(
std::move(p_child));
      return true;
    }
  }
  return false;
}

// static
bool MemoryCoordinatorHandleStubDispatch::AcceptWithResponder(
    MemoryCoordinatorHandle* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMemoryCoordinatorHandle_AddChild_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::MemoryCoordinatorHandle::AddChild",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool MemoryCoordinatorHandleRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MemoryCoordinatorHandle RequestValidator");

  switch (message->header()->name) {
    case internal::kMemoryCoordinatorHandle_AddChild_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MemoryCoordinatorHandle_AddChild_Params_Data>(
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

void MemoryCoordinatorHandleInterceptorForTesting::AddChild(::content::mojom::ChildMemoryCoordinatorPtr child) {
  GetForwardingInterface()->AddChild(std::move(child));
}
MemoryCoordinatorHandleAsyncWaiter::MemoryCoordinatorHandleAsyncWaiter(
    MemoryCoordinatorHandle* proxy) : proxy_(proxy) {}

MemoryCoordinatorHandleAsyncWaiter::~MemoryCoordinatorHandleAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif