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

#include "content/common/associated_interfaces.mojom.h"

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

#include "content/common/associated_interfaces.mojom-shared-message-ids.h"
namespace content {
namespace mojom {
const char AssociatedInterface::Name_[] = "content.mojom.AssociatedInterface";

AssociatedInterfaceProxy::AssociatedInterfaceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool AssociatedInterfaceStubDispatch::Accept(
    AssociatedInterface* impl,
    mojo::Message* message) {
  return false;
}

// static
bool AssociatedInterfaceStubDispatch::AcceptWithResponder(
    AssociatedInterface* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}

bool AssociatedInterfaceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AssociatedInterface RequestValidator");

  switch (message->header()->name) {
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

AssociatedInterfaceAsyncWaiter::AssociatedInterfaceAsyncWaiter(
    AssociatedInterface* proxy) : proxy_(proxy) {}

AssociatedInterfaceAsyncWaiter::~AssociatedInterfaceAsyncWaiter() = default;


const char AssociatedInterfaceProvider::Name_[] = "content.mojom.AssociatedInterfaceProvider";

AssociatedInterfaceProviderProxy::AssociatedInterfaceProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AssociatedInterfaceProviderProxy::GetAssociatedInterface(
    const std::string& in_name, AssociatedInterfaceAssociatedRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::AssociatedInterfaceProvider::GetAssociatedInterface");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAssociatedInterfaceProvider_GetAssociatedInterface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::AssociatedInterfaceProvider_GetAssociatedInterface_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in AssociatedInterfaceProvider.GetAssociatedInterface request");
  mojo::internal::Serialize<::content::mojom::AssociatedInterfaceAssociatedRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid request in AssociatedInterfaceProvider.GetAssociatedInterface request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AssociatedInterfaceProviderStubDispatch::Accept(
    AssociatedInterfaceProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAssociatedInterfaceProvider_GetAssociatedInterface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AssociatedInterfaceProvider::GetAssociatedInterface",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AssociatedInterfaceProvider_GetAssociatedInterface_Params_Data* params =
          reinterpret_cast<internal::AssociatedInterfaceProvider_GetAssociatedInterface_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_name{};
      AssociatedInterfaceAssociatedRequest p_request{};
      AssociatedInterfaceProvider_GetAssociatedInterface_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AssociatedInterfaceProvider::GetAssociatedInterface deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetAssociatedInterface(
std::move(p_name), 
std::move(p_request));
      return true;
    }
  }
  return false;
}

// static
bool AssociatedInterfaceProviderStubDispatch::AcceptWithResponder(
    AssociatedInterfaceProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAssociatedInterfaceProvider_GetAssociatedInterface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::AssociatedInterfaceProvider::GetAssociatedInterface",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool AssociatedInterfaceProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AssociatedInterfaceProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kAssociatedInterfaceProvider_GetAssociatedInterface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AssociatedInterfaceProvider_GetAssociatedInterface_Params_Data>(
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

void AssociatedInterfaceProviderInterceptorForTesting::GetAssociatedInterface(const std::string& name, AssociatedInterfaceAssociatedRequest request) {
  GetForwardingInterface()->GetAssociatedInterface(std::move(name), std::move(request));
}
AssociatedInterfaceProviderAsyncWaiter::AssociatedInterfaceProviderAsyncWaiter(
    AssociatedInterfaceProvider* proxy) : proxy_(proxy) {}

AssociatedInterfaceProviderAsyncWaiter::~AssociatedInterfaceProviderAsyncWaiter() = default;


const char RouteProvider::Name_[] = "content.mojom.RouteProvider";

RouteProviderProxy::RouteProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RouteProviderProxy::GetRoute(
    int32_t in_routing_id, AssociatedInterfaceProviderAssociatedRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RouteProvider::GetRoute");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRouteProvider_GetRoute_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RouteProvider_GetRoute_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->routing_id = in_routing_id;
  mojo::internal::Serialize<::content::mojom::AssociatedInterfaceProviderAssociatedRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid request in RouteProvider.GetRoute request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RouteProviderStubDispatch::Accept(
    RouteProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRouteProvider_GetRoute_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RouteProvider::GetRoute",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RouteProvider_GetRoute_Params_Data* params =
          reinterpret_cast<internal::RouteProvider_GetRoute_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_routing_id{};
      AssociatedInterfaceProviderAssociatedRequest p_request{};
      RouteProvider_GetRoute_ParamsDataView input_data_view(params, &serialization_context);
      
      p_routing_id = input_data_view.routing_id();
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RouteProvider::GetRoute deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetRoute(
std::move(p_routing_id), 
std::move(p_request));
      return true;
    }
  }
  return false;
}

// static
bool RouteProviderStubDispatch::AcceptWithResponder(
    RouteProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRouteProvider_GetRoute_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RouteProvider::GetRoute",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool RouteProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RouteProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kRouteProvider_GetRoute_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RouteProvider_GetRoute_Params_Data>(
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

void RouteProviderInterceptorForTesting::GetRoute(int32_t routing_id, AssociatedInterfaceProviderAssociatedRequest request) {
  GetForwardingInterface()->GetRoute(std::move(routing_id), std::move(request));
}
RouteProviderAsyncWaiter::RouteProviderAsyncWaiter(
    RouteProvider* proxy) : proxy_(proxy) {}

RouteProviderAsyncWaiter::~RouteProviderAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif