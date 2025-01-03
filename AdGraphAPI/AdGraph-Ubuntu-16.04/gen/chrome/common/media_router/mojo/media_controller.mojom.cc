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

#include "chrome/common/media_router/mojo/media_controller.mojom.h"

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

#include "chrome/common/media_router/mojo/media_controller.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
namespace media_router {
namespace mojom {
const char MediaController::Name_[] = "media_router.mojom.MediaController";

MediaControllerProxy::MediaControllerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaControllerProxy::Play(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaController::Play");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaController_Play_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaController_Play_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerProxy::Pause(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaController::Pause");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaController_Pause_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaController_Pause_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerProxy::SetMute(
    bool in_mute) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaController::SetMute");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaController_SetMute_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaController_SetMute_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->mute = in_mute;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerProxy::SetVolume(
    float in_volume) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaController::SetVolume");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaController_SetVolume_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaController_SetVolume_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->volume = in_volume;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerProxy::Seek(
    base::TimeDelta in_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaController::Seek");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaController_Seek_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaController_Seek_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->time)::BaseType::BufferWriter
      time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_time, buffer, &time_writer, &serialization_context);
  params->time.Set(
      time_writer.is_null() ? nullptr : time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null time in MediaController.Seek request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaControllerProxy::ConnectHangoutsMediaRouteController(
    HangoutsMediaRouteControllerRequest in_controller_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaController::ConnectHangoutsMediaRouteController");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaController_ConnectHangoutsMediaRouteController_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaController_ConnectHangoutsMediaRouteController_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media_router::mojom::HangoutsMediaRouteControllerRequestDataView>(
      in_controller_request, &params->controller_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->controller_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid controller_request in MediaController.ConnectHangoutsMediaRouteController request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool MediaControllerStubDispatch::Accept(
    MediaController* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaController_Play_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaController::Play",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaController_Play_Params_Data* params =
          reinterpret_cast<internal::MediaController_Play_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaController_Play_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaController::Play deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Play();
      return true;
    }
    case internal::kMediaController_Pause_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaController::Pause",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaController_Pause_Params_Data* params =
          reinterpret_cast<internal::MediaController_Pause_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaController_Pause_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaController::Pause deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Pause();
      return true;
    }
    case internal::kMediaController_SetMute_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaController::SetMute",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaController_SetMute_Params_Data* params =
          reinterpret_cast<internal::MediaController_SetMute_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_mute{};
      MediaController_SetMute_ParamsDataView input_data_view(params, &serialization_context);
      
      p_mute = input_data_view.mute();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaController::SetMute deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetMute(
std::move(p_mute));
      return true;
    }
    case internal::kMediaController_SetVolume_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaController::SetVolume",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaController_SetVolume_Params_Data* params =
          reinterpret_cast<internal::MediaController_SetVolume_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      float p_volume{};
      MediaController_SetVolume_ParamsDataView input_data_view(params, &serialization_context);
      
      p_volume = input_data_view.volume();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaController::SetVolume deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetVolume(
std::move(p_volume));
      return true;
    }
    case internal::kMediaController_Seek_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaController::Seek",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaController_Seek_Params_Data* params =
          reinterpret_cast<internal::MediaController_Seek_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::TimeDelta p_time{};
      MediaController_Seek_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTime(&p_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaController::Seek deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Seek(
std::move(p_time));
      return true;
    }
    case internal::kMediaController_ConnectHangoutsMediaRouteController_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaController::ConnectHangoutsMediaRouteController",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaController_ConnectHangoutsMediaRouteController_Params_Data* params =
          reinterpret_cast<internal::MediaController_ConnectHangoutsMediaRouteController_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      HangoutsMediaRouteControllerRequest p_controller_request{};
      MediaController_ConnectHangoutsMediaRouteController_ParamsDataView input_data_view(params, &serialization_context);
      
      p_controller_request =
          input_data_view.TakeControllerRequest<decltype(p_controller_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaController::ConnectHangoutsMediaRouteController deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ConnectHangoutsMediaRouteController(
std::move(p_controller_request));
      return true;
    }
  }
  return false;
}

// static
bool MediaControllerStubDispatch::AcceptWithResponder(
    MediaController* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaController_Play_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaController::Play",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaController_Pause_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaController::Pause",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaController_SetMute_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaController::SetMute",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaController_SetVolume_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaController::SetVolume",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaController_Seek_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaController::Seek",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaController_ConnectHangoutsMediaRouteController_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaController::ConnectHangoutsMediaRouteController",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool MediaControllerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaController RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaController_Play_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaController_Play_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaController_Pause_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaController_Pause_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaController_SetMute_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaController_SetMute_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaController_SetVolume_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaController_SetVolume_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaController_Seek_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaController_Seek_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaController_ConnectHangoutsMediaRouteController_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaController_ConnectHangoutsMediaRouteController_Params_Data>(
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

void MediaControllerInterceptorForTesting::Play() {
  GetForwardingInterface()->Play();
}
void MediaControllerInterceptorForTesting::Pause() {
  GetForwardingInterface()->Pause();
}
void MediaControllerInterceptorForTesting::SetMute(bool mute) {
  GetForwardingInterface()->SetMute(std::move(mute));
}
void MediaControllerInterceptorForTesting::SetVolume(float volume) {
  GetForwardingInterface()->SetVolume(std::move(volume));
}
void MediaControllerInterceptorForTesting::Seek(base::TimeDelta time) {
  GetForwardingInterface()->Seek(std::move(time));
}
void MediaControllerInterceptorForTesting::ConnectHangoutsMediaRouteController(HangoutsMediaRouteControllerRequest controller_request) {
  GetForwardingInterface()->ConnectHangoutsMediaRouteController(std::move(controller_request));
}
MediaControllerAsyncWaiter::MediaControllerAsyncWaiter(
    MediaController* proxy) : proxy_(proxy) {}

MediaControllerAsyncWaiter::~MediaControllerAsyncWaiter() = default;


const char HangoutsMediaRouteController::Name_[] = "media_router.mojom.HangoutsMediaRouteController";

HangoutsMediaRouteControllerProxy::HangoutsMediaRouteControllerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void HangoutsMediaRouteControllerProxy::SetLocalPresent(
    bool in_local_present) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::HangoutsMediaRouteController::SetLocalPresent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHangoutsMediaRouteController_SetLocalPresent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::HangoutsMediaRouteController_SetLocalPresent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->local_present = in_local_present;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool HangoutsMediaRouteControllerStubDispatch::Accept(
    HangoutsMediaRouteController* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kHangoutsMediaRouteController_SetLocalPresent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::HangoutsMediaRouteController::SetLocalPresent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::HangoutsMediaRouteController_SetLocalPresent_Params_Data* params =
          reinterpret_cast<internal::HangoutsMediaRouteController_SetLocalPresent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_local_present{};
      HangoutsMediaRouteController_SetLocalPresent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_local_present = input_data_view.local_present();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "HangoutsMediaRouteController::SetLocalPresent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetLocalPresent(
std::move(p_local_present));
      return true;
    }
  }
  return false;
}

// static
bool HangoutsMediaRouteControllerStubDispatch::AcceptWithResponder(
    HangoutsMediaRouteController* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kHangoutsMediaRouteController_SetLocalPresent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::HangoutsMediaRouteController::SetLocalPresent",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool HangoutsMediaRouteControllerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "HangoutsMediaRouteController RequestValidator");

  switch (message->header()->name) {
    case internal::kHangoutsMediaRouteController_SetLocalPresent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::HangoutsMediaRouteController_SetLocalPresent_Params_Data>(
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

void HangoutsMediaRouteControllerInterceptorForTesting::SetLocalPresent(bool local_present) {
  GetForwardingInterface()->SetLocalPresent(std::move(local_present));
}
HangoutsMediaRouteControllerAsyncWaiter::HangoutsMediaRouteControllerAsyncWaiter(
    HangoutsMediaRouteController* proxy) : proxy_(proxy) {}

HangoutsMediaRouteControllerAsyncWaiter::~HangoutsMediaRouteControllerAsyncWaiter() = default;


}  // namespace mojom
}  // namespace media_router

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif