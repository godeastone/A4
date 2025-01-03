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

#include "services/video_capture/public/mojom/receiver.mojom.h"

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

#include "services/video_capture/public/mojom/receiver.mojom-shared-message-ids.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "media/capture/ipc/capture_param_traits.h"
#include "media/capture/ipc/capture_param_traits_macros.h"
#include "media/capture/mojom/video_capture_types_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace video_capture {
namespace mojom {
const char Receiver::Name_[] = "video_capture.mojom.Receiver";

ReceiverProxy::ReceiverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ReceiverProxy::OnNewBuffer(
    int32_t in_buffer_id, ::media::mojom::VideoBufferHandlePtr in_buffer_handle) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::Receiver::OnNewBuffer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kReceiver_OnNewBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Receiver_OnNewBuffer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->buffer_id = in_buffer_id;
  typename decltype(params->buffer_handle)::BufferWriter buffer_handle_writer;
  buffer_handle_writer.AllocateInline(buffer, &params->buffer_handle);
  mojo::internal::Serialize<::media::mojom::VideoBufferHandleDataView>(
      in_buffer_handle, buffer, &buffer_handle_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->buffer_handle.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null buffer_handle in Receiver.OnNewBuffer request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ReceiverProxy::OnFrameReadyInBuffer(
    int32_t in_buffer_id, int32_t in_frame_feedback_id, ::video_capture::mojom::ScopedAccessPermissionPtr in_access_permission, ::media::mojom::VideoFrameInfoPtr in_frame_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::Receiver::OnFrameReadyInBuffer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kReceiver_OnFrameReadyInBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Receiver_OnFrameReadyInBuffer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->buffer_id = in_buffer_id;
  params->frame_feedback_id = in_frame_feedback_id;
  mojo::internal::Serialize<::video_capture::mojom::ScopedAccessPermissionPtrDataView>(
      in_access_permission, &params->access_permission, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->access_permission),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid access_permission in Receiver.OnFrameReadyInBuffer request");
  typename decltype(params->frame_info)::BaseType::BufferWriter
      frame_info_writer;
  mojo::internal::Serialize<::media::mojom::VideoFrameInfoDataView>(
      in_frame_info, buffer, &frame_info_writer, &serialization_context);
  params->frame_info.Set(
      frame_info_writer.is_null() ? nullptr : frame_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_info in Receiver.OnFrameReadyInBuffer request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ReceiverProxy::OnBufferRetired(
    int32_t in_buffer_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::Receiver::OnBufferRetired");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kReceiver_OnBufferRetired_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Receiver_OnBufferRetired_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->buffer_id = in_buffer_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ReceiverProxy::OnError(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::Receiver::OnError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kReceiver_OnError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Receiver_OnError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ReceiverProxy::OnLog(
    const std::string& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::Receiver::OnLog");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kReceiver_OnLog_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Receiver_OnLog_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in Receiver.OnLog request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ReceiverProxy::OnStarted(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::Receiver::OnStarted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kReceiver_OnStarted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Receiver_OnStarted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ReceiverProxy::OnStartedUsingGpuDecode(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "video_capture::mojom::Receiver::OnStartedUsingGpuDecode");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kReceiver_OnStartedUsingGpuDecode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::video_capture::mojom::internal::Receiver_OnStartedUsingGpuDecode_Params_Data::BufferWriter
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
bool ReceiverStubDispatch::Accept(
    Receiver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kReceiver_OnNewBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Receiver::OnNewBuffer",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Receiver_OnNewBuffer_Params_Data* params =
          reinterpret_cast<internal::Receiver_OnNewBuffer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_buffer_id{};
      ::media::mojom::VideoBufferHandlePtr p_buffer_handle{};
      Receiver_OnNewBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      p_buffer_id = input_data_view.buffer_id();
      if (!input_data_view.ReadBufferHandle(&p_buffer_handle))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Receiver::OnNewBuffer deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnNewBuffer(
std::move(p_buffer_id), 
std::move(p_buffer_handle));
      return true;
    }
    case internal::kReceiver_OnFrameReadyInBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Receiver::OnFrameReadyInBuffer",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Receiver_OnFrameReadyInBuffer_Params_Data* params =
          reinterpret_cast<internal::Receiver_OnFrameReadyInBuffer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_buffer_id{};
      int32_t p_frame_feedback_id{};
      ::video_capture::mojom::ScopedAccessPermissionPtr p_access_permission{};
      ::media::mojom::VideoFrameInfoPtr p_frame_info{};
      Receiver_OnFrameReadyInBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      p_buffer_id = input_data_view.buffer_id();
      p_frame_feedback_id = input_data_view.frame_feedback_id();
      p_access_permission =
          input_data_view.TakeAccessPermission<decltype(p_access_permission)>();
      if (!input_data_view.ReadFrameInfo(&p_frame_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Receiver::OnFrameReadyInBuffer deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnFrameReadyInBuffer(
std::move(p_buffer_id), 
std::move(p_frame_feedback_id), 
std::move(p_access_permission), 
std::move(p_frame_info));
      return true;
    }
    case internal::kReceiver_OnBufferRetired_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Receiver::OnBufferRetired",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Receiver_OnBufferRetired_Params_Data* params =
          reinterpret_cast<internal::Receiver_OnBufferRetired_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_buffer_id{};
      Receiver_OnBufferRetired_ParamsDataView input_data_view(params, &serialization_context);
      
      p_buffer_id = input_data_view.buffer_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Receiver::OnBufferRetired deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnBufferRetired(
std::move(p_buffer_id));
      return true;
    }
    case internal::kReceiver_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Receiver::OnError",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Receiver_OnError_Params_Data* params =
          reinterpret_cast<internal::Receiver_OnError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Receiver_OnError_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Receiver::OnError deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnError();
      return true;
    }
    case internal::kReceiver_OnLog_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Receiver::OnLog",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Receiver_OnLog_Params_Data* params =
          reinterpret_cast<internal::Receiver_OnLog_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_message{};
      Receiver_OnLog_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Receiver::OnLog deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnLog(
std::move(p_message));
      return true;
    }
    case internal::kReceiver_OnStarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Receiver::OnStarted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Receiver_OnStarted_Params_Data* params =
          reinterpret_cast<internal::Receiver_OnStarted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Receiver_OnStarted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Receiver::OnStarted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnStarted();
      return true;
    }
    case internal::kReceiver_OnStartedUsingGpuDecode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Receiver::OnStartedUsingGpuDecode",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Receiver_OnStartedUsingGpuDecode_Params_Data* params =
          reinterpret_cast<internal::Receiver_OnStartedUsingGpuDecode_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Receiver_OnStartedUsingGpuDecode_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Receiver::OnStartedUsingGpuDecode deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnStartedUsingGpuDecode();
      return true;
    }
  }
  return false;
}

// static
bool ReceiverStubDispatch::AcceptWithResponder(
    Receiver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kReceiver_OnNewBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Receiver::OnNewBuffer",
               "message", message->name());
#endif
      break;
    }
    case internal::kReceiver_OnFrameReadyInBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Receiver::OnFrameReadyInBuffer",
               "message", message->name());
#endif
      break;
    }
    case internal::kReceiver_OnBufferRetired_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Receiver::OnBufferRetired",
               "message", message->name());
#endif
      break;
    }
    case internal::kReceiver_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Receiver::OnError",
               "message", message->name());
#endif
      break;
    }
    case internal::kReceiver_OnLog_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Receiver::OnLog",
               "message", message->name());
#endif
      break;
    }
    case internal::kReceiver_OnStarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Receiver::OnStarted",
               "message", message->name());
#endif
      break;
    }
    case internal::kReceiver_OnStartedUsingGpuDecode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)video_capture::mojom::Receiver::OnStartedUsingGpuDecode",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ReceiverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Receiver RequestValidator");

  switch (message->header()->name) {
    case internal::kReceiver_OnNewBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Receiver_OnNewBuffer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kReceiver_OnFrameReadyInBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Receiver_OnFrameReadyInBuffer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kReceiver_OnBufferRetired_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Receiver_OnBufferRetired_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kReceiver_OnError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Receiver_OnError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kReceiver_OnLog_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Receiver_OnLog_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kReceiver_OnStarted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Receiver_OnStarted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kReceiver_OnStartedUsingGpuDecode_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Receiver_OnStartedUsingGpuDecode_Params_Data>(
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

void ReceiverInterceptorForTesting::OnNewBuffer(int32_t buffer_id, ::media::mojom::VideoBufferHandlePtr buffer_handle) {
  GetForwardingInterface()->OnNewBuffer(std::move(buffer_id), std::move(buffer_handle));
}
void ReceiverInterceptorForTesting::OnFrameReadyInBuffer(int32_t buffer_id, int32_t frame_feedback_id, ::video_capture::mojom::ScopedAccessPermissionPtr access_permission, ::media::mojom::VideoFrameInfoPtr frame_info) {
  GetForwardingInterface()->OnFrameReadyInBuffer(std::move(buffer_id), std::move(frame_feedback_id), std::move(access_permission), std::move(frame_info));
}
void ReceiverInterceptorForTesting::OnBufferRetired(int32_t buffer_id) {
  GetForwardingInterface()->OnBufferRetired(std::move(buffer_id));
}
void ReceiverInterceptorForTesting::OnError() {
  GetForwardingInterface()->OnError();
}
void ReceiverInterceptorForTesting::OnLog(const std::string& message) {
  GetForwardingInterface()->OnLog(std::move(message));
}
void ReceiverInterceptorForTesting::OnStarted() {
  GetForwardingInterface()->OnStarted();
}
void ReceiverInterceptorForTesting::OnStartedUsingGpuDecode() {
  GetForwardingInterface()->OnStartedUsingGpuDecode();
}
ReceiverAsyncWaiter::ReceiverAsyncWaiter(
    Receiver* proxy) : proxy_(proxy) {}

ReceiverAsyncWaiter::~ReceiverAsyncWaiter() = default;


}  // namespace mojom
}  // namespace video_capture

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif