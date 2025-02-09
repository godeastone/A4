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

#include "services/audio/public/mojom/debug_recording.mojom.h"

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

#include "services/audio/public/mojom/debug_recording.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "services/audio/public/cpp/debug_recording_mojom_traits.h"
namespace audio {
namespace mojom {
const char DebugRecordingFileProvider::Name_[] = "audio.mojom.DebugRecordingFileProvider";

class DebugRecordingFileProvider_CreateWavFile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DebugRecordingFileProvider_CreateWavFile_ForwardToCallback(
      DebugRecordingFileProvider::CreateWavFileCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DebugRecordingFileProvider::CreateWavFileCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(DebugRecordingFileProvider_CreateWavFile_ForwardToCallback);
};

DebugRecordingFileProviderProxy::DebugRecordingFileProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DebugRecordingFileProviderProxy::CreateWavFile(
    media::AudioDebugRecordingStreamType in_stream_type, uint32_t in_id, CreateWavFileCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "audio::mojom::DebugRecordingFileProvider::CreateWavFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDebugRecordingFileProvider_CreateWavFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::DebugRecordingFileProvider_CreateWavFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::audio::mojom::DebugRecordingStreamType>(
      in_stream_type, &params->stream_type);
  params->id = in_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DebugRecordingFileProvider_CreateWavFile_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class DebugRecordingFileProvider_CreateWavFile_ProxyToResponder {
 public:
  static DebugRecordingFileProvider::CreateWavFileCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DebugRecordingFileProvider_CreateWavFile_ProxyToResponder> proxy(
        new DebugRecordingFileProvider_CreateWavFile_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&DebugRecordingFileProvider_CreateWavFile_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~DebugRecordingFileProvider_CreateWavFile_ProxyToResponder() {
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
  DebugRecordingFileProvider_CreateWavFile_ProxyToResponder(
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
        << "DebugRecordingFileProvider::CreateWavFileCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::File in_file);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(DebugRecordingFileProvider_CreateWavFile_ProxyToResponder);
};

bool DebugRecordingFileProvider_CreateWavFile_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "audio::mojom::DebugRecordingFileProvider::CreateWavFileCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::File p_file{};
  DebugRecordingFileProvider_CreateWavFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFile(&p_file))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "DebugRecordingFileProvider::CreateWavFile response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_file));
  return true;
}

void DebugRecordingFileProvider_CreateWavFile_ProxyToResponder::Run(
    base::File in_file) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDebugRecordingFileProvider_CreateWavFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->file)::BaseType::BufferWriter
      file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_file, buffer, &file_writer, &serialization_context);
  params->file.Set(
      file_writer.is_null() ? nullptr : file_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::DebugRecordingFileProvider::CreateWavFileCallback",
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
bool DebugRecordingFileProviderStubDispatch::Accept(
    DebugRecordingFileProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDebugRecordingFileProvider_CreateWavFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::DebugRecordingFileProvider::CreateWavFile",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool DebugRecordingFileProviderStubDispatch::AcceptWithResponder(
    DebugRecordingFileProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDebugRecordingFileProvider_CreateWavFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::DebugRecordingFileProvider::CreateWavFile",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::DebugRecordingFileProvider_CreateWavFile_Params_Data* params =
          reinterpret_cast<
              internal::DebugRecordingFileProvider_CreateWavFile_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::AudioDebugRecordingStreamType p_stream_type{};
      uint32_t p_id{};
      DebugRecordingFileProvider_CreateWavFile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStreamType(&p_stream_type))
        success = false;
      p_id = input_data_view.id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DebugRecordingFileProvider::CreateWavFile deserializer");
        return false;
      }
      DebugRecordingFileProvider::CreateWavFileCallback callback =
          DebugRecordingFileProvider_CreateWavFile_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateWavFile(
std::move(p_stream_type), 
std::move(p_id), std::move(callback));
      return true;
    }
  }
  return false;
}

bool DebugRecordingFileProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DebugRecordingFileProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kDebugRecordingFileProvider_CreateWavFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DebugRecordingFileProvider_CreateWavFile_Params_Data>(
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

bool DebugRecordingFileProviderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DebugRecordingFileProvider ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kDebugRecordingFileProvider_CreateWavFile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DebugRecordingFileProvider_CreateWavFile_ResponseParams_Data>(
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
void DebugRecordingFileProviderInterceptorForTesting::CreateWavFile(media::AudioDebugRecordingStreamType stream_type, uint32_t id, CreateWavFileCallback callback) {
  GetForwardingInterface()->CreateWavFile(std::move(stream_type), std::move(id), std::move(callback));
}
DebugRecordingFileProviderAsyncWaiter::DebugRecordingFileProviderAsyncWaiter(
    DebugRecordingFileProvider* proxy) : proxy_(proxy) {}

DebugRecordingFileProviderAsyncWaiter::~DebugRecordingFileProviderAsyncWaiter() = default;

void DebugRecordingFileProviderAsyncWaiter::CreateWavFile(
    media::AudioDebugRecordingStreamType stream_type, uint32_t id, base::File* out_file) {
  base::RunLoop loop;
  proxy_->CreateWavFile(std::move(stream_type),std::move(id),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::File* out_file
,
             base::File file) {*out_file = std::move(file);
            loop->Quit();
          },
          &loop,
          out_file));
  loop.Run();
}

const char DebugRecording::Name_[] = "audio.mojom.DebugRecording";

DebugRecordingProxy::DebugRecordingProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DebugRecordingProxy::Enable(
    DebugRecordingFileProviderPtr in_file_provider) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "audio::mojom::DebugRecording::Enable");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDebugRecording_Enable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::audio::mojom::internal::DebugRecording_Enable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::audio::mojom::DebugRecordingFileProviderPtrDataView>(
      in_file_provider, &params->file_provider, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->file_provider),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid file_provider in DebugRecording.Enable request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DebugRecordingStubDispatch::Accept(
    DebugRecording* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDebugRecording_Enable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::DebugRecording::Enable",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DebugRecording_Enable_Params_Data* params =
          reinterpret_cast<internal::DebugRecording_Enable_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DebugRecordingFileProviderPtr p_file_provider{};
      DebugRecording_Enable_ParamsDataView input_data_view(params, &serialization_context);
      
      p_file_provider =
          input_data_view.TakeFileProvider<decltype(p_file_provider)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DebugRecording::Enable deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Enable(
std::move(p_file_provider));
      return true;
    }
  }
  return false;
}

// static
bool DebugRecordingStubDispatch::AcceptWithResponder(
    DebugRecording* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDebugRecording_Enable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)audio::mojom::DebugRecording::Enable",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool DebugRecordingRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DebugRecording RequestValidator");

  switch (message->header()->name) {
    case internal::kDebugRecording_Enable_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DebugRecording_Enable_Params_Data>(
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

void DebugRecordingInterceptorForTesting::Enable(DebugRecordingFileProviderPtr file_provider) {
  GetForwardingInterface()->Enable(std::move(file_provider));
}
DebugRecordingAsyncWaiter::DebugRecordingAsyncWaiter(
    DebugRecording* proxy) : proxy_(proxy) {}

DebugRecordingAsyncWaiter::~DebugRecordingAsyncWaiter() = default;


}  // namespace mojom
}  // namespace audio

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif