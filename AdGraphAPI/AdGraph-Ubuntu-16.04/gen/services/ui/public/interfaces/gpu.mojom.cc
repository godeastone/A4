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

#include "services/ui/public/interfaces/gpu.mojom.h"

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

#include "services/ui/public/interfaces/gpu.mojom-shared-message-ids.h"
#include "gpu/ipc/common/gpu_feature_info_struct_traits.h"
#include "gpu/ipc/common/gpu_info_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/buffer_types_struct_traits.h"
namespace ui {
namespace mojom {
const char Gpu::Name_[] = "ui.mojom.Gpu";

class Gpu_EstablishGpuChannel_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Gpu_EstablishGpuChannel_ForwardToCallback(
      Gpu::EstablishGpuChannelCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Gpu::EstablishGpuChannelCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Gpu_EstablishGpuChannel_ForwardToCallback);
};

class Gpu_CreateGpuMemoryBuffer_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Gpu_CreateGpuMemoryBuffer_ForwardToCallback(
      Gpu::CreateGpuMemoryBufferCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Gpu::CreateGpuMemoryBufferCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Gpu_CreateGpuMemoryBuffer_ForwardToCallback);
};

GpuProxy::GpuProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void GpuProxy::EstablishGpuChannel(
    EstablishGpuChannelCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::Gpu::EstablishGpuChannel");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpu_EstablishGpuChannel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Gpu_EstablishGpuChannel_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Gpu_EstablishGpuChannel_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void GpuProxy::CreateJpegDecodeAccelerator(
    ::media::mojom::JpegDecodeAcceleratorRequest in_jda) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::Gpu::CreateJpegDecodeAccelerator");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpu_CreateJpegDecodeAccelerator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Gpu_CreateJpegDecodeAccelerator_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::JpegDecodeAcceleratorRequestDataView>(
      in_jda, &params->jda, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->jda),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid jda in Gpu.CreateJpegDecodeAccelerator request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuProxy::CreateVideoEncodeAcceleratorProvider(
    ::media::mojom::VideoEncodeAcceleratorProviderRequest in_vea_provider) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::Gpu::CreateVideoEncodeAcceleratorProvider");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpu_CreateVideoEncodeAcceleratorProvider_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::VideoEncodeAcceleratorProviderRequestDataView>(
      in_vea_provider, &params->vea_provider, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->vea_provider),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid vea_provider in Gpu.CreateVideoEncodeAcceleratorProvider request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuProxy::CreateGpuMemoryBuffer(
    gfx::GpuMemoryBufferId in_id, const gfx::Size& in_size, gfx::BufferFormat in_format, gfx::BufferUsage in_usage, CreateGpuMemoryBufferCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::Gpu::CreateGpuMemoryBuffer");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpu_CreateGpuMemoryBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Gpu_CreateGpuMemoryBuffer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<::gfx::mojom::GpuMemoryBufferIdDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in Gpu.CreateGpuMemoryBuffer request");
  typename decltype(params->size)::BaseType::BufferWriter
      size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_size, buffer, &size_writer, &serialization_context);
  params->size.Set(
      size_writer.is_null() ? nullptr : size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null size in Gpu.CreateGpuMemoryBuffer request");
  mojo::internal::Serialize<::gfx::mojom::BufferFormat>(
      in_format, &params->format);
  mojo::internal::Serialize<::gfx::mojom::BufferUsage>(
      in_usage, &params->usage);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Gpu_CreateGpuMemoryBuffer_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void GpuProxy::DestroyGpuMemoryBuffer(
    gfx::GpuMemoryBufferId in_id, const ::gpu::SyncToken& in_sync_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::Gpu::DestroyGpuMemoryBuffer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpu_DestroyGpuMemoryBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Gpu_DestroyGpuMemoryBuffer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<::gfx::mojom::GpuMemoryBufferIdDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in Gpu.DestroyGpuMemoryBuffer request");
  typename decltype(params->sync_token)::BaseType::BufferWriter
      sync_token_writer;
  mojo::internal::Serialize<::gpu::mojom::SyncTokenDataView>(
      in_sync_token, buffer, &sync_token_writer, &serialization_context);
  params->sync_token.Set(
      sync_token_writer.is_null() ? nullptr : sync_token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sync_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sync_token in Gpu.DestroyGpuMemoryBuffer request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class Gpu_EstablishGpuChannel_ProxyToResponder {
 public:
  static Gpu::EstablishGpuChannelCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Gpu_EstablishGpuChannel_ProxyToResponder> proxy(
        new Gpu_EstablishGpuChannel_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Gpu_EstablishGpuChannel_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Gpu_EstablishGpuChannel_ProxyToResponder() {
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
  Gpu_EstablishGpuChannel_ProxyToResponder(
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
        << "Gpu::EstablishGpuChannelCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_client_id, mojo::ScopedMessagePipeHandle in_channel_handle, const gpu::GPUInfo& in_gpu_info, const gpu::GpuFeatureInfo& in_gpu_feature_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Gpu_EstablishGpuChannel_ProxyToResponder);
};

bool Gpu_EstablishGpuChannel_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::Gpu::EstablishGpuChannelCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Gpu_EstablishGpuChannel_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Gpu_EstablishGpuChannel_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_client_id{};
  mojo::ScopedMessagePipeHandle p_channel_handle{};
  gpu::GPUInfo p_gpu_info{};
  gpu::GpuFeatureInfo p_gpu_feature_info{};
  Gpu_EstablishGpuChannel_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_client_id = input_data_view.client_id();
  p_channel_handle = input_data_view.TakeChannelHandle();
  if (!input_data_view.ReadGpuInfo(&p_gpu_info))
    success = false;
  if (!input_data_view.ReadGpuFeatureInfo(&p_gpu_feature_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Gpu::EstablishGpuChannel response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_client_id), 
std::move(p_channel_handle), 
std::move(p_gpu_info), 
std::move(p_gpu_feature_info));
  return true;
}

void Gpu_EstablishGpuChannel_ProxyToResponder::Run(
    int32_t in_client_id, mojo::ScopedMessagePipeHandle in_channel_handle, const gpu::GPUInfo& in_gpu_info, const gpu::GpuFeatureInfo& in_gpu_feature_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpu_EstablishGpuChannel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Gpu_EstablishGpuChannel_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->client_id = in_client_id;
  mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
      in_channel_handle, &params->channel_handle, &serialization_context);
  typename decltype(params->gpu_info)::BaseType::BufferWriter
      gpu_info_writer;
  mojo::internal::Serialize<::gpu::mojom::GpuInfoDataView>(
      in_gpu_info, buffer, &gpu_info_writer, &serialization_context);
  params->gpu_info.Set(
      gpu_info_writer.is_null() ? nullptr : gpu_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->gpu_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null gpu_info in ");
  typename decltype(params->gpu_feature_info)::BaseType::BufferWriter
      gpu_feature_info_writer;
  mojo::internal::Serialize<::gpu::mojom::GpuFeatureInfoDataView>(
      in_gpu_feature_info, buffer, &gpu_feature_info_writer, &serialization_context);
  params->gpu_feature_info.Set(
      gpu_feature_info_writer.is_null() ? nullptr : gpu_feature_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->gpu_feature_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null gpu_feature_info in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Gpu::EstablishGpuChannelCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Gpu_CreateGpuMemoryBuffer_ProxyToResponder {
 public:
  static Gpu::CreateGpuMemoryBufferCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Gpu_CreateGpuMemoryBuffer_ProxyToResponder> proxy(
        new Gpu_CreateGpuMemoryBuffer_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Gpu_CreateGpuMemoryBuffer_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Gpu_CreateGpuMemoryBuffer_ProxyToResponder() {
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
  Gpu_CreateGpuMemoryBuffer_ProxyToResponder(
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
        << "Gpu::CreateGpuMemoryBufferCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const gfx::GpuMemoryBufferHandle& in_buffer_handle);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Gpu_CreateGpuMemoryBuffer_ProxyToResponder);
};

bool Gpu_CreateGpuMemoryBuffer_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::Gpu::CreateGpuMemoryBufferCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Gpu_CreateGpuMemoryBuffer_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Gpu_CreateGpuMemoryBuffer_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  gfx::GpuMemoryBufferHandle p_buffer_handle{};
  Gpu_CreateGpuMemoryBuffer_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadBufferHandle(&p_buffer_handle))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Gpu::CreateGpuMemoryBuffer response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_buffer_handle));
  return true;
}

void Gpu_CreateGpuMemoryBuffer_ProxyToResponder::Run(
    const gfx::GpuMemoryBufferHandle& in_buffer_handle) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpu_CreateGpuMemoryBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::Gpu_CreateGpuMemoryBuffer_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->buffer_handle)::BaseType::BufferWriter
      buffer_handle_writer;
  mojo::internal::Serialize<::gfx::mojom::GpuMemoryBufferHandleDataView>(
      in_buffer_handle, buffer, &buffer_handle_writer, &serialization_context);
  params->buffer_handle.Set(
      buffer_handle_writer.is_null() ? nullptr : buffer_handle_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->buffer_handle.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null buffer_handle in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Gpu::CreateGpuMemoryBufferCallback",
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
bool GpuStubDispatch::Accept(
    Gpu* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kGpu_EstablishGpuChannel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Gpu::EstablishGpuChannel",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpu_CreateJpegDecodeAccelerator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Gpu::CreateJpegDecodeAccelerator",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Gpu_CreateJpegDecodeAccelerator_Params_Data* params =
          reinterpret_cast<internal::Gpu_CreateJpegDecodeAccelerator_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::JpegDecodeAcceleratorRequest p_jda{};
      Gpu_CreateJpegDecodeAccelerator_ParamsDataView input_data_view(params, &serialization_context);
      
      p_jda =
          input_data_view.TakeJda<decltype(p_jda)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Gpu::CreateJpegDecodeAccelerator deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateJpegDecodeAccelerator(
std::move(p_jda));
      return true;
    }
    case internal::kGpu_CreateVideoEncodeAcceleratorProvider_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Gpu::CreateVideoEncodeAcceleratorProvider",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data* params =
          reinterpret_cast<internal::Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::VideoEncodeAcceleratorProviderRequest p_vea_provider{};
      Gpu_CreateVideoEncodeAcceleratorProvider_ParamsDataView input_data_view(params, &serialization_context);
      
      p_vea_provider =
          input_data_view.TakeVeaProvider<decltype(p_vea_provider)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Gpu::CreateVideoEncodeAcceleratorProvider deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateVideoEncodeAcceleratorProvider(
std::move(p_vea_provider));
      return true;
    }
    case internal::kGpu_CreateGpuMemoryBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Gpu::CreateGpuMemoryBuffer",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpu_DestroyGpuMemoryBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Gpu::DestroyGpuMemoryBuffer",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Gpu_DestroyGpuMemoryBuffer_Params_Data* params =
          reinterpret_cast<internal::Gpu_DestroyGpuMemoryBuffer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::GpuMemoryBufferId p_id{};
      ::gpu::SyncToken p_sync_token{};
      Gpu_DestroyGpuMemoryBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadId(&p_id))
        success = false;
      if (!input_data_view.ReadSyncToken(&p_sync_token))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Gpu::DestroyGpuMemoryBuffer deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DestroyGpuMemoryBuffer(
std::move(p_id), 
std::move(p_sync_token));
      return true;
    }
  }
  return false;
}

// static
bool GpuStubDispatch::AcceptWithResponder(
    Gpu* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kGpu_EstablishGpuChannel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Gpu::EstablishGpuChannel",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Gpu_EstablishGpuChannel_Params_Data* params =
          reinterpret_cast<
              internal::Gpu_EstablishGpuChannel_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Gpu_EstablishGpuChannel_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Gpu::EstablishGpuChannel deserializer");
        return false;
      }
      Gpu::EstablishGpuChannelCallback callback =
          Gpu_EstablishGpuChannel_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->EstablishGpuChannel(std::move(callback));
      return true;
    }
    case internal::kGpu_CreateJpegDecodeAccelerator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Gpu::CreateJpegDecodeAccelerator",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpu_CreateVideoEncodeAcceleratorProvider_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Gpu::CreateVideoEncodeAcceleratorProvider",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpu_CreateGpuMemoryBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Gpu::CreateGpuMemoryBuffer",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Gpu_CreateGpuMemoryBuffer_Params_Data* params =
          reinterpret_cast<
              internal::Gpu_CreateGpuMemoryBuffer_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::GpuMemoryBufferId p_id{};
      gfx::Size p_size{};
      gfx::BufferFormat p_format{};
      gfx::BufferUsage p_usage{};
      Gpu_CreateGpuMemoryBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadId(&p_id))
        success = false;
      if (!input_data_view.ReadSize(&p_size))
        success = false;
      if (!input_data_view.ReadFormat(&p_format))
        success = false;
      if (!input_data_view.ReadUsage(&p_usage))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Gpu::CreateGpuMemoryBuffer deserializer");
        return false;
      }
      Gpu::CreateGpuMemoryBufferCallback callback =
          Gpu_CreateGpuMemoryBuffer_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateGpuMemoryBuffer(
std::move(p_id), 
std::move(p_size), 
std::move(p_format), 
std::move(p_usage), std::move(callback));
      return true;
    }
    case internal::kGpu_DestroyGpuMemoryBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::Gpu::DestroyGpuMemoryBuffer",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool GpuRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Gpu RequestValidator");

  switch (message->header()->name) {
    case internal::kGpu_EstablishGpuChannel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Gpu_EstablishGpuChannel_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpu_CreateJpegDecodeAccelerator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Gpu_CreateJpegDecodeAccelerator_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpu_CreateVideoEncodeAcceleratorProvider_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpu_CreateGpuMemoryBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Gpu_CreateGpuMemoryBuffer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpu_DestroyGpuMemoryBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Gpu_DestroyGpuMemoryBuffer_Params_Data>(
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

bool GpuResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Gpu ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kGpu_EstablishGpuChannel_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Gpu_EstablishGpuChannel_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpu_CreateGpuMemoryBuffer_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Gpu_CreateGpuMemoryBuffer_ResponseParams_Data>(
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
void GpuInterceptorForTesting::EstablishGpuChannel(EstablishGpuChannelCallback callback) {
  GetForwardingInterface()->EstablishGpuChannel(std::move(callback));
}
void GpuInterceptorForTesting::CreateJpegDecodeAccelerator(::media::mojom::JpegDecodeAcceleratorRequest jda) {
  GetForwardingInterface()->CreateJpegDecodeAccelerator(std::move(jda));
}
void GpuInterceptorForTesting::CreateVideoEncodeAcceleratorProvider(::media::mojom::VideoEncodeAcceleratorProviderRequest vea_provider) {
  GetForwardingInterface()->CreateVideoEncodeAcceleratorProvider(std::move(vea_provider));
}
void GpuInterceptorForTesting::CreateGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, CreateGpuMemoryBufferCallback callback) {
  GetForwardingInterface()->CreateGpuMemoryBuffer(std::move(id), std::move(size), std::move(format), std::move(usage), std::move(callback));
}
void GpuInterceptorForTesting::DestroyGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const ::gpu::SyncToken& sync_token) {
  GetForwardingInterface()->DestroyGpuMemoryBuffer(std::move(id), std::move(sync_token));
}
GpuAsyncWaiter::GpuAsyncWaiter(
    Gpu* proxy) : proxy_(proxy) {}

GpuAsyncWaiter::~GpuAsyncWaiter() = default;

void GpuAsyncWaiter::EstablishGpuChannel(
    int32_t* out_client_id, mojo::ScopedMessagePipeHandle* out_channel_handle, gpu::GPUInfo* out_gpu_info, gpu::GpuFeatureInfo* out_gpu_feature_info) {
  base::RunLoop loop;
  proxy_->EstablishGpuChannel(
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_client_id
,
             mojo::ScopedMessagePipeHandle* out_channel_handle
,
             gpu::GPUInfo* out_gpu_info
,
             gpu::GpuFeatureInfo* out_gpu_feature_info
,
             int32_t client_id,
             mojo::ScopedMessagePipeHandle channel_handle,
             const gpu::GPUInfo& gpu_info,
             const gpu::GpuFeatureInfo& gpu_feature_info) {*out_client_id = std::move(client_id);*out_channel_handle = std::move(channel_handle);*out_gpu_info = std::move(gpu_info);*out_gpu_feature_info = std::move(gpu_feature_info);
            loop->Quit();
          },
          &loop,
          out_client_id,
          out_channel_handle,
          out_gpu_info,
          out_gpu_feature_info));
  loop.Run();
}
void GpuAsyncWaiter::CreateGpuMemoryBuffer(
    gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, gfx::GpuMemoryBufferHandle* out_buffer_handle) {
  base::RunLoop loop;
  proxy_->CreateGpuMemoryBuffer(std::move(id),std::move(size),std::move(format),std::move(usage),
      base::BindOnce(
          [](base::RunLoop* loop,
             gfx::GpuMemoryBufferHandle* out_buffer_handle
,
             const gfx::GpuMemoryBufferHandle& buffer_handle) {*out_buffer_handle = std::move(buffer_handle);
            loop->Quit();
          },
          &loop,
          out_buffer_handle));
  loop.Run();
}

}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif