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

#include "content/common/service_worker/service_worker.mojom.h"

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

#include "content/common/service_worker/service_worker.mojom-shared-message-ids.h"
#include "content/common/service_worker/service_worker_provider_struct_traits.h"
namespace content {
namespace mojom {
const char ServiceWorkerDispatcherHost::Name_[] = "content.mojom.ServiceWorkerDispatcherHost";

ServiceWorkerDispatcherHostProxy::ServiceWorkerDispatcherHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerDispatcherHostProxy::OnProviderCreated(
    ::content::ServiceWorkerProviderHostInfo in_provider_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerDispatcherHost::OnProviderCreated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerDispatcherHost_OnProviderCreated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerDispatcherHost_OnProviderCreated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->provider_info)::BaseType::BufferWriter
      provider_info_writer;
  mojo::internal::Serialize<::content::mojom::ServiceWorkerProviderHostInfoDataView>(
      in_provider_info, buffer, &provider_info_writer, &serialization_context);
  params->provider_info.Set(
      provider_info_writer.is_null() ? nullptr : provider_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->provider_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null provider_info in ServiceWorkerDispatcherHost.OnProviderCreated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ServiceWorkerDispatcherHostStubDispatch::Accept(
    ServiceWorkerDispatcherHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerDispatcherHost_OnProviderCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerDispatcherHost::OnProviderCreated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerDispatcherHost_OnProviderCreated_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerDispatcherHost_OnProviderCreated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::content::ServiceWorkerProviderHostInfo p_provider_info{};
      ServiceWorkerDispatcherHost_OnProviderCreated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadProviderInfo(&p_provider_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerDispatcherHost::OnProviderCreated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnProviderCreated(
std::move(p_provider_info));
      return true;
    }
  }
  return false;
}

// static
bool ServiceWorkerDispatcherHostStubDispatch::AcceptWithResponder(
    ServiceWorkerDispatcherHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerDispatcherHost_OnProviderCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerDispatcherHost::OnProviderCreated",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ServiceWorkerDispatcherHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerDispatcherHost RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerDispatcherHost_OnProviderCreated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerDispatcherHost_OnProviderCreated_Params_Data>(
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

void ServiceWorkerDispatcherHostInterceptorForTesting::OnProviderCreated(::content::ServiceWorkerProviderHostInfo provider_info) {
  GetForwardingInterface()->OnProviderCreated(std::move(provider_info));
}
ServiceWorkerDispatcherHostAsyncWaiter::ServiceWorkerDispatcherHostAsyncWaiter(
    ServiceWorkerDispatcherHost* proxy) : proxy_(proxy) {}

ServiceWorkerDispatcherHostAsyncWaiter::~ServiceWorkerDispatcherHostAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif