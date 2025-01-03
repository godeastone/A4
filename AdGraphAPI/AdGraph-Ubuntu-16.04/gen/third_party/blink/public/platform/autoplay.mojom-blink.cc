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

#include "third_party/blink/public/platform/autoplay.mojom-blink.h"

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

#include "third_party/blink/public/platform/autoplay.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
namespace blink {
namespace mojom {
namespace blink {
const char AutoplayConfigurationClient::Name_[] = "blink.mojom.AutoplayConfigurationClient";

AutoplayConfigurationClientProxy::AutoplayConfigurationClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AutoplayConfigurationClientProxy::AddAutoplayFlags(
    const scoped_refptr<const ::blink::SecurityOrigin>& in_origin, int32_t in_flags) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::AutoplayConfigurationClient::AddAutoplayFlags");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAutoplayConfigurationClient_AddAutoplayFlags_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AutoplayConfigurationClient_AddAutoplayFlags_Params_Data::BufferWriter
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
      "null origin in AutoplayConfigurationClient.AddAutoplayFlags request");
  params->flags = in_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AutoplayConfigurationClientStubDispatch::Accept(
    AutoplayConfigurationClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAutoplayConfigurationClient_AddAutoplayFlags_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::AutoplayConfigurationClient::AddAutoplayFlags",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AutoplayConfigurationClient_AddAutoplayFlags_Params_Data* params =
          reinterpret_cast<internal::AutoplayConfigurationClient_AddAutoplayFlags_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      scoped_refptr<const ::blink::SecurityOrigin> p_origin{};
      int32_t p_flags{};
      AutoplayConfigurationClient_AddAutoplayFlags_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_flags = input_data_view.flags();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AutoplayConfigurationClient::AddAutoplayFlags deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddAutoplayFlags(
std::move(p_origin), 
std::move(p_flags));
      return true;
    }
  }
  return false;
}

// static
bool AutoplayConfigurationClientStubDispatch::AcceptWithResponder(
    AutoplayConfigurationClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAutoplayConfigurationClient_AddAutoplayFlags_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::AutoplayConfigurationClient::AddAutoplayFlags",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool AutoplayConfigurationClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AutoplayConfigurationClient RequestValidator");

  switch (message->header()->name) {
    case internal::kAutoplayConfigurationClient_AddAutoplayFlags_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AutoplayConfigurationClient_AddAutoplayFlags_Params_Data>(
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

void AutoplayConfigurationClientInterceptorForTesting::AddAutoplayFlags(const scoped_refptr<const ::blink::SecurityOrigin>& origin, int32_t flags) {
  GetForwardingInterface()->AddAutoplayFlags(std::move(origin), std::move(flags));
}
AutoplayConfigurationClientAsyncWaiter::AutoplayConfigurationClientAsyncWaiter(
    AutoplayConfigurationClient* proxy) : proxy_(proxy) {}

AutoplayConfigurationClientAsyncWaiter::~AutoplayConfigurationClientAsyncWaiter() = default;


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