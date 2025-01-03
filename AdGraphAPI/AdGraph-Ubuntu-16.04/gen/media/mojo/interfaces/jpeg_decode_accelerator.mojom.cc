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

#include "media/mojo/interfaces/jpeg_decode_accelerator.mojom.h"

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

#include "media/mojo/interfaces/jpeg_decode_accelerator.mojom-shared-message-ids.h"
#include "media/base/ipc/media_param_traits_macros.h"
#include "media/mojo/interfaces/jpeg_decode_accelerator_typemap_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace media {
namespace mojom {
BitstreamBuffer::BitstreamBuffer()
    : id(),
      memory_handle(),
      size(),
      offset(),
      timestamp(),
      key_id(),
      iv(),
      subsamples() {}

BitstreamBuffer::BitstreamBuffer(
    int32_t id_in,
    mojo::ScopedSharedBufferHandle memory_handle_in,
    uint32_t size_in,
    int64_t offset_in,
    base::TimeDelta timestamp_in,
    const std::string& key_id_in,
    const std::string& iv_in,
    const std::vector<media::SubsampleEntry>& subsamples_in)
    : id(std::move(id_in)),
      memory_handle(std::move(memory_handle_in)),
      size(std::move(size_in)),
      offset(std::move(offset_in)),
      timestamp(std::move(timestamp_in)),
      key_id(std::move(key_id_in)),
      iv(std::move(iv_in)),
      subsamples(std::move(subsamples_in)) {}

BitstreamBuffer::~BitstreamBuffer() = default;

bool BitstreamBuffer::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char JpegDecodeAccelerator::Name_[] = "media.mojom.JpegDecodeAccelerator";

class JpegDecodeAccelerator_Initialize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  JpegDecodeAccelerator_Initialize_ForwardToCallback(
      JpegDecodeAccelerator::InitializeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  JpegDecodeAccelerator::InitializeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(JpegDecodeAccelerator_Initialize_ForwardToCallback);
};

class JpegDecodeAccelerator_Decode_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  JpegDecodeAccelerator_Decode_ForwardToCallback(
      JpegDecodeAccelerator::DecodeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  JpegDecodeAccelerator::DecodeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(JpegDecodeAccelerator_Decode_ForwardToCallback);
};

class JpegDecodeAccelerator_DecodeWithFD_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  JpegDecodeAccelerator_DecodeWithFD_ForwardToCallback(
      JpegDecodeAccelerator::DecodeWithFDCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  JpegDecodeAccelerator::DecodeWithFDCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(JpegDecodeAccelerator_DecodeWithFD_ForwardToCallback);
};

JpegDecodeAcceleratorProxy::JpegDecodeAcceleratorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void JpegDecodeAcceleratorProxy::Initialize(
    InitializeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::JpegDecodeAccelerator::Initialize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kJpegDecodeAccelerator_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::JpegDecodeAccelerator_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new JpegDecodeAccelerator_Initialize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void JpegDecodeAcceleratorProxy::Decode(
    const media::BitstreamBuffer& in_input_buffer, const gfx::Size& in_coded_size, mojo::ScopedSharedBufferHandle in_output_handle, uint32_t in_output_buffer_size, DecodeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::JpegDecodeAccelerator::Decode");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kJpegDecodeAccelerator_Decode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::JpegDecodeAccelerator_Decode_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->input_buffer)::BaseType::BufferWriter
      input_buffer_writer;
  mojo::internal::Serialize<::media::mojom::BitstreamBufferDataView>(
      in_input_buffer, buffer, &input_buffer_writer, &serialization_context);
  params->input_buffer.Set(
      input_buffer_writer.is_null() ? nullptr : input_buffer_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->input_buffer.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null input_buffer in JpegDecodeAccelerator.Decode request");
  typename decltype(params->coded_size)::BaseType::BufferWriter
      coded_size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_coded_size, buffer, &coded_size_writer, &serialization_context);
  params->coded_size.Set(
      coded_size_writer.is_null() ? nullptr : coded_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->coded_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null coded_size in JpegDecodeAccelerator.Decode request");
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_output_handle, &params->output_handle, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->output_handle),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid output_handle in JpegDecodeAccelerator.Decode request");
  params->output_buffer_size = in_output_buffer_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new JpegDecodeAccelerator_Decode_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void JpegDecodeAcceleratorProxy::DecodeWithFD(
    int32_t in_buffer_id, mojo::ScopedHandle in_input_fd, uint32_t in_input_buffer_size, int32_t in_coded_size_width, int32_t in_coded_size_height, mojo::ScopedHandle in_output_fd, uint32_t in_output_buffer_size, DecodeWithFDCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::JpegDecodeAccelerator::DecodeWithFD");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kJpegDecodeAccelerator_DecodeWithFD_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::JpegDecodeAccelerator_DecodeWithFD_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->buffer_id = in_buffer_id;
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_input_fd, &params->input_fd, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->input_fd),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid input_fd in JpegDecodeAccelerator.DecodeWithFD request");
  params->input_buffer_size = in_input_buffer_size;
  params->coded_size_width = in_coded_size_width;
  params->coded_size_height = in_coded_size_height;
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_output_fd, &params->output_fd, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->output_fd),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid output_fd in JpegDecodeAccelerator.DecodeWithFD request");
  params->output_buffer_size = in_output_buffer_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new JpegDecodeAccelerator_DecodeWithFD_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void JpegDecodeAcceleratorProxy::Uninitialize(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "media::mojom::JpegDecodeAccelerator::Uninitialize");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kJpegDecodeAccelerator_Uninitialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::JpegDecodeAccelerator_Uninitialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class JpegDecodeAccelerator_Initialize_ProxyToResponder {
 public:
  static JpegDecodeAccelerator::InitializeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<JpegDecodeAccelerator_Initialize_ProxyToResponder> proxy(
        new JpegDecodeAccelerator_Initialize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&JpegDecodeAccelerator_Initialize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~JpegDecodeAccelerator_Initialize_ProxyToResponder() {
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
  JpegDecodeAccelerator_Initialize_ProxyToResponder(
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
        << "JpegDecodeAccelerator::InitializeCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(JpegDecodeAccelerator_Initialize_ProxyToResponder);
};

bool JpegDecodeAccelerator_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::JpegDecodeAccelerator::InitializeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::JpegDecodeAccelerator_Initialize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::JpegDecodeAccelerator_Initialize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  JpegDecodeAccelerator_Initialize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "JpegDecodeAccelerator::Initialize response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void JpegDecodeAccelerator_Initialize_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kJpegDecodeAccelerator_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::JpegDecodeAccelerator_Initialize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::JpegDecodeAccelerator::InitializeCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class JpegDecodeAccelerator_Decode_ProxyToResponder {
 public:
  static JpegDecodeAccelerator::DecodeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<JpegDecodeAccelerator_Decode_ProxyToResponder> proxy(
        new JpegDecodeAccelerator_Decode_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&JpegDecodeAccelerator_Decode_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~JpegDecodeAccelerator_Decode_ProxyToResponder() {
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
  JpegDecodeAccelerator_Decode_ProxyToResponder(
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
        << "JpegDecodeAccelerator::DecodeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_bitstream_buffer_id, media::JpegDecodeAccelerator::Error in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(JpegDecodeAccelerator_Decode_ProxyToResponder);
};

bool JpegDecodeAccelerator_Decode_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::JpegDecodeAccelerator::DecodeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::JpegDecodeAccelerator_Decode_ResponseParams_Data* params =
      reinterpret_cast<
          internal::JpegDecodeAccelerator_Decode_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_bitstream_buffer_id{};
  media::JpegDecodeAccelerator::Error p_error{};
  JpegDecodeAccelerator_Decode_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_bitstream_buffer_id = input_data_view.bitstream_buffer_id();
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "JpegDecodeAccelerator::Decode response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_bitstream_buffer_id), 
std::move(p_error));
  return true;
}

void JpegDecodeAccelerator_Decode_ProxyToResponder::Run(
    int32_t in_bitstream_buffer_id, media::JpegDecodeAccelerator::Error in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kJpegDecodeAccelerator_Decode_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::JpegDecodeAccelerator_Decode_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->bitstream_buffer_id = in_bitstream_buffer_id;
  mojo::internal::Serialize<::media::mojom::DecodeError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::JpegDecodeAccelerator::DecodeCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class JpegDecodeAccelerator_DecodeWithFD_ProxyToResponder {
 public:
  static JpegDecodeAccelerator::DecodeWithFDCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<JpegDecodeAccelerator_DecodeWithFD_ProxyToResponder> proxy(
        new JpegDecodeAccelerator_DecodeWithFD_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&JpegDecodeAccelerator_DecodeWithFD_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~JpegDecodeAccelerator_DecodeWithFD_ProxyToResponder() {
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
  JpegDecodeAccelerator_DecodeWithFD_ProxyToResponder(
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
        << "JpegDecodeAccelerator::DecodeWithFDCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_buffer_id, media::JpegDecodeAccelerator::Error in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(JpegDecodeAccelerator_DecodeWithFD_ProxyToResponder);
};

bool JpegDecodeAccelerator_DecodeWithFD_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "media::mojom::JpegDecodeAccelerator::DecodeWithFDCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::JpegDecodeAccelerator_DecodeWithFD_ResponseParams_Data* params =
      reinterpret_cast<
          internal::JpegDecodeAccelerator_DecodeWithFD_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_buffer_id{};
  media::JpegDecodeAccelerator::Error p_error{};
  JpegDecodeAccelerator_DecodeWithFD_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_buffer_id = input_data_view.buffer_id();
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "JpegDecodeAccelerator::DecodeWithFD response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_buffer_id), 
std::move(p_error));
  return true;
}

void JpegDecodeAccelerator_DecodeWithFD_ProxyToResponder::Run(
    int32_t in_buffer_id, media::JpegDecodeAccelerator::Error in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kJpegDecodeAccelerator_DecodeWithFD_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::JpegDecodeAccelerator_DecodeWithFD_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->buffer_id = in_buffer_id;
  mojo::internal::Serialize<::media::mojom::DecodeError>(
      in_error, &params->error);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::JpegDecodeAccelerator::DecodeWithFDCallback",
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
bool JpegDecodeAcceleratorStubDispatch::Accept(
    JpegDecodeAccelerator* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kJpegDecodeAccelerator_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::JpegDecodeAccelerator::Initialize",
               "message", message->name());
#endif
      break;
    }
    case internal::kJpegDecodeAccelerator_Decode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::JpegDecodeAccelerator::Decode",
               "message", message->name());
#endif
      break;
    }
    case internal::kJpegDecodeAccelerator_DecodeWithFD_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::JpegDecodeAccelerator::DecodeWithFD",
               "message", message->name());
#endif
      break;
    }
    case internal::kJpegDecodeAccelerator_Uninitialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::JpegDecodeAccelerator::Uninitialize",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::JpegDecodeAccelerator_Uninitialize_Params_Data* params =
          reinterpret_cast<internal::JpegDecodeAccelerator_Uninitialize_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      JpegDecodeAccelerator_Uninitialize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "JpegDecodeAccelerator::Uninitialize deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Uninitialize();
      return true;
    }
  }
  return false;
}

// static
bool JpegDecodeAcceleratorStubDispatch::AcceptWithResponder(
    JpegDecodeAccelerator* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kJpegDecodeAccelerator_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::JpegDecodeAccelerator::Initialize",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::JpegDecodeAccelerator_Initialize_Params_Data* params =
          reinterpret_cast<
              internal::JpegDecodeAccelerator_Initialize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      JpegDecodeAccelerator_Initialize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "JpegDecodeAccelerator::Initialize deserializer");
        return false;
      }
      JpegDecodeAccelerator::InitializeCallback callback =
          JpegDecodeAccelerator_Initialize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Initialize(std::move(callback));
      return true;
    }
    case internal::kJpegDecodeAccelerator_Decode_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::JpegDecodeAccelerator::Decode",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::JpegDecodeAccelerator_Decode_Params_Data* params =
          reinterpret_cast<
              internal::JpegDecodeAccelerator_Decode_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::BitstreamBuffer p_input_buffer{};
      gfx::Size p_coded_size{};
      mojo::ScopedSharedBufferHandle p_output_handle{};
      uint32_t p_output_buffer_size{};
      JpegDecodeAccelerator_Decode_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInputBuffer(&p_input_buffer))
        success = false;
      if (!input_data_view.ReadCodedSize(&p_coded_size))
        success = false;
      p_output_handle = input_data_view.TakeOutputHandle();
      p_output_buffer_size = input_data_view.output_buffer_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "JpegDecodeAccelerator::Decode deserializer");
        return false;
      }
      JpegDecodeAccelerator::DecodeCallback callback =
          JpegDecodeAccelerator_Decode_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Decode(
std::move(p_input_buffer), 
std::move(p_coded_size), 
std::move(p_output_handle), 
std::move(p_output_buffer_size), std::move(callback));
      return true;
    }
    case internal::kJpegDecodeAccelerator_DecodeWithFD_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::JpegDecodeAccelerator::DecodeWithFD",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::JpegDecodeAccelerator_DecodeWithFD_Params_Data* params =
          reinterpret_cast<
              internal::JpegDecodeAccelerator_DecodeWithFD_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_buffer_id{};
      mojo::ScopedHandle p_input_fd{};
      uint32_t p_input_buffer_size{};
      int32_t p_coded_size_width{};
      int32_t p_coded_size_height{};
      mojo::ScopedHandle p_output_fd{};
      uint32_t p_output_buffer_size{};
      JpegDecodeAccelerator_DecodeWithFD_ParamsDataView input_data_view(params, &serialization_context);
      
      p_buffer_id = input_data_view.buffer_id();
      p_input_fd = input_data_view.TakeInputFd();
      p_input_buffer_size = input_data_view.input_buffer_size();
      p_coded_size_width = input_data_view.coded_size_width();
      p_coded_size_height = input_data_view.coded_size_height();
      p_output_fd = input_data_view.TakeOutputFd();
      p_output_buffer_size = input_data_view.output_buffer_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "JpegDecodeAccelerator::DecodeWithFD deserializer");
        return false;
      }
      JpegDecodeAccelerator::DecodeWithFDCallback callback =
          JpegDecodeAccelerator_DecodeWithFD_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DecodeWithFD(
std::move(p_buffer_id), 
std::move(p_input_fd), 
std::move(p_input_buffer_size), 
std::move(p_coded_size_width), 
std::move(p_coded_size_height), 
std::move(p_output_fd), 
std::move(p_output_buffer_size), std::move(callback));
      return true;
    }
    case internal::kJpegDecodeAccelerator_Uninitialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)media::mojom::JpegDecodeAccelerator::Uninitialize",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool JpegDecodeAcceleratorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "JpegDecodeAccelerator RequestValidator");

  switch (message->header()->name) {
    case internal::kJpegDecodeAccelerator_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::JpegDecodeAccelerator_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kJpegDecodeAccelerator_Decode_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::JpegDecodeAccelerator_Decode_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kJpegDecodeAccelerator_DecodeWithFD_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::JpegDecodeAccelerator_DecodeWithFD_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kJpegDecodeAccelerator_Uninitialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::JpegDecodeAccelerator_Uninitialize_Params_Data>(
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

bool JpegDecodeAcceleratorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "JpegDecodeAccelerator ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kJpegDecodeAccelerator_Initialize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::JpegDecodeAccelerator_Initialize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kJpegDecodeAccelerator_Decode_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::JpegDecodeAccelerator_Decode_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kJpegDecodeAccelerator_DecodeWithFD_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::JpegDecodeAccelerator_DecodeWithFD_ResponseParams_Data>(
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
void JpegDecodeAcceleratorInterceptorForTesting::Initialize(InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(callback));
}
void JpegDecodeAcceleratorInterceptorForTesting::Decode(const media::BitstreamBuffer& input_buffer, const gfx::Size& coded_size, mojo::ScopedSharedBufferHandle output_handle, uint32_t output_buffer_size, DecodeCallback callback) {
  GetForwardingInterface()->Decode(std::move(input_buffer), std::move(coded_size), std::move(output_handle), std::move(output_buffer_size), std::move(callback));
}
void JpegDecodeAcceleratorInterceptorForTesting::DecodeWithFD(int32_t buffer_id, mojo::ScopedHandle input_fd, uint32_t input_buffer_size, int32_t coded_size_width, int32_t coded_size_height, mojo::ScopedHandle output_fd, uint32_t output_buffer_size, DecodeWithFDCallback callback) {
  GetForwardingInterface()->DecodeWithFD(std::move(buffer_id), std::move(input_fd), std::move(input_buffer_size), std::move(coded_size_width), std::move(coded_size_height), std::move(output_fd), std::move(output_buffer_size), std::move(callback));
}
void JpegDecodeAcceleratorInterceptorForTesting::Uninitialize() {
  GetForwardingInterface()->Uninitialize();
}
JpegDecodeAcceleratorAsyncWaiter::JpegDecodeAcceleratorAsyncWaiter(
    JpegDecodeAccelerator* proxy) : proxy_(proxy) {}

JpegDecodeAcceleratorAsyncWaiter::~JpegDecodeAcceleratorAsyncWaiter() = default;

void JpegDecodeAcceleratorAsyncWaiter::Initialize(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->Initialize(
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
void JpegDecodeAcceleratorAsyncWaiter::Decode(
    const media::BitstreamBuffer& input_buffer, const gfx::Size& coded_size, mojo::ScopedSharedBufferHandle output_handle, uint32_t output_buffer_size, int32_t* out_bitstream_buffer_id, media::JpegDecodeAccelerator::Error* out_error) {
  base::RunLoop loop;
  proxy_->Decode(std::move(input_buffer),std::move(coded_size),std::move(output_handle),std::move(output_buffer_size),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_bitstream_buffer_id
,
             media::JpegDecodeAccelerator::Error* out_error
,
             int32_t bitstream_buffer_id,
             media::JpegDecodeAccelerator::Error error) {*out_bitstream_buffer_id = std::move(bitstream_buffer_id);*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_bitstream_buffer_id,
          out_error));
  loop.Run();
}
void JpegDecodeAcceleratorAsyncWaiter::DecodeWithFD(
    int32_t buffer_id, mojo::ScopedHandle input_fd, uint32_t input_buffer_size, int32_t coded_size_width, int32_t coded_size_height, mojo::ScopedHandle output_fd, uint32_t output_buffer_size, int32_t* out_buffer_id, media::JpegDecodeAccelerator::Error* out_error) {
  base::RunLoop loop;
  proxy_->DecodeWithFD(std::move(buffer_id),std::move(input_fd),std::move(input_buffer_size),std::move(coded_size_width),std::move(coded_size_height),std::move(output_fd),std::move(output_buffer_size),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_buffer_id
,
             media::JpegDecodeAccelerator::Error* out_error
,
             int32_t buffer_id,
             media::JpegDecodeAccelerator::Error error) {*out_buffer_id = std::move(buffer_id);*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_buffer_id,
          out_error));
  loop.Run();
}

}  // namespace mojom
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::BitstreamBuffer::DataView, ::media::mojom::BitstreamBufferPtr>::Read(
    ::media::mojom::BitstreamBuffer::DataView input,
    ::media::mojom::BitstreamBufferPtr* output) {
  bool success = true;
  ::media::mojom::BitstreamBufferPtr result(::media::mojom::BitstreamBuffer::New());
  
      result->id = input.id();
      result->memory_handle = input.TakeMemoryHandle();
      result->size = input.size();
      result->offset = input.offset();
      if (!input.ReadTimestamp(&result->timestamp))
        success = false;
      if (!input.ReadKeyId(&result->key_id))
        success = false;
      if (!input.ReadIv(&result->iv))
        success = false;
      if (!input.ReadSubsamples(&result->subsamples))
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