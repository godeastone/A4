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

#include "services/service_manager/public/mojom/service_factory.mojom-blink.h"

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

#include "services/service_manager/public/mojom/service_factory.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace service_manager {
namespace mojom {
namespace blink {
const char ServiceFactory::Name_[] = "service_manager.mojom.ServiceFactory";

ServiceFactoryProxy::ServiceFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceFactoryProxy::CreateService(
    ::service_manager::mojom::blink::ServiceRequest in_service, const WTF::String& in_name, ::service_manager::mojom::blink::PIDReceiverPtr in_pid_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "service_manager::mojom::ServiceFactory::CreateService");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceFactory_CreateService_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::service_manager::mojom::internal::ServiceFactory_CreateService_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::service_manager::mojom::ServiceRequestDataView>(
      in_service, &params->service, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->service),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid service in ServiceFactory.CreateService request");
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in ServiceFactory.CreateService request");
  mojo::internal::Serialize<::service_manager::mojom::PIDReceiverPtrDataView>(
      in_pid_receiver, &params->pid_receiver, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->pid_receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid pid_receiver in ServiceFactory.CreateService request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ServiceFactoryStubDispatch::Accept(
    ServiceFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceFactory_CreateService_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::ServiceFactory::CreateService",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceFactory_CreateService_Params_Data* params =
          reinterpret_cast<internal::ServiceFactory_CreateService_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::service_manager::mojom::blink::ServiceRequest p_service{};
      WTF::String p_name{};
      ::service_manager::mojom::blink::PIDReceiverPtr p_pid_receiver{};
      ServiceFactory_CreateService_ParamsDataView input_data_view(params, &serialization_context);
      
      p_service =
          input_data_view.TakeService<decltype(p_service)>();
      if (!input_data_view.ReadName(&p_name))
        success = false;
      p_pid_receiver =
          input_data_view.TakePidReceiver<decltype(p_pid_receiver)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceFactory::CreateService deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateService(
std::move(p_service), 
std::move(p_name), 
std::move(p_pid_receiver));
      return true;
    }
  }
  return false;
}

// static
bool ServiceFactoryStubDispatch::AcceptWithResponder(
    ServiceFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceFactory_CreateService_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)service_manager::mojom::ServiceFactory::CreateService",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ServiceFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceFactory_CreateService_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceFactory_CreateService_Params_Data>(
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

void ServiceFactoryInterceptorForTesting::CreateService(::service_manager::mojom::blink::ServiceRequest service, const WTF::String& name, ::service_manager::mojom::blink::PIDReceiverPtr pid_receiver) {
  GetForwardingInterface()->CreateService(std::move(service), std::move(name), std::move(pid_receiver));
}
ServiceFactoryAsyncWaiter::ServiceFactoryAsyncWaiter(
    ServiceFactory* proxy) : proxy_(proxy) {}

ServiceFactoryAsyncWaiter::~ServiceFactoryAsyncWaiter() = default;


}  // namespace blink
}  // namespace mojom
}  // namespace service_manager

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif