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

#include "media/mojo/interfaces/media_metrics_provider.mojom-blink.h"

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

#include "media/mojo/interfaces/media_metrics_provider.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "ipc/ipc_message_utils.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace media {
namespace mojom {
namespace blink {
const char MediaMetricsProvider::Name_[] = "media.mojom.MediaMetricsProvider";

MediaMetricsProviderProxy::MediaMetricsProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaMetricsProviderProxy::Initialize(
    bool in_is_mse, bool in_is_top_frame, const scoped_refptr<const ::blink::SecurityOrigin>& in_untrusted_top_origin) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MediaMetricsProvider::Initialize");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaMetricsProvider_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaMetricsProvider_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->is_mse = in_is_mse;
  params->is_top_frame = in_is_top_frame;
  typename decltype(params->untrusted_top_origin)::BaseType::BufferWriter
      untrusted_top_origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_untrusted_top_origin, buffer, &untrusted_top_origin_writer, &serialization_context);
  params->untrusted_top_origin.Set(
      untrusted_top_origin_writer.is_null() ? nullptr : untrusted_top_origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->untrusted_top_origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null untrusted_top_origin in MediaMetricsProvider.Initialize request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaMetricsProviderProxy::OnError(
    ::media::mojom::blink::PipelineStatus in_status) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MediaMetricsProvider::OnError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaMetricsProvider_OnError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaMetricsProvider_OnError_Params_Data::BufferWriter
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

void MediaMetricsProviderProxy::SetIsEME(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MediaMetricsProvider::SetIsEME");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaMetricsProvider_SetIsEME_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaMetricsProvider_SetIsEME_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaMetricsProviderProxy::SetTimeToMetadata(
    WTF::TimeDelta in_elapsed) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MediaMetricsProvider::SetTimeToMetadata");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaMetricsProvider_SetTimeToMetadata_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaMetricsProvider_SetTimeToMetadata_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->elapsed)::BaseType::BufferWriter
      elapsed_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_elapsed, buffer, &elapsed_writer, &serialization_context);
  params->elapsed.Set(
      elapsed_writer.is_null() ? nullptr : elapsed_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->elapsed.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null elapsed in MediaMetricsProvider.SetTimeToMetadata request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaMetricsProviderProxy::SetTimeToFirstFrame(
    WTF::TimeDelta in_elapsed) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MediaMetricsProvider::SetTimeToFirstFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaMetricsProvider_SetTimeToFirstFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaMetricsProvider_SetTimeToFirstFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->elapsed)::BaseType::BufferWriter
      elapsed_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_elapsed, buffer, &elapsed_writer, &serialization_context);
  params->elapsed.Set(
      elapsed_writer.is_null() ? nullptr : elapsed_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->elapsed.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null elapsed in MediaMetricsProvider.SetTimeToFirstFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaMetricsProviderProxy::SetTimeToPlayReady(
    WTF::TimeDelta in_elapsed) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MediaMetricsProvider::SetTimeToPlayReady");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaMetricsProvider_SetTimeToPlayReady_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaMetricsProvider_SetTimeToPlayReady_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->elapsed)::BaseType::BufferWriter
      elapsed_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_elapsed, buffer, &elapsed_writer, &serialization_context);
  params->elapsed.Set(
      elapsed_writer.is_null() ? nullptr : elapsed_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->elapsed.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null elapsed in MediaMetricsProvider.SetTimeToPlayReady request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaMetricsProviderProxy::AcquireWatchTimeRecorder(
    ::media::mojom::blink::PlaybackPropertiesPtr in_properties, ::media::mojom::blink::WatchTimeRecorderRequest in_recorder) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MediaMetricsProvider::AcquireWatchTimeRecorder");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaMetricsProvider_AcquireWatchTimeRecorder_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->properties)::BaseType::BufferWriter
      properties_writer;
  mojo::internal::Serialize<::media::mojom::PlaybackPropertiesDataView>(
      in_properties, buffer, &properties_writer, &serialization_context);
  params->properties.Set(
      properties_writer.is_null() ? nullptr : properties_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->properties.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null properties in MediaMetricsProvider.AcquireWatchTimeRecorder request");
  mojo::internal::Serialize<::media::mojom::WatchTimeRecorderRequestDataView>(
      in_recorder, &params->recorder, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->recorder),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid recorder in MediaMetricsProvider.AcquireWatchTimeRecorder request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MediaMetricsProviderProxy::AcquireVideoDecodeStatsRecorder(
    ::media::mojom::blink::VideoDecodeStatsRecorderRequest in_recorder) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MediaMetricsProvider::AcquireVideoDecodeStatsRecorder");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::VideoDecodeStatsRecorderRequestDataView>(
      in_recorder, &params->recorder, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->recorder),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid recorder in MediaMetricsProvider.AcquireVideoDecodeStatsRecorder request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool MediaMetricsProviderStubDispatch::Accept(
    MediaMetricsProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaMetricsProvider_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaMetricsProvider::Initialize",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaMetricsProvider_Initialize_Params_Data* params =
          reinterpret_cast<internal::MediaMetricsProvider_Initialize_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_is_mse{};
      bool p_is_top_frame{};
      scoped_refptr<const ::blink::SecurityOrigin> p_untrusted_top_origin{};
      MediaMetricsProvider_Initialize_ParamsDataView input_data_view(params, &serialization_context);
      
      p_is_mse = input_data_view.is_mse();
      p_is_top_frame = input_data_view.is_top_frame();
      if (!input_data_view.ReadUntrustedTopOrigin(&p_untrusted_top_origin))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaMetricsProvider::Initialize deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Initialize(
std::move(p_is_mse), 
std::move(p_is_top_frame), 
std::move(p_untrusted_top_origin));
      return true;
    }
    case internal::kMediaMetricsProvider_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaMetricsProvider::OnError",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaMetricsProvider_OnError_Params_Data* params =
          reinterpret_cast<internal::MediaMetricsProvider_OnError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::blink::PipelineStatus p_status{};
      MediaMetricsProvider_OnError_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStatus(&p_status))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaMetricsProvider::OnError deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnError(
std::move(p_status));
      return true;
    }
    case internal::kMediaMetricsProvider_SetIsEME_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaMetricsProvider::SetIsEME",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaMetricsProvider_SetIsEME_Params_Data* params =
          reinterpret_cast<internal::MediaMetricsProvider_SetIsEME_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MediaMetricsProvider_SetIsEME_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaMetricsProvider::SetIsEME deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetIsEME();
      return true;
    }
    case internal::kMediaMetricsProvider_SetTimeToMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaMetricsProvider::SetTimeToMetadata",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaMetricsProvider_SetTimeToMetadata_Params_Data* params =
          reinterpret_cast<internal::MediaMetricsProvider_SetTimeToMetadata_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::TimeDelta p_elapsed{};
      MediaMetricsProvider_SetTimeToMetadata_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadElapsed(&p_elapsed))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaMetricsProvider::SetTimeToMetadata deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetTimeToMetadata(
std::move(p_elapsed));
      return true;
    }
    case internal::kMediaMetricsProvider_SetTimeToFirstFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaMetricsProvider::SetTimeToFirstFrame",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaMetricsProvider_SetTimeToFirstFrame_Params_Data* params =
          reinterpret_cast<internal::MediaMetricsProvider_SetTimeToFirstFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::TimeDelta p_elapsed{};
      MediaMetricsProvider_SetTimeToFirstFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadElapsed(&p_elapsed))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaMetricsProvider::SetTimeToFirstFrame deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetTimeToFirstFrame(
std::move(p_elapsed));
      return true;
    }
    case internal::kMediaMetricsProvider_SetTimeToPlayReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaMetricsProvider::SetTimeToPlayReady",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaMetricsProvider_SetTimeToPlayReady_Params_Data* params =
          reinterpret_cast<internal::MediaMetricsProvider_SetTimeToPlayReady_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::TimeDelta p_elapsed{};
      MediaMetricsProvider_SetTimeToPlayReady_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadElapsed(&p_elapsed))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaMetricsProvider::SetTimeToPlayReady deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetTimeToPlayReady(
std::move(p_elapsed));
      return true;
    }
    case internal::kMediaMetricsProvider_AcquireWatchTimeRecorder_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaMetricsProvider::AcquireWatchTimeRecorder",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data* params =
          reinterpret_cast<internal::MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::blink::PlaybackPropertiesPtr p_properties{};
      ::media::mojom::blink::WatchTimeRecorderRequest p_recorder{};
      MediaMetricsProvider_AcquireWatchTimeRecorder_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadProperties(&p_properties))
        success = false;
      p_recorder =
          input_data_view.TakeRecorder<decltype(p_recorder)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaMetricsProvider::AcquireWatchTimeRecorder deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AcquireWatchTimeRecorder(
std::move(p_properties), 
std::move(p_recorder));
      return true;
    }
    case internal::kMediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaMetricsProvider::AcquireVideoDecodeStatsRecorder",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data* params =
          reinterpret_cast<internal::MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::blink::VideoDecodeStatsRecorderRequest p_recorder{};
      MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_ParamsDataView input_data_view(params, &serialization_context);
      
      p_recorder =
          input_data_view.TakeRecorder<decltype(p_recorder)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MediaMetricsProvider::AcquireVideoDecodeStatsRecorder deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AcquireVideoDecodeStatsRecorder(
std::move(p_recorder));
      return true;
    }
  }
  return false;
}

// static
bool MediaMetricsProviderStubDispatch::AcceptWithResponder(
    MediaMetricsProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMediaMetricsProvider_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaMetricsProvider::Initialize",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaMetricsProvider_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaMetricsProvider::OnError",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaMetricsProvider_SetIsEME_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaMetricsProvider::SetIsEME",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaMetricsProvider_SetTimeToMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaMetricsProvider::SetTimeToMetadata",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaMetricsProvider_SetTimeToFirstFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaMetricsProvider::SetTimeToFirstFrame",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaMetricsProvider_SetTimeToPlayReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaMetricsProvider::SetTimeToPlayReady",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaMetricsProvider_AcquireWatchTimeRecorder_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaMetricsProvider::AcquireWatchTimeRecorder",
               "message", message->name());
#endif
      break;
    }
    case internal::kMediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MediaMetricsProvider::AcquireVideoDecodeStatsRecorder",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool MediaMetricsProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MediaMetricsProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kMediaMetricsProvider_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaMetricsProvider_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaMetricsProvider_OnError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaMetricsProvider_OnError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaMetricsProvider_SetIsEME_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaMetricsProvider_SetIsEME_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaMetricsProvider_SetTimeToMetadata_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaMetricsProvider_SetTimeToMetadata_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaMetricsProvider_SetTimeToFirstFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaMetricsProvider_SetTimeToFirstFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaMetricsProvider_SetTimeToPlayReady_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaMetricsProvider_SetTimeToPlayReady_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaMetricsProvider_AcquireWatchTimeRecorder_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaMetricsProvider_AcquireWatchTimeRecorder_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaMetricsProvider_AcquireVideoDecodeStatsRecorder_Params_Data>(
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

void MediaMetricsProviderInterceptorForTesting::Initialize(bool is_mse, bool is_top_frame, const scoped_refptr<const ::blink::SecurityOrigin>& untrusted_top_origin) {
  GetForwardingInterface()->Initialize(std::move(is_mse), std::move(is_top_frame), std::move(untrusted_top_origin));
}
void MediaMetricsProviderInterceptorForTesting::OnError(::media::mojom::blink::PipelineStatus status) {
  GetForwardingInterface()->OnError(std::move(status));
}
void MediaMetricsProviderInterceptorForTesting::SetIsEME() {
  GetForwardingInterface()->SetIsEME();
}
void MediaMetricsProviderInterceptorForTesting::SetTimeToMetadata(WTF::TimeDelta elapsed) {
  GetForwardingInterface()->SetTimeToMetadata(std::move(elapsed));
}
void MediaMetricsProviderInterceptorForTesting::SetTimeToFirstFrame(WTF::TimeDelta elapsed) {
  GetForwardingInterface()->SetTimeToFirstFrame(std::move(elapsed));
}
void MediaMetricsProviderInterceptorForTesting::SetTimeToPlayReady(WTF::TimeDelta elapsed) {
  GetForwardingInterface()->SetTimeToPlayReady(std::move(elapsed));
}
void MediaMetricsProviderInterceptorForTesting::AcquireWatchTimeRecorder(::media::mojom::blink::PlaybackPropertiesPtr properties, ::media::mojom::blink::WatchTimeRecorderRequest recorder) {
  GetForwardingInterface()->AcquireWatchTimeRecorder(std::move(properties), std::move(recorder));
}
void MediaMetricsProviderInterceptorForTesting::AcquireVideoDecodeStatsRecorder(::media::mojom::blink::VideoDecodeStatsRecorderRequest recorder) {
  GetForwardingInterface()->AcquireVideoDecodeStatsRecorder(std::move(recorder));
}
MediaMetricsProviderAsyncWaiter::MediaMetricsProviderAsyncWaiter(
    MediaMetricsProvider* proxy) : proxy_(proxy) {}

MediaMetricsProviderAsyncWaiter::~MediaMetricsProviderAsyncWaiter() = default;


}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif