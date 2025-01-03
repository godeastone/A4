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

#include "components/dom_distiller/content/common/distiller_page_notifier_service.mojom.h"

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

#include "components/dom_distiller/content/common/distiller_page_notifier_service.mojom-shared-message-ids.h"
namespace dom_distiller {
namespace mojom {
const char DistillerPageNotifierService::Name_[] = "dom_distiller.mojom.DistillerPageNotifierService";

DistillerPageNotifierServiceProxy::DistillerPageNotifierServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DistillerPageNotifierServiceProxy::NotifyIsDistillerPage(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "dom_distiller::mojom::DistillerPageNotifierService::NotifyIsDistillerPage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDistillerPageNotifierService_NotifyIsDistillerPage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::dom_distiller::mojom::internal::DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data::BufferWriter
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
bool DistillerPageNotifierServiceStubDispatch::Accept(
    DistillerPageNotifierService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDistillerPageNotifierService_NotifyIsDistillerPage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)dom_distiller::mojom::DistillerPageNotifierService::NotifyIsDistillerPage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data* params =
          reinterpret_cast<internal::DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DistillerPageNotifierService_NotifyIsDistillerPage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DistillerPageNotifierService::NotifyIsDistillerPage deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->NotifyIsDistillerPage();
      return true;
    }
  }
  return false;
}

// static
bool DistillerPageNotifierServiceStubDispatch::AcceptWithResponder(
    DistillerPageNotifierService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDistillerPageNotifierService_NotifyIsDistillerPage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)dom_distiller::mojom::DistillerPageNotifierService::NotifyIsDistillerPage",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool DistillerPageNotifierServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DistillerPageNotifierService RequestValidator");

  switch (message->header()->name) {
    case internal::kDistillerPageNotifierService_NotifyIsDistillerPage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DistillerPageNotifierService_NotifyIsDistillerPage_Params_Data>(
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

void DistillerPageNotifierServiceInterceptorForTesting::NotifyIsDistillerPage() {
  GetForwardingInterface()->NotifyIsDistillerPage();
}
DistillerPageNotifierServiceAsyncWaiter::DistillerPageNotifierServiceAsyncWaiter(
    DistillerPageNotifierService* proxy) : proxy_(proxy) {}

DistillerPageNotifierServiceAsyncWaiter::~DistillerPageNotifierServiceAsyncWaiter() = default;


}  // namespace mojom
}  // namespace dom_distiller

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif