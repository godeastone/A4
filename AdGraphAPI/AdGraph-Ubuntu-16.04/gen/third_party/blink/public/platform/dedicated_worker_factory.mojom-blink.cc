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

#include "third_party/blink/public/platform/dedicated_worker_factory.mojom-blink.h"

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

#include "third_party/blink/public/platform/dedicated_worker_factory.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
namespace blink {
namespace mojom {
namespace blink {
const char kNavigation_DedicatedWorkerSpec[] = "navigation:dedicated_worker";
const char DedicatedWorkerFactory::Name_[] = "blink.mojom.DedicatedWorkerFactory";

DedicatedWorkerFactoryProxy::DedicatedWorkerFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DedicatedWorkerFactoryProxy::CreateDedicatedWorker(
    const scoped_refptr<const ::blink::SecurityOrigin>& in_origin, ::service_manager::mojom::blink::InterfaceProviderRequest in_worker_interface_provider) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::DedicatedWorkerFactory::CreateDedicatedWorker");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDedicatedWorkerFactory_CreateDedicatedWorker_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DedicatedWorkerFactory_CreateDedicatedWorker_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in DedicatedWorkerFactory.CreateDedicatedWorker request");
  mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderRequestDataView>(
      in_worker_interface_provider, &params->worker_interface_provider, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->worker_interface_provider),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid worker_interface_provider in DedicatedWorkerFactory.CreateDedicatedWorker request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DedicatedWorkerFactoryStubDispatch::Accept(
    DedicatedWorkerFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDedicatedWorkerFactory_CreateDedicatedWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::DedicatedWorkerFactory::CreateDedicatedWorker",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DedicatedWorkerFactory_CreateDedicatedWorker_Params_Data* params =
          reinterpret_cast<internal::DedicatedWorkerFactory_CreateDedicatedWorker_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      scoped_refptr<const ::blink::SecurityOrigin> p_origin{};
      ::service_manager::mojom::blink::InterfaceProviderRequest p_worker_interface_provider{};
      DedicatedWorkerFactory_CreateDedicatedWorker_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_worker_interface_provider =
          input_data_view.TakeWorkerInterfaceProvider<decltype(p_worker_interface_provider)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DedicatedWorkerFactory::CreateDedicatedWorker deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateDedicatedWorker(
std::move(p_origin), 
std::move(p_worker_interface_provider));
      return true;
    }
  }
  return false;
}

// static
bool DedicatedWorkerFactoryStubDispatch::AcceptWithResponder(
    DedicatedWorkerFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDedicatedWorkerFactory_CreateDedicatedWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::DedicatedWorkerFactory::CreateDedicatedWorker",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool DedicatedWorkerFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DedicatedWorkerFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kDedicatedWorkerFactory_CreateDedicatedWorker_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DedicatedWorkerFactory_CreateDedicatedWorker_Params_Data>(
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

void DedicatedWorkerFactoryInterceptorForTesting::CreateDedicatedWorker(const scoped_refptr<const ::blink::SecurityOrigin>& origin, ::service_manager::mojom::blink::InterfaceProviderRequest worker_interface_provider) {
  GetForwardingInterface()->CreateDedicatedWorker(std::move(origin), std::move(worker_interface_provider));
}
DedicatedWorkerFactoryAsyncWaiter::DedicatedWorkerFactoryAsyncWaiter(
    DedicatedWorkerFactory* proxy) : proxy_(proxy) {}

DedicatedWorkerFactoryAsyncWaiter::~DedicatedWorkerFactoryAsyncWaiter() = default;


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