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

#include "components/arc/common/video_protected_buffer_allocator.mojom.h"

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

#include "components/arc/common/video_protected_buffer_allocator.mojom-shared-message-ids.h"
#include "components/arc/common/video_accelerator_struct_traits.h"
namespace arc {
namespace mojom {
const char VideoProtectedBufferAllocator::Name_[] = "arc.mojom.VideoProtectedBufferAllocator";

class VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ForwardToCallback(
      VideoProtectedBufferAllocator::AllocateProtectedSharedMemoryCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoProtectedBufferAllocator::AllocateProtectedSharedMemoryCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ForwardToCallback);
};

class VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ForwardToCallback(
      VideoProtectedBufferAllocator::AllocateProtectedNativePixmapCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoProtectedBufferAllocator::AllocateProtectedNativePixmapCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ForwardToCallback);
};

VideoProtectedBufferAllocatorProxy::VideoProtectedBufferAllocatorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VideoProtectedBufferAllocatorProxy::AllocateProtectedSharedMemory(
    mojo::ScopedHandle in_handle_fd, uint64_t in_size, AllocateProtectedSharedMemoryCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoProtectedBufferAllocator::AllocateProtectedSharedMemory");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_handle_fd, &params->handle_fd, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->handle_fd),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid handle_fd in VideoProtectedBufferAllocator.AllocateProtectedSharedMemory request");
  params->size = in_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VideoProtectedBufferAllocatorProxy::AllocateProtectedNativePixmap(
    mojo::ScopedHandle in_handle_fd, ::arc::mojom::HalPixelFormat in_pixel_format, const gfx::Size& in_picture_size, AllocateProtectedNativePixmapCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoProtectedBufferAllocator::AllocateProtectedNativePixmap");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_handle_fd, &params->handle_fd, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->handle_fd),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid handle_fd in VideoProtectedBufferAllocator.AllocateProtectedNativePixmap request");
  mojo::internal::Serialize<::arc::mojom::HalPixelFormat>(
      in_pixel_format, &params->pixel_format);
  typename decltype(params->picture_size)::BaseType::BufferWriter
      picture_size_writer;
  mojo::internal::Serialize<::arc::mojom::SizeDataView>(
      in_picture_size, buffer, &picture_size_writer, &serialization_context);
  params->picture_size.Set(
      picture_size_writer.is_null() ? nullptr : picture_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->picture_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null picture_size in VideoProtectedBufferAllocator.AllocateProtectedNativePixmap request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void VideoProtectedBufferAllocatorProxy::ReleaseProtectedBuffer(
    mojo::ScopedHandle in_handle_fd) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "arc::mojom::VideoProtectedBufferAllocator::ReleaseProtectedBuffer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoProtectedBufferAllocator_ReleaseProtectedBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_handle_fd, &params->handle_fd, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->handle_fd),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid handle_fd in VideoProtectedBufferAllocator.ReleaseProtectedBuffer request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ProxyToResponder {
 public:
  static VideoProtectedBufferAllocator::AllocateProtectedSharedMemoryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ProxyToResponder> proxy(
        new VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ProxyToResponder() {
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
  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ProxyToResponder(
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
        << "VideoProtectedBufferAllocator::AllocateProtectedSharedMemoryCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ProxyToResponder);
};

bool VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "arc::mojom::VideoProtectedBufferAllocator::AllocateProtectedSharedMemoryCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VideoProtectedBufferAllocator::AllocateProtectedSharedMemory response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ProxyToResponder::Run(
    bool in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoProtectedBufferAllocator::AllocateProtectedSharedMemoryCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ProxyToResponder {
 public:
  static VideoProtectedBufferAllocator::AllocateProtectedNativePixmapCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ProxyToResponder> proxy(
        new VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ProxyToResponder() {
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
  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ProxyToResponder(
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
        << "VideoProtectedBufferAllocator::AllocateProtectedNativePixmapCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ProxyToResponder);
};

bool VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "arc::mojom::VideoProtectedBufferAllocator::AllocateProtectedNativePixmapCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VideoProtectedBufferAllocator::AllocateProtectedNativePixmap response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ProxyToResponder::Run(
    bool in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kVideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::arc::mojom::internal::VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoProtectedBufferAllocator::AllocateProtectedNativePixmapCallback",
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
bool VideoProtectedBufferAllocatorStubDispatch::Accept(
    VideoProtectedBufferAllocator* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoProtectedBufferAllocator::AllocateProtectedSharedMemory",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoProtectedBufferAllocator::AllocateProtectedNativePixmap",
               "message", message->name());
#endif
      break;
    }
    case internal::kVideoProtectedBufferAllocator_ReleaseProtectedBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoProtectedBufferAllocator::ReleaseProtectedBuffer",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params_Data* params =
          reinterpret_cast<internal::VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedHandle p_handle_fd{};
      VideoProtectedBufferAllocator_ReleaseProtectedBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      p_handle_fd = input_data_view.TakeHandleFd();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoProtectedBufferAllocator::ReleaseProtectedBuffer deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReleaseProtectedBuffer(
std::move(p_handle_fd));
      return true;
    }
  }
  return false;
}

// static
bool VideoProtectedBufferAllocatorStubDispatch::AcceptWithResponder(
    VideoProtectedBufferAllocator* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kVideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoProtectedBufferAllocator::AllocateProtectedSharedMemory",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params_Data* params =
          reinterpret_cast<
              internal::VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedHandle p_handle_fd{};
      uint64_t p_size{};
      VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ParamsDataView input_data_view(params, &serialization_context);
      
      p_handle_fd = input_data_view.TakeHandleFd();
      p_size = input_data_view.size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoProtectedBufferAllocator::AllocateProtectedSharedMemory deserializer");
        return false;
      }
      VideoProtectedBufferAllocator::AllocateProtectedSharedMemoryCallback callback =
          VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AllocateProtectedSharedMemory(
std::move(p_handle_fd), 
std::move(p_size), std::move(callback));
      return true;
    }
    case internal::kVideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoProtectedBufferAllocator::AllocateProtectedNativePixmap",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params_Data* params =
          reinterpret_cast<
              internal::VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedHandle p_handle_fd{};
      ::arc::mojom::HalPixelFormat p_pixel_format{};
      gfx::Size p_picture_size{};
      VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ParamsDataView input_data_view(params, &serialization_context);
      
      p_handle_fd = input_data_view.TakeHandleFd();
      if (!input_data_view.ReadPixelFormat(&p_pixel_format))
        success = false;
      if (!input_data_view.ReadPictureSize(&p_picture_size))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoProtectedBufferAllocator::AllocateProtectedNativePixmap deserializer");
        return false;
      }
      VideoProtectedBufferAllocator::AllocateProtectedNativePixmapCallback callback =
          VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AllocateProtectedNativePixmap(
std::move(p_handle_fd), 
std::move(p_pixel_format), 
std::move(p_picture_size), std::move(callback));
      return true;
    }
    case internal::kVideoProtectedBufferAllocator_ReleaseProtectedBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)arc::mojom::VideoProtectedBufferAllocator::ReleaseProtectedBuffer",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool VideoProtectedBufferAllocatorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoProtectedBufferAllocator RequestValidator");

  switch (message->header()->name) {
    case internal::kVideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoProtectedBufferAllocator_ReleaseProtectedBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoProtectedBufferAllocator_ReleaseProtectedBuffer_Params_Data>(
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

bool VideoProtectedBufferAllocatorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "VideoProtectedBufferAllocator ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVideoProtectedBufferAllocator_AllocateProtectedSharedMemory_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoProtectedBufferAllocator_AllocateProtectedSharedMemory_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kVideoProtectedBufferAllocator_AllocateProtectedNativePixmap_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoProtectedBufferAllocator_AllocateProtectedNativePixmap_ResponseParams_Data>(
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
void VideoProtectedBufferAllocatorInterceptorForTesting::AllocateProtectedSharedMemory(mojo::ScopedHandle handle_fd, uint64_t size, AllocateProtectedSharedMemoryCallback callback) {
  GetForwardingInterface()->AllocateProtectedSharedMemory(std::move(handle_fd), std::move(size), std::move(callback));
}
void VideoProtectedBufferAllocatorInterceptorForTesting::AllocateProtectedNativePixmap(mojo::ScopedHandle handle_fd, ::arc::mojom::HalPixelFormat pixel_format, const gfx::Size& picture_size, AllocateProtectedNativePixmapCallback callback) {
  GetForwardingInterface()->AllocateProtectedNativePixmap(std::move(handle_fd), std::move(pixel_format), std::move(picture_size), std::move(callback));
}
void VideoProtectedBufferAllocatorInterceptorForTesting::ReleaseProtectedBuffer(mojo::ScopedHandle handle_fd) {
  GetForwardingInterface()->ReleaseProtectedBuffer(std::move(handle_fd));
}
VideoProtectedBufferAllocatorAsyncWaiter::VideoProtectedBufferAllocatorAsyncWaiter(
    VideoProtectedBufferAllocator* proxy) : proxy_(proxy) {}

VideoProtectedBufferAllocatorAsyncWaiter::~VideoProtectedBufferAllocatorAsyncWaiter() = default;

void VideoProtectedBufferAllocatorAsyncWaiter::AllocateProtectedSharedMemory(
    mojo::ScopedHandle handle_fd, uint64_t size, bool* out_result) {
  base::RunLoop loop;
  proxy_->AllocateProtectedSharedMemory(std::move(handle_fd),std::move(size),
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
void VideoProtectedBufferAllocatorAsyncWaiter::AllocateProtectedNativePixmap(
    mojo::ScopedHandle handle_fd, ::arc::mojom::HalPixelFormat pixel_format, const gfx::Size& picture_size, bool* out_result) {
  base::RunLoop loop;
  proxy_->AllocateProtectedNativePixmap(std::move(handle_fd),std::move(pixel_format),std::move(picture_size),
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

}  // namespace mojom
}  // namespace arc

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif