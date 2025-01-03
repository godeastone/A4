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

#include "content/common/render_frame_metadata.mojom.h"

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

#include "content/common/render_frame_metadata.mojom-shared-message-ids.h"
#include "content/common/render_frame_metadata_struct_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/selection_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/selection_bound_struct_traits.h"
namespace content {
namespace mojom {
RenderFrameMetadata::RenderFrameMetadata()
    : root_background_color(),
      root_scroll_offset(),
      is_scroll_offset_at_top(),
      selection(),
      is_mobile_optimized(),
      device_scale_factor(),
      viewport_size_in_pixels(),
      local_surface_id(),
      top_controls_height(),
      top_controls_shown_ratio(),
      bottom_controls_height(),
      bottom_controls_shown_ratio() {}

RenderFrameMetadata::RenderFrameMetadata(
    uint32_t root_background_color_in,
    const base::Optional<gfx::Vector2dF>& root_scroll_offset_in,
    bool is_scroll_offset_at_top_in,
    const viz::Selection<gfx::SelectionBound>& selection_in,
    bool is_mobile_optimized_in,
    float device_scale_factor_in,
    const gfx::Size& viewport_size_in_pixels_in,
    const base::Optional<viz::LocalSurfaceId>& local_surface_id_in,
    float top_controls_height_in,
    float top_controls_shown_ratio_in,
    float bottom_controls_height_in,
    float bottom_controls_shown_ratio_in)
    : root_background_color(std::move(root_background_color_in)),
      root_scroll_offset(std::move(root_scroll_offset_in)),
      is_scroll_offset_at_top(std::move(is_scroll_offset_at_top_in)),
      selection(std::move(selection_in)),
      is_mobile_optimized(std::move(is_mobile_optimized_in)),
      device_scale_factor(std::move(device_scale_factor_in)),
      viewport_size_in_pixels(std::move(viewport_size_in_pixels_in)),
      local_surface_id(std::move(local_surface_id_in)),
      top_controls_height(std::move(top_controls_height_in)),
      top_controls_shown_ratio(std::move(top_controls_shown_ratio_in)),
      bottom_controls_height(std::move(bottom_controls_height_in)),
      bottom_controls_shown_ratio(std::move(bottom_controls_shown_ratio_in)) {}

RenderFrameMetadata::~RenderFrameMetadata() = default;

bool RenderFrameMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char RenderFrameMetadataObserver::Name_[] = "content.mojom.RenderFrameMetadataObserver";

RenderFrameMetadataObserverProxy::RenderFrameMetadataObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RenderFrameMetadataObserverProxy::ReportAllFrameSubmissionsForTesting(
    bool in_enabled) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderFrameMetadataObserver::ReportAllFrameSubmissionsForTesting");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->enabled = in_enabled;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RenderFrameMetadataObserverStubDispatch::Accept(
    RenderFrameMetadataObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderFrameMetadataObserver::ReportAllFrameSubmissionsForTesting",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params_Data* params =
          reinterpret_cast<internal::RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_enabled{};
      RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_ParamsDataView input_data_view(params, &serialization_context);
      
      p_enabled = input_data_view.enabled();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RenderFrameMetadataObserver::ReportAllFrameSubmissionsForTesting deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReportAllFrameSubmissionsForTesting(
std::move(p_enabled));
      return true;
    }
  }
  return false;
}

// static
bool RenderFrameMetadataObserverStubDispatch::AcceptWithResponder(
    RenderFrameMetadataObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderFrameMetadataObserver::ReportAllFrameSubmissionsForTesting",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool RenderFrameMetadataObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RenderFrameMetadataObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kRenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderFrameMetadataObserver_ReportAllFrameSubmissionsForTesting_Params_Data>(
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

void RenderFrameMetadataObserverInterceptorForTesting::ReportAllFrameSubmissionsForTesting(bool enabled) {
  GetForwardingInterface()->ReportAllFrameSubmissionsForTesting(std::move(enabled));
}
RenderFrameMetadataObserverAsyncWaiter::RenderFrameMetadataObserverAsyncWaiter(
    RenderFrameMetadataObserver* proxy) : proxy_(proxy) {}

RenderFrameMetadataObserverAsyncWaiter::~RenderFrameMetadataObserverAsyncWaiter() = default;


const char RenderFrameMetadataObserverClient::Name_[] = "content.mojom.RenderFrameMetadataObserverClient";

RenderFrameMetadataObserverClientProxy::RenderFrameMetadataObserverClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void RenderFrameMetadataObserverClientProxy::OnRenderFrameMetadataChanged(
    uint32_t in_frame_token, const cc::RenderFrameMetadata& in_metadata) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderFrameMetadataObserverClient::OnRenderFrameMetadataChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_token = in_frame_token;
  typename decltype(params->metadata)::BaseType::BufferWriter
      metadata_writer;
  mojo::internal::Serialize<::content::mojom::RenderFrameMetadataDataView>(
      in_metadata, buffer, &metadata_writer, &serialization_context);
  params->metadata.Set(
      metadata_writer.is_null() ? nullptr : metadata_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->metadata.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null metadata in RenderFrameMetadataObserverClient.OnRenderFrameMetadataChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void RenderFrameMetadataObserverClientProxy::OnFrameSubmissionForTesting(
    uint32_t in_frame_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::RenderFrameMetadataObserverClient::OnFrameSubmissionForTesting");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kRenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_token = in_frame_token;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool RenderFrameMetadataObserverClientStubDispatch::Accept(
    RenderFrameMetadataObserverClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kRenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderFrameMetadataObserverClient::OnRenderFrameMetadataChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params_Data* params =
          reinterpret_cast<internal::RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_frame_token{};
      cc::RenderFrameMetadata p_metadata{};
      RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_token = input_data_view.frame_token();
      if (!input_data_view.ReadMetadata(&p_metadata))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RenderFrameMetadataObserverClient::OnRenderFrameMetadataChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnRenderFrameMetadataChanged(
std::move(p_frame_token), 
std::move(p_metadata));
      return true;
    }
    case internal::kRenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderFrameMetadataObserverClient::OnFrameSubmissionForTesting",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params_Data* params =
          reinterpret_cast<internal::RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_frame_token{};
      RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_token = input_data_view.frame_token();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RenderFrameMetadataObserverClient::OnFrameSubmissionForTesting deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnFrameSubmissionForTesting(
std::move(p_frame_token));
      return true;
    }
  }
  return false;
}

// static
bool RenderFrameMetadataObserverClientStubDispatch::AcceptWithResponder(
    RenderFrameMetadataObserverClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kRenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderFrameMetadataObserverClient::OnRenderFrameMetadataChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kRenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::RenderFrameMetadataObserverClient::OnFrameSubmissionForTesting",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool RenderFrameMetadataObserverClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "RenderFrameMetadataObserverClient RequestValidator");

  switch (message->header()->name) {
    case internal::kRenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderFrameMetadataObserverClient_OnRenderFrameMetadataChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kRenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderFrameMetadataObserverClient_OnFrameSubmissionForTesting_Params_Data>(
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

void RenderFrameMetadataObserverClientInterceptorForTesting::OnRenderFrameMetadataChanged(uint32_t frame_token, const cc::RenderFrameMetadata& metadata) {
  GetForwardingInterface()->OnRenderFrameMetadataChanged(std::move(frame_token), std::move(metadata));
}
void RenderFrameMetadataObserverClientInterceptorForTesting::OnFrameSubmissionForTesting(uint32_t frame_token) {
  GetForwardingInterface()->OnFrameSubmissionForTesting(std::move(frame_token));
}
RenderFrameMetadataObserverClientAsyncWaiter::RenderFrameMetadataObserverClientAsyncWaiter(
    RenderFrameMetadataObserverClient* proxy) : proxy_(proxy) {}

RenderFrameMetadataObserverClientAsyncWaiter::~RenderFrameMetadataObserverClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::RenderFrameMetadata::DataView, ::content::mojom::RenderFrameMetadataPtr>::Read(
    ::content::mojom::RenderFrameMetadata::DataView input,
    ::content::mojom::RenderFrameMetadataPtr* output) {
  bool success = true;
  ::content::mojom::RenderFrameMetadataPtr result(::content::mojom::RenderFrameMetadata::New());
  
      result->root_background_color = input.root_background_color();
      if (!input.ReadRootScrollOffset(&result->root_scroll_offset))
        success = false;
      result->is_scroll_offset_at_top = input.is_scroll_offset_at_top();
      if (!input.ReadSelection(&result->selection))
        success = false;
      result->is_mobile_optimized = input.is_mobile_optimized();
      result->device_scale_factor = input.device_scale_factor();
      if (!input.ReadViewportSizeInPixels(&result->viewport_size_in_pixels))
        success = false;
      if (!input.ReadLocalSurfaceId(&result->local_surface_id))
        success = false;
      result->top_controls_height = input.top_controls_height();
      result->top_controls_shown_ratio = input.top_controls_shown_ratio();
      result->bottom_controls_height = input.bottom_controls_height();
      result->bottom_controls_shown_ratio = input.bottom_controls_shown_ratio();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif