// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_NATIVE_TYPES_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_COMMON_NATIVE_TYPES_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace content {
namespace mojom {
namespace internal {
using FrameOwnerProperties_Data = mojo::native::internal::NativeStruct_Data;
using FrameReplicationState_Data = mojo::native::internal::NativeStruct_Data;
using RendererPreferences_Data = mojo::native::internal::NativeStruct_Data;
using VisualProperties_Data = mojo::native::internal::NativeStruct_Data;
using WebPreferences_Data = mojo::native::internal::NativeStruct_Data;
using EditCommand_Data = mojo::native::internal::NativeStruct_Data;
using DidOverscrollParams_Data = mojo::native::internal::NativeStruct_Data;
using SyntheticSmoothDrag_Data = mojo::native::internal::NativeStruct_Data;
using SyntheticSmoothScroll_Data = mojo::native::internal::NativeStruct_Data;
using SyntheticPinch_Data = mojo::native::internal::NativeStruct_Data;
using SyntheticTap_Data = mojo::native::internal::NativeStruct_Data;
using SyntheticPointerAction_Data = mojo::native::internal::NativeStruct_Data;
using ScrollbarButtonsPlacement_Data =
    mojo::internal::NativeEnum_Data;
using ScrollerStyle_Data =
    mojo::internal::NativeEnum_Data;
using V8CacheOptions_Data =
    mojo::internal::NativeEnum_Data;
using NetworkConnectionType_Data =
    mojo::internal::NativeEnum_Data;
using WebPopupType_Data =
    mojo::internal::NativeEnum_Data;
using Button_Data =
    mojo::internal::NativeEnum_Data;
using PointerType_Data =
    mojo::internal::NativeEnum_Data;
using InputEventAckState_Data =
    mojo::internal::NativeEnum_Data;
using InputEventAckSource_Data =
    mojo::internal::NativeEnum_Data;
using EventType_Data =
    mojo::internal::NativeEnum_Data;
using Cancelability_Data =
    mojo::internal::NativeEnum_Data;
using GestureDevice_Data =
    mojo::internal::NativeEnum_Data;
using ScrollUnits_Data =
    mojo::internal::NativeEnum_Data;
using InertialPhaseState_Data =
    mojo::internal::NativeEnum_Data;
using TouchState_Data =
    mojo::internal::NativeEnum_Data;
using TouchAction_Data =
    mojo::internal::NativeEnum_Data;

#pragma pack(push, 1)

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_NATIVE_TYPES_MOJOM_SHARED_INTERNAL_H_