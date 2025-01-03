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

#include "services/viz/privileged/interfaces/gl/gpu_service.mojom.h"

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

#include "services/viz/privileged/interfaces/gl/gpu_service.mojom-shared-message-ids.h"
#include "gpu/ipc/common/gpu_info_struct_traits.h"
#include "gpu/ipc/common/memory_stats_struct_traits.h"
#include "gpu/ipc/common/surface_handle_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/buffer_types_struct_traits.h"
namespace viz {
namespace mojom {
const char GpuService::Name_[] = "viz.mojom.GpuService";

class GpuService_EstablishGpuChannel_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  GpuService_EstablishGpuChannel_ForwardToCallback(
      GpuService::EstablishGpuChannelCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  GpuService::EstablishGpuChannelCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(GpuService_EstablishGpuChannel_ForwardToCallback);
};

class GpuService_CreateGpuMemoryBuffer_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  GpuService_CreateGpuMemoryBuffer_ForwardToCallback(
      GpuService::CreateGpuMemoryBufferCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  GpuService::CreateGpuMemoryBufferCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(GpuService_CreateGpuMemoryBuffer_ForwardToCallback);
};

class GpuService_GetVideoMemoryUsageStats_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  GpuService_GetVideoMemoryUsageStats_ForwardToCallback(
      GpuService::GetVideoMemoryUsageStatsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  GpuService::GetVideoMemoryUsageStatsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(GpuService_GetVideoMemoryUsageStats_ForwardToCallback);
};

class GpuService_RequestCompleteGpuInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  GpuService_RequestCompleteGpuInfo_ForwardToCallback(
      GpuService::RequestCompleteGpuInfoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  GpuService::RequestCompleteGpuInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(GpuService_RequestCompleteGpuInfo_ForwardToCallback);
};

class GpuService_GetGpuSupportedRuntimeVersion_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  GpuService_GetGpuSupportedRuntimeVersion_ForwardToCallback(
      GpuService::GetGpuSupportedRuntimeVersionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  GpuService::GetGpuSupportedRuntimeVersionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(GpuService_GetGpuSupportedRuntimeVersion_ForwardToCallback);
};

class GpuService_RequestHDRStatus_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  GpuService_RequestHDRStatus_ForwardToCallback(
      GpuService::RequestHDRStatusCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  GpuService::RequestHDRStatusCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(GpuService_RequestHDRStatus_ForwardToCallback);
};

class GpuService_DestroyingVideoSurface_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  GpuService_DestroyingVideoSurface_ForwardToCallback(
      GpuService::DestroyingVideoSurfaceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  GpuService::DestroyingVideoSurfaceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(GpuService_DestroyingVideoSurface_ForwardToCallback);
};

class GpuService_Stop_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  GpuService_Stop_ForwardToCallback(
      GpuService::StopCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  GpuService::StopCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(GpuService_Stop_ForwardToCallback);
};

GpuServiceProxy::GpuServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void GpuServiceProxy::EstablishGpuChannel(
    int32_t in_client_id, uint64_t in_client_tracing_id, bool in_is_gpu_host, EstablishGpuChannelCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::EstablishGpuChannel");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_EstablishGpuChannel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_EstablishGpuChannel_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->client_id = in_client_id;
  params->client_tracing_id = in_client_tracing_id;
  params->is_gpu_host = in_is_gpu_host;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new GpuService_EstablishGpuChannel_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void GpuServiceProxy::CloseChannel(
    int32_t in_client_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::CloseChannel");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_CloseChannel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_CloseChannel_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->client_id = in_client_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuServiceProxy::CreateJpegDecodeAccelerator(
    ::media::mojom::JpegDecodeAcceleratorRequest in_jda) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::CreateJpegDecodeAccelerator");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_CreateJpegDecodeAccelerator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_CreateJpegDecodeAccelerator_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::JpegDecodeAcceleratorRequestDataView>(
      in_jda, &params->jda, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->jda),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid jda in GpuService.CreateJpegDecodeAccelerator request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuServiceProxy::CreateJpegEncodeAccelerator(
    ::media::mojom::JpegEncodeAcceleratorRequest in_jea) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::CreateJpegEncodeAccelerator");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_CreateJpegEncodeAccelerator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_CreateJpegEncodeAccelerator_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::JpegEncodeAcceleratorRequestDataView>(
      in_jea, &params->jea, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->jea),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid jea in GpuService.CreateJpegEncodeAccelerator request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuServiceProxy::CreateVideoEncodeAcceleratorProvider(
    ::media::mojom::VideoEncodeAcceleratorProviderRequest in_vea_provider) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::CreateVideoEncodeAcceleratorProvider");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_CreateVideoEncodeAcceleratorProvider_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_CreateVideoEncodeAcceleratorProvider_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::VideoEncodeAcceleratorProviderRequestDataView>(
      in_vea_provider, &params->vea_provider, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->vea_provider),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid vea_provider in GpuService.CreateVideoEncodeAcceleratorProvider request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuServiceProxy::CreateGpuMemoryBuffer(
    gfx::GpuMemoryBufferId in_id, const gfx::Size& in_size, gfx::BufferFormat in_format, gfx::BufferUsage in_usage, int32_t in_client_id, ::gpu::SurfaceHandle in_surface_handle, CreateGpuMemoryBufferCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::CreateGpuMemoryBuffer");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_CreateGpuMemoryBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_CreateGpuMemoryBuffer_Params_Data::BufferWriter
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
      "null id in GpuService.CreateGpuMemoryBuffer request");
  typename decltype(params->size)::BaseType::BufferWriter
      size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_size, buffer, &size_writer, &serialization_context);
  params->size.Set(
      size_writer.is_null() ? nullptr : size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null size in GpuService.CreateGpuMemoryBuffer request");
  mojo::internal::Serialize<::gfx::mojom::BufferFormat>(
      in_format, &params->format);
  mojo::internal::Serialize<::gfx::mojom::BufferUsage>(
      in_usage, &params->usage);
  params->client_id = in_client_id;
  typename decltype(params->surface_handle)::BaseType::BufferWriter
      surface_handle_writer;
  mojo::internal::Serialize<::gpu::mojom::SurfaceHandleDataView>(
      in_surface_handle, buffer, &surface_handle_writer, &serialization_context);
  params->surface_handle.Set(
      surface_handle_writer.is_null() ? nullptr : surface_handle_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->surface_handle.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null surface_handle in GpuService.CreateGpuMemoryBuffer request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new GpuService_CreateGpuMemoryBuffer_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void GpuServiceProxy::DestroyGpuMemoryBuffer(
    gfx::GpuMemoryBufferId in_id, int32_t in_client_id, const ::gpu::SyncToken& in_sync_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::DestroyGpuMemoryBuffer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_DestroyGpuMemoryBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_DestroyGpuMemoryBuffer_Params_Data::BufferWriter
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
      "null id in GpuService.DestroyGpuMemoryBuffer request");
  params->client_id = in_client_id;
  typename decltype(params->sync_token)::BaseType::BufferWriter
      sync_token_writer;
  mojo::internal::Serialize<::gpu::mojom::SyncTokenDataView>(
      in_sync_token, buffer, &sync_token_writer, &serialization_context);
  params->sync_token.Set(
      sync_token_writer.is_null() ? nullptr : sync_token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sync_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sync_token in GpuService.DestroyGpuMemoryBuffer request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuServiceProxy::GetVideoMemoryUsageStats(
    GetVideoMemoryUsageStatsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::GetVideoMemoryUsageStats");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_GetVideoMemoryUsageStats_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_GetVideoMemoryUsageStats_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new GpuService_GetVideoMemoryUsageStats_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void GpuServiceProxy::RequestCompleteGpuInfo(
    RequestCompleteGpuInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::RequestCompleteGpuInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_RequestCompleteGpuInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_RequestCompleteGpuInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new GpuService_RequestCompleteGpuInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void GpuServiceProxy::GetGpuSupportedRuntimeVersion(
    GetGpuSupportedRuntimeVersionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::GetGpuSupportedRuntimeVersion");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_GetGpuSupportedRuntimeVersion_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_GetGpuSupportedRuntimeVersion_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new GpuService_GetGpuSupportedRuntimeVersion_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void GpuServiceProxy::RequestHDRStatus(
    RequestHDRStatusCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::RequestHDRStatus");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_RequestHDRStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_RequestHDRStatus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new GpuService_RequestHDRStatus_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void GpuServiceProxy::LoadedShader(
    const std::string& in_key, const std::string& in_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::LoadedShader");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_LoadedShader_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_LoadedShader_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_key, buffer, &key_writer, &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in GpuService.LoadedShader request");
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_data, buffer, &data_writer, &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in GpuService.LoadedShader request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuServiceProxy::DestroyingVideoSurface(
    int32_t in_surface_id, DestroyingVideoSurfaceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::DestroyingVideoSurface");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_DestroyingVideoSurface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_DestroyingVideoSurface_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->surface_id = in_surface_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new GpuService_DestroyingVideoSurface_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void GpuServiceProxy::WakeUpGpu(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::WakeUpGpu");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_WakeUpGpu_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_WakeUpGpu_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuServiceProxy::GpuSwitched(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::GpuSwitched");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_GpuSwitched_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_GpuSwitched_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuServiceProxy::DestroyAllChannels(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::DestroyAllChannels");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_DestroyAllChannels_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_DestroyAllChannels_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuServiceProxy::OnBackgroundCleanup(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::OnBackgroundCleanup");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_OnBackgroundCleanup_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_OnBackgroundCleanup_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuServiceProxy::OnBackgrounded(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::OnBackgrounded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_OnBackgrounded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_OnBackgrounded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuServiceProxy::OnForegrounded(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::OnForegrounded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_OnForegrounded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_OnForegrounded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuServiceProxy::Crash(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::Crash");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_Crash_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_Crash_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuServiceProxy::Hang(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::Hang");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_Hang_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_Hang_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuServiceProxy::ThrowJavaException(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::ThrowJavaException");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_ThrowJavaException_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_ThrowJavaException_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuServiceProxy::Stop(
    StopCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuService::Stop");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_Stop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_Stop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new GpuService_Stop_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class GpuService_EstablishGpuChannel_ProxyToResponder {
 public:
  static GpuService::EstablishGpuChannelCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<GpuService_EstablishGpuChannel_ProxyToResponder> proxy(
        new GpuService_EstablishGpuChannel_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&GpuService_EstablishGpuChannel_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~GpuService_EstablishGpuChannel_ProxyToResponder() {
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
  GpuService_EstablishGpuChannel_ProxyToResponder(
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
        << "GpuService::EstablishGpuChannelCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      mojo::ScopedMessagePipeHandle in_channel_handle);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(GpuService_EstablishGpuChannel_ProxyToResponder);
};

bool GpuService_EstablishGpuChannel_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "viz::mojom::GpuService::EstablishGpuChannelCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::GpuService_EstablishGpuChannel_ResponseParams_Data* params =
      reinterpret_cast<
          internal::GpuService_EstablishGpuChannel_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  mojo::ScopedMessagePipeHandle p_channel_handle{};
  GpuService_EstablishGpuChannel_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_channel_handle = input_data_view.TakeChannelHandle();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "GpuService::EstablishGpuChannel response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_channel_handle));
  return true;
}

void GpuService_EstablishGpuChannel_ProxyToResponder::Run(
    mojo::ScopedMessagePipeHandle in_channel_handle) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_EstablishGpuChannel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_EstablishGpuChannel_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
      in_channel_handle, &params->channel_handle, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::EstablishGpuChannelCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class GpuService_CreateGpuMemoryBuffer_ProxyToResponder {
 public:
  static GpuService::CreateGpuMemoryBufferCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<GpuService_CreateGpuMemoryBuffer_ProxyToResponder> proxy(
        new GpuService_CreateGpuMemoryBuffer_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&GpuService_CreateGpuMemoryBuffer_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~GpuService_CreateGpuMemoryBuffer_ProxyToResponder() {
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
  GpuService_CreateGpuMemoryBuffer_ProxyToResponder(
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
        << "GpuService::CreateGpuMemoryBufferCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(GpuService_CreateGpuMemoryBuffer_ProxyToResponder);
};

bool GpuService_CreateGpuMemoryBuffer_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "viz::mojom::GpuService::CreateGpuMemoryBufferCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::GpuService_CreateGpuMemoryBuffer_ResponseParams_Data* params =
      reinterpret_cast<
          internal::GpuService_CreateGpuMemoryBuffer_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  gfx::GpuMemoryBufferHandle p_buffer_handle{};
  GpuService_CreateGpuMemoryBuffer_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadBufferHandle(&p_buffer_handle))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "GpuService::CreateGpuMemoryBuffer response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_buffer_handle));
  return true;
}

void GpuService_CreateGpuMemoryBuffer_ProxyToResponder::Run(
    const gfx::GpuMemoryBufferHandle& in_buffer_handle) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_CreateGpuMemoryBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_CreateGpuMemoryBuffer_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::CreateGpuMemoryBufferCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class GpuService_GetVideoMemoryUsageStats_ProxyToResponder {
 public:
  static GpuService::GetVideoMemoryUsageStatsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<GpuService_GetVideoMemoryUsageStats_ProxyToResponder> proxy(
        new GpuService_GetVideoMemoryUsageStats_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&GpuService_GetVideoMemoryUsageStats_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~GpuService_GetVideoMemoryUsageStats_ProxyToResponder() {
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
  GpuService_GetVideoMemoryUsageStats_ProxyToResponder(
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
        << "GpuService::GetVideoMemoryUsageStatsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const gpu::VideoMemoryUsageStats& in_stats);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(GpuService_GetVideoMemoryUsageStats_ProxyToResponder);
};

bool GpuService_GetVideoMemoryUsageStats_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "viz::mojom::GpuService::GetVideoMemoryUsageStatsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::GpuService_GetVideoMemoryUsageStats_ResponseParams_Data* params =
      reinterpret_cast<
          internal::GpuService_GetVideoMemoryUsageStats_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  gpu::VideoMemoryUsageStats p_stats{};
  GpuService_GetVideoMemoryUsageStats_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStats(&p_stats))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "GpuService::GetVideoMemoryUsageStats response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_stats));
  return true;
}

void GpuService_GetVideoMemoryUsageStats_ProxyToResponder::Run(
    const gpu::VideoMemoryUsageStats& in_stats) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_GetVideoMemoryUsageStats_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_GetVideoMemoryUsageStats_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->stats)::BaseType::BufferWriter
      stats_writer;
  mojo::internal::Serialize<::gpu::mojom::VideoMemoryUsageStatsDataView>(
      in_stats, buffer, &stats_writer, &serialization_context);
  params->stats.Set(
      stats_writer.is_null() ? nullptr : stats_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->stats.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null stats in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::GetVideoMemoryUsageStatsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class GpuService_RequestCompleteGpuInfo_ProxyToResponder {
 public:
  static GpuService::RequestCompleteGpuInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<GpuService_RequestCompleteGpuInfo_ProxyToResponder> proxy(
        new GpuService_RequestCompleteGpuInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&GpuService_RequestCompleteGpuInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~GpuService_RequestCompleteGpuInfo_ProxyToResponder() {
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
  GpuService_RequestCompleteGpuInfo_ProxyToResponder(
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
        << "GpuService::RequestCompleteGpuInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const gpu::GPUInfo& in_gpu_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(GpuService_RequestCompleteGpuInfo_ProxyToResponder);
};

bool GpuService_RequestCompleteGpuInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "viz::mojom::GpuService::RequestCompleteGpuInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::GpuService_RequestCompleteGpuInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::GpuService_RequestCompleteGpuInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  gpu::GPUInfo p_gpu_info{};
  GpuService_RequestCompleteGpuInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadGpuInfo(&p_gpu_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "GpuService::RequestCompleteGpuInfo response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_gpu_info));
  return true;
}

void GpuService_RequestCompleteGpuInfo_ProxyToResponder::Run(
    const gpu::GPUInfo& in_gpu_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_RequestCompleteGpuInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_RequestCompleteGpuInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
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
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::RequestCompleteGpuInfoCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class GpuService_GetGpuSupportedRuntimeVersion_ProxyToResponder {
 public:
  static GpuService::GetGpuSupportedRuntimeVersionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<GpuService_GetGpuSupportedRuntimeVersion_ProxyToResponder> proxy(
        new GpuService_GetGpuSupportedRuntimeVersion_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&GpuService_GetGpuSupportedRuntimeVersion_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~GpuService_GetGpuSupportedRuntimeVersion_ProxyToResponder() {
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
  GpuService_GetGpuSupportedRuntimeVersion_ProxyToResponder(
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
        << "GpuService::GetGpuSupportedRuntimeVersionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const gpu::GPUInfo& in_gpu_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(GpuService_GetGpuSupportedRuntimeVersion_ProxyToResponder);
};

bool GpuService_GetGpuSupportedRuntimeVersion_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "viz::mojom::GpuService::GetGpuSupportedRuntimeVersionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::GpuService_GetGpuSupportedRuntimeVersion_ResponseParams_Data* params =
      reinterpret_cast<
          internal::GpuService_GetGpuSupportedRuntimeVersion_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  gpu::GPUInfo p_gpu_info{};
  GpuService_GetGpuSupportedRuntimeVersion_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadGpuInfo(&p_gpu_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "GpuService::GetGpuSupportedRuntimeVersion response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_gpu_info));
  return true;
}

void GpuService_GetGpuSupportedRuntimeVersion_ProxyToResponder::Run(
    const gpu::GPUInfo& in_gpu_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_GetGpuSupportedRuntimeVersion_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_GetGpuSupportedRuntimeVersion_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
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
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::GetGpuSupportedRuntimeVersionCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class GpuService_RequestHDRStatus_ProxyToResponder {
 public:
  static GpuService::RequestHDRStatusCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<GpuService_RequestHDRStatus_ProxyToResponder> proxy(
        new GpuService_RequestHDRStatus_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&GpuService_RequestHDRStatus_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~GpuService_RequestHDRStatus_ProxyToResponder() {
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
  GpuService_RequestHDRStatus_ProxyToResponder(
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
        << "GpuService::RequestHDRStatusCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_hdr_enabled);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(GpuService_RequestHDRStatus_ProxyToResponder);
};

bool GpuService_RequestHDRStatus_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "viz::mojom::GpuService::RequestHDRStatusCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::GpuService_RequestHDRStatus_ResponseParams_Data* params =
      reinterpret_cast<
          internal::GpuService_RequestHDRStatus_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_hdr_enabled{};
  GpuService_RequestHDRStatus_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_hdr_enabled = input_data_view.hdr_enabled();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "GpuService::RequestHDRStatus response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_hdr_enabled));
  return true;
}

void GpuService_RequestHDRStatus_ProxyToResponder::Run(
    bool in_hdr_enabled) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_RequestHDRStatus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_RequestHDRStatus_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->hdr_enabled = in_hdr_enabled;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::RequestHDRStatusCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class GpuService_DestroyingVideoSurface_ProxyToResponder {
 public:
  static GpuService::DestroyingVideoSurfaceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<GpuService_DestroyingVideoSurface_ProxyToResponder> proxy(
        new GpuService_DestroyingVideoSurface_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&GpuService_DestroyingVideoSurface_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~GpuService_DestroyingVideoSurface_ProxyToResponder() {
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
  GpuService_DestroyingVideoSurface_ProxyToResponder(
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
        << "GpuService::DestroyingVideoSurfaceCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(GpuService_DestroyingVideoSurface_ProxyToResponder);
};

bool GpuService_DestroyingVideoSurface_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "viz::mojom::GpuService::DestroyingVideoSurfaceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::GpuService_DestroyingVideoSurface_ResponseParams_Data* params =
      reinterpret_cast<
          internal::GpuService_DestroyingVideoSurface_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  GpuService_DestroyingVideoSurface_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "GpuService::DestroyingVideoSurface response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void GpuService_DestroyingVideoSurface_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_DestroyingVideoSurface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_DestroyingVideoSurface_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::DestroyingVideoSurfaceCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class GpuService_Stop_ProxyToResponder {
 public:
  static GpuService::StopCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<GpuService_Stop_ProxyToResponder> proxy(
        new GpuService_Stop_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&GpuService_Stop_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~GpuService_Stop_ProxyToResponder() {
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
  GpuService_Stop_ProxyToResponder(
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
        << "GpuService::StopCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(GpuService_Stop_ProxyToResponder);
};

bool GpuService_Stop_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "viz::mojom::GpuService::StopCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::GpuService_Stop_ResponseParams_Data* params =
      reinterpret_cast<
          internal::GpuService_Stop_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  GpuService_Stop_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "GpuService::Stop response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void GpuService_Stop_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuService_Stop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuService_Stop_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::StopCallback",
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
bool GpuServiceStubDispatch::Accept(
    GpuService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kGpuService_EstablishGpuChannel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::EstablishGpuChannel",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_CloseChannel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::CloseChannel",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuService_CloseChannel_Params_Data* params =
          reinterpret_cast<internal::GpuService_CloseChannel_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_client_id{};
      GpuService_CloseChannel_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client_id = input_data_view.client_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::CloseChannel deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CloseChannel(
std::move(p_client_id));
      return true;
    }
    case internal::kGpuService_CreateJpegDecodeAccelerator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::CreateJpegDecodeAccelerator",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuService_CreateJpegDecodeAccelerator_Params_Data* params =
          reinterpret_cast<internal::GpuService_CreateJpegDecodeAccelerator_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::JpegDecodeAcceleratorRequest p_jda{};
      GpuService_CreateJpegDecodeAccelerator_ParamsDataView input_data_view(params, &serialization_context);
      
      p_jda =
          input_data_view.TakeJda<decltype(p_jda)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::CreateJpegDecodeAccelerator deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateJpegDecodeAccelerator(
std::move(p_jda));
      return true;
    }
    case internal::kGpuService_CreateJpegEncodeAccelerator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::CreateJpegEncodeAccelerator",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuService_CreateJpegEncodeAccelerator_Params_Data* params =
          reinterpret_cast<internal::GpuService_CreateJpegEncodeAccelerator_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::JpegEncodeAcceleratorRequest p_jea{};
      GpuService_CreateJpegEncodeAccelerator_ParamsDataView input_data_view(params, &serialization_context);
      
      p_jea =
          input_data_view.TakeJea<decltype(p_jea)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::CreateJpegEncodeAccelerator deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateJpegEncodeAccelerator(
std::move(p_jea));
      return true;
    }
    case internal::kGpuService_CreateVideoEncodeAcceleratorProvider_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::CreateVideoEncodeAcceleratorProvider",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuService_CreateVideoEncodeAcceleratorProvider_Params_Data* params =
          reinterpret_cast<internal::GpuService_CreateVideoEncodeAcceleratorProvider_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::VideoEncodeAcceleratorProviderRequest p_vea_provider{};
      GpuService_CreateVideoEncodeAcceleratorProvider_ParamsDataView input_data_view(params, &serialization_context);
      
      p_vea_provider =
          input_data_view.TakeVeaProvider<decltype(p_vea_provider)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::CreateVideoEncodeAcceleratorProvider deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateVideoEncodeAcceleratorProvider(
std::move(p_vea_provider));
      return true;
    }
    case internal::kGpuService_CreateGpuMemoryBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::CreateGpuMemoryBuffer",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_DestroyGpuMemoryBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::DestroyGpuMemoryBuffer",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuService_DestroyGpuMemoryBuffer_Params_Data* params =
          reinterpret_cast<internal::GpuService_DestroyGpuMemoryBuffer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::GpuMemoryBufferId p_id{};
      int32_t p_client_id{};
      ::gpu::SyncToken p_sync_token{};
      GpuService_DestroyGpuMemoryBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadId(&p_id))
        success = false;
      p_client_id = input_data_view.client_id();
      if (!input_data_view.ReadSyncToken(&p_sync_token))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::DestroyGpuMemoryBuffer deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DestroyGpuMemoryBuffer(
std::move(p_id), 
std::move(p_client_id), 
std::move(p_sync_token));
      return true;
    }
    case internal::kGpuService_GetVideoMemoryUsageStats_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::GetVideoMemoryUsageStats",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_RequestCompleteGpuInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::RequestCompleteGpuInfo",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_GetGpuSupportedRuntimeVersion_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::GetGpuSupportedRuntimeVersion",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_RequestHDRStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::RequestHDRStatus",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_LoadedShader_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::LoadedShader",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuService_LoadedShader_Params_Data* params =
          reinterpret_cast<internal::GpuService_LoadedShader_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_key{};
      std::string p_data{};
      GpuService_LoadedShader_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::LoadedShader deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->LoadedShader(
std::move(p_key), 
std::move(p_data));
      return true;
    }
    case internal::kGpuService_DestroyingVideoSurface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::DestroyingVideoSurface",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_WakeUpGpu_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::WakeUpGpu",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuService_WakeUpGpu_Params_Data* params =
          reinterpret_cast<internal::GpuService_WakeUpGpu_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GpuService_WakeUpGpu_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::WakeUpGpu deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WakeUpGpu();
      return true;
    }
    case internal::kGpuService_GpuSwitched_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::GpuSwitched",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuService_GpuSwitched_Params_Data* params =
          reinterpret_cast<internal::GpuService_GpuSwitched_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GpuService_GpuSwitched_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::GpuSwitched deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GpuSwitched();
      return true;
    }
    case internal::kGpuService_DestroyAllChannels_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::DestroyAllChannels",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuService_DestroyAllChannels_Params_Data* params =
          reinterpret_cast<internal::GpuService_DestroyAllChannels_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GpuService_DestroyAllChannels_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::DestroyAllChannels deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DestroyAllChannels();
      return true;
    }
    case internal::kGpuService_OnBackgroundCleanup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::OnBackgroundCleanup",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuService_OnBackgroundCleanup_Params_Data* params =
          reinterpret_cast<internal::GpuService_OnBackgroundCleanup_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GpuService_OnBackgroundCleanup_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::OnBackgroundCleanup deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnBackgroundCleanup();
      return true;
    }
    case internal::kGpuService_OnBackgrounded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::OnBackgrounded",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuService_OnBackgrounded_Params_Data* params =
          reinterpret_cast<internal::GpuService_OnBackgrounded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GpuService_OnBackgrounded_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::OnBackgrounded deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnBackgrounded();
      return true;
    }
    case internal::kGpuService_OnForegrounded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::OnForegrounded",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuService_OnForegrounded_Params_Data* params =
          reinterpret_cast<internal::GpuService_OnForegrounded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GpuService_OnForegrounded_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::OnForegrounded deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnForegrounded();
      return true;
    }
    case internal::kGpuService_Crash_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::Crash",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuService_Crash_Params_Data* params =
          reinterpret_cast<internal::GpuService_Crash_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GpuService_Crash_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::Crash deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Crash();
      return true;
    }
    case internal::kGpuService_Hang_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::Hang",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuService_Hang_Params_Data* params =
          reinterpret_cast<internal::GpuService_Hang_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GpuService_Hang_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::Hang deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Hang();
      return true;
    }
    case internal::kGpuService_ThrowJavaException_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::ThrowJavaException",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuService_ThrowJavaException_Params_Data* params =
          reinterpret_cast<internal::GpuService_ThrowJavaException_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GpuService_ThrowJavaException_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::ThrowJavaException deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ThrowJavaException();
      return true;
    }
    case internal::kGpuService_Stop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::Stop",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool GpuServiceStubDispatch::AcceptWithResponder(
    GpuService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kGpuService_EstablishGpuChannel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::EstablishGpuChannel",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::GpuService_EstablishGpuChannel_Params_Data* params =
          reinterpret_cast<
              internal::GpuService_EstablishGpuChannel_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_client_id{};
      uint64_t p_client_tracing_id{};
      bool p_is_gpu_host{};
      GpuService_EstablishGpuChannel_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client_id = input_data_view.client_id();
      p_client_tracing_id = input_data_view.client_tracing_id();
      p_is_gpu_host = input_data_view.is_gpu_host();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::EstablishGpuChannel deserializer");
        return false;
      }
      GpuService::EstablishGpuChannelCallback callback =
          GpuService_EstablishGpuChannel_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->EstablishGpuChannel(
std::move(p_client_id), 
std::move(p_client_tracing_id), 
std::move(p_is_gpu_host), std::move(callback));
      return true;
    }
    case internal::kGpuService_CloseChannel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::CloseChannel",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_CreateJpegDecodeAccelerator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::CreateJpegDecodeAccelerator",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_CreateJpegEncodeAccelerator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::CreateJpegEncodeAccelerator",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_CreateVideoEncodeAcceleratorProvider_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::CreateVideoEncodeAcceleratorProvider",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_CreateGpuMemoryBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::CreateGpuMemoryBuffer",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::GpuService_CreateGpuMemoryBuffer_Params_Data* params =
          reinterpret_cast<
              internal::GpuService_CreateGpuMemoryBuffer_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::GpuMemoryBufferId p_id{};
      gfx::Size p_size{};
      gfx::BufferFormat p_format{};
      gfx::BufferUsage p_usage{};
      int32_t p_client_id{};
      ::gpu::SurfaceHandle p_surface_handle{};
      GpuService_CreateGpuMemoryBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadId(&p_id))
        success = false;
      if (!input_data_view.ReadSize(&p_size))
        success = false;
      if (!input_data_view.ReadFormat(&p_format))
        success = false;
      if (!input_data_view.ReadUsage(&p_usage))
        success = false;
      p_client_id = input_data_view.client_id();
      if (!input_data_view.ReadSurfaceHandle(&p_surface_handle))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::CreateGpuMemoryBuffer deserializer");
        return false;
      }
      GpuService::CreateGpuMemoryBufferCallback callback =
          GpuService_CreateGpuMemoryBuffer_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateGpuMemoryBuffer(
std::move(p_id), 
std::move(p_size), 
std::move(p_format), 
std::move(p_usage), 
std::move(p_client_id), 
std::move(p_surface_handle), std::move(callback));
      return true;
    }
    case internal::kGpuService_DestroyGpuMemoryBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::DestroyGpuMemoryBuffer",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_GetVideoMemoryUsageStats_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::GetVideoMemoryUsageStats",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::GpuService_GetVideoMemoryUsageStats_Params_Data* params =
          reinterpret_cast<
              internal::GpuService_GetVideoMemoryUsageStats_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GpuService_GetVideoMemoryUsageStats_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::GetVideoMemoryUsageStats deserializer");
        return false;
      }
      GpuService::GetVideoMemoryUsageStatsCallback callback =
          GpuService_GetVideoMemoryUsageStats_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetVideoMemoryUsageStats(std::move(callback));
      return true;
    }
    case internal::kGpuService_RequestCompleteGpuInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::RequestCompleteGpuInfo",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::GpuService_RequestCompleteGpuInfo_Params_Data* params =
          reinterpret_cast<
              internal::GpuService_RequestCompleteGpuInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GpuService_RequestCompleteGpuInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::RequestCompleteGpuInfo deserializer");
        return false;
      }
      GpuService::RequestCompleteGpuInfoCallback callback =
          GpuService_RequestCompleteGpuInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestCompleteGpuInfo(std::move(callback));
      return true;
    }
    case internal::kGpuService_GetGpuSupportedRuntimeVersion_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::GetGpuSupportedRuntimeVersion",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::GpuService_GetGpuSupportedRuntimeVersion_Params_Data* params =
          reinterpret_cast<
              internal::GpuService_GetGpuSupportedRuntimeVersion_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GpuService_GetGpuSupportedRuntimeVersion_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::GetGpuSupportedRuntimeVersion deserializer");
        return false;
      }
      GpuService::GetGpuSupportedRuntimeVersionCallback callback =
          GpuService_GetGpuSupportedRuntimeVersion_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetGpuSupportedRuntimeVersion(std::move(callback));
      return true;
    }
    case internal::kGpuService_RequestHDRStatus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::RequestHDRStatus",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::GpuService_RequestHDRStatus_Params_Data* params =
          reinterpret_cast<
              internal::GpuService_RequestHDRStatus_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GpuService_RequestHDRStatus_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::RequestHDRStatus deserializer");
        return false;
      }
      GpuService::RequestHDRStatusCallback callback =
          GpuService_RequestHDRStatus_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestHDRStatus(std::move(callback));
      return true;
    }
    case internal::kGpuService_LoadedShader_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::LoadedShader",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_DestroyingVideoSurface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::DestroyingVideoSurface",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::GpuService_DestroyingVideoSurface_Params_Data* params =
          reinterpret_cast<
              internal::GpuService_DestroyingVideoSurface_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_surface_id{};
      GpuService_DestroyingVideoSurface_ParamsDataView input_data_view(params, &serialization_context);
      
      p_surface_id = input_data_view.surface_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::DestroyingVideoSurface deserializer");
        return false;
      }
      GpuService::DestroyingVideoSurfaceCallback callback =
          GpuService_DestroyingVideoSurface_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DestroyingVideoSurface(
std::move(p_surface_id), std::move(callback));
      return true;
    }
    case internal::kGpuService_WakeUpGpu_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::WakeUpGpu",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_GpuSwitched_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::GpuSwitched",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_DestroyAllChannels_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::DestroyAllChannels",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_OnBackgroundCleanup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::OnBackgroundCleanup",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_OnBackgrounded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::OnBackgrounded",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_OnForegrounded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::OnForegrounded",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_Crash_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::Crash",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_Hang_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::Hang",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_ThrowJavaException_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::ThrowJavaException",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuService_Stop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuService::Stop",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::GpuService_Stop_Params_Data* params =
          reinterpret_cast<
              internal::GpuService_Stop_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GpuService_Stop_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuService::Stop deserializer");
        return false;
      }
      GpuService::StopCallback callback =
          GpuService_Stop_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Stop(std::move(callback));
      return true;
    }
  }
  return false;
}

bool GpuServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "GpuService RequestValidator");

  switch (message->header()->name) {
    case internal::kGpuService_EstablishGpuChannel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_EstablishGpuChannel_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_CloseChannel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_CloseChannel_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_CreateJpegDecodeAccelerator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_CreateJpegDecodeAccelerator_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_CreateJpegEncodeAccelerator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_CreateJpegEncodeAccelerator_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_CreateVideoEncodeAcceleratorProvider_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_CreateVideoEncodeAcceleratorProvider_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_CreateGpuMemoryBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_CreateGpuMemoryBuffer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_DestroyGpuMemoryBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_DestroyGpuMemoryBuffer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_GetVideoMemoryUsageStats_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_GetVideoMemoryUsageStats_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_RequestCompleteGpuInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_RequestCompleteGpuInfo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_GetGpuSupportedRuntimeVersion_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_GetGpuSupportedRuntimeVersion_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_RequestHDRStatus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_RequestHDRStatus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_LoadedShader_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_LoadedShader_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_DestroyingVideoSurface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_DestroyingVideoSurface_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_WakeUpGpu_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_WakeUpGpu_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_GpuSwitched_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_GpuSwitched_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_DestroyAllChannels_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_DestroyAllChannels_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_OnBackgroundCleanup_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_OnBackgroundCleanup_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_OnBackgrounded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_OnBackgrounded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_OnForegrounded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_OnForegrounded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_Crash_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_Crash_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_Hang_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_Hang_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_ThrowJavaException_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_ThrowJavaException_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_Stop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_Stop_Params_Data>(
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

bool GpuServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "GpuService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kGpuService_EstablishGpuChannel_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_EstablishGpuChannel_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_CreateGpuMemoryBuffer_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_CreateGpuMemoryBuffer_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_GetVideoMemoryUsageStats_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_GetVideoMemoryUsageStats_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_RequestCompleteGpuInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_RequestCompleteGpuInfo_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_GetGpuSupportedRuntimeVersion_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_GetGpuSupportedRuntimeVersion_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_RequestHDRStatus_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_RequestHDRStatus_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_DestroyingVideoSurface_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_DestroyingVideoSurface_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuService_Stop_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuService_Stop_ResponseParams_Data>(
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
void GpuServiceInterceptorForTesting::EstablishGpuChannel(int32_t client_id, uint64_t client_tracing_id, bool is_gpu_host, EstablishGpuChannelCallback callback) {
  GetForwardingInterface()->EstablishGpuChannel(std::move(client_id), std::move(client_tracing_id), std::move(is_gpu_host), std::move(callback));
}
void GpuServiceInterceptorForTesting::CloseChannel(int32_t client_id) {
  GetForwardingInterface()->CloseChannel(std::move(client_id));
}
void GpuServiceInterceptorForTesting::CreateJpegDecodeAccelerator(::media::mojom::JpegDecodeAcceleratorRequest jda) {
  GetForwardingInterface()->CreateJpegDecodeAccelerator(std::move(jda));
}
void GpuServiceInterceptorForTesting::CreateJpegEncodeAccelerator(::media::mojom::JpegEncodeAcceleratorRequest jea) {
  GetForwardingInterface()->CreateJpegEncodeAccelerator(std::move(jea));
}
void GpuServiceInterceptorForTesting::CreateVideoEncodeAcceleratorProvider(::media::mojom::VideoEncodeAcceleratorProviderRequest vea_provider) {
  GetForwardingInterface()->CreateVideoEncodeAcceleratorProvider(std::move(vea_provider));
}
void GpuServiceInterceptorForTesting::CreateGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, int32_t client_id, ::gpu::SurfaceHandle surface_handle, CreateGpuMemoryBufferCallback callback) {
  GetForwardingInterface()->CreateGpuMemoryBuffer(std::move(id), std::move(size), std::move(format), std::move(usage), std::move(client_id), std::move(surface_handle), std::move(callback));
}
void GpuServiceInterceptorForTesting::DestroyGpuMemoryBuffer(gfx::GpuMemoryBufferId id, int32_t client_id, const ::gpu::SyncToken& sync_token) {
  GetForwardingInterface()->DestroyGpuMemoryBuffer(std::move(id), std::move(client_id), std::move(sync_token));
}
void GpuServiceInterceptorForTesting::GetVideoMemoryUsageStats(GetVideoMemoryUsageStatsCallback callback) {
  GetForwardingInterface()->GetVideoMemoryUsageStats(std::move(callback));
}
void GpuServiceInterceptorForTesting::RequestCompleteGpuInfo(RequestCompleteGpuInfoCallback callback) {
  GetForwardingInterface()->RequestCompleteGpuInfo(std::move(callback));
}
void GpuServiceInterceptorForTesting::GetGpuSupportedRuntimeVersion(GetGpuSupportedRuntimeVersionCallback callback) {
  GetForwardingInterface()->GetGpuSupportedRuntimeVersion(std::move(callback));
}
void GpuServiceInterceptorForTesting::RequestHDRStatus(RequestHDRStatusCallback callback) {
  GetForwardingInterface()->RequestHDRStatus(std::move(callback));
}
void GpuServiceInterceptorForTesting::LoadedShader(const std::string& key, const std::string& data) {
  GetForwardingInterface()->LoadedShader(std::move(key), std::move(data));
}
void GpuServiceInterceptorForTesting::DestroyingVideoSurface(int32_t surface_id, DestroyingVideoSurfaceCallback callback) {
  GetForwardingInterface()->DestroyingVideoSurface(std::move(surface_id), std::move(callback));
}
void GpuServiceInterceptorForTesting::WakeUpGpu() {
  GetForwardingInterface()->WakeUpGpu();
}
void GpuServiceInterceptorForTesting::GpuSwitched() {
  GetForwardingInterface()->GpuSwitched();
}
void GpuServiceInterceptorForTesting::DestroyAllChannels() {
  GetForwardingInterface()->DestroyAllChannels();
}
void GpuServiceInterceptorForTesting::OnBackgroundCleanup() {
  GetForwardingInterface()->OnBackgroundCleanup();
}
void GpuServiceInterceptorForTesting::OnBackgrounded() {
  GetForwardingInterface()->OnBackgrounded();
}
void GpuServiceInterceptorForTesting::OnForegrounded() {
  GetForwardingInterface()->OnForegrounded();
}
void GpuServiceInterceptorForTesting::Crash() {
  GetForwardingInterface()->Crash();
}
void GpuServiceInterceptorForTesting::Hang() {
  GetForwardingInterface()->Hang();
}
void GpuServiceInterceptorForTesting::ThrowJavaException() {
  GetForwardingInterface()->ThrowJavaException();
}
void GpuServiceInterceptorForTesting::Stop(StopCallback callback) {
  GetForwardingInterface()->Stop(std::move(callback));
}
GpuServiceAsyncWaiter::GpuServiceAsyncWaiter(
    GpuService* proxy) : proxy_(proxy) {}

GpuServiceAsyncWaiter::~GpuServiceAsyncWaiter() = default;

void GpuServiceAsyncWaiter::EstablishGpuChannel(
    int32_t client_id, uint64_t client_tracing_id, bool is_gpu_host, mojo::ScopedMessagePipeHandle* out_channel_handle) {
  base::RunLoop loop;
  proxy_->EstablishGpuChannel(std::move(client_id),std::move(client_tracing_id),std::move(is_gpu_host),
      base::BindOnce(
          [](base::RunLoop* loop,
             mojo::ScopedMessagePipeHandle* out_channel_handle
,
             mojo::ScopedMessagePipeHandle channel_handle) {*out_channel_handle = std::move(channel_handle);
            loop->Quit();
          },
          &loop,
          out_channel_handle));
  loop.Run();
}
void GpuServiceAsyncWaiter::CreateGpuMemoryBuffer(
    gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, int32_t client_id, ::gpu::SurfaceHandle surface_handle, gfx::GpuMemoryBufferHandle* out_buffer_handle) {
  base::RunLoop loop;
  proxy_->CreateGpuMemoryBuffer(std::move(id),std::move(size),std::move(format),std::move(usage),std::move(client_id),std::move(surface_handle),
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
void GpuServiceAsyncWaiter::GetVideoMemoryUsageStats(
    gpu::VideoMemoryUsageStats* out_stats) {
  base::RunLoop loop;
  proxy_->GetVideoMemoryUsageStats(
      base::BindOnce(
          [](base::RunLoop* loop,
             gpu::VideoMemoryUsageStats* out_stats
,
             const gpu::VideoMemoryUsageStats& stats) {*out_stats = std::move(stats);
            loop->Quit();
          },
          &loop,
          out_stats));
  loop.Run();
}
void GpuServiceAsyncWaiter::RequestCompleteGpuInfo(
    gpu::GPUInfo* out_gpu_info) {
  base::RunLoop loop;
  proxy_->RequestCompleteGpuInfo(
      base::BindOnce(
          [](base::RunLoop* loop,
             gpu::GPUInfo* out_gpu_info
,
             const gpu::GPUInfo& gpu_info) {*out_gpu_info = std::move(gpu_info);
            loop->Quit();
          },
          &loop,
          out_gpu_info));
  loop.Run();
}
void GpuServiceAsyncWaiter::GetGpuSupportedRuntimeVersion(
    gpu::GPUInfo* out_gpu_info) {
  base::RunLoop loop;
  proxy_->GetGpuSupportedRuntimeVersion(
      base::BindOnce(
          [](base::RunLoop* loop,
             gpu::GPUInfo* out_gpu_info
,
             const gpu::GPUInfo& gpu_info) {*out_gpu_info = std::move(gpu_info);
            loop->Quit();
          },
          &loop,
          out_gpu_info));
  loop.Run();
}
void GpuServiceAsyncWaiter::RequestHDRStatus(
    bool* out_hdr_enabled) {
  base::RunLoop loop;
  proxy_->RequestHDRStatus(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_hdr_enabled
,
             bool hdr_enabled) {*out_hdr_enabled = std::move(hdr_enabled);
            loop->Quit();
          },
          &loop,
          out_hdr_enabled));
  loop.Run();
}
void GpuServiceAsyncWaiter::DestroyingVideoSurface(
    int32_t surface_id) {
  base::RunLoop loop;
  proxy_->DestroyingVideoSurface(std::move(surface_id),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void GpuServiceAsyncWaiter::Stop(
    ) {
  base::RunLoop loop;
  proxy_->Stop(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif