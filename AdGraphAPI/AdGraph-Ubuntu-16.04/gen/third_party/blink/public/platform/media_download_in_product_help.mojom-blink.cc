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

#include "third_party/blink/public/platform/media_download_in_product_help.mojom-blink.h"

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

#include "third_party/blink/public/platform/media_download_in_product_help.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace blink {
namespace mojom {
namespace blink {
const char MediaDownloadInProductHelp::Name_[] = "blink.mojom.MediaDownloadInProductHelp";

MediaDownloadInProductHelpProxy::MediaDownloadInProductHelpProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaDownloadInProductHelpProxy::ShowInProductHelpWidget(
    const ::blink::WebRect& in_button_rect) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::MediaDownloadInProductHelp::ShowInProductHelpWidget");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaDownloadInProductHelp_ShowInProductHelpWidget_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MediaDownloadInProductHelp_ShowInProductHelpWidget_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->button_rect)::BaseType::BufferWriter
      button_rect_writer;
  mojo::internal::Serialize<::gfx::mojom::RectDataView>(
      in_button_rect, buffer, &button_rect_writer, &serialization_context);
  params->button_rect.Set(
      button_rect_writer.is_null() ? nullptr : button_rect_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->button_rect.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null button_rect in MediaDownloadInProductHelp.ShowInProductHelpWidget request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool MediaDownloadInProductHelpStubDispatch::Accept(
    MediaDownloadInProductHelp* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaDownloadInProductHelp_ShowInProductHelpWidget_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::MediaDownloadInProductHelp::ShowInProductHelpWidget",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaDownloadInProductHelp_ShowInProductHelpWidget_Params_Data* params =
          reinterpret_cast<internal::MediaDownloadInProductHelp_ShowInProductHelpWidget_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::WebRect p_button_rect{};
      MediaDownloadInProductHelp_ShowInProductHelpWidget_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadButtonRect(&p_button_rect))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaDownloadInProductHelp::ShowInProductHelpWidget deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ShowInProductHelpWidget(
std::move(p_button_rect));
      return true;
    }
  }
  return false;
}

// static
bool MediaDownloadInProductHelpStubDispatch::AcceptWithResponder(
    MediaDownloadInProductHelp* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaDownloadInProductHelp_ShowInProductHelpWidget_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::MediaDownloadInProductHelp::ShowInProductHelpWidget",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool MediaDownloadInProductHelpRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaDownloadInProductHelp RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaDownloadInProductHelp_ShowInProductHelpWidget_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaDownloadInProductHelp_ShowInProductHelpWidget_Params_Data>(
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

void MediaDownloadInProductHelpInterceptorForTesting::ShowInProductHelpWidget(const ::blink::WebRect& button_rect) {
  GetForwardingInterface()->ShowInProductHelpWidget(std::move(button_rect));
}
MediaDownloadInProductHelpAsyncWaiter::MediaDownloadInProductHelpAsyncWaiter(
    MediaDownloadInProductHelp* proxy) : proxy_(proxy) {}

MediaDownloadInProductHelpAsyncWaiter::~MediaDownloadInProductHelpAsyncWaiter() = default;


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