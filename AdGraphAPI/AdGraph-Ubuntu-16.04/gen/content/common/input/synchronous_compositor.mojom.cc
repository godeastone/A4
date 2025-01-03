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

#include "content/common/input/synchronous_compositor.mojom.h"

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

#include "content/common/input/synchronous_compositor.mojom-shared-message-ids.h"
#include "content/common/input/sync_compositor_messages.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/begin_frame_args_struct_traits.h"
#include "services/viz/public/cpp/compositing/compositor_frame_metadata_struct_traits.h"
#include "services/viz/public/cpp/compositing/compositor_frame_struct_traits.h"
#include "services/viz/public/cpp/compositing/copy_output_request_struct_traits.h"
#include "services/viz/public/cpp/compositing/filter_operation_struct_traits.h"
#include "services/viz/public/cpp/compositing/filter_operations_struct_traits.h"
#include "services/viz/public/cpp/compositing/frame_deadline_struct_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/paint_filter_struct_traits.h"
#include "services/viz/public/cpp/compositing/quads_struct_traits.h"
#include "services/viz/public/cpp/compositing/render_pass_struct_traits.h"
#include "services/viz/public/cpp/compositing/returned_resource_struct_traits.h"
#include "services/viz/public/cpp/compositing/selection_struct_traits.h"
#include "services/viz/public/cpp/compositing/shared_quad_state_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/transferable_resource_struct_traits.h"
#include "skia/public/interfaces/blur_image_filter_tile_mode_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/ipc/color/gfx_param_traits.h"
#include "ui/gfx/mojo/buffer_types_struct_traits.h"
#include "ui/gfx/mojo/selection_bound_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
namespace content {
namespace mojom {
const char SynchronousCompositor::Name_[] = "content.mojom.SynchronousCompositor";
bool SynchronousCompositor::DemandDrawHw(const content::SyncCompositorDemandDrawHwParams& draw_params, content::SyncCompositorCommonRendererParams* out_result, uint32_t* out_layer_tree_frame_sink_id, uint32_t* out_metadata_version, base::Optional<viz::CompositorFrame>* out_frame) {
  NOTREACHED();
  return false;
}
bool SynchronousCompositor::SetSharedMemory(const content::SyncCompositorSetSharedMemoryParams& params, bool* out_success, content::SyncCompositorCommonRendererParams* out_result) {
  NOTREACHED();
  return false;
}
bool SynchronousCompositor::DemandDrawSw(const content::SyncCompositorDemandDrawSwParams& draw_params, content::SyncCompositorCommonRendererParams* out_result, uint32_t* out_metadata_version, base::Optional<viz::CompositorFrameMetadata>* out_meta_data) {
  NOTREACHED();
  return false;
}
bool SynchronousCompositor::ZoomBy(float delta, const gfx::Point& anchor, content::SyncCompositorCommonRendererParams* out_result) {
  NOTREACHED();
  return false;
}
class SynchronousCompositor_DemandDrawHw_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  SynchronousCompositor_DemandDrawHw_HandleSyncResponse(
      bool* result, content::SyncCompositorCommonRendererParams* out_result, uint32_t* out_layer_tree_frame_sink_id, uint32_t* out_metadata_version, base::Optional<viz::CompositorFrame>* out_frame)
      : result_(result), out_result_(out_result), out_layer_tree_frame_sink_id_(out_layer_tree_frame_sink_id), out_metadata_version_(out_metadata_version), out_frame_(out_frame) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  content::SyncCompositorCommonRendererParams* out_result_;
  uint32_t* out_layer_tree_frame_sink_id_;
  uint32_t* out_metadata_version_;
  base::Optional<viz::CompositorFrame>* out_frame_;DISALLOW_COPY_AND_ASSIGN(SynchronousCompositor_DemandDrawHw_HandleSyncResponse);
};

class SynchronousCompositor_DemandDrawHw_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SynchronousCompositor_DemandDrawHw_ForwardToCallback(
      SynchronousCompositor::DemandDrawHwCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SynchronousCompositor::DemandDrawHwCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SynchronousCompositor_DemandDrawHw_ForwardToCallback);
};
class SynchronousCompositor_SetSharedMemory_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  SynchronousCompositor_SetSharedMemory_HandleSyncResponse(
      bool* result, bool* out_success, content::SyncCompositorCommonRendererParams* out_result)
      : result_(result), out_success_(out_success), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_success_;
  content::SyncCompositorCommonRendererParams* out_result_;DISALLOW_COPY_AND_ASSIGN(SynchronousCompositor_SetSharedMemory_HandleSyncResponse);
};

class SynchronousCompositor_SetSharedMemory_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SynchronousCompositor_SetSharedMemory_ForwardToCallback(
      SynchronousCompositor::SetSharedMemoryCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SynchronousCompositor::SetSharedMemoryCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SynchronousCompositor_SetSharedMemory_ForwardToCallback);
};
class SynchronousCompositor_DemandDrawSw_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  SynchronousCompositor_DemandDrawSw_HandleSyncResponse(
      bool* result, content::SyncCompositorCommonRendererParams* out_result, uint32_t* out_metadata_version, base::Optional<viz::CompositorFrameMetadata>* out_meta_data)
      : result_(result), out_result_(out_result), out_metadata_version_(out_metadata_version), out_meta_data_(out_meta_data) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  content::SyncCompositorCommonRendererParams* out_result_;
  uint32_t* out_metadata_version_;
  base::Optional<viz::CompositorFrameMetadata>* out_meta_data_;DISALLOW_COPY_AND_ASSIGN(SynchronousCompositor_DemandDrawSw_HandleSyncResponse);
};

class SynchronousCompositor_DemandDrawSw_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SynchronousCompositor_DemandDrawSw_ForwardToCallback(
      SynchronousCompositor::DemandDrawSwCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SynchronousCompositor::DemandDrawSwCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SynchronousCompositor_DemandDrawSw_ForwardToCallback);
};
class SynchronousCompositor_ZoomBy_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  SynchronousCompositor_ZoomBy_HandleSyncResponse(
      bool* result, content::SyncCompositorCommonRendererParams* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  content::SyncCompositorCommonRendererParams* out_result_;DISALLOW_COPY_AND_ASSIGN(SynchronousCompositor_ZoomBy_HandleSyncResponse);
};

class SynchronousCompositor_ZoomBy_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SynchronousCompositor_ZoomBy_ForwardToCallback(
      SynchronousCompositor::ZoomByCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SynchronousCompositor::ZoomByCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SynchronousCompositor_ZoomBy_ForwardToCallback);
};

SynchronousCompositorProxy::SynchronousCompositorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SynchronousCompositorProxy::ComputeScroll(
    base::TimeTicks in_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositor::ComputeScroll");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_ComputeScroll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_ComputeScroll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->time)::BaseType::BufferWriter
      time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
      in_time, buffer, &time_writer, &serialization_context);
  params->time.Set(
      time_writer.is_null() ? nullptr : time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null time in SynchronousCompositor.ComputeScroll request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SynchronousCompositorProxy::DemandDrawHwAsync(
    const content::SyncCompositorDemandDrawHwParams& in_draw_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositor::DemandDrawHwAsync");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_DemandDrawHwAsync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_DemandDrawHwAsync_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->draw_params)::BaseType::BufferWriter
      draw_params_writer;
  mojo::internal::Serialize<::content::mojom::SyncCompositorDemandDrawHwParamsDataView>(
      in_draw_params, buffer, &draw_params_writer, &serialization_context);
  params->draw_params.Set(
      draw_params_writer.is_null() ? nullptr : draw_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->draw_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null draw_params in SynchronousCompositor.DemandDrawHwAsync request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
bool SynchronousCompositorProxy::DemandDrawHw(
    const content::SyncCompositorDemandDrawHwParams& param_draw_params, content::SyncCompositorCommonRendererParams* out_param_result, uint32_t* out_param_layer_tree_frame_sink_id, uint32_t* out_param_metadata_version, base::Optional<viz::CompositorFrame>* out_param_frame) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositor::DemandDrawHw");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_DemandDrawHw_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_DemandDrawHw_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->draw_params)::BaseType::BufferWriter
      draw_params_writer;
  mojo::internal::Serialize<::content::mojom::SyncCompositorDemandDrawHwParamsDataView>(
      param_draw_params, buffer, &draw_params_writer, &serialization_context);
  params->draw_params.Set(
      draw_params_writer.is_null() ? nullptr : draw_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->draw_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null draw_params in SynchronousCompositor.DemandDrawHw request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SynchronousCompositor_DemandDrawHw_HandleSyncResponse(
          &result, out_param_result, out_param_layer_tree_frame_sink_id, out_param_metadata_version, out_param_frame));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void SynchronousCompositorProxy::DemandDrawHw(
    const content::SyncCompositorDemandDrawHwParams& in_draw_params, DemandDrawHwCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositor::DemandDrawHw");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_DemandDrawHw_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_DemandDrawHw_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->draw_params)::BaseType::BufferWriter
      draw_params_writer;
  mojo::internal::Serialize<::content::mojom::SyncCompositorDemandDrawHwParamsDataView>(
      in_draw_params, buffer, &draw_params_writer, &serialization_context);
  params->draw_params.Set(
      draw_params_writer.is_null() ? nullptr : draw_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->draw_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null draw_params in SynchronousCompositor.DemandDrawHw request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SynchronousCompositor_DemandDrawHw_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool SynchronousCompositorProxy::SetSharedMemory(
    const content::SyncCompositorSetSharedMemoryParams& param_params, bool* out_param_success, content::SyncCompositorCommonRendererParams* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositor::SetSharedMemory");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_SetSharedMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_SetSharedMemory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::content::mojom::SyncCompositorSetSharedMemoryParamsDataView>(
      param_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in SynchronousCompositor.SetSharedMemory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SynchronousCompositor_SetSharedMemory_HandleSyncResponse(
          &result, out_param_success, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void SynchronousCompositorProxy::SetSharedMemory(
    const content::SyncCompositorSetSharedMemoryParams& in_params, SetSharedMemoryCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositor::SetSharedMemory");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_SetSharedMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_SetSharedMemory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::content::mojom::SyncCompositorSetSharedMemoryParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in SynchronousCompositor.SetSharedMemory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SynchronousCompositor_SetSharedMemory_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool SynchronousCompositorProxy::DemandDrawSw(
    const content::SyncCompositorDemandDrawSwParams& param_draw_params, content::SyncCompositorCommonRendererParams* out_param_result, uint32_t* out_param_metadata_version, base::Optional<viz::CompositorFrameMetadata>* out_param_meta_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositor::DemandDrawSw");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_DemandDrawSw_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_DemandDrawSw_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->draw_params)::BaseType::BufferWriter
      draw_params_writer;
  mojo::internal::Serialize<::content::mojom::SyncCompositorDemandDrawSwParamsDataView>(
      param_draw_params, buffer, &draw_params_writer, &serialization_context);
  params->draw_params.Set(
      draw_params_writer.is_null() ? nullptr : draw_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->draw_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null draw_params in SynchronousCompositor.DemandDrawSw request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SynchronousCompositor_DemandDrawSw_HandleSyncResponse(
          &result, out_param_result, out_param_metadata_version, out_param_meta_data));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void SynchronousCompositorProxy::DemandDrawSw(
    const content::SyncCompositorDemandDrawSwParams& in_draw_params, DemandDrawSwCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositor::DemandDrawSw");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_DemandDrawSw_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_DemandDrawSw_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->draw_params)::BaseType::BufferWriter
      draw_params_writer;
  mojo::internal::Serialize<::content::mojom::SyncCompositorDemandDrawSwParamsDataView>(
      in_draw_params, buffer, &draw_params_writer, &serialization_context);
  params->draw_params.Set(
      draw_params_writer.is_null() ? nullptr : draw_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->draw_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null draw_params in SynchronousCompositor.DemandDrawSw request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SynchronousCompositor_DemandDrawSw_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SynchronousCompositorProxy::ZeroSharedMemory(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositor::ZeroSharedMemory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_ZeroSharedMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_ZeroSharedMemory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
bool SynchronousCompositorProxy::ZoomBy(
    float param_delta, const gfx::Point& param_anchor, content::SyncCompositorCommonRendererParams* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositor::ZoomBy");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_ZoomBy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_ZoomBy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->delta = param_delta;
  typename decltype(params->anchor)::BaseType::BufferWriter
      anchor_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      param_anchor, buffer, &anchor_writer, &serialization_context);
  params->anchor.Set(
      anchor_writer.is_null() ? nullptr : anchor_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->anchor.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null anchor in SynchronousCompositor.ZoomBy request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SynchronousCompositor_ZoomBy_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void SynchronousCompositorProxy::ZoomBy(
    float in_delta, const gfx::Point& in_anchor, ZoomByCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositor::ZoomBy");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_ZoomBy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_ZoomBy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->delta = in_delta;
  typename decltype(params->anchor)::BaseType::BufferWriter
      anchor_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_anchor, buffer, &anchor_writer, &serialization_context);
  params->anchor.Set(
      anchor_writer.is_null() ? nullptr : anchor_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->anchor.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null anchor in SynchronousCompositor.ZoomBy request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SynchronousCompositor_ZoomBy_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SynchronousCompositorProxy::SetMemoryPolicy(
    uint32_t in_bytes_limit) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositor::SetMemoryPolicy");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_SetMemoryPolicy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_SetMemoryPolicy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->bytes_limit = in_bytes_limit;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SynchronousCompositorProxy::ReclaimResources(
    uint32_t in_layer_tree_frame_sink_id, const std::vector<viz::ReturnedResource>& in_resources) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositor::ReclaimResources");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_ReclaimResources_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_ReclaimResources_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->layer_tree_frame_sink_id = in_layer_tree_frame_sink_id;
  typename decltype(params->resources)::BaseType::BufferWriter
      resources_writer;
  const mojo::internal::ContainerValidateParams resources_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>>(
      in_resources, buffer, &resources_writer, &resources_validate_params,
      &serialization_context);
  params->resources.Set(
      resources_writer.is_null() ? nullptr : resources_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->resources.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null resources in SynchronousCompositor.ReclaimResources request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SynchronousCompositorProxy::SetScroll(
    const gfx::ScrollOffset& in_offset) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositor::SetScroll");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_SetScroll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_SetScroll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->offset)::BaseType::BufferWriter
      offset_writer;
  mojo::internal::Serialize<::gfx::mojom::ScrollOffsetDataView>(
      in_offset, buffer, &offset_writer, &serialization_context);
  params->offset.Set(
      offset_writer.is_null() ? nullptr : offset_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->offset.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null offset in SynchronousCompositor.SetScroll request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SynchronousCompositorProxy::BeginFrame(
    const viz::BeginFrameArgs& in_args) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositor::BeginFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_BeginFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_BeginFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->args)::BaseType::BufferWriter
      args_writer;
  mojo::internal::Serialize<::viz::mojom::BeginFrameArgsDataView>(
      in_args, buffer, &args_writer, &serialization_context);
  params->args.Set(
      args_writer.is_null() ? nullptr : args_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->args.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null args in SynchronousCompositor.BeginFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SynchronousCompositorProxy::SetBeginFrameSourcePaused(
    bool in_paused) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositor::SetBeginFrameSourcePaused");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_SetBeginFrameSourcePaused_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_SetBeginFrameSourcePaused_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->paused = in_paused;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class SynchronousCompositor_DemandDrawHw_ProxyToResponder {
 public:
  static SynchronousCompositor::DemandDrawHwCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SynchronousCompositor_DemandDrawHw_ProxyToResponder> proxy(
        new SynchronousCompositor_DemandDrawHw_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SynchronousCompositor_DemandDrawHw_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SynchronousCompositor_DemandDrawHw_ProxyToResponder() {
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
  SynchronousCompositor_DemandDrawHw_ProxyToResponder(
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
        << "SynchronousCompositor::DemandDrawHwCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const content::SyncCompositorCommonRendererParams& in_result, uint32_t in_layer_tree_frame_sink_id, uint32_t in_metadata_version, base::Optional<viz::CompositorFrame> in_frame);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SynchronousCompositor_DemandDrawHw_ProxyToResponder);
};

bool SynchronousCompositor_DemandDrawHw_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::SynchronousCompositor::DemandDrawHwCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SynchronousCompositor_DemandDrawHw_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SynchronousCompositor_DemandDrawHw_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  content::SyncCompositorCommonRendererParams p_result{};
  uint32_t p_layer_tree_frame_sink_id{};
  uint32_t p_metadata_version{};
  base::Optional<viz::CompositorFrame> p_frame{};
  SynchronousCompositor_DemandDrawHw_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  p_layer_tree_frame_sink_id = input_data_view.layer_tree_frame_sink_id();
  p_metadata_version = input_data_view.metadata_version();
  if (!input_data_view.ReadFrame(&p_frame))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SynchronousCompositor::DemandDrawHw response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_layer_tree_frame_sink_id), 
std::move(p_metadata_version), 
std::move(p_frame));
  return true;
}

void SynchronousCompositor_DemandDrawHw_ProxyToResponder::Run(
    const content::SyncCompositorCommonRendererParams& in_result, uint32_t in_layer_tree_frame_sink_id, uint32_t in_metadata_version, base::Optional<viz::CompositorFrame> in_frame) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_DemandDrawHw_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_DemandDrawHw_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::content::mojom::SyncCompositorCommonRendererParamsDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  params->layer_tree_frame_sink_id = in_layer_tree_frame_sink_id;
  params->metadata_version = in_metadata_version;
  typename decltype(params->frame)::BaseType::BufferWriter
      frame_writer;
  mojo::internal::Serialize<::viz::mojom::CompositorFrameDataView>(
      in_frame, buffer, &frame_writer, &serialization_context);
  params->frame.Set(
      frame_writer.is_null() ? nullptr : frame_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::DemandDrawHwCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool SynchronousCompositor_DemandDrawHw_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::SynchronousCompositor_DemandDrawHw_ResponseParams_Data* params =
      reinterpret_cast<internal::SynchronousCompositor_DemandDrawHw_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  content::SyncCompositorCommonRendererParams p_result{};
  uint32_t p_layer_tree_frame_sink_id{};
  uint32_t p_metadata_version{};
  base::Optional<viz::CompositorFrame> p_frame{};
  SynchronousCompositor_DemandDrawHw_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  p_layer_tree_frame_sink_id = input_data_view.layer_tree_frame_sink_id();
  p_metadata_version = input_data_view.metadata_version();
  if (!input_data_view.ReadFrame(&p_frame))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SynchronousCompositor::DemandDrawHw response deserializer");
    return false;
  }
  *out_result_ = std::move(p_result);
  *out_layer_tree_frame_sink_id_ = std::move(p_layer_tree_frame_sink_id);
  *out_metadata_version_ = std::move(p_metadata_version);
  *out_frame_ = std::move(p_frame);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class SynchronousCompositor_SetSharedMemory_ProxyToResponder {
 public:
  static SynchronousCompositor::SetSharedMemoryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SynchronousCompositor_SetSharedMemory_ProxyToResponder> proxy(
        new SynchronousCompositor_SetSharedMemory_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SynchronousCompositor_SetSharedMemory_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SynchronousCompositor_SetSharedMemory_ProxyToResponder() {
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
  SynchronousCompositor_SetSharedMemory_ProxyToResponder(
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
        << "SynchronousCompositor::SetSharedMemoryCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, const content::SyncCompositorCommonRendererParams& in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SynchronousCompositor_SetSharedMemory_ProxyToResponder);
};

bool SynchronousCompositor_SetSharedMemory_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::SynchronousCompositor::SetSharedMemoryCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SynchronousCompositor_SetSharedMemory_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SynchronousCompositor_SetSharedMemory_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  content::SyncCompositorCommonRendererParams p_result{};
  SynchronousCompositor_SetSharedMemory_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SynchronousCompositor::SetSharedMemory response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_result));
  return true;
}

void SynchronousCompositor_SetSharedMemory_ProxyToResponder::Run(
    bool in_success, const content::SyncCompositorCommonRendererParams& in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_SetSharedMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_SetSharedMemory_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::content::mojom::SyncCompositorCommonRendererParamsDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::SetSharedMemoryCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool SynchronousCompositor_SetSharedMemory_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::SynchronousCompositor_SetSharedMemory_ResponseParams_Data* params =
      reinterpret_cast<internal::SynchronousCompositor_SetSharedMemory_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  content::SyncCompositorCommonRendererParams p_result{};
  SynchronousCompositor_SetSharedMemory_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SynchronousCompositor::SetSharedMemory response deserializer");
    return false;
  }
  *out_success_ = std::move(p_success);
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class SynchronousCompositor_DemandDrawSw_ProxyToResponder {
 public:
  static SynchronousCompositor::DemandDrawSwCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SynchronousCompositor_DemandDrawSw_ProxyToResponder> proxy(
        new SynchronousCompositor_DemandDrawSw_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SynchronousCompositor_DemandDrawSw_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SynchronousCompositor_DemandDrawSw_ProxyToResponder() {
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
  SynchronousCompositor_DemandDrawSw_ProxyToResponder(
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
        << "SynchronousCompositor::DemandDrawSwCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const content::SyncCompositorCommonRendererParams& in_result, uint32_t in_metadata_version, base::Optional<viz::CompositorFrameMetadata> in_meta_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SynchronousCompositor_DemandDrawSw_ProxyToResponder);
};

bool SynchronousCompositor_DemandDrawSw_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::SynchronousCompositor::DemandDrawSwCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SynchronousCompositor_DemandDrawSw_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SynchronousCompositor_DemandDrawSw_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  content::SyncCompositorCommonRendererParams p_result{};
  uint32_t p_metadata_version{};
  base::Optional<viz::CompositorFrameMetadata> p_meta_data{};
  SynchronousCompositor_DemandDrawSw_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  p_metadata_version = input_data_view.metadata_version();
  if (!input_data_view.ReadMetaData(&p_meta_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SynchronousCompositor::DemandDrawSw response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_metadata_version), 
std::move(p_meta_data));
  return true;
}

void SynchronousCompositor_DemandDrawSw_ProxyToResponder::Run(
    const content::SyncCompositorCommonRendererParams& in_result, uint32_t in_metadata_version, base::Optional<viz::CompositorFrameMetadata> in_meta_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_DemandDrawSw_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_DemandDrawSw_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::content::mojom::SyncCompositorCommonRendererParamsDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  params->metadata_version = in_metadata_version;
  typename decltype(params->meta_data)::BaseType::BufferWriter
      meta_data_writer;
  mojo::internal::Serialize<::viz::mojom::CompositorFrameMetadataDataView>(
      in_meta_data, buffer, &meta_data_writer, &serialization_context);
  params->meta_data.Set(
      meta_data_writer.is_null() ? nullptr : meta_data_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::DemandDrawSwCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool SynchronousCompositor_DemandDrawSw_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::SynchronousCompositor_DemandDrawSw_ResponseParams_Data* params =
      reinterpret_cast<internal::SynchronousCompositor_DemandDrawSw_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  content::SyncCompositorCommonRendererParams p_result{};
  uint32_t p_metadata_version{};
  base::Optional<viz::CompositorFrameMetadata> p_meta_data{};
  SynchronousCompositor_DemandDrawSw_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  p_metadata_version = input_data_view.metadata_version();
  if (!input_data_view.ReadMetaData(&p_meta_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SynchronousCompositor::DemandDrawSw response deserializer");
    return false;
  }
  *out_result_ = std::move(p_result);
  *out_metadata_version_ = std::move(p_metadata_version);
  *out_meta_data_ = std::move(p_meta_data);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class SynchronousCompositor_ZoomBy_ProxyToResponder {
 public:
  static SynchronousCompositor::ZoomByCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SynchronousCompositor_ZoomBy_ProxyToResponder> proxy(
        new SynchronousCompositor_ZoomBy_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SynchronousCompositor_ZoomBy_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SynchronousCompositor_ZoomBy_ProxyToResponder() {
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
  SynchronousCompositor_ZoomBy_ProxyToResponder(
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
        << "SynchronousCompositor::ZoomByCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const content::SyncCompositorCommonRendererParams& in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SynchronousCompositor_ZoomBy_ProxyToResponder);
};

bool SynchronousCompositor_ZoomBy_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::SynchronousCompositor::ZoomByCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SynchronousCompositor_ZoomBy_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SynchronousCompositor_ZoomBy_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  content::SyncCompositorCommonRendererParams p_result{};
  SynchronousCompositor_ZoomBy_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SynchronousCompositor::ZoomBy response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void SynchronousCompositor_ZoomBy_ProxyToResponder::Run(
    const content::SyncCompositorCommonRendererParams& in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositor_ZoomBy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositor_ZoomBy_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::content::mojom::SyncCompositorCommonRendererParamsDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::ZoomByCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool SynchronousCompositor_ZoomBy_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::SynchronousCompositor_ZoomBy_ResponseParams_Data* params =
      reinterpret_cast<internal::SynchronousCompositor_ZoomBy_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  content::SyncCompositorCommonRendererParams p_result{};
  SynchronousCompositor_ZoomBy_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SynchronousCompositor::ZoomBy response deserializer");
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool SynchronousCompositorStubDispatch::Accept(
    SynchronousCompositor* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSynchronousCompositor_ComputeScroll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::ComputeScroll",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SynchronousCompositor_ComputeScroll_Params_Data* params =
          reinterpret_cast<internal::SynchronousCompositor_ComputeScroll_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::TimeTicks p_time{};
      SynchronousCompositor_ComputeScroll_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTime(&p_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SynchronousCompositor::ComputeScroll deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ComputeScroll(
std::move(p_time));
      return true;
    }
    case internal::kSynchronousCompositor_DemandDrawHwAsync_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::DemandDrawHwAsync",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SynchronousCompositor_DemandDrawHwAsync_Params_Data* params =
          reinterpret_cast<internal::SynchronousCompositor_DemandDrawHwAsync_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      content::SyncCompositorDemandDrawHwParams p_draw_params{};
      SynchronousCompositor_DemandDrawHwAsync_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDrawParams(&p_draw_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SynchronousCompositor::DemandDrawHwAsync deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DemandDrawHwAsync(
std::move(p_draw_params));
      return true;
    }
    case internal::kSynchronousCompositor_DemandDrawHw_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::DemandDrawHw",
               "message", message->name());
#endif
      break;
    }
    case internal::kSynchronousCompositor_SetSharedMemory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::SetSharedMemory",
               "message", message->name());
#endif
      break;
    }
    case internal::kSynchronousCompositor_DemandDrawSw_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::DemandDrawSw",
               "message", message->name());
#endif
      break;
    }
    case internal::kSynchronousCompositor_ZeroSharedMemory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::ZeroSharedMemory",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SynchronousCompositor_ZeroSharedMemory_Params_Data* params =
          reinterpret_cast<internal::SynchronousCompositor_ZeroSharedMemory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SynchronousCompositor_ZeroSharedMemory_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SynchronousCompositor::ZeroSharedMemory deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ZeroSharedMemory();
      return true;
    }
    case internal::kSynchronousCompositor_ZoomBy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::ZoomBy",
               "message", message->name());
#endif
      break;
    }
    case internal::kSynchronousCompositor_SetMemoryPolicy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::SetMemoryPolicy",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SynchronousCompositor_SetMemoryPolicy_Params_Data* params =
          reinterpret_cast<internal::SynchronousCompositor_SetMemoryPolicy_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_bytes_limit{};
      SynchronousCompositor_SetMemoryPolicy_ParamsDataView input_data_view(params, &serialization_context);
      
      p_bytes_limit = input_data_view.bytes_limit();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SynchronousCompositor::SetMemoryPolicy deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetMemoryPolicy(
std::move(p_bytes_limit));
      return true;
    }
    case internal::kSynchronousCompositor_ReclaimResources_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::ReclaimResources",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SynchronousCompositor_ReclaimResources_Params_Data* params =
          reinterpret_cast<internal::SynchronousCompositor_ReclaimResources_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_layer_tree_frame_sink_id{};
      std::vector<viz::ReturnedResource> p_resources{};
      SynchronousCompositor_ReclaimResources_ParamsDataView input_data_view(params, &serialization_context);
      
      p_layer_tree_frame_sink_id = input_data_view.layer_tree_frame_sink_id();
      if (!input_data_view.ReadResources(&p_resources))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SynchronousCompositor::ReclaimResources deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReclaimResources(
std::move(p_layer_tree_frame_sink_id), 
std::move(p_resources));
      return true;
    }
    case internal::kSynchronousCompositor_SetScroll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::SetScroll",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SynchronousCompositor_SetScroll_Params_Data* params =
          reinterpret_cast<internal::SynchronousCompositor_SetScroll_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::ScrollOffset p_offset{};
      SynchronousCompositor_SetScroll_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOffset(&p_offset))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SynchronousCompositor::SetScroll deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetScroll(
std::move(p_offset));
      return true;
    }
    case internal::kSynchronousCompositor_BeginFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::BeginFrame",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SynchronousCompositor_BeginFrame_Params_Data* params =
          reinterpret_cast<internal::SynchronousCompositor_BeginFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::BeginFrameArgs p_args{};
      SynchronousCompositor_BeginFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadArgs(&p_args))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SynchronousCompositor::BeginFrame deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->BeginFrame(
std::move(p_args));
      return true;
    }
    case internal::kSynchronousCompositor_SetBeginFrameSourcePaused_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::SetBeginFrameSourcePaused",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SynchronousCompositor_SetBeginFrameSourcePaused_Params_Data* params =
          reinterpret_cast<internal::SynchronousCompositor_SetBeginFrameSourcePaused_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_paused{};
      SynchronousCompositor_SetBeginFrameSourcePaused_ParamsDataView input_data_view(params, &serialization_context);
      
      p_paused = input_data_view.paused();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SynchronousCompositor::SetBeginFrameSourcePaused deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetBeginFrameSourcePaused(
std::move(p_paused));
      return true;
    }
  }
  return false;
}

// static
bool SynchronousCompositorStubDispatch::AcceptWithResponder(
    SynchronousCompositor* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSynchronousCompositor_ComputeScroll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::ComputeScroll",
               "message", message->name());
#endif
      break;
    }
    case internal::kSynchronousCompositor_DemandDrawHwAsync_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::DemandDrawHwAsync",
               "message", message->name());
#endif
      break;
    }
    case internal::kSynchronousCompositor_DemandDrawHw_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::DemandDrawHw",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SynchronousCompositor_DemandDrawHw_Params_Data* params =
          reinterpret_cast<
              internal::SynchronousCompositor_DemandDrawHw_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      content::SyncCompositorDemandDrawHwParams p_draw_params{};
      SynchronousCompositor_DemandDrawHw_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDrawParams(&p_draw_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SynchronousCompositor::DemandDrawHw deserializer");
        return false;
      }
      SynchronousCompositor::DemandDrawHwCallback callback =
          SynchronousCompositor_DemandDrawHw_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DemandDrawHw(
std::move(p_draw_params), std::move(callback));
      return true;
    }
    case internal::kSynchronousCompositor_SetSharedMemory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::SetSharedMemory",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SynchronousCompositor_SetSharedMemory_Params_Data* params =
          reinterpret_cast<
              internal::SynchronousCompositor_SetSharedMemory_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      content::SyncCompositorSetSharedMemoryParams p_params{};
      SynchronousCompositor_SetSharedMemory_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SynchronousCompositor::SetSharedMemory deserializer");
        return false;
      }
      SynchronousCompositor::SetSharedMemoryCallback callback =
          SynchronousCompositor_SetSharedMemory_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetSharedMemory(
std::move(p_params), std::move(callback));
      return true;
    }
    case internal::kSynchronousCompositor_DemandDrawSw_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::DemandDrawSw",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SynchronousCompositor_DemandDrawSw_Params_Data* params =
          reinterpret_cast<
              internal::SynchronousCompositor_DemandDrawSw_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      content::SyncCompositorDemandDrawSwParams p_draw_params{};
      SynchronousCompositor_DemandDrawSw_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDrawParams(&p_draw_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SynchronousCompositor::DemandDrawSw deserializer");
        return false;
      }
      SynchronousCompositor::DemandDrawSwCallback callback =
          SynchronousCompositor_DemandDrawSw_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DemandDrawSw(
std::move(p_draw_params), std::move(callback));
      return true;
    }
    case internal::kSynchronousCompositor_ZeroSharedMemory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::ZeroSharedMemory",
               "message", message->name());
#endif
      break;
    }
    case internal::kSynchronousCompositor_ZoomBy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::ZoomBy",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SynchronousCompositor_ZoomBy_Params_Data* params =
          reinterpret_cast<
              internal::SynchronousCompositor_ZoomBy_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      float p_delta{};
      gfx::Point p_anchor{};
      SynchronousCompositor_ZoomBy_ParamsDataView input_data_view(params, &serialization_context);
      
      p_delta = input_data_view.delta();
      if (!input_data_view.ReadAnchor(&p_anchor))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SynchronousCompositor::ZoomBy deserializer");
        return false;
      }
      SynchronousCompositor::ZoomByCallback callback =
          SynchronousCompositor_ZoomBy_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ZoomBy(
std::move(p_delta), 
std::move(p_anchor), std::move(callback));
      return true;
    }
    case internal::kSynchronousCompositor_SetMemoryPolicy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::SetMemoryPolicy",
               "message", message->name());
#endif
      break;
    }
    case internal::kSynchronousCompositor_ReclaimResources_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::ReclaimResources",
               "message", message->name());
#endif
      break;
    }
    case internal::kSynchronousCompositor_SetScroll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::SetScroll",
               "message", message->name());
#endif
      break;
    }
    case internal::kSynchronousCompositor_BeginFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::BeginFrame",
               "message", message->name());
#endif
      break;
    }
    case internal::kSynchronousCompositor_SetBeginFrameSourcePaused_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositor::SetBeginFrameSourcePaused",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SynchronousCompositorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SynchronousCompositor RequestValidator");

  switch (message->header()->name) {
    case internal::kSynchronousCompositor_ComputeScroll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositor_ComputeScroll_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSynchronousCompositor_DemandDrawHwAsync_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositor_DemandDrawHwAsync_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSynchronousCompositor_DemandDrawHw_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositor_DemandDrawHw_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSynchronousCompositor_SetSharedMemory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositor_SetSharedMemory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSynchronousCompositor_DemandDrawSw_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositor_DemandDrawSw_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSynchronousCompositor_ZeroSharedMemory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositor_ZeroSharedMemory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSynchronousCompositor_ZoomBy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositor_ZoomBy_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSynchronousCompositor_SetMemoryPolicy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositor_SetMemoryPolicy_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSynchronousCompositor_ReclaimResources_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositor_ReclaimResources_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSynchronousCompositor_SetScroll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositor_SetScroll_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSynchronousCompositor_BeginFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositor_BeginFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSynchronousCompositor_SetBeginFrameSourcePaused_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositor_SetBeginFrameSourcePaused_Params_Data>(
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

bool SynchronousCompositorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SynchronousCompositor ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSynchronousCompositor_DemandDrawHw_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositor_DemandDrawHw_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSynchronousCompositor_SetSharedMemory_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositor_SetSharedMemory_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSynchronousCompositor_DemandDrawSw_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositor_DemandDrawSw_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSynchronousCompositor_ZoomBy_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositor_ZoomBy_ResponseParams_Data>(
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
void SynchronousCompositorInterceptorForTesting::ComputeScroll(base::TimeTicks time) {
  GetForwardingInterface()->ComputeScroll(std::move(time));
}
void SynchronousCompositorInterceptorForTesting::DemandDrawHwAsync(const content::SyncCompositorDemandDrawHwParams& draw_params) {
  GetForwardingInterface()->DemandDrawHwAsync(std::move(draw_params));
}
void SynchronousCompositorInterceptorForTesting::DemandDrawHw(const content::SyncCompositorDemandDrawHwParams& draw_params, DemandDrawHwCallback callback) {
  GetForwardingInterface()->DemandDrawHw(std::move(draw_params), std::move(callback));
}
void SynchronousCompositorInterceptorForTesting::SetSharedMemory(const content::SyncCompositorSetSharedMemoryParams& params, SetSharedMemoryCallback callback) {
  GetForwardingInterface()->SetSharedMemory(std::move(params), std::move(callback));
}
void SynchronousCompositorInterceptorForTesting::DemandDrawSw(const content::SyncCompositorDemandDrawSwParams& draw_params, DemandDrawSwCallback callback) {
  GetForwardingInterface()->DemandDrawSw(std::move(draw_params), std::move(callback));
}
void SynchronousCompositorInterceptorForTesting::ZeroSharedMemory() {
  GetForwardingInterface()->ZeroSharedMemory();
}
void SynchronousCompositorInterceptorForTesting::ZoomBy(float delta, const gfx::Point& anchor, ZoomByCallback callback) {
  GetForwardingInterface()->ZoomBy(std::move(delta), std::move(anchor), std::move(callback));
}
void SynchronousCompositorInterceptorForTesting::SetMemoryPolicy(uint32_t bytes_limit) {
  GetForwardingInterface()->SetMemoryPolicy(std::move(bytes_limit));
}
void SynchronousCompositorInterceptorForTesting::ReclaimResources(uint32_t layer_tree_frame_sink_id, const std::vector<viz::ReturnedResource>& resources) {
  GetForwardingInterface()->ReclaimResources(std::move(layer_tree_frame_sink_id), std::move(resources));
}
void SynchronousCompositorInterceptorForTesting::SetScroll(const gfx::ScrollOffset& offset) {
  GetForwardingInterface()->SetScroll(std::move(offset));
}
void SynchronousCompositorInterceptorForTesting::BeginFrame(const viz::BeginFrameArgs& args) {
  GetForwardingInterface()->BeginFrame(std::move(args));
}
void SynchronousCompositorInterceptorForTesting::SetBeginFrameSourcePaused(bool paused) {
  GetForwardingInterface()->SetBeginFrameSourcePaused(std::move(paused));
}
SynchronousCompositorAsyncWaiter::SynchronousCompositorAsyncWaiter(
    SynchronousCompositor* proxy) : proxy_(proxy) {}

SynchronousCompositorAsyncWaiter::~SynchronousCompositorAsyncWaiter() = default;

void SynchronousCompositorAsyncWaiter::DemandDrawHw(
    const content::SyncCompositorDemandDrawHwParams& draw_params, content::SyncCompositorCommonRendererParams* out_result, uint32_t* out_layer_tree_frame_sink_id, uint32_t* out_metadata_version, base::Optional<viz::CompositorFrame>* out_frame) {
  base::RunLoop loop;
  proxy_->DemandDrawHw(std::move(draw_params),
      base::BindOnce(
          [](base::RunLoop* loop,
             content::SyncCompositorCommonRendererParams* out_result
,
             uint32_t* out_layer_tree_frame_sink_id
,
             uint32_t* out_metadata_version
,
             base::Optional<viz::CompositorFrame>* out_frame
,
             const content::SyncCompositorCommonRendererParams& result,
             uint32_t layer_tree_frame_sink_id,
             uint32_t metadata_version,
             base::Optional<viz::CompositorFrame> frame) {*out_result = std::move(result);*out_layer_tree_frame_sink_id = std::move(layer_tree_frame_sink_id);*out_metadata_version = std::move(metadata_version);*out_frame = std::move(frame);
            loop->Quit();
          },
          &loop,
          out_result,
          out_layer_tree_frame_sink_id,
          out_metadata_version,
          out_frame));
  loop.Run();
}
void SynchronousCompositorAsyncWaiter::SetSharedMemory(
    const content::SyncCompositorSetSharedMemoryParams& params, bool* out_success, content::SyncCompositorCommonRendererParams* out_result) {
  base::RunLoop loop;
  proxy_->SetSharedMemory(std::move(params),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             content::SyncCompositorCommonRendererParams* out_result
,
             bool success,
             const content::SyncCompositorCommonRendererParams& result) {*out_success = std::move(success);*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_success,
          out_result));
  loop.Run();
}
void SynchronousCompositorAsyncWaiter::DemandDrawSw(
    const content::SyncCompositorDemandDrawSwParams& draw_params, content::SyncCompositorCommonRendererParams* out_result, uint32_t* out_metadata_version, base::Optional<viz::CompositorFrameMetadata>* out_meta_data) {
  base::RunLoop loop;
  proxy_->DemandDrawSw(std::move(draw_params),
      base::BindOnce(
          [](base::RunLoop* loop,
             content::SyncCompositorCommonRendererParams* out_result
,
             uint32_t* out_metadata_version
,
             base::Optional<viz::CompositorFrameMetadata>* out_meta_data
,
             const content::SyncCompositorCommonRendererParams& result,
             uint32_t metadata_version,
             base::Optional<viz::CompositorFrameMetadata> meta_data) {*out_result = std::move(result);*out_metadata_version = std::move(metadata_version);*out_meta_data = std::move(meta_data);
            loop->Quit();
          },
          &loop,
          out_result,
          out_metadata_version,
          out_meta_data));
  loop.Run();
}
void SynchronousCompositorAsyncWaiter::ZoomBy(
    float delta, const gfx::Point& anchor, content::SyncCompositorCommonRendererParams* out_result) {
  base::RunLoop loop;
  proxy_->ZoomBy(std::move(delta),std::move(anchor),
      base::BindOnce(
          [](base::RunLoop* loop,
             content::SyncCompositorCommonRendererParams* out_result
,
             const content::SyncCompositorCommonRendererParams& result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}

const char SynchronousCompositorHost::Name_[] = "content.mojom.SynchronousCompositorHost";

SynchronousCompositorHostProxy::SynchronousCompositorHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SynchronousCompositorHostProxy::LayerTreeFrameSinkCreated(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositorHost::LayerTreeFrameSinkCreated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositorHost_LayerTreeFrameSinkCreated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SynchronousCompositorHostProxy::UpdateState(
    const content::SyncCompositorCommonRendererParams& in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositorHost::UpdateState");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositorHost_UpdateState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositorHost_UpdateState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::content::mojom::SyncCompositorCommonRendererParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in SynchronousCompositorHost.UpdateState request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SynchronousCompositorHostProxy::SetNeedsBeginFrames(
    bool in_needs_begin_frames) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositorHost::SetNeedsBeginFrames");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositorHost_SetNeedsBeginFrames_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositorHost_SetNeedsBeginFrames_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->needs_begin_frames = in_needs_begin_frames;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SynchronousCompositorHostStubDispatch::Accept(
    SynchronousCompositorHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSynchronousCompositorHost_LayerTreeFrameSinkCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositorHost::LayerTreeFrameSinkCreated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params_Data* params =
          reinterpret_cast<internal::SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SynchronousCompositorHost_LayerTreeFrameSinkCreated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SynchronousCompositorHost::LayerTreeFrameSinkCreated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->LayerTreeFrameSinkCreated();
      return true;
    }
    case internal::kSynchronousCompositorHost_UpdateState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositorHost::UpdateState",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SynchronousCompositorHost_UpdateState_Params_Data* params =
          reinterpret_cast<internal::SynchronousCompositorHost_UpdateState_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      content::SyncCompositorCommonRendererParams p_params{};
      SynchronousCompositorHost_UpdateState_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SynchronousCompositorHost::UpdateState deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpdateState(
std::move(p_params));
      return true;
    }
    case internal::kSynchronousCompositorHost_SetNeedsBeginFrames_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositorHost::SetNeedsBeginFrames",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SynchronousCompositorHost_SetNeedsBeginFrames_Params_Data* params =
          reinterpret_cast<internal::SynchronousCompositorHost_SetNeedsBeginFrames_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_needs_begin_frames{};
      SynchronousCompositorHost_SetNeedsBeginFrames_ParamsDataView input_data_view(params, &serialization_context);
      
      p_needs_begin_frames = input_data_view.needs_begin_frames();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SynchronousCompositorHost::SetNeedsBeginFrames deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetNeedsBeginFrames(
std::move(p_needs_begin_frames));
      return true;
    }
  }
  return false;
}

// static
bool SynchronousCompositorHostStubDispatch::AcceptWithResponder(
    SynchronousCompositorHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSynchronousCompositorHost_LayerTreeFrameSinkCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositorHost::LayerTreeFrameSinkCreated",
               "message", message->name());
#endif
      break;
    }
    case internal::kSynchronousCompositorHost_UpdateState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositorHost::UpdateState",
               "message", message->name());
#endif
      break;
    }
    case internal::kSynchronousCompositorHost_SetNeedsBeginFrames_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositorHost::SetNeedsBeginFrames",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SynchronousCompositorHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SynchronousCompositorHost RequestValidator");

  switch (message->header()->name) {
    case internal::kSynchronousCompositorHost_LayerTreeFrameSinkCreated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositorHost_LayerTreeFrameSinkCreated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSynchronousCompositorHost_UpdateState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositorHost_UpdateState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSynchronousCompositorHost_SetNeedsBeginFrames_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositorHost_SetNeedsBeginFrames_Params_Data>(
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

void SynchronousCompositorHostInterceptorForTesting::LayerTreeFrameSinkCreated() {
  GetForwardingInterface()->LayerTreeFrameSinkCreated();
}
void SynchronousCompositorHostInterceptorForTesting::UpdateState(const content::SyncCompositorCommonRendererParams& params) {
  GetForwardingInterface()->UpdateState(std::move(params));
}
void SynchronousCompositorHostInterceptorForTesting::SetNeedsBeginFrames(bool needs_begin_frames) {
  GetForwardingInterface()->SetNeedsBeginFrames(std::move(needs_begin_frames));
}
SynchronousCompositorHostAsyncWaiter::SynchronousCompositorHostAsyncWaiter(
    SynchronousCompositorHost* proxy) : proxy_(proxy) {}

SynchronousCompositorHostAsyncWaiter::~SynchronousCompositorHostAsyncWaiter() = default;


const char SynchronousCompositorControlHost::Name_[] = "content.mojom.SynchronousCompositorControlHost";

SynchronousCompositorControlHostProxy::SynchronousCompositorControlHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SynchronousCompositorControlHostProxy::ReturnFrame(
    uint32_t in_layer_tree_frame_sink_id, uint32_t in_metadata_version, base::Optional<viz::CompositorFrame> in_frame) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositorControlHost::ReturnFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositorControlHost_ReturnFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositorControlHost_ReturnFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->layer_tree_frame_sink_id = in_layer_tree_frame_sink_id;
  params->metadata_version = in_metadata_version;
  typename decltype(params->frame)::BaseType::BufferWriter
      frame_writer;
  mojo::internal::Serialize<::viz::mojom::CompositorFrameDataView>(
      in_frame, buffer, &frame_writer, &serialization_context);
  params->frame.Set(
      frame_writer.is_null() ? nullptr : frame_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SynchronousCompositorControlHostProxy::BeginFrameResponse(
    const content::SyncCompositorCommonRendererParams& in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::SynchronousCompositorControlHost::BeginFrameResponse");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSynchronousCompositorControlHost_BeginFrameResponse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::SynchronousCompositorControlHost_BeginFrameResponse_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::content::mojom::SyncCompositorCommonRendererParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in SynchronousCompositorControlHost.BeginFrameResponse request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SynchronousCompositorControlHostStubDispatch::Accept(
    SynchronousCompositorControlHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSynchronousCompositorControlHost_ReturnFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositorControlHost::ReturnFrame",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SynchronousCompositorControlHost_ReturnFrame_Params_Data* params =
          reinterpret_cast<internal::SynchronousCompositorControlHost_ReturnFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_layer_tree_frame_sink_id{};
      uint32_t p_metadata_version{};
      base::Optional<viz::CompositorFrame> p_frame{};
      SynchronousCompositorControlHost_ReturnFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      p_layer_tree_frame_sink_id = input_data_view.layer_tree_frame_sink_id();
      p_metadata_version = input_data_view.metadata_version();
      if (!input_data_view.ReadFrame(&p_frame))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SynchronousCompositorControlHost::ReturnFrame deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReturnFrame(
std::move(p_layer_tree_frame_sink_id), 
std::move(p_metadata_version), 
std::move(p_frame));
      return true;
    }
    case internal::kSynchronousCompositorControlHost_BeginFrameResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositorControlHost::BeginFrameResponse",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SynchronousCompositorControlHost_BeginFrameResponse_Params_Data* params =
          reinterpret_cast<internal::SynchronousCompositorControlHost_BeginFrameResponse_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      content::SyncCompositorCommonRendererParams p_params{};
      SynchronousCompositorControlHost_BeginFrameResponse_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SynchronousCompositorControlHost::BeginFrameResponse deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->BeginFrameResponse(
std::move(p_params));
      return true;
    }
  }
  return false;
}

// static
bool SynchronousCompositorControlHostStubDispatch::AcceptWithResponder(
    SynchronousCompositorControlHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSynchronousCompositorControlHost_ReturnFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositorControlHost::ReturnFrame",
               "message", message->name());
#endif
      break;
    }
    case internal::kSynchronousCompositorControlHost_BeginFrameResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::SynchronousCompositorControlHost::BeginFrameResponse",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool SynchronousCompositorControlHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SynchronousCompositorControlHost RequestValidator");

  switch (message->header()->name) {
    case internal::kSynchronousCompositorControlHost_ReturnFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositorControlHost_ReturnFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSynchronousCompositorControlHost_BeginFrameResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SynchronousCompositorControlHost_BeginFrameResponse_Params_Data>(
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

void SynchronousCompositorControlHostInterceptorForTesting::ReturnFrame(uint32_t layer_tree_frame_sink_id, uint32_t metadata_version, base::Optional<viz::CompositorFrame> frame) {
  GetForwardingInterface()->ReturnFrame(std::move(layer_tree_frame_sink_id), std::move(metadata_version), std::move(frame));
}
void SynchronousCompositorControlHostInterceptorForTesting::BeginFrameResponse(const content::SyncCompositorCommonRendererParams& params) {
  GetForwardingInterface()->BeginFrameResponse(std::move(params));
}
SynchronousCompositorControlHostAsyncWaiter::SynchronousCompositorControlHostAsyncWaiter(
    SynchronousCompositorControlHost* proxy) : proxy_(proxy) {}

SynchronousCompositorControlHostAsyncWaiter::~SynchronousCompositorControlHostAsyncWaiter() = default;


}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif