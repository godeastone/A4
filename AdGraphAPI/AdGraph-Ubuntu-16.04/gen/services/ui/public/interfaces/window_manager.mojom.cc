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

#include "services/ui/public/interfaces/window_manager.mojom.h"

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

#include "services/ui/public/interfaces/window_manager.mojom-shared-message-ids.h"
#include "gpu/ipc/common/surface_handle_struct_traits.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/ui/public/interfaces/cursor/cursor_struct_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "ui/base/mojo/ui_base_types_struct_traits.h"
#include "ui/display/mojo/display_struct_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
namespace ui {
namespace mojom {
WmAccelerator::WmAccelerator()
    : id(),
      event_matcher() {}

WmAccelerator::WmAccelerator(
    uint32_t id_in,
    ::ui::mojom::EventMatcherPtr event_matcher_in)
    : id(std::move(id_in)),
      event_matcher(std::move(event_matcher_in)) {}

WmAccelerator::~WmAccelerator() = default;

bool WmAccelerator::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char WindowManager::Name_[] = "ui.mojom.WindowManager";
const char WindowManager::kFocusable_InitProperty[] = "init:focusable";
const char WindowManager::kTranslucent_InitProperty[] = "init:translucent";
const char WindowManager::kBounds_InitProperty[] = "init:bounds";
const char WindowManager::kContainerId_InitProperty[] = "init:container_id";
const char WindowManager::kDisableImmersive_InitProperty[] = "init:disable_immersive";
const char WindowManager::kDisplayId_InitProperty[] = "init:display_id";
const char WindowManager::kRemoveStandardFrame_InitProperty[] = "init:remove-standard-frame";
const char WindowManager::kActiveFrameColor_InitProperty[] = "init:active-frame-color";
const char WindowManager::kInactiveFrameColor_InitProperty[] = "init:inactive-frame-color";
const char WindowManager::kWindowIgnoredByShelf_InitProperty[] = "init:window-ignored-by-shelf";
const char WindowManager::kWindowType_InitProperty[] = "init:window-type";
const char WindowManager::kAlwaysOnTop_Property[] = "prop:always_on_top";
const char WindowManager::kAppIcon_Property[] = "prop:app-icon";
const char WindowManager::kDrawAttention_Property[] = "prop:draw-attention";
const char WindowManager::kExcludeFromMru_Property[] = "prop:exclude_from_mru";
const char WindowManager::kImmersiveFullscreen_Property[] = "prop:immersive-fullscreen";
const char WindowManager::kMinimumSize_Property[] = "prop:minimum-size";
const char WindowManager::kName_Property[] = "prop:name";
const char WindowManager::kPanelAttached_Property[] = "prop:panel-attached";
const char WindowManager::kPreferredSize_Property[] = "prop:preferred-size";
const char WindowManager::kRenderParentTitleArea_Property[] = "render-parent-non-client-area";
const char WindowManager::kResizeBehavior_Property[] = "prop:resize-behavior";
const char WindowManager::kRestoreBounds_Property[] = "prop:restore-bounds";
const char WindowManager::kShadowElevation_Property[] = "prop:shadow-elevation";
const char WindowManager::kShelfID_Property[] = "prop:shelf-id";
const char WindowManager::kShelfItemType_Property[] = "prop:shelf-item-type";
const char WindowManager::kShowState_Property[] = "prop:show-state";
const char WindowManager::kWindowCornerRadius_Property[] = "prop:window-corner-radius";
const char WindowManager::kWindowIcon_Property[] = "prop:window-icon";
const char WindowManager::kWindowTitle_Property[] = "prop:window-title";
const char WindowManager::kWindowTitleShown_Property[] = "prop:window-title-shown";

class WindowManager_WmMoveDragImage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowManager_WmMoveDragImage_ForwardToCallback(
      WindowManager::WmMoveDragImageCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowManager::WmMoveDragImageCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowManager_WmMoveDragImage_ForwardToCallback);
};

WindowManagerProxy::WindowManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WindowManagerProxy::OnConnect(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::OnConnect");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_OnConnect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_OnConnect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerProxy::WmOnAcceleratedWidgetForDisplay(
    int64_t in_display_id, ::gpu::SurfaceHandle in_surface_handle) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmOnAcceleratedWidgetForDisplay");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmOnAcceleratedWidgetForDisplay_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmOnAcceleratedWidgetForDisplay_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->display_id = in_display_id;
  typename decltype(params->surface_handle)::BaseType::BufferWriter
      surface_handle_writer;
  mojo::internal::Serialize<::gpu::mojom::SurfaceHandleDataView>(
      in_surface_handle, buffer, &surface_handle_writer, &serialization_context);
  params->surface_handle.Set(
      surface_handle_writer.is_null() ? nullptr : surface_handle_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->surface_handle.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null surface_handle in WindowManager.WmOnAcceleratedWidgetForDisplay request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerProxy::WmNewDisplayAdded(
    const display::Display& in_display, ::ui::mojom::WindowDataPtr in_root, bool in_parent_drawn, const base::Optional<viz::LocalSurfaceId>& in_local_surface_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmNewDisplayAdded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmNewDisplayAdded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmNewDisplayAdded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->display)::BaseType::BufferWriter
      display_writer;
  mojo::internal::Serialize<::display::mojom::DisplayDataView>(
      in_display, buffer, &display_writer, &serialization_context);
  params->display.Set(
      display_writer.is_null() ? nullptr : display_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->display.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null display in WindowManager.WmNewDisplayAdded request");
  typename decltype(params->root)::BaseType::BufferWriter
      root_writer;
  mojo::internal::Serialize<::ui::mojom::WindowDataDataView>(
      in_root, buffer, &root_writer, &serialization_context);
  params->root.Set(
      root_writer.is_null() ? nullptr : root_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->root.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null root in WindowManager.WmNewDisplayAdded request");
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

void WindowManagerProxy::WmDisplayRemoved(
    int64_t in_display_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmDisplayRemoved");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmDisplayRemoved_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmDisplayRemoved_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->display_id = in_display_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerProxy::WmDisplayModified(
    const display::Display& in_display) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmDisplayModified");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmDisplayModified_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmDisplayModified_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->display)::BaseType::BufferWriter
      display_writer;
  mojo::internal::Serialize<::display::mojom::DisplayDataView>(
      in_display, buffer, &display_writer, &serialization_context);
  params->display.Set(
      display_writer.is_null() ? nullptr : display_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->display.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null display in WindowManager.WmDisplayModified request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerProxy::WmSetBounds(
    uint32_t in_change_id, uint64_t in_window_id, const gfx::Rect& in_bounds) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmSetBounds");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmSetBounds_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmSetBounds_Params_Data::BufferWriter
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
      "null bounds in WindowManager.WmSetBounds request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerProxy::WmSetProperty(
    uint32_t in_change_id, uint64_t in_window_id, const std::string& in_name, const base::Optional<std::vector<uint8_t>>& in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmSetProperty");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmSetProperty_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmSetProperty_Params_Data::BufferWriter
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
      "null name in WindowManager.WmSetProperty request");
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

void WindowManagerProxy::WmSetModalType(
    uint64_t in_window_id, ui::ModalType in_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmSetModalType");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmSetModalType_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmSetModalType_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  mojo::internal::Serialize<::ui::mojom::ModalType>(
      in_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerProxy::WmSetCanFocus(
    uint64_t in_window_id, bool in_can_focus) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmSetCanFocus");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmSetCanFocus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmSetCanFocus_Params_Data::BufferWriter
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

void WindowManagerProxy::WmCreateTopLevelWindow(
    uint32_t in_change_id, const viz::FrameSinkId& in_frame_sink_id, const base::flat_map<std::string, std::vector<uint8_t>>& in_properties) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmCreateTopLevelWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmCreateTopLevelWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmCreateTopLevelWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in WindowManager.WmCreateTopLevelWindow request");
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
      "null properties in WindowManager.WmCreateTopLevelWindow request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerProxy::WmClientJankinessChanged(
    uint32_t in_client_id, bool in_janky) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmClientJankinessChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmClientJankinessChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmClientJankinessChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->client_id = in_client_id;
  params->janky = in_janky;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerProxy::WmBuildDragImage(
    const gfx::Point& in_screen_location, const SkBitmap& in_drag_image, const gfx::Vector2d& in_drag_image_offset, ::ui::mojom::PointerKind in_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmBuildDragImage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmBuildDragImage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmBuildDragImage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->screen_location)::BaseType::BufferWriter
      screen_location_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_screen_location, buffer, &screen_location_writer, &serialization_context);
  params->screen_location.Set(
      screen_location_writer.is_null() ? nullptr : screen_location_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->screen_location.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null screen_location in WindowManager.WmBuildDragImage request");
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
      "null drag_image_offset in WindowManager.WmBuildDragImage request");
  mojo::internal::Serialize<::ui::mojom::PointerKind>(
      in_source, &params->source);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerProxy::WmMoveDragImage(
    const gfx::Point& in_screen_location, WmMoveDragImageCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmMoveDragImage");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmMoveDragImage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmMoveDragImage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->screen_location)::BaseType::BufferWriter
      screen_location_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_screen_location, buffer, &screen_location_writer, &serialization_context);
  params->screen_location.Set(
      screen_location_writer.is_null() ? nullptr : screen_location_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->screen_location.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null screen_location in WindowManager.WmMoveDragImage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowManager_WmMoveDragImage_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowManagerProxy::WmDestroyDragImage(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmDestroyDragImage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmDestroyDragImage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmDestroyDragImage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerProxy::WmPerformMoveLoop(
    uint32_t in_change_id, uint64_t in_window_id, ::ui::mojom::MoveLoopSource in_source, const gfx::Point& in_cursor_location) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmPerformMoveLoop");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmPerformMoveLoop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmPerformMoveLoop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  mojo::internal::Serialize<::ui::mojom::MoveLoopSource>(
      in_source, &params->source);
  typename decltype(params->cursor_location)::BaseType::BufferWriter
      cursor_location_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_cursor_location, buffer, &cursor_location_writer, &serialization_context);
  params->cursor_location.Set(
      cursor_location_writer.is_null() ? nullptr : cursor_location_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cursor_location.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cursor_location in WindowManager.WmPerformMoveLoop request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerProxy::WmCancelMoveLoop(
    uint32_t in_change_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmCancelMoveLoop");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmCancelMoveLoop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmCancelMoveLoop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerProxy::WmDeactivateWindow(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmDeactivateWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmDeactivateWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmDeactivateWindow_Params_Data::BufferWriter
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

void WindowManagerProxy::WmStackAbove(
    uint32_t in_change_id, uint64_t in_above_id, uint64_t in_below_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmStackAbove");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmStackAbove_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmStackAbove_Params_Data::BufferWriter
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

void WindowManagerProxy::WmStackAtTop(
    uint32_t in_change_id, uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmStackAtTop");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmStackAtTop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmStackAtTop_Params_Data::BufferWriter
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

void WindowManagerProxy::WmPerformWmAction(
    uint64_t in_window_id, const std::string& in_action) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::WmPerformWmAction");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmPerformWmAction_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmPerformWmAction_Params_Data::BufferWriter
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
      "null action in WindowManager.WmPerformWmAction request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerProxy::OnAccelerator(
    uint32_t in_ack_id, uint32_t in_accelerator_id, std::unique_ptr<ui::Event> in_event) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::OnAccelerator");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_OnAccelerator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_OnAccelerator_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->ack_id = in_ack_id;
  params->accelerator_id = in_accelerator_id;
  typename decltype(params->event)::BaseType::BufferWriter
      event_writer;
  mojo::internal::Serialize<::ui::mojom::EventDataView>(
      in_event, buffer, &event_writer, &serialization_context);
  params->event.Set(
      event_writer.is_null() ? nullptr : event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in WindowManager.OnAccelerator request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerProxy::OnCursorTouchVisibleChanged(
    bool in_enabled) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::OnCursorTouchVisibleChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_OnCursorTouchVisibleChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_OnCursorTouchVisibleChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->enabled = in_enabled;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerProxy::OnEventBlockedByModalWindow(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManager::OnEventBlockedByModalWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_OnEventBlockedByModalWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_OnEventBlockedByModalWindow_Params_Data::BufferWriter
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
class WindowManager_WmMoveDragImage_ProxyToResponder {
 public:
  static WindowManager::WmMoveDragImageCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowManager_WmMoveDragImage_ProxyToResponder> proxy(
        new WindowManager_WmMoveDragImage_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowManager_WmMoveDragImage_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowManager_WmMoveDragImage_ProxyToResponder() {
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
  WindowManager_WmMoveDragImage_ProxyToResponder(
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
        << "WindowManager::WmMoveDragImageCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(WindowManager_WmMoveDragImage_ProxyToResponder);
};

bool WindowManager_WmMoveDragImage_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::WindowManager::WmMoveDragImageCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowManager_WmMoveDragImage_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowManager_WmMoveDragImage_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WindowManager_WmMoveDragImage_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WindowManager::WmMoveDragImage response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void WindowManager_WmMoveDragImage_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManager_WmMoveDragImage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManager_WmMoveDragImage_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmMoveDragImageCallback",
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
bool WindowManagerStubDispatch::Accept(
    WindowManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWindowManager_OnConnect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::OnConnect",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_OnConnect_Params_Data* params =
          reinterpret_cast<internal::WindowManager_OnConnect_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WindowManager_OnConnect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::OnConnect deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnConnect();
      return true;
    }
    case internal::kWindowManager_WmOnAcceleratedWidgetForDisplay_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmOnAcceleratedWidgetForDisplay",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmOnAcceleratedWidgetForDisplay_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmOnAcceleratedWidgetForDisplay_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_display_id{};
      ::gpu::SurfaceHandle p_surface_handle{};
      WindowManager_WmOnAcceleratedWidgetForDisplay_ParamsDataView input_data_view(params, &serialization_context);
      
      p_display_id = input_data_view.display_id();
      if (!input_data_view.ReadSurfaceHandle(&p_surface_handle))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmOnAcceleratedWidgetForDisplay deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmOnAcceleratedWidgetForDisplay(
std::move(p_display_id), 
std::move(p_surface_handle));
      return true;
    }
    case internal::kWindowManager_WmNewDisplayAdded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmNewDisplayAdded",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmNewDisplayAdded_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmNewDisplayAdded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      display::Display p_display{};
      ::ui::mojom::WindowDataPtr p_root{};
      bool p_parent_drawn{};
      base::Optional<viz::LocalSurfaceId> p_local_surface_id{};
      WindowManager_WmNewDisplayAdded_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDisplay(&p_display))
        success = false;
      if (!input_data_view.ReadRoot(&p_root))
        success = false;
      p_parent_drawn = input_data_view.parent_drawn();
      if (!input_data_view.ReadLocalSurfaceId(&p_local_surface_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmNewDisplayAdded deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmNewDisplayAdded(
std::move(p_display), 
std::move(p_root), 
std::move(p_parent_drawn), 
std::move(p_local_surface_id));
      return true;
    }
    case internal::kWindowManager_WmDisplayRemoved_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmDisplayRemoved",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmDisplayRemoved_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmDisplayRemoved_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_display_id{};
      WindowManager_WmDisplayRemoved_ParamsDataView input_data_view(params, &serialization_context);
      
      p_display_id = input_data_view.display_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmDisplayRemoved deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmDisplayRemoved(
std::move(p_display_id));
      return true;
    }
    case internal::kWindowManager_WmDisplayModified_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmDisplayModified",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmDisplayModified_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmDisplayModified_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      display::Display p_display{};
      WindowManager_WmDisplayModified_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDisplay(&p_display))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmDisplayModified deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmDisplayModified(
std::move(p_display));
      return true;
    }
    case internal::kWindowManager_WmSetBounds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmSetBounds",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmSetBounds_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmSetBounds_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      gfx::Rect p_bounds{};
      WindowManager_WmSetBounds_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadBounds(&p_bounds))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmSetBounds deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmSetBounds(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_bounds));
      return true;
    }
    case internal::kWindowManager_WmSetProperty_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmSetProperty",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmSetProperty_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmSetProperty_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      std::string p_name{};
      base::Optional<std::vector<uint8_t>> p_value{};
      WindowManager_WmSetProperty_ParamsDataView input_data_view(params, &serialization_context);
      
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
            "WindowManager::WmSetProperty deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmSetProperty(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_name), 
std::move(p_value));
      return true;
    }
    case internal::kWindowManager_WmSetModalType_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmSetModalType",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmSetModalType_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmSetModalType_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      ui::ModalType p_type{};
      WindowManager_WmSetModalType_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmSetModalType deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmSetModalType(
std::move(p_window_id), 
std::move(p_type));
      return true;
    }
    case internal::kWindowManager_WmSetCanFocus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmSetCanFocus",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmSetCanFocus_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmSetCanFocus_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      bool p_can_focus{};
      WindowManager_WmSetCanFocus_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      p_can_focus = input_data_view.can_focus();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmSetCanFocus deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmSetCanFocus(
std::move(p_window_id), 
std::move(p_can_focus));
      return true;
    }
    case internal::kWindowManager_WmCreateTopLevelWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmCreateTopLevelWindow",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmCreateTopLevelWindow_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmCreateTopLevelWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      viz::FrameSinkId p_frame_sink_id{};
      base::flat_map<std::string, std::vector<uint8_t>> p_properties{};
      WindowManager_WmCreateTopLevelWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      if (!input_data_view.ReadProperties(&p_properties))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmCreateTopLevelWindow deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmCreateTopLevelWindow(
std::move(p_change_id), 
std::move(p_frame_sink_id), 
std::move(p_properties));
      return true;
    }
    case internal::kWindowManager_WmClientJankinessChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmClientJankinessChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmClientJankinessChanged_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmClientJankinessChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_client_id{};
      bool p_janky{};
      WindowManager_WmClientJankinessChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client_id = input_data_view.client_id();
      p_janky = input_data_view.janky();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmClientJankinessChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmClientJankinessChanged(
std::move(p_client_id), 
std::move(p_janky));
      return true;
    }
    case internal::kWindowManager_WmBuildDragImage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmBuildDragImage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmBuildDragImage_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmBuildDragImage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Point p_screen_location{};
      SkBitmap p_drag_image{};
      gfx::Vector2d p_drag_image_offset{};
      ::ui::mojom::PointerKind p_source{};
      WindowManager_WmBuildDragImage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadScreenLocation(&p_screen_location))
        success = false;
      if (!input_data_view.ReadDragImage(&p_drag_image))
        success = false;
      if (!input_data_view.ReadDragImageOffset(&p_drag_image_offset))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmBuildDragImage deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmBuildDragImage(
std::move(p_screen_location), 
std::move(p_drag_image), 
std::move(p_drag_image_offset), 
std::move(p_source));
      return true;
    }
    case internal::kWindowManager_WmMoveDragImage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmMoveDragImage",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmDestroyDragImage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmDestroyDragImage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmDestroyDragImage_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmDestroyDragImage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WindowManager_WmDestroyDragImage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmDestroyDragImage deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmDestroyDragImage();
      return true;
    }
    case internal::kWindowManager_WmPerformMoveLoop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmPerformMoveLoop",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmPerformMoveLoop_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmPerformMoveLoop_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      ::ui::mojom::MoveLoopSource p_source{};
      gfx::Point p_cursor_location{};
      WindowManager_WmPerformMoveLoop_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!input_data_view.ReadCursorLocation(&p_cursor_location))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmPerformMoveLoop deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmPerformMoveLoop(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_source), 
std::move(p_cursor_location));
      return true;
    }
    case internal::kWindowManager_WmCancelMoveLoop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmCancelMoveLoop",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmCancelMoveLoop_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmCancelMoveLoop_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      WindowManager_WmCancelMoveLoop_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmCancelMoveLoop deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmCancelMoveLoop(
std::move(p_change_id));
      return true;
    }
    case internal::kWindowManager_WmDeactivateWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmDeactivateWindow",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmDeactivateWindow_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmDeactivateWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowManager_WmDeactivateWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmDeactivateWindow deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmDeactivateWindow(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowManager_WmStackAbove_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmStackAbove",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmStackAbove_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmStackAbove_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_above_id{};
      uint64_t p_below_id{};
      WindowManager_WmStackAbove_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_above_id = input_data_view.above_id();
      p_below_id = input_data_view.below_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmStackAbove deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmStackAbove(
std::move(p_change_id), 
std::move(p_above_id), 
std::move(p_below_id));
      return true;
    }
    case internal::kWindowManager_WmStackAtTop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmStackAtTop",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmStackAtTop_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmStackAtTop_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      WindowManager_WmStackAtTop_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmStackAtTop deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmStackAtTop(
std::move(p_change_id), 
std::move(p_window_id));
      return true;
    }
    case internal::kWindowManager_WmPerformWmAction_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmPerformWmAction",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_WmPerformWmAction_Params_Data* params =
          reinterpret_cast<internal::WindowManager_WmPerformWmAction_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      std::string p_action{};
      WindowManager_WmPerformWmAction_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadAction(&p_action))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmPerformWmAction deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmPerformWmAction(
std::move(p_window_id), 
std::move(p_action));
      return true;
    }
    case internal::kWindowManager_OnAccelerator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::OnAccelerator",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_OnAccelerator_Params_Data* params =
          reinterpret_cast<internal::WindowManager_OnAccelerator_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_ack_id{};
      uint32_t p_accelerator_id{};
      std::unique_ptr<ui::Event> p_event{};
      WindowManager_OnAccelerator_ParamsDataView input_data_view(params, &serialization_context);
      
      p_ack_id = input_data_view.ack_id();
      p_accelerator_id = input_data_view.accelerator_id();
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::OnAccelerator deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnAccelerator(
std::move(p_ack_id), 
std::move(p_accelerator_id), 
std::move(p_event));
      return true;
    }
    case internal::kWindowManager_OnCursorTouchVisibleChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::OnCursorTouchVisibleChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_OnCursorTouchVisibleChanged_Params_Data* params =
          reinterpret_cast<internal::WindowManager_OnCursorTouchVisibleChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_enabled{};
      WindowManager_OnCursorTouchVisibleChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_enabled = input_data_view.enabled();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::OnCursorTouchVisibleChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnCursorTouchVisibleChanged(
std::move(p_enabled));
      return true;
    }
    case internal::kWindowManager_OnEventBlockedByModalWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::OnEventBlockedByModalWindow",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManager_OnEventBlockedByModalWindow_Params_Data* params =
          reinterpret_cast<internal::WindowManager_OnEventBlockedByModalWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowManager_OnEventBlockedByModalWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::OnEventBlockedByModalWindow deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnEventBlockedByModalWindow(
std::move(p_window_id));
      return true;
    }
  }
  return false;
}

// static
bool WindowManagerStubDispatch::AcceptWithResponder(
    WindowManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWindowManager_OnConnect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::OnConnect",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmOnAcceleratedWidgetForDisplay_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmOnAcceleratedWidgetForDisplay",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmNewDisplayAdded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmNewDisplayAdded",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmDisplayRemoved_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmDisplayRemoved",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmDisplayModified_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmDisplayModified",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmSetBounds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmSetBounds",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmSetProperty_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmSetProperty",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmSetModalType_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmSetModalType",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmSetCanFocus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmSetCanFocus",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmCreateTopLevelWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmCreateTopLevelWindow",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmClientJankinessChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmClientJankinessChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmBuildDragImage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmBuildDragImage",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmMoveDragImage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmMoveDragImage",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowManager_WmMoveDragImage_Params_Data* params =
          reinterpret_cast<
              internal::WindowManager_WmMoveDragImage_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Point p_screen_location{};
      WindowManager_WmMoveDragImage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadScreenLocation(&p_screen_location))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManager::WmMoveDragImage deserializer");
        return false;
      }
      WindowManager::WmMoveDragImageCallback callback =
          WindowManager_WmMoveDragImage_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmMoveDragImage(
std::move(p_screen_location), std::move(callback));
      return true;
    }
    case internal::kWindowManager_WmDestroyDragImage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmDestroyDragImage",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmPerformMoveLoop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmPerformMoveLoop",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmCancelMoveLoop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmCancelMoveLoop",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmDeactivateWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmDeactivateWindow",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmStackAbove_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmStackAbove",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmStackAtTop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmStackAtTop",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_WmPerformWmAction_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::WmPerformWmAction",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_OnAccelerator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::OnAccelerator",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_OnCursorTouchVisibleChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::OnCursorTouchVisibleChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManager_OnEventBlockedByModalWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManager::OnEventBlockedByModalWindow",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool WindowManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowManager RequestValidator");

  switch (message->header()->name) {
    case internal::kWindowManager_OnConnect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_OnConnect_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmOnAcceleratedWidgetForDisplay_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmOnAcceleratedWidgetForDisplay_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmNewDisplayAdded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmNewDisplayAdded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmDisplayRemoved_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmDisplayRemoved_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmDisplayModified_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmDisplayModified_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmSetBounds_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmSetBounds_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmSetProperty_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmSetProperty_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmSetModalType_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmSetModalType_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmSetCanFocus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmSetCanFocus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmCreateTopLevelWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmCreateTopLevelWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmClientJankinessChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmClientJankinessChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmBuildDragImage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmBuildDragImage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmMoveDragImage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmMoveDragImage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmDestroyDragImage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmDestroyDragImage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmPerformMoveLoop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmPerformMoveLoop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmCancelMoveLoop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmCancelMoveLoop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmDeactivateWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmDeactivateWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmStackAbove_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmStackAbove_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmStackAtTop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmStackAtTop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_WmPerformWmAction_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmPerformWmAction_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_OnAccelerator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_OnAccelerator_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_OnCursorTouchVisibleChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_OnCursorTouchVisibleChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManager_OnEventBlockedByModalWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_OnEventBlockedByModalWindow_Params_Data>(
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

bool WindowManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kWindowManager_WmMoveDragImage_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManager_WmMoveDragImage_ResponseParams_Data>(
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
void WindowManagerInterceptorForTesting::OnConnect() {
  GetForwardingInterface()->OnConnect();
}
void WindowManagerInterceptorForTesting::WmOnAcceleratedWidgetForDisplay(int64_t display_id, ::gpu::SurfaceHandle surface_handle) {
  GetForwardingInterface()->WmOnAcceleratedWidgetForDisplay(std::move(display_id), std::move(surface_handle));
}
void WindowManagerInterceptorForTesting::WmNewDisplayAdded(const display::Display& display, ::ui::mojom::WindowDataPtr root, bool parent_drawn, const base::Optional<viz::LocalSurfaceId>& local_surface_id) {
  GetForwardingInterface()->WmNewDisplayAdded(std::move(display), std::move(root), std::move(parent_drawn), std::move(local_surface_id));
}
void WindowManagerInterceptorForTesting::WmDisplayRemoved(int64_t display_id) {
  GetForwardingInterface()->WmDisplayRemoved(std::move(display_id));
}
void WindowManagerInterceptorForTesting::WmDisplayModified(const display::Display& display) {
  GetForwardingInterface()->WmDisplayModified(std::move(display));
}
void WindowManagerInterceptorForTesting::WmSetBounds(uint32_t change_id, uint64_t window_id, const gfx::Rect& bounds) {
  GetForwardingInterface()->WmSetBounds(std::move(change_id), std::move(window_id), std::move(bounds));
}
void WindowManagerInterceptorForTesting::WmSetProperty(uint32_t change_id, uint64_t window_id, const std::string& name, const base::Optional<std::vector<uint8_t>>& value) {
  GetForwardingInterface()->WmSetProperty(std::move(change_id), std::move(window_id), std::move(name), std::move(value));
}
void WindowManagerInterceptorForTesting::WmSetModalType(uint64_t window_id, ui::ModalType type) {
  GetForwardingInterface()->WmSetModalType(std::move(window_id), std::move(type));
}
void WindowManagerInterceptorForTesting::WmSetCanFocus(uint64_t window_id, bool can_focus) {
  GetForwardingInterface()->WmSetCanFocus(std::move(window_id), std::move(can_focus));
}
void WindowManagerInterceptorForTesting::WmCreateTopLevelWindow(uint32_t change_id, const viz::FrameSinkId& frame_sink_id, const base::flat_map<std::string, std::vector<uint8_t>>& properties) {
  GetForwardingInterface()->WmCreateTopLevelWindow(std::move(change_id), std::move(frame_sink_id), std::move(properties));
}
void WindowManagerInterceptorForTesting::WmClientJankinessChanged(uint32_t client_id, bool janky) {
  GetForwardingInterface()->WmClientJankinessChanged(std::move(client_id), std::move(janky));
}
void WindowManagerInterceptorForTesting::WmBuildDragImage(const gfx::Point& screen_location, const SkBitmap& drag_image, const gfx::Vector2d& drag_image_offset, ::ui::mojom::PointerKind source) {
  GetForwardingInterface()->WmBuildDragImage(std::move(screen_location), std::move(drag_image), std::move(drag_image_offset), std::move(source));
}
void WindowManagerInterceptorForTesting::WmMoveDragImage(const gfx::Point& screen_location, WmMoveDragImageCallback callback) {
  GetForwardingInterface()->WmMoveDragImage(std::move(screen_location), std::move(callback));
}
void WindowManagerInterceptorForTesting::WmDestroyDragImage() {
  GetForwardingInterface()->WmDestroyDragImage();
}
void WindowManagerInterceptorForTesting::WmPerformMoveLoop(uint32_t change_id, uint64_t window_id, ::ui::mojom::MoveLoopSource source, const gfx::Point& cursor_location) {
  GetForwardingInterface()->WmPerformMoveLoop(std::move(change_id), std::move(window_id), std::move(source), std::move(cursor_location));
}
void WindowManagerInterceptorForTesting::WmCancelMoveLoop(uint32_t change_id) {
  GetForwardingInterface()->WmCancelMoveLoop(std::move(change_id));
}
void WindowManagerInterceptorForTesting::WmDeactivateWindow(uint64_t window_id) {
  GetForwardingInterface()->WmDeactivateWindow(std::move(window_id));
}
void WindowManagerInterceptorForTesting::WmStackAbove(uint32_t change_id, uint64_t above_id, uint64_t below_id) {
  GetForwardingInterface()->WmStackAbove(std::move(change_id), std::move(above_id), std::move(below_id));
}
void WindowManagerInterceptorForTesting::WmStackAtTop(uint32_t change_id, uint64_t window_id) {
  GetForwardingInterface()->WmStackAtTop(std::move(change_id), std::move(window_id));
}
void WindowManagerInterceptorForTesting::WmPerformWmAction(uint64_t window_id, const std::string& action) {
  GetForwardingInterface()->WmPerformWmAction(std::move(window_id), std::move(action));
}
void WindowManagerInterceptorForTesting::OnAccelerator(uint32_t ack_id, uint32_t accelerator_id, std::unique_ptr<ui::Event> event) {
  GetForwardingInterface()->OnAccelerator(std::move(ack_id), std::move(accelerator_id), std::move(event));
}
void WindowManagerInterceptorForTesting::OnCursorTouchVisibleChanged(bool enabled) {
  GetForwardingInterface()->OnCursorTouchVisibleChanged(std::move(enabled));
}
void WindowManagerInterceptorForTesting::OnEventBlockedByModalWindow(uint64_t window_id) {
  GetForwardingInterface()->OnEventBlockedByModalWindow(std::move(window_id));
}
WindowManagerAsyncWaiter::WindowManagerAsyncWaiter(
    WindowManager* proxy) : proxy_(proxy) {}

WindowManagerAsyncWaiter::~WindowManagerAsyncWaiter() = default;

void WindowManagerAsyncWaiter::WmMoveDragImage(
    const gfx::Point& screen_location) {
  base::RunLoop loop;
  proxy_->WmMoveDragImage(std::move(screen_location),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

const char WindowManagerClient::Name_[] = "ui.mojom.WindowManagerClient";

class WindowManagerClient_AddAccelerators_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowManagerClient_AddAccelerators_ForwardToCallback(
      WindowManagerClient::AddAcceleratorsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowManagerClient::AddAcceleratorsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowManagerClient_AddAccelerators_ForwardToCallback);
};

class WindowManagerClient_SetDisplayRoot_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowManagerClient_SetDisplayRoot_ForwardToCallback(
      WindowManagerClient::SetDisplayRootCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowManagerClient::SetDisplayRootCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowManagerClient_SetDisplayRoot_ForwardToCallback);
};

class WindowManagerClient_SetDisplayConfiguration_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowManagerClient_SetDisplayConfiguration_ForwardToCallback(
      WindowManagerClient::SetDisplayConfigurationCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowManagerClient::SetDisplayConfigurationCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowManagerClient_SetDisplayConfiguration_ForwardToCallback);
};

class WindowManagerClient_SwapDisplayRoots_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowManagerClient_SwapDisplayRoots_ForwardToCallback(
      WindowManagerClient::SwapDisplayRootsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowManagerClient::SwapDisplayRootsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowManagerClient_SwapDisplayRoots_ForwardToCallback);
};

class WindowManagerClient_SetBlockingContainers_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowManagerClient_SetBlockingContainers_ForwardToCallback(
      WindowManagerClient::SetBlockingContainersCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowManagerClient::SetBlockingContainersCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowManagerClient_SetBlockingContainers_ForwardToCallback);
};

WindowManagerClientProxy::WindowManagerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WindowManagerClientProxy::AddActivationParent(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::AddActivationParent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_AddActivationParent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_AddActivationParent_Params_Data::BufferWriter
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

void WindowManagerClientProxy::RemoveActivationParent(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::RemoveActivationParent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_RemoveActivationParent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_RemoveActivationParent_Params_Data::BufferWriter
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

void WindowManagerClientProxy::SetExtendedHitRegionForChildren(
    uint64_t in_window_id, const gfx::Insets& in_mouse_insets, const gfx::Insets& in_touch_insets) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::SetExtendedHitRegionForChildren");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_SetExtendedHitRegionForChildren_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_SetExtendedHitRegionForChildren_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  typename decltype(params->mouse_insets)::BaseType::BufferWriter
      mouse_insets_writer;
  mojo::internal::Serialize<::gfx::mojom::InsetsDataView>(
      in_mouse_insets, buffer, &mouse_insets_writer, &serialization_context);
  params->mouse_insets.Set(
      mouse_insets_writer.is_null() ? nullptr : mouse_insets_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->mouse_insets.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mouse_insets in WindowManagerClient.SetExtendedHitRegionForChildren request");
  typename decltype(params->touch_insets)::BaseType::BufferWriter
      touch_insets_writer;
  mojo::internal::Serialize<::gfx::mojom::InsetsDataView>(
      in_touch_insets, buffer, &touch_insets_writer, &serialization_context);
  params->touch_insets.Set(
      touch_insets_writer.is_null() ? nullptr : touch_insets_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->touch_insets.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null touch_insets in WindowManagerClient.SetExtendedHitRegionForChildren request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerClientProxy::AddAccelerators(
    std::vector<WmAcceleratorPtr> in_accelerators, AddAcceleratorsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::AddAccelerators");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_AddAccelerators_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_AddAccelerators_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->accelerators)::BaseType::BufferWriter
      accelerators_writer;
  const mojo::internal::ContainerValidateParams accelerators_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::WmAcceleratorDataView>>(
      in_accelerators, buffer, &accelerators_writer, &accelerators_validate_params,
      &serialization_context);
  params->accelerators.Set(
      accelerators_writer.is_null() ? nullptr : accelerators_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->accelerators.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null accelerators in WindowManagerClient.AddAccelerators request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowManagerClient_AddAccelerators_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowManagerClientProxy::RemoveAccelerator(
    uint32_t in_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::RemoveAccelerator");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_RemoveAccelerator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_RemoveAccelerator_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->id = in_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerClientProxy::SetKeyEventsThatDontHideCursor(
    std::vector<::ui::mojom::EventMatcherPtr> in_dont_hide_cursor_list) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::SetKeyEventsThatDontHideCursor");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_SetKeyEventsThatDontHideCursor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_SetKeyEventsThatDontHideCursor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->dont_hide_cursor_list)::BaseType::BufferWriter
      dont_hide_cursor_list_writer;
  const mojo::internal::ContainerValidateParams dont_hide_cursor_list_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::EventMatcherDataView>>(
      in_dont_hide_cursor_list, buffer, &dont_hide_cursor_list_writer, &dont_hide_cursor_list_validate_params,
      &serialization_context);
  params->dont_hide_cursor_list.Set(
      dont_hide_cursor_list_writer.is_null() ? nullptr : dont_hide_cursor_list_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dont_hide_cursor_list.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dont_hide_cursor_list in WindowManagerClient.SetKeyEventsThatDontHideCursor request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerClientProxy::SetDisplayRoot(
    const display::Display& in_display, ::ui::mojom::WmViewportMetricsPtr in_viewport_metrics, bool in_is_primary_display, uint64_t in_window_id, const std::vector<display::Display>& in_mirrors, SetDisplayRootCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::SetDisplayRoot");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_SetDisplayRoot_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_SetDisplayRoot_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->display)::BaseType::BufferWriter
      display_writer;
  mojo::internal::Serialize<::display::mojom::DisplayDataView>(
      in_display, buffer, &display_writer, &serialization_context);
  params->display.Set(
      display_writer.is_null() ? nullptr : display_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->display.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null display in WindowManagerClient.SetDisplayRoot request");
  typename decltype(params->viewport_metrics)::BaseType::BufferWriter
      viewport_metrics_writer;
  mojo::internal::Serialize<::ui::mojom::WmViewportMetricsDataView>(
      in_viewport_metrics, buffer, &viewport_metrics_writer, &serialization_context);
  params->viewport_metrics.Set(
      viewport_metrics_writer.is_null() ? nullptr : viewport_metrics_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->viewport_metrics.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null viewport_metrics in WindowManagerClient.SetDisplayRoot request");
  params->is_primary_display = in_is_primary_display;
  params->window_id = in_window_id;
  typename decltype(params->mirrors)::BaseType::BufferWriter
      mirrors_writer;
  const mojo::internal::ContainerValidateParams mirrors_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::display::mojom::DisplayDataView>>(
      in_mirrors, buffer, &mirrors_writer, &mirrors_validate_params,
      &serialization_context);
  params->mirrors.Set(
      mirrors_writer.is_null() ? nullptr : mirrors_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->mirrors.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mirrors in WindowManagerClient.SetDisplayRoot request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowManagerClient_SetDisplayRoot_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowManagerClientProxy::SetDisplayConfiguration(
    const std::vector<display::Display>& in_displays, std::vector<::ui::mojom::WmViewportMetricsPtr> in_viewport_metrics, int64_t in_primary_display_id, int64_t in_internal_display_id, const std::vector<display::Display>& in_mirrors, SetDisplayConfigurationCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::SetDisplayConfiguration");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_SetDisplayConfiguration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_SetDisplayConfiguration_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->displays)::BaseType::BufferWriter
      displays_writer;
  const mojo::internal::ContainerValidateParams displays_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::display::mojom::DisplayDataView>>(
      in_displays, buffer, &displays_writer, &displays_validate_params,
      &serialization_context);
  params->displays.Set(
      displays_writer.is_null() ? nullptr : displays_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->displays.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null displays in WindowManagerClient.SetDisplayConfiguration request");
  typename decltype(params->viewport_metrics)::BaseType::BufferWriter
      viewport_metrics_writer;
  const mojo::internal::ContainerValidateParams viewport_metrics_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::WmViewportMetricsDataView>>(
      in_viewport_metrics, buffer, &viewport_metrics_writer, &viewport_metrics_validate_params,
      &serialization_context);
  params->viewport_metrics.Set(
      viewport_metrics_writer.is_null() ? nullptr : viewport_metrics_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->viewport_metrics.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null viewport_metrics in WindowManagerClient.SetDisplayConfiguration request");
  params->primary_display_id = in_primary_display_id;
  params->internal_display_id = in_internal_display_id;
  typename decltype(params->mirrors)::BaseType::BufferWriter
      mirrors_writer;
  const mojo::internal::ContainerValidateParams mirrors_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::display::mojom::DisplayDataView>>(
      in_mirrors, buffer, &mirrors_writer, &mirrors_validate_params,
      &serialization_context);
  params->mirrors.Set(
      mirrors_writer.is_null() ? nullptr : mirrors_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->mirrors.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mirrors in WindowManagerClient.SetDisplayConfiguration request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowManagerClient_SetDisplayConfiguration_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowManagerClientProxy::SwapDisplayRoots(
    int64_t in_display_id1, int64_t in_display_id2, SwapDisplayRootsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::SwapDisplayRoots");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_SwapDisplayRoots_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_SwapDisplayRoots_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->display_id1 = in_display_id1;
  params->display_id2 = in_display_id2;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowManagerClient_SwapDisplayRoots_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowManagerClientProxy::SetBlockingContainers(
    std::vector<::ui::mojom::BlockingContainersPtr> in_blocking_containers, SetBlockingContainersCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::SetBlockingContainers");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_SetBlockingContainers_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_SetBlockingContainers_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->blocking_containers)::BaseType::BufferWriter
      blocking_containers_writer;
  const mojo::internal::ContainerValidateParams blocking_containers_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::BlockingContainersDataView>>(
      in_blocking_containers, buffer, &blocking_containers_writer, &blocking_containers_validate_params,
      &serialization_context);
  params->blocking_containers.Set(
      blocking_containers_writer.is_null() ? nullptr : blocking_containers_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->blocking_containers.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null blocking_containers in WindowManagerClient.SetBlockingContainers request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowManagerClient_SetBlockingContainers_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowManagerClientProxy::WmResponse(
    uint32_t in_change_id, bool in_response) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::WmResponse");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_WmResponse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_WmResponse_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->response = in_response;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerClientProxy::WmSetBoundsResponse(
    uint32_t in_change_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::WmSetBoundsResponse");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_WmSetBoundsResponse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_WmSetBoundsResponse_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerClientProxy::WmRequestClose(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::WmRequestClose");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_WmRequestClose_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_WmRequestClose_Params_Data::BufferWriter
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

void WindowManagerClientProxy::WmSetFrameDecorationValues(
    ::ui::mojom::FrameDecorationValuesPtr in_values) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::WmSetFrameDecorationValues");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_WmSetFrameDecorationValues_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_WmSetFrameDecorationValues_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->values)::BaseType::BufferWriter
      values_writer;
  mojo::internal::Serialize<::ui::mojom::FrameDecorationValuesDataView>(
      in_values, buffer, &values_writer, &serialization_context);
  params->values.Set(
      values_writer.is_null() ? nullptr : values_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->values.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null values in WindowManagerClient.WmSetFrameDecorationValues request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerClientProxy::WmSetNonClientCursor(
    uint64_t in_window_id, ui::CursorData in_cursor) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::WmSetNonClientCursor");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_WmSetNonClientCursor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_WmSetNonClientCursor_Params_Data::BufferWriter
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
      "null cursor in WindowManagerClient.WmSetNonClientCursor request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerClientProxy::WmLockCursor(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::WmLockCursor");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_WmLockCursor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_WmLockCursor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerClientProxy::WmUnlockCursor(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::WmUnlockCursor");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_WmUnlockCursor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_WmUnlockCursor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerClientProxy::WmSetCursorVisible(
    bool in_visible) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::WmSetCursorVisible");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_WmSetCursorVisible_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_WmSetCursorVisible_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->visible = in_visible;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerClientProxy::WmSetCursorSize(
    ui::CursorSize in_cursor_size) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::WmSetCursorSize");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_WmSetCursorSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_WmSetCursorSize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::CursorSize>(
      in_cursor_size, &params->cursor_size);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerClientProxy::WmSetGlobalOverrideCursor(
    base::Optional<ui::CursorData> in_cursor) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::WmSetGlobalOverrideCursor");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_WmSetGlobalOverrideCursor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_WmSetGlobalOverrideCursor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cursor)::BaseType::BufferWriter
      cursor_writer;
  mojo::internal::Serialize<::ui::mojom::CursorDataDataView>(
      in_cursor, buffer, &cursor_writer, &serialization_context);
  params->cursor.Set(
      cursor_writer.is_null() ? nullptr : cursor_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerClientProxy::WmMoveCursorToDisplayLocation(
    const gfx::Point& in_display_pixels, int64_t in_display_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::WmMoveCursorToDisplayLocation");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_WmMoveCursorToDisplayLocation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_WmMoveCursorToDisplayLocation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->display_pixels)::BaseType::BufferWriter
      display_pixels_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_display_pixels, buffer, &display_pixels_writer, &serialization_context);
  params->display_pixels.Set(
      display_pixels_writer.is_null() ? nullptr : display_pixels_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->display_pixels.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null display_pixels in WindowManagerClient.WmMoveCursorToDisplayLocation request");
  params->display_id = in_display_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerClientProxy::WmConfineCursorToBounds(
    const gfx::Rect& in_bounds_in_pixels, int64_t in_display_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::WmConfineCursorToBounds");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_WmConfineCursorToBounds_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_WmConfineCursorToBounds_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->bounds_in_pixels)::BaseType::BufferWriter
      bounds_in_pixels_writer;
  mojo::internal::Serialize<::gfx::mojom::RectDataView>(
      in_bounds_in_pixels, buffer, &bounds_in_pixels_writer, &serialization_context);
  params->bounds_in_pixels.Set(
      bounds_in_pixels_writer.is_null() ? nullptr : bounds_in_pixels_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bounds_in_pixels.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bounds_in_pixels in WindowManagerClient.WmConfineCursorToBounds request");
  params->display_id = in_display_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerClientProxy::WmSetCursorTouchVisible(
    bool in_enabled) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::WmSetCursorTouchVisible");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_WmSetCursorTouchVisible_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_WmSetCursorTouchVisible_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->enabled = in_enabled;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowManagerClientProxy::OnWmCreatedTopLevelWindow(
    uint32_t in_change_id, uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::OnWmCreatedTopLevelWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_OnWmCreatedTopLevelWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data::BufferWriter
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

void WindowManagerClientProxy::OnAcceleratorAck(
    uint32_t in_ack_id, ::ui::mojom::EventResult in_event_result, const base::flat_map<std::string, std::vector<uint8_t>>& in_properties) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "ui::mojom::WindowManagerClient::OnAcceleratorAck");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_OnAcceleratorAck_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_OnAcceleratorAck_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->ack_id = in_ack_id;
  mojo::internal::Serialize<::ui::mojom::EventResult>(
      in_event_result, &params->event_result);
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
      "null properties in WindowManagerClient.OnAcceleratorAck request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class WindowManagerClient_AddAccelerators_ProxyToResponder {
 public:
  static WindowManagerClient::AddAcceleratorsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowManagerClient_AddAccelerators_ProxyToResponder> proxy(
        new WindowManagerClient_AddAccelerators_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowManagerClient_AddAccelerators_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowManagerClient_AddAccelerators_ProxyToResponder() {
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
  WindowManagerClient_AddAccelerators_ProxyToResponder(
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
        << "WindowManagerClient::AddAcceleratorsCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(WindowManagerClient_AddAccelerators_ProxyToResponder);
};

bool WindowManagerClient_AddAccelerators_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::WindowManagerClient::AddAcceleratorsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowManagerClient_AddAccelerators_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowManagerClient_AddAccelerators_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  WindowManagerClient_AddAccelerators_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WindowManagerClient::AddAccelerators response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void WindowManagerClient_AddAccelerators_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_AddAccelerators_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_AddAccelerators_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::AddAcceleratorsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowManagerClient_SetDisplayRoot_ProxyToResponder {
 public:
  static WindowManagerClient::SetDisplayRootCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowManagerClient_SetDisplayRoot_ProxyToResponder> proxy(
        new WindowManagerClient_SetDisplayRoot_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowManagerClient_SetDisplayRoot_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowManagerClient_SetDisplayRoot_ProxyToResponder() {
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
  WindowManagerClient_SetDisplayRoot_ProxyToResponder(
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
        << "WindowManagerClient::SetDisplayRootCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(WindowManagerClient_SetDisplayRoot_ProxyToResponder);
};

bool WindowManagerClient_SetDisplayRoot_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::WindowManagerClient::SetDisplayRootCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowManagerClient_SetDisplayRoot_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowManagerClient_SetDisplayRoot_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  WindowManagerClient_SetDisplayRoot_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WindowManagerClient::SetDisplayRoot response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void WindowManagerClient_SetDisplayRoot_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_SetDisplayRoot_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_SetDisplayRoot_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::SetDisplayRootCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowManagerClient_SetDisplayConfiguration_ProxyToResponder {
 public:
  static WindowManagerClient::SetDisplayConfigurationCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowManagerClient_SetDisplayConfiguration_ProxyToResponder> proxy(
        new WindowManagerClient_SetDisplayConfiguration_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowManagerClient_SetDisplayConfiguration_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowManagerClient_SetDisplayConfiguration_ProxyToResponder() {
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
  WindowManagerClient_SetDisplayConfiguration_ProxyToResponder(
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
        << "WindowManagerClient::SetDisplayConfigurationCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(WindowManagerClient_SetDisplayConfiguration_ProxyToResponder);
};

bool WindowManagerClient_SetDisplayConfiguration_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::WindowManagerClient::SetDisplayConfigurationCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowManagerClient_SetDisplayConfiguration_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowManagerClient_SetDisplayConfiguration_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  WindowManagerClient_SetDisplayConfiguration_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WindowManagerClient::SetDisplayConfiguration response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void WindowManagerClient_SetDisplayConfiguration_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_SetDisplayConfiguration_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_SetDisplayConfiguration_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::SetDisplayConfigurationCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowManagerClient_SwapDisplayRoots_ProxyToResponder {
 public:
  static WindowManagerClient::SwapDisplayRootsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowManagerClient_SwapDisplayRoots_ProxyToResponder> proxy(
        new WindowManagerClient_SwapDisplayRoots_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowManagerClient_SwapDisplayRoots_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowManagerClient_SwapDisplayRoots_ProxyToResponder() {
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
  WindowManagerClient_SwapDisplayRoots_ProxyToResponder(
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
        << "WindowManagerClient::SwapDisplayRootsCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(WindowManagerClient_SwapDisplayRoots_ProxyToResponder);
};

bool WindowManagerClient_SwapDisplayRoots_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::WindowManagerClient::SwapDisplayRootsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowManagerClient_SwapDisplayRoots_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowManagerClient_SwapDisplayRoots_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  WindowManagerClient_SwapDisplayRoots_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WindowManagerClient::SwapDisplayRoots response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void WindowManagerClient_SwapDisplayRoots_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_SwapDisplayRoots_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_SwapDisplayRoots_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::SwapDisplayRootsCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowManagerClient_SetBlockingContainers_ProxyToResponder {
 public:
  static WindowManagerClient::SetBlockingContainersCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowManagerClient_SetBlockingContainers_ProxyToResponder> proxy(
        new WindowManagerClient_SetBlockingContainers_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowManagerClient_SetBlockingContainers_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowManagerClient_SetBlockingContainers_ProxyToResponder() {
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
  WindowManagerClient_SetBlockingContainers_ProxyToResponder(
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
        << "WindowManagerClient::SetBlockingContainersCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(WindowManagerClient_SetBlockingContainers_ProxyToResponder);
};

bool WindowManagerClient_SetBlockingContainers_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "ui::mojom::WindowManagerClient::SetBlockingContainersCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowManagerClient_SetBlockingContainers_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowManagerClient_SetBlockingContainers_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  WindowManagerClient_SetBlockingContainers_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WindowManagerClient::SetBlockingContainers response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void WindowManagerClient_SetBlockingContainers_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowManagerClient_SetBlockingContainers_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::WindowManagerClient_SetBlockingContainers_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::SetBlockingContainersCallback",
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
bool WindowManagerClientStubDispatch::Accept(
    WindowManagerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWindowManagerClient_AddActivationParent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::AddActivationParent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_AddActivationParent_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_AddActivationParent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowManagerClient_AddActivationParent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::AddActivationParent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddActivationParent(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowManagerClient_RemoveActivationParent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::RemoveActivationParent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_RemoveActivationParent_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_RemoveActivationParent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowManagerClient_RemoveActivationParent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::RemoveActivationParent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoveActivationParent(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowManagerClient_SetExtendedHitRegionForChildren_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::SetExtendedHitRegionForChildren",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_SetExtendedHitRegionForChildren_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_SetExtendedHitRegionForChildren_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      gfx::Insets p_mouse_insets{};
      gfx::Insets p_touch_insets{};
      WindowManagerClient_SetExtendedHitRegionForChildren_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadMouseInsets(&p_mouse_insets))
        success = false;
      if (!input_data_view.ReadTouchInsets(&p_touch_insets))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::SetExtendedHitRegionForChildren deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetExtendedHitRegionForChildren(
std::move(p_window_id), 
std::move(p_mouse_insets), 
std::move(p_touch_insets));
      return true;
    }
    case internal::kWindowManagerClient_AddAccelerators_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::AddAccelerators",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_RemoveAccelerator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::RemoveAccelerator",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_RemoveAccelerator_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_RemoveAccelerator_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_id{};
      WindowManagerClient_RemoveAccelerator_ParamsDataView input_data_view(params, &serialization_context);
      
      p_id = input_data_view.id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::RemoveAccelerator deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoveAccelerator(
std::move(p_id));
      return true;
    }
    case internal::kWindowManagerClient_SetKeyEventsThatDontHideCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::SetKeyEventsThatDontHideCursor",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_SetKeyEventsThatDontHideCursor_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_SetKeyEventsThatDontHideCursor_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<::ui::mojom::EventMatcherPtr> p_dont_hide_cursor_list{};
      WindowManagerClient_SetKeyEventsThatDontHideCursor_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDontHideCursorList(&p_dont_hide_cursor_list))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::SetKeyEventsThatDontHideCursor deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetKeyEventsThatDontHideCursor(
std::move(p_dont_hide_cursor_list));
      return true;
    }
    case internal::kWindowManagerClient_SetDisplayRoot_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::SetDisplayRoot",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_SetDisplayConfiguration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::SetDisplayConfiguration",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_SwapDisplayRoots_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::SwapDisplayRoots",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_SetBlockingContainers_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::SetBlockingContainers",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_WmResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmResponse",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_WmResponse_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_WmResponse_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      bool p_response{};
      WindowManagerClient_WmResponse_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_response = input_data_view.response();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::WmResponse deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmResponse(
std::move(p_change_id), 
std::move(p_response));
      return true;
    }
    case internal::kWindowManagerClient_WmSetBoundsResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmSetBoundsResponse",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_WmSetBoundsResponse_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_WmSetBoundsResponse_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      WindowManagerClient_WmSetBoundsResponse_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::WmSetBoundsResponse deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmSetBoundsResponse(
std::move(p_change_id));
      return true;
    }
    case internal::kWindowManagerClient_WmRequestClose_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmRequestClose",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_WmRequestClose_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_WmRequestClose_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowManagerClient_WmRequestClose_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::WmRequestClose deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmRequestClose(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowManagerClient_WmSetFrameDecorationValues_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmSetFrameDecorationValues",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_WmSetFrameDecorationValues_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_WmSetFrameDecorationValues_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::ui::mojom::FrameDecorationValuesPtr p_values{};
      WindowManagerClient_WmSetFrameDecorationValues_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValues(&p_values))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::WmSetFrameDecorationValues deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmSetFrameDecorationValues(
std::move(p_values));
      return true;
    }
    case internal::kWindowManagerClient_WmSetNonClientCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmSetNonClientCursor",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_WmSetNonClientCursor_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_WmSetNonClientCursor_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      ui::CursorData p_cursor{};
      WindowManagerClient_WmSetNonClientCursor_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadCursor(&p_cursor))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::WmSetNonClientCursor deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmSetNonClientCursor(
std::move(p_window_id), 
std::move(p_cursor));
      return true;
    }
    case internal::kWindowManagerClient_WmLockCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmLockCursor",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_WmLockCursor_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_WmLockCursor_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WindowManagerClient_WmLockCursor_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::WmLockCursor deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmLockCursor();
      return true;
    }
    case internal::kWindowManagerClient_WmUnlockCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmUnlockCursor",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_WmUnlockCursor_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_WmUnlockCursor_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WindowManagerClient_WmUnlockCursor_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::WmUnlockCursor deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmUnlockCursor();
      return true;
    }
    case internal::kWindowManagerClient_WmSetCursorVisible_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmSetCursorVisible",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_WmSetCursorVisible_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_WmSetCursorVisible_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_visible{};
      WindowManagerClient_WmSetCursorVisible_ParamsDataView input_data_view(params, &serialization_context);
      
      p_visible = input_data_view.visible();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::WmSetCursorVisible deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmSetCursorVisible(
std::move(p_visible));
      return true;
    }
    case internal::kWindowManagerClient_WmSetCursorSize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmSetCursorSize",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_WmSetCursorSize_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_WmSetCursorSize_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ui::CursorSize p_cursor_size{};
      WindowManagerClient_WmSetCursorSize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCursorSize(&p_cursor_size))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::WmSetCursorSize deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmSetCursorSize(
std::move(p_cursor_size));
      return true;
    }
    case internal::kWindowManagerClient_WmSetGlobalOverrideCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmSetGlobalOverrideCursor",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_WmSetGlobalOverrideCursor_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_WmSetGlobalOverrideCursor_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<ui::CursorData> p_cursor{};
      WindowManagerClient_WmSetGlobalOverrideCursor_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCursor(&p_cursor))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::WmSetGlobalOverrideCursor deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmSetGlobalOverrideCursor(
std::move(p_cursor));
      return true;
    }
    case internal::kWindowManagerClient_WmMoveCursorToDisplayLocation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmMoveCursorToDisplayLocation",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_WmMoveCursorToDisplayLocation_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_WmMoveCursorToDisplayLocation_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Point p_display_pixels{};
      int64_t p_display_id{};
      WindowManagerClient_WmMoveCursorToDisplayLocation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDisplayPixels(&p_display_pixels))
        success = false;
      p_display_id = input_data_view.display_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::WmMoveCursorToDisplayLocation deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmMoveCursorToDisplayLocation(
std::move(p_display_pixels), 
std::move(p_display_id));
      return true;
    }
    case internal::kWindowManagerClient_WmConfineCursorToBounds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmConfineCursorToBounds",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_WmConfineCursorToBounds_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_WmConfineCursorToBounds_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Rect p_bounds_in_pixels{};
      int64_t p_display_id{};
      WindowManagerClient_WmConfineCursorToBounds_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBoundsInPixels(&p_bounds_in_pixels))
        success = false;
      p_display_id = input_data_view.display_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::WmConfineCursorToBounds deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmConfineCursorToBounds(
std::move(p_bounds_in_pixels), 
std::move(p_display_id));
      return true;
    }
    case internal::kWindowManagerClient_WmSetCursorTouchVisible_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmSetCursorTouchVisible",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_WmSetCursorTouchVisible_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_WmSetCursorTouchVisible_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_enabled{};
      WindowManagerClient_WmSetCursorTouchVisible_ParamsDataView input_data_view(params, &serialization_context);
      
      p_enabled = input_data_view.enabled();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::WmSetCursorTouchVisible deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->WmSetCursorTouchVisible(
std::move(p_enabled));
      return true;
    }
    case internal::kWindowManagerClient_OnWmCreatedTopLevelWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::OnWmCreatedTopLevelWindow",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      WindowManagerClient_OnWmCreatedTopLevelWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::OnWmCreatedTopLevelWindow deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnWmCreatedTopLevelWindow(
std::move(p_change_id), 
std::move(p_window_id));
      return true;
    }
    case internal::kWindowManagerClient_OnAcceleratorAck_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::OnAcceleratorAck",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowManagerClient_OnAcceleratorAck_Params_Data* params =
          reinterpret_cast<internal::WindowManagerClient_OnAcceleratorAck_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_ack_id{};
      ::ui::mojom::EventResult p_event_result{};
      base::flat_map<std::string, std::vector<uint8_t>> p_properties{};
      WindowManagerClient_OnAcceleratorAck_ParamsDataView input_data_view(params, &serialization_context);
      
      p_ack_id = input_data_view.ack_id();
      if (!input_data_view.ReadEventResult(&p_event_result))
        success = false;
      if (!input_data_view.ReadProperties(&p_properties))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::OnAcceleratorAck deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnAcceleratorAck(
std::move(p_ack_id), 
std::move(p_event_result), 
std::move(p_properties));
      return true;
    }
  }
  return false;
}

// static
bool WindowManagerClientStubDispatch::AcceptWithResponder(
    WindowManagerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWindowManagerClient_AddActivationParent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::AddActivationParent",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_RemoveActivationParent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::RemoveActivationParent",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_SetExtendedHitRegionForChildren_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::SetExtendedHitRegionForChildren",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_AddAccelerators_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::AddAccelerators",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowManagerClient_AddAccelerators_Params_Data* params =
          reinterpret_cast<
              internal::WindowManagerClient_AddAccelerators_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<WmAcceleratorPtr> p_accelerators{};
      WindowManagerClient_AddAccelerators_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAccelerators(&p_accelerators))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::AddAccelerators deserializer");
        return false;
      }
      WindowManagerClient::AddAcceleratorsCallback callback =
          WindowManagerClient_AddAccelerators_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddAccelerators(
std::move(p_accelerators), std::move(callback));
      return true;
    }
    case internal::kWindowManagerClient_RemoveAccelerator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::RemoveAccelerator",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_SetKeyEventsThatDontHideCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::SetKeyEventsThatDontHideCursor",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_SetDisplayRoot_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::SetDisplayRoot",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowManagerClient_SetDisplayRoot_Params_Data* params =
          reinterpret_cast<
              internal::WindowManagerClient_SetDisplayRoot_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      display::Display p_display{};
      ::ui::mojom::WmViewportMetricsPtr p_viewport_metrics{};
      bool p_is_primary_display{};
      uint64_t p_window_id{};
      std::vector<display::Display> p_mirrors{};
      WindowManagerClient_SetDisplayRoot_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDisplay(&p_display))
        success = false;
      if (!input_data_view.ReadViewportMetrics(&p_viewport_metrics))
        success = false;
      p_is_primary_display = input_data_view.is_primary_display();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadMirrors(&p_mirrors))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::SetDisplayRoot deserializer");
        return false;
      }
      WindowManagerClient::SetDisplayRootCallback callback =
          WindowManagerClient_SetDisplayRoot_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetDisplayRoot(
std::move(p_display), 
std::move(p_viewport_metrics), 
std::move(p_is_primary_display), 
std::move(p_window_id), 
std::move(p_mirrors), std::move(callback));
      return true;
    }
    case internal::kWindowManagerClient_SetDisplayConfiguration_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::SetDisplayConfiguration",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowManagerClient_SetDisplayConfiguration_Params_Data* params =
          reinterpret_cast<
              internal::WindowManagerClient_SetDisplayConfiguration_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<display::Display> p_displays{};
      std::vector<::ui::mojom::WmViewportMetricsPtr> p_viewport_metrics{};
      int64_t p_primary_display_id{};
      int64_t p_internal_display_id{};
      std::vector<display::Display> p_mirrors{};
      WindowManagerClient_SetDisplayConfiguration_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDisplays(&p_displays))
        success = false;
      if (!input_data_view.ReadViewportMetrics(&p_viewport_metrics))
        success = false;
      p_primary_display_id = input_data_view.primary_display_id();
      p_internal_display_id = input_data_view.internal_display_id();
      if (!input_data_view.ReadMirrors(&p_mirrors))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::SetDisplayConfiguration deserializer");
        return false;
      }
      WindowManagerClient::SetDisplayConfigurationCallback callback =
          WindowManagerClient_SetDisplayConfiguration_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetDisplayConfiguration(
std::move(p_displays), 
std::move(p_viewport_metrics), 
std::move(p_primary_display_id), 
std::move(p_internal_display_id), 
std::move(p_mirrors), std::move(callback));
      return true;
    }
    case internal::kWindowManagerClient_SwapDisplayRoots_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::SwapDisplayRoots",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowManagerClient_SwapDisplayRoots_Params_Data* params =
          reinterpret_cast<
              internal::WindowManagerClient_SwapDisplayRoots_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_display_id1{};
      int64_t p_display_id2{};
      WindowManagerClient_SwapDisplayRoots_ParamsDataView input_data_view(params, &serialization_context);
      
      p_display_id1 = input_data_view.display_id1();
      p_display_id2 = input_data_view.display_id2();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::SwapDisplayRoots deserializer");
        return false;
      }
      WindowManagerClient::SwapDisplayRootsCallback callback =
          WindowManagerClient_SwapDisplayRoots_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SwapDisplayRoots(
std::move(p_display_id1), 
std::move(p_display_id2), std::move(callback));
      return true;
    }
    case internal::kWindowManagerClient_SetBlockingContainers_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::SetBlockingContainers",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowManagerClient_SetBlockingContainers_Params_Data* params =
          reinterpret_cast<
              internal::WindowManagerClient_SetBlockingContainers_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<::ui::mojom::BlockingContainersPtr> p_blocking_containers{};
      WindowManagerClient_SetBlockingContainers_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBlockingContainers(&p_blocking_containers))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WindowManagerClient::SetBlockingContainers deserializer");
        return false;
      }
      WindowManagerClient::SetBlockingContainersCallback callback =
          WindowManagerClient_SetBlockingContainers_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetBlockingContainers(
std::move(p_blocking_containers), std::move(callback));
      return true;
    }
    case internal::kWindowManagerClient_WmResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmResponse",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_WmSetBoundsResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmSetBoundsResponse",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_WmRequestClose_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmRequestClose",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_WmSetFrameDecorationValues_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmSetFrameDecorationValues",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_WmSetNonClientCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmSetNonClientCursor",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_WmLockCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmLockCursor",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_WmUnlockCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmUnlockCursor",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_WmSetCursorVisible_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmSetCursorVisible",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_WmSetCursorSize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmSetCursorSize",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_WmSetGlobalOverrideCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmSetGlobalOverrideCursor",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_WmMoveCursorToDisplayLocation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmMoveCursorToDisplayLocation",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_WmConfineCursorToBounds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmConfineCursorToBounds",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_WmSetCursorTouchVisible_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::WmSetCursorTouchVisible",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_OnWmCreatedTopLevelWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::OnWmCreatedTopLevelWindow",
               "message", message->name());
#endif
      break;
    }
    case internal::kWindowManagerClient_OnAcceleratorAck_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)ui::mojom::WindowManagerClient::OnAcceleratorAck",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool WindowManagerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowManagerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kWindowManagerClient_AddActivationParent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_AddActivationParent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_RemoveActivationParent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_RemoveActivationParent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_SetExtendedHitRegionForChildren_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_SetExtendedHitRegionForChildren_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_AddAccelerators_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_AddAccelerators_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_RemoveAccelerator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_RemoveAccelerator_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_SetKeyEventsThatDontHideCursor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_SetKeyEventsThatDontHideCursor_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_SetDisplayRoot_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_SetDisplayRoot_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_SetDisplayConfiguration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_SetDisplayConfiguration_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_SwapDisplayRoots_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_SwapDisplayRoots_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_SetBlockingContainers_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_SetBlockingContainers_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_WmResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_WmResponse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_WmSetBoundsResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_WmSetBoundsResponse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_WmRequestClose_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_WmRequestClose_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_WmSetFrameDecorationValues_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_WmSetFrameDecorationValues_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_WmSetNonClientCursor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_WmSetNonClientCursor_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_WmLockCursor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_WmLockCursor_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_WmUnlockCursor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_WmUnlockCursor_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_WmSetCursorVisible_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_WmSetCursorVisible_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_WmSetCursorSize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_WmSetCursorSize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_WmSetGlobalOverrideCursor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_WmSetGlobalOverrideCursor_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_WmMoveCursorToDisplayLocation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_WmMoveCursorToDisplayLocation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_WmConfineCursorToBounds_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_WmConfineCursorToBounds_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_WmSetCursorTouchVisible_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_WmSetCursorTouchVisible_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_OnWmCreatedTopLevelWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_OnAcceleratorAck_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_OnAcceleratorAck_Params_Data>(
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

bool WindowManagerClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowManagerClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kWindowManagerClient_AddAccelerators_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_AddAccelerators_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_SetDisplayRoot_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_SetDisplayRoot_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_SetDisplayConfiguration_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_SetDisplayConfiguration_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_SwapDisplayRoots_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_SwapDisplayRoots_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowManagerClient_SetBlockingContainers_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowManagerClient_SetBlockingContainers_ResponseParams_Data>(
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
void WindowManagerClientInterceptorForTesting::AddActivationParent(uint64_t window_id) {
  GetForwardingInterface()->AddActivationParent(std::move(window_id));
}
void WindowManagerClientInterceptorForTesting::RemoveActivationParent(uint64_t window_id) {
  GetForwardingInterface()->RemoveActivationParent(std::move(window_id));
}
void WindowManagerClientInterceptorForTesting::SetExtendedHitRegionForChildren(uint64_t window_id, const gfx::Insets& mouse_insets, const gfx::Insets& touch_insets) {
  GetForwardingInterface()->SetExtendedHitRegionForChildren(std::move(window_id), std::move(mouse_insets), std::move(touch_insets));
}
void WindowManagerClientInterceptorForTesting::AddAccelerators(std::vector<WmAcceleratorPtr> accelerators, AddAcceleratorsCallback callback) {
  GetForwardingInterface()->AddAccelerators(std::move(accelerators), std::move(callback));
}
void WindowManagerClientInterceptorForTesting::RemoveAccelerator(uint32_t id) {
  GetForwardingInterface()->RemoveAccelerator(std::move(id));
}
void WindowManagerClientInterceptorForTesting::SetKeyEventsThatDontHideCursor(std::vector<::ui::mojom::EventMatcherPtr> dont_hide_cursor_list) {
  GetForwardingInterface()->SetKeyEventsThatDontHideCursor(std::move(dont_hide_cursor_list));
}
void WindowManagerClientInterceptorForTesting::SetDisplayRoot(const display::Display& display, ::ui::mojom::WmViewportMetricsPtr viewport_metrics, bool is_primary_display, uint64_t window_id, const std::vector<display::Display>& mirrors, SetDisplayRootCallback callback) {
  GetForwardingInterface()->SetDisplayRoot(std::move(display), std::move(viewport_metrics), std::move(is_primary_display), std::move(window_id), std::move(mirrors), std::move(callback));
}
void WindowManagerClientInterceptorForTesting::SetDisplayConfiguration(const std::vector<display::Display>& displays, std::vector<::ui::mojom::WmViewportMetricsPtr> viewport_metrics, int64_t primary_display_id, int64_t internal_display_id, const std::vector<display::Display>& mirrors, SetDisplayConfigurationCallback callback) {
  GetForwardingInterface()->SetDisplayConfiguration(std::move(displays), std::move(viewport_metrics), std::move(primary_display_id), std::move(internal_display_id), std::move(mirrors), std::move(callback));
}
void WindowManagerClientInterceptorForTesting::SwapDisplayRoots(int64_t display_id1, int64_t display_id2, SwapDisplayRootsCallback callback) {
  GetForwardingInterface()->SwapDisplayRoots(std::move(display_id1), std::move(display_id2), std::move(callback));
}
void WindowManagerClientInterceptorForTesting::SetBlockingContainers(std::vector<::ui::mojom::BlockingContainersPtr> blocking_containers, SetBlockingContainersCallback callback) {
  GetForwardingInterface()->SetBlockingContainers(std::move(blocking_containers), std::move(callback));
}
void WindowManagerClientInterceptorForTesting::WmResponse(uint32_t change_id, bool response) {
  GetForwardingInterface()->WmResponse(std::move(change_id), std::move(response));
}
void WindowManagerClientInterceptorForTesting::WmSetBoundsResponse(uint32_t change_id) {
  GetForwardingInterface()->WmSetBoundsResponse(std::move(change_id));
}
void WindowManagerClientInterceptorForTesting::WmRequestClose(uint64_t window_id) {
  GetForwardingInterface()->WmRequestClose(std::move(window_id));
}
void WindowManagerClientInterceptorForTesting::WmSetFrameDecorationValues(::ui::mojom::FrameDecorationValuesPtr values) {
  GetForwardingInterface()->WmSetFrameDecorationValues(std::move(values));
}
void WindowManagerClientInterceptorForTesting::WmSetNonClientCursor(uint64_t window_id, ui::CursorData cursor) {
  GetForwardingInterface()->WmSetNonClientCursor(std::move(window_id), std::move(cursor));
}
void WindowManagerClientInterceptorForTesting::WmLockCursor() {
  GetForwardingInterface()->WmLockCursor();
}
void WindowManagerClientInterceptorForTesting::WmUnlockCursor() {
  GetForwardingInterface()->WmUnlockCursor();
}
void WindowManagerClientInterceptorForTesting::WmSetCursorVisible(bool visible) {
  GetForwardingInterface()->WmSetCursorVisible(std::move(visible));
}
void WindowManagerClientInterceptorForTesting::WmSetCursorSize(ui::CursorSize cursor_size) {
  GetForwardingInterface()->WmSetCursorSize(std::move(cursor_size));
}
void WindowManagerClientInterceptorForTesting::WmSetGlobalOverrideCursor(base::Optional<ui::CursorData> cursor) {
  GetForwardingInterface()->WmSetGlobalOverrideCursor(std::move(cursor));
}
void WindowManagerClientInterceptorForTesting::WmMoveCursorToDisplayLocation(const gfx::Point& display_pixels, int64_t display_id) {
  GetForwardingInterface()->WmMoveCursorToDisplayLocation(std::move(display_pixels), std::move(display_id));
}
void WindowManagerClientInterceptorForTesting::WmConfineCursorToBounds(const gfx::Rect& bounds_in_pixels, int64_t display_id) {
  GetForwardingInterface()->WmConfineCursorToBounds(std::move(bounds_in_pixels), std::move(display_id));
}
void WindowManagerClientInterceptorForTesting::WmSetCursorTouchVisible(bool enabled) {
  GetForwardingInterface()->WmSetCursorTouchVisible(std::move(enabled));
}
void WindowManagerClientInterceptorForTesting::OnWmCreatedTopLevelWindow(uint32_t change_id, uint64_t window_id) {
  GetForwardingInterface()->OnWmCreatedTopLevelWindow(std::move(change_id), std::move(window_id));
}
void WindowManagerClientInterceptorForTesting::OnAcceleratorAck(uint32_t ack_id, ::ui::mojom::EventResult event_result, const base::flat_map<std::string, std::vector<uint8_t>>& properties) {
  GetForwardingInterface()->OnAcceleratorAck(std::move(ack_id), std::move(event_result), std::move(properties));
}
WindowManagerClientAsyncWaiter::WindowManagerClientAsyncWaiter(
    WindowManagerClient* proxy) : proxy_(proxy) {}

WindowManagerClientAsyncWaiter::~WindowManagerClientAsyncWaiter() = default;

void WindowManagerClientAsyncWaiter::AddAccelerators(
    std::vector<WmAcceleratorPtr> accelerators, bool* out_success) {
  base::RunLoop loop;
  proxy_->AddAccelerators(std::move(accelerators),
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
void WindowManagerClientAsyncWaiter::SetDisplayRoot(
    const display::Display& display, ::ui::mojom::WmViewportMetricsPtr viewport_metrics, bool is_primary_display, uint64_t window_id, const std::vector<display::Display>& mirrors, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetDisplayRoot(std::move(display),std::move(viewport_metrics),std::move(is_primary_display),std::move(window_id),std::move(mirrors),
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
void WindowManagerClientAsyncWaiter::SetDisplayConfiguration(
    const std::vector<display::Display>& displays, std::vector<::ui::mojom::WmViewportMetricsPtr> viewport_metrics, int64_t primary_display_id, int64_t internal_display_id, const std::vector<display::Display>& mirrors, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetDisplayConfiguration(std::move(displays),std::move(viewport_metrics),std::move(primary_display_id),std::move(internal_display_id),std::move(mirrors),
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
void WindowManagerClientAsyncWaiter::SwapDisplayRoots(
    int64_t display_id1, int64_t display_id2, bool* out_success) {
  base::RunLoop loop;
  proxy_->SwapDisplayRoots(std::move(display_id1),std::move(display_id2),
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
void WindowManagerClientAsyncWaiter::SetBlockingContainers(
    std::vector<::ui::mojom::BlockingContainersPtr> blocking_containers, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetBlockingContainers(std::move(blocking_containers),
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

}  // namespace mojom
}  // namespace ui

namespace mojo {


// static
bool StructTraits<::ui::mojom::WmAccelerator::DataView, ::ui::mojom::WmAcceleratorPtr>::Read(
    ::ui::mojom::WmAccelerator::DataView input,
    ::ui::mojom::WmAcceleratorPtr* output) {
  bool success = true;
  ::ui::mojom::WmAcceleratorPtr result(::ui::mojom::WmAccelerator::New());
  
      result->id = input.id();
      if (!input.ReadEventMatcher(&result->event_matcher))
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