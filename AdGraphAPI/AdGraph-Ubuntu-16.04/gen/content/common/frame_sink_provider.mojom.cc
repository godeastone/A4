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

#include "content/common/frame_sink_provider.mojom.h"

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

#include "content/common/frame_sink_provider.mojom-shared-message-ids.h"
namespace content {
namespace mojom {
const char FrameSinkProvider::Name_[] = "content.mojom.FrameSinkProvider";

FrameSinkProviderProxy::FrameSinkProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FrameSinkProviderProxy::CreateForWidget(
    int32_t in_widget_id, ::viz::mojom::CompositorFrameSinkRequest in_compositor_frame_sink_request, ::viz::mojom::CompositorFrameSinkClientPtr in_compositor_frame_sink_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameSinkProvider::CreateForWidget");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkProvider_CreateForWidget_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameSinkProvider_CreateForWidget_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->widget_id = in_widget_id;
  mojo::internal::Serialize<::viz::mojom::CompositorFrameSinkRequestDataView>(
      in_compositor_frame_sink_request, &params->compositor_frame_sink_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->compositor_frame_sink_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid compositor_frame_sink_request in FrameSinkProvider.CreateForWidget request");
  mojo::internal::Serialize<::viz::mojom::CompositorFrameSinkClientPtrDataView>(
      in_compositor_frame_sink_client, &params->compositor_frame_sink_client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->compositor_frame_sink_client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid compositor_frame_sink_client in FrameSinkProvider.CreateForWidget request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkProviderProxy::RegisterRenderFrameMetadataObserver(
    int32_t in_widget_id, ::content::mojom::RenderFrameMetadataObserverClientRequest in_render_frame_metadata_observer_client_request, ::content::mojom::RenderFrameMetadataObserverPtr in_render_frame_metadata_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::FrameSinkProvider::RegisterRenderFrameMetadataObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkProvider_RegisterRenderFrameMetadataObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->widget_id = in_widget_id;
  mojo::internal::Serialize<::content::mojom::RenderFrameMetadataObserverClientRequestDataView>(
      in_render_frame_metadata_observer_client_request, &params->render_frame_metadata_observer_client_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->render_frame_metadata_observer_client_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid render_frame_metadata_observer_client_request in FrameSinkProvider.RegisterRenderFrameMetadataObserver request");
  mojo::internal::Serialize<::content::mojom::RenderFrameMetadataObserverPtrDataView>(
      in_render_frame_metadata_observer, &params->render_frame_metadata_observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->render_frame_metadata_observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid render_frame_metadata_observer in FrameSinkProvider.RegisterRenderFrameMetadataObserver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool FrameSinkProviderStubDispatch::Accept(
    FrameSinkProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFrameSinkProvider_CreateForWidget_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameSinkProvider::CreateForWidget",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkProvider_CreateForWidget_Params_Data* params =
          reinterpret_cast<internal::FrameSinkProvider_CreateForWidget_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_widget_id{};
      ::viz::mojom::CompositorFrameSinkRequest p_compositor_frame_sink_request{};
      ::viz::mojom::CompositorFrameSinkClientPtr p_compositor_frame_sink_client{};
      FrameSinkProvider_CreateForWidget_ParamsDataView input_data_view(params, &serialization_context);
      
      p_widget_id = input_data_view.widget_id();
      p_compositor_frame_sink_request =
          input_data_view.TakeCompositorFrameSinkRequest<decltype(p_compositor_frame_sink_request)>();
      p_compositor_frame_sink_client =
          input_data_view.TakeCompositorFrameSinkClient<decltype(p_compositor_frame_sink_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkProvider::CreateForWidget deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateForWidget(
std::move(p_widget_id), 
std::move(p_compositor_frame_sink_request), 
std::move(p_compositor_frame_sink_client));
      return true;
    }
    case internal::kFrameSinkProvider_RegisterRenderFrameMetadataObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameSinkProvider::RegisterRenderFrameMetadataObserver",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params_Data* params =
          reinterpret_cast<internal::FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_widget_id{};
      ::content::mojom::RenderFrameMetadataObserverClientRequest p_render_frame_metadata_observer_client_request{};
      ::content::mojom::RenderFrameMetadataObserverPtr p_render_frame_metadata_observer{};
      FrameSinkProvider_RegisterRenderFrameMetadataObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_widget_id = input_data_view.widget_id();
      p_render_frame_metadata_observer_client_request =
          input_data_view.TakeRenderFrameMetadataObserverClientRequest<decltype(p_render_frame_metadata_observer_client_request)>();
      p_render_frame_metadata_observer =
          input_data_view.TakeRenderFrameMetadataObserver<decltype(p_render_frame_metadata_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkProvider::RegisterRenderFrameMetadataObserver deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RegisterRenderFrameMetadataObserver(
std::move(p_widget_id), 
std::move(p_render_frame_metadata_observer_client_request), 
std::move(p_render_frame_metadata_observer));
      return true;
    }
  }
  return false;
}

// static
bool FrameSinkProviderStubDispatch::AcceptWithResponder(
    FrameSinkProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFrameSinkProvider_CreateForWidget_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameSinkProvider::CreateForWidget",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkProvider_RegisterRenderFrameMetadataObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::FrameSinkProvider::RegisterRenderFrameMetadataObserver",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool FrameSinkProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameSinkProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kFrameSinkProvider_CreateForWidget_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkProvider_CreateForWidget_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkProvider_RegisterRenderFrameMetadataObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkProvider_RegisterRenderFrameMetadataObserver_Params_Data>(
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

void FrameSinkProviderInterceptorForTesting::CreateForWidget(int32_t widget_id, ::viz::mojom::CompositorFrameSinkRequest compositor_frame_sink_request, ::viz::mojom::CompositorFrameSinkClientPtr compositor_frame_sink_client) {
  GetForwardingInterface()->CreateForWidget(std::move(widget_id), std::move(compositor_frame_sink_request), std::move(compositor_frame_sink_client));
}
void FrameSinkProviderInterceptorForTesting::RegisterRenderFrameMetadataObserver(int32_t widget_id, ::content::mojom::RenderFrameMetadataObserverClientRequest render_frame_metadata_observer_client_request, ::content::mojom::RenderFrameMetadataObserverPtr render_frame_metadata_observer) {
  GetForwardingInterface()->RegisterRenderFrameMetadataObserver(std::move(widget_id), std::move(render_frame_metadata_observer_client_request), std::move(render_frame_metadata_observer));
}
FrameSinkProviderAsyncWaiter::FrameSinkProviderAsyncWaiter(
    FrameSinkProvider* proxy) : proxy_(proxy) {}

FrameSinkProviderAsyncWaiter::~FrameSinkProviderAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif