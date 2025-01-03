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

#include "services/audio/public/mojom/stream_factory.mojom.h"

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

#include "services/audio/public/mojom/stream_factory.mojom-shared-message-ids.h"
#include "media/base/ipc/media_param_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
namespace audio {
namespace mojom {
const char LocalMuter::Name_[] = "audio.mojom.LocalMuter";

LocalMuterProxy::LocalMuterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool LocalMuterStubDispatch::Accept(
    LocalMuter* impl,
    mojo::Message* message) {
  return false;
}

// static
bool LocalMuterStubDispatch::AcceptWithResponder(
    LocalMuter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}

bool LocalMuterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "LocalMuter RequestValidator");

  switch (message->header()->name) {
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

LocalMuterAsyncWaiter::LocalMuterAsyncWaiter(
    LocalMuter* proxy) : proxy_(proxy) {}

LocalMuterAsyncWaiter::~LocalMuterAsyncWaiter() = default;


const char StreamFactory::Name_[] = "audio.mojom.StreamFactory";

class StreamFactory_CreateInputStream_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  StreamFactory_CreateInputStream_ForwardToCallback(
      StreamFactory::CreateInputStreamCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  StreamFactory::CreateInputStreamCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(StreamFactory_CreateInputStream_ForwardToCallback);
};

class StreamFactory_CreateOutputStream_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  StreamFactory_CreateOutputStream_ForwardToCallback(
      StreamFactory::CreateOutputStreamCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  StreamFactory::CreateOutputStreamCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(StreamFactory_CreateOutputStream_ForwardToCallback);
};

class StreamFactory_CreateLoopbackStream_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  StreamFactory_CreateLoopbackStream_ForwardToCallback(
      StreamFactory::CreateLoopbackStreamCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  StreamFactory::CreateLoopbackStreamCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(StreamFactory_CreateLoopbackStream_ForwardToCallback);
};

StreamFactoryProxy::StreamFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void StreamFactoryProxy::CreateInputStream(
    ::media::mojom::AudioInputStreamRequest in_stream, ::media::mojom::AudioInputStreamClientPtr in_client, ::media::mojom::AudioInputStreamObserverPtr in_observer, ::media::mojom::AudioLogPtr in_log, const std::string& in_device_id, const media::AudioParameters& in_params, uint32_t in_shared_memory_count, bool in_enable_agc, mojo::ScopedSharedBufferHandle in_key_press_count_buffer, CreateInputStreamCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "audio::mojom::StreamFactory::CreateInputStream");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStreamFactory_CreateInputStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::StreamFactory_CreateInputStream_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::AudioInputStreamRequestDataView>(
      in_stream, &params->stream, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->stream),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid stream in StreamFactory.CreateInputStream request");
  mojo::internal::Serialize<::media::mojom::AudioInputStreamClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in StreamFactory.CreateInputStream request");
  mojo::internal::Serialize<::media::mojom::AudioInputStreamObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  mojo::internal::Serialize<::media::mojom::AudioLogPtrDataView>(
      in_log, &params->log, &serialization_context);
  typename decltype(params->device_id)::BaseType::BufferWriter
      device_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_device_id, buffer, &device_id_writer, &serialization_context);
  params->device_id.Set(
      device_id_writer.is_null() ? nullptr : device_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_id in StreamFactory.CreateInputStream request");
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::media::mojom::AudioParametersDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in StreamFactory.CreateInputStream request");
  params->shared_memory_count = in_shared_memory_count;
  params->enable_agc = in_enable_agc;
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_key_press_count_buffer, &params->key_press_count_buffer, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new StreamFactory_CreateInputStream_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void StreamFactoryProxy::AssociateInputAndOutputForAec(
    const base::UnguessableToken& in_input_stream_id, const std::string& in_output_device_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "audio::mojom::StreamFactory::AssociateInputAndOutputForAec");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStreamFactory_AssociateInputAndOutputForAec_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::StreamFactory_AssociateInputAndOutputForAec_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->input_stream_id)::BaseType::BufferWriter
      input_stream_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_input_stream_id, buffer, &input_stream_id_writer, &serialization_context);
  params->input_stream_id.Set(
      input_stream_id_writer.is_null() ? nullptr : input_stream_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input_stream_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input_stream_id in StreamFactory.AssociateInputAndOutputForAec request");
  typename decltype(params->output_device_id)::BaseType::BufferWriter
      output_device_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_output_device_id, buffer, &output_device_id_writer, &serialization_context);
  params->output_device_id.Set(
      output_device_id_writer.is_null() ? nullptr : output_device_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->output_device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null output_device_id in StreamFactory.AssociateInputAndOutputForAec request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void StreamFactoryProxy::CreateOutputStream(
    ::media::mojom::AudioOutputStreamRequest in_stream, ::media::mojom::AudioOutputStreamObserverAssociatedPtrInfo in_observer, ::media::mojom::AudioLogPtr in_log, const std::string& in_device_id, const media::AudioParameters& in_params, const base::UnguessableToken& in_group_id, CreateOutputStreamCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "audio::mojom::StreamFactory::CreateOutputStream");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStreamFactory_CreateOutputStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::StreamFactory_CreateOutputStream_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::AudioOutputStreamRequestDataView>(
      in_stream, &params->stream, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->stream),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid stream in StreamFactory.CreateOutputStream request");
  mojo::internal::Serialize<::media::mojom::AudioOutputStreamObserverAssociatedPtrInfoDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid observer in StreamFactory.CreateOutputStream request");
  mojo::internal::Serialize<::media::mojom::AudioLogPtrDataView>(
      in_log, &params->log, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->log),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid log in StreamFactory.CreateOutputStream request");
  typename decltype(params->device_id)::BaseType::BufferWriter
      device_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_device_id, buffer, &device_id_writer, &serialization_context);
  params->device_id.Set(
      device_id_writer.is_null() ? nullptr : device_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_id in StreamFactory.CreateOutputStream request");
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::media::mojom::AudioParametersDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in StreamFactory.CreateOutputStream request");
  typename decltype(params->group_id)::BaseType::BufferWriter
      group_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_group_id, buffer, &group_id_writer, &serialization_context);
  params->group_id.Set(
      group_id_writer.is_null() ? nullptr : group_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->group_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null group_id in StreamFactory.CreateOutputStream request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new StreamFactory_CreateOutputStream_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void StreamFactoryProxy::BindMuter(
    LocalMuterAssociatedRequest in_request, const base::UnguessableToken& in_group_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "audio::mojom::StreamFactory::BindMuter");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStreamFactory_BindMuter_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::StreamFactory_BindMuter_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::audio::mojom::LocalMuterAssociatedRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid request in StreamFactory.BindMuter request");
  typename decltype(params->group_id)::BaseType::BufferWriter
      group_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_group_id, buffer, &group_id_writer, &serialization_context);
  params->group_id.Set(
      group_id_writer.is_null() ? nullptr : group_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->group_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null group_id in StreamFactory.BindMuter request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void StreamFactoryProxy::CreateLoopbackStream(
    ::media::mojom::AudioInputStreamRequest in_stream, ::media::mojom::AudioInputStreamClientPtr in_client, ::media::mojom::AudioInputStreamObserverPtr in_observer, const media::AudioParameters& in_params, uint32_t in_shared_memory_count, const base::UnguessableToken& in_group_id, CreateLoopbackStreamCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "audio::mojom::StreamFactory::CreateLoopbackStream");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStreamFactory_CreateLoopbackStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::StreamFactory_CreateLoopbackStream_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::AudioInputStreamRequestDataView>(
      in_stream, &params->stream, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->stream),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid stream in StreamFactory.CreateLoopbackStream request");
  mojo::internal::Serialize<::media::mojom::AudioInputStreamClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in StreamFactory.CreateLoopbackStream request");
  mojo::internal::Serialize<::media::mojom::AudioInputStreamObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in StreamFactory.CreateLoopbackStream request");
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::media::mojom::AudioParametersDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in StreamFactory.CreateLoopbackStream request");
  params->shared_memory_count = in_shared_memory_count;
  typename decltype(params->group_id)::BaseType::BufferWriter
      group_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_group_id, buffer, &group_id_writer, &serialization_context);
  params->group_id.Set(
      group_id_writer.is_null() ? nullptr : group_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->group_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null group_id in StreamFactory.CreateLoopbackStream request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new StreamFactory_CreateLoopbackStream_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class StreamFactory_CreateInputStream_ProxyToResponder {
 public:
  static StreamFactory::CreateInputStreamCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<StreamFactory_CreateInputStream_ProxyToResponder> proxy(
        new StreamFactory_CreateInputStream_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&StreamFactory_CreateInputStream_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~StreamFactory_CreateInputStream_ProxyToResponder() {
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
  StreamFactory_CreateInputStream_ProxyToResponder(
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
        << "StreamFactory::CreateInputStreamCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::media::mojom::AudioDataPipePtr in_data_pipe, bool in_initially_muted, const base::Optional<base::UnguessableToken>& in_stream_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(StreamFactory_CreateInputStream_ProxyToResponder);
};

bool StreamFactory_CreateInputStream_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "audio::mojom::StreamFactory::CreateInputStreamCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::StreamFactory_CreateInputStream_ResponseParams_Data* params =
      reinterpret_cast<
          internal::StreamFactory_CreateInputStream_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::media::mojom::AudioDataPipePtr p_data_pipe{};
  bool p_initially_muted{};
  base::Optional<base::UnguessableToken> p_stream_id{};
  StreamFactory_CreateInputStream_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDataPipe(&p_data_pipe))
    success = false;
  p_initially_muted = input_data_view.initially_muted();
  if (!input_data_view.ReadStreamId(&p_stream_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "StreamFactory::CreateInputStream response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_data_pipe), 
std::move(p_initially_muted), 
std::move(p_stream_id));
  return true;
}

void StreamFactory_CreateInputStream_ProxyToResponder::Run(
    ::media::mojom::AudioDataPipePtr in_data_pipe, bool in_initially_muted, const base::Optional<base::UnguessableToken>& in_stream_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStreamFactory_CreateInputStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::StreamFactory_CreateInputStream_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data_pipe)::BaseType::BufferWriter
      data_pipe_writer;
  mojo::internal::Serialize<::media::mojom::AudioDataPipeDataView>(
      in_data_pipe, buffer, &data_pipe_writer, &serialization_context);
  params->data_pipe.Set(
      data_pipe_writer.is_null() ? nullptr : data_pipe_writer.data());
  params->initially_muted = in_initially_muted;
  typename decltype(params->stream_id)::BaseType::BufferWriter
      stream_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_stream_id, buffer, &stream_id_writer, &serialization_context);
  params->stream_id.Set(
      stream_id_writer.is_null() ? nullptr : stream_id_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::StreamFactory::CreateInputStreamCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class StreamFactory_CreateOutputStream_ProxyToResponder {
 public:
  static StreamFactory::CreateOutputStreamCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<StreamFactory_CreateOutputStream_ProxyToResponder> proxy(
        new StreamFactory_CreateOutputStream_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&StreamFactory_CreateOutputStream_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~StreamFactory_CreateOutputStream_ProxyToResponder() {
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
  StreamFactory_CreateOutputStream_ProxyToResponder(
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
        << "StreamFactory::CreateOutputStreamCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::media::mojom::AudioDataPipePtr in_data_pipe);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(StreamFactory_CreateOutputStream_ProxyToResponder);
};

bool StreamFactory_CreateOutputStream_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "audio::mojom::StreamFactory::CreateOutputStreamCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::StreamFactory_CreateOutputStream_ResponseParams_Data* params =
      reinterpret_cast<
          internal::StreamFactory_CreateOutputStream_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::media::mojom::AudioDataPipePtr p_data_pipe{};
  StreamFactory_CreateOutputStream_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDataPipe(&p_data_pipe))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "StreamFactory::CreateOutputStream response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_data_pipe));
  return true;
}

void StreamFactory_CreateOutputStream_ProxyToResponder::Run(
    ::media::mojom::AudioDataPipePtr in_data_pipe) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStreamFactory_CreateOutputStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::StreamFactory_CreateOutputStream_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data_pipe)::BaseType::BufferWriter
      data_pipe_writer;
  mojo::internal::Serialize<::media::mojom::AudioDataPipeDataView>(
      in_data_pipe, buffer, &data_pipe_writer, &serialization_context);
  params->data_pipe.Set(
      data_pipe_writer.is_null() ? nullptr : data_pipe_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::StreamFactory::CreateOutputStreamCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class StreamFactory_CreateLoopbackStream_ProxyToResponder {
 public:
  static StreamFactory::CreateLoopbackStreamCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<StreamFactory_CreateLoopbackStream_ProxyToResponder> proxy(
        new StreamFactory_CreateLoopbackStream_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&StreamFactory_CreateLoopbackStream_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~StreamFactory_CreateLoopbackStream_ProxyToResponder() {
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
  StreamFactory_CreateLoopbackStream_ProxyToResponder(
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
        << "StreamFactory::CreateLoopbackStreamCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::media::mojom::AudioDataPipePtr in_data_pipe);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(StreamFactory_CreateLoopbackStream_ProxyToResponder);
};

bool StreamFactory_CreateLoopbackStream_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "audio::mojom::StreamFactory::CreateLoopbackStreamCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::StreamFactory_CreateLoopbackStream_ResponseParams_Data* params =
      reinterpret_cast<
          internal::StreamFactory_CreateLoopbackStream_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::media::mojom::AudioDataPipePtr p_data_pipe{};
  StreamFactory_CreateLoopbackStream_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadDataPipe(&p_data_pipe))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "StreamFactory::CreateLoopbackStream response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_data_pipe));
  return true;
}

void StreamFactory_CreateLoopbackStream_ProxyToResponder::Run(
    ::media::mojom::AudioDataPipePtr in_data_pipe) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStreamFactory_CreateLoopbackStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::StreamFactory_CreateLoopbackStream_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data_pipe)::BaseType::BufferWriter
      data_pipe_writer;
  mojo::internal::Serialize<::media::mojom::AudioDataPipeDataView>(
      in_data_pipe, buffer, &data_pipe_writer, &serialization_context);
  params->data_pipe.Set(
      data_pipe_writer.is_null() ? nullptr : data_pipe_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::StreamFactory::CreateLoopbackStreamCallback",
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
bool StreamFactoryStubDispatch::Accept(
    StreamFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kStreamFactory_CreateInputStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::StreamFactory::CreateInputStream",
               "message", message->name());
#endif
      break;
    }
    case internal::kStreamFactory_AssociateInputAndOutputForAec_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::StreamFactory::AssociateInputAndOutputForAec",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::StreamFactory_AssociateInputAndOutputForAec_Params_Data* params =
          reinterpret_cast<internal::StreamFactory_AssociateInputAndOutputForAec_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_input_stream_id{};
      std::string p_output_device_id{};
      StreamFactory_AssociateInputAndOutputForAec_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInputStreamId(&p_input_stream_id))
        success = false;
      if (!input_data_view.ReadOutputDeviceId(&p_output_device_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "StreamFactory::AssociateInputAndOutputForAec deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AssociateInputAndOutputForAec(
std::move(p_input_stream_id), 
std::move(p_output_device_id));
      return true;
    }
    case internal::kStreamFactory_CreateOutputStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::StreamFactory::CreateOutputStream",
               "message", message->name());
#endif
      break;
    }
    case internal::kStreamFactory_BindMuter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::StreamFactory::BindMuter",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::StreamFactory_BindMuter_Params_Data* params =
          reinterpret_cast<internal::StreamFactory_BindMuter_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      LocalMuterAssociatedRequest p_request{};
      base::UnguessableToken p_group_id{};
      StreamFactory_BindMuter_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!input_data_view.ReadGroupId(&p_group_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "StreamFactory::BindMuter deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->BindMuter(
std::move(p_request), 
std::move(p_group_id));
      return true;
    }
    case internal::kStreamFactory_CreateLoopbackStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::StreamFactory::CreateLoopbackStream",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool StreamFactoryStubDispatch::AcceptWithResponder(
    StreamFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kStreamFactory_CreateInputStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::StreamFactory::CreateInputStream",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::StreamFactory_CreateInputStream_Params_Data* params =
          reinterpret_cast<
              internal::StreamFactory_CreateInputStream_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::AudioInputStreamRequest p_stream{};
      ::media::mojom::AudioInputStreamClientPtr p_client{};
      ::media::mojom::AudioInputStreamObserverPtr p_observer{};
      ::media::mojom::AudioLogPtr p_log{};
      std::string p_device_id{};
      media::AudioParameters p_params{};
      uint32_t p_shared_memory_count{};
      bool p_enable_agc{};
      mojo::ScopedSharedBufferHandle p_key_press_count_buffer{};
      StreamFactory_CreateInputStream_ParamsDataView input_data_view(params, &serialization_context);
      
      p_stream =
          input_data_view.TakeStream<decltype(p_stream)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      p_log =
          input_data_view.TakeLog<decltype(p_log)>();
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      p_shared_memory_count = input_data_view.shared_memory_count();
      p_enable_agc = input_data_view.enable_agc();
      p_key_press_count_buffer = input_data_view.TakeKeyPressCountBuffer();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "StreamFactory::CreateInputStream deserializer");
        return false;
      }
      StreamFactory::CreateInputStreamCallback callback =
          StreamFactory_CreateInputStream_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateInputStream(
std::move(p_stream), 
std::move(p_client), 
std::move(p_observer), 
std::move(p_log), 
std::move(p_device_id), 
std::move(p_params), 
std::move(p_shared_memory_count), 
std::move(p_enable_agc), 
std::move(p_key_press_count_buffer), std::move(callback));
      return true;
    }
    case internal::kStreamFactory_AssociateInputAndOutputForAec_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::StreamFactory::AssociateInputAndOutputForAec",
               "message", message->name());
#endif
      break;
    }
    case internal::kStreamFactory_CreateOutputStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::StreamFactory::CreateOutputStream",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::StreamFactory_CreateOutputStream_Params_Data* params =
          reinterpret_cast<
              internal::StreamFactory_CreateOutputStream_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::AudioOutputStreamRequest p_stream{};
      ::media::mojom::AudioOutputStreamObserverAssociatedPtrInfo p_observer{};
      ::media::mojom::AudioLogPtr p_log{};
      std::string p_device_id{};
      media::AudioParameters p_params{};
      base::UnguessableToken p_group_id{};
      StreamFactory_CreateOutputStream_ParamsDataView input_data_view(params, &serialization_context);
      
      p_stream =
          input_data_view.TakeStream<decltype(p_stream)>();
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      p_log =
          input_data_view.TakeLog<decltype(p_log)>();
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!input_data_view.ReadGroupId(&p_group_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "StreamFactory::CreateOutputStream deserializer");
        return false;
      }
      StreamFactory::CreateOutputStreamCallback callback =
          StreamFactory_CreateOutputStream_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateOutputStream(
std::move(p_stream), 
std::move(p_observer), 
std::move(p_log), 
std::move(p_device_id), 
std::move(p_params), 
std::move(p_group_id), std::move(callback));
      return true;
    }
    case internal::kStreamFactory_BindMuter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::StreamFactory::BindMuter",
               "message", message->name());
#endif
      break;
    }
    case internal::kStreamFactory_CreateLoopbackStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::StreamFactory::CreateLoopbackStream",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::StreamFactory_CreateLoopbackStream_Params_Data* params =
          reinterpret_cast<
              internal::StreamFactory_CreateLoopbackStream_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::AudioInputStreamRequest p_stream{};
      ::media::mojom::AudioInputStreamClientPtr p_client{};
      ::media::mojom::AudioInputStreamObserverPtr p_observer{};
      media::AudioParameters p_params{};
      uint32_t p_shared_memory_count{};
      base::UnguessableToken p_group_id{};
      StreamFactory_CreateLoopbackStream_ParamsDataView input_data_view(params, &serialization_context);
      
      p_stream =
          input_data_view.TakeStream<decltype(p_stream)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      p_shared_memory_count = input_data_view.shared_memory_count();
      if (!input_data_view.ReadGroupId(&p_group_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "StreamFactory::CreateLoopbackStream deserializer");
        return false;
      }
      StreamFactory::CreateLoopbackStreamCallback callback =
          StreamFactory_CreateLoopbackStream_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateLoopbackStream(
std::move(p_stream), 
std::move(p_client), 
std::move(p_observer), 
std::move(p_params), 
std::move(p_shared_memory_count), 
std::move(p_group_id), std::move(callback));
      return true;
    }
  }
  return false;
}

bool StreamFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "StreamFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kStreamFactory_CreateInputStream_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StreamFactory_CreateInputStream_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStreamFactory_AssociateInputAndOutputForAec_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StreamFactory_AssociateInputAndOutputForAec_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStreamFactory_CreateOutputStream_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StreamFactory_CreateOutputStream_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStreamFactory_BindMuter_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StreamFactory_BindMuter_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStreamFactory_CreateLoopbackStream_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StreamFactory_CreateLoopbackStream_Params_Data>(
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

bool StreamFactoryResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "StreamFactory ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kStreamFactory_CreateInputStream_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::StreamFactory_CreateInputStream_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStreamFactory_CreateOutputStream_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::StreamFactory_CreateOutputStream_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStreamFactory_CreateLoopbackStream_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::StreamFactory_CreateLoopbackStream_ResponseParams_Data>(
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
void StreamFactoryInterceptorForTesting::CreateInputStream(::media::mojom::AudioInputStreamRequest stream, ::media::mojom::AudioInputStreamClientPtr client, ::media::mojom::AudioInputStreamObserverPtr observer, ::media::mojom::AudioLogPtr log, const std::string& device_id, const media::AudioParameters& params, uint32_t shared_memory_count, bool enable_agc, mojo::ScopedSharedBufferHandle key_press_count_buffer, CreateInputStreamCallback callback) {
  GetForwardingInterface()->CreateInputStream(std::move(stream), std::move(client), std::move(observer), std::move(log), std::move(device_id), std::move(params), std::move(shared_memory_count), std::move(enable_agc), std::move(key_press_count_buffer), std::move(callback));
}
void StreamFactoryInterceptorForTesting::AssociateInputAndOutputForAec(const base::UnguessableToken& input_stream_id, const std::string& output_device_id) {
  GetForwardingInterface()->AssociateInputAndOutputForAec(std::move(input_stream_id), std::move(output_device_id));
}
void StreamFactoryInterceptorForTesting::CreateOutputStream(::media::mojom::AudioOutputStreamRequest stream, ::media::mojom::AudioOutputStreamObserverAssociatedPtrInfo observer, ::media::mojom::AudioLogPtr log, const std::string& device_id, const media::AudioParameters& params, const base::UnguessableToken& group_id, CreateOutputStreamCallback callback) {
  GetForwardingInterface()->CreateOutputStream(std::move(stream), std::move(observer), std::move(log), std::move(device_id), std::move(params), std::move(group_id), std::move(callback));
}
void StreamFactoryInterceptorForTesting::BindMuter(LocalMuterAssociatedRequest request, const base::UnguessableToken& group_id) {
  GetForwardingInterface()->BindMuter(std::move(request), std::move(group_id));
}
void StreamFactoryInterceptorForTesting::CreateLoopbackStream(::media::mojom::AudioInputStreamRequest stream, ::media::mojom::AudioInputStreamClientPtr client, ::media::mojom::AudioInputStreamObserverPtr observer, const media::AudioParameters& params, uint32_t shared_memory_count, const base::UnguessableToken& group_id, CreateLoopbackStreamCallback callback) {
  GetForwardingInterface()->CreateLoopbackStream(std::move(stream), std::move(client), std::move(observer), std::move(params), std::move(shared_memory_count), std::move(group_id), std::move(callback));
}
StreamFactoryAsyncWaiter::StreamFactoryAsyncWaiter(
    StreamFactory* proxy) : proxy_(proxy) {}

StreamFactoryAsyncWaiter::~StreamFactoryAsyncWaiter() = default;

void StreamFactoryAsyncWaiter::CreateInputStream(
    ::media::mojom::AudioInputStreamRequest stream, ::media::mojom::AudioInputStreamClientPtr client, ::media::mojom::AudioInputStreamObserverPtr observer, ::media::mojom::AudioLogPtr log, const std::string& device_id, const media::AudioParameters& params, uint32_t shared_memory_count, bool enable_agc, mojo::ScopedSharedBufferHandle key_press_count_buffer, ::media::mojom::AudioDataPipePtr* out_data_pipe, bool* out_initially_muted, base::Optional<base::UnguessableToken>* out_stream_id) {
  base::RunLoop loop;
  proxy_->CreateInputStream(std::move(stream),std::move(client),std::move(observer),std::move(log),std::move(device_id),std::move(params),std::move(shared_memory_count),std::move(enable_agc),std::move(key_press_count_buffer),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::media::mojom::AudioDataPipePtr* out_data_pipe
,
             bool* out_initially_muted
,
             base::Optional<base::UnguessableToken>* out_stream_id
,
             ::media::mojom::AudioDataPipePtr data_pipe,
             bool initially_muted,
             const base::Optional<base::UnguessableToken>& stream_id) {*out_data_pipe = std::move(data_pipe);*out_initially_muted = std::move(initially_muted);*out_stream_id = std::move(stream_id);
            loop->Quit();
          },
          &loop,
          out_data_pipe,
          out_initially_muted,
          out_stream_id));
  loop.Run();
}
void StreamFactoryAsyncWaiter::CreateOutputStream(
    ::media::mojom::AudioOutputStreamRequest stream, ::media::mojom::AudioOutputStreamObserverAssociatedPtrInfo observer, ::media::mojom::AudioLogPtr log, const std::string& device_id, const media::AudioParameters& params, const base::UnguessableToken& group_id, ::media::mojom::AudioDataPipePtr* out_data_pipe) {
  base::RunLoop loop;
  proxy_->CreateOutputStream(std::move(stream),std::move(observer),std::move(log),std::move(device_id),std::move(params),std::move(group_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::media::mojom::AudioDataPipePtr* out_data_pipe
,
             ::media::mojom::AudioDataPipePtr data_pipe) {*out_data_pipe = std::move(data_pipe);
            loop->Quit();
          },
          &loop,
          out_data_pipe));
  loop.Run();
}
void StreamFactoryAsyncWaiter::CreateLoopbackStream(
    ::media::mojom::AudioInputStreamRequest stream, ::media::mojom::AudioInputStreamClientPtr client, ::media::mojom::AudioInputStreamObserverPtr observer, const media::AudioParameters& params, uint32_t shared_memory_count, const base::UnguessableToken& group_id, ::media::mojom::AudioDataPipePtr* out_data_pipe) {
  base::RunLoop loop;
  proxy_->CreateLoopbackStream(std::move(stream),std::move(client),std::move(observer),std::move(params),std::move(shared_memory_count),std::move(group_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::media::mojom::AudioDataPipePtr* out_data_pipe
,
             ::media::mojom::AudioDataPipePtr data_pipe) {*out_data_pipe = std::move(data_pipe);
            loop->Quit();
          },
          &loop,
          out_data_pipe));
  loop.Run();
}

}  // namespace mojom
}  // namespace audio

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif