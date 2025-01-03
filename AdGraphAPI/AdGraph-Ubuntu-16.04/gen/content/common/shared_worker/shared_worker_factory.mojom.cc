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

#include "content/common/shared_worker/shared_worker_factory.mojom.h"

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

#include "content/common/shared_worker/shared_worker_factory.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/public/platform/content_security_policy_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace content {
namespace mojom {
const char kNavigation_SharedWorkerSpec[] = "navigation:shared_worker";
const char SharedWorkerFactory::Name_[] = "content.mojom.SharedWorkerFactory";

SharedWorkerFactoryProxy::SharedWorkerFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SharedWorkerFactoryProxy::CreateSharedWorker(
    ::content::mojom::SharedWorkerInfoPtr in_info, bool in_pause_on_start, const base::UnguessableToken& in_devtools_worker_token, ::blink::mojom::WorkerContentSettingsProxyPtr in_content_settings, ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerPtr in_service_worker_provider_info, ::network::mojom::URLLoaderFactoryAssociatedPtrInfo in_script_loader_factory_ptr_info, ::content::mojom::SharedWorkerHostPtr in_host, ::content::mojom::SharedWorkerRequest in_shared_worker, ::service_manager::mojom::InterfaceProviderPtr in_interface_provider) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SharedWorkerFactory::CreateSharedWorker");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSharedWorkerFactory_CreateSharedWorker_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SharedWorkerFactory_CreateSharedWorker_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::content::mojom::SharedWorkerInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in SharedWorkerFactory.CreateSharedWorker request");
  params->pause_on_start = in_pause_on_start;
  typename decltype(params->devtools_worker_token)::BaseType::BufferWriter
      devtools_worker_token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_devtools_worker_token, buffer, &devtools_worker_token_writer, &serialization_context);
  params->devtools_worker_token.Set(
      devtools_worker_token_writer.is_null() ? nullptr : devtools_worker_token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->devtools_worker_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null devtools_worker_token in SharedWorkerFactory.CreateSharedWorker request");
  mojo::internal::Serialize<::blink::mojom::WorkerContentSettingsProxyPtrDataView>(
      in_content_settings, &params->content_settings, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->content_settings),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid content_settings in SharedWorkerFactory.CreateSharedWorker request");
  typename decltype(params->service_worker_provider_info)::BaseType::BufferWriter
      service_worker_provider_info_writer;
  mojo::internal::Serialize<::content::mojom::ServiceWorkerProviderInfoForSharedWorkerDataView>(
      in_service_worker_provider_info, buffer, &service_worker_provider_info_writer, &serialization_context);
  params->service_worker_provider_info.Set(
      service_worker_provider_info_writer.is_null() ? nullptr : service_worker_provider_info_writer.data());
  mojo::internal::Serialize<::network::mojom::URLLoaderFactoryAssociatedPtrInfoDataView>(
      in_script_loader_factory_ptr_info, &params->script_loader_factory_ptr_info, &serialization_context);
  mojo::internal::Serialize<::content::mojom::SharedWorkerHostPtrDataView>(
      in_host, &params->host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid host in SharedWorkerFactory.CreateSharedWorker request");
  mojo::internal::Serialize<::content::mojom::SharedWorkerRequestDataView>(
      in_shared_worker, &params->shared_worker, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->shared_worker),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid shared_worker in SharedWorkerFactory.CreateSharedWorker request");
  mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
      in_interface_provider, &params->interface_provider, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->interface_provider),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid interface_provider in SharedWorkerFactory.CreateSharedWorker request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SharedWorkerFactoryStubDispatch::Accept(
    SharedWorkerFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSharedWorkerFactory_CreateSharedWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SharedWorkerFactory::CreateSharedWorker",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SharedWorkerFactory_CreateSharedWorker_Params_Data* params =
          reinterpret_cast<internal::SharedWorkerFactory_CreateSharedWorker_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::content::mojom::SharedWorkerInfoPtr p_info{};
      bool p_pause_on_start{};
      base::UnguessableToken p_devtools_worker_token{};
      ::blink::mojom::WorkerContentSettingsProxyPtr p_content_settings{};
      ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerPtr p_service_worker_provider_info{};
      ::network::mojom::URLLoaderFactoryAssociatedPtrInfo p_script_loader_factory_ptr_info{};
      ::content::mojom::SharedWorkerHostPtr p_host{};
      ::content::mojom::SharedWorkerRequest p_shared_worker{};
      ::service_manager::mojom::InterfaceProviderPtr p_interface_provider{};
      SharedWorkerFactory_CreateSharedWorker_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInfo(&p_info))
        success = false;
      p_pause_on_start = input_data_view.pause_on_start();
      if (!input_data_view.ReadDevtoolsWorkerToken(&p_devtools_worker_token))
        success = false;
      p_content_settings =
          input_data_view.TakeContentSettings<decltype(p_content_settings)>();
      if (!input_data_view.ReadServiceWorkerProviderInfo(&p_service_worker_provider_info))
        success = false;
      p_script_loader_factory_ptr_info =
          input_data_view.TakeScriptLoaderFactoryPtrInfo<decltype(p_script_loader_factory_ptr_info)>();
      p_host =
          input_data_view.TakeHost<decltype(p_host)>();
      p_shared_worker =
          input_data_view.TakeSharedWorker<decltype(p_shared_worker)>();
      p_interface_provider =
          input_data_view.TakeInterfaceProvider<decltype(p_interface_provider)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SharedWorkerFactory::CreateSharedWorker deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateSharedWorker(
std::move(p_info), 
std::move(p_pause_on_start), 
std::move(p_devtools_worker_token), 
std::move(p_content_settings), 
std::move(p_service_worker_provider_info), 
std::move(p_script_loader_factory_ptr_info), 
std::move(p_host), 
std::move(p_shared_worker), 
std::move(p_interface_provider));
      return true;
    }
  }
  return false;
}

// static
bool SharedWorkerFactoryStubDispatch::AcceptWithResponder(
    SharedWorkerFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSharedWorkerFactory_CreateSharedWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SharedWorkerFactory::CreateSharedWorker",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SharedWorkerFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SharedWorkerFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kSharedWorkerFactory_CreateSharedWorker_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SharedWorkerFactory_CreateSharedWorker_Params_Data>(
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

void SharedWorkerFactoryInterceptorForTesting::CreateSharedWorker(::content::mojom::SharedWorkerInfoPtr info, bool pause_on_start, const base::UnguessableToken& devtools_worker_token, ::blink::mojom::WorkerContentSettingsProxyPtr content_settings, ::content::mojom::ServiceWorkerProviderInfoForSharedWorkerPtr service_worker_provider_info, ::network::mojom::URLLoaderFactoryAssociatedPtrInfo script_loader_factory_ptr_info, ::content::mojom::SharedWorkerHostPtr host, ::content::mojom::SharedWorkerRequest shared_worker, ::service_manager::mojom::InterfaceProviderPtr interface_provider) {
  GetForwardingInterface()->CreateSharedWorker(std::move(info), std::move(pause_on_start), std::move(devtools_worker_token), std::move(content_settings), std::move(service_worker_provider_info), std::move(script_loader_factory_ptr_info), std::move(host), std::move(shared_worker), std::move(interface_provider));
}
SharedWorkerFactoryAsyncWaiter::SharedWorkerFactoryAsyncWaiter(
    SharedWorkerFactory* proxy) : proxy_(proxy) {}

SharedWorkerFactoryAsyncWaiter::~SharedWorkerFactoryAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif