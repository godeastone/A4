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

#include "content/common/service_worker/service_worker_provider.mojom.h"

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

#include "content/common/service_worker/service_worker_provider.mojom-shared-message-ids.h"
namespace content {
namespace mojom {
const char kNavigation_ServiceWorkerSpec[] = "navigation:service_worker";
ServiceWorkerProviderInfoForSharedWorker::ServiceWorkerProviderInfoForSharedWorker()
    : provider_id(),
      host_ptr_info(),
      client_request() {}

ServiceWorkerProviderInfoForSharedWorker::ServiceWorkerProviderInfoForSharedWorker(
    int32_t provider_id_in,
    ::content::mojom::ServiceWorkerContainerHostAssociatedPtrInfo host_ptr_info_in,
    ::content::mojom::ServiceWorkerContainerAssociatedRequest client_request_in)
    : provider_id(std::move(provider_id_in)),
      host_ptr_info(std::move(host_ptr_info_in)),
      client_request(std::move(client_request_in)) {}

ServiceWorkerProviderInfoForSharedWorker::~ServiceWorkerProviderInfoForSharedWorker() = default;

bool ServiceWorkerProviderInfoForSharedWorker::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ServiceWorkerProviderInfoForStartWorker::ServiceWorkerProviderInfoForStartWorker()
    : provider_id(),
      host_ptr_info(),
      client_request(),
      script_loader_factory_ptr_info(),
      interface_provider() {}

ServiceWorkerProviderInfoForStartWorker::ServiceWorkerProviderInfoForStartWorker(
    int32_t provider_id_in,
    ::content::mojom::ServiceWorkerContainerHostAssociatedPtrInfo host_ptr_info_in,
    ::content::mojom::ServiceWorkerContainerAssociatedRequest client_request_in,
    ::network::mojom::URLLoaderFactoryAssociatedPtrInfo script_loader_factory_ptr_info_in,
    ::service_manager::mojom::InterfaceProviderPtrInfo interface_provider_in)
    : provider_id(std::move(provider_id_in)),
      host_ptr_info(std::move(host_ptr_info_in)),
      client_request(std::move(client_request_in)),
      script_loader_factory_ptr_info(std::move(script_loader_factory_ptr_info_in)),
      interface_provider(std::move(interface_provider_in)) {}

ServiceWorkerProviderInfoForStartWorker::~ServiceWorkerProviderInfoForStartWorker() = default;

bool ServiceWorkerProviderInfoForStartWorker::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ServiceWorkerProviderHostInfo::ServiceWorkerProviderHostInfo()
    : provider_id(),
      route_id(),
      type(),
      is_parent_frame_secure(),
      host_request(),
      client_ptr_info() {}

ServiceWorkerProviderHostInfo::ServiceWorkerProviderHostInfo(
    int32_t provider_id_in,
    int32_t route_id_in,
    ::blink::mojom::ServiceWorkerProviderType type_in,
    bool is_parent_frame_secure_in,
    ::content::mojom::ServiceWorkerContainerHostAssociatedRequest host_request_in,
    ::content::mojom::ServiceWorkerContainerAssociatedPtrInfo client_ptr_info_in)
    : provider_id(std::move(provider_id_in)),
      route_id(std::move(route_id_in)),
      type(std::move(type_in)),
      is_parent_frame_secure(std::move(is_parent_frame_secure_in)),
      host_request(std::move(host_request_in)),
      client_ptr_info(std::move(client_ptr_info_in)) {}

ServiceWorkerProviderHostInfo::~ServiceWorkerProviderHostInfo() = default;

bool ServiceWorkerProviderHostInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ServiceWorkerWorkerClient::Name_[] = "content.mojom.ServiceWorkerWorkerClient";

ServiceWorkerWorkerClientProxy::ServiceWorkerWorkerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerWorkerClientProxy::SetControllerServiceWorker(
    int64_t in_controller_version_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::ServiceWorkerWorkerClient::SetControllerServiceWorker");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerWorkerClient_SetControllerServiceWorker_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::ServiceWorkerWorkerClient_SetControllerServiceWorker_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->controller_version_id = in_controller_version_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ServiceWorkerWorkerClientStubDispatch::Accept(
    ServiceWorkerWorkerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerWorkerClient_SetControllerServiceWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerWorkerClient::SetControllerServiceWorker",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerWorkerClient_SetControllerServiceWorker_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerWorkerClient_SetControllerServiceWorker_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_controller_version_id{};
      ServiceWorkerWorkerClient_SetControllerServiceWorker_ParamsDataView input_data_view(params, &serialization_context);
      
      p_controller_version_id = input_data_view.controller_version_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceWorkerWorkerClient::SetControllerServiceWorker deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetControllerServiceWorker(
std::move(p_controller_version_id));
      return true;
    }
  }
  return false;
}

// static
bool ServiceWorkerWorkerClientStubDispatch::AcceptWithResponder(
    ServiceWorkerWorkerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerWorkerClient_SetControllerServiceWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::ServiceWorkerWorkerClient::SetControllerServiceWorker",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ServiceWorkerWorkerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerWorkerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerWorkerClient_SetControllerServiceWorker_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerWorkerClient_SetControllerServiceWorker_Params_Data>(
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

void ServiceWorkerWorkerClientInterceptorForTesting::SetControllerServiceWorker(int64_t controller_version_id) {
  GetForwardingInterface()->SetControllerServiceWorker(std::move(controller_version_id));
}
ServiceWorkerWorkerClientAsyncWaiter::ServiceWorkerWorkerClientAsyncWaiter(
    ServiceWorkerWorkerClient* proxy) : proxy_(proxy) {}

ServiceWorkerWorkerClientAsyncWaiter::~ServiceWorkerWorkerClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::ServiceWorkerProviderInfoForSharedWorker::DataView, ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerPtr>::Read(
    ::content::mojom::ServiceWorkerProviderInfoForSharedWorker::DataView input,
    ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerPtr* output) {
  bool success = true;
  ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerPtr result(::content::mojom::ServiceWorkerProviderInfoForSharedWorker::New());
  
      result->provider_id = input.provider_id();
      result->host_ptr_info =
          input.TakeHostPtrInfo<decltype(result->host_ptr_info)>();
      result->client_request =
          input.TakeClientRequest<decltype(result->client_request)>();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::ServiceWorkerProviderInfoForStartWorker::DataView, ::content::mojom::ServiceWorkerProviderInfoForStartWorkerPtr>::Read(
    ::content::mojom::ServiceWorkerProviderInfoForStartWorker::DataView input,
    ::content::mojom::ServiceWorkerProviderInfoForStartWorkerPtr* output) {
  bool success = true;
  ::content::mojom::ServiceWorkerProviderInfoForStartWorkerPtr result(::content::mojom::ServiceWorkerProviderInfoForStartWorker::New());
  
      result->provider_id = input.provider_id();
      result->host_ptr_info =
          input.TakeHostPtrInfo<decltype(result->host_ptr_info)>();
      result->client_request =
          input.TakeClientRequest<decltype(result->client_request)>();
      result->script_loader_factory_ptr_info =
          input.TakeScriptLoaderFactoryPtrInfo<decltype(result->script_loader_factory_ptr_info)>();
      result->interface_provider =
          input.TakeInterfaceProvider<decltype(result->interface_provider)>();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::ServiceWorkerProviderHostInfo::DataView, ::content::mojom::ServiceWorkerProviderHostInfoPtr>::Read(
    ::content::mojom::ServiceWorkerProviderHostInfo::DataView input,
    ::content::mojom::ServiceWorkerProviderHostInfoPtr* output) {
  bool success = true;
  ::content::mojom::ServiceWorkerProviderHostInfoPtr result(::content::mojom::ServiceWorkerProviderHostInfo::New());
  
      result->provider_id = input.provider_id();
      result->route_id = input.route_id();
      if (!input.ReadType(&result->type))
        success = false;
      result->is_parent_frame_secure = input.is_parent_frame_secure();
      result->host_request =
          input.TakeHostRequest<decltype(result->host_request)>();
      result->client_ptr_info =
          input.TakeClientPtrInfo<decltype(result->client_ptr_info)>();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif