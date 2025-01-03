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

#include "services/viz/privileged/interfaces/gl/gpu_host.mojom.h"

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

#include "services/viz/privileged/interfaces/gl/gpu_host.mojom-shared-message-ids.h"
#include "gpu/ipc/common/gpu_feature_info_struct_traits.h"
#include "gpu/ipc/common/gpu_info_struct_traits.h"
#include "gpu/ipc/common/surface_handle_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "services/viz/privileged/cpp/context_lost_reason_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace viz {
namespace mojom {
const char GpuHost::Name_[] = "viz.mojom.GpuHost";

GpuHostProxy::GpuHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void GpuHostProxy::DidInitialize(
    const gpu::GPUInfo& in_gpu_info, const gpu::GpuFeatureInfo& in_gpu_feature_info, const base::Optional<gpu::GPUInfo>& in_gpu_info_for_hardware_gpu, const base::Optional<gpu::GpuFeatureInfo>& in_gpu_feature_info_for_hardware_gpu) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuHost::DidInitialize");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuHost_DidInitialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuHost_DidInitialize_Params_Data::BufferWriter
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
      "null gpu_info in GpuHost.DidInitialize request");
  typename decltype(params->gpu_feature_info)::BaseType::BufferWriter
      gpu_feature_info_writer;
  mojo::internal::Serialize<::gpu::mojom::GpuFeatureInfoDataView>(
      in_gpu_feature_info, buffer, &gpu_feature_info_writer, &serialization_context);
  params->gpu_feature_info.Set(
      gpu_feature_info_writer.is_null() ? nullptr : gpu_feature_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->gpu_feature_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null gpu_feature_info in GpuHost.DidInitialize request");
  typename decltype(params->gpu_info_for_hardware_gpu)::BaseType::BufferWriter
      gpu_info_for_hardware_gpu_writer;
  mojo::internal::Serialize<::gpu::mojom::GpuInfoDataView>(
      in_gpu_info_for_hardware_gpu, buffer, &gpu_info_for_hardware_gpu_writer, &serialization_context);
  params->gpu_info_for_hardware_gpu.Set(
      gpu_info_for_hardware_gpu_writer.is_null() ? nullptr : gpu_info_for_hardware_gpu_writer.data());
  typename decltype(params->gpu_feature_info_for_hardware_gpu)::BaseType::BufferWriter
      gpu_feature_info_for_hardware_gpu_writer;
  mojo::internal::Serialize<::gpu::mojom::GpuFeatureInfoDataView>(
      in_gpu_feature_info_for_hardware_gpu, buffer, &gpu_feature_info_for_hardware_gpu_writer, &serialization_context);
  params->gpu_feature_info_for_hardware_gpu.Set(
      gpu_feature_info_for_hardware_gpu_writer.is_null() ? nullptr : gpu_feature_info_for_hardware_gpu_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuHostProxy::DidFailInitialize(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuHost::DidFailInitialize");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuHost_DidFailInitialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuHost_DidFailInitialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuHostProxy::DidCreateContextSuccessfully(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuHost::DidCreateContextSuccessfully");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuHost_DidCreateContextSuccessfully_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuHost_DidCreateContextSuccessfully_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuHostProxy::DidCreateOffscreenContext(
    const GURL& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuHost::DidCreateOffscreenContext");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuHost_DidCreateOffscreenContext_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuHost_DidCreateOffscreenContext_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in GpuHost.DidCreateOffscreenContext request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuHostProxy::DidDestroyOffscreenContext(
    const GURL& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuHost::DidDestroyOffscreenContext");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuHost_DidDestroyOffscreenContext_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuHost_DidDestroyOffscreenContext_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in GpuHost.DidDestroyOffscreenContext request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuHostProxy::DidDestroyChannel(
    int32_t in_client_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuHost::DidDestroyChannel");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuHost_DidDestroyChannel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuHost_DidDestroyChannel_Params_Data::BufferWriter
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

void GpuHostProxy::DidLoseContext(
    bool in_offscreen, gpu::error::ContextLostReason in_reason, const GURL& in_active_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuHost::DidLoseContext");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuHost_DidLoseContext_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuHost_DidLoseContext_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->offscreen = in_offscreen;
  mojo::internal::Serialize<::viz::mojom::ContextLostReason>(
      in_reason, &params->reason);
  typename decltype(params->active_url)::BaseType::BufferWriter
      active_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_active_url, buffer, &active_url_writer, &serialization_context);
  params->active_url.Set(
      active_url_writer.is_null() ? nullptr : active_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->active_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null active_url in GpuHost.DidLoseContext request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuHostProxy::SetChildSurface(
    ::gpu::SurfaceHandle in_parent, ::gpu::SurfaceHandle in_child) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuHost::SetChildSurface");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuHost_SetChildSurface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuHost_SetChildSurface_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->parent)::BaseType::BufferWriter
      parent_writer;
  mojo::internal::Serialize<::gpu::mojom::SurfaceHandleDataView>(
      in_parent, buffer, &parent_writer, &serialization_context);
  params->parent.Set(
      parent_writer.is_null() ? nullptr : parent_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->parent.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null parent in GpuHost.SetChildSurface request");
  typename decltype(params->child)::BaseType::BufferWriter
      child_writer;
  mojo::internal::Serialize<::gpu::mojom::SurfaceHandleDataView>(
      in_child, buffer, &child_writer, &serialization_context);
  params->child.Set(
      child_writer.is_null() ? nullptr : child_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->child.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null child in GpuHost.SetChildSurface request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuHostProxy::StoreShaderToDisk(
    int32_t in_client_id, const std::string& in_key, const std::string& in_shader) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuHost::StoreShaderToDisk");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuHost_StoreShaderToDisk_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuHost_StoreShaderToDisk_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->client_id = in_client_id;
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_key, buffer, &key_writer, &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in GpuHost.StoreShaderToDisk request");
  typename decltype(params->shader)::BaseType::BufferWriter
      shader_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_shader, buffer, &shader_writer, &serialization_context);
  params->shader.Set(
      shader_writer.is_null() ? nullptr : shader_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->shader.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null shader in GpuHost.StoreShaderToDisk request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuHostProxy::RecordLogMessage(
    int32_t in_severity, const std::string& in_header, const std::string& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::GpuHost::RecordLogMessage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuHost_RecordLogMessage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::GpuHost_RecordLogMessage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->severity = in_severity;
  typename decltype(params->header)::BaseType::BufferWriter
      header_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_header, buffer, &header_writer, &serialization_context);
  params->header.Set(
      header_writer.is_null() ? nullptr : header_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->header.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null header in GpuHost.RecordLogMessage request");
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in GpuHost.RecordLogMessage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool GpuHostStubDispatch::Accept(
    GpuHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kGpuHost_DidInitialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::DidInitialize",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuHost_DidInitialize_Params_Data* params =
          reinterpret_cast<internal::GpuHost_DidInitialize_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gpu::GPUInfo p_gpu_info{};
      gpu::GpuFeatureInfo p_gpu_feature_info{};
      base::Optional<gpu::GPUInfo> p_gpu_info_for_hardware_gpu{};
      base::Optional<gpu::GpuFeatureInfo> p_gpu_feature_info_for_hardware_gpu{};
      GpuHost_DidInitialize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadGpuInfo(&p_gpu_info))
        success = false;
      if (!input_data_view.ReadGpuFeatureInfo(&p_gpu_feature_info))
        success = false;
      if (!input_data_view.ReadGpuInfoForHardwareGpu(&p_gpu_info_for_hardware_gpu))
        success = false;
      if (!input_data_view.ReadGpuFeatureInfoForHardwareGpu(&p_gpu_feature_info_for_hardware_gpu))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuHost::DidInitialize deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidInitialize(
std::move(p_gpu_info), 
std::move(p_gpu_feature_info), 
std::move(p_gpu_info_for_hardware_gpu), 
std::move(p_gpu_feature_info_for_hardware_gpu));
      return true;
    }
    case internal::kGpuHost_DidFailInitialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::DidFailInitialize",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuHost_DidFailInitialize_Params_Data* params =
          reinterpret_cast<internal::GpuHost_DidFailInitialize_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GpuHost_DidFailInitialize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuHost::DidFailInitialize deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidFailInitialize();
      return true;
    }
    case internal::kGpuHost_DidCreateContextSuccessfully_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::DidCreateContextSuccessfully",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuHost_DidCreateContextSuccessfully_Params_Data* params =
          reinterpret_cast<internal::GpuHost_DidCreateContextSuccessfully_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GpuHost_DidCreateContextSuccessfully_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuHost::DidCreateContextSuccessfully deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidCreateContextSuccessfully();
      return true;
    }
    case internal::kGpuHost_DidCreateOffscreenContext_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::DidCreateOffscreenContext",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuHost_DidCreateOffscreenContext_Params_Data* params =
          reinterpret_cast<internal::GpuHost_DidCreateOffscreenContext_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      GpuHost_DidCreateOffscreenContext_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuHost::DidCreateOffscreenContext deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidCreateOffscreenContext(
std::move(p_url));
      return true;
    }
    case internal::kGpuHost_DidDestroyOffscreenContext_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::DidDestroyOffscreenContext",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuHost_DidDestroyOffscreenContext_Params_Data* params =
          reinterpret_cast<internal::GpuHost_DidDestroyOffscreenContext_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      GpuHost_DidDestroyOffscreenContext_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuHost::DidDestroyOffscreenContext deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidDestroyOffscreenContext(
std::move(p_url));
      return true;
    }
    case internal::kGpuHost_DidDestroyChannel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::DidDestroyChannel",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuHost_DidDestroyChannel_Params_Data* params =
          reinterpret_cast<internal::GpuHost_DidDestroyChannel_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_client_id{};
      GpuHost_DidDestroyChannel_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client_id = input_data_view.client_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuHost::DidDestroyChannel deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidDestroyChannel(
std::move(p_client_id));
      return true;
    }
    case internal::kGpuHost_DidLoseContext_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::DidLoseContext",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuHost_DidLoseContext_Params_Data* params =
          reinterpret_cast<internal::GpuHost_DidLoseContext_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_offscreen{};
      gpu::error::ContextLostReason p_reason{};
      GURL p_active_url{};
      GpuHost_DidLoseContext_ParamsDataView input_data_view(params, &serialization_context);
      
      p_offscreen = input_data_view.offscreen();
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!input_data_view.ReadActiveUrl(&p_active_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuHost::DidLoseContext deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DidLoseContext(
std::move(p_offscreen), 
std::move(p_reason), 
std::move(p_active_url));
      return true;
    }
    case internal::kGpuHost_SetChildSurface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::SetChildSurface",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuHost_SetChildSurface_Params_Data* params =
          reinterpret_cast<internal::GpuHost_SetChildSurface_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::gpu::SurfaceHandle p_parent{};
      ::gpu::SurfaceHandle p_child{};
      GpuHost_SetChildSurface_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParent(&p_parent))
        success = false;
      if (!input_data_view.ReadChild(&p_child))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuHost::SetChildSurface deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetChildSurface(
std::move(p_parent), 
std::move(p_child));
      return true;
    }
    case internal::kGpuHost_StoreShaderToDisk_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::StoreShaderToDisk",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuHost_StoreShaderToDisk_Params_Data* params =
          reinterpret_cast<internal::GpuHost_StoreShaderToDisk_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_client_id{};
      std::string p_key{};
      std::string p_shader{};
      GpuHost_StoreShaderToDisk_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client_id = input_data_view.client_id();
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadShader(&p_shader))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuHost::StoreShaderToDisk deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StoreShaderToDisk(
std::move(p_client_id), 
std::move(p_key), 
std::move(p_shader));
      return true;
    }
    case internal::kGpuHost_RecordLogMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::RecordLogMessage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuHost_RecordLogMessage_Params_Data* params =
          reinterpret_cast<internal::GpuHost_RecordLogMessage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_severity{};
      std::string p_header{};
      std::string p_message{};
      GpuHost_RecordLogMessage_ParamsDataView input_data_view(params, &serialization_context);
      
      p_severity = input_data_view.severity();
      if (!input_data_view.ReadHeader(&p_header))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "GpuHost::RecordLogMessage deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RecordLogMessage(
std::move(p_severity), 
std::move(p_header), 
std::move(p_message));
      return true;
    }
  }
  return false;
}

// static
bool GpuHostStubDispatch::AcceptWithResponder(
    GpuHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kGpuHost_DidInitialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::DidInitialize",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuHost_DidFailInitialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::DidFailInitialize",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuHost_DidCreateContextSuccessfully_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::DidCreateContextSuccessfully",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuHost_DidCreateOffscreenContext_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::DidCreateOffscreenContext",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuHost_DidDestroyOffscreenContext_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::DidDestroyOffscreenContext",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuHost_DidDestroyChannel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::DidDestroyChannel",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuHost_DidLoseContext_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::DidLoseContext",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuHost_SetChildSurface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::SetChildSurface",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuHost_StoreShaderToDisk_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::StoreShaderToDisk",
               "message", message->name());
#endif
      break;
    }
    case internal::kGpuHost_RecordLogMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::GpuHost::RecordLogMessage",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool GpuHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "GpuHost RequestValidator");

  switch (message->header()->name) {
    case internal::kGpuHost_DidInitialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuHost_DidInitialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuHost_DidFailInitialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuHost_DidFailInitialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuHost_DidCreateContextSuccessfully_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuHost_DidCreateContextSuccessfully_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuHost_DidCreateOffscreenContext_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuHost_DidCreateOffscreenContext_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuHost_DidDestroyOffscreenContext_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuHost_DidDestroyOffscreenContext_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuHost_DidDestroyChannel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuHost_DidDestroyChannel_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuHost_DidLoseContext_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuHost_DidLoseContext_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuHost_SetChildSurface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuHost_SetChildSurface_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuHost_StoreShaderToDisk_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuHost_StoreShaderToDisk_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuHost_RecordLogMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuHost_RecordLogMessage_Params_Data>(
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

void GpuHostInterceptorForTesting::DidInitialize(const gpu::GPUInfo& gpu_info, const gpu::GpuFeatureInfo& gpu_feature_info, const base::Optional<gpu::GPUInfo>& gpu_info_for_hardware_gpu, const base::Optional<gpu::GpuFeatureInfo>& gpu_feature_info_for_hardware_gpu) {
  GetForwardingInterface()->DidInitialize(std::move(gpu_info), std::move(gpu_feature_info), std::move(gpu_info_for_hardware_gpu), std::move(gpu_feature_info_for_hardware_gpu));
}
void GpuHostInterceptorForTesting::DidFailInitialize() {
  GetForwardingInterface()->DidFailInitialize();
}
void GpuHostInterceptorForTesting::DidCreateContextSuccessfully() {
  GetForwardingInterface()->DidCreateContextSuccessfully();
}
void GpuHostInterceptorForTesting::DidCreateOffscreenContext(const GURL& url) {
  GetForwardingInterface()->DidCreateOffscreenContext(std::move(url));
}
void GpuHostInterceptorForTesting::DidDestroyOffscreenContext(const GURL& url) {
  GetForwardingInterface()->DidDestroyOffscreenContext(std::move(url));
}
void GpuHostInterceptorForTesting::DidDestroyChannel(int32_t client_id) {
  GetForwardingInterface()->DidDestroyChannel(std::move(client_id));
}
void GpuHostInterceptorForTesting::DidLoseContext(bool offscreen, gpu::error::ContextLostReason reason, const GURL& active_url) {
  GetForwardingInterface()->DidLoseContext(std::move(offscreen), std::move(reason), std::move(active_url));
}
void GpuHostInterceptorForTesting::SetChildSurface(::gpu::SurfaceHandle parent, ::gpu::SurfaceHandle child) {
  GetForwardingInterface()->SetChildSurface(std::move(parent), std::move(child));
}
void GpuHostInterceptorForTesting::StoreShaderToDisk(int32_t client_id, const std::string& key, const std::string& shader) {
  GetForwardingInterface()->StoreShaderToDisk(std::move(client_id), std::move(key), std::move(shader));
}
void GpuHostInterceptorForTesting::RecordLogMessage(int32_t severity, const std::string& header, const std::string& message) {
  GetForwardingInterface()->RecordLogMessage(std::move(severity), std::move(header), std::move(message));
}
GpuHostAsyncWaiter::GpuHostAsyncWaiter(
    GpuHost* proxy) : proxy_(proxy) {}

GpuHostAsyncWaiter::~GpuHostAsyncWaiter() = default;


}  // namespace mojom
}  // namespace viz

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif