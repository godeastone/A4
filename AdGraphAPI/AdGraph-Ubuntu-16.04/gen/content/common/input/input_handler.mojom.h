// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_INPUT_INPUT_HANDLER_MOJOM_H_
#define CONTENT_COMMON_INPUT_INPUT_HANDLER_MOJOM_H_

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
#include "content/common/input/input_handler.mojom-shared.h"
#include "content/common/input/synchronous_compositor.mojom.h"
#include "content/common/native_types.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "services/ui/public/interfaces/ime/ime.mojom.h"
#include "third_party/blink/public/web/selection_menu_behavior.mojom.h"
#include "ui/events/mojo/event.mojom.h"
#include "ui/events/mojo/event_constants.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/range/mojo/range.mojom.h"
#include "ui/latency/mojo/latency_info.mojom.h"
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
#include "cc/input/touch_action.h"
#include "content/common/edit_command.h"
#include "content/common/frame_owner_properties.h"
#include "content/common/frame_replication_state.h"
#include "content/common/input/input_event.h"
#include "content/common/input/synthetic_pinch_gesture_params.h"
#include "content/common/input/synthetic_pointer_action_list_params.h"
#include "content/common/input/synthetic_smooth_drag_gesture_params.h"
#include "content/common/input/synthetic_smooth_scroll_gesture_params.h"
#include "content/common/input/synthetic_tap_gesture_params.h"
#include "content/common/visual_properties.h"
#include "content/public/common/input_event_ack_source.h"
#include "content/public/common/input_event_ack_state.h"
#include "content/public/common/renderer_preferences.h"
#include "content/public/common/web_preferences.h"
#include "net/base/network_change_notifier.h"
#include "third_party/blink/public/platform/web_gesture_device.h"
#include "third_party/blink/public/platform/web_gesture_event.h"
#include "third_party/blink/public/platform/web_input_event.h"
#include "third_party/blink/public/platform/web_mouse_wheel_event.h"
#include "third_party/blink/public/platform/web_pointer_properties.h"
#include "third_party/blink/public/platform/web_touch_point.h"
#include "third_party/blink/public/web/web_popup_type.h"
#include "ui/events/blink/did_overscroll_params.h"
#include "ui/events/blink/web_input_event_traits.h"
#include "ui/latency/ipc/latency_info_param_traits.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class WidgetInputHandlerHost;
using WidgetInputHandlerHostPtr = mojo::InterfacePtr<WidgetInputHandlerHost>;
using WidgetInputHandlerHostPtrInfo = mojo::InterfacePtrInfo<WidgetInputHandlerHost>;
using ThreadSafeWidgetInputHandlerHostPtr =
    mojo::ThreadSafeInterfacePtr<WidgetInputHandlerHost>;
using WidgetInputHandlerHostRequest = mojo::InterfaceRequest<WidgetInputHandlerHost>;
using WidgetInputHandlerHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<WidgetInputHandlerHost>;
using ThreadSafeWidgetInputHandlerHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WidgetInputHandlerHost>;
using WidgetInputHandlerHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WidgetInputHandlerHost>;
using WidgetInputHandlerHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WidgetInputHandlerHost>;

class WidgetInputHandler;
using WidgetInputHandlerPtr = mojo::InterfacePtr<WidgetInputHandler>;
using WidgetInputHandlerPtrInfo = mojo::InterfacePtrInfo<WidgetInputHandler>;
using ThreadSafeWidgetInputHandlerPtr =
    mojo::ThreadSafeInterfacePtr<WidgetInputHandler>;
using WidgetInputHandlerRequest = mojo::InterfaceRequest<WidgetInputHandler>;
using WidgetInputHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<WidgetInputHandler>;
using ThreadSafeWidgetInputHandlerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WidgetInputHandler>;
using WidgetInputHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WidgetInputHandler>;
using WidgetInputHandlerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WidgetInputHandler>;

class FrameInputHandler;
using FrameInputHandlerPtr = mojo::InterfacePtr<FrameInputHandler>;
using FrameInputHandlerPtrInfo = mojo::InterfacePtrInfo<FrameInputHandler>;
using ThreadSafeFrameInputHandlerPtr =
    mojo::ThreadSafeInterfacePtr<FrameInputHandler>;
using FrameInputHandlerRequest = mojo::InterfaceRequest<FrameInputHandler>;
using FrameInputHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<FrameInputHandler>;
using ThreadSafeFrameInputHandlerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FrameInputHandler>;
using FrameInputHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FrameInputHandler>;
using FrameInputHandlerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FrameInputHandler>;

class KeyData;
using KeyDataPtr = mojo::StructPtr<KeyData>;

class PointerData;
using PointerDataPtr = mojo::StructPtr<PointerData>;

class WheelData;
using WheelDataPtr = mojo::StructPtr<WheelData>;

class MouseData;
using MouseDataPtr = mojo::StructPtr<MouseData>;

class ScrollUpdate;
using ScrollUpdatePtr = mojo::InlinedStructPtr<ScrollUpdate>;

class ScrollData;
using ScrollDataPtr = mojo::StructPtr<ScrollData>;

class PinchData;
using PinchDataPtr = mojo::InlinedStructPtr<PinchData>;

class FlingData;
using FlingDataPtr = mojo::InlinedStructPtr<FlingData>;

class TapData;
using TapDataPtr = mojo::InlinedStructPtr<TapData>;

class GestureData;
using GestureDataPtr = mojo::StructPtr<GestureData>;

class TouchPoint;
using TouchPointPtr = mojo::StructPtr<TouchPoint>;

class TouchData;
using TouchDataPtr = mojo::StructPtr<TouchData>;

class Event;
using EventPtr = mojo::StructPtr<Event>;

class TouchActionOptional;
using TouchActionOptionalPtr = mojo::InlinedStructPtr<TouchActionOptional>;


class WidgetInputHandlerHostProxy;

template <typename ImplRefTraits>
class WidgetInputHandlerHostStub;

class WidgetInputHandlerHostRequestValidator;

class CONTENT_EXPORT WidgetInputHandlerHost
    : public WidgetInputHandlerHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WidgetInputHandlerHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = WidgetInputHandlerHostStub<ImplRefTraits>;

  using RequestValidator_ = WidgetInputHandlerHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCancelTouchTimeoutMinVersion = 0,
    kSetWhiteListedTouchActionMinVersion = 0,
    kDidOverscrollMinVersion = 0,
    kDidStopFlingingMinVersion = 0,
    kDidStartScrollingViewportMinVersion = 0,
    kImeCancelCompositionMinVersion = 0,
    kImeCompositionRangeChangedMinVersion = 0,
  };
  virtual ~WidgetInputHandlerHost() {}

  virtual void CancelTouchTimeout() = 0;

  virtual void SetWhiteListedTouchAction(cc::TouchAction touch_action, uint32_t unique_touch_event_id, content::InputEventAckState state) = 0;

  virtual void DidOverscroll(const ui::DidOverscrollParams& params) = 0;

  virtual void DidStopFlinging() = 0;

  virtual void DidStartScrollingViewport() = 0;

  virtual void ImeCancelComposition() = 0;

  virtual void ImeCompositionRangeChanged(const gfx::Range& range, const std::vector<gfx::Rect>& bounds) = 0;
};
class CONTENT_EXPORT WidgetInputHandlerHostInterceptorForTesting : public WidgetInputHandlerHost {
  virtual WidgetInputHandlerHost* GetForwardingInterface() = 0;
  void CancelTouchTimeout() override;
  void SetWhiteListedTouchAction(cc::TouchAction touch_action, uint32_t unique_touch_event_id, content::InputEventAckState state) override;
  void DidOverscroll(const ui::DidOverscrollParams& params) override;
  void DidStopFlinging() override;
  void DidStartScrollingViewport() override;
  void ImeCancelComposition() override;
  void ImeCompositionRangeChanged(const gfx::Range& range, const std::vector<gfx::Rect>& bounds) override;
};
class CONTENT_EXPORT WidgetInputHandlerHostAsyncWaiter {
 public:
  explicit WidgetInputHandlerHostAsyncWaiter(WidgetInputHandlerHost* proxy);
  ~WidgetInputHandlerHostAsyncWaiter();

 private:
  WidgetInputHandlerHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WidgetInputHandlerHostAsyncWaiter);
};

class WidgetInputHandlerProxy;

template <typename ImplRefTraits>
class WidgetInputHandlerStub;

class WidgetInputHandlerRequestValidator;
class WidgetInputHandlerResponseValidator;

class CONTENT_EXPORT WidgetInputHandler
    : public WidgetInputHandlerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WidgetInputHandlerProxy;

  template <typename ImplRefTraits>
  using Stub_ = WidgetInputHandlerStub<ImplRefTraits>;

  using RequestValidator_ = WidgetInputHandlerRequestValidator;
  using ResponseValidator_ = WidgetInputHandlerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetFocusMinVersion = 0,
    kMouseCaptureLostMinVersion = 0,
    kSetEditCommandsForNextKeyEventMinVersion = 0,
    kCursorVisibilityChangedMinVersion = 0,
    kImeSetCompositionMinVersion = 0,
    kImeCommitTextMinVersion = 0,
    kImeFinishComposingTextMinVersion = 0,
    kRequestTextInputStateUpdateMinVersion = 0,
    kRequestCompositionUpdatesMinVersion = 0,
    kDispatchEventMinVersion = 0,
    kDispatchNonBlockingEventMinVersion = 0,
    kAttachSynchronousCompositorMinVersion = 0,
  };
  virtual ~WidgetInputHandler() {}

  virtual void SetFocus(bool focused) = 0;

  virtual void MouseCaptureLost() = 0;

  virtual void SetEditCommandsForNextKeyEvent(const std::vector<content::EditCommand>& commands) = 0;

  virtual void CursorVisibilityChanged(bool visible) = 0;

  virtual void ImeSetComposition(const base::string16& text, const std::vector<ui::ImeTextSpan>& ime_text_spans, const gfx::Range& range, int32_t start, int32_t end) = 0;

  virtual void ImeCommitText(const base::string16& text, const std::vector<ui::ImeTextSpan>& ime_text_spans, const gfx::Range& range, int32_t relative_cursor_position) = 0;

  virtual void ImeFinishComposingText(bool keep_selection) = 0;

  virtual void RequestTextInputStateUpdate() = 0;

  virtual void RequestCompositionUpdates(bool immediate_request, bool monitor_request) = 0;


  using DispatchEventCallback = base::OnceCallback<void(content::InputEventAckSource, const ui::LatencyInfo&, content::InputEventAckState, const base::Optional<ui::DidOverscrollParams>&, const base::Optional<cc::TouchAction>&)>;
  virtual void DispatchEvent(std::unique_ptr<content::InputEvent> event, DispatchEventCallback callback) = 0;

  virtual void DispatchNonBlockingEvent(std::unique_ptr<content::InputEvent> event) = 0;

  virtual void AttachSynchronousCompositor(::content::mojom::SynchronousCompositorControlHostPtr control_host, ::content::mojom::SynchronousCompositorHostAssociatedPtrInfo host, ::content::mojom::SynchronousCompositorAssociatedRequest compositor_request) = 0;
};
class CONTENT_EXPORT WidgetInputHandlerInterceptorForTesting : public WidgetInputHandler {
  virtual WidgetInputHandler* GetForwardingInterface() = 0;
  void SetFocus(bool focused) override;
  void MouseCaptureLost() override;
  void SetEditCommandsForNextKeyEvent(const std::vector<content::EditCommand>& commands) override;
  void CursorVisibilityChanged(bool visible) override;
  void ImeSetComposition(const base::string16& text, const std::vector<ui::ImeTextSpan>& ime_text_spans, const gfx::Range& range, int32_t start, int32_t end) override;
  void ImeCommitText(const base::string16& text, const std::vector<ui::ImeTextSpan>& ime_text_spans, const gfx::Range& range, int32_t relative_cursor_position) override;
  void ImeFinishComposingText(bool keep_selection) override;
  void RequestTextInputStateUpdate() override;
  void RequestCompositionUpdates(bool immediate_request, bool monitor_request) override;
  void DispatchEvent(std::unique_ptr<content::InputEvent> event, DispatchEventCallback callback) override;
  void DispatchNonBlockingEvent(std::unique_ptr<content::InputEvent> event) override;
  void AttachSynchronousCompositor(::content::mojom::SynchronousCompositorControlHostPtr control_host, ::content::mojom::SynchronousCompositorHostAssociatedPtrInfo host, ::content::mojom::SynchronousCompositorAssociatedRequest compositor_request) override;
};
class CONTENT_EXPORT WidgetInputHandlerAsyncWaiter {
 public:
  explicit WidgetInputHandlerAsyncWaiter(WidgetInputHandler* proxy);
  ~WidgetInputHandlerAsyncWaiter();
  void DispatchEvent(
      std::unique_ptr<content::InputEvent> event, content::InputEventAckSource* out_source, ui::LatencyInfo* out_updated_latency, content::InputEventAckState* out_state, base::Optional<ui::DidOverscrollParams>* out_overscroll, base::Optional<cc::TouchAction>* out_touch_action);

 private:
  WidgetInputHandler* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WidgetInputHandlerAsyncWaiter);
};

class FrameInputHandlerProxy;

template <typename ImplRefTraits>
class FrameInputHandlerStub;

class FrameInputHandlerRequestValidator;

class CONTENT_EXPORT FrameInputHandler
    : public FrameInputHandlerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = FrameInputHandlerProxy;

  template <typename ImplRefTraits>
  using Stub_ = FrameInputHandlerStub<ImplRefTraits>;

  using RequestValidator_ = FrameInputHandlerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetCompositionFromExistingTextMinVersion = 0,
    kExtendSelectionAndDeleteMinVersion = 0,
    kDeleteSurroundingTextMinVersion = 0,
    kDeleteSurroundingTextInCodePointsMinVersion = 0,
    kSetEditableSelectionOffsetsMinVersion = 0,
    kExecuteEditCommandMinVersion = 0,
    kUndoMinVersion = 0,
    kRedoMinVersion = 0,
    kCutMinVersion = 0,
    kCopyMinVersion = 0,
    kCopyToFindPboardMinVersion = 0,
    kPasteMinVersion = 0,
    kPasteAndMatchStyleMinVersion = 0,
    kDeleteMinVersion = 0,
    kSelectAllMinVersion = 0,
    kCollapseSelectionMinVersion = 0,
    kReplaceMinVersion = 0,
    kReplaceMisspellingMinVersion = 0,
    kSelectRangeMinVersion = 0,
    kAdjustSelectionByCharacterOffsetMinVersion = 0,
    kMoveRangeSelectionExtentMinVersion = 0,
    kScrollFocusedEditableNodeIntoRectMinVersion = 0,
    kMoveCaretMinVersion = 0,
    kGetWidgetInputHandlerMinVersion = 0,
  };
  virtual ~FrameInputHandler() {}

  virtual void SetCompositionFromExistingText(int32_t start, int32_t end, const std::vector<ui::ImeTextSpan>& ime_text_spans) = 0;

  virtual void ExtendSelectionAndDelete(int32_t before, int32_t after) = 0;

  virtual void DeleteSurroundingText(int32_t before, int32_t after) = 0;

  virtual void DeleteSurroundingTextInCodePoints(int32_t before, int32_t after) = 0;

  virtual void SetEditableSelectionOffsets(int32_t start, int32_t end) = 0;

  virtual void ExecuteEditCommand(const std::string& command, const base::Optional<base::string16>& value) = 0;

  virtual void Undo() = 0;

  virtual void Redo() = 0;

  virtual void Cut() = 0;

  virtual void Copy() = 0;

  virtual void CopyToFindPboard() = 0;

  virtual void Paste() = 0;

  virtual void PasteAndMatchStyle() = 0;

  virtual void Delete() = 0;

  virtual void SelectAll() = 0;

  virtual void CollapseSelection() = 0;

  virtual void Replace(const base::string16& word) = 0;

  virtual void ReplaceMisspelling(const base::string16& word) = 0;

  virtual void SelectRange(const gfx::Point& base, const gfx::Point& extent) = 0;

  virtual void AdjustSelectionByCharacterOffset(int32_t start, int32_t end, ::blink::mojom::SelectionMenuBehavior behavior) = 0;

  virtual void MoveRangeSelectionExtent(const gfx::Point& extent) = 0;

  virtual void ScrollFocusedEditableNodeIntoRect(const gfx::Rect& rect) = 0;

  virtual void MoveCaret(const gfx::Point& point) = 0;

  virtual void GetWidgetInputHandler(WidgetInputHandlerAssociatedRequest interface_request, WidgetInputHandlerHostPtr host) = 0;
};
class CONTENT_EXPORT FrameInputHandlerInterceptorForTesting : public FrameInputHandler {
  virtual FrameInputHandler* GetForwardingInterface() = 0;
  void SetCompositionFromExistingText(int32_t start, int32_t end, const std::vector<ui::ImeTextSpan>& ime_text_spans) override;
  void ExtendSelectionAndDelete(int32_t before, int32_t after) override;
  void DeleteSurroundingText(int32_t before, int32_t after) override;
  void DeleteSurroundingTextInCodePoints(int32_t before, int32_t after) override;
  void SetEditableSelectionOffsets(int32_t start, int32_t end) override;
  void ExecuteEditCommand(const std::string& command, const base::Optional<base::string16>& value) override;
  void Undo() override;
  void Redo() override;
  void Cut() override;
  void Copy() override;
  void CopyToFindPboard() override;
  void Paste() override;
  void PasteAndMatchStyle() override;
  void Delete() override;
  void SelectAll() override;
  void CollapseSelection() override;
  void Replace(const base::string16& word) override;
  void ReplaceMisspelling(const base::string16& word) override;
  void SelectRange(const gfx::Point& base, const gfx::Point& extent) override;
  void AdjustSelectionByCharacterOffset(int32_t start, int32_t end, ::blink::mojom::SelectionMenuBehavior behavior) override;
  void MoveRangeSelectionExtent(const gfx::Point& extent) override;
  void ScrollFocusedEditableNodeIntoRect(const gfx::Rect& rect) override;
  void MoveCaret(const gfx::Point& point) override;
  void GetWidgetInputHandler(WidgetInputHandlerAssociatedRequest interface_request, WidgetInputHandlerHostPtr host) override;
};
class CONTENT_EXPORT FrameInputHandlerAsyncWaiter {
 public:
  explicit FrameInputHandlerAsyncWaiter(FrameInputHandler* proxy);
  ~FrameInputHandlerAsyncWaiter();

 private:
  FrameInputHandler* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FrameInputHandlerAsyncWaiter);
};

class CONTENT_EXPORT WidgetInputHandlerHostProxy
    : public WidgetInputHandlerHost {
 public:
  explicit WidgetInputHandlerHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void CancelTouchTimeout() final;
  void SetWhiteListedTouchAction(cc::TouchAction touch_action, uint32_t unique_touch_event_id, content::InputEventAckState state) final;
  void DidOverscroll(const ui::DidOverscrollParams& params) final;
  void DidStopFlinging() final;
  void DidStartScrollingViewport() final;
  void ImeCancelComposition() final;
  void ImeCompositionRangeChanged(const gfx::Range& range, const std::vector<gfx::Rect>& bounds) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT WidgetInputHandlerProxy
    : public WidgetInputHandler {
 public:
  explicit WidgetInputHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetFocus(bool focused) final;
  void MouseCaptureLost() final;
  void SetEditCommandsForNextKeyEvent(const std::vector<content::EditCommand>& commands) final;
  void CursorVisibilityChanged(bool visible) final;
  void ImeSetComposition(const base::string16& text, const std::vector<ui::ImeTextSpan>& ime_text_spans, const gfx::Range& range, int32_t start, int32_t end) final;
  void ImeCommitText(const base::string16& text, const std::vector<ui::ImeTextSpan>& ime_text_spans, const gfx::Range& range, int32_t relative_cursor_position) final;
  void ImeFinishComposingText(bool keep_selection) final;
  void RequestTextInputStateUpdate() final;
  void RequestCompositionUpdates(bool immediate_request, bool monitor_request) final;
  void DispatchEvent(std::unique_ptr<content::InputEvent> event, DispatchEventCallback callback) final;
  void DispatchNonBlockingEvent(std::unique_ptr<content::InputEvent> event) final;
  void AttachSynchronousCompositor(::content::mojom::SynchronousCompositorControlHostPtr control_host, ::content::mojom::SynchronousCompositorHostAssociatedPtrInfo host, ::content::mojom::SynchronousCompositorAssociatedRequest compositor_request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT FrameInputHandlerProxy
    : public FrameInputHandler {
 public:
  explicit FrameInputHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetCompositionFromExistingText(int32_t start, int32_t end, const std::vector<ui::ImeTextSpan>& ime_text_spans) final;
  void ExtendSelectionAndDelete(int32_t before, int32_t after) final;
  void DeleteSurroundingText(int32_t before, int32_t after) final;
  void DeleteSurroundingTextInCodePoints(int32_t before, int32_t after) final;
  void SetEditableSelectionOffsets(int32_t start, int32_t end) final;
  void ExecuteEditCommand(const std::string& command, const base::Optional<base::string16>& value) final;
  void Undo() final;
  void Redo() final;
  void Cut() final;
  void Copy() final;
  void CopyToFindPboard() final;
  void Paste() final;
  void PasteAndMatchStyle() final;
  void Delete() final;
  void SelectAll() final;
  void CollapseSelection() final;
  void Replace(const base::string16& word) final;
  void ReplaceMisspelling(const base::string16& word) final;
  void SelectRange(const gfx::Point& base, const gfx::Point& extent) final;
  void AdjustSelectionByCharacterOffset(int32_t start, int32_t end, ::blink::mojom::SelectionMenuBehavior behavior) final;
  void MoveRangeSelectionExtent(const gfx::Point& extent) final;
  void ScrollFocusedEditableNodeIntoRect(const gfx::Rect& rect) final;
  void MoveCaret(const gfx::Point& point) final;
  void GetWidgetInputHandler(WidgetInputHandlerAssociatedRequest interface_request, WidgetInputHandlerHostPtr host) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT WidgetInputHandlerHostStubDispatch {
 public:
  static bool Accept(WidgetInputHandlerHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WidgetInputHandlerHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WidgetInputHandlerHost>>
class WidgetInputHandlerHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WidgetInputHandlerHostStub() {}
  ~WidgetInputHandlerHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WidgetInputHandlerHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WidgetInputHandlerHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT WidgetInputHandlerStubDispatch {
 public:
  static bool Accept(WidgetInputHandler* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WidgetInputHandler* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WidgetInputHandler>>
class WidgetInputHandlerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WidgetInputHandlerStub() {}
  ~WidgetInputHandlerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WidgetInputHandlerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WidgetInputHandlerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT FrameInputHandlerStubDispatch {
 public:
  static bool Accept(FrameInputHandler* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FrameInputHandler* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FrameInputHandler>>
class FrameInputHandlerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FrameInputHandlerStub() {}
  ~FrameInputHandlerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameInputHandlerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameInputHandlerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT WidgetInputHandlerHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT WidgetInputHandlerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT FrameInputHandlerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT WidgetInputHandlerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class CONTENT_EXPORT ScrollUpdate {
 public:
  using DataView = ScrollUpdateDataView;
  using Data_ = internal::ScrollUpdate_Data;

  template <typename... Args>
  static ScrollUpdatePtr New(Args&&... args) {
    return ScrollUpdatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ScrollUpdatePtr From(const U& u) {
    return mojo::TypeConverter<ScrollUpdatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ScrollUpdate>::Convert(*this);
  }


  ScrollUpdate();

  ScrollUpdate(
      float velocity_x,
      float velocity_y,
      bool previous_update_in_sequence_prevented);

  ~ScrollUpdate();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ScrollUpdatePtr>
  ScrollUpdatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ScrollUpdate>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ScrollUpdate::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ScrollUpdate::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ScrollUpdate_UnserializedMessageContext<
            UserType, ScrollUpdate::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ScrollUpdate::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ScrollUpdate::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ScrollUpdate_UnserializedMessageContext<
            UserType, ScrollUpdate::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ScrollUpdate::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  float velocity_x;
  float velocity_y;
  bool previous_update_in_sequence_prevented;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};



class CONTENT_EXPORT PinchData {
 public:
  using DataView = PinchDataDataView;
  using Data_ = internal::PinchData_Data;

  template <typename... Args>
  static PinchDataPtr New(Args&&... args) {
    return PinchDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PinchDataPtr From(const U& u) {
    return mojo::TypeConverter<PinchDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PinchData>::Convert(*this);
  }


  PinchData();

  PinchData(
      bool zoom_disabled,
      float scale);

  ~PinchData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PinchDataPtr>
  PinchDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PinchData>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PinchData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PinchData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PinchData_UnserializedMessageContext<
            UserType, PinchData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PinchData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PinchData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PinchData_UnserializedMessageContext<
            UserType, PinchData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PinchData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool zoom_disabled;
  float scale;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT FlingData {
 public:
  using DataView = FlingDataDataView;
  using Data_ = internal::FlingData_Data;

  template <typename... Args>
  static FlingDataPtr New(Args&&... args) {
    return FlingDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FlingDataPtr From(const U& u) {
    return mojo::TypeConverter<FlingDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FlingData>::Convert(*this);
  }


  FlingData();

  FlingData(
      float velocity_x,
      float velocity_y,
      bool target_viewport,
      bool prevent_boosting);

  ~FlingData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FlingDataPtr>
  FlingDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FlingData>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FlingData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FlingData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FlingData_UnserializedMessageContext<
            UserType, FlingData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FlingData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FlingData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FlingData_UnserializedMessageContext<
            UserType, FlingData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FlingData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  float velocity_x;
  float velocity_y;
  bool target_viewport;
  bool prevent_boosting;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT TapData {
 public:
  using DataView = TapDataDataView;
  using Data_ = internal::TapData_Data;

  template <typename... Args>
  static TapDataPtr New(Args&&... args) {
    return TapDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TapDataPtr From(const U& u) {
    return mojo::TypeConverter<TapDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TapData>::Convert(*this);
  }


  TapData();

  explicit TapData(
      int32_t tap_count);

  ~TapData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TapDataPtr>
  TapDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TapData>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TapData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TapData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TapData_UnserializedMessageContext<
            UserType, TapData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TapData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TapData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TapData_UnserializedMessageContext<
            UserType, TapData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TapData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t tap_count;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class CONTENT_EXPORT TouchActionOptional {
 public:
  using DataView = TouchActionOptionalDataView;
  using Data_ = internal::TouchActionOptional_Data;

  template <typename... Args>
  static TouchActionOptionalPtr New(Args&&... args) {
    return TouchActionOptionalPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TouchActionOptionalPtr From(const U& u) {
    return mojo::TypeConverter<TouchActionOptionalPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TouchActionOptional>::Convert(*this);
  }


  TouchActionOptional();

  explicit TouchActionOptional(
      cc::TouchAction touch_action);

  ~TouchActionOptional();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TouchActionOptionalPtr>
  TouchActionOptionalPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TouchActionOptional>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TouchActionOptional::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TouchActionOptional::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TouchActionOptional_UnserializedMessageContext<
            UserType, TouchActionOptional::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TouchActionOptional::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TouchActionOptional::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TouchActionOptional_UnserializedMessageContext<
            UserType, TouchActionOptional::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TouchActionOptional::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  cc::TouchAction touch_action;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




class CONTENT_EXPORT KeyData {
 public:
  using DataView = KeyDataDataView;
  using Data_ = internal::KeyData_Data;

  template <typename... Args>
  static KeyDataPtr New(Args&&... args) {
    return KeyDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static KeyDataPtr From(const U& u) {
    return mojo::TypeConverter<KeyDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, KeyData>::Convert(*this);
  }


  KeyData();

  KeyData(
      int32_t dom_key,
      int32_t dom_code,
      int32_t windows_key_code,
      int32_t native_key_code,
      bool is_system_key,
      bool is_browser_shortcut,
      const base::string16& text,
      const base::string16& unmodified_text);

  ~KeyData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = KeyDataPtr>
  KeyDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, KeyData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        KeyData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        KeyData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::KeyData_UnserializedMessageContext<
            UserType, KeyData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<KeyData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return KeyData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::KeyData_UnserializedMessageContext<
            UserType, KeyData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<KeyData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t dom_key;
  int32_t dom_code;
  int32_t windows_key_code;
  int32_t native_key_code;
  bool is_system_key;
  bool is_browser_shortcut;
  base::string16 text;
  base::string16 unmodified_text;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT PointerData {
 public:
  using DataView = PointerDataDataView;
  using Data_ = internal::PointerData_Data;

  template <typename... Args>
  static PointerDataPtr New(Args&&... args) {
    return PointerDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PointerDataPtr From(const U& u) {
    return mojo::TypeConverter<PointerDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PointerData>::Convert(*this);
  }


  PointerData();

  PointerData(
      int32_t pointer_id,
      float force,
      int32_t tilt_x,
      int32_t tilt_y,
      float tangential_pressure,
      int32_t twist,
      blink::WebPointerProperties::Button button,
      blink::WebPointerProperties::PointerType pointer_type,
      int32_t movement_x,
      int32_t movement_y,
      const gfx::PointF& widget_position,
      const gfx::PointF& screen_position,
      MouseDataPtr mouse_data);

  ~PointerData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PointerDataPtr>
  PointerDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PointerData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PointerData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PointerData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PointerData_UnserializedMessageContext<
            UserType, PointerData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PointerData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PointerData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PointerData_UnserializedMessageContext<
            UserType, PointerData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PointerData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t pointer_id;
  float force;
  int32_t tilt_x;
  int32_t tilt_y;
  float tangential_pressure;
  int32_t twist;
  blink::WebPointerProperties::Button button;
  blink::WebPointerProperties::PointerType pointer_type;
  int32_t movement_x;
  int32_t movement_y;
  gfx::PointF widget_position;
  gfx::PointF screen_position;
  MouseDataPtr mouse_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PointerData);
};


class CONTENT_EXPORT WheelData {
 public:
  using DataView = WheelDataDataView;
  using Data_ = internal::WheelData_Data;

  template <typename... Args>
  static WheelDataPtr New(Args&&... args) {
    return WheelDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WheelDataPtr From(const U& u) {
    return mojo::TypeConverter<WheelDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WheelData>::Convert(*this);
  }


  WheelData();

  WheelData(
      float delta_x,
      float delta_y,
      float wheel_ticks_x,
      float wheel_ticks_y,
      float acceleration_ratio_x,
      float acceleration_ratio_y,
      int32_t resending_plugin_id,
      uint8_t phase,
      uint8_t momentum_phase,
      bool scroll_by_page,
      bool has_precise_scrolling_deltas,
      blink::WebInputEvent::DispatchType cancelable);

  ~WheelData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WheelDataPtr>
  WheelDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WheelData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WheelData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WheelData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WheelData_UnserializedMessageContext<
            UserType, WheelData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WheelData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WheelData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WheelData_UnserializedMessageContext<
            UserType, WheelData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WheelData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  float delta_x;
  float delta_y;
  float wheel_ticks_x;
  float wheel_ticks_y;
  float acceleration_ratio_x;
  float acceleration_ratio_y;
  int32_t resending_plugin_id;
  uint8_t phase;
  uint8_t momentum_phase;
  bool scroll_by_page;
  bool has_precise_scrolling_deltas;
  blink::WebInputEvent::DispatchType cancelable;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT MouseData {
 public:
  using DataView = MouseDataDataView;
  using Data_ = internal::MouseData_Data;

  template <typename... Args>
  static MouseDataPtr New(Args&&... args) {
    return MouseDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MouseDataPtr From(const U& u) {
    return mojo::TypeConverter<MouseDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MouseData>::Convert(*this);
  }


  MouseData();

  MouseData(
      int32_t click_count,
      WheelDataPtr wheel_data);

  ~MouseData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MouseDataPtr>
  MouseDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MouseData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MouseData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MouseData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MouseData_UnserializedMessageContext<
            UserType, MouseData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MouseData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MouseData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MouseData_UnserializedMessageContext<
            UserType, MouseData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MouseData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t click_count;
  WheelDataPtr wheel_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MouseData);
};



class CONTENT_EXPORT ScrollData {
 public:
  using DataView = ScrollDataDataView;
  using Data_ = internal::ScrollData_Data;

  template <typename... Args>
  static ScrollDataPtr New(Args&&... args) {
    return ScrollDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ScrollDataPtr From(const U& u) {
    return mojo::TypeConverter<ScrollDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ScrollData>::Convert(*this);
  }


  ScrollData();

  ScrollData(
      float delta_x,
      float delta_y,
      blink::WebGestureEvent::ScrollUnits delta_units,
      bool target_viewport,
      blink::WebGestureEvent::InertialPhaseState inertial_phase,
      bool synthetic,
      int32_t pointer_count,
      ScrollUpdatePtr update_details);

  ~ScrollData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ScrollDataPtr>
  ScrollDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ScrollData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ScrollData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ScrollData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ScrollData_UnserializedMessageContext<
            UserType, ScrollData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ScrollData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ScrollData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ScrollData_UnserializedMessageContext<
            UserType, ScrollData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ScrollData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  float delta_x;
  float delta_y;
  blink::WebGestureEvent::ScrollUnits delta_units;
  bool target_viewport;
  blink::WebGestureEvent::InertialPhaseState inertial_phase;
  bool synthetic;
  int32_t pointer_count;
  ScrollUpdatePtr update_details;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ScrollData);
};





class CONTENT_EXPORT GestureData {
 public:
  using DataView = GestureDataDataView;
  using Data_ = internal::GestureData_Data;

  template <typename... Args>
  static GestureDataPtr New(Args&&... args) {
    return GestureDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GestureDataPtr From(const U& u) {
    return mojo::TypeConverter<GestureDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GestureData>::Convert(*this);
  }


  GestureData();

  GestureData(
      const gfx::PointF& screen_position,
      const gfx::PointF& widget_position,
      blink::WebGestureDevice source_device,
      bool is_source_touch_event_set_non_blocking,
      blink::WebPointerProperties::PointerType primary_pointer_type,
      int32_t unique_touch_event_id,
      int32_t resending_plugin_id,
      const base::Optional<gfx::Size>& contact_size,
      ScrollDataPtr scroll_data,
      PinchDataPtr pinch_data,
      TapDataPtr tap_data,
      FlingDataPtr fling_data);

  ~GestureData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GestureDataPtr>
  GestureDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GestureData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GestureData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GestureData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GestureData_UnserializedMessageContext<
            UserType, GestureData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GestureData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return GestureData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GestureData_UnserializedMessageContext<
            UserType, GestureData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GestureData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  gfx::PointF screen_position;
  gfx::PointF widget_position;
  blink::WebGestureDevice source_device;
  bool is_source_touch_event_set_non_blocking;
  blink::WebPointerProperties::PointerType primary_pointer_type;
  int32_t unique_touch_event_id;
  int32_t resending_plugin_id;
  base::Optional<gfx::Size> contact_size;
  ScrollDataPtr scroll_data;
  PinchDataPtr pinch_data;
  TapDataPtr tap_data;
  FlingDataPtr fling_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(GestureData);
};


class CONTENT_EXPORT TouchPoint {
 public:
  using DataView = TouchPointDataView;
  using Data_ = internal::TouchPoint_Data;

  template <typename... Args>
  static TouchPointPtr New(Args&&... args) {
    return TouchPointPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TouchPointPtr From(const U& u) {
    return mojo::TypeConverter<TouchPointPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TouchPoint>::Convert(*this);
  }


  TouchPoint();

  TouchPoint(
      blink::WebTouchPoint::State state,
      float radius_x,
      float radius_y,
      float rotation_angle,
      PointerDataPtr pointer_data);

  ~TouchPoint();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TouchPointPtr>
  TouchPointPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TouchPoint>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TouchPoint::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TouchPoint::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TouchPoint_UnserializedMessageContext<
            UserType, TouchPoint::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TouchPoint::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TouchPoint::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TouchPoint_UnserializedMessageContext<
            UserType, TouchPoint::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TouchPoint::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  blink::WebTouchPoint::State state;
  float radius_x;
  float radius_y;
  float rotation_angle;
  PointerDataPtr pointer_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(TouchPoint);
};


class CONTENT_EXPORT TouchData {
 public:
  using DataView = TouchDataDataView;
  using Data_ = internal::TouchData_Data;

  template <typename... Args>
  static TouchDataPtr New(Args&&... args) {
    return TouchDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TouchDataPtr From(const U& u) {
    return mojo::TypeConverter<TouchDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TouchData>::Convert(*this);
  }


  TouchData();

  TouchData(
      blink::WebInputEvent::DispatchType cancelable,
      bool moved_beyond_slop_region,
      bool touch_start_or_first_move,
      bool hovering,
      uint32_t unique_touch_event_id,
      std::vector<TouchPointPtr> touches);

  ~TouchData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TouchDataPtr>
  TouchDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TouchData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TouchData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TouchData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TouchData_UnserializedMessageContext<
            UserType, TouchData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TouchData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TouchData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TouchData_UnserializedMessageContext<
            UserType, TouchData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TouchData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  blink::WebInputEvent::DispatchType cancelable;
  bool moved_beyond_slop_region;
  bool touch_start_or_first_move;
  bool hovering;
  uint32_t unique_touch_event_id;
  std::vector<TouchPointPtr> touches;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(TouchData);
};


class CONTENT_EXPORT Event {
 public:
  using DataView = EventDataView;
  using Data_ = internal::Event_Data;

  template <typename... Args>
  static EventPtr New(Args&&... args) {
    return EventPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EventPtr From(const U& u) {
    return mojo::TypeConverter<EventPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Event>::Convert(*this);
  }


  Event();

  Event(
      blink::WebInputEvent::Type type,
      int32_t modifiers,
      base::TimeTicks timestamp,
      const ui::LatencyInfo& latency,
      KeyDataPtr key_data,
      PointerDataPtr pointer_data,
      GestureDataPtr gesture_data,
      TouchDataPtr touch_data);

  ~Event();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EventPtr>
  EventPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Event>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Event::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Event::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Event_UnserializedMessageContext<
            UserType, Event::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Event::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Event::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Event_UnserializedMessageContext<
            UserType, Event::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Event::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  blink::WebInputEvent::Type type;
  int32_t modifiers;
  base::TimeTicks timestamp;
  ui::LatencyInfo latency;
  KeyDataPtr key_data;
  PointerDataPtr pointer_data;
  GestureDataPtr gesture_data;
  TouchDataPtr touch_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Event);
};


template <typename StructPtrType>
KeyDataPtr KeyData::Clone() const {
  return New(
      mojo::Clone(dom_key),
      mojo::Clone(dom_code),
      mojo::Clone(windows_key_code),
      mojo::Clone(native_key_code),
      mojo::Clone(is_system_key),
      mojo::Clone(is_browser_shortcut),
      mojo::Clone(text),
      mojo::Clone(unmodified_text)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, KeyData>::value>::type*>
bool KeyData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->dom_key, other_struct.dom_key))
    return false;
  if (!mojo::Equals(this->dom_code, other_struct.dom_code))
    return false;
  if (!mojo::Equals(this->windows_key_code, other_struct.windows_key_code))
    return false;
  if (!mojo::Equals(this->native_key_code, other_struct.native_key_code))
    return false;
  if (!mojo::Equals(this->is_system_key, other_struct.is_system_key))
    return false;
  if (!mojo::Equals(this->is_browser_shortcut, other_struct.is_browser_shortcut))
    return false;
  if (!mojo::Equals(this->text, other_struct.text))
    return false;
  if (!mojo::Equals(this->unmodified_text, other_struct.unmodified_text))
    return false;
  return true;
}
template <typename StructPtrType>
PointerDataPtr PointerData::Clone() const {
  return New(
      mojo::Clone(pointer_id),
      mojo::Clone(force),
      mojo::Clone(tilt_x),
      mojo::Clone(tilt_y),
      mojo::Clone(tangential_pressure),
      mojo::Clone(twist),
      mojo::Clone(button),
      mojo::Clone(pointer_type),
      mojo::Clone(movement_x),
      mojo::Clone(movement_y),
      mojo::Clone(widget_position),
      mojo::Clone(screen_position),
      mojo::Clone(mouse_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PointerData>::value>::type*>
bool PointerData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pointer_id, other_struct.pointer_id))
    return false;
  if (!mojo::Equals(this->force, other_struct.force))
    return false;
  if (!mojo::Equals(this->tilt_x, other_struct.tilt_x))
    return false;
  if (!mojo::Equals(this->tilt_y, other_struct.tilt_y))
    return false;
  if (!mojo::Equals(this->tangential_pressure, other_struct.tangential_pressure))
    return false;
  if (!mojo::Equals(this->twist, other_struct.twist))
    return false;
  if (!mojo::Equals(this->button, other_struct.button))
    return false;
  if (!mojo::Equals(this->pointer_type, other_struct.pointer_type))
    return false;
  if (!mojo::Equals(this->movement_x, other_struct.movement_x))
    return false;
  if (!mojo::Equals(this->movement_y, other_struct.movement_y))
    return false;
  if (!mojo::Equals(this->widget_position, other_struct.widget_position))
    return false;
  if (!mojo::Equals(this->screen_position, other_struct.screen_position))
    return false;
  if (!mojo::Equals(this->mouse_data, other_struct.mouse_data))
    return false;
  return true;
}
template <typename StructPtrType>
WheelDataPtr WheelData::Clone() const {
  return New(
      mojo::Clone(delta_x),
      mojo::Clone(delta_y),
      mojo::Clone(wheel_ticks_x),
      mojo::Clone(wheel_ticks_y),
      mojo::Clone(acceleration_ratio_x),
      mojo::Clone(acceleration_ratio_y),
      mojo::Clone(resending_plugin_id),
      mojo::Clone(phase),
      mojo::Clone(momentum_phase),
      mojo::Clone(scroll_by_page),
      mojo::Clone(has_precise_scrolling_deltas),
      mojo::Clone(cancelable)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WheelData>::value>::type*>
bool WheelData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->delta_x, other_struct.delta_x))
    return false;
  if (!mojo::Equals(this->delta_y, other_struct.delta_y))
    return false;
  if (!mojo::Equals(this->wheel_ticks_x, other_struct.wheel_ticks_x))
    return false;
  if (!mojo::Equals(this->wheel_ticks_y, other_struct.wheel_ticks_y))
    return false;
  if (!mojo::Equals(this->acceleration_ratio_x, other_struct.acceleration_ratio_x))
    return false;
  if (!mojo::Equals(this->acceleration_ratio_y, other_struct.acceleration_ratio_y))
    return false;
  if (!mojo::Equals(this->resending_plugin_id, other_struct.resending_plugin_id))
    return false;
  if (!mojo::Equals(this->phase, other_struct.phase))
    return false;
  if (!mojo::Equals(this->momentum_phase, other_struct.momentum_phase))
    return false;
  if (!mojo::Equals(this->scroll_by_page, other_struct.scroll_by_page))
    return false;
  if (!mojo::Equals(this->has_precise_scrolling_deltas, other_struct.has_precise_scrolling_deltas))
    return false;
  if (!mojo::Equals(this->cancelable, other_struct.cancelable))
    return false;
  return true;
}
template <typename StructPtrType>
MouseDataPtr MouseData::Clone() const {
  return New(
      mojo::Clone(click_count),
      mojo::Clone(wheel_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MouseData>::value>::type*>
bool MouseData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->click_count, other_struct.click_count))
    return false;
  if (!mojo::Equals(this->wheel_data, other_struct.wheel_data))
    return false;
  return true;
}
template <typename StructPtrType>
ScrollUpdatePtr ScrollUpdate::Clone() const {
  return New(
      mojo::Clone(velocity_x),
      mojo::Clone(velocity_y),
      mojo::Clone(previous_update_in_sequence_prevented)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ScrollUpdate>::value>::type*>
bool ScrollUpdate::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->velocity_x, other_struct.velocity_x))
    return false;
  if (!mojo::Equals(this->velocity_y, other_struct.velocity_y))
    return false;
  if (!mojo::Equals(this->previous_update_in_sequence_prevented, other_struct.previous_update_in_sequence_prevented))
    return false;
  return true;
}
template <typename StructPtrType>
ScrollDataPtr ScrollData::Clone() const {
  return New(
      mojo::Clone(delta_x),
      mojo::Clone(delta_y),
      mojo::Clone(delta_units),
      mojo::Clone(target_viewport),
      mojo::Clone(inertial_phase),
      mojo::Clone(synthetic),
      mojo::Clone(pointer_count),
      mojo::Clone(update_details)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ScrollData>::value>::type*>
bool ScrollData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->delta_x, other_struct.delta_x))
    return false;
  if (!mojo::Equals(this->delta_y, other_struct.delta_y))
    return false;
  if (!mojo::Equals(this->delta_units, other_struct.delta_units))
    return false;
  if (!mojo::Equals(this->target_viewport, other_struct.target_viewport))
    return false;
  if (!mojo::Equals(this->inertial_phase, other_struct.inertial_phase))
    return false;
  if (!mojo::Equals(this->synthetic, other_struct.synthetic))
    return false;
  if (!mojo::Equals(this->pointer_count, other_struct.pointer_count))
    return false;
  if (!mojo::Equals(this->update_details, other_struct.update_details))
    return false;
  return true;
}
template <typename StructPtrType>
PinchDataPtr PinchData::Clone() const {
  return New(
      mojo::Clone(zoom_disabled),
      mojo::Clone(scale)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PinchData>::value>::type*>
bool PinchData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->zoom_disabled, other_struct.zoom_disabled))
    return false;
  if (!mojo::Equals(this->scale, other_struct.scale))
    return false;
  return true;
}
template <typename StructPtrType>
FlingDataPtr FlingData::Clone() const {
  return New(
      mojo::Clone(velocity_x),
      mojo::Clone(velocity_y),
      mojo::Clone(target_viewport),
      mojo::Clone(prevent_boosting)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FlingData>::value>::type*>
bool FlingData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->velocity_x, other_struct.velocity_x))
    return false;
  if (!mojo::Equals(this->velocity_y, other_struct.velocity_y))
    return false;
  if (!mojo::Equals(this->target_viewport, other_struct.target_viewport))
    return false;
  if (!mojo::Equals(this->prevent_boosting, other_struct.prevent_boosting))
    return false;
  return true;
}
template <typename StructPtrType>
TapDataPtr TapData::Clone() const {
  return New(
      mojo::Clone(tap_count)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TapData>::value>::type*>
bool TapData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->tap_count, other_struct.tap_count))
    return false;
  return true;
}
template <typename StructPtrType>
GestureDataPtr GestureData::Clone() const {
  return New(
      mojo::Clone(screen_position),
      mojo::Clone(widget_position),
      mojo::Clone(source_device),
      mojo::Clone(is_source_touch_event_set_non_blocking),
      mojo::Clone(primary_pointer_type),
      mojo::Clone(unique_touch_event_id),
      mojo::Clone(resending_plugin_id),
      mojo::Clone(contact_size),
      mojo::Clone(scroll_data),
      mojo::Clone(pinch_data),
      mojo::Clone(tap_data),
      mojo::Clone(fling_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GestureData>::value>::type*>
bool GestureData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->screen_position, other_struct.screen_position))
    return false;
  if (!mojo::Equals(this->widget_position, other_struct.widget_position))
    return false;
  if (!mojo::Equals(this->source_device, other_struct.source_device))
    return false;
  if (!mojo::Equals(this->is_source_touch_event_set_non_blocking, other_struct.is_source_touch_event_set_non_blocking))
    return false;
  if (!mojo::Equals(this->primary_pointer_type, other_struct.primary_pointer_type))
    return false;
  if (!mojo::Equals(this->unique_touch_event_id, other_struct.unique_touch_event_id))
    return false;
  if (!mojo::Equals(this->resending_plugin_id, other_struct.resending_plugin_id))
    return false;
  if (!mojo::Equals(this->contact_size, other_struct.contact_size))
    return false;
  if (!mojo::Equals(this->scroll_data, other_struct.scroll_data))
    return false;
  if (!mojo::Equals(this->pinch_data, other_struct.pinch_data))
    return false;
  if (!mojo::Equals(this->tap_data, other_struct.tap_data))
    return false;
  if (!mojo::Equals(this->fling_data, other_struct.fling_data))
    return false;
  return true;
}
template <typename StructPtrType>
TouchPointPtr TouchPoint::Clone() const {
  return New(
      mojo::Clone(state),
      mojo::Clone(radius_x),
      mojo::Clone(radius_y),
      mojo::Clone(rotation_angle),
      mojo::Clone(pointer_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TouchPoint>::value>::type*>
bool TouchPoint::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->state, other_struct.state))
    return false;
  if (!mojo::Equals(this->radius_x, other_struct.radius_x))
    return false;
  if (!mojo::Equals(this->radius_y, other_struct.radius_y))
    return false;
  if (!mojo::Equals(this->rotation_angle, other_struct.rotation_angle))
    return false;
  if (!mojo::Equals(this->pointer_data, other_struct.pointer_data))
    return false;
  return true;
}
template <typename StructPtrType>
TouchDataPtr TouchData::Clone() const {
  return New(
      mojo::Clone(cancelable),
      mojo::Clone(moved_beyond_slop_region),
      mojo::Clone(touch_start_or_first_move),
      mojo::Clone(hovering),
      mojo::Clone(unique_touch_event_id),
      mojo::Clone(touches)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TouchData>::value>::type*>
bool TouchData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->cancelable, other_struct.cancelable))
    return false;
  if (!mojo::Equals(this->moved_beyond_slop_region, other_struct.moved_beyond_slop_region))
    return false;
  if (!mojo::Equals(this->touch_start_or_first_move, other_struct.touch_start_or_first_move))
    return false;
  if (!mojo::Equals(this->hovering, other_struct.hovering))
    return false;
  if (!mojo::Equals(this->unique_touch_event_id, other_struct.unique_touch_event_id))
    return false;
  if (!mojo::Equals(this->touches, other_struct.touches))
    return false;
  return true;
}
template <typename StructPtrType>
EventPtr Event::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(modifiers),
      mojo::Clone(timestamp),
      mojo::Clone(latency),
      mojo::Clone(key_data),
      mojo::Clone(pointer_data),
      mojo::Clone(gesture_data),
      mojo::Clone(touch_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Event>::value>::type*>
bool Event::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->modifiers, other_struct.modifiers))
    return false;
  if (!mojo::Equals(this->timestamp, other_struct.timestamp))
    return false;
  if (!mojo::Equals(this->latency, other_struct.latency))
    return false;
  if (!mojo::Equals(this->key_data, other_struct.key_data))
    return false;
  if (!mojo::Equals(this->pointer_data, other_struct.pointer_data))
    return false;
  if (!mojo::Equals(this->gesture_data, other_struct.gesture_data))
    return false;
  if (!mojo::Equals(this->touch_data, other_struct.touch_data))
    return false;
  return true;
}
template <typename StructPtrType>
TouchActionOptionalPtr TouchActionOptional::Clone() const {
  return New(
      mojo::Clone(touch_action)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TouchActionOptional>::value>::type*>
bool TouchActionOptional::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->touch_action, other_struct.touch_action))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::KeyData::DataView,
                                         ::content::mojom::KeyDataPtr> {
  static bool IsNull(const ::content::mojom::KeyDataPtr& input) { return !input; }
  static void SetToNull(::content::mojom::KeyDataPtr* output) { output->reset(); }

  static decltype(::content::mojom::KeyData::dom_key) dom_key(
      const ::content::mojom::KeyDataPtr& input) {
    return input->dom_key;
  }

  static decltype(::content::mojom::KeyData::dom_code) dom_code(
      const ::content::mojom::KeyDataPtr& input) {
    return input->dom_code;
  }

  static decltype(::content::mojom::KeyData::windows_key_code) windows_key_code(
      const ::content::mojom::KeyDataPtr& input) {
    return input->windows_key_code;
  }

  static decltype(::content::mojom::KeyData::native_key_code) native_key_code(
      const ::content::mojom::KeyDataPtr& input) {
    return input->native_key_code;
  }

  static decltype(::content::mojom::KeyData::is_system_key) is_system_key(
      const ::content::mojom::KeyDataPtr& input) {
    return input->is_system_key;
  }

  static decltype(::content::mojom::KeyData::is_browser_shortcut) is_browser_shortcut(
      const ::content::mojom::KeyDataPtr& input) {
    return input->is_browser_shortcut;
  }

  static const decltype(::content::mojom::KeyData::text)& text(
      const ::content::mojom::KeyDataPtr& input) {
    return input->text;
  }

  static const decltype(::content::mojom::KeyData::unmodified_text)& unmodified_text(
      const ::content::mojom::KeyDataPtr& input) {
    return input->unmodified_text;
  }

  static bool Read(::content::mojom::KeyData::DataView input, ::content::mojom::KeyDataPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::PointerData::DataView,
                                         ::content::mojom::PointerDataPtr> {
  static bool IsNull(const ::content::mojom::PointerDataPtr& input) { return !input; }
  static void SetToNull(::content::mojom::PointerDataPtr* output) { output->reset(); }

  static decltype(::content::mojom::PointerData::pointer_id) pointer_id(
      const ::content::mojom::PointerDataPtr& input) {
    return input->pointer_id;
  }

  static decltype(::content::mojom::PointerData::force) force(
      const ::content::mojom::PointerDataPtr& input) {
    return input->force;
  }

  static decltype(::content::mojom::PointerData::tilt_x) tilt_x(
      const ::content::mojom::PointerDataPtr& input) {
    return input->tilt_x;
  }

  static decltype(::content::mojom::PointerData::tilt_y) tilt_y(
      const ::content::mojom::PointerDataPtr& input) {
    return input->tilt_y;
  }

  static decltype(::content::mojom::PointerData::tangential_pressure) tangential_pressure(
      const ::content::mojom::PointerDataPtr& input) {
    return input->tangential_pressure;
  }

  static decltype(::content::mojom::PointerData::twist) twist(
      const ::content::mojom::PointerDataPtr& input) {
    return input->twist;
  }

  static decltype(::content::mojom::PointerData::button) button(
      const ::content::mojom::PointerDataPtr& input) {
    return input->button;
  }

  static decltype(::content::mojom::PointerData::pointer_type) pointer_type(
      const ::content::mojom::PointerDataPtr& input) {
    return input->pointer_type;
  }

  static decltype(::content::mojom::PointerData::movement_x) movement_x(
      const ::content::mojom::PointerDataPtr& input) {
    return input->movement_x;
  }

  static decltype(::content::mojom::PointerData::movement_y) movement_y(
      const ::content::mojom::PointerDataPtr& input) {
    return input->movement_y;
  }

  static const decltype(::content::mojom::PointerData::widget_position)& widget_position(
      const ::content::mojom::PointerDataPtr& input) {
    return input->widget_position;
  }

  static const decltype(::content::mojom::PointerData::screen_position)& screen_position(
      const ::content::mojom::PointerDataPtr& input) {
    return input->screen_position;
  }

  static const decltype(::content::mojom::PointerData::mouse_data)& mouse_data(
      const ::content::mojom::PointerDataPtr& input) {
    return input->mouse_data;
  }

  static bool Read(::content::mojom::PointerData::DataView input, ::content::mojom::PointerDataPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::WheelData::DataView,
                                         ::content::mojom::WheelDataPtr> {
  static bool IsNull(const ::content::mojom::WheelDataPtr& input) { return !input; }
  static void SetToNull(::content::mojom::WheelDataPtr* output) { output->reset(); }

  static decltype(::content::mojom::WheelData::delta_x) delta_x(
      const ::content::mojom::WheelDataPtr& input) {
    return input->delta_x;
  }

  static decltype(::content::mojom::WheelData::delta_y) delta_y(
      const ::content::mojom::WheelDataPtr& input) {
    return input->delta_y;
  }

  static decltype(::content::mojom::WheelData::wheel_ticks_x) wheel_ticks_x(
      const ::content::mojom::WheelDataPtr& input) {
    return input->wheel_ticks_x;
  }

  static decltype(::content::mojom::WheelData::wheel_ticks_y) wheel_ticks_y(
      const ::content::mojom::WheelDataPtr& input) {
    return input->wheel_ticks_y;
  }

  static decltype(::content::mojom::WheelData::acceleration_ratio_x) acceleration_ratio_x(
      const ::content::mojom::WheelDataPtr& input) {
    return input->acceleration_ratio_x;
  }

  static decltype(::content::mojom::WheelData::acceleration_ratio_y) acceleration_ratio_y(
      const ::content::mojom::WheelDataPtr& input) {
    return input->acceleration_ratio_y;
  }

  static decltype(::content::mojom::WheelData::resending_plugin_id) resending_plugin_id(
      const ::content::mojom::WheelDataPtr& input) {
    return input->resending_plugin_id;
  }

  static decltype(::content::mojom::WheelData::phase) phase(
      const ::content::mojom::WheelDataPtr& input) {
    return input->phase;
  }

  static decltype(::content::mojom::WheelData::momentum_phase) momentum_phase(
      const ::content::mojom::WheelDataPtr& input) {
    return input->momentum_phase;
  }

  static decltype(::content::mojom::WheelData::scroll_by_page) scroll_by_page(
      const ::content::mojom::WheelDataPtr& input) {
    return input->scroll_by_page;
  }

  static decltype(::content::mojom::WheelData::has_precise_scrolling_deltas) has_precise_scrolling_deltas(
      const ::content::mojom::WheelDataPtr& input) {
    return input->has_precise_scrolling_deltas;
  }

  static decltype(::content::mojom::WheelData::cancelable) cancelable(
      const ::content::mojom::WheelDataPtr& input) {
    return input->cancelable;
  }

  static bool Read(::content::mojom::WheelData::DataView input, ::content::mojom::WheelDataPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::MouseData::DataView,
                                         ::content::mojom::MouseDataPtr> {
  static bool IsNull(const ::content::mojom::MouseDataPtr& input) { return !input; }
  static void SetToNull(::content::mojom::MouseDataPtr* output) { output->reset(); }

  static decltype(::content::mojom::MouseData::click_count) click_count(
      const ::content::mojom::MouseDataPtr& input) {
    return input->click_count;
  }

  static const decltype(::content::mojom::MouseData::wheel_data)& wheel_data(
      const ::content::mojom::MouseDataPtr& input) {
    return input->wheel_data;
  }

  static bool Read(::content::mojom::MouseData::DataView input, ::content::mojom::MouseDataPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::ScrollUpdate::DataView,
                                         ::content::mojom::ScrollUpdatePtr> {
  static bool IsNull(const ::content::mojom::ScrollUpdatePtr& input) { return !input; }
  static void SetToNull(::content::mojom::ScrollUpdatePtr* output) { output->reset(); }

  static decltype(::content::mojom::ScrollUpdate::velocity_x) velocity_x(
      const ::content::mojom::ScrollUpdatePtr& input) {
    return input->velocity_x;
  }

  static decltype(::content::mojom::ScrollUpdate::velocity_y) velocity_y(
      const ::content::mojom::ScrollUpdatePtr& input) {
    return input->velocity_y;
  }

  static decltype(::content::mojom::ScrollUpdate::previous_update_in_sequence_prevented) previous_update_in_sequence_prevented(
      const ::content::mojom::ScrollUpdatePtr& input) {
    return input->previous_update_in_sequence_prevented;
  }

  static bool Read(::content::mojom::ScrollUpdate::DataView input, ::content::mojom::ScrollUpdatePtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::ScrollData::DataView,
                                         ::content::mojom::ScrollDataPtr> {
  static bool IsNull(const ::content::mojom::ScrollDataPtr& input) { return !input; }
  static void SetToNull(::content::mojom::ScrollDataPtr* output) { output->reset(); }

  static decltype(::content::mojom::ScrollData::delta_x) delta_x(
      const ::content::mojom::ScrollDataPtr& input) {
    return input->delta_x;
  }

  static decltype(::content::mojom::ScrollData::delta_y) delta_y(
      const ::content::mojom::ScrollDataPtr& input) {
    return input->delta_y;
  }

  static decltype(::content::mojom::ScrollData::delta_units) delta_units(
      const ::content::mojom::ScrollDataPtr& input) {
    return input->delta_units;
  }

  static decltype(::content::mojom::ScrollData::target_viewport) target_viewport(
      const ::content::mojom::ScrollDataPtr& input) {
    return input->target_viewport;
  }

  static decltype(::content::mojom::ScrollData::inertial_phase) inertial_phase(
      const ::content::mojom::ScrollDataPtr& input) {
    return input->inertial_phase;
  }

  static decltype(::content::mojom::ScrollData::synthetic) synthetic(
      const ::content::mojom::ScrollDataPtr& input) {
    return input->synthetic;
  }

  static decltype(::content::mojom::ScrollData::pointer_count) pointer_count(
      const ::content::mojom::ScrollDataPtr& input) {
    return input->pointer_count;
  }

  static const decltype(::content::mojom::ScrollData::update_details)& update_details(
      const ::content::mojom::ScrollDataPtr& input) {
    return input->update_details;
  }

  static bool Read(::content::mojom::ScrollData::DataView input, ::content::mojom::ScrollDataPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::PinchData::DataView,
                                         ::content::mojom::PinchDataPtr> {
  static bool IsNull(const ::content::mojom::PinchDataPtr& input) { return !input; }
  static void SetToNull(::content::mojom::PinchDataPtr* output) { output->reset(); }

  static decltype(::content::mojom::PinchData::zoom_disabled) zoom_disabled(
      const ::content::mojom::PinchDataPtr& input) {
    return input->zoom_disabled;
  }

  static decltype(::content::mojom::PinchData::scale) scale(
      const ::content::mojom::PinchDataPtr& input) {
    return input->scale;
  }

  static bool Read(::content::mojom::PinchData::DataView input, ::content::mojom::PinchDataPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::FlingData::DataView,
                                         ::content::mojom::FlingDataPtr> {
  static bool IsNull(const ::content::mojom::FlingDataPtr& input) { return !input; }
  static void SetToNull(::content::mojom::FlingDataPtr* output) { output->reset(); }

  static decltype(::content::mojom::FlingData::velocity_x) velocity_x(
      const ::content::mojom::FlingDataPtr& input) {
    return input->velocity_x;
  }

  static decltype(::content::mojom::FlingData::velocity_y) velocity_y(
      const ::content::mojom::FlingDataPtr& input) {
    return input->velocity_y;
  }

  static decltype(::content::mojom::FlingData::target_viewport) target_viewport(
      const ::content::mojom::FlingDataPtr& input) {
    return input->target_viewport;
  }

  static decltype(::content::mojom::FlingData::prevent_boosting) prevent_boosting(
      const ::content::mojom::FlingDataPtr& input) {
    return input->prevent_boosting;
  }

  static bool Read(::content::mojom::FlingData::DataView input, ::content::mojom::FlingDataPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::TapData::DataView,
                                         ::content::mojom::TapDataPtr> {
  static bool IsNull(const ::content::mojom::TapDataPtr& input) { return !input; }
  static void SetToNull(::content::mojom::TapDataPtr* output) { output->reset(); }

  static decltype(::content::mojom::TapData::tap_count) tap_count(
      const ::content::mojom::TapDataPtr& input) {
    return input->tap_count;
  }

  static bool Read(::content::mojom::TapData::DataView input, ::content::mojom::TapDataPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::GestureData::DataView,
                                         ::content::mojom::GestureDataPtr> {
  static bool IsNull(const ::content::mojom::GestureDataPtr& input) { return !input; }
  static void SetToNull(::content::mojom::GestureDataPtr* output) { output->reset(); }

  static const decltype(::content::mojom::GestureData::screen_position)& screen_position(
      const ::content::mojom::GestureDataPtr& input) {
    return input->screen_position;
  }

  static const decltype(::content::mojom::GestureData::widget_position)& widget_position(
      const ::content::mojom::GestureDataPtr& input) {
    return input->widget_position;
  }

  static decltype(::content::mojom::GestureData::source_device) source_device(
      const ::content::mojom::GestureDataPtr& input) {
    return input->source_device;
  }

  static decltype(::content::mojom::GestureData::is_source_touch_event_set_non_blocking) is_source_touch_event_set_non_blocking(
      const ::content::mojom::GestureDataPtr& input) {
    return input->is_source_touch_event_set_non_blocking;
  }

  static decltype(::content::mojom::GestureData::primary_pointer_type) primary_pointer_type(
      const ::content::mojom::GestureDataPtr& input) {
    return input->primary_pointer_type;
  }

  static decltype(::content::mojom::GestureData::unique_touch_event_id) unique_touch_event_id(
      const ::content::mojom::GestureDataPtr& input) {
    return input->unique_touch_event_id;
  }

  static decltype(::content::mojom::GestureData::resending_plugin_id) resending_plugin_id(
      const ::content::mojom::GestureDataPtr& input) {
    return input->resending_plugin_id;
  }

  static const decltype(::content::mojom::GestureData::contact_size)& contact_size(
      const ::content::mojom::GestureDataPtr& input) {
    return input->contact_size;
  }

  static const decltype(::content::mojom::GestureData::scroll_data)& scroll_data(
      const ::content::mojom::GestureDataPtr& input) {
    return input->scroll_data;
  }

  static const decltype(::content::mojom::GestureData::pinch_data)& pinch_data(
      const ::content::mojom::GestureDataPtr& input) {
    return input->pinch_data;
  }

  static const decltype(::content::mojom::GestureData::tap_data)& tap_data(
      const ::content::mojom::GestureDataPtr& input) {
    return input->tap_data;
  }

  static const decltype(::content::mojom::GestureData::fling_data)& fling_data(
      const ::content::mojom::GestureDataPtr& input) {
    return input->fling_data;
  }

  static bool Read(::content::mojom::GestureData::DataView input, ::content::mojom::GestureDataPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::TouchPoint::DataView,
                                         ::content::mojom::TouchPointPtr> {
  static bool IsNull(const ::content::mojom::TouchPointPtr& input) { return !input; }
  static void SetToNull(::content::mojom::TouchPointPtr* output) { output->reset(); }

  static decltype(::content::mojom::TouchPoint::state) state(
      const ::content::mojom::TouchPointPtr& input) {
    return input->state;
  }

  static decltype(::content::mojom::TouchPoint::radius_x) radius_x(
      const ::content::mojom::TouchPointPtr& input) {
    return input->radius_x;
  }

  static decltype(::content::mojom::TouchPoint::radius_y) radius_y(
      const ::content::mojom::TouchPointPtr& input) {
    return input->radius_y;
  }

  static decltype(::content::mojom::TouchPoint::rotation_angle) rotation_angle(
      const ::content::mojom::TouchPointPtr& input) {
    return input->rotation_angle;
  }

  static const decltype(::content::mojom::TouchPoint::pointer_data)& pointer_data(
      const ::content::mojom::TouchPointPtr& input) {
    return input->pointer_data;
  }

  static bool Read(::content::mojom::TouchPoint::DataView input, ::content::mojom::TouchPointPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::TouchData::DataView,
                                         ::content::mojom::TouchDataPtr> {
  static bool IsNull(const ::content::mojom::TouchDataPtr& input) { return !input; }
  static void SetToNull(::content::mojom::TouchDataPtr* output) { output->reset(); }

  static decltype(::content::mojom::TouchData::cancelable) cancelable(
      const ::content::mojom::TouchDataPtr& input) {
    return input->cancelable;
  }

  static decltype(::content::mojom::TouchData::moved_beyond_slop_region) moved_beyond_slop_region(
      const ::content::mojom::TouchDataPtr& input) {
    return input->moved_beyond_slop_region;
  }

  static decltype(::content::mojom::TouchData::touch_start_or_first_move) touch_start_or_first_move(
      const ::content::mojom::TouchDataPtr& input) {
    return input->touch_start_or_first_move;
  }

  static decltype(::content::mojom::TouchData::hovering) hovering(
      const ::content::mojom::TouchDataPtr& input) {
    return input->hovering;
  }

  static decltype(::content::mojom::TouchData::unique_touch_event_id) unique_touch_event_id(
      const ::content::mojom::TouchDataPtr& input) {
    return input->unique_touch_event_id;
  }

  static const decltype(::content::mojom::TouchData::touches)& touches(
      const ::content::mojom::TouchDataPtr& input) {
    return input->touches;
  }

  static bool Read(::content::mojom::TouchData::DataView input, ::content::mojom::TouchDataPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::Event::DataView,
                                         ::content::mojom::EventPtr> {
  static bool IsNull(const ::content::mojom::EventPtr& input) { return !input; }
  static void SetToNull(::content::mojom::EventPtr* output) { output->reset(); }

  static decltype(::content::mojom::Event::type) type(
      const ::content::mojom::EventPtr& input) {
    return input->type;
  }

  static decltype(::content::mojom::Event::modifiers) modifiers(
      const ::content::mojom::EventPtr& input) {
    return input->modifiers;
  }

  static const decltype(::content::mojom::Event::timestamp)& timestamp(
      const ::content::mojom::EventPtr& input) {
    return input->timestamp;
  }

  static const decltype(::content::mojom::Event::latency)& latency(
      const ::content::mojom::EventPtr& input) {
    return input->latency;
  }

  static const decltype(::content::mojom::Event::key_data)& key_data(
      const ::content::mojom::EventPtr& input) {
    return input->key_data;
  }

  static const decltype(::content::mojom::Event::pointer_data)& pointer_data(
      const ::content::mojom::EventPtr& input) {
    return input->pointer_data;
  }

  static const decltype(::content::mojom::Event::gesture_data)& gesture_data(
      const ::content::mojom::EventPtr& input) {
    return input->gesture_data;
  }

  static const decltype(::content::mojom::Event::touch_data)& touch_data(
      const ::content::mojom::EventPtr& input) {
    return input->touch_data;
  }

  static bool Read(::content::mojom::Event::DataView input, ::content::mojom::EventPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::TouchActionOptional::DataView,
                                         ::content::mojom::TouchActionOptionalPtr> {
  static bool IsNull(const ::content::mojom::TouchActionOptionalPtr& input) { return !input; }
  static void SetToNull(::content::mojom::TouchActionOptionalPtr* output) { output->reset(); }

  static decltype(::content::mojom::TouchActionOptional::touch_action) touch_action(
      const ::content::mojom::TouchActionOptionalPtr& input) {
    return input->touch_action;
  }

  static bool Read(::content::mojom::TouchActionOptional::DataView input, ::content::mojom::TouchActionOptionalPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_COMMON_INPUT_INPUT_HANDLER_MOJOM_H_