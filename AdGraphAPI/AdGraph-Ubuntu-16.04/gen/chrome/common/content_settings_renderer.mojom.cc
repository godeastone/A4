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

#include "chrome/common/content_settings_renderer.mojom.h"

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

#include "chrome/common/content_settings_renderer.mojom-shared-message-ids.h"
namespace chrome {
namespace mojom {
const char ContentSettingsRenderer::Name_[] = "chrome.mojom.ContentSettingsRenderer";

ContentSettingsRendererProxy::ContentSettingsRendererProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ContentSettingsRendererProxy::SetAllowRunningInsecureContent(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ContentSettingsRenderer::SetAllowRunningInsecureContent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentSettingsRenderer_SetAllowRunningInsecureContent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ContentSettingsRenderer_SetAllowRunningInsecureContent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ContentSettingsRendererProxy::SetAsInterstitial(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ContentSettingsRenderer::SetAsInterstitial");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentSettingsRenderer_SetAsInterstitial_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ContentSettingsRenderer_SetAsInterstitial_Params_Data::BufferWriter
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
bool ContentSettingsRendererStubDispatch::Accept(
    ContentSettingsRenderer* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kContentSettingsRenderer_SetAllowRunningInsecureContent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ContentSettingsRenderer::SetAllowRunningInsecureContent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ContentSettingsRenderer_SetAllowRunningInsecureContent_Params_Data* params =
          reinterpret_cast<internal::ContentSettingsRenderer_SetAllowRunningInsecureContent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ContentSettingsRenderer_SetAllowRunningInsecureContent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContentSettingsRenderer::SetAllowRunningInsecureContent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetAllowRunningInsecureContent();
      return true;
    }
    case internal::kContentSettingsRenderer_SetAsInterstitial_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ContentSettingsRenderer::SetAsInterstitial",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ContentSettingsRenderer_SetAsInterstitial_Params_Data* params =
          reinterpret_cast<internal::ContentSettingsRenderer_SetAsInterstitial_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ContentSettingsRenderer_SetAsInterstitial_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ContentSettingsRenderer::SetAsInterstitial deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetAsInterstitial();
      return true;
    }
  }
  return false;
}

// static
bool ContentSettingsRendererStubDispatch::AcceptWithResponder(
    ContentSettingsRenderer* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kContentSettingsRenderer_SetAllowRunningInsecureContent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ContentSettingsRenderer::SetAllowRunningInsecureContent",
               "message", message->name());
#endif
      break;
    }
    case internal::kContentSettingsRenderer_SetAsInterstitial_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ContentSettingsRenderer::SetAsInterstitial",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ContentSettingsRendererRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ContentSettingsRenderer RequestValidator");

  switch (message->header()->name) {
    case internal::kContentSettingsRenderer_SetAllowRunningInsecureContent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentSettingsRenderer_SetAllowRunningInsecureContent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentSettingsRenderer_SetAsInterstitial_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentSettingsRenderer_SetAsInterstitial_Params_Data>(
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

void ContentSettingsRendererInterceptorForTesting::SetAllowRunningInsecureContent() {
  GetForwardingInterface()->SetAllowRunningInsecureContent();
}
void ContentSettingsRendererInterceptorForTesting::SetAsInterstitial() {
  GetForwardingInterface()->SetAsInterstitial();
}
ContentSettingsRendererAsyncWaiter::ContentSettingsRendererAsyncWaiter(
    ContentSettingsRenderer* proxy) : proxy_(proxy) {}

ContentSettingsRendererAsyncWaiter::~ContentSettingsRendererAsyncWaiter() = default;


}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif