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

#include "services/viz/privileged/interfaces/compositing/frame_sink_video_capture.mojom.h"

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

#include "services/viz/privileged/interfaces/compositing/frame_sink_video_capture.mojom-shared-message-ids.h"
#include "media/base/ipc/media_param_traits_macros.h"
#include "media/capture/ipc/capture_param_traits.h"
#include "media/capture/ipc/capture_param_traits_macros.h"
#include "media/capture/mojom/video_capture_types_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace viz {
namespace mojom {
const char FrameSinkVideoConsumerFrameCallbacks::Name_[] = "viz.mojom.FrameSinkVideoConsumerFrameCallbacks";

FrameSinkVideoConsumerFrameCallbacksProxy::FrameSinkVideoConsumerFrameCallbacksProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FrameSinkVideoConsumerFrameCallbacksProxy::Done(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkVideoConsumerFrameCallbacks::Done");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkVideoConsumerFrameCallbacks_Done_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkVideoConsumerFrameCallbacks_Done_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkVideoConsumerFrameCallbacksProxy::ProvideFeedback(
    double in_utilization) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkVideoConsumerFrameCallbacks::ProvideFeedback");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->utilization = in_utilization;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool FrameSinkVideoConsumerFrameCallbacksStubDispatch::Accept(
    FrameSinkVideoConsumerFrameCallbacks* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFrameSinkVideoConsumerFrameCallbacks_Done_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoConsumerFrameCallbacks::Done",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkVideoConsumerFrameCallbacks_Done_Params_Data* params =
          reinterpret_cast<internal::FrameSinkVideoConsumerFrameCallbacks_Done_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameSinkVideoConsumerFrameCallbacks_Done_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkVideoConsumerFrameCallbacks::Done deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Done();
      return true;
    }
    case internal::kFrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoConsumerFrameCallbacks::ProvideFeedback",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params_Data* params =
          reinterpret_cast<internal::FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      double p_utilization{};
      FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_ParamsDataView input_data_view(params, &serialization_context);
      
      p_utilization = input_data_view.utilization();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkVideoConsumerFrameCallbacks::ProvideFeedback deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ProvideFeedback(
std::move(p_utilization));
      return true;
    }
  }
  return false;
}

// static
bool FrameSinkVideoConsumerFrameCallbacksStubDispatch::AcceptWithResponder(
    FrameSinkVideoConsumerFrameCallbacks* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFrameSinkVideoConsumerFrameCallbacks_Done_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoConsumerFrameCallbacks::Done",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoConsumerFrameCallbacks::ProvideFeedback",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool FrameSinkVideoConsumerFrameCallbacksRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameSinkVideoConsumerFrameCallbacks RequestValidator");

  switch (message->header()->name) {
    case internal::kFrameSinkVideoConsumerFrameCallbacks_Done_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkVideoConsumerFrameCallbacks_Done_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkVideoConsumerFrameCallbacks_ProvideFeedback_Params_Data>(
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

void FrameSinkVideoConsumerFrameCallbacksInterceptorForTesting::Done() {
  GetForwardingInterface()->Done();
}
void FrameSinkVideoConsumerFrameCallbacksInterceptorForTesting::ProvideFeedback(double utilization) {
  GetForwardingInterface()->ProvideFeedback(std::move(utilization));
}
FrameSinkVideoConsumerFrameCallbacksAsyncWaiter::FrameSinkVideoConsumerFrameCallbacksAsyncWaiter(
    FrameSinkVideoConsumerFrameCallbacks* proxy) : proxy_(proxy) {}

FrameSinkVideoConsumerFrameCallbacksAsyncWaiter::~FrameSinkVideoConsumerFrameCallbacksAsyncWaiter() = default;


const char FrameSinkVideoConsumer::Name_[] = "viz.mojom.FrameSinkVideoConsumer";

FrameSinkVideoConsumerProxy::FrameSinkVideoConsumerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FrameSinkVideoConsumerProxy::OnFrameCaptured(
    mojo::ScopedSharedBufferHandle in_buffer, uint32_t in_buffer_size, ::media::mojom::VideoFrameInfoPtr in_info, const gfx::Rect& in_update_rect, const gfx::Rect& in_content_rect, FrameSinkVideoConsumerFrameCallbacksPtr in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkVideoConsumer::OnFrameCaptured");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkVideoConsumer_OnFrameCaptured_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkVideoConsumer_OnFrameCaptured_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_buffer, &params->buffer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->buffer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid buffer in FrameSinkVideoConsumer.OnFrameCaptured request");
  params->buffer_size = in_buffer_size;
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::media::mojom::VideoFrameInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in FrameSinkVideoConsumer.OnFrameCaptured request");
  typename decltype(params->update_rect)::BaseType::BufferWriter
      update_rect_writer;
  mojo::internal::Serialize<::gfx::mojom::RectDataView>(
      in_update_rect, buffer, &update_rect_writer, &serialization_context);
  params->update_rect.Set(
      update_rect_writer.is_null() ? nullptr : update_rect_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->update_rect.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null update_rect in FrameSinkVideoConsumer.OnFrameCaptured request");
  typename decltype(params->content_rect)::BaseType::BufferWriter
      content_rect_writer;
  mojo::internal::Serialize<::gfx::mojom::RectDataView>(
      in_content_rect, buffer, &content_rect_writer, &serialization_context);
  params->content_rect.Set(
      content_rect_writer.is_null() ? nullptr : content_rect_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->content_rect.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null content_rect in FrameSinkVideoConsumer.OnFrameCaptured request");
  mojo::internal::Serialize<::viz::mojom::FrameSinkVideoConsumerFrameCallbacksPtrDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid callbacks in FrameSinkVideoConsumer.OnFrameCaptured request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkVideoConsumerProxy::OnTargetLost(
    const viz::FrameSinkId& in_frame_sink_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkVideoConsumer::OnTargetLost");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkVideoConsumer_OnTargetLost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkVideoConsumer_OnTargetLost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in FrameSinkVideoConsumer.OnTargetLost request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkVideoConsumerProxy::OnStopped(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkVideoConsumer::OnStopped");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkVideoConsumer_OnStopped_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkVideoConsumer_OnStopped_Params_Data::BufferWriter
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
bool FrameSinkVideoConsumerStubDispatch::Accept(
    FrameSinkVideoConsumer* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFrameSinkVideoConsumer_OnFrameCaptured_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoConsumer::OnFrameCaptured",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkVideoConsumer_OnFrameCaptured_Params_Data* params =
          reinterpret_cast<internal::FrameSinkVideoConsumer_OnFrameCaptured_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedSharedBufferHandle p_buffer{};
      uint32_t p_buffer_size{};
      ::media::mojom::VideoFrameInfoPtr p_info{};
      gfx::Rect p_update_rect{};
      gfx::Rect p_content_rect{};
      FrameSinkVideoConsumerFrameCallbacksPtr p_callbacks{};
      FrameSinkVideoConsumer_OnFrameCaptured_ParamsDataView input_data_view(params, &serialization_context);
      
      p_buffer = input_data_view.TakeBuffer();
      p_buffer_size = input_data_view.buffer_size();
      if (!input_data_view.ReadInfo(&p_info))
        success = false;
      if (!input_data_view.ReadUpdateRect(&p_update_rect))
        success = false;
      if (!input_data_view.ReadContentRect(&p_content_rect))
        success = false;
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkVideoConsumer::OnFrameCaptured deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnFrameCaptured(
std::move(p_buffer), 
std::move(p_buffer_size), 
std::move(p_info), 
std::move(p_update_rect), 
std::move(p_content_rect), 
std::move(p_callbacks));
      return true;
    }
    case internal::kFrameSinkVideoConsumer_OnTargetLost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoConsumer::OnTargetLost",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkVideoConsumer_OnTargetLost_Params_Data* params =
          reinterpret_cast<internal::FrameSinkVideoConsumer_OnTargetLost_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::FrameSinkId p_frame_sink_id{};
      FrameSinkVideoConsumer_OnTargetLost_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkVideoConsumer::OnTargetLost deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnTargetLost(
std::move(p_frame_sink_id));
      return true;
    }
    case internal::kFrameSinkVideoConsumer_OnStopped_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoConsumer::OnStopped",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkVideoConsumer_OnStopped_Params_Data* params =
          reinterpret_cast<internal::FrameSinkVideoConsumer_OnStopped_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameSinkVideoConsumer_OnStopped_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkVideoConsumer::OnStopped deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnStopped();
      return true;
    }
  }
  return false;
}

// static
bool FrameSinkVideoConsumerStubDispatch::AcceptWithResponder(
    FrameSinkVideoConsumer* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFrameSinkVideoConsumer_OnFrameCaptured_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoConsumer::OnFrameCaptured",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkVideoConsumer_OnTargetLost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoConsumer::OnTargetLost",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkVideoConsumer_OnStopped_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoConsumer::OnStopped",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool FrameSinkVideoConsumerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameSinkVideoConsumer RequestValidator");

  switch (message->header()->name) {
    case internal::kFrameSinkVideoConsumer_OnFrameCaptured_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkVideoConsumer_OnFrameCaptured_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkVideoConsumer_OnTargetLost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkVideoConsumer_OnTargetLost_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkVideoConsumer_OnStopped_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkVideoConsumer_OnStopped_Params_Data>(
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

void FrameSinkVideoConsumerInterceptorForTesting::OnFrameCaptured(mojo::ScopedSharedBufferHandle buffer, uint32_t buffer_size, ::media::mojom::VideoFrameInfoPtr info, const gfx::Rect& update_rect, const gfx::Rect& content_rect, FrameSinkVideoConsumerFrameCallbacksPtr callbacks) {
  GetForwardingInterface()->OnFrameCaptured(std::move(buffer), std::move(buffer_size), std::move(info), std::move(update_rect), std::move(content_rect), std::move(callbacks));
}
void FrameSinkVideoConsumerInterceptorForTesting::OnTargetLost(const viz::FrameSinkId& frame_sink_id) {
  GetForwardingInterface()->OnTargetLost(std::move(frame_sink_id));
}
void FrameSinkVideoConsumerInterceptorForTesting::OnStopped() {
  GetForwardingInterface()->OnStopped();
}
FrameSinkVideoConsumerAsyncWaiter::FrameSinkVideoConsumerAsyncWaiter(
    FrameSinkVideoConsumer* proxy) : proxy_(proxy) {}

FrameSinkVideoConsumerAsyncWaiter::~FrameSinkVideoConsumerAsyncWaiter() = default;


const char FrameSinkVideoCapturer::Name_[] = "viz.mojom.FrameSinkVideoCapturer";

FrameSinkVideoCapturerProxy::FrameSinkVideoCapturerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FrameSinkVideoCapturerProxy::SetFormat(
    media::VideoPixelFormat in_format, media::ColorSpace in_color_space) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkVideoCapturer::SetFormat");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkVideoCapturer_SetFormat_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkVideoCapturer_SetFormat_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::VideoPixelFormat>(
      in_format, &params->format);
  mojo::internal::Serialize<::media::mojom::ColorSpace>(
      in_color_space, &params->color_space);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkVideoCapturerProxy::SetMinCapturePeriod(
    base::TimeDelta in_min_period) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkVideoCapturer::SetMinCapturePeriod");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkVideoCapturer_SetMinCapturePeriod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkVideoCapturer_SetMinCapturePeriod_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->min_period)::BaseType::BufferWriter
      min_period_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_min_period, buffer, &min_period_writer, &serialization_context);
  params->min_period.Set(
      min_period_writer.is_null() ? nullptr : min_period_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->min_period.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null min_period in FrameSinkVideoCapturer.SetMinCapturePeriod request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkVideoCapturerProxy::SetMinSizeChangePeriod(
    base::TimeDelta in_min_period) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkVideoCapturer::SetMinSizeChangePeriod");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkVideoCapturer_SetMinSizeChangePeriod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->min_period)::BaseType::BufferWriter
      min_period_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_min_period, buffer, &min_period_writer, &serialization_context);
  params->min_period.Set(
      min_period_writer.is_null() ? nullptr : min_period_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->min_period.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null min_period in FrameSinkVideoCapturer.SetMinSizeChangePeriod request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkVideoCapturerProxy::SetResolutionConstraints(
    const gfx::Size& in_min_size, const gfx::Size& in_max_size, bool in_use_fixed_aspect_ratio) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkVideoCapturer::SetResolutionConstraints");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkVideoCapturer_SetResolutionConstraints_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkVideoCapturer_SetResolutionConstraints_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->min_size)::BaseType::BufferWriter
      min_size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_min_size, buffer, &min_size_writer, &serialization_context);
  params->min_size.Set(
      min_size_writer.is_null() ? nullptr : min_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->min_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null min_size in FrameSinkVideoCapturer.SetResolutionConstraints request");
  typename decltype(params->max_size)::BaseType::BufferWriter
      max_size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_max_size, buffer, &max_size_writer, &serialization_context);
  params->max_size.Set(
      max_size_writer.is_null() ? nullptr : max_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->max_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null max_size in FrameSinkVideoCapturer.SetResolutionConstraints request");
  params->use_fixed_aspect_ratio = in_use_fixed_aspect_ratio;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkVideoCapturerProxy::SetAutoThrottlingEnabled(
    bool in_enabled) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkVideoCapturer::SetAutoThrottlingEnabled");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkVideoCapturer_SetAutoThrottlingEnabled_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params_Data::BufferWriter
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

void FrameSinkVideoCapturerProxy::ChangeTarget(
    const viz::FrameSinkId& in_frame_sink_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkVideoCapturer::ChangeTarget");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkVideoCapturer_ChangeTarget_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkVideoCapturer_ChangeTarget_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in FrameSinkVideoCapturer.ChangeTarget request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkVideoCapturerProxy::Start(
    FrameSinkVideoConsumerPtr in_consumer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkVideoCapturer::Start");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkVideoCapturer_Start_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkVideoCapturer_Start_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::viz::mojom::FrameSinkVideoConsumerPtrDataView>(
      in_consumer, &params->consumer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->consumer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid consumer in FrameSinkVideoCapturer.Start request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkVideoCapturerProxy::Stop(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkVideoCapturer::Stop");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkVideoCapturer_Stop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkVideoCapturer_Stop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkVideoCapturerProxy::RequestRefreshFrame(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkVideoCapturer::RequestRefreshFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkVideoCapturer_RequestRefreshFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkVideoCapturer_RequestRefreshFrame_Params_Data::BufferWriter
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
bool FrameSinkVideoCapturerStubDispatch::Accept(
    FrameSinkVideoCapturer* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFrameSinkVideoCapturer_SetFormat_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::SetFormat",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkVideoCapturer_SetFormat_Params_Data* params =
          reinterpret_cast<internal::FrameSinkVideoCapturer_SetFormat_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::VideoPixelFormat p_format{};
      media::ColorSpace p_color_space{};
      FrameSinkVideoCapturer_SetFormat_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFormat(&p_format))
        success = false;
      if (!input_data_view.ReadColorSpace(&p_color_space))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkVideoCapturer::SetFormat deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetFormat(
std::move(p_format), 
std::move(p_color_space));
      return true;
    }
    case internal::kFrameSinkVideoCapturer_SetMinCapturePeriod_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::SetMinCapturePeriod",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkVideoCapturer_SetMinCapturePeriod_Params_Data* params =
          reinterpret_cast<internal::FrameSinkVideoCapturer_SetMinCapturePeriod_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::TimeDelta p_min_period{};
      FrameSinkVideoCapturer_SetMinCapturePeriod_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMinPeriod(&p_min_period))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkVideoCapturer::SetMinCapturePeriod deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetMinCapturePeriod(
std::move(p_min_period));
      return true;
    }
    case internal::kFrameSinkVideoCapturer_SetMinSizeChangePeriod_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::SetMinSizeChangePeriod",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params_Data* params =
          reinterpret_cast<internal::FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::TimeDelta p_min_period{};
      FrameSinkVideoCapturer_SetMinSizeChangePeriod_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMinPeriod(&p_min_period))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkVideoCapturer::SetMinSizeChangePeriod deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetMinSizeChangePeriod(
std::move(p_min_period));
      return true;
    }
    case internal::kFrameSinkVideoCapturer_SetResolutionConstraints_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::SetResolutionConstraints",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkVideoCapturer_SetResolutionConstraints_Params_Data* params =
          reinterpret_cast<internal::FrameSinkVideoCapturer_SetResolutionConstraints_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Size p_min_size{};
      gfx::Size p_max_size{};
      bool p_use_fixed_aspect_ratio{};
      FrameSinkVideoCapturer_SetResolutionConstraints_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMinSize(&p_min_size))
        success = false;
      if (!input_data_view.ReadMaxSize(&p_max_size))
        success = false;
      p_use_fixed_aspect_ratio = input_data_view.use_fixed_aspect_ratio();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkVideoCapturer::SetResolutionConstraints deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetResolutionConstraints(
std::move(p_min_size), 
std::move(p_max_size), 
std::move(p_use_fixed_aspect_ratio));
      return true;
    }
    case internal::kFrameSinkVideoCapturer_SetAutoThrottlingEnabled_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::SetAutoThrottlingEnabled",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params_Data* params =
          reinterpret_cast<internal::FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_enabled{};
      FrameSinkVideoCapturer_SetAutoThrottlingEnabled_ParamsDataView input_data_view(params, &serialization_context);
      
      p_enabled = input_data_view.enabled();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkVideoCapturer::SetAutoThrottlingEnabled deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetAutoThrottlingEnabled(
std::move(p_enabled));
      return true;
    }
    case internal::kFrameSinkVideoCapturer_ChangeTarget_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::ChangeTarget",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkVideoCapturer_ChangeTarget_Params_Data* params =
          reinterpret_cast<internal::FrameSinkVideoCapturer_ChangeTarget_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::FrameSinkId p_frame_sink_id{};
      FrameSinkVideoCapturer_ChangeTarget_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkVideoCapturer::ChangeTarget deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ChangeTarget(
std::move(p_frame_sink_id));
      return true;
    }
    case internal::kFrameSinkVideoCapturer_Start_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::Start",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkVideoCapturer_Start_Params_Data* params =
          reinterpret_cast<internal::FrameSinkVideoCapturer_Start_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameSinkVideoConsumerPtr p_consumer{};
      FrameSinkVideoCapturer_Start_ParamsDataView input_data_view(params, &serialization_context);
      
      p_consumer =
          input_data_view.TakeConsumer<decltype(p_consumer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkVideoCapturer::Start deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Start(
std::move(p_consumer));
      return true;
    }
    case internal::kFrameSinkVideoCapturer_Stop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::Stop",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkVideoCapturer_Stop_Params_Data* params =
          reinterpret_cast<internal::FrameSinkVideoCapturer_Stop_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameSinkVideoCapturer_Stop_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkVideoCapturer::Stop deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Stop();
      return true;
    }
    case internal::kFrameSinkVideoCapturer_RequestRefreshFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::RequestRefreshFrame",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkVideoCapturer_RequestRefreshFrame_Params_Data* params =
          reinterpret_cast<internal::FrameSinkVideoCapturer_RequestRefreshFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameSinkVideoCapturer_RequestRefreshFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkVideoCapturer::RequestRefreshFrame deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestRefreshFrame();
      return true;
    }
  }
  return false;
}

// static
bool FrameSinkVideoCapturerStubDispatch::AcceptWithResponder(
    FrameSinkVideoCapturer* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFrameSinkVideoCapturer_SetFormat_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::SetFormat",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkVideoCapturer_SetMinCapturePeriod_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::SetMinCapturePeriod",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkVideoCapturer_SetMinSizeChangePeriod_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::SetMinSizeChangePeriod",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkVideoCapturer_SetResolutionConstraints_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::SetResolutionConstraints",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkVideoCapturer_SetAutoThrottlingEnabled_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::SetAutoThrottlingEnabled",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkVideoCapturer_ChangeTarget_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::ChangeTarget",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkVideoCapturer_Start_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::Start",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkVideoCapturer_Stop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::Stop",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkVideoCapturer_RequestRefreshFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkVideoCapturer::RequestRefreshFrame",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool FrameSinkVideoCapturerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameSinkVideoCapturer RequestValidator");

  switch (message->header()->name) {
    case internal::kFrameSinkVideoCapturer_SetFormat_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkVideoCapturer_SetFormat_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkVideoCapturer_SetMinCapturePeriod_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkVideoCapturer_SetMinCapturePeriod_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkVideoCapturer_SetMinSizeChangePeriod_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkVideoCapturer_SetMinSizeChangePeriod_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkVideoCapturer_SetResolutionConstraints_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkVideoCapturer_SetResolutionConstraints_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkVideoCapturer_SetAutoThrottlingEnabled_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkVideoCapturer_SetAutoThrottlingEnabled_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkVideoCapturer_ChangeTarget_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkVideoCapturer_ChangeTarget_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkVideoCapturer_Start_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkVideoCapturer_Start_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkVideoCapturer_Stop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkVideoCapturer_Stop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkVideoCapturer_RequestRefreshFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkVideoCapturer_RequestRefreshFrame_Params_Data>(
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

void FrameSinkVideoCapturerInterceptorForTesting::SetFormat(media::VideoPixelFormat format, media::ColorSpace color_space) {
  GetForwardingInterface()->SetFormat(std::move(format), std::move(color_space));
}
void FrameSinkVideoCapturerInterceptorForTesting::SetMinCapturePeriod(base::TimeDelta min_period) {
  GetForwardingInterface()->SetMinCapturePeriod(std::move(min_period));
}
void FrameSinkVideoCapturerInterceptorForTesting::SetMinSizeChangePeriod(base::TimeDelta min_period) {
  GetForwardingInterface()->SetMinSizeChangePeriod(std::move(min_period));
}
void FrameSinkVideoCapturerInterceptorForTesting::SetResolutionConstraints(const gfx::Size& min_size, const gfx::Size& max_size, bool use_fixed_aspect_ratio) {
  GetForwardingInterface()->SetResolutionConstraints(std::move(min_size), std::move(max_size), std::move(use_fixed_aspect_ratio));
}
void FrameSinkVideoCapturerInterceptorForTesting::SetAutoThrottlingEnabled(bool enabled) {
  GetForwardingInterface()->SetAutoThrottlingEnabled(std::move(enabled));
}
void FrameSinkVideoCapturerInterceptorForTesting::ChangeTarget(const viz::FrameSinkId& frame_sink_id) {
  GetForwardingInterface()->ChangeTarget(std::move(frame_sink_id));
}
void FrameSinkVideoCapturerInterceptorForTesting::Start(FrameSinkVideoConsumerPtr consumer) {
  GetForwardingInterface()->Start(std::move(consumer));
}
void FrameSinkVideoCapturerInterceptorForTesting::Stop() {
  GetForwardingInterface()->Stop();
}
void FrameSinkVideoCapturerInterceptorForTesting::RequestRefreshFrame() {
  GetForwardingInterface()->RequestRefreshFrame();
}
FrameSinkVideoCapturerAsyncWaiter::FrameSinkVideoCapturerAsyncWaiter(
    FrameSinkVideoCapturer* proxy) : proxy_(proxy) {}

FrameSinkVideoCapturerAsyncWaiter::~FrameSinkVideoCapturerAsyncWaiter() = default;


}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif