// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_NATIVE_TYPES_MOJOM_H_
#define CONTENT_COMMON_NATIVE_TYPES_MOJOM_H_

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
#include "content/common/native_types.mojom-shared.h"
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
using FrameOwnerProperties = mojo::native::NativeStruct;
using FrameOwnerPropertiesPtr = mojo::native::NativeStructPtr;

using FrameReplicationState = mojo::native::NativeStruct;
using FrameReplicationStatePtr = mojo::native::NativeStructPtr;

using RendererPreferences = mojo::native::NativeStruct;
using RendererPreferencesPtr = mojo::native::NativeStructPtr;

using VisualProperties = mojo::native::NativeStruct;
using VisualPropertiesPtr = mojo::native::NativeStructPtr;

using WebPreferences = mojo::native::NativeStruct;
using WebPreferencesPtr = mojo::native::NativeStructPtr;

using EditCommand = mojo::native::NativeStruct;
using EditCommandPtr = mojo::native::NativeStructPtr;

using DidOverscrollParams = mojo::native::NativeStruct;
using DidOverscrollParamsPtr = mojo::native::NativeStructPtr;

using SyntheticSmoothDrag = mojo::native::NativeStruct;
using SyntheticSmoothDragPtr = mojo::native::NativeStructPtr;

using SyntheticSmoothScroll = mojo::native::NativeStruct;
using SyntheticSmoothScrollPtr = mojo::native::NativeStructPtr;

using SyntheticPinch = mojo::native::NativeStruct;
using SyntheticPinchPtr = mojo::native::NativeStructPtr;

using SyntheticTap = mojo::native::NativeStruct;
using SyntheticTapPtr = mojo::native::NativeStructPtr;

using SyntheticPointerAction = mojo::native::NativeStruct;
using SyntheticPointerActionPtr = mojo::native::NativeStructPtr;






























}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_NATIVE_TYPES_MOJOM_H_