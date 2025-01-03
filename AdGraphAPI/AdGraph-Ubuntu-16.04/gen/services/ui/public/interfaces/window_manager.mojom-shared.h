// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "services/ui/public/interfaces/window_manager.mojom-shared-internal.h"
#include "gpu/ipc/common/surface_handle.mojom-shared.h"
#include "services/ui/public/interfaces/cursor/cursor.mojom-shared.h"
#include "services/ui/public/interfaces/event_matcher.mojom-shared.h"
#include "services/ui/public/interfaces/window_manager_constants.mojom-shared.h"
#include "services/ui/public/interfaces/window_tree_constants.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-shared.h"
#include "skia/public/interfaces/bitmap.mojom-shared.h"
#include "ui/base/mojo/ui_base_types.mojom-shared.h"
#include "ui/display/mojo/display.mojom-shared.h"
#include "ui/events/mojo/event.mojom-shared.h"
#include "ui/events/mojo/event_constants.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/display/mojo/display.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {
class WmAcceleratorDataView;



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ui::mojom::WmAcceleratorDataView> {
  using Data = ::ui::mojom::internal::WmAccelerator_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {
// Interface base classes. They are used for type safety check.
class WindowManagerInterfaceBase {};

using WindowManagerPtrDataView =
    mojo::InterfacePtrDataView<WindowManagerInterfaceBase>;
using WindowManagerRequestDataView =
    mojo::InterfaceRequestDataView<WindowManagerInterfaceBase>;
using WindowManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WindowManagerInterfaceBase>;
using WindowManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WindowManagerInterfaceBase>;
class WindowManagerClientInterfaceBase {};

using WindowManagerClientPtrDataView =
    mojo::InterfacePtrDataView<WindowManagerClientInterfaceBase>;
using WindowManagerClientRequestDataView =
    mojo::InterfaceRequestDataView<WindowManagerClientInterfaceBase>;
using WindowManagerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WindowManagerClientInterfaceBase>;
using WindowManagerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WindowManagerClientInterfaceBase>;
class WmAcceleratorDataView {
 public:
  WmAcceleratorDataView() {}

  WmAcceleratorDataView(
      internal::WmAccelerator_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
  inline void GetEventMatcherDataView(
      ::ui::mojom::EventMatcherDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEventMatcher(UserType* output) {
    auto* pointer = data_->event_matcher.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventMatcherDataView>(
        pointer, output, context_);
  }
 private:
  internal::WmAccelerator_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManager_OnConnect_ParamsDataView {
 public:
  WindowManager_OnConnect_ParamsDataView() {}

  WindowManager_OnConnect_ParamsDataView(
      internal::WindowManager_OnConnect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WindowManager_OnConnect_Params_Data* data_ = nullptr;
};

class WindowManager_WmOnAcceleratedWidgetForDisplay_ParamsDataView {
 public:
  WindowManager_WmOnAcceleratedWidgetForDisplay_ParamsDataView() {}

  WindowManager_WmOnAcceleratedWidgetForDisplay_ParamsDataView(
      internal::WindowManager_WmOnAcceleratedWidgetForDisplay_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t display_id() const {
    return data_->display_id;
  }
  inline void GetSurfaceHandleDataView(
      ::gpu::mojom::SurfaceHandleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSurfaceHandle(UserType* output) {
    auto* pointer = data_->surface_handle.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SurfaceHandleDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowManager_WmOnAcceleratedWidgetForDisplay_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManager_WmNewDisplayAdded_ParamsDataView {
 public:
  WindowManager_WmNewDisplayAdded_ParamsDataView() {}

  WindowManager_WmNewDisplayAdded_ParamsDataView(
      internal::WindowManager_WmNewDisplayAdded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplayDataView(
      ::display::mojom::DisplayDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplay(UserType* output) {
    auto* pointer = data_->display.Get();
    return mojo::internal::Deserialize<::display::mojom::DisplayDataView>(
        pointer, output, context_);
  }
  inline void GetRootDataView(
      ::ui::mojom::WindowDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRoot(UserType* output) {
    auto* pointer = data_->root.Get();
    return mojo::internal::Deserialize<::ui::mojom::WindowDataDataView>(
        pointer, output, context_);
  }
  bool parent_drawn() const {
    return data_->parent_drawn;
  }
  inline void GetLocalSurfaceIdDataView(
      ::viz::mojom::LocalSurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalSurfaceId(UserType* output) {
    auto* pointer = data_->local_surface_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::LocalSurfaceIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowManager_WmNewDisplayAdded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManager_WmDisplayRemoved_ParamsDataView {
 public:
  WindowManager_WmDisplayRemoved_ParamsDataView() {}

  WindowManager_WmDisplayRemoved_ParamsDataView(
      internal::WindowManager_WmDisplayRemoved_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t display_id() const {
    return data_->display_id;
  }
 private:
  internal::WindowManager_WmDisplayRemoved_Params_Data* data_ = nullptr;
};

class WindowManager_WmDisplayModified_ParamsDataView {
 public:
  WindowManager_WmDisplayModified_ParamsDataView() {}

  WindowManager_WmDisplayModified_ParamsDataView(
      internal::WindowManager_WmDisplayModified_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplayDataView(
      ::display::mojom::DisplayDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplay(UserType* output) {
    auto* pointer = data_->display.Get();
    return mojo::internal::Deserialize<::display::mojom::DisplayDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowManager_WmDisplayModified_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManager_WmSetBounds_ParamsDataView {
 public:
  WindowManager_WmSetBounds_ParamsDataView() {}

  WindowManager_WmSetBounds_ParamsDataView(
      internal::WindowManager_WmSetBounds_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetBoundsDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBounds(UserType* output) {
    auto* pointer = data_->bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowManager_WmSetBounds_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManager_WmSetProperty_ParamsDataView {
 public:
  WindowManager_WmSetProperty_ParamsDataView() {}

  WindowManager_WmSetProperty_ParamsDataView(
      internal::WindowManager_WmSetProperty_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::WindowManager_WmSetProperty_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManager_WmSetModalType_ParamsDataView {
 public:
  WindowManager_WmSetModalType_ParamsDataView() {}

  WindowManager_WmSetModalType_ParamsDataView(
      internal::WindowManager_WmSetModalType_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::ModalType>(
        data_value, output);
  }

  ::ui::mojom::ModalType type() const {
    return static_cast<::ui::mojom::ModalType>(data_->type);
  }
 private:
  internal::WindowManager_WmSetModalType_Params_Data* data_ = nullptr;
};

class WindowManager_WmSetCanFocus_ParamsDataView {
 public:
  WindowManager_WmSetCanFocus_ParamsDataView() {}

  WindowManager_WmSetCanFocus_ParamsDataView(
      internal::WindowManager_WmSetCanFocus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  bool can_focus() const {
    return data_->can_focus;
  }
 private:
  internal::WindowManager_WmSetCanFocus_Params_Data* data_ = nullptr;
};

class WindowManager_WmCreateTopLevelWindow_ParamsDataView {
 public:
  WindowManager_WmCreateTopLevelWindow_ParamsDataView() {}

  WindowManager_WmCreateTopLevelWindow_ParamsDataView(
      internal::WindowManager_WmCreateTopLevelWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  inline void GetPropertiesDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProperties(UserType* output) {
    auto* pointer = data_->properties.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
        pointer, output, context_);
  }
 private:
  internal::WindowManager_WmCreateTopLevelWindow_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManager_WmClientJankinessChanged_ParamsDataView {
 public:
  WindowManager_WmClientJankinessChanged_ParamsDataView() {}

  WindowManager_WmClientJankinessChanged_ParamsDataView(
      internal::WindowManager_WmClientJankinessChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t client_id() const {
    return data_->client_id;
  }
  bool janky() const {
    return data_->janky;
  }
 private:
  internal::WindowManager_WmClientJankinessChanged_Params_Data* data_ = nullptr;
};

class WindowManager_WmBuildDragImage_ParamsDataView {
 public:
  WindowManager_WmBuildDragImage_ParamsDataView() {}

  WindowManager_WmBuildDragImage_ParamsDataView(
      internal::WindowManager_WmBuildDragImage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetScreenLocationDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScreenLocation(UserType* output) {
    auto* pointer = data_->screen_location.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
  inline void GetDragImageDataView(
      ::skia::mojom::BitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDragImage(UserType* output) {
    auto* pointer = data_->drag_image.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapDataView>(
        pointer, output, context_);
  }
  inline void GetDragImageOffsetDataView(
      ::gfx::mojom::Vector2dDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDragImageOffset(UserType* output) {
    auto* pointer = data_->drag_image_offset.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Vector2dDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) const {
    auto data_value = data_->source;
    return mojo::internal::Deserialize<::ui::mojom::PointerKind>(
        data_value, output);
  }

  ::ui::mojom::PointerKind source() const {
    return static_cast<::ui::mojom::PointerKind>(data_->source);
  }
 private:
  internal::WindowManager_WmBuildDragImage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManager_WmMoveDragImage_ParamsDataView {
 public:
  WindowManager_WmMoveDragImage_ParamsDataView() {}

  WindowManager_WmMoveDragImage_ParamsDataView(
      internal::WindowManager_WmMoveDragImage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetScreenLocationDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScreenLocation(UserType* output) {
    auto* pointer = data_->screen_location.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowManager_WmMoveDragImage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManager_WmMoveDragImage_ResponseParamsDataView {
 public:
  WindowManager_WmMoveDragImage_ResponseParamsDataView() {}

  WindowManager_WmMoveDragImage_ResponseParamsDataView(
      internal::WindowManager_WmMoveDragImage_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WindowManager_WmMoveDragImage_ResponseParams_Data* data_ = nullptr;
};

class WindowManager_WmDestroyDragImage_ParamsDataView {
 public:
  WindowManager_WmDestroyDragImage_ParamsDataView() {}

  WindowManager_WmDestroyDragImage_ParamsDataView(
      internal::WindowManager_WmDestroyDragImage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WindowManager_WmDestroyDragImage_Params_Data* data_ = nullptr;
};

class WindowManager_WmPerformMoveLoop_ParamsDataView {
 public:
  WindowManager_WmPerformMoveLoop_ParamsDataView() {}

  WindowManager_WmPerformMoveLoop_ParamsDataView(
      internal::WindowManager_WmPerformMoveLoop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) const {
    auto data_value = data_->source;
    return mojo::internal::Deserialize<::ui::mojom::MoveLoopSource>(
        data_value, output);
  }

  ::ui::mojom::MoveLoopSource source() const {
    return static_cast<::ui::mojom::MoveLoopSource>(data_->source);
  }
  inline void GetCursorLocationDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCursorLocation(UserType* output) {
    auto* pointer = data_->cursor_location.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowManager_WmPerformMoveLoop_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManager_WmCancelMoveLoop_ParamsDataView {
 public:
  WindowManager_WmCancelMoveLoop_ParamsDataView() {}

  WindowManager_WmCancelMoveLoop_ParamsDataView(
      internal::WindowManager_WmCancelMoveLoop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
 private:
  internal::WindowManager_WmCancelMoveLoop_Params_Data* data_ = nullptr;
};

class WindowManager_WmDeactivateWindow_ParamsDataView {
 public:
  WindowManager_WmDeactivateWindow_ParamsDataView() {}

  WindowManager_WmDeactivateWindow_ParamsDataView(
      internal::WindowManager_WmDeactivateWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowManager_WmDeactivateWindow_Params_Data* data_ = nullptr;
};

class WindowManager_WmStackAbove_ParamsDataView {
 public:
  WindowManager_WmStackAbove_ParamsDataView() {}

  WindowManager_WmStackAbove_ParamsDataView(
      internal::WindowManager_WmStackAbove_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t above_id() const {
    return data_->above_id;
  }
  uint64_t below_id() const {
    return data_->below_id;
  }
 private:
  internal::WindowManager_WmStackAbove_Params_Data* data_ = nullptr;
};

class WindowManager_WmStackAtTop_ParamsDataView {
 public:
  WindowManager_WmStackAtTop_ParamsDataView() {}

  WindowManager_WmStackAtTop_ParamsDataView(
      internal::WindowManager_WmStackAtTop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowManager_WmStackAtTop_Params_Data* data_ = nullptr;
};

class WindowManager_WmPerformWmAction_ParamsDataView {
 public:
  WindowManager_WmPerformWmAction_ParamsDataView() {}

  WindowManager_WmPerformWmAction_ParamsDataView(
      internal::WindowManager_WmPerformWmAction_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetActionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAction(UserType* output) {
    auto* pointer = data_->action.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowManager_WmPerformWmAction_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManager_OnAccelerator_ParamsDataView {
 public:
  WindowManager_OnAccelerator_ParamsDataView() {}

  WindowManager_OnAccelerator_ParamsDataView(
      internal::WindowManager_OnAccelerator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t ack_id() const {
    return data_->ack_id;
  }
  uint32_t accelerator_id() const {
    return data_->accelerator_id;
  }
  inline void GetEventDataView(
      ::ui::mojom::EventDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEvent(UserType* output) {
    auto* pointer = data_->event.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowManager_OnAccelerator_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManager_OnCursorTouchVisibleChanged_ParamsDataView {
 public:
  WindowManager_OnCursorTouchVisibleChanged_ParamsDataView() {}

  WindowManager_OnCursorTouchVisibleChanged_ParamsDataView(
      internal::WindowManager_OnCursorTouchVisibleChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool enabled() const {
    return data_->enabled;
  }
 private:
  internal::WindowManager_OnCursorTouchVisibleChanged_Params_Data* data_ = nullptr;
};

class WindowManager_OnEventBlockedByModalWindow_ParamsDataView {
 public:
  WindowManager_OnEventBlockedByModalWindow_ParamsDataView() {}

  WindowManager_OnEventBlockedByModalWindow_ParamsDataView(
      internal::WindowManager_OnEventBlockedByModalWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowManager_OnEventBlockedByModalWindow_Params_Data* data_ = nullptr;
};

class WindowManagerClient_AddActivationParent_ParamsDataView {
 public:
  WindowManagerClient_AddActivationParent_ParamsDataView() {}

  WindowManagerClient_AddActivationParent_ParamsDataView(
      internal::WindowManagerClient_AddActivationParent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowManagerClient_AddActivationParent_Params_Data* data_ = nullptr;
};

class WindowManagerClient_RemoveActivationParent_ParamsDataView {
 public:
  WindowManagerClient_RemoveActivationParent_ParamsDataView() {}

  WindowManagerClient_RemoveActivationParent_ParamsDataView(
      internal::WindowManagerClient_RemoveActivationParent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowManagerClient_RemoveActivationParent_Params_Data* data_ = nullptr;
};

class WindowManagerClient_SetExtendedHitRegionForChildren_ParamsDataView {
 public:
  WindowManagerClient_SetExtendedHitRegionForChildren_ParamsDataView() {}

  WindowManagerClient_SetExtendedHitRegionForChildren_ParamsDataView(
      internal::WindowManagerClient_SetExtendedHitRegionForChildren_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetMouseInsetsDataView(
      ::gfx::mojom::InsetsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMouseInsets(UserType* output) {
    auto* pointer = data_->mouse_insets.Get();
    return mojo::internal::Deserialize<::gfx::mojom::InsetsDataView>(
        pointer, output, context_);
  }
  inline void GetTouchInsetsDataView(
      ::gfx::mojom::InsetsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTouchInsets(UserType* output) {
    auto* pointer = data_->touch_insets.Get();
    return mojo::internal::Deserialize<::gfx::mojom::InsetsDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowManagerClient_SetExtendedHitRegionForChildren_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManagerClient_AddAccelerators_ParamsDataView {
 public:
  WindowManagerClient_AddAccelerators_ParamsDataView() {}

  WindowManagerClient_AddAccelerators_ParamsDataView(
      internal::WindowManagerClient_AddAccelerators_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAcceleratorsDataView(
      mojo::ArrayDataView<WmAcceleratorDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAccelerators(UserType* output) {
    auto* pointer = data_->accelerators.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::WmAcceleratorDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WindowManagerClient_AddAccelerators_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManagerClient_AddAccelerators_ResponseParamsDataView {
 public:
  WindowManagerClient_AddAccelerators_ResponseParamsDataView() {}

  WindowManagerClient_AddAccelerators_ResponseParamsDataView(
      internal::WindowManagerClient_AddAccelerators_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::WindowManagerClient_AddAccelerators_ResponseParams_Data* data_ = nullptr;
};

class WindowManagerClient_RemoveAccelerator_ParamsDataView {
 public:
  WindowManagerClient_RemoveAccelerator_ParamsDataView() {}

  WindowManagerClient_RemoveAccelerator_ParamsDataView(
      internal::WindowManagerClient_RemoveAccelerator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
 private:
  internal::WindowManagerClient_RemoveAccelerator_Params_Data* data_ = nullptr;
};

class WindowManagerClient_SetKeyEventsThatDontHideCursor_ParamsDataView {
 public:
  WindowManagerClient_SetKeyEventsThatDontHideCursor_ParamsDataView() {}

  WindowManagerClient_SetKeyEventsThatDontHideCursor_ParamsDataView(
      internal::WindowManagerClient_SetKeyEventsThatDontHideCursor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDontHideCursorListDataView(
      mojo::ArrayDataView<::ui::mojom::EventMatcherDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDontHideCursorList(UserType* output) {
    auto* pointer = data_->dont_hide_cursor_list.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::EventMatcherDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WindowManagerClient_SetKeyEventsThatDontHideCursor_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManagerClient_SetDisplayRoot_ParamsDataView {
 public:
  WindowManagerClient_SetDisplayRoot_ParamsDataView() {}

  WindowManagerClient_SetDisplayRoot_ParamsDataView(
      internal::WindowManagerClient_SetDisplayRoot_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplayDataView(
      ::display::mojom::DisplayDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplay(UserType* output) {
    auto* pointer = data_->display.Get();
    return mojo::internal::Deserialize<::display::mojom::DisplayDataView>(
        pointer, output, context_);
  }
  inline void GetViewportMetricsDataView(
      ::ui::mojom::WmViewportMetricsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadViewportMetrics(UserType* output) {
    auto* pointer = data_->viewport_metrics.Get();
    return mojo::internal::Deserialize<::ui::mojom::WmViewportMetricsDataView>(
        pointer, output, context_);
  }
  bool is_primary_display() const {
    return data_->is_primary_display;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetMirrorsDataView(
      mojo::ArrayDataView<::display::mojom::DisplayDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMirrors(UserType* output) {
    auto* pointer = data_->mirrors.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::display::mojom::DisplayDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WindowManagerClient_SetDisplayRoot_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManagerClient_SetDisplayRoot_ResponseParamsDataView {
 public:
  WindowManagerClient_SetDisplayRoot_ResponseParamsDataView() {}

  WindowManagerClient_SetDisplayRoot_ResponseParamsDataView(
      internal::WindowManagerClient_SetDisplayRoot_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::WindowManagerClient_SetDisplayRoot_ResponseParams_Data* data_ = nullptr;
};

class WindowManagerClient_SetDisplayConfiguration_ParamsDataView {
 public:
  WindowManagerClient_SetDisplayConfiguration_ParamsDataView() {}

  WindowManagerClient_SetDisplayConfiguration_ParamsDataView(
      internal::WindowManagerClient_SetDisplayConfiguration_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplaysDataView(
      mojo::ArrayDataView<::display::mojom::DisplayDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplays(UserType* output) {
    auto* pointer = data_->displays.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::display::mojom::DisplayDataView>>(
        pointer, output, context_);
  }
  inline void GetViewportMetricsDataView(
      mojo::ArrayDataView<::ui::mojom::WmViewportMetricsDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadViewportMetrics(UserType* output) {
    auto* pointer = data_->viewport_metrics.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::WmViewportMetricsDataView>>(
        pointer, output, context_);
  }
  int64_t primary_display_id() const {
    return data_->primary_display_id;
  }
  int64_t internal_display_id() const {
    return data_->internal_display_id;
  }
  inline void GetMirrorsDataView(
      mojo::ArrayDataView<::display::mojom::DisplayDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMirrors(UserType* output) {
    auto* pointer = data_->mirrors.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::display::mojom::DisplayDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WindowManagerClient_SetDisplayConfiguration_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManagerClient_SetDisplayConfiguration_ResponseParamsDataView {
 public:
  WindowManagerClient_SetDisplayConfiguration_ResponseParamsDataView() {}

  WindowManagerClient_SetDisplayConfiguration_ResponseParamsDataView(
      internal::WindowManagerClient_SetDisplayConfiguration_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::WindowManagerClient_SetDisplayConfiguration_ResponseParams_Data* data_ = nullptr;
};

class WindowManagerClient_SwapDisplayRoots_ParamsDataView {
 public:
  WindowManagerClient_SwapDisplayRoots_ParamsDataView() {}

  WindowManagerClient_SwapDisplayRoots_ParamsDataView(
      internal::WindowManagerClient_SwapDisplayRoots_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t display_id1() const {
    return data_->display_id1;
  }
  int64_t display_id2() const {
    return data_->display_id2;
  }
 private:
  internal::WindowManagerClient_SwapDisplayRoots_Params_Data* data_ = nullptr;
};

class WindowManagerClient_SwapDisplayRoots_ResponseParamsDataView {
 public:
  WindowManagerClient_SwapDisplayRoots_ResponseParamsDataView() {}

  WindowManagerClient_SwapDisplayRoots_ResponseParamsDataView(
      internal::WindowManagerClient_SwapDisplayRoots_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::WindowManagerClient_SwapDisplayRoots_ResponseParams_Data* data_ = nullptr;
};

class WindowManagerClient_SetBlockingContainers_ParamsDataView {
 public:
  WindowManagerClient_SetBlockingContainers_ParamsDataView() {}

  WindowManagerClient_SetBlockingContainers_ParamsDataView(
      internal::WindowManagerClient_SetBlockingContainers_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBlockingContainersDataView(
      mojo::ArrayDataView<::ui::mojom::BlockingContainersDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlockingContainers(UserType* output) {
    auto* pointer = data_->blocking_containers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::BlockingContainersDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WindowManagerClient_SetBlockingContainers_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManagerClient_SetBlockingContainers_ResponseParamsDataView {
 public:
  WindowManagerClient_SetBlockingContainers_ResponseParamsDataView() {}

  WindowManagerClient_SetBlockingContainers_ResponseParamsDataView(
      internal::WindowManagerClient_SetBlockingContainers_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::WindowManagerClient_SetBlockingContainers_ResponseParams_Data* data_ = nullptr;
};

class WindowManagerClient_WmResponse_ParamsDataView {
 public:
  WindowManagerClient_WmResponse_ParamsDataView() {}

  WindowManagerClient_WmResponse_ParamsDataView(
      internal::WindowManagerClient_WmResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  bool response() const {
    return data_->response;
  }
 private:
  internal::WindowManagerClient_WmResponse_Params_Data* data_ = nullptr;
};

class WindowManagerClient_WmSetBoundsResponse_ParamsDataView {
 public:
  WindowManagerClient_WmSetBoundsResponse_ParamsDataView() {}

  WindowManagerClient_WmSetBoundsResponse_ParamsDataView(
      internal::WindowManagerClient_WmSetBoundsResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
 private:
  internal::WindowManagerClient_WmSetBoundsResponse_Params_Data* data_ = nullptr;
};

class WindowManagerClient_WmRequestClose_ParamsDataView {
 public:
  WindowManagerClient_WmRequestClose_ParamsDataView() {}

  WindowManagerClient_WmRequestClose_ParamsDataView(
      internal::WindowManagerClient_WmRequestClose_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowManagerClient_WmRequestClose_Params_Data* data_ = nullptr;
};

class WindowManagerClient_WmSetFrameDecorationValues_ParamsDataView {
 public:
  WindowManagerClient_WmSetFrameDecorationValues_ParamsDataView() {}

  WindowManagerClient_WmSetFrameDecorationValues_ParamsDataView(
      internal::WindowManagerClient_WmSetFrameDecorationValues_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValuesDataView(
      ::ui::mojom::FrameDecorationValuesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValues(UserType* output) {
    auto* pointer = data_->values.Get();
    return mojo::internal::Deserialize<::ui::mojom::FrameDecorationValuesDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowManagerClient_WmSetFrameDecorationValues_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManagerClient_WmSetNonClientCursor_ParamsDataView {
 public:
  WindowManagerClient_WmSetNonClientCursor_ParamsDataView() {}

  WindowManagerClient_WmSetNonClientCursor_ParamsDataView(
      internal::WindowManagerClient_WmSetNonClientCursor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t window_id() const {
    return data_->window_id;
  }
  inline void GetCursorDataView(
      ::ui::mojom::CursorDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCursor(UserType* output) {
    auto* pointer = data_->cursor.Get();
    return mojo::internal::Deserialize<::ui::mojom::CursorDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowManagerClient_WmSetNonClientCursor_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManagerClient_WmLockCursor_ParamsDataView {
 public:
  WindowManagerClient_WmLockCursor_ParamsDataView() {}

  WindowManagerClient_WmLockCursor_ParamsDataView(
      internal::WindowManagerClient_WmLockCursor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WindowManagerClient_WmLockCursor_Params_Data* data_ = nullptr;
};

class WindowManagerClient_WmUnlockCursor_ParamsDataView {
 public:
  WindowManagerClient_WmUnlockCursor_ParamsDataView() {}

  WindowManagerClient_WmUnlockCursor_ParamsDataView(
      internal::WindowManagerClient_WmUnlockCursor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WindowManagerClient_WmUnlockCursor_Params_Data* data_ = nullptr;
};

class WindowManagerClient_WmSetCursorVisible_ParamsDataView {
 public:
  WindowManagerClient_WmSetCursorVisible_ParamsDataView() {}

  WindowManagerClient_WmSetCursorVisible_ParamsDataView(
      internal::WindowManagerClient_WmSetCursorVisible_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool visible() const {
    return data_->visible;
  }
 private:
  internal::WindowManagerClient_WmSetCursorVisible_Params_Data* data_ = nullptr;
};

class WindowManagerClient_WmSetCursorSize_ParamsDataView {
 public:
  WindowManagerClient_WmSetCursorSize_ParamsDataView() {}

  WindowManagerClient_WmSetCursorSize_ParamsDataView(
      internal::WindowManagerClient_WmSetCursorSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCursorSize(UserType* output) const {
    auto data_value = data_->cursor_size;
    return mojo::internal::Deserialize<::ui::mojom::CursorSize>(
        data_value, output);
  }

  ::ui::mojom::CursorSize cursor_size() const {
    return static_cast<::ui::mojom::CursorSize>(data_->cursor_size);
  }
 private:
  internal::WindowManagerClient_WmSetCursorSize_Params_Data* data_ = nullptr;
};

class WindowManagerClient_WmSetGlobalOverrideCursor_ParamsDataView {
 public:
  WindowManagerClient_WmSetGlobalOverrideCursor_ParamsDataView() {}

  WindowManagerClient_WmSetGlobalOverrideCursor_ParamsDataView(
      internal::WindowManagerClient_WmSetGlobalOverrideCursor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCursorDataView(
      ::ui::mojom::CursorDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCursor(UserType* output) {
    auto* pointer = data_->cursor.Get();
    return mojo::internal::Deserialize<::ui::mojom::CursorDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowManagerClient_WmSetGlobalOverrideCursor_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManagerClient_WmMoveCursorToDisplayLocation_ParamsDataView {
 public:
  WindowManagerClient_WmMoveCursorToDisplayLocation_ParamsDataView() {}

  WindowManagerClient_WmMoveCursorToDisplayLocation_ParamsDataView(
      internal::WindowManagerClient_WmMoveCursorToDisplayLocation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplayPixelsDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayPixels(UserType* output) {
    auto* pointer = data_->display_pixels.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
  int64_t display_id() const {
    return data_->display_id;
  }
 private:
  internal::WindowManagerClient_WmMoveCursorToDisplayLocation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManagerClient_WmConfineCursorToBounds_ParamsDataView {
 public:
  WindowManagerClient_WmConfineCursorToBounds_ParamsDataView() {}

  WindowManagerClient_WmConfineCursorToBounds_ParamsDataView(
      internal::WindowManagerClient_WmConfineCursorToBounds_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBoundsInPixelsDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBoundsInPixels(UserType* output) {
    auto* pointer = data_->bounds_in_pixels.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  int64_t display_id() const {
    return data_->display_id;
  }
 private:
  internal::WindowManagerClient_WmConfineCursorToBounds_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowManagerClient_WmSetCursorTouchVisible_ParamsDataView {
 public:
  WindowManagerClient_WmSetCursorTouchVisible_ParamsDataView() {}

  WindowManagerClient_WmSetCursorTouchVisible_ParamsDataView(
      internal::WindowManagerClient_WmSetCursorTouchVisible_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool enabled() const {
    return data_->enabled;
  }
 private:
  internal::WindowManagerClient_WmSetCursorTouchVisible_Params_Data* data_ = nullptr;
};

class WindowManagerClient_OnWmCreatedTopLevelWindow_ParamsDataView {
 public:
  WindowManagerClient_OnWmCreatedTopLevelWindow_ParamsDataView() {}

  WindowManagerClient_OnWmCreatedTopLevelWindow_ParamsDataView(
      internal::WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t change_id() const {
    return data_->change_id;
  }
  uint64_t window_id() const {
    return data_->window_id;
  }
 private:
  internal::WindowManagerClient_OnWmCreatedTopLevelWindow_Params_Data* data_ = nullptr;
};

class WindowManagerClient_OnAcceleratorAck_ParamsDataView {
 public:
  WindowManagerClient_OnAcceleratorAck_ParamsDataView() {}

  WindowManagerClient_OnAcceleratorAck_ParamsDataView(
      internal::WindowManagerClient_OnAcceleratorAck_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t ack_id() const {
    return data_->ack_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEventResult(UserType* output) const {
    auto data_value = data_->event_result;
    return mojo::internal::Deserialize<::ui::mojom::EventResult>(
        data_value, output);
  }

  ::ui::mojom::EventResult event_result() const {
    return static_cast<::ui::mojom::EventResult>(data_->event_result);
  }
  inline void GetPropertiesDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProperties(UserType* output) {
    auto* pointer = data_->properties.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
        pointer, output, context_);
  }
 private:
  internal::WindowManagerClient_OnAcceleratorAck_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::WmAcceleratorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::WmAcceleratorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::WmAccelerator_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    (*output).Allocate(buffer);
    (*output)->id = CallWithContext(Traits::id, input, custom_context);
    decltype(CallWithContext(Traits::event_matcher, input, custom_context)) in_event_matcher = CallWithContext(Traits::event_matcher, input, custom_context);
    typename decltype((*output)->event_matcher)::BaseType::BufferWriter
        event_matcher_writer;
    mojo::internal::Serialize<::ui::mojom::EventMatcherDataView>(
        in_event_matcher, buffer, &event_matcher_writer, context);
    (*output)->event_matcher.Set(
        event_matcher_writer.is_null() ? nullptr : event_matcher_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->event_matcher.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null event_matcher in WmAccelerator struct");
    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::WmAccelerator_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::WmAcceleratorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {

inline void WmAcceleratorDataView::GetEventMatcherDataView(
    ::ui::mojom::EventMatcherDataView* output) {
  auto pointer = data_->event_matcher.Get();
  *output = ::ui::mojom::EventMatcherDataView(pointer, context_);
}




inline void WindowManager_WmOnAcceleratedWidgetForDisplay_ParamsDataView::GetSurfaceHandleDataView(
    ::gpu::mojom::SurfaceHandleDataView* output) {
  auto pointer = data_->surface_handle.Get();
  *output = ::gpu::mojom::SurfaceHandleDataView(pointer, context_);
}


inline void WindowManager_WmNewDisplayAdded_ParamsDataView::GetDisplayDataView(
    ::display::mojom::DisplayDataView* output) {
  auto pointer = data_->display.Get();
  *output = ::display::mojom::DisplayDataView(pointer, context_);
}
inline void WindowManager_WmNewDisplayAdded_ParamsDataView::GetRootDataView(
    ::ui::mojom::WindowDataDataView* output) {
  auto pointer = data_->root.Get();
  *output = ::ui::mojom::WindowDataDataView(pointer, context_);
}
inline void WindowManager_WmNewDisplayAdded_ParamsDataView::GetLocalSurfaceIdDataView(
    ::viz::mojom::LocalSurfaceIdDataView* output) {
  auto pointer = data_->local_surface_id.Get();
  *output = ::viz::mojom::LocalSurfaceIdDataView(pointer, context_);
}




inline void WindowManager_WmDisplayModified_ParamsDataView::GetDisplayDataView(
    ::display::mojom::DisplayDataView* output) {
  auto pointer = data_->display.Get();
  *output = ::display::mojom::DisplayDataView(pointer, context_);
}


inline void WindowManager_WmSetBounds_ParamsDataView::GetBoundsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->bounds.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}


inline void WindowManager_WmSetProperty_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WindowManager_WmSetProperty_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}






inline void WindowManager_WmCreateTopLevelWindow_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}
inline void WindowManager_WmCreateTopLevelWindow_ParamsDataView::GetPropertiesDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->properties.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>(pointer, context_);
}




inline void WindowManager_WmBuildDragImage_ParamsDataView::GetScreenLocationDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->screen_location.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}
inline void WindowManager_WmBuildDragImage_ParamsDataView::GetDragImageDataView(
    ::skia::mojom::BitmapDataView* output) {
  auto pointer = data_->drag_image.Get();
  *output = ::skia::mojom::BitmapDataView(pointer, context_);
}
inline void WindowManager_WmBuildDragImage_ParamsDataView::GetDragImageOffsetDataView(
    ::gfx::mojom::Vector2dDataView* output) {
  auto pointer = data_->drag_image_offset.Get();
  *output = ::gfx::mojom::Vector2dDataView(pointer, context_);
}


inline void WindowManager_WmMoveDragImage_ParamsDataView::GetScreenLocationDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->screen_location.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}






inline void WindowManager_WmPerformMoveLoop_ParamsDataView::GetCursorLocationDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->cursor_location.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}










inline void WindowManager_WmPerformWmAction_ParamsDataView::GetActionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->action.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void WindowManager_OnAccelerator_ParamsDataView::GetEventDataView(
    ::ui::mojom::EventDataView* output) {
  auto pointer = data_->event.Get();
  *output = ::ui::mojom::EventDataView(pointer, context_);
}










inline void WindowManagerClient_SetExtendedHitRegionForChildren_ParamsDataView::GetMouseInsetsDataView(
    ::gfx::mojom::InsetsDataView* output) {
  auto pointer = data_->mouse_insets.Get();
  *output = ::gfx::mojom::InsetsDataView(pointer, context_);
}
inline void WindowManagerClient_SetExtendedHitRegionForChildren_ParamsDataView::GetTouchInsetsDataView(
    ::gfx::mojom::InsetsDataView* output) {
  auto pointer = data_->touch_insets.Get();
  *output = ::gfx::mojom::InsetsDataView(pointer, context_);
}


inline void WindowManagerClient_AddAccelerators_ParamsDataView::GetAcceleratorsDataView(
    mojo::ArrayDataView<WmAcceleratorDataView>* output) {
  auto pointer = data_->accelerators.Get();
  *output = mojo::ArrayDataView<WmAcceleratorDataView>(pointer, context_);
}






inline void WindowManagerClient_SetKeyEventsThatDontHideCursor_ParamsDataView::GetDontHideCursorListDataView(
    mojo::ArrayDataView<::ui::mojom::EventMatcherDataView>* output) {
  auto pointer = data_->dont_hide_cursor_list.Get();
  *output = mojo::ArrayDataView<::ui::mojom::EventMatcherDataView>(pointer, context_);
}


inline void WindowManagerClient_SetDisplayRoot_ParamsDataView::GetDisplayDataView(
    ::display::mojom::DisplayDataView* output) {
  auto pointer = data_->display.Get();
  *output = ::display::mojom::DisplayDataView(pointer, context_);
}
inline void WindowManagerClient_SetDisplayRoot_ParamsDataView::GetViewportMetricsDataView(
    ::ui::mojom::WmViewportMetricsDataView* output) {
  auto pointer = data_->viewport_metrics.Get();
  *output = ::ui::mojom::WmViewportMetricsDataView(pointer, context_);
}
inline void WindowManagerClient_SetDisplayRoot_ParamsDataView::GetMirrorsDataView(
    mojo::ArrayDataView<::display::mojom::DisplayDataView>* output) {
  auto pointer = data_->mirrors.Get();
  *output = mojo::ArrayDataView<::display::mojom::DisplayDataView>(pointer, context_);
}




inline void WindowManagerClient_SetDisplayConfiguration_ParamsDataView::GetDisplaysDataView(
    mojo::ArrayDataView<::display::mojom::DisplayDataView>* output) {
  auto pointer = data_->displays.Get();
  *output = mojo::ArrayDataView<::display::mojom::DisplayDataView>(pointer, context_);
}
inline void WindowManagerClient_SetDisplayConfiguration_ParamsDataView::GetViewportMetricsDataView(
    mojo::ArrayDataView<::ui::mojom::WmViewportMetricsDataView>* output) {
  auto pointer = data_->viewport_metrics.Get();
  *output = mojo::ArrayDataView<::ui::mojom::WmViewportMetricsDataView>(pointer, context_);
}
inline void WindowManagerClient_SetDisplayConfiguration_ParamsDataView::GetMirrorsDataView(
    mojo::ArrayDataView<::display::mojom::DisplayDataView>* output) {
  auto pointer = data_->mirrors.Get();
  *output = mojo::ArrayDataView<::display::mojom::DisplayDataView>(pointer, context_);
}








inline void WindowManagerClient_SetBlockingContainers_ParamsDataView::GetBlockingContainersDataView(
    mojo::ArrayDataView<::ui::mojom::BlockingContainersDataView>* output) {
  auto pointer = data_->blocking_containers.Get();
  *output = mojo::ArrayDataView<::ui::mojom::BlockingContainersDataView>(pointer, context_);
}










inline void WindowManagerClient_WmSetFrameDecorationValues_ParamsDataView::GetValuesDataView(
    ::ui::mojom::FrameDecorationValuesDataView* output) {
  auto pointer = data_->values.Get();
  *output = ::ui::mojom::FrameDecorationValuesDataView(pointer, context_);
}


inline void WindowManagerClient_WmSetNonClientCursor_ParamsDataView::GetCursorDataView(
    ::ui::mojom::CursorDataDataView* output) {
  auto pointer = data_->cursor.Get();
  *output = ::ui::mojom::CursorDataDataView(pointer, context_);
}










inline void WindowManagerClient_WmSetGlobalOverrideCursor_ParamsDataView::GetCursorDataView(
    ::ui::mojom::CursorDataDataView* output) {
  auto pointer = data_->cursor.Get();
  *output = ::ui::mojom::CursorDataDataView(pointer, context_);
}


inline void WindowManagerClient_WmMoveCursorToDisplayLocation_ParamsDataView::GetDisplayPixelsDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->display_pixels.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}


inline void WindowManagerClient_WmConfineCursorToBounds_ParamsDataView::GetBoundsInPixelsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->bounds_in_pixels.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}






inline void WindowManagerClient_OnAcceleratorAck_ParamsDataView::GetPropertiesDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->properties.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_SHARED_H_
