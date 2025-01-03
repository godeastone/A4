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

#include "components/arc/common/video_encode_accelerator.mojom.h"

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

#include "components/arc/common/video_encode_accelerator.mojom-shared-message-ids.h"
#include "components/arc/common/video_accelerator_struct_traits.h"
#include "components/arc/common/video_encode_accelerator_struct_traits.h"
namespace arc {
namespace mojom {
VideoEncodeProfile::VideoEncodeProfile()
    : profile(),
      max_resolution(),
      max_framerate_numerator(),
      max_framerate_denominator() {}

VideoEncodeProfile::VideoEncodeProfile(
    media::VideoCodecProfile profile_in,
    const gfx::Size& max_resolution_in,
    uint32_t max_framerate_numerator_in,
    uint32_t max_framerate_denominator_in)
    : profile(std::move(profile_in)),
      max_resolution(std::move(max_resolution_in)),
      max_framerate_numerator(std::move(max_framerate_numerator_in)),
      max_framerate_denominator(std::move(max_framerate_denominator_in)) {}

VideoEncodeProfile::~VideoEncodeProfile() = default;

bool VideoEncodeProfile::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char VideoEncodeAccelerator::Name_[] = "arc.mojom.VideoEncodeAccelerator";

class VideoEncodeAccelerator_GetSupportedProfiles_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoEncodeAccelerator_GetSupportedProfiles_ForwardToCallback(
      VideoEncodeAccelerator::GetSupportedProfilesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoEncodeAccelerator::GetSupportedProfilesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAccelerator_GetSupportedProfiles_ForwardToCallback);
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

class VideoEncodeAccelerator_UseBitstreamBuffer_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoEncodeAccelerator_UseBitstreamBuffer_ForwardToCallback(
      VideoEncodeAccelerator::UseBitstreamBufferCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoEncodeAccelerator::UseBitstreamBufferCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAccelerator_UseBitstreamBuffer_ForwardToCallback);
};

class VideoEncodeAccelerator_Flush_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoEncodeAccelerator_Flush_ForwardToCallback(
      VideoEncodeAccelerator::FlushCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoEncodeAccelerator::FlushCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAccelerator_Flush_ForwardToCallback);
};

VideoEncodeAcceleratorProxy::VideoEncodeAcceleratorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoEncodeAcceleratorProxy::GetSupportedProfiles(
    GetSupportedProfilesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoEncodeAccelerator::GetSupportedProfiles");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_GetSupportedProfiles_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoEncodeAccelerator_GetSupportedProfiles_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoEncodeAccelerator_GetSupportedProfiles_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VideoEncodeAcceleratorProxy::Initialize(
    media::VideoPixelFormat in_input_format, const gfx::Size& in_visible_size, VideoEncodeAccelerator::StorageType in_input_storage, media::VideoCodecProfile in_output_profile, uint32_t in_initial_bitrate, VideoEncodeClientPtr in_client, InitializeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoEncodeAccelerator::Initialize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoEncodeAccelerator_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::arc::mojom::VideoPixelFormat>(
      in_input_format, &params->input_format);
  typename decltype(params->visible_size)::BaseType::BufferWriter
      visible_size_writer;
  mojo::internal::Serialize<::arc::mojom::SizeDataView>(
      in_visible_size, buffer, &visible_size_writer, &serialization_context);
  params->visible_size.Set(
      visible_size_writer.is_null() ? nullptr : visible_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->visible_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null visible_size in VideoEncodeAccelerator.Initialize request");
  mojo::internal::Serialize<::arc::mojom::VideoEncodeAccelerator_StorageType>(
      in_input_storage, &params->input_storage);
  mojo::internal::Serialize<::arc::mojom::VideoCodecProfile>(
      in_output_profile, &params->output_profile);
  params->initial_bitrate = in_initial_bitrate;
  mojo::internal::Serialize<::arc::mojom::VideoEncodeClientPtrDataView>(
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
    mojo::ScopedHandle in_frame_fd, std::vector<arc::VideoFramePlane> in_planes, int64_t in_timestamp, bool in_force_keyframe, EncodeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoEncodeAccelerator::Encode");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_Encode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoEncodeAccelerator_Encode_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_frame_fd, &params->frame_fd, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->frame_fd),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid frame_fd in VideoEncodeAccelerator.Encode request");
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
      "null planes in VideoEncodeAccelerator.Encode request");
  params->timestamp = in_timestamp;
  params->force_keyframe = in_force_keyframe;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoEncodeAccelerator_Encode_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VideoEncodeAcceleratorProxy::UseBitstreamBuffer(
    mojo::ScopedHandle in_shmem_fd, uint32_t in_offset, uint32_t in_size, UseBitstreamBufferCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoEncodeAccelerator::UseBitstreamBuffer");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_UseBitstreamBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoEncodeAccelerator_UseBitstreamBuffer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_shmem_fd, &params->shmem_fd, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->shmem_fd),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid shmem_fd in VideoEncodeAccelerator.UseBitstreamBuffer request");
  params->offset = in_offset;
  params->size = in_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoEncodeAccelerator_UseBitstreamBuffer_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VideoEncodeAcceleratorProxy::RequestEncodingParametersChange(
    uint32_t in_bitrate, uint32_t in_framerate) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoEncodeAccelerator::RequestEncodingParametersChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_RequestEncodingParametersChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoEncodeAccelerator_RequestEncodingParametersChange_Params_Data::BufferWriter
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

void VideoEncodeAcceleratorProxy::Flush(
    FlushCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoEncodeAccelerator::Flush");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoEncodeAccelerator_Flush_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoEncodeAccelerator_Flush_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class VideoEncodeAccelerator_GetSupportedProfiles_ProxyToResponder {
 public:
  static VideoEncodeAccelerator::GetSupportedProfilesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoEncodeAccelerator_GetSupportedProfiles_ProxyToResponder> proxy(
        new VideoEncodeAccelerator_GetSupportedProfiles_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoEncodeAccelerator_GetSupportedProfiles_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoEncodeAccelerator_GetSupportedProfiles_ProxyToResponder() {
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
  VideoEncodeAccelerator_GetSupportedProfiles_ProxyToResponder(
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
        << "VideoEncodeAccelerator::GetSupportedProfilesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<media::VideoEncodeAccelerator::SupportedProfile>& in_profiles);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAccelerator_GetSupportedProfiles_ProxyToResponder);
};

bool VideoEncodeAccelerator_GetSupportedProfiles_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "arc::mojom::VideoEncodeAccelerator::GetSupportedProfilesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<media::VideoEncodeAccelerator::SupportedProfile> p_profiles{};
  VideoEncodeAccelerator_GetSupportedProfiles_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadProfiles(&p_profiles))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VideoEncodeAccelerator::GetSupportedProfiles response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_profiles));
  return true;
}

void VideoEncodeAccelerator_GetSupportedProfiles_ProxyToResponder::Run(
    const std::vector<media::VideoEncodeAccelerator::SupportedProfile>& in_profiles) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_GetSupportedProfiles_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->profiles)::BaseType::BufferWriter
      profiles_writer;
  const mojo::internal::ContainerValidateParams profiles_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::arc::mojom::VideoEncodeProfileDataView>>(
      in_profiles, buffer, &profiles_writer, &profiles_validate_params,
      &serialization_context);
  params->profiles.Set(
      profiles_writer.is_null() ? nullptr : profiles_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->profiles.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null profiles in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeAccelerator::GetSupportedProfilesCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
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
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAccelerator_Initialize_ProxyToResponder);
};

bool VideoEncodeAccelerator_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "arc::mojom::VideoEncodeAccelerator::InitializeCallback",
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
  bool p_success{};
  VideoEncodeAccelerator_Initialize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VideoEncodeAccelerator::Initialize response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void VideoEncodeAccelerator_Initialize_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoEncodeAccelerator_Initialize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeAccelerator::InitializeCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
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
  TRACE_EVENT1("mojom", "arc::mojom::VideoEncodeAccelerator::EncodeCallback",
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
  ::arc::mojom::internal::VideoEncodeAccelerator_Encode_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeAccelerator::EncodeCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VideoEncodeAccelerator_UseBitstreamBuffer_ProxyToResponder {
 public:
  static VideoEncodeAccelerator::UseBitstreamBufferCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoEncodeAccelerator_UseBitstreamBuffer_ProxyToResponder> proxy(
        new VideoEncodeAccelerator_UseBitstreamBuffer_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoEncodeAccelerator_UseBitstreamBuffer_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoEncodeAccelerator_UseBitstreamBuffer_ProxyToResponder() {
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
  VideoEncodeAccelerator_UseBitstreamBuffer_ProxyToResponder(
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
        << "VideoEncodeAccelerator::UseBitstreamBufferCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint32_t in_payload_size, bool in_key_frame, int64_t in_timestamp);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAccelerator_UseBitstreamBuffer_ProxyToResponder);
};

bool VideoEncodeAccelerator_UseBitstreamBuffer_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "arc::mojom::VideoEncodeAccelerator::UseBitstreamBufferCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint32_t p_payload_size{};
  bool p_key_frame{};
  int64_t p_timestamp{};
  VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_payload_size = input_data_view.payload_size();
  p_key_frame = input_data_view.key_frame();
  p_timestamp = input_data_view.timestamp();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VideoEncodeAccelerator::UseBitstreamBuffer response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_payload_size), 
std::move(p_key_frame), 
std::move(p_timestamp));
  return true;
}

void VideoEncodeAccelerator_UseBitstreamBuffer_ProxyToResponder::Run(
    uint32_t in_payload_size, bool in_key_frame, int64_t in_timestamp) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_UseBitstreamBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->payload_size = in_payload_size;
  params->key_frame = in_key_frame;
  params->timestamp = in_timestamp;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeAccelerator::UseBitstreamBufferCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VideoEncodeAccelerator_Flush_ProxyToResponder {
 public:
  static VideoEncodeAccelerator::FlushCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoEncodeAccelerator_Flush_ProxyToResponder> proxy(
        new VideoEncodeAccelerator_Flush_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoEncodeAccelerator_Flush_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoEncodeAccelerator_Flush_ProxyToResponder() {
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
  VideoEncodeAccelerator_Flush_ProxyToResponder(
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
        << "VideoEncodeAccelerator::FlushCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_flush_done);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(VideoEncodeAccelerator_Flush_ProxyToResponder);
};

bool VideoEncodeAccelerator_Flush_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "arc::mojom::VideoEncodeAccelerator::FlushCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoEncodeAccelerator_Flush_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoEncodeAccelerator_Flush_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_flush_done{};
  VideoEncodeAccelerator_Flush_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_flush_done = input_data_view.flush_done();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VideoEncodeAccelerator::Flush response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_flush_done));
  return true;
}

void VideoEncodeAccelerator_Flush_ProxyToResponder::Run(
    bool in_flush_done) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeAccelerator_Flush_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoEncodeAccelerator_Flush_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->flush_done = in_flush_done;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeAccelerator::FlushCallback",
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
    case internal::kVideoEncodeAccelerator_GetSupportedProfiles_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeAccelerator::GetSupportedProfiles",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoEncodeAccelerator_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeAccelerator::Initialize",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoEncodeAccelerator_Encode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeAccelerator::Encode",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoEncodeAccelerator_UseBitstreamBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeAccelerator::UseBitstreamBuffer",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoEncodeAccelerator_RequestEncodingParametersChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeAccelerator::RequestEncodingParametersChange",
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
    case internal::kVideoEncodeAccelerator_Flush_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeAccelerator::Flush",
               "message", message->name());
#endif
      break;
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
    case internal::kVideoEncodeAccelerator_GetSupportedProfiles_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeAccelerator::GetSupportedProfiles",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoEncodeAccelerator_GetSupportedProfiles_Params_Data* params =
          reinterpret_cast<
              internal::VideoEncodeAccelerator_GetSupportedProfiles_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoEncodeAccelerator_GetSupportedProfiles_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoEncodeAccelerator::GetSupportedProfiles deserializer");
        return false;
      }
      VideoEncodeAccelerator::GetSupportedProfilesCallback callback =
          VideoEncodeAccelerator_GetSupportedProfiles_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetSupportedProfiles(std::move(callback));
      return true;
    }
    case internal::kVideoEncodeAccelerator_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeAccelerator::Initialize",
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
      gfx::Size p_visible_size{};
      VideoEncodeAccelerator::StorageType p_input_storage{};
      media::VideoCodecProfile p_output_profile{};
      uint32_t p_initial_bitrate{};
      VideoEncodeClientPtr p_client{};
      VideoEncodeAccelerator_Initialize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInputFormat(&p_input_format))
        success = false;
      if (!input_data_view.ReadVisibleSize(&p_visible_size))
        success = false;
      if (!input_data_view.ReadInputStorage(&p_input_storage))
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
std::move(p_visible_size), 
std::move(p_input_storage), 
std::move(p_output_profile), 
std::move(p_initial_bitrate), 
std::move(p_client), std::move(callback));
      return true;
    }
    case internal::kVideoEncodeAccelerator_Encode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeAccelerator::Encode",
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
      mojo::ScopedHandle p_frame_fd{};
      std::vector<arc::VideoFramePlane> p_planes{};
      int64_t p_timestamp{};
      bool p_force_keyframe{};
      VideoEncodeAccelerator_Encode_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_fd = input_data_view.TakeFrameFd();
      if (!input_data_view.ReadPlanes(&p_planes))
        success = false;
      p_timestamp = input_data_view.timestamp();
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
std::move(p_frame_fd), 
std::move(p_planes), 
std::move(p_timestamp), 
std::move(p_force_keyframe), std::move(callback));
      return true;
    }
    case internal::kVideoEncodeAccelerator_UseBitstreamBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeAccelerator::UseBitstreamBuffer",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoEncodeAccelerator_UseBitstreamBuffer_Params_Data* params =
          reinterpret_cast<
              internal::VideoEncodeAccelerator_UseBitstreamBuffer_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedHandle p_shmem_fd{};
      uint32_t p_offset{};
      uint32_t p_size{};
      VideoEncodeAccelerator_UseBitstreamBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      p_shmem_fd = input_data_view.TakeShmemFd();
      p_offset = input_data_view.offset();
      p_size = input_data_view.size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoEncodeAccelerator::UseBitstreamBuffer deserializer");
        return false;
      }
      VideoEncodeAccelerator::UseBitstreamBufferCallback callback =
          VideoEncodeAccelerator_UseBitstreamBuffer_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UseBitstreamBuffer(
std::move(p_shmem_fd), 
std::move(p_offset), 
std::move(p_size), std::move(callback));
      return true;
    }
    case internal::kVideoEncodeAccelerator_RequestEncodingParametersChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeAccelerator::RequestEncodingParametersChange",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoEncodeAccelerator_Flush_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeAccelerator::Flush",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoEncodeAccelerator_Flush_Params_Data* params =
          reinterpret_cast<
              internal::VideoEncodeAccelerator_Flush_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      VideoEncodeAccelerator_Flush_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoEncodeAccelerator::Flush deserializer");
        return false;
      }
      VideoEncodeAccelerator::FlushCallback callback =
          VideoEncodeAccelerator_Flush_ProxyToResponder::CreateCallback(
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
    case internal::kVideoEncodeAccelerator_GetSupportedProfiles_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_GetSupportedProfiles_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
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
    case internal::kVideoEncodeAccelerator_UseBitstreamBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_UseBitstreamBuffer_Params_Data>(
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
    case internal::kVideoEncodeAccelerator_Flush_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_Flush_Params_Data>(
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
    case internal::kVideoEncodeAccelerator_GetSupportedProfiles_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_GetSupportedProfiles_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
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
    case internal::kVideoEncodeAccelerator_UseBitstreamBuffer_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_UseBitstreamBuffer_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoEncodeAccelerator_Flush_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeAccelerator_Flush_ResponseParams_Data>(
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
void VideoEncodeAcceleratorInterceptorForTesting::GetSupportedProfiles(GetSupportedProfilesCallback callback) {
  GetForwardingInterface()->GetSupportedProfiles(std::move(callback));
}
void VideoEncodeAcceleratorInterceptorForTesting::Initialize(media::VideoPixelFormat input_format, const gfx::Size& visible_size, VideoEncodeAccelerator::StorageType input_storage, media::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeClientPtr client, InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(input_format), std::move(visible_size), std::move(input_storage), std::move(output_profile), std::move(initial_bitrate), std::move(client), std::move(callback));
}
void VideoEncodeAcceleratorInterceptorForTesting::Encode(mojo::ScopedHandle frame_fd, std::vector<arc::VideoFramePlane> planes, int64_t timestamp, bool force_keyframe, EncodeCallback callback) {
  GetForwardingInterface()->Encode(std::move(frame_fd), std::move(planes), std::move(timestamp), std::move(force_keyframe), std::move(callback));
}
void VideoEncodeAcceleratorInterceptorForTesting::UseBitstreamBuffer(mojo::ScopedHandle shmem_fd, uint32_t offset, uint32_t size, UseBitstreamBufferCallback callback) {
  GetForwardingInterface()->UseBitstreamBuffer(std::move(shmem_fd), std::move(offset), std::move(size), std::move(callback));
}
void VideoEncodeAcceleratorInterceptorForTesting::RequestEncodingParametersChange(uint32_t bitrate, uint32_t framerate) {
  GetForwardingInterface()->RequestEncodingParametersChange(std::move(bitrate), std::move(framerate));
}
void VideoEncodeAcceleratorInterceptorForTesting::Flush(FlushCallback callback) {
  GetForwardingInterface()->Flush(std::move(callback));
}
VideoEncodeAcceleratorAsyncWaiter::VideoEncodeAcceleratorAsyncWaiter(
    VideoEncodeAccelerator* proxy) : proxy_(proxy) {}

VideoEncodeAcceleratorAsyncWaiter::~VideoEncodeAcceleratorAsyncWaiter() = default;

void VideoEncodeAcceleratorAsyncWaiter::GetSupportedProfiles(
    std::vector<media::VideoEncodeAccelerator::SupportedProfile>* out_profiles) {
  base::RunLoop loop;
  proxy_->GetSupportedProfiles(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<media::VideoEncodeAccelerator::SupportedProfile>* out_profiles
,
             const std::vector<media::VideoEncodeAccelerator::SupportedProfile>& profiles) {*out_profiles = std::move(profiles);
            loop->Quit();
          },
          &loop,
          out_profiles));
  loop.Run();
}
void VideoEncodeAcceleratorAsyncWaiter::Initialize(
    media::VideoPixelFormat input_format, const gfx::Size& visible_size, VideoEncodeAccelerator::StorageType input_storage, media::VideoCodecProfile output_profile, uint32_t initial_bitrate, VideoEncodeClientPtr client, bool* out_success) {
  base::RunLoop loop;
  proxy_->Initialize(std::move(input_format),std::move(visible_size),std::move(input_storage),std::move(output_profile),std::move(initial_bitrate),std::move(client),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void VideoEncodeAcceleratorAsyncWaiter::Encode(
    mojo::ScopedHandle frame_fd, std::vector<arc::VideoFramePlane> planes, int64_t timestamp, bool force_keyframe) {
  base::RunLoop loop;
  proxy_->Encode(std::move(frame_fd),std::move(planes),std::move(timestamp),std::move(force_keyframe),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void VideoEncodeAcceleratorAsyncWaiter::UseBitstreamBuffer(
    mojo::ScopedHandle shmem_fd, uint32_t offset, uint32_t size, uint32_t* out_payload_size, bool* out_key_frame, int64_t* out_timestamp) {
  base::RunLoop loop;
  proxy_->UseBitstreamBuffer(std::move(shmem_fd),std::move(offset),std::move(size),
      base::BindOnce(
          [](base::RunLoop* loop,
             uint32_t* out_payload_size
,
             bool* out_key_frame
,
             int64_t* out_timestamp
,
             uint32_t payload_size,
             bool key_frame,
             int64_t timestamp) {*out_payload_size = std::move(payload_size);*out_key_frame = std::move(key_frame);*out_timestamp = std::move(timestamp);
            loop->Quit();
          },
          &loop,
          out_payload_size,
          out_key_frame,
          out_timestamp));
  loop.Run();
}
void VideoEncodeAcceleratorAsyncWaiter::Flush(
    bool* out_flush_done) {
  base::RunLoop loop;
  proxy_->Flush(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_flush_done
,
             bool flush_done) {*out_flush_done = std::move(flush_done);
            loop->Quit();
          },
          &loop,
          out_flush_done));
  loop.Run();
}

const char VideoEncodeClient::Name_[] = "arc.mojom.VideoEncodeClient";

VideoEncodeClientProxy::VideoEncodeClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoEncodeClientProxy::RequireBitstreamBuffers(
    uint32_t in_input_count, const gfx::Size& in_input_coded_size, uint32_t in_output_buffer_size) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoEncodeClient::RequireBitstreamBuffers");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeClient_RequireBitstreamBuffers_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoEncodeClient_RequireBitstreamBuffers_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->input_count = in_input_count;
  typename decltype(params->input_coded_size)::BaseType::BufferWriter
      input_coded_size_writer;
  mojo::internal::Serialize<::arc::mojom::SizeDataView>(
      in_input_coded_size, buffer, &input_coded_size_writer, &serialization_context);
  params->input_coded_size.Set(
      input_coded_size_writer.is_null() ? nullptr : input_coded_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input_coded_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input_coded_size in VideoEncodeClient.RequireBitstreamBuffers request");
  params->output_buffer_size = in_output_buffer_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void VideoEncodeClientProxy::NotifyError(
    media::VideoEncodeAccelerator::Error in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoEncodeClient::NotifyError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoEncodeClient_NotifyError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoEncodeClient_NotifyError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::arc::mojom::VideoEncodeAccelerator_Error>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool VideoEncodeClientStubDispatch::Accept(
    VideoEncodeClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoEncodeClient_RequireBitstreamBuffers_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeClient::RequireBitstreamBuffers",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoEncodeClient_RequireBitstreamBuffers_Params_Data* params =
          reinterpret_cast<internal::VideoEncodeClient_RequireBitstreamBuffers_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_input_count{};
      gfx::Size p_input_coded_size{};
      uint32_t p_output_buffer_size{};
      VideoEncodeClient_RequireBitstreamBuffers_ParamsDataView input_data_view(params, &serialization_context);
      
      p_input_count = input_data_view.input_count();
      if (!input_data_view.ReadInputCodedSize(&p_input_coded_size))
        success = false;
      p_output_buffer_size = input_data_view.output_buffer_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoEncodeClient::RequireBitstreamBuffers deserializer");
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
    case internal::kVideoEncodeClient_NotifyError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeClient::NotifyError",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoEncodeClient_NotifyError_Params_Data* params =
          reinterpret_cast<internal::VideoEncodeClient_NotifyError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::VideoEncodeAccelerator::Error p_error{};
      VideoEncodeClient_NotifyError_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoEncodeClient::NotifyError deserializer");
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
bool VideoEncodeClientStubDispatch::AcceptWithResponder(
    VideoEncodeClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoEncodeClient_RequireBitstreamBuffers_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeClient::RequireBitstreamBuffers",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoEncodeClient_NotifyError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoEncodeClient::NotifyError",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool VideoEncodeClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoEncodeClient RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoEncodeClient_RequireBitstreamBuffers_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeClient_RequireBitstreamBuffers_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoEncodeClient_NotifyError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoEncodeClient_NotifyError_Params_Data>(
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

void VideoEncodeClientInterceptorForTesting::RequireBitstreamBuffers(uint32_t input_count, const gfx::Size& input_coded_size, uint32_t output_buffer_size) {
  GetForwardingInterface()->RequireBitstreamBuffers(std::move(input_count), std::move(input_coded_size), std::move(output_buffer_size));
}
void VideoEncodeClientInterceptorForTesting::NotifyError(media::VideoEncodeAccelerator::Error error) {
  GetForwardingInterface()->NotifyError(std::move(error));
}
VideoEncodeClientAsyncWaiter::VideoEncodeClientAsyncWaiter(
    VideoEncodeClient* proxy) : proxy_(proxy) {}

VideoEncodeClientAsyncWaiter::~VideoEncodeClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace arc

namespace mojo {


// static
bool StructTraits<::arc::mojom::VideoEncodeProfile::DataView, ::arc::mojom::VideoEncodeProfilePtr>::Read(
    ::arc::mojom::VideoEncodeProfile::DataView input,
    ::arc::mojom::VideoEncodeProfilePtr* output) {
  bool success = true;
  ::arc::mojom::VideoEncodeProfilePtr result(::arc::mojom::VideoEncodeProfile::New());
  
      if (!input.ReadProfile(&result->profile))
        success = false;
      if (!input.ReadMaxResolution(&result->max_resolution))
        success = false;
      result->max_framerate_numerator = input.max_framerate_numerator();
      result->max_framerate_denominator = input.max_framerate_denominator();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif