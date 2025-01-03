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

#include "extensions/common/mojo/guest_view.mojom.h"

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

#include "extensions/common/mojo/guest_view.mojom-shared-message-ids.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace extensions {
namespace mojom {
const char GuestView::Name_[] = "extensions.mojom.GuestView";

GuestViewProxy::GuestViewProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void GuestViewProxy::CreateEmbeddedMimeHandlerViewGuest(
    int32_t in_render_frame_id, int32_t in_tab_id, const GURL& in_original_url, int32_t in_element_instance_id, const gfx::Size& in_element_size, ::content::mojom::TransferrableURLLoaderPtr in_transferrable_url_loader) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "extensions::mojom::GuestView::CreateEmbeddedMimeHandlerViewGuest");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGuestView_CreateEmbeddedMimeHandlerViewGuest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::extensions::mojom::internal::GuestView_CreateEmbeddedMimeHandlerViewGuest_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->render_frame_id = in_render_frame_id;
  params->tab_id = in_tab_id;
  typename decltype(params->original_url)::BaseType::BufferWriter
      original_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_original_url, buffer, &original_url_writer, &serialization_context);
  params->original_url.Set(
      original_url_writer.is_null() ? nullptr : original_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->original_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null original_url in GuestView.CreateEmbeddedMimeHandlerViewGuest request");
  params->element_instance_id = in_element_instance_id;
  typename decltype(params->element_size)::BaseType::BufferWriter
      element_size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_element_size, buffer, &element_size_writer, &serialization_context);
  params->element_size.Set(
      element_size_writer.is_null() ? nullptr : element_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->element_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null element_size in GuestView.CreateEmbeddedMimeHandlerViewGuest request");
  typename decltype(params->transferrable_url_loader)::BaseType::BufferWriter
      transferrable_url_loader_writer;
  mojo::internal::Serialize<::content::mojom::TransferrableURLLoaderDataView>(
      in_transferrable_url_loader, buffer, &transferrable_url_loader_writer, &serialization_context);
  params->transferrable_url_loader.Set(
      transferrable_url_loader_writer.is_null() ? nullptr : transferrable_url_loader_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->transferrable_url_loader.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null transferrable_url_loader in GuestView.CreateEmbeddedMimeHandlerViewGuest request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool GuestViewStubDispatch::Accept(
    GuestView* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kGuestView_CreateEmbeddedMimeHandlerViewGuest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)extensions::mojom::GuestView::CreateEmbeddedMimeHandlerViewGuest",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GuestView_CreateEmbeddedMimeHandlerViewGuest_Params_Data* params =
          reinterpret_cast<internal::GuestView_CreateEmbeddedMimeHandlerViewGuest_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_render_frame_id{};
      int32_t p_tab_id{};
      GURL p_original_url{};
      int32_t p_element_instance_id{};
      gfx::Size p_element_size{};
      ::content::mojom::TransferrableURLLoaderPtr p_transferrable_url_loader{};
      GuestView_CreateEmbeddedMimeHandlerViewGuest_ParamsDataView input_data_view(params, &serialization_context);
      
      p_render_frame_id = input_data_view.render_frame_id();
      p_tab_id = input_data_view.tab_id();
      if (!input_data_view.ReadOriginalUrl(&p_original_url))
        success = false;
      p_element_instance_id = input_data_view.element_instance_id();
      if (!input_data_view.ReadElementSize(&p_element_size))
        success = false;
      if (!input_data_view.ReadTransferrableUrlLoader(&p_transferrable_url_loader))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GuestView::CreateEmbeddedMimeHandlerViewGuest deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateEmbeddedMimeHandlerViewGuest(
std::move(p_render_frame_id), 
std::move(p_tab_id), 
std::move(p_original_url), 
std::move(p_element_instance_id), 
std::move(p_element_size), 
std::move(p_transferrable_url_loader));
      return true;
    }
  }
  return false;
}

// static
bool GuestViewStubDispatch::AcceptWithResponder(
    GuestView* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kGuestView_CreateEmbeddedMimeHandlerViewGuest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)extensions::mojom::GuestView::CreateEmbeddedMimeHandlerViewGuest",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool GuestViewRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "GuestView RequestValidator");

  switch (message->header()->name) {
    case internal::kGuestView_CreateEmbeddedMimeHandlerViewGuest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GuestView_CreateEmbeddedMimeHandlerViewGuest_Params_Data>(
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

void GuestViewInterceptorForTesting::CreateEmbeddedMimeHandlerViewGuest(int32_t render_frame_id, int32_t tab_id, const GURL& original_url, int32_t element_instance_id, const gfx::Size& element_size, ::content::mojom::TransferrableURLLoaderPtr transferrable_url_loader) {
  GetForwardingInterface()->CreateEmbeddedMimeHandlerViewGuest(std::move(render_frame_id), std::move(tab_id), std::move(original_url), std::move(element_instance_id), std::move(element_size), std::move(transferrable_url_loader));
}
GuestViewAsyncWaiter::GuestViewAsyncWaiter(
    GuestView* proxy) : proxy_(proxy) {}

GuestViewAsyncWaiter::~GuestViewAsyncWaiter() = default;


}  // namespace mojom
}  // namespace extensions

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif