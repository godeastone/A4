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

#include "services/service_manager/public/mojom/interface_provider.mojom.h"

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

#include "services/service_manager/public/mojom/interface_provider.mojom-shared-message-ids.h"
namespace service_manager {
namespace mojom {
const char InterfaceProvider::Name_[] = "service_manager.mojom.InterfaceProvider";

InterfaceProviderProxy::InterfaceProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void InterfaceProviderProxy::GetInterface(
    const std::string& in_interface_name, mojo::ScopedMessagePipeHandle in_pipe) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "service_manager::mojom::InterfaceProvider::GetInterface");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterfaceProvider_GetInterface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::InterfaceProvider_GetInterface_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->interface_name)::BaseType::BufferWriter
      interface_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_interface_name, buffer, &interface_name_writer, &serialization_context);
  params->interface_name.Set(
      interface_name_writer.is_null() ? nullptr : interface_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->interface_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null interface_name in InterfaceProvider.GetInterface request");
  mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
      in_pipe, &params->pipe, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid pipe in InterfaceProvider.GetInterface request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool InterfaceProviderStubDispatch::Accept(
    InterfaceProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kInterfaceProvider_GetInterface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::InterfaceProvider::GetInterface",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterfaceProvider_GetInterface_Params_Data* params =
          reinterpret_cast<internal::InterfaceProvider_GetInterface_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_interface_name{};
      mojo::ScopedMessagePipeHandle p_pipe{};
      InterfaceProvider_GetInterface_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInterfaceName(&p_interface_name))
        success = false;
      p_pipe = input_data_view.TakePipe();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterfaceProvider::GetInterface deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetInterface(
std::move(p_interface_name), 
std::move(p_pipe));
      return true;
    }
  }
  return false;
}

// static
bool InterfaceProviderStubDispatch::AcceptWithResponder(
    InterfaceProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kInterfaceProvider_GetInterface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::InterfaceProvider::GetInterface",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool InterfaceProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InterfaceProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kInterfaceProvider_GetInterface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterfaceProvider_GetInterface_Params_Data>(
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

void InterfaceProviderInterceptorForTesting::GetInterface(const std::string& interface_name, mojo::ScopedMessagePipeHandle pipe) {
  GetForwardingInterface()->GetInterface(std::move(interface_name), std::move(pipe));
}
InterfaceProviderAsyncWaiter::InterfaceProviderAsyncWaiter(
    InterfaceProvider* proxy) : proxy_(proxy) {}

InterfaceProviderAsyncWaiter::~InterfaceProviderAsyncWaiter() = default;


}  // namespace mojom
}  // namespace service_manager

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif