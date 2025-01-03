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

#include "services/device/public/mojom/nfc_provider.mojom-blink.h"

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

#include "services/device/public/mojom/nfc_provider.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace device {
namespace mojom {
namespace blink {
const char NFCProvider::Name_[] = "device.mojom.NFCProvider";

NFCProviderProxy::NFCProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NFCProviderProxy::GetNFCForHost(
    int32_t in_host_id, ::device::mojom::blink::NFCRequest in_nfc) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "device::mojom::NFCProvider::GetNFCForHost");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNFCProvider_GetNFCForHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::NFCProvider_GetNFCForHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->host_id = in_host_id;
  mojo::internal::Serialize<::device::mojom::NFCRequestDataView>(
      in_nfc, &params->nfc, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->nfc),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid nfc in NFCProvider.GetNFCForHost request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool NFCProviderStubDispatch::Accept(
    NFCProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNFCProvider_GetNFCForHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::NFCProvider::GetNFCForHost",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NFCProvider_GetNFCForHost_Params_Data* params =
          reinterpret_cast<internal::NFCProvider_GetNFCForHost_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_host_id{};
      ::device::mojom::blink::NFCRequest p_nfc{};
      NFCProvider_GetNFCForHost_ParamsDataView input_data_view(params, &serialization_context);
      
      p_host_id = input_data_view.host_id();
      p_nfc =
          input_data_view.TakeNfc<decltype(p_nfc)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "NFCProvider::GetNFCForHost deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetNFCForHost(
std::move(p_host_id), 
std::move(p_nfc));
      return true;
    }
  }
  return false;
}

// static
bool NFCProviderStubDispatch::AcceptWithResponder(
    NFCProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNFCProvider_GetNFCForHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)device::mojom::NFCProvider::GetNFCForHost",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool NFCProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NFCProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kNFCProvider_GetNFCForHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NFCProvider_GetNFCForHost_Params_Data>(
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

void NFCProviderInterceptorForTesting::GetNFCForHost(int32_t host_id, ::device::mojom::blink::NFCRequest nfc) {
  GetForwardingInterface()->GetNFCForHost(std::move(host_id), std::move(nfc));
}
NFCProviderAsyncWaiter::NFCProviderAsyncWaiter(
    NFCProvider* proxy) : proxy_(proxy) {}

NFCProviderAsyncWaiter::~NFCProviderAsyncWaiter() = default;


}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif