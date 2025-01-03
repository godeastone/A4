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

#include "net/interfaces/host_resolver_service.mojom.h"

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

#include "net/interfaces/host_resolver_service.mojom-shared-message-ids.h"
#include "net/interfaces/address_family_mojom_traits.h"
#include "net/interfaces/address_list_mojom_traits.h"
#include "net/interfaces/ip_address_struct_traits.h"
#include "net/interfaces/ip_endpoint_struct_traits.h"
namespace net {
namespace interfaces {
HostResolverRequestInfo::HostResolverRequestInfo()
    : host(),
      port(),
      address_family(),
      is_my_ip_address() {}

HostResolverRequestInfo::HostResolverRequestInfo(
    const std::string& host_in,
    uint16_t port_in,
    net::AddressFamily address_family_in,
    bool is_my_ip_address_in)
    : host(std::move(host_in)),
      port(std::move(port_in)),
      address_family(std::move(address_family_in)),
      is_my_ip_address(std::move(is_my_ip_address_in)) {}

HostResolverRequestInfo::~HostResolverRequestInfo() = default;

bool HostResolverRequestInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char HostResolverRequestClient::Name_[] = "net.interfaces.HostResolverRequestClient";

HostResolverRequestClientProxy::HostResolverRequestClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void HostResolverRequestClientProxy::ReportResult(
    int32_t in_error, const net::AddressList& in_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "net::interfaces::HostResolverRequestClient::ReportResult");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHostResolverRequestClient_ReportResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::net::interfaces::internal::HostResolverRequestClient_ReportResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->error = in_error;
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::net::interfaces::AddressListDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in HostResolverRequestClient.ReportResult request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool HostResolverRequestClientStubDispatch::Accept(
    HostResolverRequestClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kHostResolverRequestClient_ReportResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)net::interfaces::HostResolverRequestClient::ReportResult",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::HostResolverRequestClient_ReportResult_Params_Data* params =
          reinterpret_cast<internal::HostResolverRequestClient_ReportResult_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_error{};
      net::AddressList p_result{};
      HostResolverRequestClient_ReportResult_ParamsDataView input_data_view(params, &serialization_context);
      
      p_error = input_data_view.error();
      if (!input_data_view.ReadResult(&p_result))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "HostResolverRequestClient::ReportResult deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReportResult(
std::move(p_error), 
std::move(p_result));
      return true;
    }
  }
  return false;
}

// static
bool HostResolverRequestClientStubDispatch::AcceptWithResponder(
    HostResolverRequestClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kHostResolverRequestClient_ReportResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)net::interfaces::HostResolverRequestClient::ReportResult",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool HostResolverRequestClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "HostResolverRequestClient RequestValidator");

  switch (message->header()->name) {
    case internal::kHostResolverRequestClient_ReportResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::HostResolverRequestClient_ReportResult_Params_Data>(
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

void HostResolverRequestClientInterceptorForTesting::ReportResult(int32_t error, const net::AddressList& result) {
  GetForwardingInterface()->ReportResult(std::move(error), std::move(result));
}
HostResolverRequestClientAsyncWaiter::HostResolverRequestClientAsyncWaiter(
    HostResolverRequestClient* proxy) : proxy_(proxy) {}

HostResolverRequestClientAsyncWaiter::~HostResolverRequestClientAsyncWaiter() = default;


}  // namespace interfaces
}  // namespace net

namespace mojo {


// static
bool StructTraits<::net::interfaces::HostResolverRequestInfo::DataView, ::net::interfaces::HostResolverRequestInfoPtr>::Read(
    ::net::interfaces::HostResolverRequestInfo::DataView input,
    ::net::interfaces::HostResolverRequestInfoPtr* output) {
  bool success = true;
  ::net::interfaces::HostResolverRequestInfoPtr result(::net::interfaces::HostResolverRequestInfo::New());
  
      if (!input.ReadHost(&result->host))
        success = false;
      result->port = input.port();
      if (!input.ReadAddressFamily(&result->address_family))
        success = false;
      result->is_my_ip_address = input.is_my_ip_address();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif