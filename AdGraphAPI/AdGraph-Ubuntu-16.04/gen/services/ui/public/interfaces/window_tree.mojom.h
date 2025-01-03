// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_MOJOM_H_

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
#include "services/ui/public/interfaces/window_tree.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/ui/public/interfaces/cursor/cursor.mojom.h"
#include "services/ui/public/interfaces/event_matcher.mojom.h"
#include "services/ui/public/interfaces/mus_constants.mojom.h"
#include "services/ui/public/interfaces/window_manager.mojom.h"
#include "services/ui/public/interfaces/window_manager_constants.mojom.h"
#include "services/ui/public/interfaces/window_tree_constants.mojom.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom.h"
#include "services/viz/public/interfaces/compositing/surface_info.mojom.h"
#include "skia/public/interfaces/bitmap.mojom.h"
#include "ui/base/mojo/ui_base_types.mojom.h"
#include "ui/events/mojo/event.mojom.h"
#include "ui/events/mojo/event_constants.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/mojo/transform.mojom.h"
#include "ui/platform_window/mojo/text_input_state.mojom.h"
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
class WindowTree;
using WindowTreePtr = mojo::InterfacePtr<WindowTree>;
using WindowTreePtrInfo = mojo::InterfacePtrInfo<WindowTree>;
using ThreadSafeWindowTreePtr =
    mojo::ThreadSafeInterfacePtr<WindowTree>;
using WindowTreeRequest = mojo::InterfaceRequest<WindowTree>;
using WindowTreeAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowTree>;
using ThreadSafeWindowTreeAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WindowTree>;
using WindowTreeAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowTree>;
using WindowTreeAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowTree>;

class WindowTreeClient;
using WindowTreeClientPtr = mojo::InterfacePtr<WindowTreeClient>;
using WindowTreeClientPtrInfo = mojo::InterfacePtrInfo<WindowTreeClient>;
using ThreadSafeWindowTreeClientPtr =
    mojo::ThreadSafeInterfacePtr<WindowTreeClient>;
using WindowTreeClientRequest = mojo::InterfaceRequest<WindowTreeClient>;
using WindowTreeClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowTreeClient>;
using ThreadSafeWindowTreeClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WindowTreeClient>;
using WindowTreeClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowTreeClient>;
using WindowTreeClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowTreeClient>;

class WindowTreeFactory;
using WindowTreeFactoryPtr = mojo::InterfacePtr<WindowTreeFactory>;
using WindowTreeFactoryPtrInfo = mojo::InterfacePtrInfo<WindowTreeFactory>;
using ThreadSafeWindowTreeFactoryPtr =
    mojo::ThreadSafeInterfacePtr<WindowTreeFactory>;
using WindowTreeFactoryRequest = mojo::InterfaceRequest<WindowTreeFactory>;
using WindowTreeFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowTreeFactory>;
using ThreadSafeWindowTreeFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WindowTreeFactory>;
using WindowTreeFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowTreeFactory>;
using WindowTreeFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowTreeFactory>;


class WindowTreeProxy;

template <typename ImplRefTraits>
class WindowTreeStub;

class WindowTreeRequestValidator;
class WindowTreeResponseValidator;

class  WindowTree
    : public WindowTreeInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WindowTreeProxy;

  template <typename ImplRefTraits>
  using Stub_ = WindowTreeStub<ImplRefTraits>;

  using RequestValidator_ = WindowTreeRequestValidator;
  using ResponseValidator_ = WindowTreeResponseValidator;
  enum MethodMinVersions : uint32_t {
    kNewWindowMinVersion = 0,
    kNewTopLevelWindowMinVersion = 0,
    kDeleteWindowMinVersion = 0,
    kSetCaptureMinVersion = 0,
    kReleaseCaptureMinVersion = 0,
    kStartPointerWatcherMinVersion = 0,
    kStopPointerWatcherMinVersion = 0,
    kSetWindowBoundsMinVersion = 0,
    kSetWindowTransformMinVersion = 0,
    kSetClientAreaMinVersion = 0,
    kSetHitTestMaskMinVersion = 0,
    kSetCanAcceptDropsMinVersion = 0,
    kSetWindowVisibilityMinVersion = 0,
    kSetWindowPropertyMinVersion = 0,
    kSetWindowOpacityMinVersion = 0,
    kAttachCompositorFrameSinkMinVersion = 0,
    kAddWindowMinVersion = 0,
    kRemoveWindowFromParentMinVersion = 0,
    kAddTransientWindowMinVersion = 0,
    kRemoveTransientWindowFromParentMinVersion = 0,
    kSetModalTypeMinVersion = 0,
    kSetChildModalParentMinVersion = 0,
    kReorderWindowMinVersion = 0,
    kGetWindowTreeMinVersion = 0,
    kEmbedMinVersion = 0,
    kScheduleEmbedMinVersion = 0,
    kScheduleEmbedForExistingClientMinVersion = 0,
    kEmbedUsingTokenMinVersion = 0,
    kSetFocusMinVersion = 0,
    kSetCanFocusMinVersion = 0,
    kSetCursorMinVersion = 0,
    kSetWindowTextInputStateMinVersion = 0,
    kSetImeVisibilityMinVersion = 0,
    kSetEventTargetingPolicyMinVersion = 0,
    kOnWindowInputEventAckMinVersion = 0,
    kDeactivateWindowMinVersion = 0,
    kStackAboveMinVersion = 0,
    kStackAtTopMinVersion = 0,
    kPerformWmActionMinVersion = 0,
    kGetWindowManagerClientMinVersion = 0,
    kGetCursorLocationMemoryMinVersion = 0,
    kPerformWindowMoveMinVersion = 0,
    kCancelWindowMoveMinVersion = 0,
    kPerformDragDropMinVersion = 0,
    kCancelDragDropMinVersion = 0,
  };
  virtual ~WindowTree() {}

  virtual void NewWindow(uint32_t change_id, uint64_t window_id, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& properties) = 0;

  virtual void NewTopLevelWindow(uint32_t change_id, uint64_t window_id, const base::flat_map<std::string, std::vector<uint8_t>>& properties) = 0;

  virtual void DeleteWindow(uint32_t change_id, uint64_t window_id) = 0;

  virtual void SetCapture(uint32_t change_id, uint64_t window_id) = 0;

  virtual void ReleaseCapture(uint32_t change_id, uint64_t window_id) = 0;

  virtual void StartPointerWatcher(bool want_moves) = 0;

  virtual void StopPointerWatcher() = 0;

  virtual void SetWindowBounds(uint32_t change_id, uint64_t window_id, const gfx::Rect& bounds, const base::Optional<viz::LocalSurfaceId>& local_surface_id) = 0;

  virtual void SetWindowTransform(uint32_t change_id, uint64_t window_id, const gfx::Transform& transform) = 0;

  virtual void SetClientArea(uint64_t window_id, const gfx::Insets& insets, const base::Optional<std::vector<gfx::Rect>>& additional_client_areas) = 0;

  virtual void SetHitTestMask(uint64_t window_id, const base::Optional<gfx::Rect>& mask) = 0;

  virtual void SetCanAcceptDrops(uint64_t window_id, bool accepts_drops) = 0;

  virtual void SetWindowVisibility(uint32_t change_id, uint64_t window_id, bool visible) = 0;

  virtual void SetWindowProperty(uint32_t change_id, uint64_t window_id, const std::string& name, const base::Optional<std::vector<uint8_t>>& value) = 0;

  virtual void SetWindowOpacity(uint32_t change_id, uint64_t window_id, float opacity) = 0;

  virtual void AttachCompositorFrameSink(uint64_t window_id, ::viz::mojom::CompositorFrameSinkRequest compositor_frame_sink, ::viz::mojom::CompositorFrameSinkClientPtr client) = 0;

  virtual void AddWindow(uint32_t change_id, uint64_t parent, uint64_t child) = 0;

  virtual void RemoveWindowFromParent(uint32_t change_id, uint64_t window_id) = 0;

  virtual void AddTransientWindow(uint32_t change_id, uint64_t window_id, uint64_t transient_window_id) = 0;

  virtual void RemoveTransientWindowFromParent(uint32_t change_id, uint64_t transient_window_id) = 0;

  virtual void SetModalType(uint32_t change_id, uint64_t window_id, ui::ModalType type) = 0;

  virtual void SetChildModalParent(uint32_t change_id, uint64_t window_id, uint64_t parent_window_id) = 0;

  virtual void ReorderWindow(uint32_t change_id, uint64_t window_id, uint64_t relative_window_id, ::ui::mojom::OrderDirection direction) = 0;


  using GetWindowTreeCallback = base::OnceCallback<void(std::vector<::ui::mojom::WindowDataPtr>)>;
  virtual void GetWindowTree(uint64_t window_id, GetWindowTreeCallback callback) = 0;


  using EmbedCallback = base::OnceCallback<void(bool)>;
  virtual void Embed(uint64_t window_id, WindowTreeClientPtr client, uint32_t embed_flags, EmbedCallback callback) = 0;


  using ScheduleEmbedCallback = base::OnceCallback<void(const base::UnguessableToken&)>;
  virtual void ScheduleEmbed(WindowTreeClientPtr client, ScheduleEmbedCallback callback) = 0;


  using ScheduleEmbedForExistingClientCallback = base::OnceCallback<void(const base::UnguessableToken&)>;
  virtual void ScheduleEmbedForExistingClient(uint32_t window_id, ScheduleEmbedForExistingClientCallback callback) = 0;


  using EmbedUsingTokenCallback = base::OnceCallback<void(bool)>;
  virtual void EmbedUsingToken(uint64_t window_id, const base::UnguessableToken& token, uint32_t embed_flags, EmbedUsingTokenCallback callback) = 0;

  virtual void SetFocus(uint32_t change_id, uint64_t window_id) = 0;

  virtual void SetCanFocus(uint64_t window_id, bool can_focus) = 0;

  virtual void SetCursor(uint32_t change_id, uint64_t window_id, ui::CursorData cursor) = 0;

  virtual void SetWindowTextInputState(uint64_t window_id, ::ui::mojom::TextInputStatePtr state) = 0;

  virtual void SetImeVisibility(uint64_t window_id, bool visible, ::ui::mojom::TextInputStatePtr state) = 0;

  virtual void SetEventTargetingPolicy(uint64_t window_id, ::ui::mojom::EventTargetingPolicy policy) = 0;

  virtual void OnWindowInputEventAck(uint32_t event_id, ::ui::mojom::EventResult result) = 0;

  virtual void DeactivateWindow(uint64_t window_id) = 0;

  virtual void StackAbove(uint32_t change_id, uint64_t above_id, uint64_t below_id) = 0;

  virtual void StackAtTop(uint32_t change_id, uint64_t window_id) = 0;

  virtual void PerformWmAction(uint64_t window_id, const std::string& action) = 0;

  virtual void GetWindowManagerClient(::ui::mojom::WindowManagerClientAssociatedRequest internal) = 0;


  using GetCursorLocationMemoryCallback = base::OnceCallback<void(mojo::ScopedSharedBufferHandle)>;
  virtual void GetCursorLocationMemory(GetCursorLocationMemoryCallback callback) = 0;

  virtual void PerformWindowMove(uint32_t change_id, uint64_t window_id, ::ui::mojom::MoveLoopSource source, const gfx::Point& cursor) = 0;

  virtual void CancelWindowMove(uint64_t window_id) = 0;

  virtual void PerformDragDrop(uint32_t change_id, uint64_t source_window_id, const gfx::Point& screen_location, const base::flat_map<std::string, std::vector<uint8_t>>& drag_data, const SkBitmap& drag_image, const gfx::Vector2d& drag_image_offset, uint32_t drag_operation, ::ui::mojom::PointerKind source) = 0;

  virtual void CancelDragDrop(uint64_t window_id) = 0;
};
class  WindowTreeInterceptorForTesting : public WindowTree {
  virtual WindowTree* GetForwardingInterface() = 0;
  void NewWindow(uint32_t change_id, uint64_t window_id, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& properties) override;
  void NewTopLevelWindow(uint32_t change_id, uint64_t window_id, const base::flat_map<std::string, std::vector<uint8_t>>& properties) override;
  void DeleteWindow(uint32_t change_id, uint64_t window_id) override;
  void SetCapture(uint32_t change_id, uint64_t window_id) override;
  void ReleaseCapture(uint32_t change_id, uint64_t window_id) override;
  void StartPointerWatcher(bool want_moves) override;
  void StopPointerWatcher() override;
  void SetWindowBounds(uint32_t change_id, uint64_t window_id, const gfx::Rect& bounds, const base::Optional<viz::LocalSurfaceId>& local_surface_id) override;
  void SetWindowTransform(uint32_t change_id, uint64_t window_id, const gfx::Transform& transform) override;
  void SetClientArea(uint64_t window_id, const gfx::Insets& insets, const base::Optional<std::vector<gfx::Rect>>& additional_client_areas) override;
  void SetHitTestMask(uint64_t window_id, const base::Optional<gfx::Rect>& mask) override;
  void SetCanAcceptDrops(uint64_t window_id, bool accepts_drops) override;
  void SetWindowVisibility(uint32_t change_id, uint64_t window_id, bool visible) override;
  void SetWindowProperty(uint32_t change_id, uint64_t window_id, const std::string& name, const base::Optional<std::vector<uint8_t>>& value) override;
  void SetWindowOpacity(uint32_t change_id, uint64_t window_id, float opacity) override;
  void AttachCompositorFrameSink(uint64_t window_id, ::viz::mojom::CompositorFrameSinkRequest compositor_frame_sink, ::viz::mojom::CompositorFrameSinkClientPtr client) override;
  void AddWindow(uint32_t change_id, uint64_t parent, uint64_t child) override;
  void RemoveWindowFromParent(uint32_t change_id, uint64_t window_id) override;
  void AddTransientWindow(uint32_t change_id, uint64_t window_id, uint64_t transient_window_id) override;
  void RemoveTransientWindowFromParent(uint32_t change_id, uint64_t transient_window_id) override;
  void SetModalType(uint32_t change_id, uint64_t window_id, ui::ModalType type) override;
  void SetChildModalParent(uint32_t change_id, uint64_t window_id, uint64_t parent_window_id) override;
  void ReorderWindow(uint32_t change_id, uint64_t window_id, uint64_t relative_window_id, ::ui::mojom::OrderDirection direction) override;
  void GetWindowTree(uint64_t window_id, GetWindowTreeCallback callback) override;
  void Embed(uint64_t window_id, WindowTreeClientPtr client, uint32_t embed_flags, EmbedCallback callback) override;
  void ScheduleEmbed(WindowTreeClientPtr client, ScheduleEmbedCallback callback) override;
  void ScheduleEmbedForExistingClient(uint32_t window_id, ScheduleEmbedForExistingClientCallback callback) override;
  void EmbedUsingToken(uint64_t window_id, const base::UnguessableToken& token, uint32_t embed_flags, EmbedUsingTokenCallback callback) override;
  void SetFocus(uint32_t change_id, uint64_t window_id) override;
  void SetCanFocus(uint64_t window_id, bool can_focus) override;
  void SetCursor(uint32_t change_id, uint64_t window_id, ui::CursorData cursor) override;
  void SetWindowTextInputState(uint64_t window_id, ::ui::mojom::TextInputStatePtr state) override;
  void SetImeVisibility(uint64_t window_id, bool visible, ::ui::mojom::TextInputStatePtr state) override;
  void SetEventTargetingPolicy(uint64_t window_id, ::ui::mojom::EventTargetingPolicy policy) override;
  void OnWindowInputEventAck(uint32_t event_id, ::ui::mojom::EventResult result) override;
  void DeactivateWindow(uint64_t window_id) override;
  void StackAbove(uint32_t change_id, uint64_t above_id, uint64_t below_id) override;
  void StackAtTop(uint32_t change_id, uint64_t window_id) override;
  void PerformWmAction(uint64_t window_id, const std::string& action) override;
  void GetWindowManagerClient(::ui::mojom::WindowManagerClientAssociatedRequest internal) override;
  void GetCursorLocationMemory(GetCursorLocationMemoryCallback callback) override;
  void PerformWindowMove(uint32_t change_id, uint64_t window_id, ::ui::mojom::MoveLoopSource source, const gfx::Point& cursor) override;
  void CancelWindowMove(uint64_t window_id) override;
  void PerformDragDrop(uint32_t change_id, uint64_t source_window_id, const gfx::Point& screen_location, const base::flat_map<std::string, std::vector<uint8_t>>& drag_data, const SkBitmap& drag_image, const gfx::Vector2d& drag_image_offset, uint32_t drag_operation, ::ui::mojom::PointerKind source) override;
  void CancelDragDrop(uint64_t window_id) override;
};
class  WindowTreeAsyncWaiter {
 public:
  explicit WindowTreeAsyncWaiter(WindowTree* proxy);
  ~WindowTreeAsyncWaiter();
  void GetWindowTree(
      uint64_t window_id, std::vector<::ui::mojom::WindowDataPtr>* out_windows);
  void Embed(
      uint64_t window_id, WindowTreeClientPtr client, uint32_t embed_flags, bool* out_success);
  void ScheduleEmbed(
      WindowTreeClientPtr client, base::UnguessableToken* out_token);
  void ScheduleEmbedForExistingClient(
      uint32_t window_id, base::UnguessableToken* out_token);
  void EmbedUsingToken(
      uint64_t window_id, const base::UnguessableToken& token, uint32_t embed_flags, bool* out_success);
  void GetCursorLocationMemory(
      mojo::ScopedSharedBufferHandle* out_cursor_buffer);

 private:
  WindowTree* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WindowTreeAsyncWaiter);
};

class WindowTreeClientProxy;

template <typename ImplRefTraits>
class WindowTreeClientStub;

class WindowTreeClientRequestValidator;
class WindowTreeClientResponseValidator;

class  WindowTreeClient
    : public WindowTreeClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WindowTreeClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = WindowTreeClientStub<ImplRefTraits>;

  using RequestValidator_ = WindowTreeClientRequestValidator;
  using ResponseValidator_ = WindowTreeClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnEmbedMinVersion = 0,
    kOnEmbedFromTokenMinVersion = 0,
    kOnEmbeddedAppDisconnectedMinVersion = 0,
    kOnUnembedMinVersion = 0,
    kOnCaptureChangedMinVersion = 0,
    kOnFrameSinkIdAllocatedMinVersion = 0,
    kOnTopLevelCreatedMinVersion = 0,
    kOnWindowBoundsChangedMinVersion = 0,
    kOnWindowTransformChangedMinVersion = 0,
    kOnClientAreaChangedMinVersion = 0,
    kOnTransientWindowAddedMinVersion = 0,
    kOnTransientWindowRemovedMinVersion = 0,
    kOnWindowHierarchyChangedMinVersion = 0,
    kOnWindowReorderedMinVersion = 0,
    kOnWindowDeletedMinVersion = 0,
    kOnWindowVisibilityChangedMinVersion = 0,
    kOnWindowOpacityChangedMinVersion = 0,
    kOnWindowParentDrawnStateChangedMinVersion = 0,
    kOnWindowSharedPropertyChangedMinVersion = 0,
    kOnWindowInputEventMinVersion = 0,
    kOnPointerEventObservedMinVersion = 0,
    kOnWindowFocusedMinVersion = 0,
    kOnWindowCursorChangedMinVersion = 0,
    kOnWindowSurfaceChangedMinVersion = 0,
    kOnDragDropStartMinVersion = 0,
    kOnDragEnterMinVersion = 0,
    kOnDragOverMinVersion = 0,
    kOnDragLeaveMinVersion = 0,
    kOnCompleteDropMinVersion = 0,
    kOnPerformDragDropCompletedMinVersion = 0,
    kOnDragDropDoneMinVersion = 0,
    kOnChangeCompletedMinVersion = 0,
    kRequestCloseMinVersion = 0,
    kGetWindowManagerMinVersion = 0,
  };
  virtual ~WindowTreeClient() {}

  virtual void OnEmbed(::ui::mojom::WindowDataPtr root, WindowTreePtr tree, int64_t display_id, uint64_t focused_window, bool parent_drawn, const base::Optional<viz::LocalSurfaceId>& local_surface_id) = 0;

  virtual void OnEmbedFromToken(const base::UnguessableToken& token, ::ui::mojom::WindowDataPtr root, int64_t display_id, const base::Optional<viz::LocalSurfaceId>& local_surface_id) = 0;

  virtual void OnEmbeddedAppDisconnected(uint64_t window) = 0;

  virtual void OnUnembed(uint64_t window) = 0;

  virtual void OnCaptureChanged(uint64_t new_capture, uint64_t old_capture) = 0;

  virtual void OnFrameSinkIdAllocated(uint64_t window, const viz::FrameSinkId& frame_sink_id) = 0;

  virtual void OnTopLevelCreated(uint32_t change_id, ::ui::mojom::WindowDataPtr data, int64_t display_id, bool parent_drawn, const base::Optional<viz::LocalSurfaceId>& local_surface_id) = 0;

  virtual void OnWindowBoundsChanged(uint64_t window, const gfx::Rect& old_bounds, const gfx::Rect& new_bounds, const base::Optional<viz::LocalSurfaceId>& local_surface_id) = 0;

  virtual void OnWindowTransformChanged(uint64_t window, const gfx::Transform& old_transform, const gfx::Transform& new_transform) = 0;

  virtual void OnClientAreaChanged(uint64_t window_id, const gfx::Insets& new_client_area, const std::vector<gfx::Rect>& new_additional_client_areas) = 0;

  virtual void OnTransientWindowAdded(uint64_t window_id, uint64_t transient_window_id) = 0;

  virtual void OnTransientWindowRemoved(uint64_t window_id, uint64_t transient_window_id) = 0;

  virtual void OnWindowHierarchyChanged(uint64_t window, uint64_t old_parent, uint64_t new_parent, std::vector<::ui::mojom::WindowDataPtr> windows) = 0;

  virtual void OnWindowReordered(uint64_t window_id, uint64_t relative_window_id, ::ui::mojom::OrderDirection direction) = 0;

  virtual void OnWindowDeleted(uint64_t window) = 0;

  virtual void OnWindowVisibilityChanged(uint64_t window, bool visible) = 0;

  virtual void OnWindowOpacityChanged(uint64_t window, float old_opacity, float new_opacity) = 0;

  virtual void OnWindowParentDrawnStateChanged(uint64_t window, bool drawn) = 0;

  virtual void OnWindowSharedPropertyChanged(uint64_t window, const std::string& name, const base::Optional<std::vector<uint8_t>>& new_data) = 0;

  virtual void OnWindowInputEvent(uint32_t event_id, uint64_t window, int64_t display_id, uint64_t display_root_window, const gfx::PointF& event_location_in_screen_pixel_layout, std::unique_ptr<ui::Event> event, bool matches_pointer_watcher) = 0;

  virtual void OnPointerEventObserved(std::unique_ptr<ui::Event> event, uint64_t window_id, int64_t display_id) = 0;

  virtual void OnWindowFocused(uint64_t focused_window_id) = 0;

  virtual void OnWindowCursorChanged(uint64_t window_id, ui::CursorData cursor) = 0;

  virtual void OnWindowSurfaceChanged(uint64_t window_id, const viz::SurfaceInfo& surface_info) = 0;

  virtual void OnDragDropStart(const base::flat_map<std::string, std::vector<uint8_t>>& drag_data) = 0;


  using OnDragEnterCallback = base::OnceCallback<void(uint32_t)>;
  virtual void OnDragEnter(uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, OnDragEnterCallback callback) = 0;


  using OnDragOverCallback = base::OnceCallback<void(uint32_t)>;
  virtual void OnDragOver(uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, OnDragOverCallback callback) = 0;

  virtual void OnDragLeave(uint64_t window) = 0;


  using OnCompleteDropCallback = base::OnceCallback<void(uint32_t)>;
  virtual void OnCompleteDrop(uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, OnCompleteDropCallback callback) = 0;

  virtual void OnPerformDragDropCompleted(uint32_t change_id, bool success, uint32_t action_taken) = 0;

  virtual void OnDragDropDone() = 0;

  virtual void OnChangeCompleted(uint32_t change_id, bool success) = 0;

  virtual void RequestClose(uint64_t window_id) = 0;

  virtual void GetWindowManager(::ui::mojom::WindowManagerAssociatedRequest internal) = 0;
};
class  WindowTreeClientInterceptorForTesting : public WindowTreeClient {
  virtual WindowTreeClient* GetForwardingInterface() = 0;
  void OnEmbed(::ui::mojom::WindowDataPtr root, WindowTreePtr tree, int64_t display_id, uint64_t focused_window, bool parent_drawn, const base::Optional<viz::LocalSurfaceId>& local_surface_id) override;
  void OnEmbedFromToken(const base::UnguessableToken& token, ::ui::mojom::WindowDataPtr root, int64_t display_id, const base::Optional<viz::LocalSurfaceId>& local_surface_id) override;
  void OnEmbeddedAppDisconnected(uint64_t window) override;
  void OnUnembed(uint64_t window) override;
  void OnCaptureChanged(uint64_t new_capture, uint64_t old_capture) override;
  void OnFrameSinkIdAllocated(uint64_t window, const viz::FrameSinkId& frame_sink_id) override;
  void OnTopLevelCreated(uint32_t change_id, ::ui::mojom::WindowDataPtr data, int64_t display_id, bool parent_drawn, const base::Optional<viz::LocalSurfaceId>& local_surface_id) override;
  void OnWindowBoundsChanged(uint64_t window, const gfx::Rect& old_bounds, const gfx::Rect& new_bounds, const base::Optional<viz::LocalSurfaceId>& local_surface_id) override;
  void OnWindowTransformChanged(uint64_t window, const gfx::Transform& old_transform, const gfx::Transform& new_transform) override;
  void OnClientAreaChanged(uint64_t window_id, const gfx::Insets& new_client_area, const std::vector<gfx::Rect>& new_additional_client_areas) override;
  void OnTransientWindowAdded(uint64_t window_id, uint64_t transient_window_id) override;
  void OnTransientWindowRemoved(uint64_t window_id, uint64_t transient_window_id) override;
  void OnWindowHierarchyChanged(uint64_t window, uint64_t old_parent, uint64_t new_parent, std::vector<::ui::mojom::WindowDataPtr> windows) override;
  void OnWindowReordered(uint64_t window_id, uint64_t relative_window_id, ::ui::mojom::OrderDirection direction) override;
  void OnWindowDeleted(uint64_t window) override;
  void OnWindowVisibilityChanged(uint64_t window, bool visible) override;
  void OnWindowOpacityChanged(uint64_t window, float old_opacity, float new_opacity) override;
  void OnWindowParentDrawnStateChanged(uint64_t window, bool drawn) override;
  void OnWindowSharedPropertyChanged(uint64_t window, const std::string& name, const base::Optional<std::vector<uint8_t>>& new_data) override;
  void OnWindowInputEvent(uint32_t event_id, uint64_t window, int64_t display_id, uint64_t display_root_window, const gfx::PointF& event_location_in_screen_pixel_layout, std::unique_ptr<ui::Event> event, bool matches_pointer_watcher) override;
  void OnPointerEventObserved(std::unique_ptr<ui::Event> event, uint64_t window_id, int64_t display_id) override;
  void OnWindowFocused(uint64_t focused_window_id) override;
  void OnWindowCursorChanged(uint64_t window_id, ui::CursorData cursor) override;
  void OnWindowSurfaceChanged(uint64_t window_id, const viz::SurfaceInfo& surface_info) override;
  void OnDragDropStart(const base::flat_map<std::string, std::vector<uint8_t>>& drag_data) override;
  void OnDragEnter(uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, OnDragEnterCallback callback) override;
  void OnDragOver(uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, OnDragOverCallback callback) override;
  void OnDragLeave(uint64_t window) override;
  void OnCompleteDrop(uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, OnCompleteDropCallback callback) override;
  void OnPerformDragDropCompleted(uint32_t change_id, bool success, uint32_t action_taken) override;
  void OnDragDropDone() override;
  void OnChangeCompleted(uint32_t change_id, bool success) override;
  void RequestClose(uint64_t window_id) override;
  void GetWindowManager(::ui::mojom::WindowManagerAssociatedRequest internal) override;
};
class  WindowTreeClientAsyncWaiter {
 public:
  explicit WindowTreeClientAsyncWaiter(WindowTreeClient* proxy);
  ~WindowTreeClientAsyncWaiter();
  void OnDragEnter(
      uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, uint32_t* out_supported_op_bitmask);
  void OnDragOver(
      uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, uint32_t* out_supported_op_bitmask);
  void OnCompleteDrop(
      uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, uint32_t* out_action_taken);

 private:
  WindowTreeClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WindowTreeClientAsyncWaiter);
};

class WindowTreeFactoryProxy;

template <typename ImplRefTraits>
class WindowTreeFactoryStub;

class WindowTreeFactoryRequestValidator;

class  WindowTreeFactory
    : public WindowTreeFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WindowTreeFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = WindowTreeFactoryStub<ImplRefTraits>;

  using RequestValidator_ = WindowTreeFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateWindowTreeMinVersion = 0,
  };
  virtual ~WindowTreeFactory() {}

  virtual void CreateWindowTree(WindowTreeRequest tree_request, WindowTreeClientPtr client) = 0;
};
class  WindowTreeFactoryInterceptorForTesting : public WindowTreeFactory {
  virtual WindowTreeFactory* GetForwardingInterface() = 0;
  void CreateWindowTree(WindowTreeRequest tree_request, WindowTreeClientPtr client) override;
};
class  WindowTreeFactoryAsyncWaiter {
 public:
  explicit WindowTreeFactoryAsyncWaiter(WindowTreeFactory* proxy);
  ~WindowTreeFactoryAsyncWaiter();

 private:
  WindowTreeFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WindowTreeFactoryAsyncWaiter);
};

class  WindowTreeProxy
    : public WindowTree {
 public:
  explicit WindowTreeProxy(mojo::MessageReceiverWithResponder* receiver);
  void NewWindow(uint32_t change_id, uint64_t window_id, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& properties) final;
  void NewTopLevelWindow(uint32_t change_id, uint64_t window_id, const base::flat_map<std::string, std::vector<uint8_t>>& properties) final;
  void DeleteWindow(uint32_t change_id, uint64_t window_id) final;
  void SetCapture(uint32_t change_id, uint64_t window_id) final;
  void ReleaseCapture(uint32_t change_id, uint64_t window_id) final;
  void StartPointerWatcher(bool want_moves) final;
  void StopPointerWatcher() final;
  void SetWindowBounds(uint32_t change_id, uint64_t window_id, const gfx::Rect& bounds, const base::Optional<viz::LocalSurfaceId>& local_surface_id) final;
  void SetWindowTransform(uint32_t change_id, uint64_t window_id, const gfx::Transform& transform) final;
  void SetClientArea(uint64_t window_id, const gfx::Insets& insets, const base::Optional<std::vector<gfx::Rect>>& additional_client_areas) final;
  void SetHitTestMask(uint64_t window_id, const base::Optional<gfx::Rect>& mask) final;
  void SetCanAcceptDrops(uint64_t window_id, bool accepts_drops) final;
  void SetWindowVisibility(uint32_t change_id, uint64_t window_id, bool visible) final;
  void SetWindowProperty(uint32_t change_id, uint64_t window_id, const std::string& name, const base::Optional<std::vector<uint8_t>>& value) final;
  void SetWindowOpacity(uint32_t change_id, uint64_t window_id, float opacity) final;
  void AttachCompositorFrameSink(uint64_t window_id, ::viz::mojom::CompositorFrameSinkRequest compositor_frame_sink, ::viz::mojom::CompositorFrameSinkClientPtr client) final;
  void AddWindow(uint32_t change_id, uint64_t parent, uint64_t child) final;
  void RemoveWindowFromParent(uint32_t change_id, uint64_t window_id) final;
  void AddTransientWindow(uint32_t change_id, uint64_t window_id, uint64_t transient_window_id) final;
  void RemoveTransientWindowFromParent(uint32_t change_id, uint64_t transient_window_id) final;
  void SetModalType(uint32_t change_id, uint64_t window_id, ui::ModalType type) final;
  void SetChildModalParent(uint32_t change_id, uint64_t window_id, uint64_t parent_window_id) final;
  void ReorderWindow(uint32_t change_id, uint64_t window_id, uint64_t relative_window_id, ::ui::mojom::OrderDirection direction) final;
  void GetWindowTree(uint64_t window_id, GetWindowTreeCallback callback) final;
  void Embed(uint64_t window_id, WindowTreeClientPtr client, uint32_t embed_flags, EmbedCallback callback) final;
  void ScheduleEmbed(WindowTreeClientPtr client, ScheduleEmbedCallback callback) final;
  void ScheduleEmbedForExistingClient(uint32_t window_id, ScheduleEmbedForExistingClientCallback callback) final;
  void EmbedUsingToken(uint64_t window_id, const base::UnguessableToken& token, uint32_t embed_flags, EmbedUsingTokenCallback callback) final;
  void SetFocus(uint32_t change_id, uint64_t window_id) final;
  void SetCanFocus(uint64_t window_id, bool can_focus) final;
  void SetCursor(uint32_t change_id, uint64_t window_id, ui::CursorData cursor) final;
  void SetWindowTextInputState(uint64_t window_id, ::ui::mojom::TextInputStatePtr state) final;
  void SetImeVisibility(uint64_t window_id, bool visible, ::ui::mojom::TextInputStatePtr state) final;
  void SetEventTargetingPolicy(uint64_t window_id, ::ui::mojom::EventTargetingPolicy policy) final;
  void OnWindowInputEventAck(uint32_t event_id, ::ui::mojom::EventResult result) final;
  void DeactivateWindow(uint64_t window_id) final;
  void StackAbove(uint32_t change_id, uint64_t above_id, uint64_t below_id) final;
  void StackAtTop(uint32_t change_id, uint64_t window_id) final;
  void PerformWmAction(uint64_t window_id, const std::string& action) final;
  void GetWindowManagerClient(::ui::mojom::WindowManagerClientAssociatedRequest internal) final;
  void GetCursorLocationMemory(GetCursorLocationMemoryCallback callback) final;
  void PerformWindowMove(uint32_t change_id, uint64_t window_id, ::ui::mojom::MoveLoopSource source, const gfx::Point& cursor) final;
  void CancelWindowMove(uint64_t window_id) final;
  void PerformDragDrop(uint32_t change_id, uint64_t source_window_id, const gfx::Point& screen_location, const base::flat_map<std::string, std::vector<uint8_t>>& drag_data, const SkBitmap& drag_image, const gfx::Vector2d& drag_image_offset, uint32_t drag_operation, ::ui::mojom::PointerKind source) final;
  void CancelDragDrop(uint64_t window_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  WindowTreeClientProxy
    : public WindowTreeClient {
 public:
  explicit WindowTreeClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnEmbed(::ui::mojom::WindowDataPtr root, WindowTreePtr tree, int64_t display_id, uint64_t focused_window, bool parent_drawn, const base::Optional<viz::LocalSurfaceId>& local_surface_id) final;
  void OnEmbedFromToken(const base::UnguessableToken& token, ::ui::mojom::WindowDataPtr root, int64_t display_id, const base::Optional<viz::LocalSurfaceId>& local_surface_id) final;
  void OnEmbeddedAppDisconnected(uint64_t window) final;
  void OnUnembed(uint64_t window) final;
  void OnCaptureChanged(uint64_t new_capture, uint64_t old_capture) final;
  void OnFrameSinkIdAllocated(uint64_t window, const viz::FrameSinkId& frame_sink_id) final;
  void OnTopLevelCreated(uint32_t change_id, ::ui::mojom::WindowDataPtr data, int64_t display_id, bool parent_drawn, const base::Optional<viz::LocalSurfaceId>& local_surface_id) final;
  void OnWindowBoundsChanged(uint64_t window, const gfx::Rect& old_bounds, const gfx::Rect& new_bounds, const base::Optional<viz::LocalSurfaceId>& local_surface_id) final;
  void OnWindowTransformChanged(uint64_t window, const gfx::Transform& old_transform, const gfx::Transform& new_transform) final;
  void OnClientAreaChanged(uint64_t window_id, const gfx::Insets& new_client_area, const std::vector<gfx::Rect>& new_additional_client_areas) final;
  void OnTransientWindowAdded(uint64_t window_id, uint64_t transient_window_id) final;
  void OnTransientWindowRemoved(uint64_t window_id, uint64_t transient_window_id) final;
  void OnWindowHierarchyChanged(uint64_t window, uint64_t old_parent, uint64_t new_parent, std::vector<::ui::mojom::WindowDataPtr> windows) final;
  void OnWindowReordered(uint64_t window_id, uint64_t relative_window_id, ::ui::mojom::OrderDirection direction) final;
  void OnWindowDeleted(uint64_t window) final;
  void OnWindowVisibilityChanged(uint64_t window, bool visible) final;
  void OnWindowOpacityChanged(uint64_t window, float old_opacity, float new_opacity) final;
  void OnWindowParentDrawnStateChanged(uint64_t window, bool drawn) final;
  void OnWindowSharedPropertyChanged(uint64_t window, const std::string& name, const base::Optional<std::vector<uint8_t>>& new_data) final;
  void OnWindowInputEvent(uint32_t event_id, uint64_t window, int64_t display_id, uint64_t display_root_window, const gfx::PointF& event_location_in_screen_pixel_layout, std::unique_ptr<ui::Event> event, bool matches_pointer_watcher) final;
  void OnPointerEventObserved(std::unique_ptr<ui::Event> event, uint64_t window_id, int64_t display_id) final;
  void OnWindowFocused(uint64_t focused_window_id) final;
  void OnWindowCursorChanged(uint64_t window_id, ui::CursorData cursor) final;
  void OnWindowSurfaceChanged(uint64_t window_id, const viz::SurfaceInfo& surface_info) final;
  void OnDragDropStart(const base::flat_map<std::string, std::vector<uint8_t>>& drag_data) final;
  void OnDragEnter(uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, OnDragEnterCallback callback) final;
  void OnDragOver(uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, OnDragOverCallback callback) final;
  void OnDragLeave(uint64_t window) final;
  void OnCompleteDrop(uint64_t window, uint32_t key_state, const gfx::Point& screen_position, uint32_t effect_bitmask, OnCompleteDropCallback callback) final;
  void OnPerformDragDropCompleted(uint32_t change_id, bool success, uint32_t action_taken) final;
  void OnDragDropDone() final;
  void OnChangeCompleted(uint32_t change_id, bool success) final;
  void RequestClose(uint64_t window_id) final;
  void GetWindowManager(::ui::mojom::WindowManagerAssociatedRequest internal) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  WindowTreeFactoryProxy
    : public WindowTreeFactory {
 public:
  explicit WindowTreeFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateWindowTree(WindowTreeRequest tree_request, WindowTreeClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  WindowTreeStubDispatch {
 public:
  static bool Accept(WindowTree* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WindowTree* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WindowTree>>
class WindowTreeStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WindowTreeStub() {}
  ~WindowTreeStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowTreeStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowTreeStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WindowTreeClientStubDispatch {
 public:
  static bool Accept(WindowTreeClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WindowTreeClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WindowTreeClient>>
class WindowTreeClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WindowTreeClientStub() {}
  ~WindowTreeClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowTreeClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowTreeClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WindowTreeFactoryStubDispatch {
 public:
  static bool Accept(WindowTreeFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WindowTreeFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WindowTreeFactory>>
class WindowTreeFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WindowTreeFactoryStub() {}
  ~WindowTreeFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowTreeFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WindowTreeFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WindowTreeRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  WindowTreeClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  WindowTreeFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  WindowTreeResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  WindowTreeClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_MOJOM_H_