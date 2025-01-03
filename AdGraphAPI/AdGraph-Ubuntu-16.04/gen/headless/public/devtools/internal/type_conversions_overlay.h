// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_OVERLAY_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_OVERLAY_H_

#include "headless/public/devtools/domains/types_overlay.h"
#include "headless/public/internal/value_conversions.h"

namespace headless {
namespace internal {


template <>
struct FromValue<overlay::HighlightConfig> {
  static std::unique_ptr<overlay::HighlightConfig> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightConfig::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightConfig& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<overlay::InspectMode> {
  static overlay::InspectMode Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return overlay::InspectMode::SEARCH_FOR_NODE;
    }
    if (value.GetString() == "searchForNode")
      return overlay::InspectMode::SEARCH_FOR_NODE;
    if (value.GetString() == "searchForUAShadowDOM")
      return overlay::InspectMode::SEARCH_FORUA_SHADOWDOM;
    if (value.GetString() == "none")
      return overlay::InspectMode::NONE;
    errors->AddError("invalid enum value");
    return overlay::InspectMode::SEARCH_FOR_NODE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::InspectMode& value, T*) {
  switch (value) {
    case overlay::InspectMode::SEARCH_FOR_NODE:
      return std::make_unique<base::Value>("searchForNode");
    case overlay::InspectMode::SEARCH_FORUA_SHADOWDOM:
      return std::make_unique<base::Value>("searchForUAShadowDOM");
    case overlay::InspectMode::NONE:
      return std::make_unique<base::Value>("none");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<overlay::DisableParams> {
  static std::unique_ptr<overlay::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::DisableResult> {
  static std::unique_ptr<overlay::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::EnableParams> {
  static std::unique_ptr<overlay::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::EnableResult> {
  static std::unique_ptr<overlay::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::GetHighlightObjectForTestParams> {
  static std::unique_ptr<overlay::GetHighlightObjectForTestParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::GetHighlightObjectForTestParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::GetHighlightObjectForTestParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::GetHighlightObjectForTestResult> {
  static std::unique_ptr<overlay::GetHighlightObjectForTestResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::GetHighlightObjectForTestResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::GetHighlightObjectForTestResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HideHighlightParams> {
  static std::unique_ptr<overlay::HideHighlightParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HideHighlightParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HideHighlightParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HideHighlightResult> {
  static std::unique_ptr<overlay::HideHighlightResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HideHighlightResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HideHighlightResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightFrameParams> {
  static std::unique_ptr<overlay::HighlightFrameParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightFrameParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightFrameParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightFrameResult> {
  static std::unique_ptr<overlay::HighlightFrameResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightFrameResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightFrameResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightNodeParams> {
  static std::unique_ptr<overlay::HighlightNodeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightNodeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightNodeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightNodeResult> {
  static std::unique_ptr<overlay::HighlightNodeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightNodeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightNodeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightQuadParams> {
  static std::unique_ptr<overlay::HighlightQuadParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightQuadParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightQuadParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightQuadResult> {
  static std::unique_ptr<overlay::HighlightQuadResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightQuadResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightQuadResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightRectParams> {
  static std::unique_ptr<overlay::HighlightRectParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightRectParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightRectParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::HighlightRectResult> {
  static std::unique_ptr<overlay::HighlightRectResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::HighlightRectResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::HighlightRectResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetInspectModeParams> {
  static std::unique_ptr<overlay::SetInspectModeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetInspectModeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetInspectModeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetInspectModeResult> {
  static std::unique_ptr<overlay::SetInspectModeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetInspectModeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetInspectModeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetPausedInDebuggerMessageParams> {
  static std::unique_ptr<overlay::SetPausedInDebuggerMessageParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetPausedInDebuggerMessageParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetPausedInDebuggerMessageParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetPausedInDebuggerMessageResult> {
  static std::unique_ptr<overlay::SetPausedInDebuggerMessageResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetPausedInDebuggerMessageResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetPausedInDebuggerMessageResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowDebugBordersParams> {
  static std::unique_ptr<overlay::SetShowDebugBordersParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowDebugBordersParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowDebugBordersParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowDebugBordersResult> {
  static std::unique_ptr<overlay::SetShowDebugBordersResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowDebugBordersResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowDebugBordersResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowFPSCounterParams> {
  static std::unique_ptr<overlay::SetShowFPSCounterParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowFPSCounterParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowFPSCounterParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowFPSCounterResult> {
  static std::unique_ptr<overlay::SetShowFPSCounterResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowFPSCounterResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowFPSCounterResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowPaintRectsParams> {
  static std::unique_ptr<overlay::SetShowPaintRectsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowPaintRectsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowPaintRectsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowPaintRectsResult> {
  static std::unique_ptr<overlay::SetShowPaintRectsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowPaintRectsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowPaintRectsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowScrollBottleneckRectsParams> {
  static std::unique_ptr<overlay::SetShowScrollBottleneckRectsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowScrollBottleneckRectsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowScrollBottleneckRectsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowScrollBottleneckRectsResult> {
  static std::unique_ptr<overlay::SetShowScrollBottleneckRectsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowScrollBottleneckRectsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowScrollBottleneckRectsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowViewportSizeOnResizeParams> {
  static std::unique_ptr<overlay::SetShowViewportSizeOnResizeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowViewportSizeOnResizeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowViewportSizeOnResizeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetShowViewportSizeOnResizeResult> {
  static std::unique_ptr<overlay::SetShowViewportSizeOnResizeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetShowViewportSizeOnResizeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetShowViewportSizeOnResizeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetSuspendedParams> {
  static std::unique_ptr<overlay::SetSuspendedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetSuspendedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetSuspendedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::SetSuspendedResult> {
  static std::unique_ptr<overlay::SetSuspendedResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::SetSuspendedResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::SetSuspendedResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::InspectNodeRequestedParams> {
  static std::unique_ptr<overlay::InspectNodeRequestedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::InspectNodeRequestedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::InspectNodeRequestedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::NodeHighlightRequestedParams> {
  static std::unique_ptr<overlay::NodeHighlightRequestedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::NodeHighlightRequestedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::NodeHighlightRequestedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<overlay::ScreenshotRequestedParams> {
  static std::unique_ptr<overlay::ScreenshotRequestedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return overlay::ScreenshotRequestedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const overlay::ScreenshotRequestedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_OVERLAY_H_
