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

#include "services/resource_coordinator/public/mojom/coordination_unit_provider.mojom.h"

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

#include "services/resource_coordinator/public/mojom/coordination_unit_provider.mojom-shared-message-ids.h"
#include "services/resource_coordinator/public/cpp/coordination_unit_mojom_traits.h"
namespace resource_coordinator {
namespace mojom {
const char CoordinationUnitProvider::Name_[] = "resource_coordinator.mojom.CoordinationUnitProvider";

CoordinationUnitProviderProxy::CoordinationUnitProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CoordinationUnitProviderProxy::CreateFrameCoordinationUnit(
    ::resource_coordinator::mojom::FrameCoordinationUnitRequest in_request, const ::resource_coordinator::CoordinationUnitID& in_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::CoordinationUnitProvider::CreateFrameCoordinationUnit");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinationUnitProvider_CreateFrameCoordinationUnit_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::CoordinationUnitProvider_CreateFrameCoordinationUnit_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::resource_coordinator::mojom::FrameCoordinationUnitRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in CoordinationUnitProvider.CreateFrameCoordinationUnit request");
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in CoordinationUnitProvider.CreateFrameCoordinationUnit request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CoordinationUnitProviderProxy::CreatePageCoordinationUnit(
    ::resource_coordinator::mojom::PageCoordinationUnitRequest in_request, const ::resource_coordinator::CoordinationUnitID& in_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::CoordinationUnitProvider::CreatePageCoordinationUnit");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinationUnitProvider_CreatePageCoordinationUnit_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::CoordinationUnitProvider_CreatePageCoordinationUnit_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::resource_coordinator::mojom::PageCoordinationUnitRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in CoordinationUnitProvider.CreatePageCoordinationUnit request");
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in CoordinationUnitProvider.CreatePageCoordinationUnit request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CoordinationUnitProviderProxy::CreateProcessCoordinationUnit(
    ::resource_coordinator::mojom::ProcessCoordinationUnitRequest in_request, const ::resource_coordinator::CoordinationUnitID& in_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::CoordinationUnitProvider::CreateProcessCoordinationUnit");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinationUnitProvider_CreateProcessCoordinationUnit_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::CoordinationUnitProvider_CreateProcessCoordinationUnit_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::resource_coordinator::mojom::ProcessCoordinationUnitRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in CoordinationUnitProvider.CreateProcessCoordinationUnit request");
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<::resource_coordinator::mojom::CoordinationUnitIDDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in CoordinationUnitProvider.CreateProcessCoordinationUnit request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CoordinationUnitProviderProxy::GetSystemCoordinationUnit(
    ::resource_coordinator::mojom::SystemCoordinationUnitRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "resource_coordinator::mojom::CoordinationUnitProvider::GetSystemCoordinationUnit");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinationUnitProvider_GetSystemCoordinationUnit_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::resource_coordinator::mojom::internal::CoordinationUnitProvider_GetSystemCoordinationUnit_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::resource_coordinator::mojom::SystemCoordinationUnitRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in CoordinationUnitProvider.GetSystemCoordinationUnit request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool CoordinationUnitProviderStubDispatch::Accept(
    CoordinationUnitProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCoordinationUnitProvider_CreateFrameCoordinationUnit_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::CoordinationUnitProvider::CreateFrameCoordinationUnit",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CoordinationUnitProvider_CreateFrameCoordinationUnit_Params_Data* params =
          reinterpret_cast<internal::CoordinationUnitProvider_CreateFrameCoordinationUnit_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::resource_coordinator::mojom::FrameCoordinationUnitRequest p_request{};
      ::resource_coordinator::CoordinationUnitID p_id{};
      CoordinationUnitProvider_CreateFrameCoordinationUnit_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!input_data_view.ReadId(&p_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CoordinationUnitProvider::CreateFrameCoordinationUnit deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateFrameCoordinationUnit(
std::move(p_request), 
std::move(p_id));
      return true;
    }
    case internal::kCoordinationUnitProvider_CreatePageCoordinationUnit_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::CoordinationUnitProvider::CreatePageCoordinationUnit",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CoordinationUnitProvider_CreatePageCoordinationUnit_Params_Data* params =
          reinterpret_cast<internal::CoordinationUnitProvider_CreatePageCoordinationUnit_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::resource_coordinator::mojom::PageCoordinationUnitRequest p_request{};
      ::resource_coordinator::CoordinationUnitID p_id{};
      CoordinationUnitProvider_CreatePageCoordinationUnit_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!input_data_view.ReadId(&p_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CoordinationUnitProvider::CreatePageCoordinationUnit deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreatePageCoordinationUnit(
std::move(p_request), 
std::move(p_id));
      return true;
    }
    case internal::kCoordinationUnitProvider_CreateProcessCoordinationUnit_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::CoordinationUnitProvider::CreateProcessCoordinationUnit",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CoordinationUnitProvider_CreateProcessCoordinationUnit_Params_Data* params =
          reinterpret_cast<internal::CoordinationUnitProvider_CreateProcessCoordinationUnit_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::resource_coordinator::mojom::ProcessCoordinationUnitRequest p_request{};
      ::resource_coordinator::CoordinationUnitID p_id{};
      CoordinationUnitProvider_CreateProcessCoordinationUnit_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!input_data_view.ReadId(&p_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CoordinationUnitProvider::CreateProcessCoordinationUnit deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateProcessCoordinationUnit(
std::move(p_request), 
std::move(p_id));
      return true;
    }
    case internal::kCoordinationUnitProvider_GetSystemCoordinationUnit_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::CoordinationUnitProvider::GetSystemCoordinationUnit",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CoordinationUnitProvider_GetSystemCoordinationUnit_Params_Data* params =
          reinterpret_cast<internal::CoordinationUnitProvider_GetSystemCoordinationUnit_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::resource_coordinator::mojom::SystemCoordinationUnitRequest p_request{};
      CoordinationUnitProvider_GetSystemCoordinationUnit_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "CoordinationUnitProvider::GetSystemCoordinationUnit deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetSystemCoordinationUnit(
std::move(p_request));
      return true;
    }
  }
  return false;
}

// static
bool CoordinationUnitProviderStubDispatch::AcceptWithResponder(
    CoordinationUnitProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCoordinationUnitProvider_CreateFrameCoordinationUnit_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::CoordinationUnitProvider::CreateFrameCoordinationUnit",
               "message", message->name());
#endif
      break;
    }
    case internal::kCoordinationUnitProvider_CreatePageCoordinationUnit_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::CoordinationUnitProvider::CreatePageCoordinationUnit",
               "message", message->name());
#endif
      break;
    }
    case internal::kCoordinationUnitProvider_CreateProcessCoordinationUnit_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::CoordinationUnitProvider::CreateProcessCoordinationUnit",
               "message", message->name());
#endif
      break;
    }
    case internal::kCoordinationUnitProvider_GetSystemCoordinationUnit_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)resource_coordinator::mojom::CoordinationUnitProvider::GetSystemCoordinationUnit",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool CoordinationUnitProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CoordinationUnitProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kCoordinationUnitProvider_CreateFrameCoordinationUnit_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CoordinationUnitProvider_CreateFrameCoordinationUnit_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinationUnitProvider_CreatePageCoordinationUnit_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CoordinationUnitProvider_CreatePageCoordinationUnit_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinationUnitProvider_CreateProcessCoordinationUnit_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CoordinationUnitProvider_CreateProcessCoordinationUnit_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinationUnitProvider_GetSystemCoordinationUnit_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CoordinationUnitProvider_GetSystemCoordinationUnit_Params_Data>(
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

void CoordinationUnitProviderInterceptorForTesting::CreateFrameCoordinationUnit(::resource_coordinator::mojom::FrameCoordinationUnitRequest request, const ::resource_coordinator::CoordinationUnitID& id) {
  GetForwardingInterface()->CreateFrameCoordinationUnit(std::move(request), std::move(id));
}
void CoordinationUnitProviderInterceptorForTesting::CreatePageCoordinationUnit(::resource_coordinator::mojom::PageCoordinationUnitRequest request, const ::resource_coordinator::CoordinationUnitID& id) {
  GetForwardingInterface()->CreatePageCoordinationUnit(std::move(request), std::move(id));
}
void CoordinationUnitProviderInterceptorForTesting::CreateProcessCoordinationUnit(::resource_coordinator::mojom::ProcessCoordinationUnitRequest request, const ::resource_coordinator::CoordinationUnitID& id) {
  GetForwardingInterface()->CreateProcessCoordinationUnit(std::move(request), std::move(id));
}
void CoordinationUnitProviderInterceptorForTesting::GetSystemCoordinationUnit(::resource_coordinator::mojom::SystemCoordinationUnitRequest request) {
  GetForwardingInterface()->GetSystemCoordinationUnit(std::move(request));
}
CoordinationUnitProviderAsyncWaiter::CoordinationUnitProviderAsyncWaiter(
    CoordinationUnitProvider* proxy) : proxy_(proxy) {}

CoordinationUnitProviderAsyncWaiter::~CoordinationUnitProviderAsyncWaiter() = default;


}  // namespace mojom
}  // namespace resource_coordinator

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif