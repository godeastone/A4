// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/ui/public/interfaces/window_manager.mojom-shared.h"
#include "gpu/ipc/common/surface_handle.mojom.h"
#include "services/ui/public/interfaces/cursor/cursor.mojom.h"
#include "services/ui/public/interfaces/event_matcher.mojom.h"
#include "services/ui/public/interfaces/window_manager_constants.mojom.h"
#include "services/ui/public/interfaces/window_tree_constants.mojom.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom.h"
#include "skia/public/interfaces/bitmap.mojom.h"
#include "ui/base/mojo/ui_base_types.mojom.h"
#include "ui/display/mojo/display.mojom.h"
#include "ui/events/mojo/event.mojom.h"
#include "ui/events/mojo/event_constants.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/display/mojo/display.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace ui {
namespace mojom {
class WindowManager;
using WindowManagerPtr = mojo::InterfacePtr<WindowManager>;
using WindowManagerPtrInfo = mojo::InterfacePtrInfo<WindowManager>;
using ThreadSafeWindowManagerPtr =
    mojo::ThreadSafeInterfacePtr<WindowManager>;
using WindowManagerRequest = mojo::InterfaceRequest<WindowManager>;
using WindowManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowManager>;
using ThreadSafeWindowManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WindowManager>;
using WindowManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowManager>;
using WindowManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowManager>;

class WindowManagerClient;
using WindowManagerClientPtr = mojo::InterfacePtr<WindowManagerClient>;
using WindowManagerClientPtrInfo = mojo::InterfacePtrInfo<WindowManagerClient>;
using ThreadSafeWindowManagerClientPtr =
    mojo::ThreadSafeInterfacePtr<WindowManagerClient>;
using WindowManagerClientRequest = mojo::InterfaceRequest<WindowManagerClient>;
using WindowManagerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowManagerClient>;
using ThreadSafeWindowManagerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WindowManagerClient>;
using WindowManagerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowManagerClient>;
using WindowManagerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowManagerClient>;

class WmAccelerator;
using WmAcceleratorPtr = mojo::StructPtr<WmAccelerator>;


class WindowManagerProxy;

template <typename ImplRefTraits>
class WindowManagerStub;

class WindowManagerRequestValidator;
class WindowManagerResponseValidator;

class  WindowManager
    : public WindowManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WindowManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = WindowManagerStub<ImplRefTraits>;

  using RequestValidator_ = WindowManagerRequestValidator;
  using ResponseValidator_ = WindowManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnConnectMinVersion = 0,
    kWmOnAcceleratedWidgetForDisplayMinVersion = 0,
    kWmNewDisplayAddedMinVersion = 0,
    kWmDisplayRemovedMinVersion = 0,
    kWmDisplayModifiedMinVersion = 0,
    kWmSetBoundsMinVersion = 0,
    kWmSetPropertyMinVersion = 0,
    kWmSetModalTypeMinVersion = 0,
    kWmSetCanFocusMinVersion = 0,
    kWmCreateTopLevelWindowMinVersion = 0,
    kWmClientJankinessChangedMinVersion = 0,
    kWmBuildDragImageMinVersion = 0,
    kWmMoveDragImageMinVersion = 0,
    kWmDestroyDragImageMinVersion = 0,
    kWmPerformMoveLoopMinVersion = 0,
    kWmCancelMoveLoopMinVersion = 0,
    kWmDeactivateWindowMinVersion = 0,
    kWmStackAboveMinVersion = 0,
    kWmStackAtTopMinVersion = 0,
    kWmPerformWmActionMinVersion = 0,
    kOnAcceleratorMinVersion = 0,
    kOnCursorTouchVisibleChangedMinVersion = 0,
    kOnEventBlockedByModalWindowMinVersion = 0,
  };
  static const char kFocusable_InitProperty[];
  static const char kTranslucent_InitProperty[];
  static const char kBounds_InitProperty[];
  static const char kContainerId_InitProperty[];
  static const char kDisableImmersive_InitProperty[];
  static const char kDisplayId_InitProperty[];
  static const char kRemoveStandardFrame_InitProperty[];
  static const char kActiveFrameColor_InitProperty[];
  static const char kInactiveFrameColor_InitProperty[];
  static const char kWindowIgnoredByShelf_InitProperty[];
  static const char kWindowType_InitProperty[];
  static const char kAlwaysOnTop_Property[];
  static const char kAppIcon_Property[];
  static const char kDrawAttention_Property[];
  static const char kExcludeFromMru_Property[];
  static const char kImmersiveFullscreen_Property[];
  static const char kMinimumSize_Property[];
  static const char kName_Property[];
  static const char kPanelAttached_Property[];
  static const char kPreferredSize_Property[];
  static const char kRenderParentTitleArea_Property[];
  static const char kResizeBehavior_Property[];
  static const char kRestoreBounds_Property[];
  static const char kShadowElevation_Property[];
  static const char kShelfID_Property[];
  static const char kShelfItemType_Property[];
  static const char kShowState_Property[];
  static const char kWindowCornerRadius_Property[];
  static const char kWindowIcon_Property[];
  static const char kWindowTitle_Property[];
  static const char kWindowTitleShown_Property[];
  virtual ~WindowManager() {}

  virtual void OnConnect() = 0;

  virtual void WmOnAcceleratedWidgetForDisplay(int64_t display_id, ::gpu::SurfaceHandle surface_handle) = 0;

  virtual void WmNewDisplayAdded(const display::Display& display, ::ui::mojom::WindowDataPtr root, bool parent_drawn, const base::Optional<viz::LocalSurfaceId>& local_surface_id) = 0;

  virtual void WmDisplayRemoved(int64_t display_id) = 0;

  virtual void WmDisplayModified(const display::Display& display) = 0;

  virtual void WmSetBounds(uint32_t change_id, uint64_t window_id, const gfx::Rect& bounds) = 0;

  virtual void WmSetProperty(uint32_t change_id, uint64_t window_id, const std::string& name, const base::Optional<std::vector<uint8_t>>& value) = 0;

  virtual void WmSetModalType(uint64_t window_id, ui::ModalType type) = 0;

  virtual void WmSetCanFocus(uint64_t window_id, bool can_focus) = 0;

  virtual void WmCreateTopLevelWindow(uint32_t change_id, const viz::FrameSinkId& frame_sink_id, const base::flat_map<std::string, std::vector<uint8_t>>& properties) = 0;

  virtual void WmClientJankinessChanged(uint32_t client_id, bool janky) = 0;

  virtual void WmBuildDragImage(const gfx::Point& screen_location, const SkBitmap& drag_image, const gfx::Vector2d& drag_image_offset, ::ui::mojom::PointerKind source) = 0;


  using WmMoveDragImageCallback = base::OnceCallback<void()>;
  virtual void WmMoveDragImage(const gfx::Point& screen_location, WmMoveDragImageCallback callback) = 0;

  virtual void WmDestroyDragImage() = 0;

  virtual void WmPerformMoveLoop(uint32_t change_id, uint64_t window_id, ::ui::mojom::MoveLoopSource source, const gfx::Point& cursor_location) = 0;

  virtual void WmCancelMoveLoop(uint32_t change_id) = 0;

  virtual void WmDeactivateWindow(uint64_t window_id) = 0;

  virtual void WmStackAbove(uint32_t change_id, uint64_t above_id, uint64_t below_id) = 0;

  virtual void WmStackAtTop(uint32_t change_id, uint64_t window_id) = 0;

  virtual void WmPerformWmAction(uint64_t window_id, const std::string& action) = 0;

  virtual void OnAccelerator(uint32_t ack_id, uint32_t accelerator_id, std::unique_ptr<ui::Event> event) = 0;

  virtual void OnCursorTouchVisibleChanged(bool enabled) = 0;

  virtual void OnEventBlockedByModalWindow(uint64_t window_id) = 0;
};
class  WindowManagerInterceptorForTesting : public WindowManager {
  virtual WindowManager* GetForwardingInterface() = 0;
  void OnConnect() override;
  void WmOnAcceleratedWidgetForDisplay(int64_t display_id, ::gpu::SurfaceHandle surface_handle) override;
  void WmNewDisplayAdded(const display::Display& display, ::ui::mojom::WindowDataPtr root, bool parent_drawn, const base::Optional<viz::LocalSurfaceId>& local_surface_id) override;
  void WmDisplayRemoved(int64_t display_id) override;
  void WmDisplayModified(const display::Display& display) override;
  void WmSetBounds(uint32_t change_id, uint64_t window_id, const gfx::Rect& bounds) override;
  void WmSetProperty(uint32_t change_id, uint64_t window_id, const std::string& name, const base::Optional<std::vector<uint8_t>>& value) override;
  void WmSetModalType(uint64_t window_id, ui::ModalType type) override;
  void WmSetCanFocus(uint64_t window_id, bool can_focus) override;
  void WmCreateTopLevelWindow(uint32_t change_id, const viz::FrameSinkId& frame_sink_id, const base::flat_map<std::string, std::vector<uint8_t>>& properties) override;
  void WmClientJankinessChanged(uint32_t client_id, bool janky) override;
  void WmBuildDragImage(const gfx::Point& screen_location, const SkBitmap& drag_image, const gfx::Vector2d& drag_image_offset, ::ui::mojom::PointerKind source) override;
  void WmMoveDragImage(const gfx::Point& screen_location, WmMoveDragImageCallback callback) override;
  void WmDestroyDragImage() override;
  void WmPerformMoveLoop(uint32_t change_id, uint64_t window_id, ::ui::mojom::MoveLoopSource source, const gfx::Point& cursor_location) override;
  void WmCancelMoveLoop(uint32_t change_id) override;
  void WmDeactivateWindow(uint64_t window_id) override;
  void WmStackAbove(uint32_t change_id, uint64_t above_id, uint64_t below_id) override;
  void WmStackAtTop(uint32_t change_id, uint64_t window_id) override;
  void WmPerformWmAction(uint64_t window_id, const std::string& action) override;
  void OnAccelerator(uint32_t ack_id, uint32_t accelerator_id, std::unique_ptr<ui::Event> event) override;
  void OnCursorTouchVisibleChanged(bool enabled) override;
  void OnEventBlockedByModalWindow(uint64_t window_id) override;
};
class  WindowManagerAsyncWaiter {
 public:
  explicit WindowManagerAsyncWaiter(WindowManager* proxy);
  ~WindowManagerAsyncWaiter();
  void WmMoveDragImage(
      const gfx::Point& screen_location);

 private:
  WindowManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WindowManagerAsyncWaiter);
};

class WindowManagerClientProxy;

template <typename ImplRefTraits>
class WindowManagerClientStub;

class WindowManagerClientRequestValidator;
class WindowManagerClientResponseValidator;

class  WindowManagerClient
    : public WindowManagerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WindowManagerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = WindowManagerClientStub<ImplRefTraits>;

  using RequestValidator_ = WindowManagerClientRequestValidator;
  using ResponseValidator_ = WindowManagerClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAddActivationParentMinVersion = 0,
    kRemoveActivationParentMinVersion = 0,
    kSetExtendedHitRegionForChildrenMinVersion = 0,
    kAddAcceleratorsMinVersion = 0,
    kRemoveAcceleratorMinVersion = 0,
    kSetKeyEventsThatDontHideCursorMinVersion = 0,
    kSetDisplayRootMinVersion = 0,
    kSetDisplayConfigurationMinVersion = 0,
    kSwapDisplayRootsMinVersion = 0,
    kSetBlockingContainersMinVersion = 0,
    kWmResponseMinVersion = 0,
    kWmSetBoundsResponseMinVersion = 0,
    kWmRequestCloseMinVersion = 0,
    kWmSetFrameDecorationValuesMinVersion = 0,
    kWmSetNonClientCursorMinVersion = 0,
    kWmLockCursorMinVersion = 0,
    kWmUnlockCursorMinVersion = 0,
    kWmSetCursorVisibleMinVersion = 0,
    kWmSetCursorSizeMinVersion = 0,
    kWmSetGlobalOverrideCursorMinVersion = 0,
    kWmMoveCursorToDisplayLocationMinVersion = 0,
    kWmConfineCursorToBoundsMinVersion = 0,
    kWmSetCursorTouchVisibleMinVersion = 0,
    kOnWmCreatedTopLevelWindowMinVersion = 0,
    kOnAcceleratorAckMinVersion = 0,
  };
  virtual ~WindowManagerClient() {}

  virtual void AddActivationParent(uint64_t window_id) = 0;

  virtual void RemoveActivationParent(uint64_t window_id) = 0;

  virtual void SetExtendedHitRegionForChildren(uint64_t window_id, const gfx::Insets& mouse_insets, const gfx::Insets& touch_insets) = 0;


  using AddAcceleratorsCallback = base::OnceCallback<void(bool)>;
  virtual void AddAccelerators(std::vector<WmAcceleratorPtr> accelerators, AddAcceleratorsCallback callback) = 0;

  virtual void RemoveAccelerator(uint32_t id) = 0;

  virtual void SetKeyEventsThatDontHideCursor(std::vector<::ui::mojom::EventMatcherPtr> dont_hide_cursor_list) = 0;


  using SetDisplayRootCallback = base::OnceCallback<void(bool)>;
  virtual void SetDisplayRoot(const display::Display& display, ::ui::mojom::WmViewportMetricsPtr viewport_metrics, bool is_primary_display, uint64_t window_id, const std::vector<display::Display>& mirrors, SetDisplayRootCallback callback) = 0;


  using SetDisplayConfigurationCallback = base::OnceCallback<void(bool)>;
  virtual void SetDisplayConfiguration(const std::vector<display::Display>& displays, std::vector<::ui::mojom::WmViewportMetricsPtr> viewport_metrics, int64_t primary_display_id, int64_t internal_display_id, const std::vector<display::Display>& mirrors, SetDisplayConfigurationCallback callback) = 0;


  using SwapDisplayRootsCallback = base::OnceCallback<void(bool)>;
  virtual void SwapDisplayRoots(int64_t display_id1, int64_t display_id2, SwapDisplayRootsCallback callback) = 0;


  using SetBlockingContainersCallback = base::OnceCallback<void(bool)>;
  virtual void SetBlockingContainers(std::vector<::ui::mojom::BlockingContainersPtr> blocking_containers, SetBlockingContainersCallback callback) = 0;

  virtual void WmResponse(uint32_t change_id, bool response) = 0;

  virtual void WmSetBoundsResponse(uint32_t change_id) = 0;

  virtual void WmRequestClose(uint64_t window_id) = 0;

  virtual void WmSetFrameDecorationValues(::ui::mojom::FrameDecorationValuesPtr values) = 0;

  virtual void WmSetNonClientCursor(uint64_t window_id, ui::CursorData cursor) = 0;

  virtual void WmLockCursor() = 0;

  virtual void WmUnlockCursor() = 0;

  virtual void WmSetCursorVisible(bool visible) = 0;

  virtual void WmSetCursorSize(ui::CursorSize cursor_size) = 0;

  virtual void WmSetGlobalOverrideCursor(base::Optional<ui::CursorData> cursor) = 0;

  virtual void WmMoveCursorToDisplayLocation(const gfx::Point& display_pixels, int64_t display_id) = 0;

  virtual void WmConfineCursorToBounds(const gfx::Rect& bounds_in_pixels, int64_t display_id) = 0;

  virtual void WmSetCursorTouchVisible(bool enabled) = 0;

  virtual void OnWmCreatedTopLevelWindow(uint32_t change_id, uint64_t window_id) = 0;

  virtual void OnAcceleratorAck(uint32_t ack_id, ::ui::mojom::EventResult event_result, const base::flat_map<std::string, std::vector<uint8_t>>& properties) = 0;
};
class  WindowManagerClientInterceptorForTesting : public WindowManagerClient {
  virtual WindowManagerClient* GetForwardingInterface() = 0;
  void AddActivationParent(uint64_t window_id) override;
  void RemoveActivationParent(uint64_t window_id) override;
  void SetExtendedHitRegionForChildren(uint64_t window_id, const gfx::Insets& mouse_insets, const gfx::Insets& touch_insets) override;
  void AddAccelerators(std::vector<WmAcceleratorPtr> accelerators, AddAcceleratorsCallback callback) override;
  void RemoveAccelerator(uint32_t id) override;
  void SetKeyEventsThatDontHideCursor(std::vector<::ui::mojom::EventMatcherPtr> dont_hide_cursor_list) override;
  void SetDisplayRoot(const display::Display& display, ::ui::mojom::WmViewportMetricsPtr viewport_metrics, bool is_primary_display, uint64_t window_id, const std::vector<display::Display>& mirrors, SetDisplayRootCallback callback) override;
  void SetDisplayConfiguration(const std::vector<display::Display>& displays, std::vector<::ui::mojom::WmViewportMetricsPtr> viewport_metrics, int64_t primary_display_id, int64_t internal_display_id, const std::vector<display::Display>& mirrors, SetDisplayConfigurationCallback callback) override;
  void SwapDisplayRoots(int64_t display_id1, int64_t display_id2, SwapDisplayRootsCallback callback) override;
  void SetBlockingContainers(std::vector<::ui::mojom::BlockingContainersPtr> blocking_containers, SetBlockingContainersCallback callback) override;
  void WmResponse(uint32_t change_id, bool response) override;
  void WmSetBoundsResponse(uint32_t change_id) override;
  void WmRequestClose(uint64_t window_id) override;
  void WmSetFrameDecorationValues(::ui::mojom::FrameDecorationValuesPtr values) override;
  void WmSetNonClientCursor(uint64_t window_id, ui::CursorData cursor) override;
  void WmLockCursor() override;
  void WmUnlockCursor() override;
  void WmSetCursorVisible(bool visible) override;
  void WmSetCursorSize(ui::CursorSize cursor_size) override;
  void WmSetGlobalOverrideCursor(base::Optional<ui::CursorData> cursor) override;
  void WmMoveCursorToDisplayLocation(const gfx::Point& display_pixels, int64_t display_id) override;
  void WmConfineCursorToBounds(const gfx::Rect& bounds_in_pixels, int64_t display_id) override;
  void WmSetCursorTouchVisible(bool enabled) override;
  void OnWmCreatedTopLevelWindow(uint32_t change_id, uint64_t window_id) override;
  void OnAcceleratorAck(uint32_t ack_id, ::ui::mojom::EventResult event_result, const base::flat_map<std::string, std::vector<uint8_t>>& properties) override;
};
class  WindowManagerClientAsyncWaiter {
 public:
  explicit WindowManagerClientAsyncWaiter(WindowManagerClient* proxy);
  ~WindowManagerClientAsyncWaiter();
  void AddAccelerators(
      std::vector<WmAcceleratorPtr> accelerators, bool* out_success);
  void SetDisplayRoot(
      const display::Display& display, ::ui::mojom::WmViewportMetricsPtr viewport_metrics, bool is_primary_display, uint64_t window_id, const std::vector<display::Display>& mirrors, bool* out_success);
  void SetDisplayConfiguration(
      const std::vector<display::Display>& displays, std::vector<::ui::mojom::WmViewportMetricsPtr> viewport_metrics, int64_t primary_display_id, int64_t internal_display_id, const std::vector<display::Display>& mirrors, bool* out_success);
  void SwapDisplayRoots(
      int64_t display_id1, int64_t display_id2, bool* out_success);
  void SetBlockingContainers(
      std::vector<::ui::mojom::BlockingContainersPtr> blocking_containers, bool* out_success);

 private:
  WindowManagerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WindowManagerClientAsyncWaiter);
};

class  WindowManagerProxy
    : public WindowManager {
 public:
  explicit WindowManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnConnect() final;
  void WmOnAcceleratedWidgetForDisplay(int64_t display_id, ::gpu::SurfaceHandle surface_handle) final;
  void WmNewDisplayAdded(const display::Display& display, ::ui::mojom::WindowDataPtr root, bool parent_drawn, const base::Optional<viz::LocalSurfaceId>& local_surface_id) final;
  void WmDisplayRemoved(int64_t display_id) final;
  void WmDisplayModified(const display::Display& display) final;
  void WmSetBounds(uint32_t change_id, uint64_t window_id, const gfx::Rect& bounds) final;
  void WmSetProperty(uint32_t change_id, uint64_t window_id, const std::string& name, const base::Optional<std::vector<uint8_t>>& value) final;
  void WmSetModalType(uint64_t window_id, ui::ModalType type) final;
  void WmSetCanFocus(uint64_t window_id, bool can_focus) final;
  void WmCreateTopLevelWindow(uint32_t change_id, const viz::FrameSinkId& frame_sink_id, const base::flat_map<std::string, std::vector<uint8_t>>& properties) final;
  void WmClientJankinessChanged(uint32_t client_id, bool janky) final;
  void WmBuildDragImage(const gfx::Point& screen_location, const SkBitmap& drag_image, const gfx::Vector2d& drag_image_offset, ::ui::mojom::PointerKind source) final;
  void WmMoveDragImage(const gfx::Point& screen_location, WmMoveDragImageCallback callback) final;
  void WmDestroyDragImage() final;
  void WmPerformMoveLoop(uint32_t change_id, uint64_t window_id, ::ui::mojom::MoveLoopSource source, const gfx::Point& cursor_location) final;
  void WmCancelMoveLoop(uint32_t change_id) final;
  void WmDeactivateWindow(uint64_t window_id) final;
  void WmStackAbove(uint32_t change_id, uint64_t above_id, uint64_t below_id) final;
  void WmStackAtTop(uint32_t change_id, uint64_t window_id) final;
  void WmPerformWmAction(uint64_t window_id, const std::string& action) final;
  void OnAccelerator(uint32_t ack_id, uint32_t accelerator_id, std::unique_ptr<ui::Event> event) final;
  void OnCursorTouchVisibleChanged(bool enabled) final;
  void OnEventBlockedByModalWindow(uint64_t window_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  WindowManagerClientProxy
    : public WindowManagerClient {
 public:
  explicit WindowManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddActivationParent(uint64_t window_id) final;
  void RemoveActivationParent(uint64_t window_id) final;
  void SetExtendedHitRegionForChildren(uint64_t window_id, const gfx::Insets& mouse_insets, const gfx::Insets& touch_insets) final;
  void AddAccelerators(std::vector<WmAcceleratorPtr> accelerators, AddAcceleratorsCallback callback) final;
  void RemoveAccelerator(uint32_t id) final;
  void SetKeyEventsThatDontHideCursor(std::vector<::ui::mojom::EventMatcherPtr> dont_hide_cursor_list) final;
  void SetDisplayRoot(const display::Display& display, ::ui::mojom::WmViewportMetricsPtr viewport_metrics, bool is_primary_display, uint64_t window_id, const std::vector<display::Display>& mirrors, SetDisplayRootCallback callback) final;
  void SetDisplayConfiguration(const std::vector<display::Display>& displays, std::vector<::ui::mojom::WmViewportMetricsPtr> viewport_metrics, int64_t primary_display_id, int64_t internal_display_id, const std::vector<display::Display>& mirrors, SetDisplayConfigurationCallback callback) final;
  void SwapDisplayRoots(int64_t display_id1, int64_t display_id2, SwapDisplayRootsCallback callback) final;
  void SetBlockingContainers(std::vector<::ui::mojom::BlockingContainersPtr> blocking_containers, SetBlockingContainersCallback callback) final;
  void WmResponse(uint32_t change_id, bool response) final;
  void WmSetBoundsResponse(uint32_t change_id) final;
  void WmRequestClose(uint64_t window_id) final;
  void WmSetFrameDecorationValues(::ui::mojom::FrameDecorationValuesPtr values) final;
  void WmSetNonClientCursor(uint64_t window_id, ui::CursorData cursor) final;
  void WmLockCursor() final;
  void WmUnlockCursor() final;
  void WmSetCursorVisible(bool visible) final;
  void WmSetCursorSize(ui::CursorSize cursor_size) final;
  void WmSetGlobalOverrideCursor(base::Optional<ui::CursorData> cursor) final;
  void WmMoveCursorToDisplayLocation(const gfx::Point& display_pixels, int64_t display_id) final;
  void WmConfineCursorToBounds(const gfx::Rect& bounds_in_pixels, int64_t display_id) final;
  void WmSetCursorTouchVisible(bool enabled) final;
  void OnWmCreatedTopLevelWindow(uint32_t change_id, uint64_t window_id) final;
  void OnAcceleratorAck(uint32_t ack_id, ::ui::mojom::EventResult event_result, const base::flat_map<std::string, std::vector<uint8_t>>& properties) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  WindowManagerStubDispatch {
 public:
  static bool Accept(WindowManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WindowManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WindowManager>>
class WindowManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WindowManagerStub() {}
  ~WindowManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WindowManagerClientStubDispatch {
 public:
  static bool Accept(WindowManagerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WindowManagerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WindowManagerClient>>
class WindowManagerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WindowManagerClientStub() {}
  ~WindowManagerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowManagerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowManagerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WindowManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  WindowManagerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  WindowManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  WindowManagerClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  WmAccelerator {
 public:
  using DataView = WmAcceleratorDataView;
  using Data_ = internal::WmAccelerator_Data;

  template <typename... Args>
  static WmAcceleratorPtr New(Args&&... args) {
    return WmAcceleratorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WmAcceleratorPtr From(const U& u) {
    return mojo::TypeConverter<WmAcceleratorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WmAccelerator>::Convert(*this);
  }


  WmAccelerator();

  WmAccelerator(
      uint32_t id,
      ::ui::mojom::EventMatcherPtr event_matcher);

  ~WmAccelerator();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WmAcceleratorPtr>
  WmAcceleratorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WmAccelerator>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WmAccelerator::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WmAccelerator::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WmAccelerator_UnserializedMessageContext<
            UserType, WmAccelerator::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WmAccelerator::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WmAccelerator::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WmAccelerator_UnserializedMessageContext<
            UserType, WmAccelerator::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WmAccelerator::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t id;
  ::ui::mojom::EventMatcherPtr event_matcher;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(WmAccelerator);
};

template <typename StructPtrType>
WmAcceleratorPtr WmAccelerator::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(event_matcher)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WmAccelerator>::value>::type*>
bool WmAccelerator::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->event_matcher, other_struct.event_matcher))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::WmAccelerator::DataView,
                                         ::ui::mojom::WmAcceleratorPtr> {
  static bool IsNull(const ::ui::mojom::WmAcceleratorPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::WmAcceleratorPtr* output) { output->reset(); }

  static decltype(::ui::mojom::WmAccelerator::id) id(
      const ::ui::mojom::WmAcceleratorPtr& input) {
    return input->id;
  }

  static const decltype(::ui::mojom::WmAccelerator::event_matcher)& event_matcher(
      const ::ui::mojom::WmAcceleratorPtr& input) {
    return input->event_matcher;
  }

  static bool Read(::ui::mojom::WmAccelerator::DataView input, ::ui::mojom::WmAcceleratorPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_MANAGER_MOJOM_H_