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

#include "media/mojo/interfaces/watch_time_recorder.mojom.h"

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

#include "media/mojo/interfaces/watch_time_recorder.mojom-shared-message-ids.h"
#include "media/base/ipc/media_param_traits_macros.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace media {
namespace mojom {
PlaybackProperties::PlaybackProperties()
    : audio_codec(),
      video_codec(),
      has_audio(),
      has_video(),
      is_background(),
      is_muted(),
      is_mse(),
      is_eme(),
      is_embedded_media_experience(),
      natural_size() {}

PlaybackProperties::PlaybackProperties(
    media::AudioCodec audio_codec_in,
    media::VideoCodec video_codec_in,
    bool has_audio_in,
    bool has_video_in,
    bool is_background_in,
    bool is_muted_in,
    bool is_mse_in,
    bool is_eme_in,
    bool is_embedded_media_experience_in,
    const gfx::Size& natural_size_in)
    : audio_codec(std::move(audio_codec_in)),
      video_codec(std::move(video_codec_in)),
      has_audio(std::move(has_audio_in)),
      has_video(std::move(has_video_in)),
      is_background(std::move(is_background_in)),
      is_muted(std::move(is_muted_in)),
      is_mse(std::move(is_mse_in)),
      is_eme(std::move(is_eme_in)),
      is_embedded_media_experience(std::move(is_embedded_media_experience_in)),
      natural_size(std::move(natural_size_in)) {}

PlaybackProperties::~PlaybackProperties() = default;

bool PlaybackProperties::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char WatchTimeRecorder::Name_[] = "media.mojom.WatchTimeRecorder";

WatchTimeRecorderProxy::WatchTimeRecorderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WatchTimeRecorderProxy::RecordWatchTime(
    media::WatchTimeKey in_key, base::TimeDelta in_watch_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::WatchTimeRecorder::RecordWatchTime");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWatchTimeRecorder_RecordWatchTime_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::WatchTimeRecorder_RecordWatchTime_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::WatchTimeKey>(
      in_key, &params->key);
  typename decltype(params->watch_time)::BaseType::BufferWriter
      watch_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_watch_time, buffer, &watch_time_writer, &serialization_context);
  params->watch_time.Set(
      watch_time_writer.is_null() ? nullptr : watch_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->watch_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null watch_time in WatchTimeRecorder.RecordWatchTime request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WatchTimeRecorderProxy::FinalizeWatchTime(
    const std::vector<media::WatchTimeKey>& in_watch_time_keys) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::WatchTimeRecorder::FinalizeWatchTime");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWatchTimeRecorder_FinalizeWatchTime_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::WatchTimeRecorder_FinalizeWatchTime_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->watch_time_keys)::BaseType::BufferWriter
      watch_time_keys_writer;
  const mojo::internal::ContainerValidateParams watch_time_keys_validate_params(
      0, ::media::mojom::internal::WatchTimeKey_Data::Validate);
  mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::WatchTimeKey>>(
      in_watch_time_keys, buffer, &watch_time_keys_writer, &watch_time_keys_validate_params,
      &serialization_context);
  params->watch_time_keys.Set(
      watch_time_keys_writer.is_null() ? nullptr : watch_time_keys_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->watch_time_keys.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null watch_time_keys in WatchTimeRecorder.FinalizeWatchTime request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WatchTimeRecorderProxy::OnError(
    media::PipelineStatus in_status) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::WatchTimeRecorder::OnError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWatchTimeRecorder_OnError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::WatchTimeRecorder_OnError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::PipelineStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WatchTimeRecorderProxy::SetAudioDecoderName(
    const std::string& in_name) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::WatchTimeRecorder::SetAudioDecoderName");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWatchTimeRecorder_SetAudioDecoderName_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::WatchTimeRecorder_SetAudioDecoderName_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in WatchTimeRecorder.SetAudioDecoderName request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WatchTimeRecorderProxy::SetVideoDecoderName(
    const std::string& in_name) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::WatchTimeRecorder::SetVideoDecoderName");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWatchTimeRecorder_SetVideoDecoderName_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::WatchTimeRecorder_SetVideoDecoderName_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in WatchTimeRecorder.SetVideoDecoderName request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WatchTimeRecorderProxy::SetAutoplayInitiated(
    bool in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::WatchTimeRecorder::SetAutoplayInitiated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWatchTimeRecorder_SetAutoplayInitiated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::WatchTimeRecorder_SetAutoplayInitiated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->value = in_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WatchTimeRecorderProxy::UpdateUnderflowCount(
    int32_t in_count) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::WatchTimeRecorder::UpdateUnderflowCount");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWatchTimeRecorder_UpdateUnderflowCount_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::WatchTimeRecorder_UpdateUnderflowCount_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->count = in_count;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WatchTimeRecorderStubDispatch::Accept(
    WatchTimeRecorder* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWatchTimeRecorder_RecordWatchTime_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::WatchTimeRecorder::RecordWatchTime",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WatchTimeRecorder_RecordWatchTime_Params_Data* params =
          reinterpret_cast<internal::WatchTimeRecorder_RecordWatchTime_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::WatchTimeKey p_key{};
      base::TimeDelta p_watch_time{};
      WatchTimeRecorder_RecordWatchTime_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadWatchTime(&p_watch_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WatchTimeRecorder::RecordWatchTime deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RecordWatchTime(
std::move(p_key), 
std::move(p_watch_time));
      return true;
    }
    case internal::kWatchTimeRecorder_FinalizeWatchTime_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::WatchTimeRecorder::FinalizeWatchTime",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WatchTimeRecorder_FinalizeWatchTime_Params_Data* params =
          reinterpret_cast<internal::WatchTimeRecorder_FinalizeWatchTime_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<media::WatchTimeKey> p_watch_time_keys{};
      WatchTimeRecorder_FinalizeWatchTime_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadWatchTimeKeys(&p_watch_time_keys))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WatchTimeRecorder::FinalizeWatchTime deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FinalizeWatchTime(
std::move(p_watch_time_keys));
      return true;
    }
    case internal::kWatchTimeRecorder_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::WatchTimeRecorder::OnError",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WatchTimeRecorder_OnError_Params_Data* params =
          reinterpret_cast<internal::WatchTimeRecorder_OnError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::PipelineStatus p_status{};
      WatchTimeRecorder_OnError_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStatus(&p_status))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WatchTimeRecorder::OnError deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnError(
std::move(p_status));
      return true;
    }
    case internal::kWatchTimeRecorder_SetAudioDecoderName_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::WatchTimeRecorder::SetAudioDecoderName",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WatchTimeRecorder_SetAudioDecoderName_Params_Data* params =
          reinterpret_cast<internal::WatchTimeRecorder_SetAudioDecoderName_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_name{};
      WatchTimeRecorder_SetAudioDecoderName_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WatchTimeRecorder::SetAudioDecoderName deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetAudioDecoderName(
std::move(p_name));
      return true;
    }
    case internal::kWatchTimeRecorder_SetVideoDecoderName_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::WatchTimeRecorder::SetVideoDecoderName",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WatchTimeRecorder_SetVideoDecoderName_Params_Data* params =
          reinterpret_cast<internal::WatchTimeRecorder_SetVideoDecoderName_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_name{};
      WatchTimeRecorder_SetVideoDecoderName_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WatchTimeRecorder::SetVideoDecoderName deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetVideoDecoderName(
std::move(p_name));
      return true;
    }
    case internal::kWatchTimeRecorder_SetAutoplayInitiated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::WatchTimeRecorder::SetAutoplayInitiated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WatchTimeRecorder_SetAutoplayInitiated_Params_Data* params =
          reinterpret_cast<internal::WatchTimeRecorder_SetAutoplayInitiated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_value{};
      WatchTimeRecorder_SetAutoplayInitiated_ParamsDataView input_data_view(params, &serialization_context);
      
      p_value = input_data_view.value();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WatchTimeRecorder::SetAutoplayInitiated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetAutoplayInitiated(
std::move(p_value));
      return true;
    }
    case internal::kWatchTimeRecorder_UpdateUnderflowCount_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::WatchTimeRecorder::UpdateUnderflowCount",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WatchTimeRecorder_UpdateUnderflowCount_Params_Data* params =
          reinterpret_cast<internal::WatchTimeRecorder_UpdateUnderflowCount_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_count{};
      WatchTimeRecorder_UpdateUnderflowCount_ParamsDataView input_data_view(params, &serialization_context);
      
      p_count = input_data_view.count();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WatchTimeRecorder::UpdateUnderflowCount deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpdateUnderflowCount(
std::move(p_count));
      return true;
    }
  }
  return false;
}

// static
bool WatchTimeRecorderStubDispatch::AcceptWithResponder(
    WatchTimeRecorder* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWatchTimeRecorder_RecordWatchTime_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::WatchTimeRecorder::RecordWatchTime",
               "message", message->name());
#endif
      break;
    }
    case internal::kWatchTimeRecorder_FinalizeWatchTime_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::WatchTimeRecorder::FinalizeWatchTime",
               "message", message->name());
#endif
      break;
    }
    case internal::kWatchTimeRecorder_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::WatchTimeRecorder::OnError",
               "message", message->name());
#endif
      break;
    }
    case internal::kWatchTimeRecorder_SetAudioDecoderName_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::WatchTimeRecorder::SetAudioDecoderName",
               "message", message->name());
#endif
      break;
    }
    case internal::kWatchTimeRecorder_SetVideoDecoderName_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::WatchTimeRecorder::SetVideoDecoderName",
               "message", message->name());
#endif
      break;
    }
    case internal::kWatchTimeRecorder_SetAutoplayInitiated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::WatchTimeRecorder::SetAutoplayInitiated",
               "message", message->name());
#endif
      break;
    }
    case internal::kWatchTimeRecorder_UpdateUnderflowCount_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::WatchTimeRecorder::UpdateUnderflowCount",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool WatchTimeRecorderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WatchTimeRecorder RequestValidator");

  switch (message->header()->name) {
    case internal::kWatchTimeRecorder_RecordWatchTime_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WatchTimeRecorder_RecordWatchTime_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWatchTimeRecorder_FinalizeWatchTime_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WatchTimeRecorder_FinalizeWatchTime_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWatchTimeRecorder_OnError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WatchTimeRecorder_OnError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWatchTimeRecorder_SetAudioDecoderName_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WatchTimeRecorder_SetAudioDecoderName_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWatchTimeRecorder_SetVideoDecoderName_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WatchTimeRecorder_SetVideoDecoderName_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWatchTimeRecorder_SetAutoplayInitiated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WatchTimeRecorder_SetAutoplayInitiated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWatchTimeRecorder_UpdateUnderflowCount_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WatchTimeRecorder_UpdateUnderflowCount_Params_Data>(
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

void WatchTimeRecorderInterceptorForTesting::RecordWatchTime(media::WatchTimeKey key, base::TimeDelta watch_time) {
  GetForwardingInterface()->RecordWatchTime(std::move(key), std::move(watch_time));
}
void WatchTimeRecorderInterceptorForTesting::FinalizeWatchTime(const std::vector<media::WatchTimeKey>& watch_time_keys) {
  GetForwardingInterface()->FinalizeWatchTime(std::move(watch_time_keys));
}
void WatchTimeRecorderInterceptorForTesting::OnError(media::PipelineStatus status) {
  GetForwardingInterface()->OnError(std::move(status));
}
void WatchTimeRecorderInterceptorForTesting::SetAudioDecoderName(const std::string& name) {
  GetForwardingInterface()->SetAudioDecoderName(std::move(name));
}
void WatchTimeRecorderInterceptorForTesting::SetVideoDecoderName(const std::string& name) {
  GetForwardingInterface()->SetVideoDecoderName(std::move(name));
}
void WatchTimeRecorderInterceptorForTesting::SetAutoplayInitiated(bool value) {
  GetForwardingInterface()->SetAutoplayInitiated(std::move(value));
}
void WatchTimeRecorderInterceptorForTesting::UpdateUnderflowCount(int32_t count) {
  GetForwardingInterface()->UpdateUnderflowCount(std::move(count));
}
WatchTimeRecorderAsyncWaiter::WatchTimeRecorderAsyncWaiter(
    WatchTimeRecorder* proxy) : proxy_(proxy) {}

WatchTimeRecorderAsyncWaiter::~WatchTimeRecorderAsyncWaiter() = default;


}  // namespace mojom
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::PlaybackProperties::DataView, ::media::mojom::PlaybackPropertiesPtr>::Read(
    ::media::mojom::PlaybackProperties::DataView input,
    ::media::mojom::PlaybackPropertiesPtr* output) {
  bool success = true;
  ::media::mojom::PlaybackPropertiesPtr result(::media::mojom::PlaybackProperties::New());
  
      if (!input.ReadAudioCodec(&result->audio_codec))
        success = false;
      if (!input.ReadVideoCodec(&result->video_codec))
        success = false;
      result->has_audio = input.has_audio();
      result->has_video = input.has_video();
      result->is_background = input.is_background();
      result->is_muted = input.is_muted();
      result->is_mse = input.is_mse();
      result->is_eme = input.is_eme();
      result->is_embedded_media_experience = input.is_embedded_media_experience();
      if (!input.ReadNaturalSize(&result->natural_size))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif