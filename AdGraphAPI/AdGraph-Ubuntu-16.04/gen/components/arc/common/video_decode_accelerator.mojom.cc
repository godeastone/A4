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

#include "components/arc/common/video_decode_accelerator.mojom.h"

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

#include "components/arc/common/video_decode_accelerator.mojom-shared-message-ids.h"
#include "components/arc/common/arc_gfx_struct_traits.h"
#include "components/arc/common/video_accelerator_struct_traits.h"
namespace arc {
namespace mojom {
BitstreamBuffer::BitstreamBuffer()
    : bitstream_id(),
      handle_fd(),
      offset(),
      bytes_used() {}

BitstreamBuffer::BitstreamBuffer(
    int32_t bitstream_id_in,
    mojo::ScopedHandle handle_fd_in,
    uint32_t offset_in,
    uint32_t bytes_used_in)
    : bitstream_id(std::move(bitstream_id_in)),
      handle_fd(std::move(handle_fd_in)),
      offset(std::move(offset_in)),
      bytes_used(std::move(bytes_used_in)) {}

BitstreamBuffer::~BitstreamBuffer() = default;

bool BitstreamBuffer::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Picture::Picture()
    : picture_buffer_id(),
      bitstream_id(),
      crop_rect() {}

Picture::Picture(
    int32_t picture_buffer_id_in,
    int32_t bitstream_id_in,
    const ::gfx::Rect& crop_rect_in)
    : picture_buffer_id(std::move(picture_buffer_id_in)),
      bitstream_id(std::move(bitstream_id_in)),
      crop_rect(std::move(crop_rect_in)) {}

Picture::~Picture() = default;

bool Picture::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PictureBufferFormat::PictureBufferFormat()
    : min_num_buffers(),
      coded_size() {}

PictureBufferFormat::PictureBufferFormat(
    uint32_t min_num_buffers_in,
    const gfx::Size& coded_size_in)
    : min_num_buffers(std::move(min_num_buffers_in)),
      coded_size(std::move(coded_size_in)) {}

PictureBufferFormat::~PictureBufferFormat() = default;

bool PictureBufferFormat::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoDecodeAcceleratorConfig::VideoDecodeAcceleratorConfig()
    : profile(),
      secure_mode() {}

VideoDecodeAcceleratorConfig::VideoDecodeAcceleratorConfig(
    media::VideoCodecProfile profile_in,
    bool secure_mode_in)
    : profile(std::move(profile_in)),
      secure_mode(std::move(secure_mode_in)) {}

VideoDecodeAcceleratorConfig::~VideoDecodeAcceleratorConfig() = default;

bool VideoDecodeAcceleratorConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char VideoDecodeAccelerator::Name_[] = "arc.mojom.VideoDecodeAccelerator";

class VideoDecodeAccelerator_Initialize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoDecodeAccelerator_Initialize_ForwardToCallback(
      VideoDecodeAccelerator::InitializeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoDecodeAccelerator::InitializeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoDecodeAccelerator_Initialize_ForwardToCallback);
};

class VideoDecodeAccelerator_Reset_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoDecodeAccelerator_Reset_ForwardToCallback(
      VideoDecodeAccelerator::ResetCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoDecodeAccelerator::ResetCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoDecodeAccelerator_Reset_ForwardToCallback);
};

class VideoDecodeAccelerator_Flush_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoDecodeAccelerator_Flush_ForwardToCallback(
      VideoDecodeAccelerator::FlushCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoDecodeAccelerator::FlushCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoDecodeAccelerator_Flush_ForwardToCallback);
};

VideoDecodeAcceleratorProxy::VideoDecodeAcceleratorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoDecodeAcceleratorProxy::Initialize(
    VideoDecodeAcceleratorConfigPtr in_config, VideoDecodeClientPtr in_client, InitializeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoDecodeAccelerator::Initialize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodeAccelerator_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoDecodeAccelerator_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->config)::BaseType::BufferWriter
      config_writer;
  mojo::internal::Serialize<::arc::mojom::VideoDecodeAcceleratorConfigDataView>(
      in_config, buffer, &config_writer, &serialization_context);
  params->config.Set(
      config_writer.is_null() ? nullptr : config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in VideoDecodeAccelerator.Initialize request");
  mojo::internal::Serialize<::arc::mojom::VideoDecodeClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in VideoDecodeAccelerator.Initialize request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoDecodeAccelerator_Initialize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VideoDecodeAcceleratorProxy::Decode(
    BitstreamBufferPtr in_bitstream_buffer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoDecodeAccelerator::Decode");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodeAccelerator_Decode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoDecodeAccelerator_Decode_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->bitstream_buffer)::BaseType::BufferWriter
      bitstream_buffer_writer;
  mojo::internal::Serialize<::arc::mojom::BitstreamBufferDataView>(
      in_bitstream_buffer, buffer, &bitstream_buffer_writer, &serialization_context);
  params->bitstream_buffer.Set(
      bitstream_buffer_writer.is_null() ? nullptr : bitstream_buffer_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bitstream_buffer.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bitstream_buffer in VideoDecodeAccelerator.Decode request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoDecodeAcceleratorProxy::AssignPictureBuffers(
    uint32_t in_count) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoDecodeAccelerator::AssignPictureBuffers");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodeAccelerator_AssignPictureBuffers_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoDecodeAccelerator_AssignPictureBuffers_Params_Data::BufferWriter
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

void VideoDecodeAcceleratorProxy::ImportBufferForPicture(
    int32_t in_picture_buffer_id, ::arc::mojom::HalPixelFormat in_format, mojo::ScopedHandle in_handle_fd, std::vector<arc::VideoFramePlane> in_planes) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoDecodeAccelerator::ImportBufferForPicture");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodeAccelerator_ImportBufferForPicture_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoDecodeAccelerator_ImportBufferForPicture_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->picture_buffer_id = in_picture_buffer_id;
  mojo::internal::Serialize<::arc::mojom::HalPixelFormat>(
      in_format, &params->format);
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_handle_fd, &params->handle_fd, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->handle_fd),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid handle_fd in VideoDecodeAccelerator.ImportBufferForPicture request");
  typename decltype(params->planes)::BaseType::BufferWriter
      planes_writer;
  const mojo::internal::ContainerValidateParams planes_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::arc::mojom::VideoFramePlaneDataView>>(
      in_planes, buffer, &planes_writer, &planes_validate_params,
      &serialization_context);
  params->planes.Set(
      planes_writer.is_null() ? nullptr : planes_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->planes.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null planes in VideoDecodeAccelerator.ImportBufferForPicture request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoDecodeAcceleratorProxy::ReusePictureBuffer(
    int32_t in_picture_buffer_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoDecodeAccelerator::ReusePictureBuffer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodeAccelerator_ReusePictureBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoDecodeAccelerator_ReusePictureBuffer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->picture_buffer_id = in_picture_buffer_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoDecodeAcceleratorProxy::Reset(
    ResetCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoDecodeAccelerator::Reset");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodeAccelerator_Reset_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoDecodeAccelerator_Reset_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoDecodeAccelerator_Reset_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VideoDecodeAcceleratorProxy::Flush(
    FlushCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoDecodeAccelerator::Flush");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodeAccelerator_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoDecodeAccelerator_Flush_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoDecodeAccelerator_Flush_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class VideoDecodeAccelerator_Initialize_ProxyToResponder {
 public:
  static VideoDecodeAccelerator::InitializeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoDecodeAccelerator_Initialize_ProxyToResponder> proxy(
        new VideoDecodeAccelerator_Initialize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoDecodeAccelerator_Initialize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoDecodeAccelerator_Initialize_ProxyToResponder() {
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
  VideoDecodeAccelerator_Initialize_ProxyToResponder(
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
        << "VideoDecodeAccelerator::InitializeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      VideoDecodeAccelerator::Result in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecodeAccelerator_Initialize_ProxyToResponder);
};

bool VideoDecodeAccelerator_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "arc::mojom::VideoDecodeAccelerator::InitializeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoDecodeAccelerator_Initialize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoDecodeAccelerator_Initialize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  VideoDecodeAccelerator::Result p_result{};
  VideoDecodeAccelerator_Initialize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VideoDecodeAccelerator::Initialize response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void VideoDecodeAccelerator_Initialize_ProxyToResponder::Run(
    VideoDecodeAccelerator::Result in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodeAccelerator_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoDecodeAccelerator_Initialize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::arc::mojom::VideoDecodeAccelerator_Result>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeAccelerator::InitializeCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VideoDecodeAccelerator_Reset_ProxyToResponder {
 public:
  static VideoDecodeAccelerator::ResetCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoDecodeAccelerator_Reset_ProxyToResponder> proxy(
        new VideoDecodeAccelerator_Reset_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoDecodeAccelerator_Reset_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoDecodeAccelerator_Reset_ProxyToResponder() {
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
  VideoDecodeAccelerator_Reset_ProxyToResponder(
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
        << "VideoDecodeAccelerator::ResetCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      VideoDecodeAccelerator::Result in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecodeAccelerator_Reset_ProxyToResponder);
};

bool VideoDecodeAccelerator_Reset_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "arc::mojom::VideoDecodeAccelerator::ResetCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoDecodeAccelerator_Reset_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoDecodeAccelerator_Reset_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  VideoDecodeAccelerator::Result p_result{};
  VideoDecodeAccelerator_Reset_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VideoDecodeAccelerator::Reset response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void VideoDecodeAccelerator_Reset_ProxyToResponder::Run(
    VideoDecodeAccelerator::Result in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodeAccelerator_Reset_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoDecodeAccelerator_Reset_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::arc::mojom::VideoDecodeAccelerator_Result>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeAccelerator::ResetCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VideoDecodeAccelerator_Flush_ProxyToResponder {
 public:
  static VideoDecodeAccelerator::FlushCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoDecodeAccelerator_Flush_ProxyToResponder> proxy(
        new VideoDecodeAccelerator_Flush_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoDecodeAccelerator_Flush_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoDecodeAccelerator_Flush_ProxyToResponder() {
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
  VideoDecodeAccelerator_Flush_ProxyToResponder(
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
        << "VideoDecodeAccelerator::FlushCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      VideoDecodeAccelerator::Result in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecodeAccelerator_Flush_ProxyToResponder);
};

bool VideoDecodeAccelerator_Flush_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "arc::mojom::VideoDecodeAccelerator::FlushCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoDecodeAccelerator_Flush_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoDecodeAccelerator_Flush_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  VideoDecodeAccelerator::Result p_result{};
  VideoDecodeAccelerator_Flush_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VideoDecodeAccelerator::Flush response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void VideoDecodeAccelerator_Flush_ProxyToResponder::Run(
    VideoDecodeAccelerator::Result in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodeAccelerator_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoDecodeAccelerator_Flush_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::arc::mojom::VideoDecodeAccelerator_Result>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeAccelerator::FlushCallback",
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
bool VideoDecodeAcceleratorStubDispatch::Accept(
    VideoDecodeAccelerator* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoDecodeAccelerator_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeAccelerator::Initialize",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoDecodeAccelerator_Decode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeAccelerator::Decode",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoDecodeAccelerator_Decode_Params_Data* params =
          reinterpret_cast<internal::VideoDecodeAccelerator_Decode_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BitstreamBufferPtr p_bitstream_buffer{};
      VideoDecodeAccelerator_Decode_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBitstreamBuffer(&p_bitstream_buffer))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoDecodeAccelerator::Decode deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Decode(
std::move(p_bitstream_buffer));
      return true;
    }
    case internal::kVideoDecodeAccelerator_AssignPictureBuffers_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeAccelerator::AssignPictureBuffers",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoDecodeAccelerator_AssignPictureBuffers_Params_Data* params =
          reinterpret_cast<internal::VideoDecodeAccelerator_AssignPictureBuffers_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_count{};
      VideoDecodeAccelerator_AssignPictureBuffers_ParamsDataView input_data_view(params, &serialization_context);
      
      p_count = input_data_view.count();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoDecodeAccelerator::AssignPictureBuffers deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AssignPictureBuffers(
std::move(p_count));
      return true;
    }
    case internal::kVideoDecodeAccelerator_ImportBufferForPicture_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeAccelerator::ImportBufferForPicture",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoDecodeAccelerator_ImportBufferForPicture_Params_Data* params =
          reinterpret_cast<internal::VideoDecodeAccelerator_ImportBufferForPicture_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_picture_buffer_id{};
      ::arc::mojom::HalPixelFormat p_format{};
      mojo::ScopedHandle p_handle_fd{};
      std::vector<arc::VideoFramePlane> p_planes{};
      VideoDecodeAccelerator_ImportBufferForPicture_ParamsDataView input_data_view(params, &serialization_context);
      
      p_picture_buffer_id = input_data_view.picture_buffer_id();
      if (!input_data_view.ReadFormat(&p_format))
        success = false;
      p_handle_fd = input_data_view.TakeHandleFd();
      if (!input_data_view.ReadPlanes(&p_planes))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoDecodeAccelerator::ImportBufferForPicture deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ImportBufferForPicture(
std::move(p_picture_buffer_id), 
std::move(p_format), 
std::move(p_handle_fd), 
std::move(p_planes));
      return true;
    }
    case internal::kVideoDecodeAccelerator_ReusePictureBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeAccelerator::ReusePictureBuffer",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoDecodeAccelerator_ReusePictureBuffer_Params_Data* params =
          reinterpret_cast<internal::VideoDecodeAccelerator_ReusePictureBuffer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_picture_buffer_id{};
      VideoDecodeAccelerator_ReusePictureBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      p_picture_buffer_id = input_data_view.picture_buffer_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoDecodeAccelerator::ReusePictureBuffer deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReusePictureBuffer(
std::move(p_picture_buffer_id));
      return true;
    }
    case internal::kVideoDecodeAccelerator_Reset_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeAccelerator::Reset",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoDecodeAccelerator_Flush_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeAccelerator::Flush",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool VideoDecodeAcceleratorStubDispatch::AcceptWithResponder(
    VideoDecodeAccelerator* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoDecodeAccelerator_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeAccelerator::Initialize",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoDecodeAccelerator_Initialize_Params_Data* params =
          reinterpret_cast<
              internal::VideoDecodeAccelerator_Initialize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoDecodeAcceleratorConfigPtr p_config{};
      VideoDecodeClientPtr p_client{};
      VideoDecodeAccelerator_Initialize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadConfig(&p_config))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoDecodeAccelerator::Initialize deserializer");
        return false;
      }
      VideoDecodeAccelerator::InitializeCallback callback =
          VideoDecodeAccelerator_Initialize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Initialize(
std::move(p_config), 
std::move(p_client), std::move(callback));
      return true;
    }
    case internal::kVideoDecodeAccelerator_Decode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeAccelerator::Decode",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoDecodeAccelerator_AssignPictureBuffers_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeAccelerator::AssignPictureBuffers",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoDecodeAccelerator_ImportBufferForPicture_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeAccelerator::ImportBufferForPicture",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoDecodeAccelerator_ReusePictureBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeAccelerator::ReusePictureBuffer",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoDecodeAccelerator_Reset_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeAccelerator::Reset",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoDecodeAccelerator_Reset_Params_Data* params =
          reinterpret_cast<
              internal::VideoDecodeAccelerator_Reset_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoDecodeAccelerator_Reset_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoDecodeAccelerator::Reset deserializer");
        return false;
      }
      VideoDecodeAccelerator::ResetCallback callback =
          VideoDecodeAccelerator_Reset_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Reset(std::move(callback));
      return true;
    }
    case internal::kVideoDecodeAccelerator_Flush_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeAccelerator::Flush",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoDecodeAccelerator_Flush_Params_Data* params =
          reinterpret_cast<
              internal::VideoDecodeAccelerator_Flush_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoDecodeAccelerator_Flush_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoDecodeAccelerator::Flush deserializer");
        return false;
      }
      VideoDecodeAccelerator::FlushCallback callback =
          VideoDecodeAccelerator_Flush_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Flush(std::move(callback));
      return true;
    }
  }
  return false;
}

bool VideoDecodeAcceleratorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoDecodeAccelerator RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoDecodeAccelerator_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodeAccelerator_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecodeAccelerator_Decode_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodeAccelerator_Decode_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecodeAccelerator_AssignPictureBuffers_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodeAccelerator_AssignPictureBuffers_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecodeAccelerator_ImportBufferForPicture_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodeAccelerator_ImportBufferForPicture_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecodeAccelerator_ReusePictureBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodeAccelerator_ReusePictureBuffer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecodeAccelerator_Reset_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodeAccelerator_Reset_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecodeAccelerator_Flush_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodeAccelerator_Flush_Params_Data>(
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

bool VideoDecodeAcceleratorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoDecodeAccelerator ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVideoDecodeAccelerator_Initialize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodeAccelerator_Initialize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecodeAccelerator_Reset_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodeAccelerator_Reset_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecodeAccelerator_Flush_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodeAccelerator_Flush_ResponseParams_Data>(
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
void VideoDecodeAcceleratorInterceptorForTesting::Initialize(VideoDecodeAcceleratorConfigPtr config, VideoDecodeClientPtr client, InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(config), std::move(client), std::move(callback));
}
void VideoDecodeAcceleratorInterceptorForTesting::Decode(BitstreamBufferPtr bitstream_buffer) {
  GetForwardingInterface()->Decode(std::move(bitstream_buffer));
}
void VideoDecodeAcceleratorInterceptorForTesting::AssignPictureBuffers(uint32_t count) {
  GetForwardingInterface()->AssignPictureBuffers(std::move(count));
}
void VideoDecodeAcceleratorInterceptorForTesting::ImportBufferForPicture(int32_t picture_buffer_id, ::arc::mojom::HalPixelFormat format, mojo::ScopedHandle handle_fd, std::vector<arc::VideoFramePlane> planes) {
  GetForwardingInterface()->ImportBufferForPicture(std::move(picture_buffer_id), std::move(format), std::move(handle_fd), std::move(planes));
}
void VideoDecodeAcceleratorInterceptorForTesting::ReusePictureBuffer(int32_t picture_buffer_id) {
  GetForwardingInterface()->ReusePictureBuffer(std::move(picture_buffer_id));
}
void VideoDecodeAcceleratorInterceptorForTesting::Reset(ResetCallback callback) {
  GetForwardingInterface()->Reset(std::move(callback));
}
void VideoDecodeAcceleratorInterceptorForTesting::Flush(FlushCallback callback) {
  GetForwardingInterface()->Flush(std::move(callback));
}
VideoDecodeAcceleratorAsyncWaiter::VideoDecodeAcceleratorAsyncWaiter(
    VideoDecodeAccelerator* proxy) : proxy_(proxy) {}

VideoDecodeAcceleratorAsyncWaiter::~VideoDecodeAcceleratorAsyncWaiter() = default;

void VideoDecodeAcceleratorAsyncWaiter::Initialize(
    VideoDecodeAcceleratorConfigPtr config, VideoDecodeClientPtr client, VideoDecodeAccelerator::Result* out_result) {
  base::RunLoop loop;
  proxy_->Initialize(std::move(config),std::move(client),
      base::BindOnce(
          [](base::RunLoop* loop,
             VideoDecodeAccelerator::Result* out_result
,
             VideoDecodeAccelerator::Result result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void VideoDecodeAcceleratorAsyncWaiter::Reset(
    VideoDecodeAccelerator::Result* out_result) {
  base::RunLoop loop;
  proxy_->Reset(
      base::BindOnce(
          [](base::RunLoop* loop,
             VideoDecodeAccelerator::Result* out_result
,
             VideoDecodeAccelerator::Result result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void VideoDecodeAcceleratorAsyncWaiter::Flush(
    VideoDecodeAccelerator::Result* out_result) {
  base::RunLoop loop;
  proxy_->Flush(
      base::BindOnce(
          [](base::RunLoop* loop,
             VideoDecodeAccelerator::Result* out_result
,
             VideoDecodeAccelerator::Result result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}

const char VideoDecodeClient::Name_[] = "arc.mojom.VideoDecodeClient";

VideoDecodeClientProxy::VideoDecodeClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoDecodeClientProxy::ProvidePictureBuffers(
    PictureBufferFormatPtr in_format) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoDecodeClient::ProvidePictureBuffers");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodeClient_ProvidePictureBuffers_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoDecodeClient_ProvidePictureBuffers_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->format)::BaseType::BufferWriter
      format_writer;
  mojo::internal::Serialize<::arc::mojom::PictureBufferFormatDataView>(
      in_format, buffer, &format_writer, &serialization_context);
  params->format.Set(
      format_writer.is_null() ? nullptr : format_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->format.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null format in VideoDecodeClient.ProvidePictureBuffers request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoDecodeClientProxy::PictureReady(
    PicturePtr in_picture) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoDecodeClient::PictureReady");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodeClient_PictureReady_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoDecodeClient_PictureReady_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->picture)::BaseType::BufferWriter
      picture_writer;
  mojo::internal::Serialize<::arc::mojom::PictureDataView>(
      in_picture, buffer, &picture_writer, &serialization_context);
  params->picture.Set(
      picture_writer.is_null() ? nullptr : picture_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->picture.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null picture in VideoDecodeClient.PictureReady request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoDecodeClientProxy::NotifyEndOfBitstreamBuffer(
    int32_t in_bitstream_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoDecodeClient::NotifyEndOfBitstreamBuffer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodeClient_NotifyEndOfBitstreamBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->bitstream_id = in_bitstream_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoDecodeClientProxy::NotifyError(
    VideoDecodeAccelerator::Result in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoDecodeClient::NotifyError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoDecodeClient_NotifyError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoDecodeClient_NotifyError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::arc::mojom::VideoDecodeAccelerator_Result>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool VideoDecodeClientStubDispatch::Accept(
    VideoDecodeClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoDecodeClient_ProvidePictureBuffers_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeClient::ProvidePictureBuffers",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoDecodeClient_ProvidePictureBuffers_Params_Data* params =
          reinterpret_cast<internal::VideoDecodeClient_ProvidePictureBuffers_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PictureBufferFormatPtr p_format{};
      VideoDecodeClient_ProvidePictureBuffers_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFormat(&p_format))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoDecodeClient::ProvidePictureBuffers deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ProvidePictureBuffers(
std::move(p_format));
      return true;
    }
    case internal::kVideoDecodeClient_PictureReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeClient::PictureReady",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoDecodeClient_PictureReady_Params_Data* params =
          reinterpret_cast<internal::VideoDecodeClient_PictureReady_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PicturePtr p_picture{};
      VideoDecodeClient_PictureReady_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPicture(&p_picture))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoDecodeClient::PictureReady deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PictureReady(
std::move(p_picture));
      return true;
    }
    case internal::kVideoDecodeClient_NotifyEndOfBitstreamBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeClient::NotifyEndOfBitstreamBuffer",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params_Data* params =
          reinterpret_cast<internal::VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_bitstream_id{};
      VideoDecodeClient_NotifyEndOfBitstreamBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      p_bitstream_id = input_data_view.bitstream_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoDecodeClient::NotifyEndOfBitstreamBuffer deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->NotifyEndOfBitstreamBuffer(
std::move(p_bitstream_id));
      return true;
    }
    case internal::kVideoDecodeClient_NotifyError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeClient::NotifyError",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoDecodeClient_NotifyError_Params_Data* params =
          reinterpret_cast<internal::VideoDecodeClient_NotifyError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoDecodeAccelerator::Result p_error{};
      VideoDecodeClient_NotifyError_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoDecodeClient::NotifyError deserializer");
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
bool VideoDecodeClientStubDispatch::AcceptWithResponder(
    VideoDecodeClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoDecodeClient_ProvidePictureBuffers_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeClient::ProvidePictureBuffers",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoDecodeClient_PictureReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeClient::PictureReady",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoDecodeClient_NotifyEndOfBitstreamBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeClient::NotifyEndOfBitstreamBuffer",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoDecodeClient_NotifyError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoDecodeClient::NotifyError",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool VideoDecodeClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoDecodeClient RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoDecodeClient_ProvidePictureBuffers_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodeClient_ProvidePictureBuffers_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecodeClient_PictureReady_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodeClient_PictureReady_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecodeClient_NotifyEndOfBitstreamBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodeClient_NotifyEndOfBitstreamBuffer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoDecodeClient_NotifyError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecodeClient_NotifyError_Params_Data>(
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

void VideoDecodeClientInterceptorForTesting::ProvidePictureBuffers(PictureBufferFormatPtr format) {
  GetForwardingInterface()->ProvidePictureBuffers(std::move(format));
}
void VideoDecodeClientInterceptorForTesting::PictureReady(PicturePtr picture) {
  GetForwardingInterface()->PictureReady(std::move(picture));
}
void VideoDecodeClientInterceptorForTesting::NotifyEndOfBitstreamBuffer(int32_t bitstream_id) {
  GetForwardingInterface()->NotifyEndOfBitstreamBuffer(std::move(bitstream_id));
}
void VideoDecodeClientInterceptorForTesting::NotifyError(VideoDecodeAccelerator::Result error) {
  GetForwardingInterface()->NotifyError(std::move(error));
}
VideoDecodeClientAsyncWaiter::VideoDecodeClientAsyncWaiter(
    VideoDecodeClient* proxy) : proxy_(proxy) {}

VideoDecodeClientAsyncWaiter::~VideoDecodeClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace arc

namespace mojo {


// static
bool StructTraits<::arc::mojom::BitstreamBuffer::DataView, ::arc::mojom::BitstreamBufferPtr>::Read(
    ::arc::mojom::BitstreamBuffer::DataView input,
    ::arc::mojom::BitstreamBufferPtr* output) {
  bool success = true;
  ::arc::mojom::BitstreamBufferPtr result(::arc::mojom::BitstreamBuffer::New());
  
      result->bitstream_id = input.bitstream_id();
      result->handle_fd = input.TakeHandleFd();
      result->offset = input.offset();
      result->bytes_used = input.bytes_used();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::arc::mojom::Picture::DataView, ::arc::mojom::PicturePtr>::Read(
    ::arc::mojom::Picture::DataView input,
    ::arc::mojom::PicturePtr* output) {
  bool success = true;
  ::arc::mojom::PicturePtr result(::arc::mojom::Picture::New());
  
      result->picture_buffer_id = input.picture_buffer_id();
      result->bitstream_id = input.bitstream_id();
      if (!input.ReadCropRect(&result->crop_rect))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::arc::mojom::PictureBufferFormat::DataView, ::arc::mojom::PictureBufferFormatPtr>::Read(
    ::arc::mojom::PictureBufferFormat::DataView input,
    ::arc::mojom::PictureBufferFormatPtr* output) {
  bool success = true;
  ::arc::mojom::PictureBufferFormatPtr result(::arc::mojom::PictureBufferFormat::New());
  
      result->min_num_buffers = input.min_num_buffers();
      if (!input.ReadCodedSize(&result->coded_size))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::arc::mojom::VideoDecodeAcceleratorConfig::DataView, ::arc::mojom::VideoDecodeAcceleratorConfigPtr>::Read(
    ::arc::mojom::VideoDecodeAcceleratorConfig::DataView input,
    ::arc::mojom::VideoDecodeAcceleratorConfigPtr* output) {
  bool success = true;
  ::arc::mojom::VideoDecodeAcceleratorConfigPtr result(::arc::mojom::VideoDecodeAcceleratorConfig::New());
  
      if (!input.ReadProfile(&result->profile))
        success = false;
      result->secure_mode = input.secure_mode();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif