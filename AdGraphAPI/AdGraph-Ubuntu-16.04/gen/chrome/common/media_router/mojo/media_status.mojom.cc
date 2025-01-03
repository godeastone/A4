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

#include "chrome/common/media_router/mojo/media_status.mojom.h"

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

#include "chrome/common/media_router/mojo/media_status.mojom-shared-message-ids.h"
#include "chrome/common/media_router/mojo/media_status_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
namespace media_router {
namespace mojom {
MediaStatus::MediaStatus()
    : title(),
      can_play_pause(),
      can_mute(),
      can_set_volume(),
      can_seek(),
      play_state(),
      is_muted(),
      volume(),
      duration(),
      current_time(),
      hangouts_extra_data() {}

MediaStatus::MediaStatus(
    const std::string& title_in,
    bool can_play_pause_in,
    bool can_mute_in,
    bool can_set_volume_in,
    bool can_seek_in,
    MediaStatus::PlayState play_state_in,
    bool is_muted_in,
    float volume_in,
    base::TimeDelta duration_in,
    base::TimeDelta current_time_in,
    HangoutsMediaStatusExtraDataPtr hangouts_extra_data_in)
    : title(std::move(title_in)),
      can_play_pause(std::move(can_play_pause_in)),
      can_mute(std::move(can_mute_in)),
      can_set_volume(std::move(can_set_volume_in)),
      can_seek(std::move(can_seek_in)),
      play_state(std::move(play_state_in)),
      is_muted(std::move(is_muted_in)),
      volume(std::move(volume_in)),
      duration(std::move(duration_in)),
      current_time(std::move(current_time_in)),
      hangouts_extra_data(std::move(hangouts_extra_data_in)) {}

MediaStatus::~MediaStatus() = default;

bool MediaStatus::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
HangoutsMediaStatusExtraData::HangoutsMediaStatusExtraData()
    : local_present() {}

HangoutsMediaStatusExtraData::HangoutsMediaStatusExtraData(
    bool local_present_in)
    : local_present(std::move(local_present_in)) {}

HangoutsMediaStatusExtraData::~HangoutsMediaStatusExtraData() = default;
size_t HangoutsMediaStatusExtraData::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->local_present);
  return seed;
}

bool HangoutsMediaStatusExtraData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char MediaStatusObserver::Name_[] = "media_router.mojom.MediaStatusObserver";

MediaStatusObserverProxy::MediaStatusObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaStatusObserverProxy::OnMediaStatusUpdated(
    const media_router::MediaStatus& in_status) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media_router::mojom::MediaStatusObserver::OnMediaStatusUpdated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaStatusObserver_OnMediaStatusUpdated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media_router::mojom::internal::MediaStatusObserver_OnMediaStatusUpdated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->status)::BaseType::BufferWriter
      status_writer;
  mojo::internal::Serialize<::media_router::mojom::MediaStatusDataView>(
      in_status, buffer, &status_writer, &serialization_context);
  params->status.Set(
      status_writer.is_null() ? nullptr : status_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->status.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null status in MediaStatusObserver.OnMediaStatusUpdated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool MediaStatusObserverStubDispatch::Accept(
    MediaStatusObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaStatusObserver_OnMediaStatusUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaStatusObserver::OnMediaStatusUpdated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaStatusObserver_OnMediaStatusUpdated_Params_Data* params =
          reinterpret_cast<internal::MediaStatusObserver_OnMediaStatusUpdated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media_router::MediaStatus p_status{};
      MediaStatusObserver_OnMediaStatusUpdated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStatus(&p_status))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaStatusObserver::OnMediaStatusUpdated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnMediaStatusUpdated(
std::move(p_status));
      return true;
    }
  }
  return false;
}

// static
bool MediaStatusObserverStubDispatch::AcceptWithResponder(
    MediaStatusObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaStatusObserver_OnMediaStatusUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media_router::mojom::MediaStatusObserver::OnMediaStatusUpdated",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool MediaStatusObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaStatusObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaStatusObserver_OnMediaStatusUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaStatusObserver_OnMediaStatusUpdated_Params_Data>(
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

void MediaStatusObserverInterceptorForTesting::OnMediaStatusUpdated(const media_router::MediaStatus& status) {
  GetForwardingInterface()->OnMediaStatusUpdated(std::move(status));
}
MediaStatusObserverAsyncWaiter::MediaStatusObserverAsyncWaiter(
    MediaStatusObserver* proxy) : proxy_(proxy) {}

MediaStatusObserverAsyncWaiter::~MediaStatusObserverAsyncWaiter() = default;


}  // namespace mojom
}  // namespace media_router

namespace mojo {


// static
bool StructTraits<::media_router::mojom::MediaStatus::DataView, ::media_router::mojom::MediaStatusPtr>::Read(
    ::media_router::mojom::MediaStatus::DataView input,
    ::media_router::mojom::MediaStatusPtr* output) {
  bool success = true;
  ::media_router::mojom::MediaStatusPtr result(::media_router::mojom::MediaStatus::New());
  
      if (!input.ReadTitle(&result->title))
        success = false;
      result->can_play_pause = input.can_play_pause();
      result->can_mute = input.can_mute();
      result->can_set_volume = input.can_set_volume();
      result->can_seek = input.can_seek();
      if (!input.ReadPlayState(&result->play_state))
        success = false;
      result->is_muted = input.is_muted();
      result->volume = input.volume();
      if (!input.ReadDuration(&result->duration))
        success = false;
      if (!input.ReadCurrentTime(&result->current_time))
        success = false;
      if (!input.ReadHangoutsExtraData(&result->hangouts_extra_data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media_router::mojom::HangoutsMediaStatusExtraData::DataView, ::media_router::mojom::HangoutsMediaStatusExtraDataPtr>::Read(
    ::media_router::mojom::HangoutsMediaStatusExtraData::DataView input,
    ::media_router::mojom::HangoutsMediaStatusExtraDataPtr* output) {
  bool success = true;
  ::media_router::mojom::HangoutsMediaStatusExtraDataPtr result(::media_router::mojom::HangoutsMediaStatusExtraData::New());
  
      result->local_present = input.local_present();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif