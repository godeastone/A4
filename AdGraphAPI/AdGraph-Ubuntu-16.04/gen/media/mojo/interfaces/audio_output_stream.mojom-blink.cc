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

#include "media/mojo/interfaces/audio_output_stream.mojom-blink.h"

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

#include "media/mojo/interfaces/audio_output_stream.mojom-shared-message-ids.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace media {
namespace mojom {
namespace blink {
const char AudioOutputStream::Name_[] = "media.mojom.AudioOutputStream";

AudioOutputStreamProxy::AudioOutputStreamProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AudioOutputStreamProxy::Play(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::AudioOutputStream::Play");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioOutputStream_Play_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AudioOutputStream_Play_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AudioOutputStreamProxy::Pause(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::AudioOutputStream::Pause");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioOutputStream_Pause_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AudioOutputStream_Pause_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AudioOutputStreamProxy::SetVolume(
    double in_volume) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::AudioOutputStream::SetVolume");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioOutputStream_SetVolume_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AudioOutputStream_SetVolume_Params_Data::BufferWriter
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

// static
bool AudioOutputStreamStubDispatch::Accept(
    AudioOutputStream* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAudioOutputStream_Play_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AudioOutputStream::Play",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioOutputStream_Play_Params_Data* params =
          reinterpret_cast<internal::AudioOutputStream_Play_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AudioOutputStream_Play_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AudioOutputStream::Play deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Play();
      return true;
    }
    case internal::kAudioOutputStream_Pause_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AudioOutputStream::Pause",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioOutputStream_Pause_Params_Data* params =
          reinterpret_cast<internal::AudioOutputStream_Pause_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AudioOutputStream_Pause_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AudioOutputStream::Pause deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Pause();
      return true;
    }
    case internal::kAudioOutputStream_SetVolume_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AudioOutputStream::SetVolume",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioOutputStream_SetVolume_Params_Data* params =
          reinterpret_cast<internal::AudioOutputStream_SetVolume_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      double p_volume{};
      AudioOutputStream_SetVolume_ParamsDataView input_data_view(params, &serialization_context);
      
      p_volume = input_data_view.volume();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AudioOutputStream::SetVolume deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetVolume(
std::move(p_volume));
      return true;
    }
  }
  return false;
}

// static
bool AudioOutputStreamStubDispatch::AcceptWithResponder(
    AudioOutputStream* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAudioOutputStream_Play_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AudioOutputStream::Play",
               "message", message->name());
#endif
      break;
    }
    case internal::kAudioOutputStream_Pause_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AudioOutputStream::Pause",
               "message", message->name());
#endif
      break;
    }
    case internal::kAudioOutputStream_SetVolume_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AudioOutputStream::SetVolume",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool AudioOutputStreamRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AudioOutputStream RequestValidator");

  switch (message->header()->name) {
    case internal::kAudioOutputStream_Play_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutputStream_Play_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioOutputStream_Pause_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutputStream_Pause_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioOutputStream_SetVolume_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutputStream_SetVolume_Params_Data>(
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

void AudioOutputStreamInterceptorForTesting::Play() {
  GetForwardingInterface()->Play();
}
void AudioOutputStreamInterceptorForTesting::Pause() {
  GetForwardingInterface()->Pause();
}
void AudioOutputStreamInterceptorForTesting::SetVolume(double volume) {
  GetForwardingInterface()->SetVolume(std::move(volume));
}
AudioOutputStreamAsyncWaiter::AudioOutputStreamAsyncWaiter(
    AudioOutputStream* proxy) : proxy_(proxy) {}

AudioOutputStreamAsyncWaiter::~AudioOutputStreamAsyncWaiter() = default;


const char AudioOutputStreamObserver::Name_[] = "media.mojom.AudioOutputStreamObserver";
constexpr uint32_t AudioOutputStreamObserver::kPlatformErrorDisconnectReason;

AudioOutputStreamObserverProxy::AudioOutputStreamObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AudioOutputStreamObserverProxy::DidStartPlaying(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::AudioOutputStreamObserver::DidStartPlaying");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioOutputStreamObserver_DidStartPlaying_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AudioOutputStreamObserver_DidStartPlaying_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AudioOutputStreamObserverProxy::DidStopPlaying(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::AudioOutputStreamObserver::DidStopPlaying");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioOutputStreamObserver_DidStopPlaying_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AudioOutputStreamObserver_DidStopPlaying_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void AudioOutputStreamObserverProxy::DidChangeAudibleState(
    bool in_is_audible) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::AudioOutputStreamObserver::DidChangeAudibleState");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioOutputStreamObserver_DidChangeAudibleState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AudioOutputStreamObserver_DidChangeAudibleState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->is_audible = in_is_audible;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AudioOutputStreamObserverStubDispatch::Accept(
    AudioOutputStreamObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAudioOutputStreamObserver_DidStartPlaying_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AudioOutputStreamObserver::DidStartPlaying",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioOutputStreamObserver_DidStartPlaying_Params_Data* params =
          reinterpret_cast<internal::AudioOutputStreamObserver_DidStartPlaying_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AudioOutputStreamObserver_DidStartPlaying_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AudioOutputStreamObserver::DidStartPlaying deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidStartPlaying();
      return true;
    }
    case internal::kAudioOutputStreamObserver_DidStopPlaying_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AudioOutputStreamObserver::DidStopPlaying",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioOutputStreamObserver_DidStopPlaying_Params_Data* params =
          reinterpret_cast<internal::AudioOutputStreamObserver_DidStopPlaying_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AudioOutputStreamObserver_DidStopPlaying_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AudioOutputStreamObserver::DidStopPlaying deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidStopPlaying();
      return true;
    }
    case internal::kAudioOutputStreamObserver_DidChangeAudibleState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AudioOutputStreamObserver::DidChangeAudibleState",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioOutputStreamObserver_DidChangeAudibleState_Params_Data* params =
          reinterpret_cast<internal::AudioOutputStreamObserver_DidChangeAudibleState_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_is_audible{};
      AudioOutputStreamObserver_DidChangeAudibleState_ParamsDataView input_data_view(params, &serialization_context);
      
      p_is_audible = input_data_view.is_audible();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AudioOutputStreamObserver::DidChangeAudibleState deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidChangeAudibleState(
std::move(p_is_audible));
      return true;
    }
  }
  return false;
}

// static
bool AudioOutputStreamObserverStubDispatch::AcceptWithResponder(
    AudioOutputStreamObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAudioOutputStreamObserver_DidStartPlaying_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AudioOutputStreamObserver::DidStartPlaying",
               "message", message->name());
#endif
      break;
    }
    case internal::kAudioOutputStreamObserver_DidStopPlaying_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AudioOutputStreamObserver::DidStopPlaying",
               "message", message->name());
#endif
      break;
    }
    case internal::kAudioOutputStreamObserver_DidChangeAudibleState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AudioOutputStreamObserver::DidChangeAudibleState",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool AudioOutputStreamObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AudioOutputStreamObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kAudioOutputStreamObserver_DidStartPlaying_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutputStreamObserver_DidStartPlaying_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioOutputStreamObserver_DidStopPlaying_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutputStreamObserver_DidStopPlaying_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kAudioOutputStreamObserver_DidChangeAudibleState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutputStreamObserver_DidChangeAudibleState_Params_Data>(
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

void AudioOutputStreamObserverInterceptorForTesting::DidStartPlaying() {
  GetForwardingInterface()->DidStartPlaying();
}
void AudioOutputStreamObserverInterceptorForTesting::DidStopPlaying() {
  GetForwardingInterface()->DidStopPlaying();
}
void AudioOutputStreamObserverInterceptorForTesting::DidChangeAudibleState(bool is_audible) {
  GetForwardingInterface()->DidChangeAudibleState(std::move(is_audible));
}
AudioOutputStreamObserverAsyncWaiter::AudioOutputStreamObserverAsyncWaiter(
    AudioOutputStreamObserver* proxy) : proxy_(proxy) {}

AudioOutputStreamObserverAsyncWaiter::~AudioOutputStreamObserverAsyncWaiter() = default;


const char AudioOutputStreamProvider::Name_[] = "media.mojom.AudioOutputStreamProvider";

AudioOutputStreamProviderProxy::AudioOutputStreamProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AudioOutputStreamProviderProxy::Acquire(
    ::media::mojom::blink::AudioParametersPtr in_params, AudioOutputStreamProviderClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::AudioOutputStreamProvider::Acquire");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioOutputStreamProvider_Acquire_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AudioOutputStreamProvider_Acquire_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::media::mojom::AudioParametersDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in AudioOutputStreamProvider.Acquire request");
  mojo::internal::Serialize<::media::mojom::AudioOutputStreamProviderClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in AudioOutputStreamProvider.Acquire request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AudioOutputStreamProviderStubDispatch::Accept(
    AudioOutputStreamProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAudioOutputStreamProvider_Acquire_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AudioOutputStreamProvider::Acquire",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioOutputStreamProvider_Acquire_Params_Data* params =
          reinterpret_cast<internal::AudioOutputStreamProvider_Acquire_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::blink::AudioParametersPtr p_params{};
      AudioOutputStreamProviderClientPtr p_client{};
      AudioOutputStreamProvider_Acquire_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AudioOutputStreamProvider::Acquire deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Acquire(
std::move(p_params), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool AudioOutputStreamProviderStubDispatch::AcceptWithResponder(
    AudioOutputStreamProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAudioOutputStreamProvider_Acquire_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AudioOutputStreamProvider::Acquire",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool AudioOutputStreamProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AudioOutputStreamProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kAudioOutputStreamProvider_Acquire_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutputStreamProvider_Acquire_Params_Data>(
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

void AudioOutputStreamProviderInterceptorForTesting::Acquire(::media::mojom::blink::AudioParametersPtr params, AudioOutputStreamProviderClientPtr client) {
  GetForwardingInterface()->Acquire(std::move(params), std::move(client));
}
AudioOutputStreamProviderAsyncWaiter::AudioOutputStreamProviderAsyncWaiter(
    AudioOutputStreamProvider* proxy) : proxy_(proxy) {}

AudioOutputStreamProviderAsyncWaiter::~AudioOutputStreamProviderAsyncWaiter() = default;


const char AudioOutputStreamProviderClient::Name_[] = "media.mojom.AudioOutputStreamProviderClient";
constexpr uint32_t AudioOutputStreamProviderClient::kPlatformErrorDisconnectReason;

AudioOutputStreamProviderClientProxy::AudioOutputStreamProviderClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AudioOutputStreamProviderClientProxy::Created(
    AudioOutputStreamPtr in_stream, ::media::mojom::blink::AudioDataPipePtr in_data_pipe) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::AudioOutputStreamProviderClient::Created");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAudioOutputStreamProviderClient_Created_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::AudioOutputStreamProviderClient_Created_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::AudioOutputStreamPtrDataView>(
      in_stream, &params->stream, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->stream),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid stream in AudioOutputStreamProviderClient.Created request");
  typename decltype(params->data_pipe)::BaseType::BufferWriter
      data_pipe_writer;
  mojo::internal::Serialize<::media::mojom::AudioDataPipeDataView>(
      in_data_pipe, buffer, &data_pipe_writer, &serialization_context);
  params->data_pipe.Set(
      data_pipe_writer.is_null() ? nullptr : data_pipe_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data_pipe.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data_pipe in AudioOutputStreamProviderClient.Created request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AudioOutputStreamProviderClientStubDispatch::Accept(
    AudioOutputStreamProviderClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAudioOutputStreamProviderClient_Created_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AudioOutputStreamProviderClient::Created",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AudioOutputStreamProviderClient_Created_Params_Data* params =
          reinterpret_cast<internal::AudioOutputStreamProviderClient_Created_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      AudioOutputStreamPtr p_stream{};
      ::media::mojom::blink::AudioDataPipePtr p_data_pipe{};
      AudioOutputStreamProviderClient_Created_ParamsDataView input_data_view(params, &serialization_context);
      
      p_stream =
          input_data_view.TakeStream<decltype(p_stream)>();
      if (!input_data_view.ReadDataPipe(&p_data_pipe))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AudioOutputStreamProviderClient::Created deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Created(
std::move(p_stream), 
std::move(p_data_pipe));
      return true;
    }
  }
  return false;
}

// static
bool AudioOutputStreamProviderClientStubDispatch::AcceptWithResponder(
    AudioOutputStreamProviderClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAudioOutputStreamProviderClient_Created_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::AudioOutputStreamProviderClient::Created",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool AudioOutputStreamProviderClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AudioOutputStreamProviderClient RequestValidator");

  switch (message->header()->name) {
    case internal::kAudioOutputStreamProviderClient_Created_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutputStreamProviderClient_Created_Params_Data>(
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

void AudioOutputStreamProviderClientInterceptorForTesting::Created(AudioOutputStreamPtr stream, ::media::mojom::blink::AudioDataPipePtr data_pipe) {
  GetForwardingInterface()->Created(std::move(stream), std::move(data_pipe));
}
AudioOutputStreamProviderClientAsyncWaiter::AudioOutputStreamProviderClientAsyncWaiter(
    AudioOutputStreamProviderClient* proxy) : proxy_(proxy) {}

AudioOutputStreamProviderClientAsyncWaiter::~AudioOutputStreamProviderClientAsyncWaiter() = default;


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