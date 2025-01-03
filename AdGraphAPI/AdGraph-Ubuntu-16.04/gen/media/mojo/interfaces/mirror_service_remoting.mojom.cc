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

#include "media/mojo/interfaces/mirror_service_remoting.mojom.h"

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

#include "media/mojo/interfaces/mirror_service_remoting.mojom-shared-message-ids.h"
namespace media {
namespace mojom {
const char MirrorServiceRemoter::Name_[] = "media.mojom.MirrorServiceRemoter";

class MirrorServiceRemoter_StartDataStreams_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MirrorServiceRemoter_StartDataStreams_ForwardToCallback(
      MirrorServiceRemoter::StartDataStreamsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MirrorServiceRemoter::StartDataStreamsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MirrorServiceRemoter_StartDataStreams_ForwardToCallback);
};

class MirrorServiceRemoter_EstimateTransmissionCapacity_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MirrorServiceRemoter_EstimateTransmissionCapacity_ForwardToCallback(
      MirrorServiceRemoter::EstimateTransmissionCapacityCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MirrorServiceRemoter::EstimateTransmissionCapacityCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MirrorServiceRemoter_EstimateTransmissionCapacity_ForwardToCallback);
};

MirrorServiceRemoterProxy::MirrorServiceRemoterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MirrorServiceRemoterProxy::Start(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MirrorServiceRemoter::Start");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMirrorServiceRemoter_Start_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MirrorServiceRemoter_Start_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MirrorServiceRemoterProxy::StartDataStreams(
    bool in_has_audio, bool in_has_video, StartDataStreamsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MirrorServiceRemoter::StartDataStreams");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMirrorServiceRemoter_StartDataStreams_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MirrorServiceRemoter_StartDataStreams_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->has_audio = in_has_audio;
  params->has_video = in_has_video;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MirrorServiceRemoter_StartDataStreams_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void MirrorServiceRemoterProxy::Stop(
    ::media::mojom::RemotingStopReason in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MirrorServiceRemoter::Stop");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMirrorServiceRemoter_Stop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MirrorServiceRemoter_Stop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::RemotingStopReason>(
      in_reason, &params->reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MirrorServiceRemoterProxy::SendMessageToSink(
    const std::vector<uint8_t>& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MirrorServiceRemoter::SendMessageToSink");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMirrorServiceRemoter_SendMessageToSink_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MirrorServiceRemoter_SendMessageToSink_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_message, buffer, &message_writer, &message_validate_params,
      &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in MirrorServiceRemoter.SendMessageToSink request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MirrorServiceRemoterProxy::EstimateTransmissionCapacity(
    EstimateTransmissionCapacityCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MirrorServiceRemoter::EstimateTransmissionCapacity");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMirrorServiceRemoter_EstimateTransmissionCapacity_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MirrorServiceRemoter_EstimateTransmissionCapacity_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MirrorServiceRemoter_EstimateTransmissionCapacity_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class MirrorServiceRemoter_StartDataStreams_ProxyToResponder {
 public:
  static MirrorServiceRemoter::StartDataStreamsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MirrorServiceRemoter_StartDataStreams_ProxyToResponder> proxy(
        new MirrorServiceRemoter_StartDataStreams_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MirrorServiceRemoter_StartDataStreams_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MirrorServiceRemoter_StartDataStreams_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  MirrorServiceRemoter_StartDataStreams_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "MirrorServiceRemoter::StartDataStreamsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_audio_stream_id, int32_t in_video_stream_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MirrorServiceRemoter_StartDataStreams_ProxyToResponder);
};

bool MirrorServiceRemoter_StartDataStreams_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::MirrorServiceRemoter::StartDataStreamsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MirrorServiceRemoter_StartDataStreams_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MirrorServiceRemoter_StartDataStreams_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_audio_stream_id{};
  int32_t p_video_stream_id{};
  MirrorServiceRemoter_StartDataStreams_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_audio_stream_id = input_data_view.audio_stream_id();
  p_video_stream_id = input_data_view.video_stream_id();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MirrorServiceRemoter::StartDataStreams response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_audio_stream_id), 
std::move(p_video_stream_id));
  return true;
}

void MirrorServiceRemoter_StartDataStreams_ProxyToResponder::Run(
    int32_t in_audio_stream_id, int32_t in_video_stream_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMirrorServiceRemoter_StartDataStreams_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MirrorServiceRemoter_StartDataStreams_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->audio_stream_id = in_audio_stream_id;
  params->video_stream_id = in_video_stream_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemoter::StartDataStreamsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class MirrorServiceRemoter_EstimateTransmissionCapacity_ProxyToResponder {
 public:
  static MirrorServiceRemoter::EstimateTransmissionCapacityCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MirrorServiceRemoter_EstimateTransmissionCapacity_ProxyToResponder> proxy(
        new MirrorServiceRemoter_EstimateTransmissionCapacity_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MirrorServiceRemoter_EstimateTransmissionCapacity_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MirrorServiceRemoter_EstimateTransmissionCapacity_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  MirrorServiceRemoter_EstimateTransmissionCapacity_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "MirrorServiceRemoter::EstimateTransmissionCapacityCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      double in_rate);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MirrorServiceRemoter_EstimateTransmissionCapacity_ProxyToResponder);
};

bool MirrorServiceRemoter_EstimateTransmissionCapacity_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::MirrorServiceRemoter::EstimateTransmissionCapacityCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  double p_rate{};
  MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_rate = input_data_view.rate();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "MirrorServiceRemoter::EstimateTransmissionCapacity response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_rate));
  return true;
}

void MirrorServiceRemoter_EstimateTransmissionCapacity_ProxyToResponder::Run(
    double in_rate) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMirrorServiceRemoter_EstimateTransmissionCapacity_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->rate = in_rate;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemoter::EstimateTransmissionCapacityCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool MirrorServiceRemoterStubDispatch::Accept(
    MirrorServiceRemoter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMirrorServiceRemoter_Start_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemoter::Start",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MirrorServiceRemoter_Start_Params_Data* params =
          reinterpret_cast<internal::MirrorServiceRemoter_Start_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MirrorServiceRemoter_Start_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MirrorServiceRemoter::Start deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Start();
      return true;
    }
    case internal::kMirrorServiceRemoter_StartDataStreams_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemoter::StartDataStreams",
               "message", message->name());
#endif
      break;
    }
    case internal::kMirrorServiceRemoter_Stop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemoter::Stop",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MirrorServiceRemoter_Stop_Params_Data* params =
          reinterpret_cast<internal::MirrorServiceRemoter_Stop_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::RemotingStopReason p_reason{};
      MirrorServiceRemoter_Stop_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MirrorServiceRemoter::Stop deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Stop(
std::move(p_reason));
      return true;
    }
    case internal::kMirrorServiceRemoter_SendMessageToSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemoter::SendMessageToSink",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MirrorServiceRemoter_SendMessageToSink_Params_Data* params =
          reinterpret_cast<internal::MirrorServiceRemoter_SendMessageToSink_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_message{};
      MirrorServiceRemoter_SendMessageToSink_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MirrorServiceRemoter::SendMessageToSink deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SendMessageToSink(
std::move(p_message));
      return true;
    }
    case internal::kMirrorServiceRemoter_EstimateTransmissionCapacity_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemoter::EstimateTransmissionCapacity",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool MirrorServiceRemoterStubDispatch::AcceptWithResponder(
    MirrorServiceRemoter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMirrorServiceRemoter_Start_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemoter::Start",
               "message", message->name());
#endif
      break;
    }
    case internal::kMirrorServiceRemoter_StartDataStreams_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemoter::StartDataStreams",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MirrorServiceRemoter_StartDataStreams_Params_Data* params =
          reinterpret_cast<
              internal::MirrorServiceRemoter_StartDataStreams_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_has_audio{};
      bool p_has_video{};
      MirrorServiceRemoter_StartDataStreams_ParamsDataView input_data_view(params, &serialization_context);
      
      p_has_audio = input_data_view.has_audio();
      p_has_video = input_data_view.has_video();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MirrorServiceRemoter::StartDataStreams deserializer");
        return false;
      }
      MirrorServiceRemoter::StartDataStreamsCallback callback =
          MirrorServiceRemoter_StartDataStreams_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartDataStreams(
std::move(p_has_audio), 
std::move(p_has_video), std::move(callback));
      return true;
    }
    case internal::kMirrorServiceRemoter_Stop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemoter::Stop",
               "message", message->name());
#endif
      break;
    }
    case internal::kMirrorServiceRemoter_SendMessageToSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemoter::SendMessageToSink",
               "message", message->name());
#endif
      break;
    }
    case internal::kMirrorServiceRemoter_EstimateTransmissionCapacity_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemoter::EstimateTransmissionCapacity",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::MirrorServiceRemoter_EstimateTransmissionCapacity_Params_Data* params =
          reinterpret_cast<
              internal::MirrorServiceRemoter_EstimateTransmissionCapacity_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MirrorServiceRemoter_EstimateTransmissionCapacity_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MirrorServiceRemoter::EstimateTransmissionCapacity deserializer");
        return false;
      }
      MirrorServiceRemoter::EstimateTransmissionCapacityCallback callback =
          MirrorServiceRemoter_EstimateTransmissionCapacity_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->EstimateTransmissionCapacity(std::move(callback));
      return true;
    }
  }
  return false;
}

bool MirrorServiceRemoterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MirrorServiceRemoter RequestValidator");

  switch (message->header()->name) {
    case internal::kMirrorServiceRemoter_Start_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MirrorServiceRemoter_Start_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMirrorServiceRemoter_StartDataStreams_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MirrorServiceRemoter_StartDataStreams_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMirrorServiceRemoter_Stop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MirrorServiceRemoter_Stop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMirrorServiceRemoter_SendMessageToSink_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MirrorServiceRemoter_SendMessageToSink_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMirrorServiceRemoter_EstimateTransmissionCapacity_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MirrorServiceRemoter_EstimateTransmissionCapacity_Params_Data>(
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

bool MirrorServiceRemoterResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MirrorServiceRemoter ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kMirrorServiceRemoter_StartDataStreams_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MirrorServiceRemoter_StartDataStreams_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMirrorServiceRemoter_EstimateTransmissionCapacity_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MirrorServiceRemoter_EstimateTransmissionCapacity_ResponseParams_Data>(
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
void MirrorServiceRemoterInterceptorForTesting::Start() {
  GetForwardingInterface()->Start();
}
void MirrorServiceRemoterInterceptorForTesting::StartDataStreams(bool has_audio, bool has_video, StartDataStreamsCallback callback) {
  GetForwardingInterface()->StartDataStreams(std::move(has_audio), std::move(has_video), std::move(callback));
}
void MirrorServiceRemoterInterceptorForTesting::Stop(::media::mojom::RemotingStopReason reason) {
  GetForwardingInterface()->Stop(std::move(reason));
}
void MirrorServiceRemoterInterceptorForTesting::SendMessageToSink(const std::vector<uint8_t>& message) {
  GetForwardingInterface()->SendMessageToSink(std::move(message));
}
void MirrorServiceRemoterInterceptorForTesting::EstimateTransmissionCapacity(EstimateTransmissionCapacityCallback callback) {
  GetForwardingInterface()->EstimateTransmissionCapacity(std::move(callback));
}
MirrorServiceRemoterAsyncWaiter::MirrorServiceRemoterAsyncWaiter(
    MirrorServiceRemoter* proxy) : proxy_(proxy) {}

MirrorServiceRemoterAsyncWaiter::~MirrorServiceRemoterAsyncWaiter() = default;

void MirrorServiceRemoterAsyncWaiter::StartDataStreams(
    bool has_audio, bool has_video, int32_t* out_audio_stream_id, int32_t* out_video_stream_id) {
  base::RunLoop loop;
  proxy_->StartDataStreams(std::move(has_audio),std::move(has_video),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_audio_stream_id
,
             int32_t* out_video_stream_id
,
             int32_t audio_stream_id,
             int32_t video_stream_id) {*out_audio_stream_id = std::move(audio_stream_id);*out_video_stream_id = std::move(video_stream_id);
            loop->Quit();
          },
          &loop,
          out_audio_stream_id,
          out_video_stream_id));
  loop.Run();
}
void MirrorServiceRemoterAsyncWaiter::EstimateTransmissionCapacity(
    double* out_rate) {
  base::RunLoop loop;
  proxy_->EstimateTransmissionCapacity(
      base::BindOnce(
          [](base::RunLoop* loop,
             double* out_rate
,
             double rate) {*out_rate = std::move(rate);
            loop->Quit();
          },
          &loop,
          out_rate));
  loop.Run();
}

const char MirrorServiceRemotingSource::Name_[] = "media.mojom.MirrorServiceRemotingSource";

MirrorServiceRemotingSourceProxy::MirrorServiceRemotingSourceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MirrorServiceRemotingSourceProxy::OnSinkAvailable(
    ::media::mojom::RemotingSinkMetadataPtr in_metadata) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MirrorServiceRemotingSource::OnSinkAvailable");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMirrorServiceRemotingSource_OnSinkAvailable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MirrorServiceRemotingSource_OnSinkAvailable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->metadata)::BaseType::BufferWriter
      metadata_writer;
  mojo::internal::Serialize<::media::mojom::RemotingSinkMetadataDataView>(
      in_metadata, buffer, &metadata_writer, &serialization_context);
  params->metadata.Set(
      metadata_writer.is_null() ? nullptr : metadata_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->metadata.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null metadata in MirrorServiceRemotingSource.OnSinkAvailable request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MirrorServiceRemotingSourceProxy::OnMessageFromSink(
    const std::vector<uint8_t>& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MirrorServiceRemotingSource::OnMessageFromSink");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMirrorServiceRemotingSource_OnMessageFromSink_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MirrorServiceRemotingSource_OnMessageFromSink_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_message, buffer, &message_writer, &message_validate_params,
      &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in MirrorServiceRemotingSource.OnMessageFromSink request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MirrorServiceRemotingSourceProxy::OnStopped(
    ::media::mojom::RemotingStopReason in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MirrorServiceRemotingSource::OnStopped");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMirrorServiceRemotingSource_OnStopped_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MirrorServiceRemotingSource_OnStopped_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::RemotingStopReason>(
      in_reason, &params->reason);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MirrorServiceRemotingSourceProxy::OnError(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::MirrorServiceRemotingSource::OnError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMirrorServiceRemotingSource_OnError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::MirrorServiceRemotingSource_OnError_Params_Data::BufferWriter
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
bool MirrorServiceRemotingSourceStubDispatch::Accept(
    MirrorServiceRemotingSource* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMirrorServiceRemotingSource_OnSinkAvailable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemotingSource::OnSinkAvailable",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MirrorServiceRemotingSource_OnSinkAvailable_Params_Data* params =
          reinterpret_cast<internal::MirrorServiceRemotingSource_OnSinkAvailable_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::RemotingSinkMetadataPtr p_metadata{};
      MirrorServiceRemotingSource_OnSinkAvailable_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMetadata(&p_metadata))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MirrorServiceRemotingSource::OnSinkAvailable deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnSinkAvailable(
std::move(p_metadata));
      return true;
    }
    case internal::kMirrorServiceRemotingSource_OnMessageFromSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemotingSource::OnMessageFromSink",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MirrorServiceRemotingSource_OnMessageFromSink_Params_Data* params =
          reinterpret_cast<internal::MirrorServiceRemotingSource_OnMessageFromSink_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_message{};
      MirrorServiceRemotingSource_OnMessageFromSink_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MirrorServiceRemotingSource::OnMessageFromSink deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnMessageFromSink(
std::move(p_message));
      return true;
    }
    case internal::kMirrorServiceRemotingSource_OnStopped_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemotingSource::OnStopped",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MirrorServiceRemotingSource_OnStopped_Params_Data* params =
          reinterpret_cast<internal::MirrorServiceRemotingSource_OnStopped_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::RemotingStopReason p_reason{};
      MirrorServiceRemotingSource_OnStopped_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MirrorServiceRemotingSource::OnStopped deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnStopped(
std::move(p_reason));
      return true;
    }
    case internal::kMirrorServiceRemotingSource_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemotingSource::OnError",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MirrorServiceRemotingSource_OnError_Params_Data* params =
          reinterpret_cast<internal::MirrorServiceRemotingSource_OnError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MirrorServiceRemotingSource_OnError_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "MirrorServiceRemotingSource::OnError deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnError();
      return true;
    }
  }
  return false;
}

// static
bool MirrorServiceRemotingSourceStubDispatch::AcceptWithResponder(
    MirrorServiceRemotingSource* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMirrorServiceRemotingSource_OnSinkAvailable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemotingSource::OnSinkAvailable",
               "message", message->name());
#endif
      break;
    }
    case internal::kMirrorServiceRemotingSource_OnMessageFromSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemotingSource::OnMessageFromSink",
               "message", message->name());
#endif
      break;
    }
    case internal::kMirrorServiceRemotingSource_OnStopped_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemotingSource::OnStopped",
               "message", message->name());
#endif
      break;
    }
    case internal::kMirrorServiceRemotingSource_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::MirrorServiceRemotingSource::OnError",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool MirrorServiceRemotingSourceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MirrorServiceRemotingSource RequestValidator");

  switch (message->header()->name) {
    case internal::kMirrorServiceRemotingSource_OnSinkAvailable_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MirrorServiceRemotingSource_OnSinkAvailable_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMirrorServiceRemotingSource_OnMessageFromSink_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MirrorServiceRemotingSource_OnMessageFromSink_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMirrorServiceRemotingSource_OnStopped_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MirrorServiceRemotingSource_OnStopped_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMirrorServiceRemotingSource_OnError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MirrorServiceRemotingSource_OnError_Params_Data>(
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

void MirrorServiceRemotingSourceInterceptorForTesting::OnSinkAvailable(::media::mojom::RemotingSinkMetadataPtr metadata) {
  GetForwardingInterface()->OnSinkAvailable(std::move(metadata));
}
void MirrorServiceRemotingSourceInterceptorForTesting::OnMessageFromSink(const std::vector<uint8_t>& message) {
  GetForwardingInterface()->OnMessageFromSink(std::move(message));
}
void MirrorServiceRemotingSourceInterceptorForTesting::OnStopped(::media::mojom::RemotingStopReason reason) {
  GetForwardingInterface()->OnStopped(std::move(reason));
}
void MirrorServiceRemotingSourceInterceptorForTesting::OnError() {
  GetForwardingInterface()->OnError();
}
MirrorServiceRemotingSourceAsyncWaiter::MirrorServiceRemotingSourceAsyncWaiter(
    MirrorServiceRemotingSource* proxy) : proxy_(proxy) {}

MirrorServiceRemotingSourceAsyncWaiter::~MirrorServiceRemotingSourceAsyncWaiter() = default;


}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif