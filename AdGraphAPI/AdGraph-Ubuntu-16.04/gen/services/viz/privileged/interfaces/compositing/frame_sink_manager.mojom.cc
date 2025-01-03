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

#include "services/viz/privileged/interfaces/compositing/frame_sink_manager.mojom.h"

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

#include "services/viz/privileged/interfaces/compositing/frame_sink_manager.mojom-shared-message-ids.h"
#include "gpu/ipc/common/surface_handle_struct_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/privileged/interfaces/compositing/renderer_settings_struct_traits.h"
#include "services/viz/public/cpp/compositing/copy_output_request_struct_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_info_struct_traits.h"
#include "services/viz/public/cpp/hit_test/aggregated_hit_test_region_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
namespace viz {
namespace mojom {
RootCompositorFrameSinkParams::RootCompositorFrameSinkParams()
    : frame_sink_id(),
      widget(),
      gpu_compositing(true),
      renderer_settings(),
      compositor_frame_sink(),
      compositor_frame_sink_client(),
      display_private(),
      display_client(),
      external_begin_frame_controller(),
      external_begin_frame_controller_client() {}

RootCompositorFrameSinkParams::RootCompositorFrameSinkParams(
    const viz::FrameSinkId& frame_sink_id_in,
    ::gpu::SurfaceHandle widget_in,
    bool gpu_compositing_in,
    const viz::RendererSettings& renderer_settings_in,
    ::viz::mojom::CompositorFrameSinkAssociatedRequest compositor_frame_sink_in,
    ::viz::mojom::CompositorFrameSinkClientPtrInfo compositor_frame_sink_client_in,
    ::viz::mojom::DisplayPrivateAssociatedRequest display_private_in,
    ::viz::mojom::DisplayClientPtrInfo display_client_in,
    ::viz::mojom::ExternalBeginFrameControllerAssociatedRequest external_begin_frame_controller_in,
    ::viz::mojom::ExternalBeginFrameControllerClientPtrInfo external_begin_frame_controller_client_in)
    : frame_sink_id(std::move(frame_sink_id_in)),
      widget(std::move(widget_in)),
      gpu_compositing(std::move(gpu_compositing_in)),
      renderer_settings(std::move(renderer_settings_in)),
      compositor_frame_sink(std::move(compositor_frame_sink_in)),
      compositor_frame_sink_client(std::move(compositor_frame_sink_client_in)),
      display_private(std::move(display_private_in)),
      display_client(std::move(display_client_in)),
      external_begin_frame_controller(std::move(external_begin_frame_controller_in)),
      external_begin_frame_controller_client(std::move(external_begin_frame_controller_client_in)) {}

RootCompositorFrameSinkParams::~RootCompositorFrameSinkParams() = default;

bool RootCompositorFrameSinkParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char FrameSinkManager::Name_[] = "viz.mojom.FrameSinkManager";
bool FrameSinkManager::DestroyCompositorFrameSink(const viz::FrameSinkId& frame_sink_id) {
  NOTREACHED();
  return false;
}
class FrameSinkManager_DestroyCompositorFrameSink_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FrameSinkManager_DestroyCompositorFrameSink_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(FrameSinkManager_DestroyCompositorFrameSink_HandleSyncResponse);
};

class FrameSinkManager_DestroyCompositorFrameSink_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FrameSinkManager_DestroyCompositorFrameSink_ForwardToCallback(
      FrameSinkManager::DestroyCompositorFrameSinkCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FrameSinkManager::DestroyCompositorFrameSinkCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FrameSinkManager_DestroyCompositorFrameSink_ForwardToCallback);
};

FrameSinkManagerProxy::FrameSinkManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FrameSinkManagerProxy::RegisterFrameSinkId(
    const viz::FrameSinkId& in_frame_sink_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManager::RegisterFrameSinkId");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManager_RegisterFrameSinkId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManager_RegisterFrameSinkId_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in FrameSinkManager.RegisterFrameSinkId request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkManagerProxy::InvalidateFrameSinkId(
    const viz::FrameSinkId& in_frame_sink_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManager::InvalidateFrameSinkId");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManager_InvalidateFrameSinkId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManager_InvalidateFrameSinkId_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in FrameSinkManager.InvalidateFrameSinkId request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkManagerProxy::EnableSynchronizationReporting(
    const viz::FrameSinkId& in_frame_sink_id, const std::string& in_reporting_label) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManager::EnableSynchronizationReporting");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManager_EnableSynchronizationReporting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManager_EnableSynchronizationReporting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in FrameSinkManager.EnableSynchronizationReporting request");
  typename decltype(params->reporting_label)::BaseType::BufferWriter
      reporting_label_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_reporting_label, buffer, &reporting_label_writer, &serialization_context);
  params->reporting_label.Set(
      reporting_label_writer.is_null() ? nullptr : reporting_label_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->reporting_label.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null reporting_label in FrameSinkManager.EnableSynchronizationReporting request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkManagerProxy::SetFrameSinkDebugLabel(
    const viz::FrameSinkId& in_frame_sink_id, const std::string& in_debug_label) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManager::SetFrameSinkDebugLabel");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManager_SetFrameSinkDebugLabel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManager_SetFrameSinkDebugLabel_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in FrameSinkManager.SetFrameSinkDebugLabel request");
  typename decltype(params->debug_label)::BaseType::BufferWriter
      debug_label_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_debug_label, buffer, &debug_label_writer, &serialization_context);
  params->debug_label.Set(
      debug_label_writer.is_null() ? nullptr : debug_label_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->debug_label.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null debug_label in FrameSinkManager.SetFrameSinkDebugLabel request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkManagerProxy::CreateRootCompositorFrameSink(
    RootCompositorFrameSinkParamsPtr in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManager::CreateRootCompositorFrameSink");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManager_CreateRootCompositorFrameSink_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManager_CreateRootCompositorFrameSink_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::viz::mojom::RootCompositorFrameSinkParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in FrameSinkManager.CreateRootCompositorFrameSink request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkManagerProxy::CreateCompositorFrameSink(
    const viz::FrameSinkId& in_frame_sink_id, ::viz::mojom::CompositorFrameSinkRequest in_compositor_frame_sink, ::viz::mojom::CompositorFrameSinkClientPtr in_compositor_frame_sink_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManager::CreateCompositorFrameSink");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManager_CreateCompositorFrameSink_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManager_CreateCompositorFrameSink_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in FrameSinkManager.CreateCompositorFrameSink request");
  mojo::internal::Serialize<::viz::mojom::CompositorFrameSinkRequestDataView>(
      in_compositor_frame_sink, &params->compositor_frame_sink, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->compositor_frame_sink),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid compositor_frame_sink in FrameSinkManager.CreateCompositorFrameSink request");
  mojo::internal::Serialize<::viz::mojom::CompositorFrameSinkClientPtrDataView>(
      in_compositor_frame_sink_client, &params->compositor_frame_sink_client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->compositor_frame_sink_client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid compositor_frame_sink_client in FrameSinkManager.CreateCompositorFrameSink request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
bool FrameSinkManagerProxy::DestroyCompositorFrameSink(
    const viz::FrameSinkId& param_frame_sink_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManager::DestroyCompositorFrameSink");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManager_DestroyCompositorFrameSink_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManager_DestroyCompositorFrameSink_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      param_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in FrameSinkManager.DestroyCompositorFrameSink request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FrameSinkManager_DestroyCompositorFrameSink_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FrameSinkManagerProxy::DestroyCompositorFrameSink(
    const viz::FrameSinkId& in_frame_sink_id, DestroyCompositorFrameSinkCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManager::DestroyCompositorFrameSink");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManager_DestroyCompositorFrameSink_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManager_DestroyCompositorFrameSink_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in FrameSinkManager.DestroyCompositorFrameSink request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FrameSinkManager_DestroyCompositorFrameSink_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FrameSinkManagerProxy::RegisterFrameSinkHierarchy(
    const viz::FrameSinkId& in_parent_frame_sink_id, const viz::FrameSinkId& in_child_frame_sink_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManager::RegisterFrameSinkHierarchy");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManager_RegisterFrameSinkHierarchy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->parent_frame_sink_id)::BaseType::BufferWriter
      parent_frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_parent_frame_sink_id, buffer, &parent_frame_sink_id_writer, &serialization_context);
  params->parent_frame_sink_id.Set(
      parent_frame_sink_id_writer.is_null() ? nullptr : parent_frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->parent_frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null parent_frame_sink_id in FrameSinkManager.RegisterFrameSinkHierarchy request");
  typename decltype(params->child_frame_sink_id)::BaseType::BufferWriter
      child_frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_child_frame_sink_id, buffer, &child_frame_sink_id_writer, &serialization_context);
  params->child_frame_sink_id.Set(
      child_frame_sink_id_writer.is_null() ? nullptr : child_frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->child_frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null child_frame_sink_id in FrameSinkManager.RegisterFrameSinkHierarchy request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkManagerProxy::UnregisterFrameSinkHierarchy(
    const viz::FrameSinkId& in_parent_frame_sink_id, const viz::FrameSinkId& in_child_frame_sink_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManager::UnregisterFrameSinkHierarchy");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManager_UnregisterFrameSinkHierarchy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->parent_frame_sink_id)::BaseType::BufferWriter
      parent_frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_parent_frame_sink_id, buffer, &parent_frame_sink_id_writer, &serialization_context);
  params->parent_frame_sink_id.Set(
      parent_frame_sink_id_writer.is_null() ? nullptr : parent_frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->parent_frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null parent_frame_sink_id in FrameSinkManager.UnregisterFrameSinkHierarchy request");
  typename decltype(params->child_frame_sink_id)::BaseType::BufferWriter
      child_frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_child_frame_sink_id, buffer, &child_frame_sink_id_writer, &serialization_context);
  params->child_frame_sink_id.Set(
      child_frame_sink_id_writer.is_null() ? nullptr : child_frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->child_frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null child_frame_sink_id in FrameSinkManager.UnregisterFrameSinkHierarchy request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkManagerProxy::AssignTemporaryReference(
    const viz::SurfaceId& in_surface_id, const viz::FrameSinkId& in_owner) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManager::AssignTemporaryReference");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManager_AssignTemporaryReference_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManager_AssignTemporaryReference_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->surface_id)::BaseType::BufferWriter
      surface_id_writer;
  mojo::internal::Serialize<::viz::mojom::SurfaceIdDataView>(
      in_surface_id, buffer, &surface_id_writer, &serialization_context);
  params->surface_id.Set(
      surface_id_writer.is_null() ? nullptr : surface_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->surface_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null surface_id in FrameSinkManager.AssignTemporaryReference request");
  typename decltype(params->owner)::BaseType::BufferWriter
      owner_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_owner, buffer, &owner_writer, &serialization_context);
  params->owner.Set(
      owner_writer.is_null() ? nullptr : owner_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->owner.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null owner in FrameSinkManager.AssignTemporaryReference request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkManagerProxy::DropTemporaryReference(
    const viz::SurfaceId& in_surface_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManager::DropTemporaryReference");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManager_DropTemporaryReference_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManager_DropTemporaryReference_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->surface_id)::BaseType::BufferWriter
      surface_id_writer;
  mojo::internal::Serialize<::viz::mojom::SurfaceIdDataView>(
      in_surface_id, buffer, &surface_id_writer, &serialization_context);
  params->surface_id.Set(
      surface_id_writer.is_null() ? nullptr : surface_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->surface_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null surface_id in FrameSinkManager.DropTemporaryReference request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkManagerProxy::AddVideoDetectorObserver(
    ::viz::mojom::VideoDetectorObserverPtr in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManager::AddVideoDetectorObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManager_AddVideoDetectorObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManager_AddVideoDetectorObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::viz::mojom::VideoDetectorObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in FrameSinkManager.AddVideoDetectorObserver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkManagerProxy::CreateVideoCapturer(
    ::viz::mojom::FrameSinkVideoCapturerRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManager::CreateVideoCapturer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManager_CreateVideoCapturer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManager_CreateVideoCapturer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::viz::mojom::FrameSinkVideoCapturerRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in FrameSinkManager.CreateVideoCapturer request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkManagerProxy::EvictSurfaces(
    const std::vector<viz::SurfaceId>& in_surface_ids) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManager::EvictSurfaces");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManager_EvictSurfaces_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManager_EvictSurfaces_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->surface_ids)::BaseType::BufferWriter
      surface_ids_writer;
  const mojo::internal::ContainerValidateParams surface_ids_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>>(
      in_surface_ids, buffer, &surface_ids_writer, &surface_ids_validate_params,
      &serialization_context);
  params->surface_ids.Set(
      surface_ids_writer.is_null() ? nullptr : surface_ids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->surface_ids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null surface_ids in FrameSinkManager.EvictSurfaces request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkManagerProxy::RequestCopyOfOutput(
    const viz::SurfaceId& in_surface_id, std::unique_ptr<viz::CopyOutputRequest> in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManager::RequestCopyOfOutput");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManager_RequestCopyOfOutput_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManager_RequestCopyOfOutput_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->surface_id)::BaseType::BufferWriter
      surface_id_writer;
  mojo::internal::Serialize<::viz::mojom::SurfaceIdDataView>(
      in_surface_id, buffer, &surface_id_writer, &serialization_context);
  params->surface_id.Set(
      surface_id_writer.is_null() ? nullptr : surface_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->surface_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null surface_id in FrameSinkManager.RequestCopyOfOutput request");
  typename decltype(params->request)::BaseType::BufferWriter
      request_writer;
  mojo::internal::Serialize<::viz::mojom::CopyOutputRequestDataView>(
      in_request, buffer, &request_writer, &serialization_context);
  params->request.Set(
      request_writer.is_null() ? nullptr : request_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in FrameSinkManager.RequestCopyOfOutput request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class FrameSinkManager_DestroyCompositorFrameSink_ProxyToResponder {
 public:
  static FrameSinkManager::DestroyCompositorFrameSinkCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FrameSinkManager_DestroyCompositorFrameSink_ProxyToResponder> proxy(
        new FrameSinkManager_DestroyCompositorFrameSink_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FrameSinkManager_DestroyCompositorFrameSink_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FrameSinkManager_DestroyCompositorFrameSink_ProxyToResponder() {
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
  FrameSinkManager_DestroyCompositorFrameSink_ProxyToResponder(
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
        << "FrameSinkManager::DestroyCompositorFrameSinkCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(FrameSinkManager_DestroyCompositorFrameSink_ProxyToResponder);
};

bool FrameSinkManager_DestroyCompositorFrameSink_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "viz::mojom::FrameSinkManager::DestroyCompositorFrameSinkCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  FrameSinkManager_DestroyCompositorFrameSink_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FrameSinkManager::DestroyCompositorFrameSink response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void FrameSinkManager_DestroyCompositorFrameSink_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManager_DestroyCompositorFrameSink_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::DestroyCompositorFrameSinkCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FrameSinkManager_DestroyCompositorFrameSink_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data* params =
      reinterpret_cast<internal::FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  FrameSinkManager_DestroyCompositorFrameSink_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FrameSinkManager::DestroyCompositorFrameSink response deserializer");
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool FrameSinkManagerStubDispatch::Accept(
    FrameSinkManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFrameSinkManager_RegisterFrameSinkId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::RegisterFrameSinkId",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManager_RegisterFrameSinkId_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManager_RegisterFrameSinkId_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::FrameSinkId p_frame_sink_id{};
      FrameSinkManager_RegisterFrameSinkId_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManager::RegisterFrameSinkId deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RegisterFrameSinkId(
std::move(p_frame_sink_id));
      return true;
    }
    case internal::kFrameSinkManager_InvalidateFrameSinkId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::InvalidateFrameSinkId",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManager_InvalidateFrameSinkId_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManager_InvalidateFrameSinkId_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::FrameSinkId p_frame_sink_id{};
      FrameSinkManager_InvalidateFrameSinkId_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManager::InvalidateFrameSinkId deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->InvalidateFrameSinkId(
std::move(p_frame_sink_id));
      return true;
    }
    case internal::kFrameSinkManager_EnableSynchronizationReporting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::EnableSynchronizationReporting",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManager_EnableSynchronizationReporting_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManager_EnableSynchronizationReporting_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::FrameSinkId p_frame_sink_id{};
      std::string p_reporting_label{};
      FrameSinkManager_EnableSynchronizationReporting_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      if (!input_data_view.ReadReportingLabel(&p_reporting_label))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManager::EnableSynchronizationReporting deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->EnableSynchronizationReporting(
std::move(p_frame_sink_id), 
std::move(p_reporting_label));
      return true;
    }
    case internal::kFrameSinkManager_SetFrameSinkDebugLabel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::SetFrameSinkDebugLabel",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManager_SetFrameSinkDebugLabel_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManager_SetFrameSinkDebugLabel_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::FrameSinkId p_frame_sink_id{};
      std::string p_debug_label{};
      FrameSinkManager_SetFrameSinkDebugLabel_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      if (!input_data_view.ReadDebugLabel(&p_debug_label))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManager::SetFrameSinkDebugLabel deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetFrameSinkDebugLabel(
std::move(p_frame_sink_id), 
std::move(p_debug_label));
      return true;
    }
    case internal::kFrameSinkManager_CreateRootCompositorFrameSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::CreateRootCompositorFrameSink",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManager_CreateRootCompositorFrameSink_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManager_CreateRootCompositorFrameSink_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RootCompositorFrameSinkParamsPtr p_params{};
      FrameSinkManager_CreateRootCompositorFrameSink_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManager::CreateRootCompositorFrameSink deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateRootCompositorFrameSink(
std::move(p_params));
      return true;
    }
    case internal::kFrameSinkManager_CreateCompositorFrameSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::CreateCompositorFrameSink",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManager_CreateCompositorFrameSink_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManager_CreateCompositorFrameSink_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::FrameSinkId p_frame_sink_id{};
      ::viz::mojom::CompositorFrameSinkRequest p_compositor_frame_sink{};
      ::viz::mojom::CompositorFrameSinkClientPtr p_compositor_frame_sink_client{};
      FrameSinkManager_CreateCompositorFrameSink_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      p_compositor_frame_sink =
          input_data_view.TakeCompositorFrameSink<decltype(p_compositor_frame_sink)>();
      p_compositor_frame_sink_client =
          input_data_view.TakeCompositorFrameSinkClient<decltype(p_compositor_frame_sink_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManager::CreateCompositorFrameSink deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateCompositorFrameSink(
std::move(p_frame_sink_id), 
std::move(p_compositor_frame_sink), 
std::move(p_compositor_frame_sink_client));
      return true;
    }
    case internal::kFrameSinkManager_DestroyCompositorFrameSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::DestroyCompositorFrameSink",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkManager_RegisterFrameSinkHierarchy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::RegisterFrameSinkHierarchy",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::FrameSinkId p_parent_frame_sink_id{};
      viz::FrameSinkId p_child_frame_sink_id{};
      FrameSinkManager_RegisterFrameSinkHierarchy_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParentFrameSinkId(&p_parent_frame_sink_id))
        success = false;
      if (!input_data_view.ReadChildFrameSinkId(&p_child_frame_sink_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManager::RegisterFrameSinkHierarchy deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RegisterFrameSinkHierarchy(
std::move(p_parent_frame_sink_id), 
std::move(p_child_frame_sink_id));
      return true;
    }
    case internal::kFrameSinkManager_UnregisterFrameSinkHierarchy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::UnregisterFrameSinkHierarchy",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::FrameSinkId p_parent_frame_sink_id{};
      viz::FrameSinkId p_child_frame_sink_id{};
      FrameSinkManager_UnregisterFrameSinkHierarchy_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParentFrameSinkId(&p_parent_frame_sink_id))
        success = false;
      if (!input_data_view.ReadChildFrameSinkId(&p_child_frame_sink_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManager::UnregisterFrameSinkHierarchy deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UnregisterFrameSinkHierarchy(
std::move(p_parent_frame_sink_id), 
std::move(p_child_frame_sink_id));
      return true;
    }
    case internal::kFrameSinkManager_AssignTemporaryReference_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::AssignTemporaryReference",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManager_AssignTemporaryReference_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManager_AssignTemporaryReference_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::SurfaceId p_surface_id{};
      viz::FrameSinkId p_owner{};
      FrameSinkManager_AssignTemporaryReference_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSurfaceId(&p_surface_id))
        success = false;
      if (!input_data_view.ReadOwner(&p_owner))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManager::AssignTemporaryReference deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AssignTemporaryReference(
std::move(p_surface_id), 
std::move(p_owner));
      return true;
    }
    case internal::kFrameSinkManager_DropTemporaryReference_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::DropTemporaryReference",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManager_DropTemporaryReference_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManager_DropTemporaryReference_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::SurfaceId p_surface_id{};
      FrameSinkManager_DropTemporaryReference_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSurfaceId(&p_surface_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManager::DropTemporaryReference deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DropTemporaryReference(
std::move(p_surface_id));
      return true;
    }
    case internal::kFrameSinkManager_AddVideoDetectorObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::AddVideoDetectorObserver",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManager_AddVideoDetectorObserver_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManager_AddVideoDetectorObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::viz::mojom::VideoDetectorObserverPtr p_observer{};
      FrameSinkManager_AddVideoDetectorObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManager::AddVideoDetectorObserver deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddVideoDetectorObserver(
std::move(p_observer));
      return true;
    }
    case internal::kFrameSinkManager_CreateVideoCapturer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::CreateVideoCapturer",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManager_CreateVideoCapturer_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManager_CreateVideoCapturer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::viz::mojom::FrameSinkVideoCapturerRequest p_request{};
      FrameSinkManager_CreateVideoCapturer_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManager::CreateVideoCapturer deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateVideoCapturer(
std::move(p_request));
      return true;
    }
    case internal::kFrameSinkManager_EvictSurfaces_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::EvictSurfaces",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManager_EvictSurfaces_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManager_EvictSurfaces_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<viz::SurfaceId> p_surface_ids{};
      FrameSinkManager_EvictSurfaces_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSurfaceIds(&p_surface_ids))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManager::EvictSurfaces deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->EvictSurfaces(
std::move(p_surface_ids));
      return true;
    }
    case internal::kFrameSinkManager_RequestCopyOfOutput_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::RequestCopyOfOutput",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManager_RequestCopyOfOutput_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManager_RequestCopyOfOutput_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::SurfaceId p_surface_id{};
      std::unique_ptr<viz::CopyOutputRequest> p_request{};
      FrameSinkManager_RequestCopyOfOutput_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSurfaceId(&p_surface_id))
        success = false;
      if (!input_data_view.ReadRequest(&p_request))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManager::RequestCopyOfOutput deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestCopyOfOutput(
std::move(p_surface_id), 
std::move(p_request));
      return true;
    }
  }
  return false;
}

// static
bool FrameSinkManagerStubDispatch::AcceptWithResponder(
    FrameSinkManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFrameSinkManager_RegisterFrameSinkId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::RegisterFrameSinkId",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkManager_InvalidateFrameSinkId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::InvalidateFrameSinkId",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkManager_EnableSynchronizationReporting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::EnableSynchronizationReporting",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkManager_SetFrameSinkDebugLabel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::SetFrameSinkDebugLabel",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkManager_CreateRootCompositorFrameSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::CreateRootCompositorFrameSink",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkManager_CreateCompositorFrameSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::CreateCompositorFrameSink",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkManager_DestroyCompositorFrameSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::DestroyCompositorFrameSink",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::FrameSinkManager_DestroyCompositorFrameSink_Params_Data* params =
          reinterpret_cast<
              internal::FrameSinkManager_DestroyCompositorFrameSink_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::FrameSinkId p_frame_sink_id{};
      FrameSinkManager_DestroyCompositorFrameSink_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManager::DestroyCompositorFrameSink deserializer");
        return false;
      }
      FrameSinkManager::DestroyCompositorFrameSinkCallback callback =
          FrameSinkManager_DestroyCompositorFrameSink_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DestroyCompositorFrameSink(
std::move(p_frame_sink_id), std::move(callback));
      return true;
    }
    case internal::kFrameSinkManager_RegisterFrameSinkHierarchy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::RegisterFrameSinkHierarchy",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkManager_UnregisterFrameSinkHierarchy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::UnregisterFrameSinkHierarchy",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkManager_AssignTemporaryReference_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::AssignTemporaryReference",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkManager_DropTemporaryReference_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::DropTemporaryReference",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkManager_AddVideoDetectorObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::AddVideoDetectorObserver",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkManager_CreateVideoCapturer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::CreateVideoCapturer",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkManager_EvictSurfaces_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::EvictSurfaces",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkManager_RequestCopyOfOutput_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManager::RequestCopyOfOutput",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool FrameSinkManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameSinkManager RequestValidator");

  switch (message->header()->name) {
    case internal::kFrameSinkManager_RegisterFrameSinkId_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManager_RegisterFrameSinkId_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkManager_InvalidateFrameSinkId_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManager_InvalidateFrameSinkId_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkManager_EnableSynchronizationReporting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManager_EnableSynchronizationReporting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkManager_SetFrameSinkDebugLabel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManager_SetFrameSinkDebugLabel_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkManager_CreateRootCompositorFrameSink_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManager_CreateRootCompositorFrameSink_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkManager_CreateCompositorFrameSink_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManager_CreateCompositorFrameSink_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkManager_DestroyCompositorFrameSink_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManager_DestroyCompositorFrameSink_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkManager_RegisterFrameSinkHierarchy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManager_RegisterFrameSinkHierarchy_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkManager_UnregisterFrameSinkHierarchy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManager_UnregisterFrameSinkHierarchy_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkManager_AssignTemporaryReference_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManager_AssignTemporaryReference_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkManager_DropTemporaryReference_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManager_DropTemporaryReference_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkManager_AddVideoDetectorObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManager_AddVideoDetectorObserver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkManager_CreateVideoCapturer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManager_CreateVideoCapturer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkManager_EvictSurfaces_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManager_EvictSurfaces_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkManager_RequestCopyOfOutput_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManager_RequestCopyOfOutput_Params_Data>(
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

bool FrameSinkManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameSinkManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFrameSinkManager_DestroyCompositorFrameSink_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManager_DestroyCompositorFrameSink_ResponseParams_Data>(
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
void FrameSinkManagerInterceptorForTesting::RegisterFrameSinkId(const viz::FrameSinkId& frame_sink_id) {
  GetForwardingInterface()->RegisterFrameSinkId(std::move(frame_sink_id));
}
void FrameSinkManagerInterceptorForTesting::InvalidateFrameSinkId(const viz::FrameSinkId& frame_sink_id) {
  GetForwardingInterface()->InvalidateFrameSinkId(std::move(frame_sink_id));
}
void FrameSinkManagerInterceptorForTesting::EnableSynchronizationReporting(const viz::FrameSinkId& frame_sink_id, const std::string& reporting_label) {
  GetForwardingInterface()->EnableSynchronizationReporting(std::move(frame_sink_id), std::move(reporting_label));
}
void FrameSinkManagerInterceptorForTesting::SetFrameSinkDebugLabel(const viz::FrameSinkId& frame_sink_id, const std::string& debug_label) {
  GetForwardingInterface()->SetFrameSinkDebugLabel(std::move(frame_sink_id), std::move(debug_label));
}
void FrameSinkManagerInterceptorForTesting::CreateRootCompositorFrameSink(RootCompositorFrameSinkParamsPtr params) {
  GetForwardingInterface()->CreateRootCompositorFrameSink(std::move(params));
}
void FrameSinkManagerInterceptorForTesting::CreateCompositorFrameSink(const viz::FrameSinkId& frame_sink_id, ::viz::mojom::CompositorFrameSinkRequest compositor_frame_sink, ::viz::mojom::CompositorFrameSinkClientPtr compositor_frame_sink_client) {
  GetForwardingInterface()->CreateCompositorFrameSink(std::move(frame_sink_id), std::move(compositor_frame_sink), std::move(compositor_frame_sink_client));
}
void FrameSinkManagerInterceptorForTesting::DestroyCompositorFrameSink(const viz::FrameSinkId& frame_sink_id, DestroyCompositorFrameSinkCallback callback) {
  GetForwardingInterface()->DestroyCompositorFrameSink(std::move(frame_sink_id), std::move(callback));
}
void FrameSinkManagerInterceptorForTesting::RegisterFrameSinkHierarchy(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& child_frame_sink_id) {
  GetForwardingInterface()->RegisterFrameSinkHierarchy(std::move(parent_frame_sink_id), std::move(child_frame_sink_id));
}
void FrameSinkManagerInterceptorForTesting::UnregisterFrameSinkHierarchy(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& child_frame_sink_id) {
  GetForwardingInterface()->UnregisterFrameSinkHierarchy(std::move(parent_frame_sink_id), std::move(child_frame_sink_id));
}
void FrameSinkManagerInterceptorForTesting::AssignTemporaryReference(const viz::SurfaceId& surface_id, const viz::FrameSinkId& owner) {
  GetForwardingInterface()->AssignTemporaryReference(std::move(surface_id), std::move(owner));
}
void FrameSinkManagerInterceptorForTesting::DropTemporaryReference(const viz::SurfaceId& surface_id) {
  GetForwardingInterface()->DropTemporaryReference(std::move(surface_id));
}
void FrameSinkManagerInterceptorForTesting::AddVideoDetectorObserver(::viz::mojom::VideoDetectorObserverPtr observer) {
  GetForwardingInterface()->AddVideoDetectorObserver(std::move(observer));
}
void FrameSinkManagerInterceptorForTesting::CreateVideoCapturer(::viz::mojom::FrameSinkVideoCapturerRequest request) {
  GetForwardingInterface()->CreateVideoCapturer(std::move(request));
}
void FrameSinkManagerInterceptorForTesting::EvictSurfaces(const std::vector<viz::SurfaceId>& surface_ids) {
  GetForwardingInterface()->EvictSurfaces(std::move(surface_ids));
}
void FrameSinkManagerInterceptorForTesting::RequestCopyOfOutput(const viz::SurfaceId& surface_id, std::unique_ptr<viz::CopyOutputRequest> request) {
  GetForwardingInterface()->RequestCopyOfOutput(std::move(surface_id), std::move(request));
}
FrameSinkManagerAsyncWaiter::FrameSinkManagerAsyncWaiter(
    FrameSinkManager* proxy) : proxy_(proxy) {}

FrameSinkManagerAsyncWaiter::~FrameSinkManagerAsyncWaiter() = default;

void FrameSinkManagerAsyncWaiter::DestroyCompositorFrameSink(
    const viz::FrameSinkId& frame_sink_id) {
  base::RunLoop loop;
  proxy_->DestroyCompositorFrameSink(std::move(frame_sink_id),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

const char FrameSinkManagerClient::Name_[] = "viz.mojom.FrameSinkManagerClient";

FrameSinkManagerClientProxy::FrameSinkManagerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FrameSinkManagerClientProxy::OnSurfaceCreated(
    const viz::SurfaceId& in_surface_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManagerClient::OnSurfaceCreated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManagerClient_OnSurfaceCreated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManagerClient_OnSurfaceCreated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->surface_id)::BaseType::BufferWriter
      surface_id_writer;
  mojo::internal::Serialize<::viz::mojom::SurfaceIdDataView>(
      in_surface_id, buffer, &surface_id_writer, &serialization_context);
  params->surface_id.Set(
      surface_id_writer.is_null() ? nullptr : surface_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->surface_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null surface_id in FrameSinkManagerClient.OnSurfaceCreated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkManagerClientProxy::OnFirstSurfaceActivation(
    const viz::SurfaceInfo& in_surface_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManagerClient::OnFirstSurfaceActivation");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManagerClient_OnFirstSurfaceActivation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->surface_info)::BaseType::BufferWriter
      surface_info_writer;
  mojo::internal::Serialize<::viz::mojom::SurfaceInfoDataView>(
      in_surface_info, buffer, &surface_info_writer, &serialization_context);
  params->surface_info.Set(
      surface_info_writer.is_null() ? nullptr : surface_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->surface_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null surface_info in FrameSinkManagerClient.OnFirstSurfaceActivation request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkManagerClientProxy::OnAggregatedHitTestRegionListUpdated(
    const viz::FrameSinkId& in_frame_sink_id, const std::vector<viz::AggregatedHitTestRegion>& in_hit_test_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManagerClient::OnAggregatedHitTestRegionListUpdated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in FrameSinkManagerClient.OnAggregatedHitTestRegionListUpdated request");
  typename decltype(params->hit_test_data)::BaseType::BufferWriter
      hit_test_data_writer;
  const mojo::internal::ContainerValidateParams hit_test_data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::AggregatedHitTestRegionDataView>>(
      in_hit_test_data, buffer, &hit_test_data_writer, &hit_test_data_validate_params,
      &serialization_context);
  params->hit_test_data.Set(
      hit_test_data_writer.is_null() ? nullptr : hit_test_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->hit_test_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null hit_test_data in FrameSinkManagerClient.OnAggregatedHitTestRegionListUpdated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameSinkManagerClientProxy::OnFrameTokenChanged(
    const viz::FrameSinkId& in_frame_sink_id, uint32_t in_frame_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "viz::mojom::FrameSinkManagerClient::OnFrameTokenChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameSinkManagerClient_OnFrameTokenChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::FrameSinkManagerClient_OnFrameTokenChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in FrameSinkManagerClient.OnFrameTokenChanged request");
  params->frame_token = in_frame_token;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool FrameSinkManagerClientStubDispatch::Accept(
    FrameSinkManagerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFrameSinkManagerClient_OnSurfaceCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManagerClient::OnSurfaceCreated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManagerClient_OnSurfaceCreated_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManagerClient_OnSurfaceCreated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::SurfaceId p_surface_id{};
      FrameSinkManagerClient_OnSurfaceCreated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSurfaceId(&p_surface_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManagerClient::OnSurfaceCreated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnSurfaceCreated(
std::move(p_surface_id));
      return true;
    }
    case internal::kFrameSinkManagerClient_OnFirstSurfaceActivation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManagerClient::OnFirstSurfaceActivation",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::SurfaceInfo p_surface_info{};
      FrameSinkManagerClient_OnFirstSurfaceActivation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSurfaceInfo(&p_surface_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManagerClient::OnFirstSurfaceActivation deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnFirstSurfaceActivation(
std::move(p_surface_info));
      return true;
    }
    case internal::kFrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManagerClient::OnAggregatedHitTestRegionListUpdated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::FrameSinkId p_frame_sink_id{};
      std::vector<viz::AggregatedHitTestRegion> p_hit_test_data{};
      FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      if (!input_data_view.ReadHitTestData(&p_hit_test_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManagerClient::OnAggregatedHitTestRegionListUpdated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnAggregatedHitTestRegionListUpdated(
std::move(p_frame_sink_id), 
std::move(p_hit_test_data));
      return true;
    }
    case internal::kFrameSinkManagerClient_OnFrameTokenChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManagerClient::OnFrameTokenChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameSinkManagerClient_OnFrameTokenChanged_Params_Data* params =
          reinterpret_cast<internal::FrameSinkManagerClient_OnFrameTokenChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::FrameSinkId p_frame_sink_id{};
      uint32_t p_frame_token{};
      FrameSinkManagerClient_OnFrameTokenChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      p_frame_token = input_data_view.frame_token();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FrameSinkManagerClient::OnFrameTokenChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnFrameTokenChanged(
std::move(p_frame_sink_id), 
std::move(p_frame_token));
      return true;
    }
  }
  return false;
}

// static
bool FrameSinkManagerClientStubDispatch::AcceptWithResponder(
    FrameSinkManagerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFrameSinkManagerClient_OnSurfaceCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManagerClient::OnSurfaceCreated",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkManagerClient_OnFirstSurfaceActivation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManagerClient::OnFirstSurfaceActivation",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManagerClient::OnAggregatedHitTestRegionListUpdated",
               "message", message->name());
#endif
      break;
    }
    case internal::kFrameSinkManagerClient_OnFrameTokenChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)viz::mojom::FrameSinkManagerClient::OnFrameTokenChanged",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool FrameSinkManagerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameSinkManagerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kFrameSinkManagerClient_OnSurfaceCreated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManagerClient_OnSurfaceCreated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkManagerClient_OnFirstSurfaceActivation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManagerClient_OnFirstSurfaceActivation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManagerClient_OnAggregatedHitTestRegionListUpdated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameSinkManagerClient_OnFrameTokenChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameSinkManagerClient_OnFrameTokenChanged_Params_Data>(
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

void FrameSinkManagerClientInterceptorForTesting::OnSurfaceCreated(const viz::SurfaceId& surface_id) {
  GetForwardingInterface()->OnSurfaceCreated(std::move(surface_id));
}
void FrameSinkManagerClientInterceptorForTesting::OnFirstSurfaceActivation(const viz::SurfaceInfo& surface_info) {
  GetForwardingInterface()->OnFirstSurfaceActivation(std::move(surface_info));
}
void FrameSinkManagerClientInterceptorForTesting::OnAggregatedHitTestRegionListUpdated(const viz::FrameSinkId& frame_sink_id, const std::vector<viz::AggregatedHitTestRegion>& hit_test_data) {
  GetForwardingInterface()->OnAggregatedHitTestRegionListUpdated(std::move(frame_sink_id), std::move(hit_test_data));
}
void FrameSinkManagerClientInterceptorForTesting::OnFrameTokenChanged(const viz::FrameSinkId& frame_sink_id, uint32_t frame_token) {
  GetForwardingInterface()->OnFrameTokenChanged(std::move(frame_sink_id), std::move(frame_token));
}
FrameSinkManagerClientAsyncWaiter::FrameSinkManagerClientAsyncWaiter(
    FrameSinkManagerClient* proxy) : proxy_(proxy) {}

FrameSinkManagerClientAsyncWaiter::~FrameSinkManagerClientAsyncWaiter() = default;


}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::RootCompositorFrameSinkParams::DataView, ::viz::mojom::RootCompositorFrameSinkParamsPtr>::Read(
    ::viz::mojom::RootCompositorFrameSinkParams::DataView input,
    ::viz::mojom::RootCompositorFrameSinkParamsPtr* output) {
  bool success = true;
  ::viz::mojom::RootCompositorFrameSinkParamsPtr result(::viz::mojom::RootCompositorFrameSinkParams::New());
  
      if (!input.ReadFrameSinkId(&result->frame_sink_id))
        success = false;
      if (!input.ReadWidget(&result->widget))
        success = false;
      result->gpu_compositing = input.gpu_compositing();
      if (!input.ReadRendererSettings(&result->renderer_settings))
        success = false;
      result->compositor_frame_sink =
          input.TakeCompositorFrameSink<decltype(result->compositor_frame_sink)>();
      result->compositor_frame_sink_client =
          input.TakeCompositorFrameSinkClient<decltype(result->compositor_frame_sink_client)>();
      result->display_private =
          input.TakeDisplayPrivate<decltype(result->display_private)>();
      result->display_client =
          input.TakeDisplayClient<decltype(result->display_client)>();
      result->external_begin_frame_controller =
          input.TakeExternalBeginFrameController<decltype(result->external_begin_frame_controller)>();
      result->external_begin_frame_controller_client =
          input.TakeExternalBeginFrameControllerClient<decltype(result->external_begin_frame_controller_client)>();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif