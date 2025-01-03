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

#include "services/ui/public/interfaces/window_tree.mojom.h"

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

#include "services/ui/public/interfaces/window_tree.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/ui/public/interfaces/cursor/cursor_struct_traits.h"
#include "services/ui/public/interfaces/ime/ime_struct_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_info_struct_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "ui/base/mojo/ui_base_types_struct_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
namespace ui {
namespace mojom {
const char WindowTree::Name_[] = "ui.mojom.WindowTree";

class WindowTree_GetWindowTree_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTree_GetWindowTree_ForwardToCallback(
      WindowTree::GetWindowTreeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTree::GetWindowTreeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTree_GetWindowTree_ForwardToCallback);
};

class WindowTree_Embed_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTree_Embed_ForwardToCallback(
      WindowTree::EmbedCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTree::EmbedCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTree_Embed_ForwardToCallback);
};

class WindowTree_ScheduleEmbed_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTree_ScheduleEmbed_ForwardToCallback(
      WindowTree::ScheduleEmbedCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTree::ScheduleEmbedCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTree_ScheduleEmbed_ForwardToCallback);
};

class WindowTree_ScheduleEmbedForExistingClient_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTree_ScheduleEmbedForExistingClient_ForwardToCallback(
      WindowTree::ScheduleEmbedForExistingClientCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTree::ScheduleEmbedForExistingClientCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTree_ScheduleEmbedForExistingClient_ForwardToCallback);
};

class WindowTree_EmbedUsingToken_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTree_EmbedUsingToken_ForwardToCallback(
      WindowTree::EmbedUsingTokenCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTree::EmbedUsingTokenCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTree_EmbedUsingToken_ForwardToCallback);
};

class WindowTree_GetCursorLocationMemory_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTree_GetCursorLocationMemory_ForwardToCallback(
      WindowTree::GetCursorLocationMemoryCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTree::GetCursorLocationMemoryCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTree_GetCursorLocationMemory_ForwardToCallback);
};

WindowTreeProxy::WindowTreeProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WindowTreeProxy::NewWindow(
    uint32_t in_change_id, uint64_t in_window_id, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& in_properties) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::NewWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_NewWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_NewWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  typename decltype(params->properties)::BaseType::BufferWriter
      properties_writer;
  const mojo::internal::ContainerValidateParams properties_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
      in_properties, buffer, &properties_writer, &properties_validate_params,
      &serialization_context);
  params->properties.Set(
      properties_writer.is_null() ? nullptr : properties_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::NewTopLevelWindow(
    uint32_t in_change_id, uint64_t in_window_id, const base::flat_map<std::string, std::vector<uint8_t>>& in_properties) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::NewTopLevelWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_NewTopLevelWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_NewTopLevelWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  typename decltype(params->properties)::BaseType::BufferWriter
      properties_writer;
  const mojo::internal::ContainerValidateParams properties_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
      in_properties, buffer, &properties_writer, &properties_validate_params,
      &serialization_context);
  params->properties.Set(
      properties_writer.is_null() ? nullptr : properties_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->properties.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null properties in WindowTree.NewTopLevelWindow request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::DeleteWindow(
    uint32_t in_change_id, uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::DeleteWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_DeleteWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_DeleteWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetCapture(
    uint32_t in_change_id, uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::SetCapture");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetCapture_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_SetCapture_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::ReleaseCapture(
    uint32_t in_change_id, uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::ReleaseCapture");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_ReleaseCapture_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_ReleaseCapture_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::StartPointerWatcher(
    bool in_want_moves) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::StartPointerWatcher");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_StartPointerWatcher_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_StartPointerWatcher_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->want_moves = in_want_moves;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::StopPointerWatcher(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::StopPointerWatcher");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_StopPointerWatcher_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_StopPointerWatcher_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetWindowBounds(
    uint32_t in_change_id, uint64_t in_window_id, const gfx::Rect& in_bounds, const base::Optional<viz::LocalSurfaceId>& in_local_surface_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::SetWindowBounds");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetWindowBounds_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_SetWindowBounds_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  typename decltype(params->bounds)::BaseType::BufferWriter
      bounds_writer;
  mojo::internal::Serialize<::gfx::mojom::RectDataView>(
      in_bounds, buffer, &bounds_writer, &serialization_context);
  params->bounds.Set(
      bounds_writer.is_null() ? nullptr : bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bounds in WindowTree.SetWindowBounds request");
  typename decltype(params->local_surface_id)::BaseType::BufferWriter
      local_surface_id_writer;
  mojo::internal::Serialize<::viz::mojom::LocalSurfaceIdDataView>(
      in_local_surface_id, buffer, &local_surface_id_writer, &serialization_context);
  params->local_surface_id.Set(
      local_surface_id_writer.is_null() ? nullptr : local_surface_id_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetWindowTransform(
    uint32_t in_change_id, uint64_t in_window_id, const gfx::Transform& in_transform) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::SetWindowTransform");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetWindowTransform_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_SetWindowTransform_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  typename decltype(params->transform)::BaseType::BufferWriter
      transform_writer;
  mojo::internal::Serialize<::gfx::mojom::TransformDataView>(
      in_transform, buffer, &transform_writer, &serialization_context);
  params->transform.Set(
      transform_writer.is_null() ? nullptr : transform_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->transform.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null transform in WindowTree.SetWindowTransform request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetClientArea(
    uint64_t in_window_id, const gfx::Insets& in_insets, const base::Optional<std::vector<gfx::Rect>>& in_additional_client_areas) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::SetClientArea");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetClientArea_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_SetClientArea_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  typename decltype(params->insets)::BaseType::BufferWriter
      insets_writer;
  mojo::internal::Serialize<::gfx::mojom::InsetsDataView>(
      in_insets, buffer, &insets_writer, &serialization_context);
  params->insets.Set(
      insets_writer.is_null() ? nullptr : insets_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->insets.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null insets in WindowTree.SetClientArea request");
  typename decltype(params->additional_client_areas)::BaseType::BufferWriter
      additional_client_areas_writer;
  const mojo::internal::ContainerValidateParams additional_client_areas_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::RectDataView>>(
      in_additional_client_areas, buffer, &additional_client_areas_writer, &additional_client_areas_validate_params,
      &serialization_context);
  params->additional_client_areas.Set(
      additional_client_areas_writer.is_null() ? nullptr : additional_client_areas_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetHitTestMask(
    uint64_t in_window_id, const base::Optional<gfx::Rect>& in_mask) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::SetHitTestMask");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetHitTestMask_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_SetHitTestMask_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  typename decltype(params->mask)::BaseType::BufferWriter
      mask_writer;
  mojo::internal::Serialize<::gfx::mojom::RectDataView>(
      in_mask, buffer, &mask_writer, &serialization_context);
  params->mask.Set(
      mask_writer.is_null() ? nullptr : mask_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetCanAcceptDrops(
    uint64_t in_window_id, bool in_accepts_drops) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::SetCanAcceptDrops");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetCanAcceptDrops_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_SetCanAcceptDrops_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  params->accepts_drops = in_accepts_drops;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetWindowVisibility(
    uint32_t in_change_id, uint64_t in_window_id, bool in_visible) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::SetWindowVisibility");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetWindowVisibility_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_SetWindowVisibility_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  params->visible = in_visible;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetWindowProperty(
    uint32_t in_change_id, uint64_t in_window_id, const std::string& in_name, const base::Optional<std::vector<uint8_t>>& in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::SetWindowProperty");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetWindowProperty_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_SetWindowProperty_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in WindowTree.SetWindowProperty request");
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetWindowOpacity(
    uint32_t in_change_id, uint64_t in_window_id, float in_opacity) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::SetWindowOpacity");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetWindowOpacity_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_SetWindowOpacity_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  params->opacity = in_opacity;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::AttachCompositorFrameSink(
    uint64_t in_window_id, ::viz::mojom::CompositorFrameSinkRequest in_compositor_frame_sink, ::viz::mojom::CompositorFrameSinkClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::AttachCompositorFrameSink");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_AttachCompositorFrameSink_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_AttachCompositorFrameSink_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  mojo::internal::Serialize<::viz::mojom::CompositorFrameSinkRequestDataView>(
      in_compositor_frame_sink, &params->compositor_frame_sink, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->compositor_frame_sink),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid compositor_frame_sink in WindowTree.AttachCompositorFrameSink request");
  mojo::internal::Serialize<::viz::mojom::CompositorFrameSinkClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in WindowTree.AttachCompositorFrameSink request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::AddWindow(
    uint32_t in_change_id, uint64_t in_parent, uint64_t in_child) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::AddWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_AddWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_AddWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->parent = in_parent;
  params->child = in_child;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::RemoveWindowFromParent(
    uint32_t in_change_id, uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::RemoveWindowFromParent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_RemoveWindowFromParent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_RemoveWindowFromParent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::AddTransientWindow(
    uint32_t in_change_id, uint64_t in_window_id, uint64_t in_transient_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::AddTransientWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_AddTransientWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_AddTransientWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  params->transient_window_id = in_transient_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::RemoveTransientWindowFromParent(
    uint32_t in_change_id, uint64_t in_transient_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::RemoveTransientWindowFromParent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_RemoveTransientWindowFromParent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_RemoveTransientWindowFromParent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->transient_window_id = in_transient_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetModalType(
    uint32_t in_change_id, uint64_t in_window_id, ui::ModalType in_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::SetModalType");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetModalType_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_SetModalType_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  mojo::internal::Serialize<::ui::mojom::ModalType>(
      in_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetChildModalParent(
    uint32_t in_change_id, uint64_t in_window_id, uint64_t in_parent_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::SetChildModalParent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetChildModalParent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_SetChildModalParent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  params->parent_window_id = in_parent_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::ReorderWindow(
    uint32_t in_change_id, uint64_t in_window_id, uint64_t in_relative_window_id, ::ui::mojom::OrderDirection in_direction) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::ReorderWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_ReorderWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_ReorderWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  params->relative_window_id = in_relative_window_id;
  mojo::internal::Serialize<::ui::mojom::OrderDirection>(
      in_direction, &params->direction);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::GetWindowTree(
    uint64_t in_window_id, GetWindowTreeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::GetWindowTree");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_GetWindowTree_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_GetWindowTree_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTree_GetWindowTree_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeProxy::Embed(
    uint64_t in_window_id, WindowTreeClientPtr in_client, uint32_t in_embed_flags, EmbedCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::Embed");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_Embed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_Embed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  mojo::internal::Serialize<::ui::mojom::WindowTreeClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in WindowTree.Embed request");
  params->embed_flags = in_embed_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTree_Embed_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeProxy::ScheduleEmbed(
    WindowTreeClientPtr in_client, ScheduleEmbedCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::ScheduleEmbed");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_ScheduleEmbed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_ScheduleEmbed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::WindowTreeClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in WindowTree.ScheduleEmbed request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTree_ScheduleEmbed_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeProxy::ScheduleEmbedForExistingClient(
    uint32_t in_window_id, ScheduleEmbedForExistingClientCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::ScheduleEmbedForExistingClient");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_ScheduleEmbedForExistingClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_ScheduleEmbedForExistingClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTree_ScheduleEmbedForExistingClient_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeProxy::EmbedUsingToken(
    uint64_t in_window_id, const base::UnguessableToken& in_token, uint32_t in_embed_flags, EmbedUsingTokenCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::EmbedUsingToken");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_EmbedUsingToken_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_EmbedUsingToken_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  typename decltype(params->token)::BaseType::BufferWriter
      token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_token, buffer, &token_writer, &serialization_context);
  params->token.Set(
      token_writer.is_null() ? nullptr : token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null token in WindowTree.EmbedUsingToken request");
  params->embed_flags = in_embed_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTree_EmbedUsingToken_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeProxy::SetFocus(
    uint32_t in_change_id, uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::SetFocus");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetFocus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_SetFocus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetCanFocus(
    uint64_t in_window_id, bool in_can_focus) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::SetCanFocus");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetCanFocus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_SetCanFocus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  params->can_focus = in_can_focus;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetCursor(
    uint32_t in_change_id, uint64_t in_window_id, ui::CursorData in_cursor) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::SetCursor");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetCursor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_SetCursor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  typename decltype(params->cursor)::BaseType::BufferWriter
      cursor_writer;
  mojo::internal::Serialize<::ui::mojom::CursorDataDataView>(
      in_cursor, buffer, &cursor_writer, &serialization_context);
  params->cursor.Set(
      cursor_writer.is_null() ? nullptr : cursor_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cursor.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cursor in WindowTree.SetCursor request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetWindowTextInputState(
    uint64_t in_window_id, ::ui::mojom::TextInputStatePtr in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::SetWindowTextInputState");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetWindowTextInputState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_SetWindowTextInputState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  typename decltype(params->state)::BaseType::BufferWriter
      state_writer;
  mojo::internal::Serialize<::ui::mojom::TextInputStateDataView>(
      in_state, buffer, &state_writer, &serialization_context);
  params->state.Set(
      state_writer.is_null() ? nullptr : state_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->state.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null state in WindowTree.SetWindowTextInputState request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetImeVisibility(
    uint64_t in_window_id, bool in_visible, ::ui::mojom::TextInputStatePtr in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::SetImeVisibility");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetImeVisibility_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_SetImeVisibility_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  params->visible = in_visible;
  typename decltype(params->state)::BaseType::BufferWriter
      state_writer;
  mojo::internal::Serialize<::ui::mojom::TextInputStateDataView>(
      in_state, buffer, &state_writer, &serialization_context);
  params->state.Set(
      state_writer.is_null() ? nullptr : state_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetEventTargetingPolicy(
    uint64_t in_window_id, ::ui::mojom::EventTargetingPolicy in_policy) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::SetEventTargetingPolicy");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetEventTargetingPolicy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_SetEventTargetingPolicy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  mojo::internal::Serialize<::ui::mojom::EventTargetingPolicy>(
      in_policy, &params->policy);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::OnWindowInputEventAck(
    uint32_t in_event_id, ::ui::mojom::EventResult in_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::OnWindowInputEventAck");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_OnWindowInputEventAck_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_OnWindowInputEventAck_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->event_id = in_event_id;
  mojo::internal::Serialize<::ui::mojom::EventResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::DeactivateWindow(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::DeactivateWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_DeactivateWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_DeactivateWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::StackAbove(
    uint32_t in_change_id, uint64_t in_above_id, uint64_t in_below_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::StackAbove");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_StackAbove_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_StackAbove_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->above_id = in_above_id;
  params->below_id = in_below_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::StackAtTop(
    uint32_t in_change_id, uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::StackAtTop");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_StackAtTop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_StackAtTop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::PerformWmAction(
    uint64_t in_window_id, const std::string& in_action) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::PerformWmAction");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_PerformWmAction_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_PerformWmAction_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  typename decltype(params->action)::BaseType::BufferWriter
      action_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_action, buffer, &action_writer, &serialization_context);
  params->action.Set(
      action_writer.is_null() ? nullptr : action_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->action.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null action in WindowTree.PerformWmAction request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::GetWindowManagerClient(
    ::ui::mojom::WindowManagerClientAssociatedRequest in_internal) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::GetWindowManagerClient");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_GetWindowManagerClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_GetWindowManagerClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::WindowManagerClientAssociatedRequestDataView>(
      in_internal, &params->internal, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->internal),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid internal in WindowTree.GetWindowManagerClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::GetCursorLocationMemory(
    GetCursorLocationMemoryCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::GetCursorLocationMemory");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_GetCursorLocationMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_GetCursorLocationMemory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTree_GetCursorLocationMemory_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeProxy::PerformWindowMove(
    uint32_t in_change_id, uint64_t in_window_id, ::ui::mojom::MoveLoopSource in_source, const gfx::Point& in_cursor) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::PerformWindowMove");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_PerformWindowMove_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_PerformWindowMove_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  mojo::internal::Serialize<::ui::mojom::MoveLoopSource>(
      in_source, &params->source);
  typename decltype(params->cursor)::BaseType::BufferWriter
      cursor_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_cursor, buffer, &cursor_writer, &serialization_context);
  params->cursor.Set(
      cursor_writer.is_null() ? nullptr : cursor_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cursor.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cursor in WindowTree.PerformWindowMove request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::CancelWindowMove(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::CancelWindowMove");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_CancelWindowMove_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_CancelWindowMove_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::PerformDragDrop(
    uint32_t in_change_id, uint64_t in_source_window_id, const gfx::Point& in_screen_location, const base::flat_map<std::string, std::vector<uint8_t>>& in_drag_data, const SkBitmap& in_drag_image, const gfx::Vector2d& in_drag_image_offset, uint32_t in_drag_operation, ::ui::mojom::PointerKind in_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::PerformDragDrop");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_PerformDragDrop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_PerformDragDrop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->source_window_id = in_source_window_id;
  typename decltype(params->screen_location)::BaseType::BufferWriter
      screen_location_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_screen_location, buffer, &screen_location_writer, &serialization_context);
  params->screen_location.Set(
      screen_location_writer.is_null() ? nullptr : screen_location_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->screen_location.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null screen_location in WindowTree.PerformDragDrop request");
  typename decltype(params->drag_data)::BaseType::BufferWriter
      drag_data_writer;
  const mojo::internal::ContainerValidateParams drag_data_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
      in_drag_data, buffer, &drag_data_writer, &drag_data_validate_params,
      &serialization_context);
  params->drag_data.Set(
      drag_data_writer.is_null() ? nullptr : drag_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->drag_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null drag_data in WindowTree.PerformDragDrop request");
  typename decltype(params->drag_image)::BaseType::BufferWriter
      drag_image_writer;
  mojo::internal::Serialize<::skia::mojom::BitmapDataView>(
      in_drag_image, buffer, &drag_image_writer, &serialization_context);
  params->drag_image.Set(
      drag_image_writer.is_null() ? nullptr : drag_image_writer.data());
  typename decltype(params->drag_image_offset)::BaseType::BufferWriter
      drag_image_offset_writer;
  mojo::internal::Serialize<::gfx::mojom::Vector2dDataView>(
      in_drag_image_offset, buffer, &drag_image_offset_writer, &serialization_context);
  params->drag_image_offset.Set(
      drag_image_offset_writer.is_null() ? nullptr : drag_image_offset_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->drag_image_offset.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null drag_image_offset in WindowTree.PerformDragDrop request");
  params->drag_operation = in_drag_operation;
  mojo::internal::Serialize<::ui::mojom::PointerKind>(
      in_source, &params->source);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::CancelDragDrop(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTree::CancelDragDrop");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_CancelDragDrop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_CancelDragDrop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class WindowTree_GetWindowTree_ProxyToResponder {
 public:
  static WindowTree::GetWindowTreeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTree_GetWindowTree_ProxyToResponder> proxy(
        new WindowTree_GetWindowTree_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTree_GetWindowTree_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTree_GetWindowTree_ProxyToResponder() {
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
  WindowTree_GetWindowTree_ProxyToResponder(
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
        << "WindowTree::GetWindowTreeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<::ui::mojom::WindowDataPtr> in_windows);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WindowTree_GetWindowTree_ProxyToResponder);
};

bool WindowTree_GetWindowTree_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::WindowTree::GetWindowTreeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTree_GetWindowTree_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTree_GetWindowTree_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<::ui::mojom::WindowDataPtr> p_windows{};
  WindowTree_GetWindowTree_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadWindows(&p_windows))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WindowTree::GetWindowTree response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_windows));
  return true;
}

void WindowTree_GetWindowTree_ProxyToResponder::Run(
    std::vector<::ui::mojom::WindowDataPtr> in_windows) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_GetWindowTree_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_GetWindowTree_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->windows)::BaseType::BufferWriter
      windows_writer;
  const mojo::internal::ContainerValidateParams windows_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::WindowDataDataView>>(
      in_windows, buffer, &windows_writer, &windows_validate_params,
      &serialization_context);
  params->windows.Set(
      windows_writer.is_null() ? nullptr : windows_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->windows.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null windows in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::GetWindowTreeCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowTree_Embed_ProxyToResponder {
 public:
  static WindowTree::EmbedCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTree_Embed_ProxyToResponder> proxy(
        new WindowTree_Embed_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTree_Embed_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTree_Embed_ProxyToResponder() {
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
  WindowTree_Embed_ProxyToResponder(
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
        << "WindowTree::EmbedCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(WindowTree_Embed_ProxyToResponder);
};

bool WindowTree_Embed_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::WindowTree::EmbedCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTree_Embed_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTree_Embed_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  WindowTree_Embed_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WindowTree::Embed response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void WindowTree_Embed_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_Embed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_Embed_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::EmbedCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowTree_ScheduleEmbed_ProxyToResponder {
 public:
  static WindowTree::ScheduleEmbedCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTree_ScheduleEmbed_ProxyToResponder> proxy(
        new WindowTree_ScheduleEmbed_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTree_ScheduleEmbed_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTree_ScheduleEmbed_ProxyToResponder() {
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
  WindowTree_ScheduleEmbed_ProxyToResponder(
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
        << "WindowTree::ScheduleEmbedCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::UnguessableToken& in_token);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WindowTree_ScheduleEmbed_ProxyToResponder);
};

bool WindowTree_ScheduleEmbed_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::WindowTree::ScheduleEmbedCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTree_ScheduleEmbed_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTree_ScheduleEmbed_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::UnguessableToken p_token{};
  WindowTree_ScheduleEmbed_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadToken(&p_token))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WindowTree::ScheduleEmbed response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_token));
  return true;
}

void WindowTree_ScheduleEmbed_ProxyToResponder::Run(
    const base::UnguessableToken& in_token) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_ScheduleEmbed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_ScheduleEmbed_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->token)::BaseType::BufferWriter
      token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_token, buffer, &token_writer, &serialization_context);
  params->token.Set(
      token_writer.is_null() ? nullptr : token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null token in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::ScheduleEmbedCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder {
 public:
  static WindowTree::ScheduleEmbedForExistingClientCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder> proxy(
        new WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder() {
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
  WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder(
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
        << "WindowTree::ScheduleEmbedForExistingClientCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::UnguessableToken& in_token);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder);
};

bool WindowTree_ScheduleEmbedForExistingClient_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::WindowTree::ScheduleEmbedForExistingClientCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::UnguessableToken p_token{};
  WindowTree_ScheduleEmbedForExistingClient_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadToken(&p_token))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WindowTree::ScheduleEmbedForExistingClient response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_token));
  return true;
}

void WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder::Run(
    const base::UnguessableToken& in_token) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_ScheduleEmbedForExistingClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->token)::BaseType::BufferWriter
      token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_token, buffer, &token_writer, &serialization_context);
  params->token.Set(
      token_writer.is_null() ? nullptr : token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null token in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::ScheduleEmbedForExistingClientCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowTree_EmbedUsingToken_ProxyToResponder {
 public:
  static WindowTree::EmbedUsingTokenCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTree_EmbedUsingToken_ProxyToResponder> proxy(
        new WindowTree_EmbedUsingToken_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTree_EmbedUsingToken_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTree_EmbedUsingToken_ProxyToResponder() {
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
  WindowTree_EmbedUsingToken_ProxyToResponder(
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
        << "WindowTree::EmbedUsingTokenCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(WindowTree_EmbedUsingToken_ProxyToResponder);
};

bool WindowTree_EmbedUsingToken_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::WindowTree::EmbedUsingTokenCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTree_EmbedUsingToken_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTree_EmbedUsingToken_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  WindowTree_EmbedUsingToken_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WindowTree::EmbedUsingToken response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void WindowTree_EmbedUsingToken_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_EmbedUsingToken_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_EmbedUsingToken_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::EmbedUsingTokenCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowTree_GetCursorLocationMemory_ProxyToResponder {
 public:
  static WindowTree::GetCursorLocationMemoryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTree_GetCursorLocationMemory_ProxyToResponder> proxy(
        new WindowTree_GetCursorLocationMemory_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTree_GetCursorLocationMemory_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTree_GetCursorLocationMemory_ProxyToResponder() {
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
  WindowTree_GetCursorLocationMemory_ProxyToResponder(
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
        << "WindowTree::GetCursorLocationMemoryCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      mojo::ScopedSharedBufferHandle in_cursor_buffer);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WindowTree_GetCursorLocationMemory_ProxyToResponder);
};

bool WindowTree_GetCursorLocationMemory_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::WindowTree::GetCursorLocationMemoryCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTree_GetCursorLocationMemory_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTree_GetCursorLocationMemory_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  mojo::ScopedSharedBufferHandle p_cursor_buffer{};
  WindowTree_GetCursorLocationMemory_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_cursor_buffer = input_data_view.TakeCursorBuffer();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WindowTree::GetCursorLocationMemory response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_cursor_buffer));
  return true;
}

void WindowTree_GetCursorLocationMemory_ProxyToResponder::Run(
    mojo::ScopedSharedBufferHandle in_cursor_buffer) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_GetCursorLocationMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTree_GetCursorLocationMemory_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_cursor_buffer, &params->cursor_buffer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->cursor_buffer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid cursor_buffer in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::GetCursorLocationMemoryCallback",
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
bool WindowTreeStubDispatch::Accept(
    WindowTree* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWindowTree_NewWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::NewWindow",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_NewWindow_Params_Data* params =
          reinterpret_cast<internal::WindowTree_NewWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      base::Optional<base::flat_map<std::string, std::vector<uint8_t>>> p_properties{};
      WindowTree_NewWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadProperties(&p_properties))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::NewWindow deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->NewWindow(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_properties));
      return true;
    }
    case internal::kWindowTree_NewTopLevelWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::NewTopLevelWindow",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_NewTopLevelWindow_Params_Data* params =
          reinterpret_cast<internal::WindowTree_NewTopLevelWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      base::flat_map<std::string, std::vector<uint8_t>> p_properties{};
      WindowTree_NewTopLevelWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadProperties(&p_properties))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::NewTopLevelWindow deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->NewTopLevelWindow(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_properties));
      return true;
    }
    case internal::kWindowTree_DeleteWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::DeleteWindow",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_DeleteWindow_Params_Data* params =
          reinterpret_cast<internal::WindowTree_DeleteWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      WindowTree_DeleteWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::DeleteWindow deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DeleteWindow(
std::move(p_change_id), 
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_SetCapture_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetCapture",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetCapture_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetCapture_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      WindowTree_SetCapture_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::SetCapture deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetCapture(
std::move(p_change_id), 
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_ReleaseCapture_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::ReleaseCapture",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_ReleaseCapture_Params_Data* params =
          reinterpret_cast<internal::WindowTree_ReleaseCapture_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      WindowTree_ReleaseCapture_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::ReleaseCapture deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReleaseCapture(
std::move(p_change_id), 
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_StartPointerWatcher_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::StartPointerWatcher",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_StartPointerWatcher_Params_Data* params =
          reinterpret_cast<internal::WindowTree_StartPointerWatcher_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_want_moves{};
      WindowTree_StartPointerWatcher_ParamsDataView input_data_view(params, &serialization_context);
      
      p_want_moves = input_data_view.want_moves();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::StartPointerWatcher deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartPointerWatcher(
std::move(p_want_moves));
      return true;
    }
    case internal::kWindowTree_StopPointerWatcher_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::StopPointerWatcher",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_StopPointerWatcher_Params_Data* params =
          reinterpret_cast<internal::WindowTree_StopPointerWatcher_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WindowTree_StopPointerWatcher_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::StopPointerWatcher deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StopPointerWatcher();
      return true;
    }
    case internal::kWindowTree_SetWindowBounds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetWindowBounds",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetWindowBounds_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetWindowBounds_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      gfx::Rect p_bounds{};
      base::Optional<viz::LocalSurfaceId> p_local_surface_id{};
      WindowTree_SetWindowBounds_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadBounds(&p_bounds))
        success = false;
      if (!input_data_view.ReadLocalSurfaceId(&p_local_surface_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::SetWindowBounds deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetWindowBounds(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_bounds), 
std::move(p_local_surface_id));
      return true;
    }
    case internal::kWindowTree_SetWindowTransform_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetWindowTransform",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetWindowTransform_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetWindowTransform_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      gfx::Transform p_transform{};
      WindowTree_SetWindowTransform_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadTransform(&p_transform))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::SetWindowTransform deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetWindowTransform(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_transform));
      return true;
    }
    case internal::kWindowTree_SetClientArea_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetClientArea",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetClientArea_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetClientArea_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      gfx::Insets p_insets{};
      base::Optional<std::vector<gfx::Rect>> p_additional_client_areas{};
      WindowTree_SetClientArea_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadInsets(&p_insets))
        success = false;
      if (!input_data_view.ReadAdditionalClientAreas(&p_additional_client_areas))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::SetClientArea deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetClientArea(
std::move(p_window_id), 
std::move(p_insets), 
std::move(p_additional_client_areas));
      return true;
    }
    case internal::kWindowTree_SetHitTestMask_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetHitTestMask",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetHitTestMask_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetHitTestMask_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      base::Optional<gfx::Rect> p_mask{};
      WindowTree_SetHitTestMask_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadMask(&p_mask))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::SetHitTestMask deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetHitTestMask(
std::move(p_window_id), 
std::move(p_mask));
      return true;
    }
    case internal::kWindowTree_SetCanAcceptDrops_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetCanAcceptDrops",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetCanAcceptDrops_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetCanAcceptDrops_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      bool p_accepts_drops{};
      WindowTree_SetCanAcceptDrops_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      p_accepts_drops = input_data_view.accepts_drops();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::SetCanAcceptDrops deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetCanAcceptDrops(
std::move(p_window_id), 
std::move(p_accepts_drops));
      return true;
    }
    case internal::kWindowTree_SetWindowVisibility_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetWindowVisibility",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetWindowVisibility_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetWindowVisibility_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      bool p_visible{};
      WindowTree_SetWindowVisibility_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      p_visible = input_data_view.visible();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::SetWindowVisibility deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetWindowVisibility(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_visible));
      return true;
    }
    case internal::kWindowTree_SetWindowProperty_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetWindowProperty",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetWindowProperty_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetWindowProperty_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      std::string p_name{};
      base::Optional<std::vector<uint8_t>> p_value{};
      WindowTree_SetWindowProperty_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::SetWindowProperty deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetWindowProperty(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_name), 
std::move(p_value));
      return true;
    }
    case internal::kWindowTree_SetWindowOpacity_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetWindowOpacity",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetWindowOpacity_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetWindowOpacity_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      float p_opacity{};
      WindowTree_SetWindowOpacity_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      p_opacity = input_data_view.opacity();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::SetWindowOpacity deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetWindowOpacity(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_opacity));
      return true;
    }
    case internal::kWindowTree_AttachCompositorFrameSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::AttachCompositorFrameSink",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_AttachCompositorFrameSink_Params_Data* params =
          reinterpret_cast<internal::WindowTree_AttachCompositorFrameSink_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      ::viz::mojom::CompositorFrameSinkRequest p_compositor_frame_sink{};
      ::viz::mojom::CompositorFrameSinkClientPtr p_client{};
      WindowTree_AttachCompositorFrameSink_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      p_compositor_frame_sink =
          input_data_view.TakeCompositorFrameSink<decltype(p_compositor_frame_sink)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::AttachCompositorFrameSink deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AttachCompositorFrameSink(
std::move(p_window_id), 
std::move(p_compositor_frame_sink), 
std::move(p_client));
      return true;
    }
    case internal::kWindowTree_AddWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::AddWindow",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_AddWindow_Params_Data* params =
          reinterpret_cast<internal::WindowTree_AddWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_parent{};
      uint64_t p_child{};
      WindowTree_AddWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_parent = input_data_view.parent();
      p_child = input_data_view.child();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::AddWindow deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddWindow(
std::move(p_change_id), 
std::move(p_parent), 
std::move(p_child));
      return true;
    }
    case internal::kWindowTree_RemoveWindowFromParent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::RemoveWindowFromParent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_RemoveWindowFromParent_Params_Data* params =
          reinterpret_cast<internal::WindowTree_RemoveWindowFromParent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      WindowTree_RemoveWindowFromParent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::RemoveWindowFromParent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoveWindowFromParent(
std::move(p_change_id), 
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_AddTransientWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::AddTransientWindow",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_AddTransientWindow_Params_Data* params =
          reinterpret_cast<internal::WindowTree_AddTransientWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      uint64_t p_transient_window_id{};
      WindowTree_AddTransientWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      p_transient_window_id = input_data_view.transient_window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::AddTransientWindow deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddTransientWindow(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_transient_window_id));
      return true;
    }
    case internal::kWindowTree_RemoveTransientWindowFromParent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::RemoveTransientWindowFromParent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_RemoveTransientWindowFromParent_Params_Data* params =
          reinterpret_cast<internal::WindowTree_RemoveTransientWindowFromParent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_transient_window_id{};
      WindowTree_RemoveTransientWindowFromParent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_transient_window_id = input_data_view.transient_window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::RemoveTransientWindowFromParent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoveTransientWindowFromParent(
std::move(p_change_id), 
std::move(p_transient_window_id));
      return true;
    }
    case internal::kWindowTree_SetModalType_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetModalType",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetModalType_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetModalType_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      ui::ModalType p_type{};
      WindowTree_SetModalType_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::SetModalType deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetModalType(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_type));
      return true;
    }
    case internal::kWindowTree_SetChildModalParent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetChildModalParent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetChildModalParent_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetChildModalParent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      uint64_t p_parent_window_id{};
      WindowTree_SetChildModalParent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      p_parent_window_id = input_data_view.parent_window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::SetChildModalParent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetChildModalParent(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_parent_window_id));
      return true;
    }
    case internal::kWindowTree_ReorderWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::ReorderWindow",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_ReorderWindow_Params_Data* params =
          reinterpret_cast<internal::WindowTree_ReorderWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      uint64_t p_relative_window_id{};
      ::ui::mojom::OrderDirection p_direction{};
      WindowTree_ReorderWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      p_relative_window_id = input_data_view.relative_window_id();
      if (!input_data_view.ReadDirection(&p_direction))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::ReorderWindow deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReorderWindow(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_relative_window_id), 
std::move(p_direction));
      return true;
    }
    case internal::kWindowTree_GetWindowTree_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::GetWindowTree",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_Embed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::Embed",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_ScheduleEmbed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::ScheduleEmbed",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_ScheduleEmbedForExistingClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::ScheduleEmbedForExistingClient",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_EmbedUsingToken_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::EmbedUsingToken",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_SetFocus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetFocus",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetFocus_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetFocus_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      WindowTree_SetFocus_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::SetFocus deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetFocus(
std::move(p_change_id), 
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_SetCanFocus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetCanFocus",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetCanFocus_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetCanFocus_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      bool p_can_focus{};
      WindowTree_SetCanFocus_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      p_can_focus = input_data_view.can_focus();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::SetCanFocus deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetCanFocus(
std::move(p_window_id), 
std::move(p_can_focus));
      return true;
    }
    case internal::kWindowTree_SetCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetCursor",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetCursor_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetCursor_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      ui::CursorData p_cursor{};
      WindowTree_SetCursor_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadCursor(&p_cursor))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::SetCursor deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetCursor(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_cursor));
      return true;
    }
    case internal::kWindowTree_SetWindowTextInputState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetWindowTextInputState",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetWindowTextInputState_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetWindowTextInputState_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      ::ui::mojom::TextInputStatePtr p_state{};
      WindowTree_SetWindowTextInputState_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::SetWindowTextInputState deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetWindowTextInputState(
std::move(p_window_id), 
std::move(p_state));
      return true;
    }
    case internal::kWindowTree_SetImeVisibility_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetImeVisibility",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetImeVisibility_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetImeVisibility_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      bool p_visible{};
      ::ui::mojom::TextInputStatePtr p_state{};
      WindowTree_SetImeVisibility_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      p_visible = input_data_view.visible();
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::SetImeVisibility deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetImeVisibility(
std::move(p_window_id), 
std::move(p_visible), 
std::move(p_state));
      return true;
    }
    case internal::kWindowTree_SetEventTargetingPolicy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetEventTargetingPolicy",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetEventTargetingPolicy_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetEventTargetingPolicy_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      ::ui::mojom::EventTargetingPolicy p_policy{};
      WindowTree_SetEventTargetingPolicy_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadPolicy(&p_policy))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::SetEventTargetingPolicy deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetEventTargetingPolicy(
std::move(p_window_id), 
std::move(p_policy));
      return true;
    }
    case internal::kWindowTree_OnWindowInputEventAck_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::OnWindowInputEventAck",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_OnWindowInputEventAck_Params_Data* params =
          reinterpret_cast<internal::WindowTree_OnWindowInputEventAck_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_event_id{};
      ::ui::mojom::EventResult p_result{};
      WindowTree_OnWindowInputEventAck_ParamsDataView input_data_view(params, &serialization_context);
      
      p_event_id = input_data_view.event_id();
      if (!input_data_view.ReadResult(&p_result))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::OnWindowInputEventAck deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnWindowInputEventAck(
std::move(p_event_id), 
std::move(p_result));
      return true;
    }
    case internal::kWindowTree_DeactivateWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::DeactivateWindow",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_DeactivateWindow_Params_Data* params =
          reinterpret_cast<internal::WindowTree_DeactivateWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTree_DeactivateWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::DeactivateWindow deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DeactivateWindow(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_StackAbove_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::StackAbove",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_StackAbove_Params_Data* params =
          reinterpret_cast<internal::WindowTree_StackAbove_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_above_id{};
      uint64_t p_below_id{};
      WindowTree_StackAbove_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_above_id = input_data_view.above_id();
      p_below_id = input_data_view.below_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::StackAbove deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StackAbove(
std::move(p_change_id), 
std::move(p_above_id), 
std::move(p_below_id));
      return true;
    }
    case internal::kWindowTree_StackAtTop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::StackAtTop",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_StackAtTop_Params_Data* params =
          reinterpret_cast<internal::WindowTree_StackAtTop_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      WindowTree_StackAtTop_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::StackAtTop deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StackAtTop(
std::move(p_change_id), 
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_PerformWmAction_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::PerformWmAction",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_PerformWmAction_Params_Data* params =
          reinterpret_cast<internal::WindowTree_PerformWmAction_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      std::string p_action{};
      WindowTree_PerformWmAction_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadAction(&p_action))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::PerformWmAction deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PerformWmAction(
std::move(p_window_id), 
std::move(p_action));
      return true;
    }
    case internal::kWindowTree_GetWindowManagerClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::GetWindowManagerClient",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_GetWindowManagerClient_Params_Data* params =
          reinterpret_cast<internal::WindowTree_GetWindowManagerClient_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::ui::mojom::WindowManagerClientAssociatedRequest p_internal{};
      WindowTree_GetWindowManagerClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_internal =
          input_data_view.TakeInternal<decltype(p_internal)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::GetWindowManagerClient deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetWindowManagerClient(
std::move(p_internal));
      return true;
    }
    case internal::kWindowTree_GetCursorLocationMemory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::GetCursorLocationMemory",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_PerformWindowMove_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::PerformWindowMove",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_PerformWindowMove_Params_Data* params =
          reinterpret_cast<internal::WindowTree_PerformWindowMove_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      ::ui::mojom::MoveLoopSource p_source{};
      gfx::Point p_cursor{};
      WindowTree_PerformWindowMove_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!input_data_view.ReadCursor(&p_cursor))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::PerformWindowMove deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PerformWindowMove(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_source), 
std::move(p_cursor));
      return true;
    }
    case internal::kWindowTree_CancelWindowMove_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::CancelWindowMove",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_CancelWindowMove_Params_Data* params =
          reinterpret_cast<internal::WindowTree_CancelWindowMove_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTree_CancelWindowMove_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::CancelWindowMove deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CancelWindowMove(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_PerformDragDrop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::PerformDragDrop",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_PerformDragDrop_Params_Data* params =
          reinterpret_cast<internal::WindowTree_PerformDragDrop_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_source_window_id{};
      gfx::Point p_screen_location{};
      base::flat_map<std::string, std::vector<uint8_t>> p_drag_data{};
      SkBitmap p_drag_image{};
      gfx::Vector2d p_drag_image_offset{};
      uint32_t p_drag_operation{};
      ::ui::mojom::PointerKind p_source{};
      WindowTree_PerformDragDrop_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_source_window_id = input_data_view.source_window_id();
      if (!input_data_view.ReadScreenLocation(&p_screen_location))
        success = false;
      if (!input_data_view.ReadDragData(&p_drag_data))
        success = false;
      if (!input_data_view.ReadDragImage(&p_drag_image))
        success = false;
      if (!input_data_view.ReadDragImageOffset(&p_drag_image_offset))
        success = false;
      p_drag_operation = input_data_view.drag_operation();
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::PerformDragDrop deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PerformDragDrop(
std::move(p_change_id), 
std::move(p_source_window_id), 
std::move(p_screen_location), 
std::move(p_drag_data), 
std::move(p_drag_image), 
std::move(p_drag_image_offset), 
std::move(p_drag_operation), 
std::move(p_source));
      return true;
    }
    case internal::kWindowTree_CancelDragDrop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::CancelDragDrop",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_CancelDragDrop_Params_Data* params =
          reinterpret_cast<internal::WindowTree_CancelDragDrop_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTree_CancelDragDrop_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::CancelDragDrop deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CancelDragDrop(
std::move(p_window_id));
      return true;
    }
  }
  return false;
}

// static
bool WindowTreeStubDispatch::AcceptWithResponder(
    WindowTree* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWindowTree_NewWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::NewWindow",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_NewTopLevelWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::NewTopLevelWindow",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_DeleteWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::DeleteWindow",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_SetCapture_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetCapture",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_ReleaseCapture_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::ReleaseCapture",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_StartPointerWatcher_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::StartPointerWatcher",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_StopPointerWatcher_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::StopPointerWatcher",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_SetWindowBounds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetWindowBounds",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_SetWindowTransform_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetWindowTransform",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_SetClientArea_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetClientArea",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_SetHitTestMask_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetHitTestMask",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_SetCanAcceptDrops_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetCanAcceptDrops",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_SetWindowVisibility_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetWindowVisibility",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_SetWindowProperty_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetWindowProperty",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_SetWindowOpacity_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetWindowOpacity",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_AttachCompositorFrameSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::AttachCompositorFrameSink",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_AddWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::AddWindow",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_RemoveWindowFromParent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::RemoveWindowFromParent",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_AddTransientWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::AddTransientWindow",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_RemoveTransientWindowFromParent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::RemoveTransientWindowFromParent",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_SetModalType_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetModalType",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_SetChildModalParent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetChildModalParent",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_ReorderWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::ReorderWindow",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_GetWindowTree_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::GetWindowTree",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTree_GetWindowTree_Params_Data* params =
          reinterpret_cast<
              internal::WindowTree_GetWindowTree_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTree_GetWindowTree_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::GetWindowTree deserializer");
        return false;
      }
      WindowTree::GetWindowTreeCallback callback =
          WindowTree_GetWindowTree_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetWindowTree(
std::move(p_window_id), std::move(callback));
      return true;
    }
    case internal::kWindowTree_Embed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::Embed",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTree_Embed_Params_Data* params =
          reinterpret_cast<
              internal::WindowTree_Embed_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTreeClientPtr p_client{};
      uint32_t p_embed_flags{};
      WindowTree_Embed_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      p_embed_flags = input_data_view.embed_flags();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::Embed deserializer");
        return false;
      }
      WindowTree::EmbedCallback callback =
          WindowTree_Embed_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Embed(
std::move(p_window_id), 
std::move(p_client), 
std::move(p_embed_flags), std::move(callback));
      return true;
    }
    case internal::kWindowTree_ScheduleEmbed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::ScheduleEmbed",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTree_ScheduleEmbed_Params_Data* params =
          reinterpret_cast<
              internal::WindowTree_ScheduleEmbed_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WindowTreeClientPtr p_client{};
      WindowTree_ScheduleEmbed_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::ScheduleEmbed deserializer");
        return false;
      }
      WindowTree::ScheduleEmbedCallback callback =
          WindowTree_ScheduleEmbed_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ScheduleEmbed(
std::move(p_client), std::move(callback));
      return true;
    }
    case internal::kWindowTree_ScheduleEmbedForExistingClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::ScheduleEmbedForExistingClient",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTree_ScheduleEmbedForExistingClient_Params_Data* params =
          reinterpret_cast<
              internal::WindowTree_ScheduleEmbedForExistingClient_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_window_id{};
      WindowTree_ScheduleEmbedForExistingClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::ScheduleEmbedForExistingClient deserializer");
        return false;
      }
      WindowTree::ScheduleEmbedForExistingClientCallback callback =
          WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ScheduleEmbedForExistingClient(
std::move(p_window_id), std::move(callback));
      return true;
    }
    case internal::kWindowTree_EmbedUsingToken_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::EmbedUsingToken",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTree_EmbedUsingToken_Params_Data* params =
          reinterpret_cast<
              internal::WindowTree_EmbedUsingToken_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      base::UnguessableToken p_token{};
      uint32_t p_embed_flags{};
      WindowTree_EmbedUsingToken_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadToken(&p_token))
        success = false;
      p_embed_flags = input_data_view.embed_flags();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::EmbedUsingToken deserializer");
        return false;
      }
      WindowTree::EmbedUsingTokenCallback callback =
          WindowTree_EmbedUsingToken_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->EmbedUsingToken(
std::move(p_window_id), 
std::move(p_token), 
std::move(p_embed_flags), std::move(callback));
      return true;
    }
    case internal::kWindowTree_SetFocus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetFocus",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_SetCanFocus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetCanFocus",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_SetCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetCursor",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_SetWindowTextInputState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetWindowTextInputState",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_SetImeVisibility_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetImeVisibility",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_SetEventTargetingPolicy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::SetEventTargetingPolicy",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_OnWindowInputEventAck_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::OnWindowInputEventAck",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_DeactivateWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::DeactivateWindow",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_StackAbove_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::StackAbove",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_StackAtTop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::StackAtTop",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_PerformWmAction_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::PerformWmAction",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_GetWindowManagerClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::GetWindowManagerClient",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_GetCursorLocationMemory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::GetCursorLocationMemory",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTree_GetCursorLocationMemory_Params_Data* params =
          reinterpret_cast<
              internal::WindowTree_GetCursorLocationMemory_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WindowTree_GetCursorLocationMemory_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTree::GetCursorLocationMemory deserializer");
        return false;
      }
      WindowTree::GetCursorLocationMemoryCallback callback =
          WindowTree_GetCursorLocationMemory_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetCursorLocationMemory(std::move(callback));
      return true;
    }
    case internal::kWindowTree_PerformWindowMove_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::PerformWindowMove",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_CancelWindowMove_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::CancelWindowMove",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_PerformDragDrop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::PerformDragDrop",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTree_CancelDragDrop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTree::CancelDragDrop",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool WindowTreeRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowTree RequestValidator");

  switch (message->header()->name) {
    case internal::kWindowTree_NewWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_NewWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_NewTopLevelWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_NewTopLevelWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_DeleteWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_DeleteWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetCapture_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetCapture_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_ReleaseCapture_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_ReleaseCapture_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_StartPointerWatcher_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_StartPointerWatcher_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_StopPointerWatcher_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_StopPointerWatcher_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetWindowBounds_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetWindowBounds_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetWindowTransform_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetWindowTransform_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetClientArea_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetClientArea_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetHitTestMask_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetHitTestMask_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetCanAcceptDrops_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetCanAcceptDrops_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetWindowVisibility_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetWindowVisibility_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetWindowProperty_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetWindowProperty_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetWindowOpacity_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetWindowOpacity_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_AttachCompositorFrameSink_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_AttachCompositorFrameSink_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_AddWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_AddWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_RemoveWindowFromParent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_RemoveWindowFromParent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_AddTransientWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_AddTransientWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_RemoveTransientWindowFromParent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_RemoveTransientWindowFromParent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetModalType_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetModalType_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetChildModalParent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetChildModalParent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_ReorderWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_ReorderWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_GetWindowTree_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_GetWindowTree_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_Embed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_Embed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_ScheduleEmbed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_ScheduleEmbed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_ScheduleEmbedForExistingClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_ScheduleEmbedForExistingClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_EmbedUsingToken_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_EmbedUsingToken_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetFocus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetFocus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetCanFocus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetCanFocus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetCursor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetCursor_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetWindowTextInputState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetWindowTextInputState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetImeVisibility_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetImeVisibility_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetEventTargetingPolicy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetEventTargetingPolicy_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_OnWindowInputEventAck_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_OnWindowInputEventAck_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_DeactivateWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_DeactivateWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_StackAbove_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_StackAbove_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_StackAtTop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_StackAtTop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_PerformWmAction_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_PerformWmAction_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_GetWindowManagerClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_GetWindowManagerClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_GetCursorLocationMemory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_GetCursorLocationMemory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_PerformWindowMove_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_PerformWindowMove_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_CancelWindowMove_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_CancelWindowMove_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_PerformDragDrop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_PerformDragDrop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_CancelDragDrop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_CancelDragDrop_Params_Data>(
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

bool WindowTreeResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowTree ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kWindowTree_GetWindowTree_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_GetWindowTree_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_Embed_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_Embed_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_ScheduleEmbed_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_ScheduleEmbed_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_ScheduleEmbedForExistingClient_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_EmbedUsingToken_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_EmbedUsingToken_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_GetCursorLocationMemory_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_GetCursorLocationMemory_ResponseParams_Data>(
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
void WindowTreeInterceptorForTesting::NewWindow(uint32_t change_id, uint64_t window_id, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& properties) {
  GetForwardingInterface()->NewWindow(std::move(change_id), std::move(window_id), std::move(properties));
}
void WindowTreeInterceptorForTesting::NewTopLevelWindow(uint32_t change_id, uint64_t window_id, const base::flat_map<std::string, std::vector<uint8_t>>& properties) {
  GetForwardingInterface()->NewTopLevelWindow(std::move(change_id), std::move(window_id), std::move(properties));
}
void WindowTreeInterceptorForTesting::DeleteWindow(uint32_t change_id, uint64_t window_id) {
  GetForwardingInterface()->DeleteWindow(std::move(change_id), std::move(window_id));
}
void WindowTreeInterceptorForTesting::SetCapture(uint32_t change_id, uint64_t window_id) {
  GetForwardingInterface()->SetCapture(std::move(change_id), std::move(window_id));
}
void WindowTreeInterceptorForTesting::ReleaseCapture(uint32_t change_id, uint64_t window_id) {
  GetForwardingInterface()->ReleaseCapture(std::move(change_id), std::move(window_id));
}
void WindowTreeInterceptorForTesting::StartPointerWatcher(bool want_moves) {
  GetForwardingInterface()->StartPointerWatcher(std::move(want_moves));
}
void WindowTreeInterceptorForTesting::StopPointerWatcher() {
  GetForwardingInterface()->StopPointerWatcher();
}
void WindowTreeInterceptorForTesting::SetWindowBounds(uint32_t change_id, uint64_t window_id, const gfx::Rect& bounds, const base::Optional<viz::LocalSurfaceId>& local_surface_id) {
  GetForwardingInterface()->SetWindowBounds(std::move(change_id), std::move(window_id), std::move(bounds), std::move(local_surface_id));
}
void WindowTreeInterceptorForTesting::SetWindowTransform(uint32_t change_id, uint64_t window_id, const gfx::Transform& transform) {
  GetForwardingInterface()->SetWindowTransform(std::move(change_id), std::move(window_id), std::move(transform));
}
void WindowTreeInterceptorForTesting::SetClientArea(uint64_t window_id, const gfx::Insets& insets, const base::Optional<std::vector<gfx::Rect>>& additional_client_areas) {
  GetForwardingInterface()->SetClientArea(std::move(window_id), std::move(insets), std::move(additional_client_areas));
}
void WindowTreeInterceptorForTesting::SetHitTestMask(uint64_t window_id, const base::Optional<gfx::Rect>& mask) {
  GetForwardingInterface()->SetHitTestMask(std::move(window_id), std::move(mask));
}
void WindowTreeInterceptorForTesting::SetCanAcceptDrops(uint64_t window_id, bool accepts_drops) {
  GetForwardingInterface()->SetCanAcceptDrops(std::move(window_id), std::move(accepts_drops));
}
void WindowTreeInterceptorForTesting::SetWindowVisibility(uint32_t change_id, uint64_t window_id, bool visible) {
  GetForwardingInterface()->SetWindowVisibility(std::move(change_id), std::move(window_id), std::move(visible));
}
void WindowTreeInterceptorForTesting::SetWindowProperty(uint32_t change_id, uint64_t window_id, const std::string& name, const base::Optional<std::vector<uint8_t>>& value) {
  GetForwardingInterface()->SetWindowProperty(std::move(change_id), std::move(window_id), std::move(name), std::move(value));
}
void WindowTreeInterceptorForTesting::SetWindowOpacity(uint32_t change_id, uint64_t window_id, float opacity) {
  GetForwardingInterface()->SetWindowOpacity(std::move(change_id), std::move(window_id), std::move(opacity));
}
void WindowTreeInterceptorForTesting::AttachCompositorFrameSink(uint64_t window_id, ::viz::mojom::CompositorFrameSinkRequest compositor_frame_sink, ::viz::mojom::CompositorFrameSinkClientPtr client) {
  GetForwardingInterface()->AttachCompositorFrameSink(std::move(window_id), std::move(compositor_frame_sink), std::move(client));
}
void WindowTreeInterceptorForTesting::AddWindow(uint32_t change_id, uint64_t parent, uint64_t child) {
  GetForwardingInterface()->AddWindow(std::move(change_id), std::move(parent), std::move(child));
}
void WindowTreeInterceptorForTesting::RemoveWindowFromParent(uint32_t change_id, uint64_t window_id) {
  GetForwardingInterface()->RemoveWindowFromParent(std::move(change_id), std::move(window_id));
}
void WindowTreeInterceptorForTesting::AddTransientWindow(uint32_t change_id, uint64_t window_id, uint64_t transient_window_id) {
  GetForwardingInterface()->AddTransientWindow(std::move(change_id), std::move(window_id), std::move(transient_window_id));
}
void WindowTreeInterceptorForTesting::RemoveTransientWindowFromParent(uint32_t change_id, uint64_t transient_window_id) {
  GetForwardingInterface()->RemoveTransientWindowFromParent(std::move(change_id), std::move(transient_window_id));
}
void WindowTreeInterceptorForTesting::SetModalType(uint32_t change_id, uint64_t window_id, ui::ModalType type) {
  GetForwardingInterface()->SetModalType(std::move(change_id), std::move(window_id), std::move(type));
}
void WindowTreeInterceptorForTesting::SetChildModalParent(uint32_t change_id, uint64_t window_id, uint64_t parent_window_id) {
  GetForwardingInterface()->SetChildModalParent(std::move(change_id), std::move(window_id), std::move(parent_window_id));
}
void WindowTreeInterceptorForTesting::ReorderWindow(uint32_t change_id, uint64_t window_id, uint64_t relative_window_id, ::ui::mojom::OrderDirection direction) {
  GetForwardingInterface()->ReorderWindow(std::move(change_id), std::move(window_id), std::move(relative_window_id), std::move(direction));
}
void WindowTreeInterceptorForTesting::GetWindowTree(uint64_t window_id, GetWindowTreeCallback callback) {
  GetForwardingInterface()->GetWindowTree(std::move(window_id), std::move(callback));
}
void WindowTreeInterceptorForTesting::Embed(uint64_t window_id, WindowTreeClientPtr client, uint32_t embed_flags, EmbedCallback callback) {
  GetForwardingInterface()->Embed(std::move(window_id), std::move(client), std::move(embed_flags), std::move(callback));
}
void WindowTreeInterceptorForTesting::ScheduleEmbed(WindowTreeClientPtr client, ScheduleEmbedCallback callback) {
  GetForwardingInterface()->ScheduleEmbed(std::move(client), std::move(callback));
}
void WindowTreeInterceptorForTesting::ScheduleEmbedForExistingClient(uint32_t window_id, ScheduleEmbedForExistingClientCallback callback) {
  GetForwardingInterface()->ScheduleEmbedForExistingClient(std::move(window_id), std::move(callback));
}
void WindowTreeInterceptorForTesting::EmbedUsingToken(uint64_t window_id, const base::UnguessableToken& token, uint32_t embed_flags, EmbedUsingTokenCallback callback) {
  GetForwardingInterface()->EmbedUsingToken(std::move(window_id), std::move(token), std::move(embed_flags), std::move(callback));
}
void WindowTreeInterceptorForTesting::SetFocus(uint32_t change_id, uint64_t window_id) {
  GetForwardingInterface()->SetFocus(std::move(change_id), std::move(window_id));
}
void WindowTreeInterceptorForTesting::SetCanFocus(uint64_t window_id, bool can_focus) {
  GetForwardingInterface()->SetCanFocus(std::move(window_id), std::move(can_focus));
}
void WindowTreeInterceptorForTesting::SetCursor(uint32_t change_id, uint64_t window_id, ui::CursorData cursor) {
  GetForwardingInterface()->SetCursor(std::move(change_id), std::move(window_id), std::move(cursor));
}
void WindowTreeInterceptorForTesting::SetWindowTextInputState(uint64_t window_id, ::ui::mojom::TextInputStatePtr state) {
  GetForwardingInterface()->SetWindowTextInputState(std::move(window_id), std::move(state));
}
void WindowTreeInterceptorForTesting::SetImeVisibility(uint64_t window_id, bool visible, ::ui::mojom::TextInputStatePtr state) {
  GetForwardingInterface()->SetImeVisibility(std::move(window_id), std::move(visible), std::move(state));
}
void WindowTreeInterceptorForTesting::SetEventTargetingPolicy(uint64_t window_id, ::ui::mojom::EventTargetingPolicy policy) {
  GetForwardingInterface()->SetEventTargetingPolicy(std::move(window_id), std::move(policy));
}
void WindowTreeInterceptorForTesting::OnWindowInputEventAck(uint32_t event_id, ::ui::mojom::EventResult result) {
  GetForwardingInterface()->OnWindowInputEventAck(std::move(event_id), std::move(result));
}
void WindowTreeInterceptorForTesting::DeactivateWindow(uint64_t window_id) {
  GetForwardingInterface()->DeactivateWindow(std::move(window_id));
}
void WindowTreeInterceptorForTesting::StackAbove(uint32_t change_id, uint64_t above_id, uint64_t below_id) {
  GetForwardingInterface()->StackAbove(std::move(change_id), std::move(above_id), std::move(below_id));
}
void WindowTreeInterceptorForTesting::StackAtTop(uint32_t change_id, uint64_t window_id) {
  GetForwardingInterface()->StackAtTop(std::move(change_id), std::move(window_id));
}
void WindowTreeInterceptorForTesting::PerformWmAction(uint64_t window_id, const std::string& action) {
  GetForwardingInterface()->PerformWmAction(std::move(window_id), std::move(action));
}
void WindowTreeInterceptorForTesting::GetWindowManagerClient(::ui::mojom::WindowManagerClientAssociatedRequest internal) {
  GetForwardingInterface()->GetWindowManagerClient(std::move(internal));
}
void WindowTreeInterceptorForTesting::GetCursorLocationMemory(GetCursorLocationMemoryCallback callback) {
  GetForwardingInterface()->GetCursorLocationMemory(std::move(callback));
}
void WindowTreeInterceptorForTesting::PerformWindowMove(uint32_t change_id, uint64_t window_id, ::ui::mojom::MoveLoopSource source, const gfx::Point& cursor) {
  GetForwardingInterface()->PerformWindowMove(std::move(change_id), std::move(window_id), std::move(source), std::move(cursor));
}
void WindowTreeInterceptorForTesting::CancelWindowMove(uint64_t window_id) {
  GetForwardingInterface()->CancelWindowMove(std::move(window_id));
}
void WindowTreeInterceptorForTesting::PerformDragDrop(uint32_t change_id, uint64_t source_window_id, const gfx::Point& screen_location, const base::flat_map<std::string, std::vector<uint8_t>>& drag_data, const SkBitmap& drag_image, const gfx::Vector2d& drag_image_offset, uint32_t drag_operation, ::ui::mojom::PointerKind source) {
  GetForwardingInterface()->PerformDragDrop(std::move(change_id), std::move(source_window_id), std::move(screen_location), std::move(drag_data), std::move(drag_image), std::move(drag_image_offset), std::move(drag_operation), std::move(source));
}
void WindowTreeInterceptorForTesting::CancelDragDrop(uint64_t window_id) {
  GetForwardingInterface()->CancelDragDrop(std::move(window_id));
}
WindowTreeAsyncWaiter::WindowTreeAsyncWaiter(
    WindowTree* proxy) : proxy_(proxy) {}

WindowTreeAsyncWaiter::~WindowTreeAsyncWaiter() = default;

void WindowTreeAsyncWaiter::GetWindowTree(
    uint64_t window_id, std::vector<::ui::mojom::WindowDataPtr>* out_windows) {
  base::RunLoop loop;
  proxy_->GetWindowTree(std::move(window_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<::ui::mojom::WindowDataPtr>* out_windows
,
             std::vector<::ui::mojom::WindowDataPtr> windows) {*out_windows = std::move(windows);
            loop->Quit();
          },
          &loop,
          out_windows));
  loop.Run();
}
void WindowTreeAsyncWaiter::Embed(
    uint64_t window_id, WindowTreeClientPtr client, uint32_t embed_flags, bool* out_success) {
  base::RunLoop loop;
  proxy_->Embed(std::move(window_id),std::move(client),std::move(embed_flags),
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
void WindowTreeAsyncWaiter::ScheduleEmbed(
    WindowTreeClientPtr client, base::UnguessableToken* out_token) {
  base::RunLoop loop;
  proxy_->ScheduleEmbed(std::move(client),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::UnguessableToken* out_token
,
             const base::UnguessableToken& token) {*out_token = std::move(token);
            loop->Quit();
          },
          &loop,
          out_token));
  loop.Run();
}
void WindowTreeAsyncWaiter::ScheduleEmbedForExistingClient(
    uint32_t window_id, base::UnguessableToken* out_token) {
  base::RunLoop loop;
  proxy_->ScheduleEmbedForExistingClient(std::move(window_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::UnguessableToken* out_token
,
             const base::UnguessableToken& token) {*out_token = std::move(token);
            loop->Quit();
          },
          &loop,
          out_token));
  loop.Run();
}
void WindowTreeAsyncWaiter::EmbedUsingToken(
    uint64_t window_id, const base::UnguessableToken& token, uint32_t embed_flags, bool* out_success) {
  base::RunLoop loop;
  proxy_->EmbedUsingToken(std::move(window_id),std::move(token),std::move(embed_flags),
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
void WindowTreeAsyncWaiter::GetCursorLocationMemory(
    mojo::ScopedSharedBufferHandle* out_cursor_buffer) {
  base::RunLoop loop;
  proxy_->GetCursorLocationMemory(
      base::BindOnce(
          [](base::RunLoop* loop,
             mojo::ScopedSharedBufferHandle* out_cursor_buffer
,
             mojo::ScopedSharedBufferHandle cursor_buffer) {*out_cursor_buffer = std::move(cursor_buffer);
            loop->Quit();
          },
          &loop,
          out_cursor_buffer));
  loop.Run();
}

const char WindowTreeClient::Name_[] = "ui.mojom.WindowTreeClient";

class WindowTreeClient_OnDragEnter_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTreeClient_OnDragEnter_ForwardToCallback(
      WindowTreeClient::OnDragEnterCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTreeClient::OnDragEnterCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTreeClient_OnDragEnter_ForwardToCallback);
};

class WindowTreeClient_OnDragOver_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTreeClient_OnDragOver_ForwardToCallback(
      WindowTreeClient::OnDragOverCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTreeClient::OnDragOverCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTreeClient_OnDragOver_ForwardToCallback);
};

class WindowTreeClient_OnCompleteDrop_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTreeClient_OnCompleteDrop_ForwardToCallback(
      WindowTreeClient::OnCompleteDropCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTreeClient::OnCompleteDropCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTreeClient_OnCompleteDrop_ForwardToCallback);
};

WindowTreeClientProxy::WindowTreeClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WindowTreeClientProxy::OnEmbed(
    ::ui::mojom::WindowDataPtr in_root, WindowTreePtr in_tree, int64_t in_display_id, uint64_t in_focused_window, bool in_parent_drawn, const base::Optional<viz::LocalSurfaceId>& in_local_surface_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnEmbed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnEmbed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnEmbed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->root)::BaseType::BufferWriter
      root_writer;
  mojo::internal::Serialize<::ui::mojom::WindowDataDataView>(
      in_root, buffer, &root_writer, &serialization_context);
  params->root.Set(
      root_writer.is_null() ? nullptr : root_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->root.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null root in WindowTreeClient.OnEmbed request");
  mojo::internal::Serialize<::ui::mojom::WindowTreePtrDataView>(
      in_tree, &params->tree, &serialization_context);
  params->display_id = in_display_id;
  params->focused_window = in_focused_window;
  params->parent_drawn = in_parent_drawn;
  typename decltype(params->local_surface_id)::BaseType::BufferWriter
      local_surface_id_writer;
  mojo::internal::Serialize<::viz::mojom::LocalSurfaceIdDataView>(
      in_local_surface_id, buffer, &local_surface_id_writer, &serialization_context);
  params->local_surface_id.Set(
      local_surface_id_writer.is_null() ? nullptr : local_surface_id_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnEmbedFromToken(
    const base::UnguessableToken& in_token, ::ui::mojom::WindowDataPtr in_root, int64_t in_display_id, const base::Optional<viz::LocalSurfaceId>& in_local_surface_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnEmbedFromToken");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnEmbedFromToken_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnEmbedFromToken_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->token)::BaseType::BufferWriter
      token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_token, buffer, &token_writer, &serialization_context);
  params->token.Set(
      token_writer.is_null() ? nullptr : token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null token in WindowTreeClient.OnEmbedFromToken request");
  typename decltype(params->root)::BaseType::BufferWriter
      root_writer;
  mojo::internal::Serialize<::ui::mojom::WindowDataDataView>(
      in_root, buffer, &root_writer, &serialization_context);
  params->root.Set(
      root_writer.is_null() ? nullptr : root_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->root.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null root in WindowTreeClient.OnEmbedFromToken request");
  params->display_id = in_display_id;
  typename decltype(params->local_surface_id)::BaseType::BufferWriter
      local_surface_id_writer;
  mojo::internal::Serialize<::viz::mojom::LocalSurfaceIdDataView>(
      in_local_surface_id, buffer, &local_surface_id_writer, &serialization_context);
  params->local_surface_id.Set(
      local_surface_id_writer.is_null() ? nullptr : local_surface_id_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnEmbeddedAppDisconnected(
    uint64_t in_window) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnEmbeddedAppDisconnected");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnEmbeddedAppDisconnected_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnUnembed(
    uint64_t in_window) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnUnembed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnUnembed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnUnembed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnCaptureChanged(
    uint64_t in_new_capture, uint64_t in_old_capture) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnCaptureChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnCaptureChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnCaptureChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->new_capture = in_new_capture;
  params->old_capture = in_old_capture;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnFrameSinkIdAllocated(
    uint64_t in_window, const viz::FrameSinkId& in_frame_sink_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnFrameSinkIdAllocated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnFrameSinkIdAllocated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnFrameSinkIdAllocated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in WindowTreeClient.OnFrameSinkIdAllocated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnTopLevelCreated(
    uint32_t in_change_id, ::ui::mojom::WindowDataPtr in_data, int64_t in_display_id, bool in_parent_drawn, const base::Optional<viz::LocalSurfaceId>& in_local_surface_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnTopLevelCreated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnTopLevelCreated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnTopLevelCreated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  mojo::internal::Serialize<::ui::mojom::WindowDataDataView>(
      in_data, buffer, &data_writer, &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in WindowTreeClient.OnTopLevelCreated request");
  params->display_id = in_display_id;
  params->parent_drawn = in_parent_drawn;
  typename decltype(params->local_surface_id)::BaseType::BufferWriter
      local_surface_id_writer;
  mojo::internal::Serialize<::viz::mojom::LocalSurfaceIdDataView>(
      in_local_surface_id, buffer, &local_surface_id_writer, &serialization_context);
  params->local_surface_id.Set(
      local_surface_id_writer.is_null() ? nullptr : local_surface_id_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowBoundsChanged(
    uint64_t in_window, const gfx::Rect& in_old_bounds, const gfx::Rect& in_new_bounds, const base::Optional<viz::LocalSurfaceId>& in_local_surface_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnWindowBoundsChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowBoundsChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnWindowBoundsChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  typename decltype(params->old_bounds)::BaseType::BufferWriter
      old_bounds_writer;
  mojo::internal::Serialize<::gfx::mojom::RectDataView>(
      in_old_bounds, buffer, &old_bounds_writer, &serialization_context);
  params->old_bounds.Set(
      old_bounds_writer.is_null() ? nullptr : old_bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->old_bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null old_bounds in WindowTreeClient.OnWindowBoundsChanged request");
  typename decltype(params->new_bounds)::BaseType::BufferWriter
      new_bounds_writer;
  mojo::internal::Serialize<::gfx::mojom::RectDataView>(
      in_new_bounds, buffer, &new_bounds_writer, &serialization_context);
  params->new_bounds.Set(
      new_bounds_writer.is_null() ? nullptr : new_bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_bounds in WindowTreeClient.OnWindowBoundsChanged request");
  typename decltype(params->local_surface_id)::BaseType::BufferWriter
      local_surface_id_writer;
  mojo::internal::Serialize<::viz::mojom::LocalSurfaceIdDataView>(
      in_local_surface_id, buffer, &local_surface_id_writer, &serialization_context);
  params->local_surface_id.Set(
      local_surface_id_writer.is_null() ? nullptr : local_surface_id_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowTransformChanged(
    uint64_t in_window, const gfx::Transform& in_old_transform, const gfx::Transform& in_new_transform) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnWindowTransformChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowTransformChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnWindowTransformChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  typename decltype(params->old_transform)::BaseType::BufferWriter
      old_transform_writer;
  mojo::internal::Serialize<::gfx::mojom::TransformDataView>(
      in_old_transform, buffer, &old_transform_writer, &serialization_context);
  params->old_transform.Set(
      old_transform_writer.is_null() ? nullptr : old_transform_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->old_transform.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null old_transform in WindowTreeClient.OnWindowTransformChanged request");
  typename decltype(params->new_transform)::BaseType::BufferWriter
      new_transform_writer;
  mojo::internal::Serialize<::gfx::mojom::TransformDataView>(
      in_new_transform, buffer, &new_transform_writer, &serialization_context);
  params->new_transform.Set(
      new_transform_writer.is_null() ? nullptr : new_transform_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_transform.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_transform in WindowTreeClient.OnWindowTransformChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnClientAreaChanged(
    uint64_t in_window_id, const gfx::Insets& in_new_client_area, const std::vector<gfx::Rect>& in_new_additional_client_areas) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnClientAreaChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnClientAreaChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnClientAreaChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  typename decltype(params->new_client_area)::BaseType::BufferWriter
      new_client_area_writer;
  mojo::internal::Serialize<::gfx::mojom::InsetsDataView>(
      in_new_client_area, buffer, &new_client_area_writer, &serialization_context);
  params->new_client_area.Set(
      new_client_area_writer.is_null() ? nullptr : new_client_area_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_client_area.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_client_area in WindowTreeClient.OnClientAreaChanged request");
  typename decltype(params->new_additional_client_areas)::BaseType::BufferWriter
      new_additional_client_areas_writer;
  const mojo::internal::ContainerValidateParams new_additional_client_areas_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::RectDataView>>(
      in_new_additional_client_areas, buffer, &new_additional_client_areas_writer, &new_additional_client_areas_validate_params,
      &serialization_context);
  params->new_additional_client_areas.Set(
      new_additional_client_areas_writer.is_null() ? nullptr : new_additional_client_areas_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_additional_client_areas.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_additional_client_areas in WindowTreeClient.OnClientAreaChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnTransientWindowAdded(
    uint64_t in_window_id, uint64_t in_transient_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnTransientWindowAdded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnTransientWindowAdded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnTransientWindowAdded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  params->transient_window_id = in_transient_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnTransientWindowRemoved(
    uint64_t in_window_id, uint64_t in_transient_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnTransientWindowRemoved");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnTransientWindowRemoved_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnTransientWindowRemoved_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  params->transient_window_id = in_transient_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowHierarchyChanged(
    uint64_t in_window, uint64_t in_old_parent, uint64_t in_new_parent, std::vector<::ui::mojom::WindowDataPtr> in_windows) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnWindowHierarchyChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowHierarchyChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnWindowHierarchyChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  params->old_parent = in_old_parent;
  params->new_parent = in_new_parent;
  typename decltype(params->windows)::BaseType::BufferWriter
      windows_writer;
  const mojo::internal::ContainerValidateParams windows_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::WindowDataDataView>>(
      in_windows, buffer, &windows_writer, &windows_validate_params,
      &serialization_context);
  params->windows.Set(
      windows_writer.is_null() ? nullptr : windows_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->windows.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null windows in WindowTreeClient.OnWindowHierarchyChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowReordered(
    uint64_t in_window_id, uint64_t in_relative_window_id, ::ui::mojom::OrderDirection in_direction) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnWindowReordered");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowReordered_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnWindowReordered_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  params->relative_window_id = in_relative_window_id;
  mojo::internal::Serialize<::ui::mojom::OrderDirection>(
      in_direction, &params->direction);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowDeleted(
    uint64_t in_window) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnWindowDeleted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowDeleted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnWindowDeleted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowVisibilityChanged(
    uint64_t in_window, bool in_visible) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnWindowVisibilityChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowVisibilityChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnWindowVisibilityChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  params->visible = in_visible;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowOpacityChanged(
    uint64_t in_window, float in_old_opacity, float in_new_opacity) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnWindowOpacityChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowOpacityChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnWindowOpacityChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  params->old_opacity = in_old_opacity;
  params->new_opacity = in_new_opacity;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowParentDrawnStateChanged(
    uint64_t in_window, bool in_drawn) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnWindowParentDrawnStateChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowParentDrawnStateChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  params->drawn = in_drawn;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowSharedPropertyChanged(
    uint64_t in_window, const std::string& in_name, const base::Optional<std::vector<uint8_t>>& in_new_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnWindowSharedPropertyChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowSharedPropertyChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in WindowTreeClient.OnWindowSharedPropertyChanged request");
  typename decltype(params->new_data)::BaseType::BufferWriter
      new_data_writer;
  const mojo::internal::ContainerValidateParams new_data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_new_data, buffer, &new_data_writer, &new_data_validate_params,
      &serialization_context);
  params->new_data.Set(
      new_data_writer.is_null() ? nullptr : new_data_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowInputEvent(
    uint32_t in_event_id, uint64_t in_window, int64_t in_display_id, uint64_t in_display_root_window, const gfx::PointF& in_event_location_in_screen_pixel_layout, std::unique_ptr<ui::Event> in_event, bool in_matches_pointer_watcher) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnWindowInputEvent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowInputEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnWindowInputEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->event_id = in_event_id;
  params->window = in_window;
  params->display_id = in_display_id;
  params->display_root_window = in_display_root_window;
  typename decltype(params->event_location_in_screen_pixel_layout)::BaseType::BufferWriter
      event_location_in_screen_pixel_layout_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_event_location_in_screen_pixel_layout, buffer, &event_location_in_screen_pixel_layout_writer, &serialization_context);
  params->event_location_in_screen_pixel_layout.Set(
      event_location_in_screen_pixel_layout_writer.is_null() ? nullptr : event_location_in_screen_pixel_layout_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event_location_in_screen_pixel_layout.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event_location_in_screen_pixel_layout in WindowTreeClient.OnWindowInputEvent request");
  typename decltype(params->event)::BaseType::BufferWriter
      event_writer;
  mojo::internal::Serialize<::ui::mojom::EventDataView>(
      in_event, buffer, &event_writer, &serialization_context);
  params->event.Set(
      event_writer.is_null() ? nullptr : event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in WindowTreeClient.OnWindowInputEvent request");
  params->matches_pointer_watcher = in_matches_pointer_watcher;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnPointerEventObserved(
    std::unique_ptr<ui::Event> in_event, uint64_t in_window_id, int64_t in_display_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnPointerEventObserved");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnPointerEventObserved_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnPointerEventObserved_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->event)::BaseType::BufferWriter
      event_writer;
  mojo::internal::Serialize<::ui::mojom::EventDataView>(
      in_event, buffer, &event_writer, &serialization_context);
  params->event.Set(
      event_writer.is_null() ? nullptr : event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in WindowTreeClient.OnPointerEventObserved request");
  params->window_id = in_window_id;
  params->display_id = in_display_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowFocused(
    uint64_t in_focused_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnWindowFocused");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowFocused_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnWindowFocused_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->focused_window_id = in_focused_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowCursorChanged(
    uint64_t in_window_id, ui::CursorData in_cursor) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnWindowCursorChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowCursorChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnWindowCursorChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  typename decltype(params->cursor)::BaseType::BufferWriter
      cursor_writer;
  mojo::internal::Serialize<::ui::mojom::CursorDataDataView>(
      in_cursor, buffer, &cursor_writer, &serialization_context);
  params->cursor.Set(
      cursor_writer.is_null() ? nullptr : cursor_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cursor.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cursor in WindowTreeClient.OnWindowCursorChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowSurfaceChanged(
    uint64_t in_window_id, const viz::SurfaceInfo& in_surface_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnWindowSurfaceChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowSurfaceChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnWindowSurfaceChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  typename decltype(params->surface_info)::BaseType::BufferWriter
      surface_info_writer;
  mojo::internal::Serialize<::viz::mojom::SurfaceInfoDataView>(
      in_surface_info, buffer, &surface_info_writer, &serialization_context);
  params->surface_info.Set(
      surface_info_writer.is_null() ? nullptr : surface_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->surface_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null surface_info in WindowTreeClient.OnWindowSurfaceChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnDragDropStart(
    const base::flat_map<std::string, std::vector<uint8_t>>& in_drag_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnDragDropStart");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnDragDropStart_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnDragDropStart_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->drag_data)::BaseType::BufferWriter
      drag_data_writer;
  const mojo::internal::ContainerValidateParams drag_data_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
      in_drag_data, buffer, &drag_data_writer, &drag_data_validate_params,
      &serialization_context);
  params->drag_data.Set(
      drag_data_writer.is_null() ? nullptr : drag_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->drag_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null drag_data in WindowTreeClient.OnDragDropStart request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnDragEnter(
    uint64_t in_window, uint32_t in_key_state, const gfx::Point& in_screen_position, uint32_t in_effect_bitmask, OnDragEnterCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnDragEnter");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnDragEnter_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnDragEnter_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  params->key_state = in_key_state;
  typename decltype(params->screen_position)::BaseType::BufferWriter
      screen_position_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_screen_position, buffer, &screen_position_writer, &serialization_context);
  params->screen_position.Set(
      screen_position_writer.is_null() ? nullptr : screen_position_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->screen_position.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null screen_position in WindowTreeClient.OnDragEnter request");
  params->effect_bitmask = in_effect_bitmask;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTreeClient_OnDragEnter_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeClientProxy::OnDragOver(
    uint64_t in_window, uint32_t in_key_state, const gfx::Point& in_screen_position, uint32_t in_effect_bitmask, OnDragOverCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnDragOver");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnDragOver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnDragOver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  params->key_state = in_key_state;
  typename decltype(params->screen_position)::BaseType::BufferWriter
      screen_position_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_screen_position, buffer, &screen_position_writer, &serialization_context);
  params->screen_position.Set(
      screen_position_writer.is_null() ? nullptr : screen_position_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->screen_position.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null screen_position in WindowTreeClient.OnDragOver request");
  params->effect_bitmask = in_effect_bitmask;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTreeClient_OnDragOver_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeClientProxy::OnDragLeave(
    uint64_t in_window) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnDragLeave");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnDragLeave_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnDragLeave_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnCompleteDrop(
    uint64_t in_window, uint32_t in_key_state, const gfx::Point& in_screen_position, uint32_t in_effect_bitmask, OnCompleteDropCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnCompleteDrop");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnCompleteDrop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnCompleteDrop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  params->key_state = in_key_state;
  typename decltype(params->screen_position)::BaseType::BufferWriter
      screen_position_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_screen_position, buffer, &screen_position_writer, &serialization_context);
  params->screen_position.Set(
      screen_position_writer.is_null() ? nullptr : screen_position_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->screen_position.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null screen_position in WindowTreeClient.OnCompleteDrop request");
  params->effect_bitmask = in_effect_bitmask;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTreeClient_OnCompleteDrop_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeClientProxy::OnPerformDragDropCompleted(
    uint32_t in_change_id, bool in_success, uint32_t in_action_taken) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnPerformDragDropCompleted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnPerformDragDropCompleted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnPerformDragDropCompleted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->success = in_success;
  params->action_taken = in_action_taken;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnDragDropDone(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnDragDropDone");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnDragDropDone_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnDragDropDone_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnChangeCompleted(
    uint32_t in_change_id, bool in_success) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::OnChangeCompleted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnChangeCompleted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnChangeCompleted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::RequestClose(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::RequestClose");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_RequestClose_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_RequestClose_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::GetWindowManager(
    ::ui::mojom::WindowManagerAssociatedRequest in_internal) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeClient::GetWindowManager");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_GetWindowManager_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_GetWindowManager_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::WindowManagerAssociatedRequestDataView>(
      in_internal, &params->internal, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->internal),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid internal in WindowTreeClient.GetWindowManager request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class WindowTreeClient_OnDragEnter_ProxyToResponder {
 public:
  static WindowTreeClient::OnDragEnterCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTreeClient_OnDragEnter_ProxyToResponder> proxy(
        new WindowTreeClient_OnDragEnter_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTreeClient_OnDragEnter_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTreeClient_OnDragEnter_ProxyToResponder() {
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
  WindowTreeClient_OnDragEnter_ProxyToResponder(
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
        << "WindowTreeClient::OnDragEnterCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint32_t in_supported_op_bitmask);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WindowTreeClient_OnDragEnter_ProxyToResponder);
};

bool WindowTreeClient_OnDragEnter_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::WindowTreeClient::OnDragEnterCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTreeClient_OnDragEnter_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTreeClient_OnDragEnter_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint32_t p_supported_op_bitmask{};
  WindowTreeClient_OnDragEnter_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_supported_op_bitmask = input_data_view.supported_op_bitmask();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WindowTreeClient::OnDragEnter response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_supported_op_bitmask));
  return true;
}

void WindowTreeClient_OnDragEnter_ProxyToResponder::Run(
    uint32_t in_supported_op_bitmask) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnDragEnter_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnDragEnter_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->supported_op_bitmask = in_supported_op_bitmask;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnDragEnterCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowTreeClient_OnDragOver_ProxyToResponder {
 public:
  static WindowTreeClient::OnDragOverCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTreeClient_OnDragOver_ProxyToResponder> proxy(
        new WindowTreeClient_OnDragOver_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTreeClient_OnDragOver_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTreeClient_OnDragOver_ProxyToResponder() {
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
  WindowTreeClient_OnDragOver_ProxyToResponder(
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
        << "WindowTreeClient::OnDragOverCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint32_t in_supported_op_bitmask);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WindowTreeClient_OnDragOver_ProxyToResponder);
};

bool WindowTreeClient_OnDragOver_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::WindowTreeClient::OnDragOverCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTreeClient_OnDragOver_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTreeClient_OnDragOver_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint32_t p_supported_op_bitmask{};
  WindowTreeClient_OnDragOver_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_supported_op_bitmask = input_data_view.supported_op_bitmask();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WindowTreeClient::OnDragOver response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_supported_op_bitmask));
  return true;
}

void WindowTreeClient_OnDragOver_ProxyToResponder::Run(
    uint32_t in_supported_op_bitmask) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnDragOver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnDragOver_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->supported_op_bitmask = in_supported_op_bitmask;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnDragOverCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowTreeClient_OnCompleteDrop_ProxyToResponder {
 public:
  static WindowTreeClient::OnCompleteDropCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTreeClient_OnCompleteDrop_ProxyToResponder> proxy(
        new WindowTreeClient_OnCompleteDrop_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTreeClient_OnCompleteDrop_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTreeClient_OnCompleteDrop_ProxyToResponder() {
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
  WindowTreeClient_OnCompleteDrop_ProxyToResponder(
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
        << "WindowTreeClient::OnCompleteDropCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint32_t in_action_taken);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WindowTreeClient_OnCompleteDrop_ProxyToResponder);
};

bool WindowTreeClient_OnCompleteDrop_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::WindowTreeClient::OnCompleteDropCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTreeClient_OnCompleteDrop_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTreeClient_OnCompleteDrop_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint32_t p_action_taken{};
  WindowTreeClient_OnCompleteDrop_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_action_taken = input_data_view.action_taken();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WindowTreeClient::OnCompleteDrop response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_action_taken));
  return true;
}

void WindowTreeClient_OnCompleteDrop_ProxyToResponder::Run(
    uint32_t in_action_taken) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnCompleteDrop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeClient_OnCompleteDrop_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->action_taken = in_action_taken;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnCompleteDropCallback",
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
bool WindowTreeClientStubDispatch::Accept(
    WindowTreeClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWindowTreeClient_OnEmbed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnEmbed",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnEmbed_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnEmbed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::ui::mojom::WindowDataPtr p_root{};
      WindowTreePtr p_tree{};
      int64_t p_display_id{};
      uint64_t p_focused_window{};
      bool p_parent_drawn{};
      base::Optional<viz::LocalSurfaceId> p_local_surface_id{};
      WindowTreeClient_OnEmbed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRoot(&p_root))
        success = false;
      p_tree =
          input_data_view.TakeTree<decltype(p_tree)>();
      p_display_id = input_data_view.display_id();
      p_focused_window = input_data_view.focused_window();
      p_parent_drawn = input_data_view.parent_drawn();
      if (!input_data_view.ReadLocalSurfaceId(&p_local_surface_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnEmbed deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnEmbed(
std::move(p_root), 
std::move(p_tree), 
std::move(p_display_id), 
std::move(p_focused_window), 
std::move(p_parent_drawn), 
std::move(p_local_surface_id));
      return true;
    }
    case internal::kWindowTreeClient_OnEmbedFromToken_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnEmbedFromToken",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnEmbedFromToken_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnEmbedFromToken_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_token{};
      ::ui::mojom::WindowDataPtr p_root{};
      int64_t p_display_id{};
      base::Optional<viz::LocalSurfaceId> p_local_surface_id{};
      WindowTreeClient_OnEmbedFromToken_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadToken(&p_token))
        success = false;
      if (!input_data_view.ReadRoot(&p_root))
        success = false;
      p_display_id = input_data_view.display_id();
      if (!input_data_view.ReadLocalSurfaceId(&p_local_surface_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnEmbedFromToken deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnEmbedFromToken(
std::move(p_token), 
std::move(p_root), 
std::move(p_display_id), 
std::move(p_local_surface_id));
      return true;
    }
    case internal::kWindowTreeClient_OnEmbeddedAppDisconnected_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnEmbeddedAppDisconnected",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      WindowTreeClient_OnEmbeddedAppDisconnected_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnEmbeddedAppDisconnected deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnEmbeddedAppDisconnected(
std::move(p_window));
      return true;
    }
    case internal::kWindowTreeClient_OnUnembed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnUnembed",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnUnembed_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnUnembed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      WindowTreeClient_OnUnembed_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnUnembed deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnUnembed(
std::move(p_window));
      return true;
    }
    case internal::kWindowTreeClient_OnCaptureChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnCaptureChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnCaptureChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnCaptureChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_new_capture{};
      uint64_t p_old_capture{};
      WindowTreeClient_OnCaptureChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_new_capture = input_data_view.new_capture();
      p_old_capture = input_data_view.old_capture();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnCaptureChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnCaptureChanged(
std::move(p_new_capture), 
std::move(p_old_capture));
      return true;
    }
    case internal::kWindowTreeClient_OnFrameSinkIdAllocated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnFrameSinkIdAllocated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnFrameSinkIdAllocated_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnFrameSinkIdAllocated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      viz::FrameSinkId p_frame_sink_id{};
      WindowTreeClient_OnFrameSinkIdAllocated_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnFrameSinkIdAllocated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnFrameSinkIdAllocated(
std::move(p_window), 
std::move(p_frame_sink_id));
      return true;
    }
    case internal::kWindowTreeClient_OnTopLevelCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnTopLevelCreated",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnTopLevelCreated_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnTopLevelCreated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      ::ui::mojom::WindowDataPtr p_data{};
      int64_t p_display_id{};
      bool p_parent_drawn{};
      base::Optional<viz::LocalSurfaceId> p_local_surface_id{};
      WindowTreeClient_OnTopLevelCreated_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      if (!input_data_view.ReadData(&p_data))
        success = false;
      p_display_id = input_data_view.display_id();
      p_parent_drawn = input_data_view.parent_drawn();
      if (!input_data_view.ReadLocalSurfaceId(&p_local_surface_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnTopLevelCreated deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnTopLevelCreated(
std::move(p_change_id), 
std::move(p_data), 
std::move(p_display_id), 
std::move(p_parent_drawn), 
std::move(p_local_surface_id));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowBoundsChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowBoundsChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowBoundsChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowBoundsChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      gfx::Rect p_old_bounds{};
      gfx::Rect p_new_bounds{};
      base::Optional<viz::LocalSurfaceId> p_local_surface_id{};
      WindowTreeClient_OnWindowBoundsChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      if (!input_data_view.ReadOldBounds(&p_old_bounds))
        success = false;
      if (!input_data_view.ReadNewBounds(&p_new_bounds))
        success = false;
      if (!input_data_view.ReadLocalSurfaceId(&p_local_surface_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnWindowBoundsChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnWindowBoundsChanged(
std::move(p_window), 
std::move(p_old_bounds), 
std::move(p_new_bounds), 
std::move(p_local_surface_id));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowTransformChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowTransformChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowTransformChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowTransformChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      gfx::Transform p_old_transform{};
      gfx::Transform p_new_transform{};
      WindowTreeClient_OnWindowTransformChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      if (!input_data_view.ReadOldTransform(&p_old_transform))
        success = false;
      if (!input_data_view.ReadNewTransform(&p_new_transform))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnWindowTransformChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnWindowTransformChanged(
std::move(p_window), 
std::move(p_old_transform), 
std::move(p_new_transform));
      return true;
    }
    case internal::kWindowTreeClient_OnClientAreaChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnClientAreaChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnClientAreaChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnClientAreaChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      gfx::Insets p_new_client_area{};
      std::vector<gfx::Rect> p_new_additional_client_areas{};
      WindowTreeClient_OnClientAreaChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadNewClientArea(&p_new_client_area))
        success = false;
      if (!input_data_view.ReadNewAdditionalClientAreas(&p_new_additional_client_areas))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnClientAreaChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnClientAreaChanged(
std::move(p_window_id), 
std::move(p_new_client_area), 
std::move(p_new_additional_client_areas));
      return true;
    }
    case internal::kWindowTreeClient_OnTransientWindowAdded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnTransientWindowAdded",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnTransientWindowAdded_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnTransientWindowAdded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      uint64_t p_transient_window_id{};
      WindowTreeClient_OnTransientWindowAdded_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      p_transient_window_id = input_data_view.transient_window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnTransientWindowAdded deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnTransientWindowAdded(
std::move(p_window_id), 
std::move(p_transient_window_id));
      return true;
    }
    case internal::kWindowTreeClient_OnTransientWindowRemoved_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnTransientWindowRemoved",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnTransientWindowRemoved_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnTransientWindowRemoved_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      uint64_t p_transient_window_id{};
      WindowTreeClient_OnTransientWindowRemoved_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      p_transient_window_id = input_data_view.transient_window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnTransientWindowRemoved deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnTransientWindowRemoved(
std::move(p_window_id), 
std::move(p_transient_window_id));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowHierarchyChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowHierarchyChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowHierarchyChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowHierarchyChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      uint64_t p_old_parent{};
      uint64_t p_new_parent{};
      std::vector<::ui::mojom::WindowDataPtr> p_windows{};
      WindowTreeClient_OnWindowHierarchyChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      p_old_parent = input_data_view.old_parent();
      p_new_parent = input_data_view.new_parent();
      if (!input_data_view.ReadWindows(&p_windows))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnWindowHierarchyChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnWindowHierarchyChanged(
std::move(p_window), 
std::move(p_old_parent), 
std::move(p_new_parent), 
std::move(p_windows));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowReordered_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowReordered",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowReordered_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowReordered_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      uint64_t p_relative_window_id{};
      ::ui::mojom::OrderDirection p_direction{};
      WindowTreeClient_OnWindowReordered_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      p_relative_window_id = input_data_view.relative_window_id();
      if (!input_data_view.ReadDirection(&p_direction))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnWindowReordered deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnWindowReordered(
std::move(p_window_id), 
std::move(p_relative_window_id), 
std::move(p_direction));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowDeleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowDeleted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowDeleted_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowDeleted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      WindowTreeClient_OnWindowDeleted_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnWindowDeleted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnWindowDeleted(
std::move(p_window));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowVisibilityChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowVisibilityChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowVisibilityChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowVisibilityChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      bool p_visible{};
      WindowTreeClient_OnWindowVisibilityChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      p_visible = input_data_view.visible();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnWindowVisibilityChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnWindowVisibilityChanged(
std::move(p_window), 
std::move(p_visible));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowOpacityChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowOpacityChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowOpacityChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowOpacityChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      float p_old_opacity{};
      float p_new_opacity{};
      WindowTreeClient_OnWindowOpacityChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      p_old_opacity = input_data_view.old_opacity();
      p_new_opacity = input_data_view.new_opacity();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnWindowOpacityChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnWindowOpacityChanged(
std::move(p_window), 
std::move(p_old_opacity), 
std::move(p_new_opacity));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowParentDrawnStateChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowParentDrawnStateChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      bool p_drawn{};
      WindowTreeClient_OnWindowParentDrawnStateChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      p_drawn = input_data_view.drawn();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnWindowParentDrawnStateChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnWindowParentDrawnStateChanged(
std::move(p_window), 
std::move(p_drawn));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowSharedPropertyChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowSharedPropertyChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      std::string p_name{};
      base::Optional<std::vector<uint8_t>> p_new_data{};
      WindowTreeClient_OnWindowSharedPropertyChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!input_data_view.ReadNewData(&p_new_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnWindowSharedPropertyChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnWindowSharedPropertyChanged(
std::move(p_window), 
std::move(p_name), 
std::move(p_new_data));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowInputEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowInputEvent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowInputEvent_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowInputEvent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_event_id{};
      uint64_t p_window{};
      int64_t p_display_id{};
      uint64_t p_display_root_window{};
      gfx::PointF p_event_location_in_screen_pixel_layout{};
      std::unique_ptr<ui::Event> p_event{};
      bool p_matches_pointer_watcher{};
      WindowTreeClient_OnWindowInputEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_event_id = input_data_view.event_id();
      p_window = input_data_view.window();
      p_display_id = input_data_view.display_id();
      p_display_root_window = input_data_view.display_root_window();
      if (!input_data_view.ReadEventLocationInScreenPixelLayout(&p_event_location_in_screen_pixel_layout))
        success = false;
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      p_matches_pointer_watcher = input_data_view.matches_pointer_watcher();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnWindowInputEvent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnWindowInputEvent(
std::move(p_event_id), 
std::move(p_window), 
std::move(p_display_id), 
std::move(p_display_root_window), 
std::move(p_event_location_in_screen_pixel_layout), 
std::move(p_event), 
std::move(p_matches_pointer_watcher));
      return true;
    }
    case internal::kWindowTreeClient_OnPointerEventObserved_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnPointerEventObserved",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnPointerEventObserved_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnPointerEventObserved_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<ui::Event> p_event{};
      uint64_t p_window_id{};
      int64_t p_display_id{};
      WindowTreeClient_OnPointerEventObserved_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      p_window_id = input_data_view.window_id();
      p_display_id = input_data_view.display_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnPointerEventObserved deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnPointerEventObserved(
std::move(p_event), 
std::move(p_window_id), 
std::move(p_display_id));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowFocused_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowFocused",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowFocused_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowFocused_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_focused_window_id{};
      WindowTreeClient_OnWindowFocused_ParamsDataView input_data_view(params, &serialization_context);
      
      p_focused_window_id = input_data_view.focused_window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnWindowFocused deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnWindowFocused(
std::move(p_focused_window_id));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowCursorChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowCursorChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowCursorChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowCursorChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      ui::CursorData p_cursor{};
      WindowTreeClient_OnWindowCursorChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadCursor(&p_cursor))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnWindowCursorChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnWindowCursorChanged(
std::move(p_window_id), 
std::move(p_cursor));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowSurfaceChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowSurfaceChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowSurfaceChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowSurfaceChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      viz::SurfaceInfo p_surface_info{};
      WindowTreeClient_OnWindowSurfaceChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadSurfaceInfo(&p_surface_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnWindowSurfaceChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnWindowSurfaceChanged(
std::move(p_window_id), 
std::move(p_surface_info));
      return true;
    }
    case internal::kWindowTreeClient_OnDragDropStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnDragDropStart",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnDragDropStart_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnDragDropStart_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::flat_map<std::string, std::vector<uint8_t>> p_drag_data{};
      WindowTreeClient_OnDragDropStart_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDragData(&p_drag_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnDragDropStart deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnDragDropStart(
std::move(p_drag_data));
      return true;
    }
    case internal::kWindowTreeClient_OnDragEnter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnDragEnter",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnDragOver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnDragOver",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnDragLeave_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnDragLeave",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnDragLeave_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnDragLeave_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      WindowTreeClient_OnDragLeave_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnDragLeave deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnDragLeave(
std::move(p_window));
      return true;
    }
    case internal::kWindowTreeClient_OnCompleteDrop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnCompleteDrop",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnPerformDragDropCompleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnPerformDragDropCompleted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnPerformDragDropCompleted_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnPerformDragDropCompleted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      bool p_success{};
      uint32_t p_action_taken{};
      WindowTreeClient_OnPerformDragDropCompleted_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_success = input_data_view.success();
      p_action_taken = input_data_view.action_taken();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnPerformDragDropCompleted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnPerformDragDropCompleted(
std::move(p_change_id), 
std::move(p_success), 
std::move(p_action_taken));
      return true;
    }
    case internal::kWindowTreeClient_OnDragDropDone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnDragDropDone",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnDragDropDone_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnDragDropDone_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WindowTreeClient_OnDragDropDone_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnDragDropDone deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnDragDropDone();
      return true;
    }
    case internal::kWindowTreeClient_OnChangeCompleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnChangeCompleted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnChangeCompleted_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnChangeCompleted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      bool p_success{};
      WindowTreeClient_OnChangeCompleted_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_success = input_data_view.success();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnChangeCompleted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnChangeCompleted(
std::move(p_change_id), 
std::move(p_success));
      return true;
    }
    case internal::kWindowTreeClient_RequestClose_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::RequestClose",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_RequestClose_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_RequestClose_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTreeClient_RequestClose_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::RequestClose deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestClose(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTreeClient_GetWindowManager_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::GetWindowManager",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_GetWindowManager_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_GetWindowManager_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::ui::mojom::WindowManagerAssociatedRequest p_internal{};
      WindowTreeClient_GetWindowManager_ParamsDataView input_data_view(params, &serialization_context);
      
      p_internal =
          input_data_view.TakeInternal<decltype(p_internal)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::GetWindowManager deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetWindowManager(
std::move(p_internal));
      return true;
    }
  }
  return false;
}

// static
bool WindowTreeClientStubDispatch::AcceptWithResponder(
    WindowTreeClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWindowTreeClient_OnEmbed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnEmbed",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnEmbedFromToken_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnEmbedFromToken",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnEmbeddedAppDisconnected_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnEmbeddedAppDisconnected",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnUnembed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnUnembed",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnCaptureChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnCaptureChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnFrameSinkIdAllocated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnFrameSinkIdAllocated",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnTopLevelCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnTopLevelCreated",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnWindowBoundsChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowBoundsChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnWindowTransformChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowTransformChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnClientAreaChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnClientAreaChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnTransientWindowAdded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnTransientWindowAdded",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnTransientWindowRemoved_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnTransientWindowRemoved",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnWindowHierarchyChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowHierarchyChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnWindowReordered_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowReordered",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnWindowDeleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowDeleted",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnWindowVisibilityChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowVisibilityChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnWindowOpacityChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowOpacityChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnWindowParentDrawnStateChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowParentDrawnStateChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnWindowSharedPropertyChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowSharedPropertyChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnWindowInputEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowInputEvent",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnPointerEventObserved_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnPointerEventObserved",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnWindowFocused_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowFocused",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnWindowCursorChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowCursorChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnWindowSurfaceChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnWindowSurfaceChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnDragDropStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnDragDropStart",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnDragEnter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnDragEnter",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTreeClient_OnDragEnter_Params_Data* params =
          reinterpret_cast<
              internal::WindowTreeClient_OnDragEnter_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      uint32_t p_key_state{};
      gfx::Point p_screen_position{};
      uint32_t p_effect_bitmask{};
      WindowTreeClient_OnDragEnter_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      p_key_state = input_data_view.key_state();
      if (!input_data_view.ReadScreenPosition(&p_screen_position))
        success = false;
      p_effect_bitmask = input_data_view.effect_bitmask();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnDragEnter deserializer");
        return false;
      }
      WindowTreeClient::OnDragEnterCallback callback =
          WindowTreeClient_OnDragEnter_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnDragEnter(
std::move(p_window), 
std::move(p_key_state), 
std::move(p_screen_position), 
std::move(p_effect_bitmask), std::move(callback));
      return true;
    }
    case internal::kWindowTreeClient_OnDragOver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnDragOver",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTreeClient_OnDragOver_Params_Data* params =
          reinterpret_cast<
              internal::WindowTreeClient_OnDragOver_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      uint32_t p_key_state{};
      gfx::Point p_screen_position{};
      uint32_t p_effect_bitmask{};
      WindowTreeClient_OnDragOver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      p_key_state = input_data_view.key_state();
      if (!input_data_view.ReadScreenPosition(&p_screen_position))
        success = false;
      p_effect_bitmask = input_data_view.effect_bitmask();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnDragOver deserializer");
        return false;
      }
      WindowTreeClient::OnDragOverCallback callback =
          WindowTreeClient_OnDragOver_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnDragOver(
std::move(p_window), 
std::move(p_key_state), 
std::move(p_screen_position), 
std::move(p_effect_bitmask), std::move(callback));
      return true;
    }
    case internal::kWindowTreeClient_OnDragLeave_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnDragLeave",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnCompleteDrop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnCompleteDrop",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTreeClient_OnCompleteDrop_Params_Data* params =
          reinterpret_cast<
              internal::WindowTreeClient_OnCompleteDrop_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      uint32_t p_key_state{};
      gfx::Point p_screen_position{};
      uint32_t p_effect_bitmask{};
      WindowTreeClient_OnCompleteDrop_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      p_key_state = input_data_view.key_state();
      if (!input_data_view.ReadScreenPosition(&p_screen_position))
        success = false;
      p_effect_bitmask = input_data_view.effect_bitmask();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeClient::OnCompleteDrop deserializer");
        return false;
      }
      WindowTreeClient::OnCompleteDropCallback callback =
          WindowTreeClient_OnCompleteDrop_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnCompleteDrop(
std::move(p_window), 
std::move(p_key_state), 
std::move(p_screen_position), 
std::move(p_effect_bitmask), std::move(callback));
      return true;
    }
    case internal::kWindowTreeClient_OnPerformDragDropCompleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnPerformDragDropCompleted",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnDragDropDone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnDragDropDone",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_OnChangeCompleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::OnChangeCompleted",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_RequestClose_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::RequestClose",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowTreeClient_GetWindowManager_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeClient::GetWindowManager",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool WindowTreeClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowTreeClient RequestValidator");

  switch (message->header()->name) {
    case internal::kWindowTreeClient_OnEmbed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnEmbed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnEmbedFromToken_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnEmbedFromToken_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnEmbeddedAppDisconnected_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnUnembed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnUnembed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnCaptureChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnCaptureChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnFrameSinkIdAllocated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnFrameSinkIdAllocated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnTopLevelCreated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnTopLevelCreated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowBoundsChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowBoundsChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowTransformChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowTransformChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnClientAreaChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnClientAreaChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnTransientWindowAdded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnTransientWindowAdded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnTransientWindowRemoved_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnTransientWindowRemoved_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowHierarchyChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowHierarchyChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowReordered_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowReordered_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowDeleted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowDeleted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowVisibilityChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowVisibilityChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowOpacityChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowOpacityChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowParentDrawnStateChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowSharedPropertyChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowInputEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowInputEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnPointerEventObserved_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnPointerEventObserved_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowFocused_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowFocused_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowCursorChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowCursorChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowSurfaceChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowSurfaceChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnDragDropStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnDragDropStart_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnDragEnter_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnDragEnter_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnDragOver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnDragOver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnDragLeave_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnDragLeave_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnCompleteDrop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnCompleteDrop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnPerformDragDropCompleted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnPerformDragDropCompleted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnDragDropDone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnDragDropDone_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnChangeCompleted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnChangeCompleted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_RequestClose_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_RequestClose_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_GetWindowManager_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_GetWindowManager_Params_Data>(
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

bool WindowTreeClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowTreeClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kWindowTreeClient_OnDragEnter_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnDragEnter_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnDragOver_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnDragOver_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnCompleteDrop_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnCompleteDrop_ResponseParams_Data>(
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
void WindowTreeClientInterceptorForTesting::OnEmbed(::ui::mojom::WindowDataPtr root, WindowTreePtr tree, int64_t display_id, uint64_t focused_window, bool parent_drawn, const base::Optional<viz::LocalSurfaceId>& local_surface_id) {
  GetForwardingInterface()->OnEmbed(std::move(root), std::move(tree), std::move(display_id), std::move(focused_window), std::move(parent_drawn), std::move(local_surface_id));
}
void WindowTreeClientInterceptorForTesting::OnEmbedFromToken(const base::UnguessableToken& token, ::ui::mojom::WindowDataPtr root, int64_t display_id, const base::Optional<viz::LocalSurfaceId>& local_surface_id) {
  GetForwardingInterface()->OnEmbedFromToken(std::move(token), std::move(root), std::move(display_id), std::move(local_surface_id));
}
void WindowTreeClientInterceptorForTesting::OnEmbeddedAppDisconnected(uint64_t window) {
  GetForwardingInterface()->OnEmbeddedAppDisconnected(std::move(window));
}
void WindowTreeClientInterceptorForTesting::OnUnembed(uint64_t window) {
  GetForwardingInterface()->OnUnembed(std::move(window));
}
void WindowTreeClientInterceptorForTesting::OnCaptureChanged(uint64_t new_capture, uint64_t old_capture) {
  GetForwardingInterface()->OnCaptureChanged(std::move(new_capture), std::move(old_capture));
}
void WindowTreeClientInterceptorForTesting::OnFrameSinkIdAllocated(uint64_t window, const viz::FrameSinkId& frame_sink_id) {
  GetForwardingInterface()->OnFrameSinkIdAllocated(std::move(window), std::move(frame_sink_id));
}
void WindowTreeClientInterceptorForTesting::OnTopLevelCreated(uint32_t change_id, ::ui::mojom::WindowDataPtr data, int64_t display_id, bool parent_drawn, const base::Optional<viz::LocalSurfaceId>& local_surface_id) {
  GetForwardingInterface()->OnTopLevelCreated(std::move(change_id), std::move(data), std::move(display_id), std::move(parent_drawn), std::move(local_surface_id));
}
void WindowTreeClientInterceptorForTesting::OnWindowBoundsChanged(uint64_t window, const gfx::Rect& old_bounds, const gfx::Rect& new_bounds, const base::Optional<viz::LocalSurfaceId>& local_surface_id) {
  GetForwardingInterface()->OnWindowBoundsChanged(std::move(window), std::move(old_bounds), std::move(new_bounds), std::move(local_surface_id));
}
void WindowTreeClientInterceptorForTesting::OnWindowTransformChanged(uint64_t window, const gfx::Transform& old_transform, const gfx::Transform& new_transform) {
  GetForwardingInterface()->OnWindowTransformChanged(std::move(window), std::move(old_transform), std::move(new_transform));
}
void WindowTreeClientInterceptorForTesting::OnClientAreaChanged(uint64_t window_id, const gfx::Insets& new_client_area, const std::vector<gfx::Rect>& new_additional_client_areas) {
  GetForwardingInterface()->OnClientAreaChanged(std::move(window_id), std::move(new_client_area), std::move(new_additional_client_areas));
}
void WindowTreeClientInterceptorForTesting::OnTransientWindowAdded(uint64_t window_id, uint64_t transient_window_id) {
  GetForwardingInterface()->OnTransientWindowAdded(std::move(window_id), std::move(transient_window_id));
}
void WindowTreeClientInterceptorForTesting::OnTransientWindowRemoved(uint64_t window_id, uint64_t transient_window_id) {
  GetForwardingInterface()->OnTransientWindowRemoved(std::move(window_id), std::move(transient_window_id));
}
void WindowTreeClientInterceptorForTesting::OnWindowHierarchyChanged(uint64_t window, uint64_t old_parent, uint64_t new_parent, std::vector<::ui::mojom::WindowDataPtr> windows) {
  GetForwardingInterface()->OnWindowHierarchyChanged(std::move(window), std::move(old_parent), std::move(new_parent), std::move(windows));
}
void WindowTreeClientInterceptorForTesting::OnWindowReordered(uint64_t window_id, uint64_t relative_window_id, ::ui::mojom::OrderDirection direction) {
  GetForwardingInterface()->OnWindowReordered(std::move(window_id), std::move(relative_window_id), std::move(direction));
}
void WindowTreeClientInterceptorForTesting::OnWindowDeleted(uint64_t window) {
  GetForwardingInterface()->OnWindowDeleted(std::move(window));
}
void WindowTreeClientInterceptorForTesting::OnWindowVisibilityChanged(uint64_t window, bool visible) {
  GetForwardingInterface()->OnWindowVisibilityChanged(std::move(window), std::move(visible));
}
void WindowTreeClientInterceptorForTesting::OnWindowOpacityChanged(uint64_t window, float old_opacity, float new_opacity) {
  GetForwardingInterface()->OnWindowOpacityChanged(std::move(window), std::move(old_opacity), std::move(new_opacity));
}
void WindowTreeClientInterceptorForTesting::OnWindowParentDrawnStateChanged(uint64_t window, bool drawn) {
  GetForwardingInterface()->OnWindowParentDrawnStateChanged(std::move(window), std::move(drawn));
}
void WindowTreeClientInterceptorForTesting::OnWindowSharedPropertyChanged(uint64_t window, const std::string& name, const base::Optional<std::vector<uint8_t>>& new_data) {
  GetForwardingInterface()->OnWindowSharedPropertyChanged(std::move(window), std::move(name), std::move(new_data));
}
void WindowTreeClientInterceptorForTesting::OnWindowInputEvent(uint32_t event_id, uint64_t window, int64_t display_id, uint64_t display_root_window, const gfx::PointF& event_location_in_screen_pixel_layout, std::unique_ptr<ui::Event> event, bool matches_pointer_watcher) {
  GetForwardingInterface()->OnWindowInputEvent(std::move(event_id), std::move(window), std::move(display_id), std::move(display_root_window), std::move(event_location_in_screen_pixel_layout), std::move(event), std::move(matches_pointer_watcher));
}
void WindowTreeClientInterceptorForTesting::OnPointerEventObserved(std::unique_ptr<ui::Event> event, uint64_t window_id, int64_t display_id) {
  GetForwardingInterface()->OnPointerEventObserved(std::move(event), std::move(window_id), std::move(display_id));
}
void WindowTreeClientInterceptorForTesting::OnWindowFocused(uint64_t focused_window_id) {
  GetForwardingInterface()->OnWindowFocused(std::move(focused_window_id));
}
void WindowTreeClientInterceptorForTesting::OnWindowCursorChanged(uint64_t window_id, ui::CursorData cursor) {
  GetForwardingInterface()->OnWindowCursorChanged(std::move(window_id), std::move(cursor));
}
void WindowTreeClientInterceptorForTesting::OnWindowSurfaceChanged(uint64_t window_id, const viz::SurfaceInfo& surface_info) {
  GetForwardingInterface()->OnWindowSurfaceChanged(std::move(window_id), std::move(surface_info));
}
void WindowTreeClientInterceptorForTesting::OnDragDropStart(const base::flat_map<std::string, std::vector<uint8_t>>& drag_data) {
  GetForwardingInterface()->OnDragDropStart(std::move(drag_data));
}
void WindowTreeClientInterceptorForTesting::OnDragEnter(uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, OnDragEnterCallback callback) {
  GetForwardingInterface()->OnDragEnter(std::move(window), std::move(key_state), std::move(screen_position), std::move(effect_bitmask), std::move(callback));
}
void WindowTreeClientInterceptorForTesting::OnDragOver(uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, OnDragOverCallback callback) {
  GetForwardingInterface()->OnDragOver(std::move(window), std::move(key_state), std::move(screen_position), std::move(effect_bitmask), std::move(callback));
}
void WindowTreeClientInterceptorForTesting::OnDragLeave(uint64_t window) {
  GetForwardingInterface()->OnDragLeave(std::move(window));
}
void WindowTreeClientInterceptorForTesting::OnCompleteDrop(uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, OnCompleteDropCallback callback) {
  GetForwardingInterface()->OnCompleteDrop(std::move(window), std::move(key_state), std::move(screen_position), std::move(effect_bitmask), std::move(callback));
}
void WindowTreeClientInterceptorForTesting::OnPerformDragDropCompleted(uint32_t change_id, bool success, uint32_t action_taken) {
  GetForwardingInterface()->OnPerformDragDropCompleted(std::move(change_id), std::move(success), std::move(action_taken));
}
void WindowTreeClientInterceptorForTesting::OnDragDropDone() {
  GetForwardingInterface()->OnDragDropDone();
}
void WindowTreeClientInterceptorForTesting::OnChangeCompleted(uint32_t change_id, bool success) {
  GetForwardingInterface()->OnChangeCompleted(std::move(change_id), std::move(success));
}
void WindowTreeClientInterceptorForTesting::RequestClose(uint64_t window_id) {
  GetForwardingInterface()->RequestClose(std::move(window_id));
}
void WindowTreeClientInterceptorForTesting::GetWindowManager(::ui::mojom::WindowManagerAssociatedRequest internal) {
  GetForwardingInterface()->GetWindowManager(std::move(internal));
}
WindowTreeClientAsyncWaiter::WindowTreeClientAsyncWaiter(
    WindowTreeClient* proxy) : proxy_(proxy) {}

WindowTreeClientAsyncWaiter::~WindowTreeClientAsyncWaiter() = default;

void WindowTreeClientAsyncWaiter::OnDragEnter(
    uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, uint32_t* out_supported_op_bitmask) {
  base::RunLoop loop;
  proxy_->OnDragEnter(std::move(window),std::move(key_state),std::move(screen_position),std::move(effect_bitmask),
      base::BindOnce(
          [](base::RunLoop* loop,
             uint32_t* out_supported_op_bitmask
,
             uint32_t supported_op_bitmask) {*out_supported_op_bitmask = std::move(supported_op_bitmask);
            loop->Quit();
          },
          &loop,
          out_supported_op_bitmask));
  loop.Run();
}
void WindowTreeClientAsyncWaiter::OnDragOver(
    uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, uint32_t* out_supported_op_bitmask) {
  base::RunLoop loop;
  proxy_->OnDragOver(std::move(window),std::move(key_state),std::move(screen_position),std::move(effect_bitmask),
      base::BindOnce(
          [](base::RunLoop* loop,
             uint32_t* out_supported_op_bitmask
,
             uint32_t supported_op_bitmask) {*out_supported_op_bitmask = std::move(supported_op_bitmask);
            loop->Quit();
          },
          &loop,
          out_supported_op_bitmask));
  loop.Run();
}
void WindowTreeClientAsyncWaiter::OnCompleteDrop(
    uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, uint32_t* out_action_taken) {
  base::RunLoop loop;
  proxy_->OnCompleteDrop(std::move(window),std::move(key_state),std::move(screen_position),std::move(effect_bitmask),
      base::BindOnce(
          [](base::RunLoop* loop,
             uint32_t* out_action_taken
,
             uint32_t action_taken) {*out_action_taken = std::move(action_taken);
            loop->Quit();
          },
          &loop,
          out_action_taken));
  loop.Run();
}

const char WindowTreeFactory::Name_[] = "ui.mojom.WindowTreeFactory";

WindowTreeFactoryProxy::WindowTreeFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WindowTreeFactoryProxy::CreateWindowTree(
    WindowTreeRequest in_tree_request, WindowTreeClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowTreeFactory::CreateWindowTree");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeFactory_CreateWindowTree_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowTreeFactory_CreateWindowTree_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::WindowTreeRequestDataView>(
      in_tree_request, &params->tree_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->tree_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid tree_request in WindowTreeFactory.CreateWindowTree request");
  mojo::internal::Serialize<::ui::mojom::WindowTreeClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in WindowTreeFactory.CreateWindowTree request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WindowTreeFactoryStubDispatch::Accept(
    WindowTreeFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWindowTreeFactory_CreateWindowTree_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeFactory::CreateWindowTree",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeFactory_CreateWindowTree_Params_Data* params =
          reinterpret_cast<internal::WindowTreeFactory_CreateWindowTree_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WindowTreeRequest p_tree_request{};
      WindowTreeClientPtr p_client{};
      WindowTreeFactory_CreateWindowTree_ParamsDataView input_data_view(params, &serialization_context);
      
      p_tree_request =
          input_data_view.TakeTreeRequest<decltype(p_tree_request)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowTreeFactory::CreateWindowTree deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateWindowTree(
std::move(p_tree_request), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool WindowTreeFactoryStubDispatch::AcceptWithResponder(
    WindowTreeFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWindowTreeFactory_CreateWindowTree_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowTreeFactory::CreateWindowTree",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool WindowTreeFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowTreeFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kWindowTreeFactory_CreateWindowTree_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeFactory_CreateWindowTree_Params_Data>(
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

void WindowTreeFactoryInterceptorForTesting::CreateWindowTree(WindowTreeRequest tree_request, WindowTreeClientPtr client) {
  GetForwardingInterface()->CreateWindowTree(std::move(tree_request), std::move(client));
}
WindowTreeFactoryAsyncWaiter::WindowTreeFactoryAsyncWaiter(
    WindowTreeFactory* proxy) : proxy_(proxy) {}

WindowTreeFactoryAsyncWaiter::~WindowTreeFactoryAsyncWaiter() = default;


}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif