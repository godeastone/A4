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

#include "chrome/common/network_diagnostics.mojom.h"

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

#include "chrome/common/network_diagnostics.mojom-shared-message-ids.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace chrome {
namespace mojom {
const char NetworkDiagnostics::Name_[] = "chrome.mojom.NetworkDiagnostics";

NetworkDiagnosticsProxy::NetworkDiagnosticsProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NetworkDiagnosticsProxy::RunNetworkDiagnostics(
    const GURL& in_failed_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::NetworkDiagnostics::RunNetworkDiagnostics");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkDiagnostics_RunNetworkDiagnostics_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::NetworkDiagnostics_RunNetworkDiagnostics_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->failed_url)::BaseType::BufferWriter
      failed_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_failed_url, buffer, &failed_url_writer, &serialization_context);
  params->failed_url.Set(
      failed_url_writer.is_null() ? nullptr : failed_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->failed_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null failed_url in NetworkDiagnostics.RunNetworkDiagnostics request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool NetworkDiagnosticsStubDispatch::Accept(
    NetworkDiagnostics* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNetworkDiagnostics_RunNetworkDiagnostics_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetworkDiagnostics::RunNetworkDiagnostics",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkDiagnostics_RunNetworkDiagnostics_Params_Data* params =
          reinterpret_cast<internal::NetworkDiagnostics_RunNetworkDiagnostics_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_failed_url{};
      NetworkDiagnostics_RunNetworkDiagnostics_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFailedUrl(&p_failed_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkDiagnostics::RunNetworkDiagnostics deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RunNetworkDiagnostics(
std::move(p_failed_url));
      return true;
    }
  }
  return false;
}

// static
bool NetworkDiagnosticsStubDispatch::AcceptWithResponder(
    NetworkDiagnostics* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNetworkDiagnostics_RunNetworkDiagnostics_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetworkDiagnostics::RunNetworkDiagnostics",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool NetworkDiagnosticsRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkDiagnostics RequestValidator");

  switch (message->header()->name) {
    case internal::kNetworkDiagnostics_RunNetworkDiagnostics_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkDiagnostics_RunNetworkDiagnostics_Params_Data>(
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

void NetworkDiagnosticsInterceptorForTesting::RunNetworkDiagnostics(const GURL& failed_url) {
  GetForwardingInterface()->RunNetworkDiagnostics(std::move(failed_url));
}
NetworkDiagnosticsAsyncWaiter::NetworkDiagnosticsAsyncWaiter(
    NetworkDiagnostics* proxy) : proxy_(proxy) {}

NetworkDiagnosticsAsyncWaiter::~NetworkDiagnosticsAsyncWaiter() = default;


const char NetworkDiagnosticsClient::Name_[] = "chrome.mojom.NetworkDiagnosticsClient";

NetworkDiagnosticsClientProxy::NetworkDiagnosticsClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NetworkDiagnosticsClientProxy::SetCanShowNetworkDiagnosticsDialog(
    bool in_can_show) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::NetworkDiagnosticsClient::SetCanShowNetworkDiagnosticsDialog");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->can_show = in_can_show;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkDiagnosticsClientProxy::DNSProbeStatus(
    int32_t in_status) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::NetworkDiagnosticsClient::DNSProbeStatus");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkDiagnosticsClient_DNSProbeStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::NetworkDiagnosticsClient_DNSProbeStatus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->status = in_status;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool NetworkDiagnosticsClientStubDispatch::Accept(
    NetworkDiagnosticsClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetworkDiagnosticsClient::SetCanShowNetworkDiagnosticsDialog",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params_Data* params =
          reinterpret_cast<internal::NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_can_show{};
      NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_ParamsDataView input_data_view(params, &serialization_context);
      
      p_can_show = input_data_view.can_show();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkDiagnosticsClient::SetCanShowNetworkDiagnosticsDialog deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetCanShowNetworkDiagnosticsDialog(
std::move(p_can_show));
      return true;
    }
    case internal::kNetworkDiagnosticsClient_DNSProbeStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetworkDiagnosticsClient::DNSProbeStatus",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkDiagnosticsClient_DNSProbeStatus_Params_Data* params =
          reinterpret_cast<internal::NetworkDiagnosticsClient_DNSProbeStatus_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_status{};
      NetworkDiagnosticsClient_DNSProbeStatus_ParamsDataView input_data_view(params, &serialization_context);
      
      p_status = input_data_view.status();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NetworkDiagnosticsClient::DNSProbeStatus deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DNSProbeStatus(
std::move(p_status));
      return true;
    }
  }
  return false;
}

// static
bool NetworkDiagnosticsClientStubDispatch::AcceptWithResponder(
    NetworkDiagnosticsClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetworkDiagnosticsClient::SetCanShowNetworkDiagnosticsDialog",
               "message", message->name());
#endif
      break;
    }
    case internal::kNetworkDiagnosticsClient_DNSProbeStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::NetworkDiagnosticsClient::DNSProbeStatus",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool NetworkDiagnosticsClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkDiagnosticsClient RequestValidator");

  switch (message->header()->name) {
    case internal::kNetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkDiagnosticsClient_SetCanShowNetworkDiagnosticsDialog_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkDiagnosticsClient_DNSProbeStatus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkDiagnosticsClient_DNSProbeStatus_Params_Data>(
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

void NetworkDiagnosticsClientInterceptorForTesting::SetCanShowNetworkDiagnosticsDialog(bool can_show) {
  GetForwardingInterface()->SetCanShowNetworkDiagnosticsDialog(std::move(can_show));
}
void NetworkDiagnosticsClientInterceptorForTesting::DNSProbeStatus(int32_t status) {
  GetForwardingInterface()->DNSProbeStatus(std::move(status));
}
NetworkDiagnosticsClientAsyncWaiter::NetworkDiagnosticsClientAsyncWaiter(
    NetworkDiagnosticsClient* proxy) : proxy_(proxy) {}

NetworkDiagnosticsClientAsyncWaiter::~NetworkDiagnosticsClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif