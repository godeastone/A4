// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_OVERLAY_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_OVERLAY_H_

#include "base/values.h"

namespace headless {

namespace overlay {
class HighlightConfig;
class DisableParams;
class DisableResult;
class EnableParams;
class EnableResult;
class GetHighlightObjectForTestParams;
class GetHighlightObjectForTestResult;
class HideHighlightParams;
class HideHighlightResult;
class HighlightFrameParams;
class HighlightFrameResult;
class HighlightNodeParams;
class HighlightNodeResult;
class HighlightQuadParams;
class HighlightQuadResult;
class HighlightRectParams;
class HighlightRectResult;
class SetInspectModeParams;
class SetInspectModeResult;
class SetPausedInDebuggerMessageParams;
class SetPausedInDebuggerMessageResult;
class SetShowDebugBordersParams;
class SetShowDebugBordersResult;
class SetShowFPSCounterParams;
class SetShowFPSCounterResult;
class SetShowPaintRectsParams;
class SetShowPaintRectsResult;
class SetShowScrollBottleneckRectsParams;
class SetShowScrollBottleneckRectsResult;
class SetShowViewportSizeOnResizeParams;
class SetShowViewportSizeOnResizeResult;
class SetSuspendedParams;
class SetSuspendedResult;
class InspectNodeRequestedParams;
class NodeHighlightRequestedParams;
class ScreenshotRequestedParams;

enum class InspectMode {
  SEARCH_FOR_NODE,
  SEARCH_FORUA_SHADOWDOM,
  NONE
};

}  // namespace overlay

}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_OVERLAY_H_
