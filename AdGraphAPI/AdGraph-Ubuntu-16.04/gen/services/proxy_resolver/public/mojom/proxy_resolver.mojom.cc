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

#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom.h"

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

#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-shared-message-ids.h"
#include "net/dns/mojo_host_struct_traits.h"
#include "net/interfaces/address_family_mojom_traits.h"
#include "services/proxy_resolver/public/cpp/proxy_resolver_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace proxy_resolver {
namespace mojom {
const char kProxyResolverServiceName[] = "proxy_resolver";
ProxyServer::ProxyServer()
    : scheme(),
      host(),
      port() {}

ProxyServer::ProxyServer(
    ProxyScheme scheme_in,
    const std::string& host_in,
    uint16_t port_in)
    : scheme(std::move(scheme_in)),
      host(std::move(host_in)),
      port(std::move(port_in)) {}

ProxyServer::~ProxyServer() = default;

bool ProxyServer::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ProxyInfo::ProxyInfo()
    : proxy_servers() {}

ProxyInfo::ProxyInfo(
    const std::vector<net::ProxyServer>& proxy_servers_in)
    : proxy_servers(std::move(proxy_servers_in)) {}

ProxyInfo::~ProxyInfo() = default;

bool ProxyInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ProxyResolver::Name_[] = "proxy_resolver.mojom.ProxyResolver";

ProxyResolverProxy::ProxyResolverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProxyResolverProxy::GetProxyForUrl(
    const GURL& in_url, ProxyResolverRequestClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "proxy_resolver::mojom::ProxyResolver::GetProxyForUrl");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolver_GetProxyForUrl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolver_GetProxyForUrl_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ProxyResolver.GetProxyForUrl request");
  mojo::internal::Serialize<::proxy_resolver::mojom::ProxyResolverRequestClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ProxyResolver.GetProxyForUrl request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProxyResolverStubDispatch::Accept(
    ProxyResolver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProxyResolver_GetProxyForUrl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolver::GetProxyForUrl",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolver_GetProxyForUrl_Params_Data* params =
          reinterpret_cast<internal::ProxyResolver_GetProxyForUrl_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      ProxyResolverRequestClientPtr p_client{};
      ProxyResolver_GetProxyForUrl_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProxyResolver::GetProxyForUrl deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetProxyForUrl(
std::move(p_url), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool ProxyResolverStubDispatch::AcceptWithResponder(
    ProxyResolver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProxyResolver_GetProxyForUrl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolver::GetProxyForUrl",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ProxyResolverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyResolver RequestValidator");

  switch (message->header()->name) {
    case internal::kProxyResolver_GetProxyForUrl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolver_GetProxyForUrl_Params_Data>(
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

void ProxyResolverInterceptorForTesting::GetProxyForUrl(const GURL& url, ProxyResolverRequestClientPtr client) {
  GetForwardingInterface()->GetProxyForUrl(std::move(url), std::move(client));
}
ProxyResolverAsyncWaiter::ProxyResolverAsyncWaiter(
    ProxyResolver* proxy) : proxy_(proxy) {}

ProxyResolverAsyncWaiter::~ProxyResolverAsyncWaiter() = default;


const char ProxyResolverRequestClient::Name_[] = "proxy_resolver.mojom.ProxyResolverRequestClient";

ProxyResolverRequestClientProxy::ProxyResolverRequestClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProxyResolverRequestClientProxy::ReportResult(
    int32_t in_error, const net::ProxyInfo& in_proxy_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "proxy_resolver::mojom::ProxyResolverRequestClient::ReportResult");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverRequestClient_ReportResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverRequestClient_ReportResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->error = in_error;
  typename decltype(params->proxy_info)::BaseType::BufferWriter
      proxy_info_writer;
  mojo::internal::Serialize<::proxy_resolver::mojom::ProxyInfoDataView>(
      in_proxy_info, buffer, &proxy_info_writer, &serialization_context);
  params->proxy_info.Set(
      proxy_info_writer.is_null() ? nullptr : proxy_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->proxy_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null proxy_info in ProxyResolverRequestClient.ReportResult request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProxyResolverRequestClientProxy::Alert(
    const std::string& in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "proxy_resolver::mojom::ProxyResolverRequestClient::Alert");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverRequestClient_Alert_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverRequestClient_Alert_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->error.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error in ProxyResolverRequestClient.Alert request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProxyResolverRequestClientProxy::OnError(
    int32_t in_line_number, const std::string& in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "proxy_resolver::mojom::ProxyResolverRequestClient::OnError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverRequestClient_OnError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverRequestClient_OnError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->line_number = in_line_number;
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->error.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error in ProxyResolverRequestClient.OnError request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProxyResolverRequestClientProxy::ResolveDns(
    std::unique_ptr<net::HostResolver::RequestInfo> in_request_info, ::net::interfaces::HostResolverRequestClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "proxy_resolver::mojom::ProxyResolverRequestClient::ResolveDns");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverRequestClient_ResolveDns_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverRequestClient_ResolveDns_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request_info)::BaseType::BufferWriter
      request_info_writer;
  mojo::internal::Serialize<::net::interfaces::HostResolverRequestInfoDataView>(
      in_request_info, buffer, &request_info_writer, &serialization_context);
  params->request_info.Set(
      request_info_writer.is_null() ? nullptr : request_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_info in ProxyResolverRequestClient.ResolveDns request");
  mojo::internal::Serialize<::net::interfaces::HostResolverRequestClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ProxyResolverRequestClient.ResolveDns request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProxyResolverRequestClientStubDispatch::Accept(
    ProxyResolverRequestClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProxyResolverRequestClient_ReportResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverRequestClient::ReportResult",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverRequestClient_ReportResult_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverRequestClient_ReportResult_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_error{};
      net::ProxyInfo p_proxy_info{};
      ProxyResolverRequestClient_ReportResult_ParamsDataView input_data_view(params, &serialization_context);
      
      p_error = input_data_view.error();
      if (!input_data_view.ReadProxyInfo(&p_proxy_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProxyResolverRequestClient::ReportResult deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReportResult(
std::move(p_error), 
std::move(p_proxy_info));
      return true;
    }
    case internal::kProxyResolverRequestClient_Alert_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverRequestClient::Alert",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverRequestClient_Alert_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverRequestClient_Alert_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_error{};
      ProxyResolverRequestClient_Alert_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProxyResolverRequestClient::Alert deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Alert(
std::move(p_error));
      return true;
    }
    case internal::kProxyResolverRequestClient_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverRequestClient::OnError",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverRequestClient_OnError_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverRequestClient_OnError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_line_number{};
      std::string p_error{};
      ProxyResolverRequestClient_OnError_ParamsDataView input_data_view(params, &serialization_context);
      
      p_line_number = input_data_view.line_number();
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProxyResolverRequestClient::OnError deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnError(
std::move(p_line_number), 
std::move(p_error));
      return true;
    }
    case internal::kProxyResolverRequestClient_ResolveDns_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverRequestClient::ResolveDns",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverRequestClient_ResolveDns_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverRequestClient_ResolveDns_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<net::HostResolver::RequestInfo> p_request_info{};
      ::net::interfaces::HostResolverRequestClientPtr p_client{};
      ProxyResolverRequestClient_ResolveDns_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequestInfo(&p_request_info))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProxyResolverRequestClient::ResolveDns deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ResolveDns(
std::move(p_request_info), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool ProxyResolverRequestClientStubDispatch::AcceptWithResponder(
    ProxyResolverRequestClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProxyResolverRequestClient_ReportResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverRequestClient::ReportResult",
               "message", message->name());
#endif
      break;
    }
    case internal::kProxyResolverRequestClient_Alert_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverRequestClient::Alert",
               "message", message->name());
#endif
      break;
    }
    case internal::kProxyResolverRequestClient_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverRequestClient::OnError",
               "message", message->name());
#endif
      break;
    }
    case internal::kProxyResolverRequestClient_ResolveDns_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverRequestClient::ResolveDns",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ProxyResolverRequestClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyResolverRequestClient RequestValidator");

  switch (message->header()->name) {
    case internal::kProxyResolverRequestClient_ReportResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverRequestClient_ReportResult_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProxyResolverRequestClient_Alert_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverRequestClient_Alert_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProxyResolverRequestClient_OnError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverRequestClient_OnError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProxyResolverRequestClient_ResolveDns_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverRequestClient_ResolveDns_Params_Data>(
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

void ProxyResolverRequestClientInterceptorForTesting::ReportResult(int32_t error, const net::ProxyInfo& proxy_info) {
  GetForwardingInterface()->ReportResult(std::move(error), std::move(proxy_info));
}
void ProxyResolverRequestClientInterceptorForTesting::Alert(const std::string& error) {
  GetForwardingInterface()->Alert(std::move(error));
}
void ProxyResolverRequestClientInterceptorForTesting::OnError(int32_t line_number, const std::string& error) {
  GetForwardingInterface()->OnError(std::move(line_number), std::move(error));
}
void ProxyResolverRequestClientInterceptorForTesting::ResolveDns(std::unique_ptr<net::HostResolver::RequestInfo> request_info, ::net::interfaces::HostResolverRequestClientPtr client) {
  GetForwardingInterface()->ResolveDns(std::move(request_info), std::move(client));
}
ProxyResolverRequestClientAsyncWaiter::ProxyResolverRequestClientAsyncWaiter(
    ProxyResolverRequestClient* proxy) : proxy_(proxy) {}

ProxyResolverRequestClientAsyncWaiter::~ProxyResolverRequestClientAsyncWaiter() = default;


const char ProxyResolverFactory::Name_[] = "proxy_resolver.mojom.ProxyResolverFactory";

ProxyResolverFactoryProxy::ProxyResolverFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProxyResolverFactoryProxy::CreateResolver(
    const std::string& in_pac_script, ProxyResolverRequest in_resolver, ProxyResolverFactoryRequestClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "proxy_resolver::mojom::ProxyResolverFactory::CreateResolver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverFactory_CreateResolver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverFactory_CreateResolver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pac_script)::BaseType::BufferWriter
      pac_script_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_pac_script, buffer, &pac_script_writer, &serialization_context);
  params->pac_script.Set(
      pac_script_writer.is_null() ? nullptr : pac_script_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pac_script.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pac_script in ProxyResolverFactory.CreateResolver request");
  mojo::internal::Serialize<::proxy_resolver::mojom::ProxyResolverRequestDataView>(
      in_resolver, &params->resolver, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->resolver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid resolver in ProxyResolverFactory.CreateResolver request");
  mojo::internal::Serialize<::proxy_resolver::mojom::ProxyResolverFactoryRequestClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ProxyResolverFactory.CreateResolver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProxyResolverFactoryStubDispatch::Accept(
    ProxyResolverFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProxyResolverFactory_CreateResolver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverFactory::CreateResolver",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverFactory_CreateResolver_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverFactory_CreateResolver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_pac_script{};
      ProxyResolverRequest p_resolver{};
      ProxyResolverFactoryRequestClientPtr p_client{};
      ProxyResolverFactory_CreateResolver_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPacScript(&p_pac_script))
        success = false;
      p_resolver =
          input_data_view.TakeResolver<decltype(p_resolver)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProxyResolverFactory::CreateResolver deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateResolver(
std::move(p_pac_script), 
std::move(p_resolver), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool ProxyResolverFactoryStubDispatch::AcceptWithResponder(
    ProxyResolverFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProxyResolverFactory_CreateResolver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverFactory::CreateResolver",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ProxyResolverFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyResolverFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kProxyResolverFactory_CreateResolver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverFactory_CreateResolver_Params_Data>(
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

void ProxyResolverFactoryInterceptorForTesting::CreateResolver(const std::string& pac_script, ProxyResolverRequest resolver, ProxyResolverFactoryRequestClientPtr client) {
  GetForwardingInterface()->CreateResolver(std::move(pac_script), std::move(resolver), std::move(client));
}
ProxyResolverFactoryAsyncWaiter::ProxyResolverFactoryAsyncWaiter(
    ProxyResolverFactory* proxy) : proxy_(proxy) {}

ProxyResolverFactoryAsyncWaiter::~ProxyResolverFactoryAsyncWaiter() = default;


const char ProxyResolverFactoryRequestClient::Name_[] = "proxy_resolver.mojom.ProxyResolverFactoryRequestClient";

ProxyResolverFactoryRequestClientProxy::ProxyResolverFactoryRequestClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProxyResolverFactoryRequestClientProxy::ReportResult(
    int32_t in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "proxy_resolver::mojom::ProxyResolverFactoryRequestClient::ReportResult");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverFactoryRequestClient_ReportResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverFactoryRequestClient_ReportResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->error = in_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProxyResolverFactoryRequestClientProxy::Alert(
    const std::string& in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "proxy_resolver::mojom::ProxyResolverFactoryRequestClient::Alert");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverFactoryRequestClient_Alert_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverFactoryRequestClient_Alert_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->error.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error in ProxyResolverFactoryRequestClient.Alert request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProxyResolverFactoryRequestClientProxy::OnError(
    int32_t in_line_number, const std::string& in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "proxy_resolver::mojom::ProxyResolverFactoryRequestClient::OnError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverFactoryRequestClient_OnError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverFactoryRequestClient_OnError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->line_number = in_line_number;
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->error.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error in ProxyResolverFactoryRequestClient.OnError request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProxyResolverFactoryRequestClientProxy::ResolveDns(
    std::unique_ptr<net::HostResolver::RequestInfo> in_request_info, ::net::interfaces::HostResolverRequestClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "proxy_resolver::mojom::ProxyResolverFactoryRequestClient::ResolveDns");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverFactoryRequestClient_ResolveDns_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request_info)::BaseType::BufferWriter
      request_info_writer;
  mojo::internal::Serialize<::net::interfaces::HostResolverRequestInfoDataView>(
      in_request_info, buffer, &request_info_writer, &serialization_context);
  params->request_info.Set(
      request_info_writer.is_null() ? nullptr : request_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_info in ProxyResolverFactoryRequestClient.ResolveDns request");
  mojo::internal::Serialize<::net::interfaces::HostResolverRequestClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ProxyResolverFactoryRequestClient.ResolveDns request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProxyResolverFactoryRequestClientStubDispatch::Accept(
    ProxyResolverFactoryRequestClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProxyResolverFactoryRequestClient_ReportResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverFactoryRequestClient::ReportResult",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverFactoryRequestClient_ReportResult_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverFactoryRequestClient_ReportResult_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_error{};
      ProxyResolverFactoryRequestClient_ReportResult_ParamsDataView input_data_view(params, &serialization_context);
      
      p_error = input_data_view.error();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProxyResolverFactoryRequestClient::ReportResult deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReportResult(
std::move(p_error));
      return true;
    }
    case internal::kProxyResolverFactoryRequestClient_Alert_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverFactoryRequestClient::Alert",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverFactoryRequestClient_Alert_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverFactoryRequestClient_Alert_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_error{};
      ProxyResolverFactoryRequestClient_Alert_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProxyResolverFactoryRequestClient::Alert deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Alert(
std::move(p_error));
      return true;
    }
    case internal::kProxyResolverFactoryRequestClient_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverFactoryRequestClient::OnError",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverFactoryRequestClient_OnError_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverFactoryRequestClient_OnError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_line_number{};
      std::string p_error{};
      ProxyResolverFactoryRequestClient_OnError_ParamsDataView input_data_view(params, &serialization_context);
      
      p_line_number = input_data_view.line_number();
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProxyResolverFactoryRequestClient::OnError deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnError(
std::move(p_line_number), 
std::move(p_error));
      return true;
    }
    case internal::kProxyResolverFactoryRequestClient_ResolveDns_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverFactoryRequestClient::ResolveDns",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<net::HostResolver::RequestInfo> p_request_info{};
      ::net::interfaces::HostResolverRequestClientPtr p_client{};
      ProxyResolverFactoryRequestClient_ResolveDns_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequestInfo(&p_request_info))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProxyResolverFactoryRequestClient::ResolveDns deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ResolveDns(
std::move(p_request_info), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool ProxyResolverFactoryRequestClientStubDispatch::AcceptWithResponder(
    ProxyResolverFactoryRequestClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProxyResolverFactoryRequestClient_ReportResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverFactoryRequestClient::ReportResult",
               "message", message->name());
#endif
      break;
    }
    case internal::kProxyResolverFactoryRequestClient_Alert_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverFactoryRequestClient::Alert",
               "message", message->name());
#endif
      break;
    }
    case internal::kProxyResolverFactoryRequestClient_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverFactoryRequestClient::OnError",
               "message", message->name());
#endif
      break;
    }
    case internal::kProxyResolverFactoryRequestClient_ResolveDns_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)proxy_resolver::mojom::ProxyResolverFactoryRequestClient::ResolveDns",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ProxyResolverFactoryRequestClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyResolverFactoryRequestClient RequestValidator");

  switch (message->header()->name) {
    case internal::kProxyResolverFactoryRequestClient_ReportResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverFactoryRequestClient_ReportResult_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProxyResolverFactoryRequestClient_Alert_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverFactoryRequestClient_Alert_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProxyResolverFactoryRequestClient_OnError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverFactoryRequestClient_OnError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProxyResolverFactoryRequestClient_ResolveDns_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data>(
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

void ProxyResolverFactoryRequestClientInterceptorForTesting::ReportResult(int32_t error) {
  GetForwardingInterface()->ReportResult(std::move(error));
}
void ProxyResolverFactoryRequestClientInterceptorForTesting::Alert(const std::string& error) {
  GetForwardingInterface()->Alert(std::move(error));
}
void ProxyResolverFactoryRequestClientInterceptorForTesting::OnError(int32_t line_number, const std::string& error) {
  GetForwardingInterface()->OnError(std::move(line_number), std::move(error));
}
void ProxyResolverFactoryRequestClientInterceptorForTesting::ResolveDns(std::unique_ptr<net::HostResolver::RequestInfo> request_info, ::net::interfaces::HostResolverRequestClientPtr client) {
  GetForwardingInterface()->ResolveDns(std::move(request_info), std::move(client));
}
ProxyResolverFactoryRequestClientAsyncWaiter::ProxyResolverFactoryRequestClientAsyncWaiter(
    ProxyResolverFactoryRequestClient* proxy) : proxy_(proxy) {}

ProxyResolverFactoryRequestClientAsyncWaiter::~ProxyResolverFactoryRequestClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace proxy_resolver

namespace mojo {


// static
bool StructTraits<::proxy_resolver::mojom::ProxyServer::DataView, ::proxy_resolver::mojom::ProxyServerPtr>::Read(
    ::proxy_resolver::mojom::ProxyServer::DataView input,
    ::proxy_resolver::mojom::ProxyServerPtr* output) {
  bool success = true;
  ::proxy_resolver::mojom::ProxyServerPtr result(::proxy_resolver::mojom::ProxyServer::New());
  
      if (!input.ReadScheme(&result->scheme))
        success = false;
      if (!input.ReadHost(&result->host))
        success = false;
      result->port = input.port();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::proxy_resolver::mojom::ProxyInfo::DataView, ::proxy_resolver::mojom::ProxyInfoPtr>::Read(
    ::proxy_resolver::mojom::ProxyInfo::DataView input,
    ::proxy_resolver::mojom::ProxyInfoPtr* output) {
  bool success = true;
  ::proxy_resolver::mojom::ProxyInfoPtr result(::proxy_resolver::mojom::ProxyInfo::New());
  
      if (!input.ReadProxyServers(&result->proxy_servers))
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