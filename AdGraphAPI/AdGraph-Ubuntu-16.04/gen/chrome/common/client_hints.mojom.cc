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

#include "chrome/common/client_hints.mojom.h"

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

#include "chrome/common/client_hints.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
namespace client_hints {
namespace mojom {
const char ClientHints::Name_[] = "client_hints.mojom.ClientHints";

ClientHintsProxy::ClientHintsProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ClientHintsProxy::PersistClientHints(
    const url::Origin& in_primary_origin, const std::vector<::blink::mojom::WebClientHintsType>& in_client_hints, base::TimeDelta in_expiration_duration) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "client_hints::mojom::ClientHints::PersistClientHints");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClientHints_PersistClientHints_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::client_hints::mojom::internal::ClientHints_PersistClientHints_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->primary_origin)::BaseType::BufferWriter
      primary_origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_primary_origin, buffer, &primary_origin_writer, &serialization_context);
  params->primary_origin.Set(
      primary_origin_writer.is_null() ? nullptr : primary_origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->primary_origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null primary_origin in ClientHints.PersistClientHints request");
  typename decltype(params->client_hints)::BaseType::BufferWriter
      client_hints_writer;
  const mojo::internal::ContainerValidateParams client_hints_validate_params(
      0, ::blink::mojom::internal::WebClientHintsType_Data::Validate);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::WebClientHintsType>>(
      in_client_hints, buffer, &client_hints_writer, &client_hints_validate_params,
      &serialization_context);
  params->client_hints.Set(
      client_hints_writer.is_null() ? nullptr : client_hints_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->client_hints.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null client_hints in ClientHints.PersistClientHints request");
  typename decltype(params->expiration_duration)::BaseType::BufferWriter
      expiration_duration_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_expiration_duration, buffer, &expiration_duration_writer, &serialization_context);
  params->expiration_duration.Set(
      expiration_duration_writer.is_null() ? nullptr : expiration_duration_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->expiration_duration.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null expiration_duration in ClientHints.PersistClientHints request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ClientHintsStubDispatch::Accept(
    ClientHints* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kClientHints_PersistClientHints_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)client_hints::mojom::ClientHints::PersistClientHints",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ClientHints_PersistClientHints_Params_Data* params =
          reinterpret_cast<internal::ClientHints_PersistClientHints_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_primary_origin{};
      std::vector<::blink::mojom::WebClientHintsType> p_client_hints{};
      base::TimeDelta p_expiration_duration{};
      ClientHints_PersistClientHints_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPrimaryOrigin(&p_primary_origin))
        success = false;
      if (!input_data_view.ReadClientHints(&p_client_hints))
        success = false;
      if (!input_data_view.ReadExpirationDuration(&p_expiration_duration))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ClientHints::PersistClientHints deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PersistClientHints(
std::move(p_primary_origin), 
std::move(p_client_hints), 
std::move(p_expiration_duration));
      return true;
    }
  }
  return false;
}

// static
bool ClientHintsStubDispatch::AcceptWithResponder(
    ClientHints* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kClientHints_PersistClientHints_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)client_hints::mojom::ClientHints::PersistClientHints",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ClientHintsRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ClientHints RequestValidator");

  switch (message->header()->name) {
    case internal::kClientHints_PersistClientHints_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClientHints_PersistClientHints_Params_Data>(
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

void ClientHintsInterceptorForTesting::PersistClientHints(const url::Origin& primary_origin, const std::vector<::blink::mojom::WebClientHintsType>& client_hints, base::TimeDelta expiration_duration) {
  GetForwardingInterface()->PersistClientHints(std::move(primary_origin), std::move(client_hints), std::move(expiration_duration));
}
ClientHintsAsyncWaiter::ClientHintsAsyncWaiter(
    ClientHints* proxy) : proxy_(proxy) {}

ClientHintsAsyncWaiter::~ClientHintsAsyncWaiter() = default;


}  // namespace mojom
}  // namespace client_hints

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif