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

#include "media/mojo/interfaces/video_encode_accelerator.mojom.h"

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

#include "media/mojo/interfaces/video_encode_accelerator.mojom-shared-message-ids.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "media/base/ipc/media_param_traits_macros.h"
#include "media/mojo/interfaces/video_encode_accelerator_typemap_traits.h"
#include "media/mojo/interfaces/video_frame_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace media {
namespace mojom {
const char VideoEncodeAcceleratorProvider::Name_[] = "media.mojom.VideoEncodeAcceleratorProvider";

VideoEncodeAcceleratorProviderProxy::VideoEncodeAcceleratorProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoEncodeAcceleratorProviderProxy::CreateVideoEncodeAccelerator(
    VideoEncodeAcceleratorRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::VideoEncodeAcceleratorProvider::CreateVideoEncodeAccelerator");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::VideoEncodeAcceleratorRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in VideoEncodeAcceleratorProvider.CreateVideoEncodeAccelerator request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool VideoEncodeAcceleratorProviderStubDispatch::Accept(
    VideoEncodeAcceleratorProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAcceleratorProvider::CreateVideoEncodeAccelerator",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data* params =
          reinterpret_cast<internal::VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoEncodeAcceleratorRequest p_request{};
      VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoEncodeAcceleratorProvider::CreateVideoEncodeAccelerator deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateVideoEncodeAccelerator(
std::move(p_request));
      return true;
    }
  }
  return false;
}

// static
bool VideoEncodeAcceleratorProviderStubDispatch::AcceptWithResponder(
    VideoEncodeAcceleratorProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAcceleratorProvider::CreateVideoEncodeAccelerator",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool VideoEncodeAcceleratorProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoEncodeAcceleratorProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Params_Data>(
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

void VideoEncodeAcceleratorProviderInterceptorForTesting::CreateVideoEncodeAccelerator(VideoEncodeAcceleratorRequest request) {
  GetForwardingInterface()->CreateVideoEncodeAccelerator(std::move(request));
}
VideoEncodeAcceleratorProviderAsyncWaiter::VideoEncodeAcceleratorProviderAsyncWaiter(
    VideoEncodeAcceleratorProvider* proxy) : proxy_(proxy) {}

VideoEncodeAcceleratorProviderAsyncWaiter::~VideoEncodeAcceleratorProviderAsyncWaiter() = default;


const char VideoEncodeAccelerator::Name_[] = "media.mojom.VideoEncodeAccelerator";
bool VideoEncodeAccelerator::Initialize(media::VideoPixelFormat input_format, const gfx::Size& input_visible_size, media::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeAcceleratorClientPtr client, bool* out_result) {
  NOTREACHED();
  return false;
}
class VideoEncodeAccelerator_Initialize_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  VideoEncodeAccelerator_Initialize_HandleSyncResponse(
      bool* result, bool* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_result_;DISALLOW_COPY_AND_ASSIGN(VideoEncodeAccelerator_Initialize_HandleSyncResponse);
};

class VideoEncodeAccelerator_Initialize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoEncodeAccelerator_Initialize_ForwardToCallback(
      VideoEncodeAccelerator::InitializeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoEncodeAccelerator::InitializeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAccelerator_Initialize_ForwardToCallback);
};

class VideoEncodeAccelerator_Encode_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoEncodeAccelerator_Encode_ForwardToCallback(
      VideoEncodeAccelerator::EncodeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoEncodeAccelerator::EncodeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAccelerator_Encode_ForwardToCallback);
};

VideoEncodeAcceleratorProxy::VideoEncodeAcceleratorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool VideoEncodeAcceleratorProxy::Initialize(
    media::VideoPixelFormat param_input_format, const gfx::Size& param_input_visible_size, media::VideoCodecProfile param_output_profile, uint32_t param_initial_bitrate, VideoEncodeAcceleratorClientPtr param_client, bool* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::VideoEncodeAccelerator::Initialize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAccelerator_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::VideoPixelFormat>(
      param_input_format, &params->input_format);
  typename decltype(params->input_visible_size)::BaseType::BufferWriter
      input_visible_size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      param_input_visible_size, buffer, &input_visible_size_writer, &serialization_context);
  params->input_visible_size.Set(
      input_visible_size_writer.is_null() ? nullptr : input_visible_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input_visible_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input_visible_size in VideoEncodeAccelerator.Initialize request");
  mojo::internal::Serialize<::media::mojom::VideoCodecProfile>(
      param_output_profile, &params->output_profile);
  params->initial_bitrate = param_initial_bitrate;
  mojo::internal::Serialize<::media::mojom::VideoEncodeAcceleratorClientPtrDataView>(
      param_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in VideoEncodeAccelerator.Initialize request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoEncodeAccelerator_Initialize_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void VideoEncodeAcceleratorProxy::Initialize(
    media::VideoPixelFormat in_input_format, const gfx::Size& in_input_visible_size, media::VideoCodecProfile in_output_profile, uint32_t in_initial_bitrate, VideoEncodeAcceleratorClientPtr in_client, InitializeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::VideoEncodeAccelerator::Initialize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAccelerator_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::VideoPixelFormat>(
      in_input_format, &params->input_format);
  typename decltype(params->input_visible_size)::BaseType::BufferWriter
      input_visible_size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_input_visible_size, buffer, &input_visible_size_writer, &serialization_context);
  params->input_visible_size.Set(
      input_visible_size_writer.is_null() ? nullptr : input_visible_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input_visible_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input_visible_size in VideoEncodeAccelerator.Initialize request");
  mojo::internal::Serialize<::media::mojom::VideoCodecProfile>(
      in_output_profile, &params->output_profile);
  params->initial_bitrate = in_initial_bitrate;
  mojo::internal::Serialize<::media::mojom::VideoEncodeAcceleratorClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in VideoEncodeAccelerator.Initialize request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoEncodeAccelerator_Initialize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VideoEncodeAcceleratorProxy::Encode(
    const scoped_refptr<media::VideoFrame>& in_frame, bool in_force_keyframe, EncodeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::VideoEncodeAccelerator::Encode");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_Encode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAccelerator_Encode_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame)::BaseType::BufferWriter
      frame_writer;
  mojo::internal::Serialize<::media::mojom::VideoFrameDataView>(
      in_frame, buffer, &frame_writer, &serialization_context);
  params->frame.Set(
      frame_writer.is_null() ? nullptr : frame_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame in VideoEncodeAccelerator.Encode request");
  params->force_keyframe = in_force_keyframe;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoEncodeAccelerator_Encode_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VideoEncodeAcceleratorProxy::UseOutputBitstreamBuffer(
    int32_t in_bitstream_buffer_id, mojo::ScopedSharedBufferHandle in_buffer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::VideoEncodeAccelerator::UseOutputBitstreamBuffer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_UseOutputBitstreamBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->bitstream_buffer_id = in_bitstream_buffer_id;
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_buffer, &params->buffer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->buffer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid buffer in VideoEncodeAccelerator.UseOutputBitstreamBuffer request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoEncodeAcceleratorProxy::RequestEncodingParametersChange(
    uint32_t in_bitrate, uint32_t in_framerate) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::VideoEncodeAccelerator::RequestEncodingParametersChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_RequestEncodingParametersChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->bitrate = in_bitrate;
  params->framerate = in_framerate;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class VideoEncodeAccelerator_Initialize_ProxyToResponder {
 public:
  static VideoEncodeAccelerator::InitializeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoEncodeAccelerator_Initialize_ProxyToResponder> proxy(
        new VideoEncodeAccelerator_Initialize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoEncodeAccelerator_Initialize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoEncodeAccelerator_Initialize_ProxyToResponder() {
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
  VideoEncodeAccelerator_Initialize_ProxyToResponder(
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
        << "VideoEncodeAccelerator::InitializeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAccelerator_Initialize_ProxyToResponder);
};

bool VideoEncodeAccelerator_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::VideoEncodeAccelerator::InitializeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoEncodeAccelerator_Initialize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoEncodeAccelerator_Initialize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  VideoEncodeAccelerator_Initialize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VideoEncodeAccelerator::Initialize response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void VideoEncodeAccelerator_Initialize_ProxyToResponder::Run(
    bool in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAccelerator_Initialize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAccelerator::InitializeCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool VideoEncodeAccelerator_Initialize_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::VideoEncodeAccelerator_Initialize_ResponseParams_Data* params =
      reinterpret_cast<internal::VideoEncodeAccelerator_Initialize_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  VideoEncodeAccelerator_Initialize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VideoEncodeAccelerator::Initialize response deserializer");
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class VideoEncodeAccelerator_Encode_ProxyToResponder {
 public:
  static VideoEncodeAccelerator::EncodeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoEncodeAccelerator_Encode_ProxyToResponder> proxy(
        new VideoEncodeAccelerator_Encode_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoEncodeAccelerator_Encode_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoEncodeAccelerator_Encode_ProxyToResponder() {
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
  VideoEncodeAccelerator_Encode_ProxyToResponder(
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
        << "VideoEncodeAccelerator::EncodeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAccelerator_Encode_ProxyToResponder);
};

bool VideoEncodeAccelerator_Encode_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::VideoEncodeAccelerator::EncodeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoEncodeAccelerator_Encode_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoEncodeAccelerator_Encode_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  VideoEncodeAccelerator_Encode_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VideoEncodeAccelerator::Encode response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void VideoEncodeAccelerator_Encode_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_Encode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAccelerator_Encode_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAccelerator::EncodeCallback",
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
bool VideoEncodeAcceleratorStubDispatch::Accept(
    VideoEncodeAccelerator* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoEncodeAccelerator_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAccelerator::Initialize",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoEncodeAccelerator_Encode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAccelerator::Encode",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoEncodeAccelerator_UseOutputBitstreamBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAccelerator::UseOutputBitstreamBuffer",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data* params =
          reinterpret_cast<internal::VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_bitstream_buffer_id{};
      mojo::ScopedSharedBufferHandle p_buffer{};
      VideoEncodeAccelerator_UseOutputBitstreamBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      p_bitstream_buffer_id = input_data_view.bitstream_buffer_id();
      p_buffer = input_data_view.TakeBuffer();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoEncodeAccelerator::UseOutputBitstreamBuffer deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UseOutputBitstreamBuffer(
std::move(p_bitstream_buffer_id), 
std::move(p_buffer));
      return true;
    }
    case internal::kVideoEncodeAccelerator_RequestEncodingParametersChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAccelerator::RequestEncodingParametersChange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data* params =
          reinterpret_cast<internal::VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_bitrate{};
      uint32_t p_framerate{};
      VideoEncodeAccelerator_RequestEncodingParametersChange_ParamsDataView input_data_view(params, &serialization_context);
      
      p_bitrate = input_data_view.bitrate();
      p_framerate = input_data_view.framerate();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoEncodeAccelerator::RequestEncodingParametersChange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestEncodingParametersChange(
std::move(p_bitrate), 
std::move(p_framerate));
      return true;
    }
  }
  return false;
}

// static
bool VideoEncodeAcceleratorStubDispatch::AcceptWithResponder(
    VideoEncodeAccelerator* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoEncodeAccelerator_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAccelerator::Initialize",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoEncodeAccelerator_Initialize_Params_Data* params =
          reinterpret_cast<
              internal::VideoEncodeAccelerator_Initialize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::VideoPixelFormat p_input_format{};
      gfx::Size p_input_visible_size{};
      media::VideoCodecProfile p_output_profile{};
      uint32_t p_initial_bitrate{};
      VideoEncodeAcceleratorClientPtr p_client{};
      VideoEncodeAccelerator_Initialize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInputFormat(&p_input_format))
        success = false;
      if (!input_data_view.ReadInputVisibleSize(&p_input_visible_size))
        success = false;
      if (!input_data_view.ReadOutputProfile(&p_output_profile))
        success = false;
      p_initial_bitrate = input_data_view.initial_bitrate();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoEncodeAccelerator::Initialize deserializer");
        return false;
      }
      VideoEncodeAccelerator::InitializeCallback callback =
          VideoEncodeAccelerator_Initialize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Initialize(
std::move(p_input_format), 
std::move(p_input_visible_size), 
std::move(p_output_profile), 
std::move(p_initial_bitrate), 
std::move(p_client), std::move(callback));
      return true;
    }
    case internal::kVideoEncodeAccelerator_Encode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAccelerator::Encode",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoEncodeAccelerator_Encode_Params_Data* params =
          reinterpret_cast<
              internal::VideoEncodeAccelerator_Encode_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      scoped_refptr<media::VideoFrame> p_frame{};
      bool p_force_keyframe{};
      VideoEncodeAccelerator_Encode_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFrame(&p_frame))
        success = false;
      p_force_keyframe = input_data_view.force_keyframe();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoEncodeAccelerator::Encode deserializer");
        return false;
      }
      VideoEncodeAccelerator::EncodeCallback callback =
          VideoEncodeAccelerator_Encode_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Encode(
std::move(p_frame), 
std::move(p_force_keyframe), std::move(callback));
      return true;
    }
    case internal::kVideoEncodeAccelerator_UseOutputBitstreamBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAccelerator::UseOutputBitstreamBuffer",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoEncodeAccelerator_RequestEncodingParametersChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAccelerator::RequestEncodingParametersChange",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool VideoEncodeAcceleratorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoEncodeAccelerator RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoEncodeAccelerator_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoEncodeAccelerator_Encode_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_Encode_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoEncodeAccelerator_UseOutputBitstreamBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_UseOutputBitstreamBuffer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoEncodeAccelerator_RequestEncodingParametersChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data>(
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

bool VideoEncodeAcceleratorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoEncodeAccelerator ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVideoEncodeAccelerator_Initialize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_Initialize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoEncodeAccelerator_Encode_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_Encode_ResponseParams_Data>(
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
void VideoEncodeAcceleratorInterceptorForTesting::Initialize(media::VideoPixelFormat input_format, const gfx::Size& input_visible_size, media::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeAcceleratorClientPtr client, InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(input_format), std::move(input_visible_size), std::move(output_profile), std::move(initial_bitrate), std::move(client), std::move(callback));
}
void VideoEncodeAcceleratorInterceptorForTesting::Encode(const scoped_refptr<media::VideoFrame>& frame, bool force_keyframe, EncodeCallback callback) {
  GetForwardingInterface()->Encode(std::move(frame), std::move(force_keyframe), std::move(callback));
}
void VideoEncodeAcceleratorInterceptorForTesting::UseOutputBitstreamBuffer(int32_t bitstream_buffer_id, mojo::ScopedSharedBufferHandle buffer) {
  GetForwardingInterface()->UseOutputBitstreamBuffer(std::move(bitstream_buffer_id), std::move(buffer));
}
void VideoEncodeAcceleratorInterceptorForTesting::RequestEncodingParametersChange(uint32_t bitrate, uint32_t framerate) {
  GetForwardingInterface()->RequestEncodingParametersChange(std::move(bitrate), std::move(framerate));
}
VideoEncodeAcceleratorAsyncWaiter::VideoEncodeAcceleratorAsyncWaiter(
    VideoEncodeAccelerator* proxy) : proxy_(proxy) {}

VideoEncodeAcceleratorAsyncWaiter::~VideoEncodeAcceleratorAsyncWaiter() = default;

void VideoEncodeAcceleratorAsyncWaiter::Initialize(
    media::VideoPixelFormat input_format, const gfx::Size& input_visible_size, media::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeAcceleratorClientPtr client, bool* out_result) {
  base::RunLoop loop;
  proxy_->Initialize(std::move(input_format),std::move(input_visible_size),std::move(output_profile),std::move(initial_bitrate),std::move(client),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void VideoEncodeAcceleratorAsyncWaiter::Encode(
    const scoped_refptr<media::VideoFrame>& frame, bool force_keyframe) {
  base::RunLoop loop;
  proxy_->Encode(std::move(frame),std::move(force_keyframe),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

const char VideoEncodeAcceleratorClient::Name_[] = "media.mojom.VideoEncodeAcceleratorClient";

VideoEncodeAcceleratorClientProxy::VideoEncodeAcceleratorClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoEncodeAcceleratorClientProxy::RequireBitstreamBuffers(
    uint32_t in_input_count, const gfx::Size& in_input_coded_size, uint32_t in_output_buffer_size) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::VideoEncodeAcceleratorClient::RequireBitstreamBuffers");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAcceleratorClient_RequireBitstreamBuffers_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->input_count = in_input_count;
  typename decltype(params->input_coded_size)::BaseType::BufferWriter
      input_coded_size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_input_coded_size, buffer, &input_coded_size_writer, &serialization_context);
  params->input_coded_size.Set(
      input_coded_size_writer.is_null() ? nullptr : input_coded_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input_coded_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input_coded_size in VideoEncodeAcceleratorClient.RequireBitstreamBuffers request");
  params->output_buffer_size = in_output_buffer_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoEncodeAcceleratorClientProxy::BitstreamBufferReady(
    int32_t in_bitstream_buffer_id, uint32_t in_payload_size, bool in_key_frame, base::TimeDelta in_timestamp) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::VideoEncodeAcceleratorClient::BitstreamBufferReady");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAcceleratorClient_BitstreamBufferReady_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->bitstream_buffer_id = in_bitstream_buffer_id;
  params->payload_size = in_payload_size;
  params->key_frame = in_key_frame;
  typename decltype(params->timestamp)::BaseType::BufferWriter
      timestamp_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_timestamp, buffer, &timestamp_writer, &serialization_context);
  params->timestamp.Set(
      timestamp_writer.is_null() ? nullptr : timestamp_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timestamp.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timestamp in VideoEncodeAcceleratorClient.BitstreamBufferReady request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoEncodeAcceleratorClientProxy::NotifyError(
    media::VideoEncodeAccelerator::Error in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::VideoEncodeAcceleratorClient::NotifyError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAcceleratorClient_NotifyError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::VideoEncodeAcceleratorClient_NotifyError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::VideoEncodeAccelerator_Error>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool VideoEncodeAcceleratorClientStubDispatch::Accept(
    VideoEncodeAcceleratorClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoEncodeAcceleratorClient_RequireBitstreamBuffers_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAcceleratorClient::RequireBitstreamBuffers",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data* params =
          reinterpret_cast<internal::VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_input_count{};
      gfx::Size p_input_coded_size{};
      uint32_t p_output_buffer_size{};
      VideoEncodeAcceleratorClient_RequireBitstreamBuffers_ParamsDataView input_data_view(params, &serialization_context);
      
      p_input_count = input_data_view.input_count();
      if (!input_data_view.ReadInputCodedSize(&p_input_coded_size))
        success = false;
      p_output_buffer_size = input_data_view.output_buffer_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoEncodeAcceleratorClient::RequireBitstreamBuffers deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequireBitstreamBuffers(
std::move(p_input_count), 
std::move(p_input_coded_size), 
std::move(p_output_buffer_size));
      return true;
    }
    case internal::kVideoEncodeAcceleratorClient_BitstreamBufferReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAcceleratorClient::BitstreamBufferReady",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data* params =
          reinterpret_cast<internal::VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_bitstream_buffer_id{};
      uint32_t p_payload_size{};
      bool p_key_frame{};
      base::TimeDelta p_timestamp{};
      VideoEncodeAcceleratorClient_BitstreamBufferReady_ParamsDataView input_data_view(params, &serialization_context);
      
      p_bitstream_buffer_id = input_data_view.bitstream_buffer_id();
      p_payload_size = input_data_view.payload_size();
      p_key_frame = input_data_view.key_frame();
      if (!input_data_view.ReadTimestamp(&p_timestamp))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoEncodeAcceleratorClient::BitstreamBufferReady deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->BitstreamBufferReady(
std::move(p_bitstream_buffer_id), 
std::move(p_payload_size), 
std::move(p_key_frame), 
std::move(p_timestamp));
      return true;
    }
    case internal::kVideoEncodeAcceleratorClient_NotifyError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAcceleratorClient::NotifyError",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoEncodeAcceleratorClient_NotifyError_Params_Data* params =
          reinterpret_cast<internal::VideoEncodeAcceleratorClient_NotifyError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::VideoEncodeAccelerator::Error p_error{};
      VideoEncodeAcceleratorClient_NotifyError_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoEncodeAcceleratorClient::NotifyError deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->NotifyError(
std::move(p_error));
      return true;
    }
  }
  return false;
}

// static
bool VideoEncodeAcceleratorClientStubDispatch::AcceptWithResponder(
    VideoEncodeAcceleratorClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoEncodeAcceleratorClient_RequireBitstreamBuffers_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAcceleratorClient::RequireBitstreamBuffers",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoEncodeAcceleratorClient_BitstreamBufferReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAcceleratorClient::BitstreamBufferReady",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoEncodeAcceleratorClient_NotifyError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::VideoEncodeAcceleratorClient::NotifyError",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool VideoEncodeAcceleratorClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoEncodeAcceleratorClient RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoEncodeAcceleratorClient_RequireBitstreamBuffers_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAcceleratorClient_RequireBitstreamBuffers_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoEncodeAcceleratorClient_BitstreamBufferReady_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAcceleratorClient_BitstreamBufferReady_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoEncodeAcceleratorClient_NotifyError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAcceleratorClient_NotifyError_Params_Data>(
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

void VideoEncodeAcceleratorClientInterceptorForTesting::RequireBitstreamBuffers(uint32_t input_count, const gfx::Size& input_coded_size, uint32_t output_buffer_size) {
  GetForwardingInterface()->RequireBitstreamBuffers(std::move(input_count), std::move(input_coded_size), std::move(output_buffer_size));
}
void VideoEncodeAcceleratorClientInterceptorForTesting::BitstreamBufferReady(int32_t bitstream_buffer_id, uint32_t payload_size, bool key_frame, base::TimeDelta timestamp) {
  GetForwardingInterface()->BitstreamBufferReady(std::move(bitstream_buffer_id), std::move(payload_size), std::move(key_frame), std::move(timestamp));
}
void VideoEncodeAcceleratorClientInterceptorForTesting::NotifyError(media::VideoEncodeAccelerator::Error error) {
  GetForwardingInterface()->NotifyError(std::move(error));
}
VideoEncodeAcceleratorClientAsyncWaiter::VideoEncodeAcceleratorClientAsyncWaiter(
    VideoEncodeAcceleratorClient* proxy) : proxy_(proxy) {}

VideoEncodeAcceleratorClientAsyncWaiter::~VideoEncodeAcceleratorClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif