// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_NATIVE_TYPES_MOJOM_SHARED_H_
#define CONTENT_COMMON_NATIVE_TYPES_MOJOM_SHARED_H_

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
#include "content/common/native_types.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace content {
namespace mojom {
using FrameOwnerPropertiesDataView = mojo::native::NativeStructDataView;

using FrameReplicationStateDataView = mojo::native::NativeStructDataView;

using RendererPreferencesDataView = mojo::native::NativeStructDataView;

using VisualPropertiesDataView = mojo::native::NativeStructDataView;

using WebPreferencesDataView = mojo::native::NativeStructDataView;

using EditCommandDataView = mojo::native::NativeStructDataView;

using DidOverscrollParamsDataView = mojo::native::NativeStructDataView;

using SyntheticSmoothDragDataView = mojo::native::NativeStructDataView;

using SyntheticSmoothScrollDataView = mojo::native::NativeStructDataView;

using SyntheticPinchDataView = mojo::native::NativeStructDataView;

using SyntheticTapDataView = mojo::native::NativeStructDataView;

using SyntheticPointerActionDataView = mojo::native::NativeStructDataView;



}  // namespace mojom
}  // namespace content

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace content {
namespace mojom {
using ScrollbarButtonsPlacement = mojo::NativeEnum;
using ScrollerStyle = mojo::NativeEnum;
using V8CacheOptions = mojo::NativeEnum;
using NetworkConnectionType = mojo::NativeEnum;
using WebPopupType = mojo::NativeEnum;
using Button = mojo::NativeEnum;
using PointerType = mojo::NativeEnum;
using InputEventAckState = mojo::NativeEnum;
using InputEventAckSource = mojo::NativeEnum;
using EventType = mojo::NativeEnum;
using Cancelability = mojo::NativeEnum;
using GestureDevice = mojo::NativeEnum;
using ScrollUnits = mojo::NativeEnum;
using InertialPhaseState = mojo::NativeEnum;
using TouchState = mojo::NativeEnum;
using TouchAction = mojo::NativeEnum;


}  // namespace mojom
}  // namespace content

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace content {
namespace mojom {


}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_NATIVE_TYPES_MOJOM_SHARED_H_
