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

#include "content/common/media/peer_connection_tracker.mojom.h"

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

#include "content/common/media/peer_connection_tracker.mojom-shared-message-ids.h"
namespace content {
namespace mojom {
const char PeerConnectionTrackerHost::Name_[] = "content.mojom.PeerConnectionTrackerHost";

PeerConnectionTrackerHostProxy::PeerConnectionTrackerHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PeerConnectionTrackerHostProxy::RemovePeerConnection(
    int32_t in_lid) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::PeerConnectionTrackerHost::RemovePeerConnection");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPeerConnectionTrackerHost_RemovePeerConnection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::PeerConnectionTrackerHost_RemovePeerConnection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->lid = in_lid;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PeerConnectionTrackerHostProxy::UpdatePeerConnection(
    int32_t in_lid, const std::string& in_type, const std::string& in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::PeerConnectionTrackerHost::UpdatePeerConnection");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPeerConnectionTrackerHost_UpdatePeerConnection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::PeerConnectionTrackerHost_UpdatePeerConnection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->lid = in_lid;
  typename decltype(params->type)::BaseType::BufferWriter
      type_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_type, buffer, &type_writer, &serialization_context);
  params->type.Set(
      type_writer.is_null() ? nullptr : type_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null type in PeerConnectionTrackerHost.UpdatePeerConnection request");
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in PeerConnectionTrackerHost.UpdatePeerConnection request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PeerConnectionTrackerHostProxy::GetUserMedia(
    const std::string& in_origin, bool in_audio, bool in_video, const std::string& in_audio_constraints, const std::string& in_video_constraints) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::PeerConnectionTrackerHost::GetUserMedia");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPeerConnectionTrackerHost_GetUserMedia_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::PeerConnectionTrackerHost_GetUserMedia_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in PeerConnectionTrackerHost.GetUserMedia request");
  params->audio = in_audio;
  params->video = in_video;
  typename decltype(params->audio_constraints)::BaseType::BufferWriter
      audio_constraints_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_audio_constraints, buffer, &audio_constraints_writer, &serialization_context);
  params->audio_constraints.Set(
      audio_constraints_writer.is_null() ? nullptr : audio_constraints_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->audio_constraints.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null audio_constraints in PeerConnectionTrackerHost.GetUserMedia request");
  typename decltype(params->video_constraints)::BaseType::BufferWriter
      video_constraints_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_video_constraints, buffer, &video_constraints_writer, &serialization_context);
  params->video_constraints.Set(
      video_constraints_writer.is_null() ? nullptr : video_constraints_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->video_constraints.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null video_constraints in PeerConnectionTrackerHost.GetUserMedia request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PeerConnectionTrackerHostProxy::WebRtcEventLogWrite(
    int32_t in_lid, const std::string& in_output) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::PeerConnectionTrackerHost::WebRtcEventLogWrite");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPeerConnectionTrackerHost_WebRtcEventLogWrite_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::PeerConnectionTrackerHost_WebRtcEventLogWrite_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->lid = in_lid;
  typename decltype(params->output)::BaseType::BufferWriter
      output_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_output, buffer, &output_writer, &serialization_context);
  params->output.Set(
      output_writer.is_null() ? nullptr : output_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->output.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null output in PeerConnectionTrackerHost.WebRtcEventLogWrite request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PeerConnectionTrackerHostStubDispatch::Accept(
    PeerConnectionTrackerHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPeerConnectionTrackerHost_RemovePeerConnection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::PeerConnectionTrackerHost::RemovePeerConnection",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PeerConnectionTrackerHost_RemovePeerConnection_Params_Data* params =
          reinterpret_cast<internal::PeerConnectionTrackerHost_RemovePeerConnection_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_lid{};
      PeerConnectionTrackerHost_RemovePeerConnection_ParamsDataView input_data_view(params, &serialization_context);
      
      p_lid = input_data_view.lid();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PeerConnectionTrackerHost::RemovePeerConnection deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemovePeerConnection(
std::move(p_lid));
      return true;
    }
    case internal::kPeerConnectionTrackerHost_UpdatePeerConnection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::PeerConnectionTrackerHost::UpdatePeerConnection",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PeerConnectionTrackerHost_UpdatePeerConnection_Params_Data* params =
          reinterpret_cast<internal::PeerConnectionTrackerHost_UpdatePeerConnection_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_lid{};
      std::string p_type{};
      std::string p_value{};
      PeerConnectionTrackerHost_UpdatePeerConnection_ParamsDataView input_data_view(params, &serialization_context);
      
      p_lid = input_data_view.lid();
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PeerConnectionTrackerHost::UpdatePeerConnection deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpdatePeerConnection(
std::move(p_lid), 
std::move(p_type), 
std::move(p_value));
      return true;
    }
    case internal::kPeerConnectionTrackerHost_GetUserMedia_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::PeerConnectionTrackerHost::GetUserMedia",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PeerConnectionTrackerHost_GetUserMedia_Params_Data* params =
          reinterpret_cast<internal::PeerConnectionTrackerHost_GetUserMedia_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_origin{};
      bool p_audio{};
      bool p_video{};
      std::string p_audio_constraints{};
      std::string p_video_constraints{};
      PeerConnectionTrackerHost_GetUserMedia_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_audio = input_data_view.audio();
      p_video = input_data_view.video();
      if (!input_data_view.ReadAudioConstraints(&p_audio_constraints))
        success = false;
      if (!input_data_view.ReadVideoConstraints(&p_video_constraints))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PeerConnectionTrackerHost::GetUserMedia deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetUserMedia(
std::move(p_origin), 
std::move(p_audio), 
std::move(p_video), 
std::move(p_audio_constraints), 
std::move(p_video_constraints));
      return true;
    }
    case internal::kPeerConnectionTrackerHost_WebRtcEventLogWrite_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::PeerConnectionTrackerHost::WebRtcEventLogWrite",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PeerConnectionTrackerHost_WebRtcEventLogWrite_Params_Data* params =
          reinterpret_cast<internal::PeerConnectionTrackerHost_WebRtcEventLogWrite_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_lid{};
      std::string p_output{};
      PeerConnectionTrackerHost_WebRtcEventLogWrite_ParamsDataView input_data_view(params, &serialization_context);
      
      p_lid = input_data_view.lid();
      if (!input_data_view.ReadOutput(&p_output))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PeerConnectionTrackerHost::WebRtcEventLogWrite deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WebRtcEventLogWrite(
std::move(p_lid), 
std::move(p_output));
      return true;
    }
  }
  return false;
}

// static
bool PeerConnectionTrackerHostStubDispatch::AcceptWithResponder(
    PeerConnectionTrackerHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPeerConnectionTrackerHost_RemovePeerConnection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::PeerConnectionTrackerHost::RemovePeerConnection",
               "message", message->name());
#endif
      break;
    }
    case internal::kPeerConnectionTrackerHost_UpdatePeerConnection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::PeerConnectionTrackerHost::UpdatePeerConnection",
               "message", message->name());
#endif
      break;
    }
    case internal::kPeerConnectionTrackerHost_GetUserMedia_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::PeerConnectionTrackerHost::GetUserMedia",
               "message", message->name());
#endif
      break;
    }
    case internal::kPeerConnectionTrackerHost_WebRtcEventLogWrite_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::PeerConnectionTrackerHost::WebRtcEventLogWrite",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PeerConnectionTrackerHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PeerConnectionTrackerHost RequestValidator");

  switch (message->header()->name) {
    case internal::kPeerConnectionTrackerHost_RemovePeerConnection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PeerConnectionTrackerHost_RemovePeerConnection_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPeerConnectionTrackerHost_UpdatePeerConnection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PeerConnectionTrackerHost_UpdatePeerConnection_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPeerConnectionTrackerHost_GetUserMedia_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PeerConnectionTrackerHost_GetUserMedia_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPeerConnectionTrackerHost_WebRtcEventLogWrite_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PeerConnectionTrackerHost_WebRtcEventLogWrite_Params_Data>(
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

void PeerConnectionTrackerHostInterceptorForTesting::RemovePeerConnection(int32_t lid) {
  GetForwardingInterface()->RemovePeerConnection(std::move(lid));
}
void PeerConnectionTrackerHostInterceptorForTesting::UpdatePeerConnection(int32_t lid, const std::string& type, const std::string& value) {
  GetForwardingInterface()->UpdatePeerConnection(std::move(lid), std::move(type), std::move(value));
}
void PeerConnectionTrackerHostInterceptorForTesting::GetUserMedia(const std::string& origin, bool audio, bool video, const std::string& audio_constraints, const std::string& video_constraints) {
  GetForwardingInterface()->GetUserMedia(std::move(origin), std::move(audio), std::move(video), std::move(audio_constraints), std::move(video_constraints));
}
void PeerConnectionTrackerHostInterceptorForTesting::WebRtcEventLogWrite(int32_t lid, const std::string& output) {
  GetForwardingInterface()->WebRtcEventLogWrite(std::move(lid), std::move(output));
}
PeerConnectionTrackerHostAsyncWaiter::PeerConnectionTrackerHostAsyncWaiter(
    PeerConnectionTrackerHost* proxy) : proxy_(proxy) {}

PeerConnectionTrackerHostAsyncWaiter::~PeerConnectionTrackerHostAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif