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

#include "content/common/service_worker/embedded_worker.mojom.h"

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

#include "content/common/service_worker/embedded_worker.mojom-shared-message-ids.h"
#include "content/public/common/common_param_traits_macros.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/public/web/console_message_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace content {
namespace mojom {
EmbeddedWorkerStartParams::EmbeddedWorkerStartParams()
    : embedded_worker_id(),
      service_worker_version_id(),
      scope(),
      script_url(),
      worker_devtools_agent_route_id(),
      devtools_worker_token(),
      pause_after_download(),
      wait_for_debugger(),
      is_installed(),
      v8_cache_options(),
      data_saver_enabled(),
      dispatcher_request(),
      controller_request(),
      installed_scripts_info(),
      instance_host(),
      provider_info(),
      content_settings_proxy() {}

EmbeddedWorkerStartParams::EmbeddedWorkerStartParams(
    int32_t embedded_worker_id_in,
    int64_t service_worker_version_id_in,
    const GURL& scope_in,
    const GURL& script_url_in,
    int32_t worker_devtools_agent_route_id_in,
    const base::UnguessableToken& devtools_worker_token_in,
    bool pause_after_download_in,
    bool wait_for_debugger_in,
    bool is_installed_in,
    content::V8CacheOptions v8_cache_options_in,
    bool data_saver_enabled_in,
    ::content::mojom::ServiceWorkerEventDispatcherRequest dispatcher_request_in,
    ::content::mojom::ControllerServiceWorkerRequest controller_request_in,
    ::blink::mojom::ServiceWorkerInstalledScriptsInfoPtr installed_scripts_info_in,
    EmbeddedWorkerInstanceHostAssociatedPtrInfo instance_host_in,
    ::content::mojom::ServiceWorkerProviderInfoForStartWorkerPtr provider_info_in,
    ::blink::mojom::WorkerContentSettingsProxyPtrInfo content_settings_proxy_in)
    : embedded_worker_id(std::move(embedded_worker_id_in)),
      service_worker_version_id(std::move(service_worker_version_id_in)),
      scope(std::move(scope_in)),
      script_url(std::move(script_url_in)),
      worker_devtools_agent_route_id(std::move(worker_devtools_agent_route_id_in)),
      devtools_worker_token(std::move(devtools_worker_token_in)),
      pause_after_download(std::move(pause_after_download_in)),
      wait_for_debugger(std::move(wait_for_debugger_in)),
      is_installed(std::move(is_installed_in)),
      v8_cache_options(std::move(v8_cache_options_in)),
      data_saver_enabled(std::move(data_saver_enabled_in)),
      dispatcher_request(std::move(dispatcher_request_in)),
      controller_request(std::move(controller_request_in)),
      installed_scripts_info(std::move(installed_scripts_info_in)),
      instance_host(std::move(instance_host_in)),
      provider_info(std::move(provider_info_in)),
      content_settings_proxy(std::move(content_settings_proxy_in)) {}

EmbeddedWorkerStartParams::~EmbeddedWorkerStartParams() = default;

bool EmbeddedWorkerStartParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
EmbeddedWorkerStartTiming::EmbeddedWorkerStartTiming()
    : blink_initialized_time(),
      start_worker_received_time() {}

EmbeddedWorkerStartTiming::EmbeddedWorkerStartTiming(
    base::TimeTicks blink_initialized_time_in,
    base::TimeTicks start_worker_received_time_in)
    : blink_initialized_time(std::move(blink_initialized_time_in)),
      start_worker_received_time(std::move(start_worker_received_time_in)) {}

EmbeddedWorkerStartTiming::~EmbeddedWorkerStartTiming() = default;

bool EmbeddedWorkerStartTiming::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char EmbeddedWorkerInstanceClient::Name_[] = "content.mojom.EmbeddedWorkerInstanceClient";

EmbeddedWorkerInstanceClientProxy::EmbeddedWorkerInstanceClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void EmbeddedWorkerInstanceClientProxy::StartWorker(
    EmbeddedWorkerStartParamsPtr in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::EmbeddedWorkerInstanceClient::StartWorker");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceClient_StartWorker_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::EmbeddedWorkerInstanceClient_StartWorker_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::content::mojom::EmbeddedWorkerStartParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in EmbeddedWorkerInstanceClient.StartWorker request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceClientProxy::StopWorker(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::EmbeddedWorkerInstanceClient::StopWorker");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceClient_StopWorker_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::EmbeddedWorkerInstanceClient_StopWorker_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceClientProxy::ResumeAfterDownload(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::EmbeddedWorkerInstanceClient::ResumeAfterDownload");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceClient_ResumeAfterDownload_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceClientProxy::AddMessageToConsole(
    ::blink::WebConsoleMessage::Level in_level, const std::string& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::EmbeddedWorkerInstanceClient::AddMessageToConsole");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceClient_AddMessageToConsole_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ConsoleMessageLevel>(
      in_level, &params->level);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in EmbeddedWorkerInstanceClient.AddMessageToConsole request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceClientProxy::BindDevToolsAgent(
    ::blink::mojom::DevToolsAgentAssociatedRequest in_devtools_agent) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::EmbeddedWorkerInstanceClient::BindDevToolsAgent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceClient_BindDevToolsAgent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::DevToolsAgentAssociatedRequestDataView>(
      in_devtools_agent, &params->devtools_agent, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->devtools_agent),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid devtools_agent in EmbeddedWorkerInstanceClient.BindDevToolsAgent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool EmbeddedWorkerInstanceClientStubDispatch::Accept(
    EmbeddedWorkerInstanceClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kEmbeddedWorkerInstanceClient_StartWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceClient::StartWorker",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceClient_StartWorker_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceClient_StartWorker_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedWorkerStartParamsPtr p_params{};
      EmbeddedWorkerInstanceClient_StartWorker_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedWorkerInstanceClient::StartWorker deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartWorker(
std::move(p_params));
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_StopWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceClient::StopWorker",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceClient_StopWorker_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceClient_StopWorker_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedWorkerInstanceClient_StopWorker_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedWorkerInstanceClient::StopWorker deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StopWorker();
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_ResumeAfterDownload_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceClient::ResumeAfterDownload",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedWorkerInstanceClient_ResumeAfterDownload_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedWorkerInstanceClient::ResumeAfterDownload deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ResumeAfterDownload();
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_AddMessageToConsole_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceClient::AddMessageToConsole",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::WebConsoleMessage::Level p_level{};
      std::string p_message{};
      EmbeddedWorkerInstanceClient_AddMessageToConsole_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLevel(&p_level))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedWorkerInstanceClient::AddMessageToConsole deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddMessageToConsole(
std::move(p_level), 
std::move(p_message));
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_BindDevToolsAgent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceClient::BindDevToolsAgent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::DevToolsAgentAssociatedRequest p_devtools_agent{};
      EmbeddedWorkerInstanceClient_BindDevToolsAgent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_devtools_agent =
          input_data_view.TakeDevtoolsAgent<decltype(p_devtools_agent)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedWorkerInstanceClient::BindDevToolsAgent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->BindDevToolsAgent(
std::move(p_devtools_agent));
      return true;
    }
  }
  return false;
}

// static
bool EmbeddedWorkerInstanceClientStubDispatch::AcceptWithResponder(
    EmbeddedWorkerInstanceClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kEmbeddedWorkerInstanceClient_StartWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceClient::StartWorker",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedWorkerInstanceClient_StopWorker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceClient::StopWorker",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedWorkerInstanceClient_ResumeAfterDownload_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceClient::ResumeAfterDownload",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedWorkerInstanceClient_AddMessageToConsole_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceClient::AddMessageToConsole",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedWorkerInstanceClient_BindDevToolsAgent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceClient::BindDevToolsAgent",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool EmbeddedWorkerInstanceClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "EmbeddedWorkerInstanceClient RequestValidator");

  switch (message->header()->name) {
    case internal::kEmbeddedWorkerInstanceClient_StartWorker_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceClient_StartWorker_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_StopWorker_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceClient_StopWorker_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_ResumeAfterDownload_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceClient_ResumeAfterDownload_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_AddMessageToConsole_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceClient_AddMessageToConsole_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceClient_BindDevToolsAgent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceClient_BindDevToolsAgent_Params_Data>(
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

void EmbeddedWorkerInstanceClientInterceptorForTesting::StartWorker(EmbeddedWorkerStartParamsPtr params) {
  GetForwardingInterface()->StartWorker(std::move(params));
}
void EmbeddedWorkerInstanceClientInterceptorForTesting::StopWorker() {
  GetForwardingInterface()->StopWorker();
}
void EmbeddedWorkerInstanceClientInterceptorForTesting::ResumeAfterDownload() {
  GetForwardingInterface()->ResumeAfterDownload();
}
void EmbeddedWorkerInstanceClientInterceptorForTesting::AddMessageToConsole(::blink::WebConsoleMessage::Level level, const std::string& message) {
  GetForwardingInterface()->AddMessageToConsole(std::move(level), std::move(message));
}
void EmbeddedWorkerInstanceClientInterceptorForTesting::BindDevToolsAgent(::blink::mojom::DevToolsAgentAssociatedRequest devtools_agent) {
  GetForwardingInterface()->BindDevToolsAgent(std::move(devtools_agent));
}
EmbeddedWorkerInstanceClientAsyncWaiter::EmbeddedWorkerInstanceClientAsyncWaiter(
    EmbeddedWorkerInstanceClient* proxy) : proxy_(proxy) {}

EmbeddedWorkerInstanceClientAsyncWaiter::~EmbeddedWorkerInstanceClientAsyncWaiter() = default;


const char EmbeddedWorkerInstanceHost::Name_[] = "content.mojom.EmbeddedWorkerInstanceHost";

EmbeddedWorkerInstanceHostProxy::EmbeddedWorkerInstanceHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void EmbeddedWorkerInstanceHostProxy::RequestTermination(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::EmbeddedWorkerInstanceHost::RequestTermination");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_RequestTermination_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::EmbeddedWorkerInstanceHost_RequestTermination_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceHostProxy::CountFeature(
    ::blink::mojom::WebFeature in_feature) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::EmbeddedWorkerInstanceHost::CountFeature");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_CountFeature_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::EmbeddedWorkerInstanceHost_CountFeature_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::WebFeature>(
      in_feature, &params->feature);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceHostProxy::OnReadyForInspection(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::EmbeddedWorkerInstanceHost::OnReadyForInspection");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_OnReadyForInspection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceHostProxy::OnScriptLoaded(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::EmbeddedWorkerInstanceHost::OnScriptLoaded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_OnScriptLoaded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceHostProxy::OnScriptLoadFailed(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::EmbeddedWorkerInstanceHost::OnScriptLoadFailed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_OnScriptLoadFailed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceHostProxy::OnThreadStarted(
    int32_t in_thread_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::EmbeddedWorkerInstanceHost::OnThreadStarted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_OnThreadStarted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::EmbeddedWorkerInstanceHost_OnThreadStarted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->thread_id = in_thread_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceHostProxy::OnScriptEvaluated(
    bool in_success) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::EmbeddedWorkerInstanceHost::OnScriptEvaluated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_OnScriptEvaluated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceHostProxy::OnStarted(
    EmbeddedWorkerStartTimingPtr in_start_timing) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::EmbeddedWorkerInstanceHost::OnStarted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_OnStarted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::EmbeddedWorkerInstanceHost_OnStarted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->start_timing)::BaseType::BufferWriter
      start_timing_writer;
  mojo::internal::Serialize<::content::mojom::EmbeddedWorkerStartTimingDataView>(
      in_start_timing, buffer, &start_timing_writer, &serialization_context);
  params->start_timing.Set(
      start_timing_writer.is_null() ? nullptr : start_timing_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->start_timing.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null start_timing in EmbeddedWorkerInstanceHost.OnStarted request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceHostProxy::OnReportException(
    const base::string16& in_error_message, int32_t in_line_number, int32_t in_column_number, const GURL& in_source_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::EmbeddedWorkerInstanceHost::OnReportException");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_OnReportException_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::EmbeddedWorkerInstanceHost_OnReportException_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->error_message)::BaseType::BufferWriter
      error_message_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_error_message, buffer, &error_message_writer, &serialization_context);
  params->error_message.Set(
      error_message_writer.is_null() ? nullptr : error_message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->error_message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error_message in EmbeddedWorkerInstanceHost.OnReportException request");
  params->line_number = in_line_number;
  params->column_number = in_column_number;
  typename decltype(params->source_url)::BaseType::BufferWriter
      source_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_source_url, buffer, &source_url_writer, &serialization_context);
  params->source_url.Set(
      source_url_writer.is_null() ? nullptr : source_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_url in EmbeddedWorkerInstanceHost.OnReportException request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceHostProxy::OnReportConsoleMessage(
    int32_t in_source_identifier, int32_t in_message_level, const base::string16& in_message, int32_t in_line_number, const GURL& in_source_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::EmbeddedWorkerInstanceHost::OnReportConsoleMessage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_OnReportConsoleMessage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->source_identifier = in_source_identifier;
  params->message_level = in_message_level;
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in EmbeddedWorkerInstanceHost.OnReportConsoleMessage request");
  params->line_number = in_line_number;
  typename decltype(params->source_url)::BaseType::BufferWriter
      source_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_source_url, buffer, &source_url_writer, &serialization_context);
  params->source_url.Set(
      source_url_writer.is_null() ? nullptr : source_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_url in EmbeddedWorkerInstanceHost.OnReportConsoleMessage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedWorkerInstanceHostProxy::OnStopped(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::EmbeddedWorkerInstanceHost::OnStopped");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedWorkerInstanceHost_OnStopped_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::EmbeddedWorkerInstanceHost_OnStopped_Params_Data::BufferWriter
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
bool EmbeddedWorkerInstanceHostStubDispatch::Accept(
    EmbeddedWorkerInstanceHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kEmbeddedWorkerInstanceHost_RequestTermination_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::RequestTermination",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_RequestTermination_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_RequestTermination_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedWorkerInstanceHost_RequestTermination_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedWorkerInstanceHost::RequestTermination deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestTermination();
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_CountFeature_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::CountFeature",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_CountFeature_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_CountFeature_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::WebFeature p_feature{};
      EmbeddedWorkerInstanceHost_CountFeature_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFeature(&p_feature))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedWorkerInstanceHost::CountFeature deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CountFeature(
std::move(p_feature));
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReadyForInspection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnReadyForInspection",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedWorkerInstanceHost_OnReadyForInspection_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedWorkerInstanceHost::OnReadyForInspection deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnReadyForInspection();
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnScriptLoaded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnScriptLoaded",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedWorkerInstanceHost_OnScriptLoaded_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedWorkerInstanceHost::OnScriptLoaded deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnScriptLoaded();
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnScriptLoadFailed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnScriptLoadFailed",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedWorkerInstanceHost_OnScriptLoadFailed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedWorkerInstanceHost::OnScriptLoadFailed deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnScriptLoadFailed();
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnThreadStarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnThreadStarted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_OnThreadStarted_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_OnThreadStarted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_thread_id{};
      EmbeddedWorkerInstanceHost_OnThreadStarted_ParamsDataView input_data_view(params, &serialization_context);
      
      p_thread_id = input_data_view.thread_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedWorkerInstanceHost::OnThreadStarted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnThreadStarted(
std::move(p_thread_id));
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnScriptEvaluated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnScriptEvaluated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_success{};
      EmbeddedWorkerInstanceHost_OnScriptEvaluated_ParamsDataView input_data_view(params, &serialization_context);
      
      p_success = input_data_view.success();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedWorkerInstanceHost::OnScriptEvaluated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnScriptEvaluated(
std::move(p_success));
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnStarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnStarted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_OnStarted_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_OnStarted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedWorkerStartTimingPtr p_start_timing{};
      EmbeddedWorkerInstanceHost_OnStarted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStartTiming(&p_start_timing))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedWorkerInstanceHost::OnStarted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnStarted(
std::move(p_start_timing));
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReportException_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnReportException",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_OnReportException_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_OnReportException_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_error_message{};
      int32_t p_line_number{};
      int32_t p_column_number{};
      GURL p_source_url{};
      EmbeddedWorkerInstanceHost_OnReportException_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadErrorMessage(&p_error_message))
        success = false;
      p_line_number = input_data_view.line_number();
      p_column_number = input_data_view.column_number();
      if (!input_data_view.ReadSourceUrl(&p_source_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedWorkerInstanceHost::OnReportException deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnReportException(
std::move(p_error_message), 
std::move(p_line_number), 
std::move(p_column_number), 
std::move(p_source_url));
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReportConsoleMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnReportConsoleMessage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_source_identifier{};
      int32_t p_message_level{};
      base::string16 p_message{};
      int32_t p_line_number{};
      GURL p_source_url{};
      EmbeddedWorkerInstanceHost_OnReportConsoleMessage_ParamsDataView input_data_view(params, &serialization_context);
      
      p_source_identifier = input_data_view.source_identifier();
      p_message_level = input_data_view.message_level();
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      p_line_number = input_data_view.line_number();
      if (!input_data_view.ReadSourceUrl(&p_source_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedWorkerInstanceHost::OnReportConsoleMessage deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnReportConsoleMessage(
std::move(p_source_identifier), 
std::move(p_message_level), 
std::move(p_message), 
std::move(p_line_number), 
std::move(p_source_url));
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnStopped_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnStopped",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedWorkerInstanceHost_OnStopped_Params_Data* params =
          reinterpret_cast<internal::EmbeddedWorkerInstanceHost_OnStopped_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EmbeddedWorkerInstanceHost_OnStopped_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "EmbeddedWorkerInstanceHost::OnStopped deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnStopped();
      return true;
    }
  }
  return false;
}

// static
bool EmbeddedWorkerInstanceHostStubDispatch::AcceptWithResponder(
    EmbeddedWorkerInstanceHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kEmbeddedWorkerInstanceHost_RequestTermination_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::RequestTermination",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_CountFeature_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::CountFeature",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReadyForInspection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnReadyForInspection",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnScriptLoaded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnScriptLoaded",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnScriptLoadFailed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnScriptLoadFailed",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnThreadStarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnThreadStarted",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnScriptEvaluated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnScriptEvaluated",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnStarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnStarted",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReportException_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnReportException",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReportConsoleMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnReportConsoleMessage",
               "message", message->name());
#endif
      break;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnStopped_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::EmbeddedWorkerInstanceHost::OnStopped",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool EmbeddedWorkerInstanceHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "EmbeddedWorkerInstanceHost RequestValidator");

  switch (message->header()->name) {
    case internal::kEmbeddedWorkerInstanceHost_RequestTermination_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_RequestTermination_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_CountFeature_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_CountFeature_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReadyForInspection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_OnReadyForInspection_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnScriptLoaded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_OnScriptLoaded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnScriptLoadFailed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_OnScriptLoadFailed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnThreadStarted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_OnThreadStarted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnScriptEvaluated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_OnScriptEvaluated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnStarted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_OnStarted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReportException_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_OnReportException_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnReportConsoleMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_OnReportConsoleMessage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedWorkerInstanceHost_OnStopped_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedWorkerInstanceHost_OnStopped_Params_Data>(
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

void EmbeddedWorkerInstanceHostInterceptorForTesting::RequestTermination() {
  GetForwardingInterface()->RequestTermination();
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::CountFeature(::blink::mojom::WebFeature feature) {
  GetForwardingInterface()->CountFeature(std::move(feature));
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnReadyForInspection() {
  GetForwardingInterface()->OnReadyForInspection();
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnScriptLoaded() {
  GetForwardingInterface()->OnScriptLoaded();
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnScriptLoadFailed() {
  GetForwardingInterface()->OnScriptLoadFailed();
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnThreadStarted(int32_t thread_id) {
  GetForwardingInterface()->OnThreadStarted(std::move(thread_id));
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnScriptEvaluated(bool success) {
  GetForwardingInterface()->OnScriptEvaluated(std::move(success));
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnStarted(EmbeddedWorkerStartTimingPtr start_timing) {
  GetForwardingInterface()->OnStarted(std::move(start_timing));
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnReportException(const base::string16& error_message, int32_t line_number, int32_t column_number, const GURL& source_url) {
  GetForwardingInterface()->OnReportException(std::move(error_message), std::move(line_number), std::move(column_number), std::move(source_url));
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnReportConsoleMessage(int32_t source_identifier, int32_t message_level, const base::string16& message, int32_t line_number, const GURL& source_url) {
  GetForwardingInterface()->OnReportConsoleMessage(std::move(source_identifier), std::move(message_level), std::move(message), std::move(line_number), std::move(source_url));
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnStopped() {
  GetForwardingInterface()->OnStopped();
}
EmbeddedWorkerInstanceHostAsyncWaiter::EmbeddedWorkerInstanceHostAsyncWaiter(
    EmbeddedWorkerInstanceHost* proxy) : proxy_(proxy) {}

EmbeddedWorkerInstanceHostAsyncWaiter::~EmbeddedWorkerInstanceHostAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::EmbeddedWorkerStartParams::DataView, ::content::mojom::EmbeddedWorkerStartParamsPtr>::Read(
    ::content::mojom::EmbeddedWorkerStartParams::DataView input,
    ::content::mojom::EmbeddedWorkerStartParamsPtr* output) {
  bool success = true;
  ::content::mojom::EmbeddedWorkerStartParamsPtr result(::content::mojom::EmbeddedWorkerStartParams::New());
  
      result->embedded_worker_id = input.embedded_worker_id();
      result->service_worker_version_id = input.service_worker_version_id();
      if (!input.ReadScope(&result->scope))
        success = false;
      if (!input.ReadScriptUrl(&result->script_url))
        success = false;
      result->worker_devtools_agent_route_id = input.worker_devtools_agent_route_id();
      if (!input.ReadDevtoolsWorkerToken(&result->devtools_worker_token))
        success = false;
      result->pause_after_download = input.pause_after_download();
      result->wait_for_debugger = input.wait_for_debugger();
      result->is_installed = input.is_installed();
      if (!input.ReadV8CacheOptions(&result->v8_cache_options))
        success = false;
      result->data_saver_enabled = input.data_saver_enabled();
      result->dispatcher_request =
          input.TakeDispatcherRequest<decltype(result->dispatcher_request)>();
      result->controller_request =
          input.TakeControllerRequest<decltype(result->controller_request)>();
      if (!input.ReadInstalledScriptsInfo(&result->installed_scripts_info))
        success = false;
      result->instance_host =
          input.TakeInstanceHost<decltype(result->instance_host)>();
      if (!input.ReadProviderInfo(&result->provider_info))
        success = false;
      result->content_settings_proxy =
          input.TakeContentSettingsProxy<decltype(result->content_settings_proxy)>();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content::mojom::EmbeddedWorkerStartTiming::DataView, ::content::mojom::EmbeddedWorkerStartTimingPtr>::Read(
    ::content::mojom::EmbeddedWorkerStartTiming::DataView input,
    ::content::mojom::EmbeddedWorkerStartTimingPtr* output) {
  bool success = true;
  ::content::mojom::EmbeddedWorkerStartTimingPtr result(::content::mojom::EmbeddedWorkerStartTiming::New());
  
      if (!input.ReadBlinkInitializedTime(&result->blink_initialized_time))
        success = false;
      if (!input.ReadStartWorkerReceivedTime(&result->start_worker_received_time))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif