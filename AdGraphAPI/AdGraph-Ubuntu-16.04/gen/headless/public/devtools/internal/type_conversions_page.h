// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_PAGE_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_PAGE_H_

#include "headless/public/devtools/domains/types_page.h"
#include "headless/public/internal/value_conversions.h"

namespace headless {
namespace internal {

template <>
struct FromValue<page::ResourceType> {
  static page::ResourceType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return page::ResourceType::DOCUMENT;
    }
    if (value.GetString() == "Document")
      return page::ResourceType::DOCUMENT;
    if (value.GetString() == "Stylesheet")
      return page::ResourceType::STYLESHEET;
    if (value.GetString() == "Image")
      return page::ResourceType::IMAGE;
    if (value.GetString() == "Media")
      return page::ResourceType::MEDIA;
    if (value.GetString() == "Font")
      return page::ResourceType::FONT;
    if (value.GetString() == "Script")
      return page::ResourceType::SCRIPT;
    if (value.GetString() == "TextTrack")
      return page::ResourceType::TEXT_TRACK;
    if (value.GetString() == "XHR")
      return page::ResourceType::XHR;
    if (value.GetString() == "Fetch")
      return page::ResourceType::FETCH;
    if (value.GetString() == "EventSource")
      return page::ResourceType::EVENT_SOURCE;
    if (value.GetString() == "WebSocket")
      return page::ResourceType::WEB_SOCKET;
    if (value.GetString() == "Manifest")
      return page::ResourceType::MANIFEST;
    if (value.GetString() == "SignedExchange")
      return page::ResourceType::SIGNED_EXCHANGE;
    if (value.GetString() == "Other")
      return page::ResourceType::OTHER;
    errors->AddError("invalid enum value");
    return page::ResourceType::DOCUMENT;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::ResourceType& value, T*) {
  switch (value) {
    case page::ResourceType::DOCUMENT:
      return std::make_unique<base::Value>("Document");
    case page::ResourceType::STYLESHEET:
      return std::make_unique<base::Value>("Stylesheet");
    case page::ResourceType::IMAGE:
      return std::make_unique<base::Value>("Image");
    case page::ResourceType::MEDIA:
      return std::make_unique<base::Value>("Media");
    case page::ResourceType::FONT:
      return std::make_unique<base::Value>("Font");
    case page::ResourceType::SCRIPT:
      return std::make_unique<base::Value>("Script");
    case page::ResourceType::TEXT_TRACK:
      return std::make_unique<base::Value>("TextTrack");
    case page::ResourceType::XHR:
      return std::make_unique<base::Value>("XHR");
    case page::ResourceType::FETCH:
      return std::make_unique<base::Value>("Fetch");
    case page::ResourceType::EVENT_SOURCE:
      return std::make_unique<base::Value>("EventSource");
    case page::ResourceType::WEB_SOCKET:
      return std::make_unique<base::Value>("WebSocket");
    case page::ResourceType::MANIFEST:
      return std::make_unique<base::Value>("Manifest");
    case page::ResourceType::SIGNED_EXCHANGE:
      return std::make_unique<base::Value>("SignedExchange");
    case page::ResourceType::OTHER:
      return std::make_unique<base::Value>("Other");
  };
  NOTREACHED();
  return nullptr;
}


template <>
struct FromValue<page::Frame> {
  static std::unique_ptr<page::Frame> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::Frame::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::Frame& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::FrameResource> {
  static std::unique_ptr<page::FrameResource> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::FrameResource::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::FrameResource& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::FrameResourceTree> {
  static std::unique_ptr<page::FrameResourceTree> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::FrameResourceTree::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::FrameResourceTree& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::FrameTree> {
  static std::unique_ptr<page::FrameTree> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::FrameTree::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::FrameTree& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::TransitionType> {
  static page::TransitionType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return page::TransitionType::LINK;
    }
    if (value.GetString() == "link")
      return page::TransitionType::LINK;
    if (value.GetString() == "typed")
      return page::TransitionType::TYPED;
    if (value.GetString() == "auto_bookmark")
      return page::TransitionType::AUTO_BOOKMARK;
    if (value.GetString() == "auto_subframe")
      return page::TransitionType::AUTO_SUBFRAME;
    if (value.GetString() == "manual_subframe")
      return page::TransitionType::MANUAL_SUBFRAME;
    if (value.GetString() == "generated")
      return page::TransitionType::GENERATED;
    if (value.GetString() == "auto_toplevel")
      return page::TransitionType::AUTO_TOPLEVEL;
    if (value.GetString() == "form_submit")
      return page::TransitionType::FORM_SUBMIT;
    if (value.GetString() == "reload")
      return page::TransitionType::RELOAD;
    if (value.GetString() == "keyword")
      return page::TransitionType::KEYWORD;
    if (value.GetString() == "keyword_generated")
      return page::TransitionType::KEYWORD_GENERATED;
    if (value.GetString() == "other")
      return page::TransitionType::OTHER;
    errors->AddError("invalid enum value");
    return page::TransitionType::LINK;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::TransitionType& value, T*) {
  switch (value) {
    case page::TransitionType::LINK:
      return std::make_unique<base::Value>("link");
    case page::TransitionType::TYPED:
      return std::make_unique<base::Value>("typed");
    case page::TransitionType::AUTO_BOOKMARK:
      return std::make_unique<base::Value>("auto_bookmark");
    case page::TransitionType::AUTO_SUBFRAME:
      return std::make_unique<base::Value>("auto_subframe");
    case page::TransitionType::MANUAL_SUBFRAME:
      return std::make_unique<base::Value>("manual_subframe");
    case page::TransitionType::GENERATED:
      return std::make_unique<base::Value>("generated");
    case page::TransitionType::AUTO_TOPLEVEL:
      return std::make_unique<base::Value>("auto_toplevel");
    case page::TransitionType::FORM_SUBMIT:
      return std::make_unique<base::Value>("form_submit");
    case page::TransitionType::RELOAD:
      return std::make_unique<base::Value>("reload");
    case page::TransitionType::KEYWORD:
      return std::make_unique<base::Value>("keyword");
    case page::TransitionType::KEYWORD_GENERATED:
      return std::make_unique<base::Value>("keyword_generated");
    case page::TransitionType::OTHER:
      return std::make_unique<base::Value>("other");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<page::NavigationEntry> {
  static std::unique_ptr<page::NavigationEntry> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::NavigationEntry::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::NavigationEntry& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::ScreencastFrameMetadata> {
  static std::unique_ptr<page::ScreencastFrameMetadata> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::ScreencastFrameMetadata::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::ScreencastFrameMetadata& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<page::DialogType> {
  static page::DialogType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return page::DialogType::ALERT;
    }
    if (value.GetString() == "alert")
      return page::DialogType::ALERT;
    if (value.GetString() == "confirm")
      return page::DialogType::CONFIRM;
    if (value.GetString() == "prompt")
      return page::DialogType::PROMPT;
    if (value.GetString() == "beforeunload")
      return page::DialogType::BEFOREUNLOAD;
    errors->AddError("invalid enum value");
    return page::DialogType::ALERT;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::DialogType& value, T*) {
  switch (value) {
    case page::DialogType::ALERT:
      return std::make_unique<base::Value>("alert");
    case page::DialogType::CONFIRM:
      return std::make_unique<base::Value>("confirm");
    case page::DialogType::PROMPT:
      return std::make_unique<base::Value>("prompt");
    case page::DialogType::BEFOREUNLOAD:
      return std::make_unique<base::Value>("beforeunload");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<page::AppManifestError> {
  static std::unique_ptr<page::AppManifestError> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::AppManifestError::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::AppManifestError& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::LayoutViewport> {
  static std::unique_ptr<page::LayoutViewport> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::LayoutViewport::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::LayoutViewport& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::VisualViewport> {
  static std::unique_ptr<page::VisualViewport> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::VisualViewport::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::VisualViewport& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::Viewport> {
  static std::unique_ptr<page::Viewport> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::Viewport::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::Viewport& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::AddScriptToEvaluateOnLoadParams> {
  static std::unique_ptr<page::AddScriptToEvaluateOnLoadParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::AddScriptToEvaluateOnLoadParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::AddScriptToEvaluateOnLoadParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::AddScriptToEvaluateOnLoadResult> {
  static std::unique_ptr<page::AddScriptToEvaluateOnLoadResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::AddScriptToEvaluateOnLoadResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::AddScriptToEvaluateOnLoadResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::AddScriptToEvaluateOnNewDocumentParams> {
  static std::unique_ptr<page::AddScriptToEvaluateOnNewDocumentParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::AddScriptToEvaluateOnNewDocumentParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::AddScriptToEvaluateOnNewDocumentParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::AddScriptToEvaluateOnNewDocumentResult> {
  static std::unique_ptr<page::AddScriptToEvaluateOnNewDocumentResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::AddScriptToEvaluateOnNewDocumentResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::AddScriptToEvaluateOnNewDocumentResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::BringToFrontParams> {
  static std::unique_ptr<page::BringToFrontParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::BringToFrontParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::BringToFrontParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::BringToFrontResult> {
  static std::unique_ptr<page::BringToFrontResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::BringToFrontResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::BringToFrontResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<page::CaptureScreenshotFormat> {
  static page::CaptureScreenshotFormat Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return page::CaptureScreenshotFormat::JPEG;
    }
    if (value.GetString() == "jpeg")
      return page::CaptureScreenshotFormat::JPEG;
    if (value.GetString() == "png")
      return page::CaptureScreenshotFormat::PNG;
    errors->AddError("invalid enum value");
    return page::CaptureScreenshotFormat::JPEG;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::CaptureScreenshotFormat& value, T*) {
  switch (value) {
    case page::CaptureScreenshotFormat::JPEG:
      return std::make_unique<base::Value>("jpeg");
    case page::CaptureScreenshotFormat::PNG:
      return std::make_unique<base::Value>("png");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<page::CaptureScreenshotParams> {
  static std::unique_ptr<page::CaptureScreenshotParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::CaptureScreenshotParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::CaptureScreenshotParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::CaptureScreenshotResult> {
  static std::unique_ptr<page::CaptureScreenshotResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::CaptureScreenshotResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::CaptureScreenshotResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::ClearDeviceMetricsOverrideParams> {
  static std::unique_ptr<page::ClearDeviceMetricsOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::ClearDeviceMetricsOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::ClearDeviceMetricsOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::ClearDeviceMetricsOverrideResult> {
  static std::unique_ptr<page::ClearDeviceMetricsOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::ClearDeviceMetricsOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::ClearDeviceMetricsOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::ClearDeviceOrientationOverrideParams> {
  static std::unique_ptr<page::ClearDeviceOrientationOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::ClearDeviceOrientationOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::ClearDeviceOrientationOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::ClearDeviceOrientationOverrideResult> {
  static std::unique_ptr<page::ClearDeviceOrientationOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::ClearDeviceOrientationOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::ClearDeviceOrientationOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::ClearGeolocationOverrideParams> {
  static std::unique_ptr<page::ClearGeolocationOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::ClearGeolocationOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::ClearGeolocationOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::ClearGeolocationOverrideResult> {
  static std::unique_ptr<page::ClearGeolocationOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::ClearGeolocationOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::ClearGeolocationOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::CreateIsolatedWorldParams> {
  static std::unique_ptr<page::CreateIsolatedWorldParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::CreateIsolatedWorldParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::CreateIsolatedWorldParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::CreateIsolatedWorldResult> {
  static std::unique_ptr<page::CreateIsolatedWorldResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::CreateIsolatedWorldResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::CreateIsolatedWorldResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::DeleteCookieParams> {
  static std::unique_ptr<page::DeleteCookieParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::DeleteCookieParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::DeleteCookieParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::DeleteCookieResult> {
  static std::unique_ptr<page::DeleteCookieResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::DeleteCookieResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::DeleteCookieResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::DisableParams> {
  static std::unique_ptr<page::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::DisableResult> {
  static std::unique_ptr<page::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::EnableParams> {
  static std::unique_ptr<page::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::EnableResult> {
  static std::unique_ptr<page::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::GetAppManifestParams> {
  static std::unique_ptr<page::GetAppManifestParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::GetAppManifestParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::GetAppManifestParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::GetAppManifestResult> {
  static std::unique_ptr<page::GetAppManifestResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::GetAppManifestResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::GetAppManifestResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::GetCookiesParams> {
  static std::unique_ptr<page::GetCookiesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::GetCookiesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::GetCookiesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::GetCookiesResult> {
  static std::unique_ptr<page::GetCookiesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::GetCookiesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::GetCookiesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::GetFrameTreeParams> {
  static std::unique_ptr<page::GetFrameTreeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::GetFrameTreeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::GetFrameTreeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::GetFrameTreeResult> {
  static std::unique_ptr<page::GetFrameTreeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::GetFrameTreeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::GetFrameTreeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::GetLayoutMetricsParams> {
  static std::unique_ptr<page::GetLayoutMetricsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::GetLayoutMetricsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::GetLayoutMetricsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::GetLayoutMetricsResult> {
  static std::unique_ptr<page::GetLayoutMetricsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::GetLayoutMetricsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::GetLayoutMetricsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::GetNavigationHistoryParams> {
  static std::unique_ptr<page::GetNavigationHistoryParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::GetNavigationHistoryParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::GetNavigationHistoryParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::GetNavigationHistoryResult> {
  static std::unique_ptr<page::GetNavigationHistoryResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::GetNavigationHistoryResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::GetNavigationHistoryResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::GetResourceContentParams> {
  static std::unique_ptr<page::GetResourceContentParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::GetResourceContentParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::GetResourceContentParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::GetResourceContentResult> {
  static std::unique_ptr<page::GetResourceContentResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::GetResourceContentResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::GetResourceContentResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::GetResourceTreeParams> {
  static std::unique_ptr<page::GetResourceTreeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::GetResourceTreeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::GetResourceTreeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::GetResourceTreeResult> {
  static std::unique_ptr<page::GetResourceTreeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::GetResourceTreeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::GetResourceTreeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::HandleJavaScriptDialogParams> {
  static std::unique_ptr<page::HandleJavaScriptDialogParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::HandleJavaScriptDialogParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::HandleJavaScriptDialogParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::HandleJavaScriptDialogResult> {
  static std::unique_ptr<page::HandleJavaScriptDialogResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::HandleJavaScriptDialogResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::HandleJavaScriptDialogResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::NavigateParams> {
  static std::unique_ptr<page::NavigateParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::NavigateParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::NavigateParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::NavigateResult> {
  static std::unique_ptr<page::NavigateResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::NavigateResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::NavigateResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::NavigateToHistoryEntryParams> {
  static std::unique_ptr<page::NavigateToHistoryEntryParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::NavigateToHistoryEntryParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::NavigateToHistoryEntryParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::NavigateToHistoryEntryResult> {
  static std::unique_ptr<page::NavigateToHistoryEntryResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::NavigateToHistoryEntryResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::NavigateToHistoryEntryResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::PrintToPDFParams> {
  static std::unique_ptr<page::PrintToPDFParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::PrintToPDFParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::PrintToPDFParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::PrintToPDFResult> {
  static std::unique_ptr<page::PrintToPDFResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::PrintToPDFResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::PrintToPDFResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::ReloadParams> {
  static std::unique_ptr<page::ReloadParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::ReloadParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::ReloadParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::ReloadResult> {
  static std::unique_ptr<page::ReloadResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::ReloadResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::ReloadResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::RemoveScriptToEvaluateOnLoadParams> {
  static std::unique_ptr<page::RemoveScriptToEvaluateOnLoadParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::RemoveScriptToEvaluateOnLoadParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::RemoveScriptToEvaluateOnLoadParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::RemoveScriptToEvaluateOnLoadResult> {
  static std::unique_ptr<page::RemoveScriptToEvaluateOnLoadResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::RemoveScriptToEvaluateOnLoadResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::RemoveScriptToEvaluateOnLoadResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::RemoveScriptToEvaluateOnNewDocumentParams> {
  static std::unique_ptr<page::RemoveScriptToEvaluateOnNewDocumentParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::RemoveScriptToEvaluateOnNewDocumentParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::RemoveScriptToEvaluateOnNewDocumentParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::RemoveScriptToEvaluateOnNewDocumentResult> {
  static std::unique_ptr<page::RemoveScriptToEvaluateOnNewDocumentResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::RemoveScriptToEvaluateOnNewDocumentResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::RemoveScriptToEvaluateOnNewDocumentResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::RequestAppBannerParams> {
  static std::unique_ptr<page::RequestAppBannerParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::RequestAppBannerParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::RequestAppBannerParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::RequestAppBannerResult> {
  static std::unique_ptr<page::RequestAppBannerResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::RequestAppBannerResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::RequestAppBannerResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::ScreencastFrameAckParams> {
  static std::unique_ptr<page::ScreencastFrameAckParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::ScreencastFrameAckParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::ScreencastFrameAckParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::ScreencastFrameAckResult> {
  static std::unique_ptr<page::ScreencastFrameAckResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::ScreencastFrameAckResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::ScreencastFrameAckResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SearchInResourceParams> {
  static std::unique_ptr<page::SearchInResourceParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SearchInResourceParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SearchInResourceParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SearchInResourceResult> {
  static std::unique_ptr<page::SearchInResourceResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SearchInResourceResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SearchInResourceResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SetAdBlockingEnabledParams> {
  static std::unique_ptr<page::SetAdBlockingEnabledParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetAdBlockingEnabledParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetAdBlockingEnabledParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SetAdBlockingEnabledResult> {
  static std::unique_ptr<page::SetAdBlockingEnabledResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetAdBlockingEnabledResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetAdBlockingEnabledResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SetBypassCSPParams> {
  static std::unique_ptr<page::SetBypassCSPParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetBypassCSPParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetBypassCSPParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SetBypassCSPResult> {
  static std::unique_ptr<page::SetBypassCSPResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetBypassCSPResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetBypassCSPResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SetDeviceMetricsOverrideParams> {
  static std::unique_ptr<page::SetDeviceMetricsOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetDeviceMetricsOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetDeviceMetricsOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SetDeviceMetricsOverrideResult> {
  static std::unique_ptr<page::SetDeviceMetricsOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetDeviceMetricsOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetDeviceMetricsOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SetDeviceOrientationOverrideParams> {
  static std::unique_ptr<page::SetDeviceOrientationOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetDeviceOrientationOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetDeviceOrientationOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SetDeviceOrientationOverrideResult> {
  static std::unique_ptr<page::SetDeviceOrientationOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetDeviceOrientationOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetDeviceOrientationOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SetDocumentContentParams> {
  static std::unique_ptr<page::SetDocumentContentParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetDocumentContentParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetDocumentContentParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SetDocumentContentResult> {
  static std::unique_ptr<page::SetDocumentContentResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetDocumentContentResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetDocumentContentResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<page::SetDownloadBehaviorBehavior> {
  static page::SetDownloadBehaviorBehavior Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return page::SetDownloadBehaviorBehavior::DENY;
    }
    if (value.GetString() == "deny")
      return page::SetDownloadBehaviorBehavior::DENY;
    if (value.GetString() == "allow")
      return page::SetDownloadBehaviorBehavior::ALLOW;
    if (value.GetString() == "default")
      return page::SetDownloadBehaviorBehavior::DEFAULT;
    errors->AddError("invalid enum value");
    return page::SetDownloadBehaviorBehavior::DENY;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetDownloadBehaviorBehavior& value, T*) {
  switch (value) {
    case page::SetDownloadBehaviorBehavior::DENY:
      return std::make_unique<base::Value>("deny");
    case page::SetDownloadBehaviorBehavior::ALLOW:
      return std::make_unique<base::Value>("allow");
    case page::SetDownloadBehaviorBehavior::DEFAULT:
      return std::make_unique<base::Value>("default");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<page::SetDownloadBehaviorParams> {
  static std::unique_ptr<page::SetDownloadBehaviorParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetDownloadBehaviorParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetDownloadBehaviorParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SetDownloadBehaviorResult> {
  static std::unique_ptr<page::SetDownloadBehaviorResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetDownloadBehaviorResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetDownloadBehaviorResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SetGeolocationOverrideParams> {
  static std::unique_ptr<page::SetGeolocationOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetGeolocationOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetGeolocationOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SetGeolocationOverrideResult> {
  static std::unique_ptr<page::SetGeolocationOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetGeolocationOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetGeolocationOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SetLifecycleEventsEnabledParams> {
  static std::unique_ptr<page::SetLifecycleEventsEnabledParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetLifecycleEventsEnabledParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetLifecycleEventsEnabledParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SetLifecycleEventsEnabledResult> {
  static std::unique_ptr<page::SetLifecycleEventsEnabledResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetLifecycleEventsEnabledResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetLifecycleEventsEnabledResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<page::SetTouchEmulationEnabledConfiguration> {
  static page::SetTouchEmulationEnabledConfiguration Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return page::SetTouchEmulationEnabledConfiguration::MOBILE;
    }
    if (value.GetString() == "mobile")
      return page::SetTouchEmulationEnabledConfiguration::MOBILE;
    if (value.GetString() == "desktop")
      return page::SetTouchEmulationEnabledConfiguration::DESKTOP;
    errors->AddError("invalid enum value");
    return page::SetTouchEmulationEnabledConfiguration::MOBILE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetTouchEmulationEnabledConfiguration& value, T*) {
  switch (value) {
    case page::SetTouchEmulationEnabledConfiguration::MOBILE:
      return std::make_unique<base::Value>("mobile");
    case page::SetTouchEmulationEnabledConfiguration::DESKTOP:
      return std::make_unique<base::Value>("desktop");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<page::SetTouchEmulationEnabledParams> {
  static std::unique_ptr<page::SetTouchEmulationEnabledParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetTouchEmulationEnabledParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetTouchEmulationEnabledParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SetTouchEmulationEnabledResult> {
  static std::unique_ptr<page::SetTouchEmulationEnabledResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetTouchEmulationEnabledResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetTouchEmulationEnabledResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<page::StartScreencastFormat> {
  static page::StartScreencastFormat Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return page::StartScreencastFormat::JPEG;
    }
    if (value.GetString() == "jpeg")
      return page::StartScreencastFormat::JPEG;
    if (value.GetString() == "png")
      return page::StartScreencastFormat::PNG;
    errors->AddError("invalid enum value");
    return page::StartScreencastFormat::JPEG;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::StartScreencastFormat& value, T*) {
  switch (value) {
    case page::StartScreencastFormat::JPEG:
      return std::make_unique<base::Value>("jpeg");
    case page::StartScreencastFormat::PNG:
      return std::make_unique<base::Value>("png");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<page::StartScreencastParams> {
  static std::unique_ptr<page::StartScreencastParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::StartScreencastParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::StartScreencastParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::StartScreencastResult> {
  static std::unique_ptr<page::StartScreencastResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::StartScreencastResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::StartScreencastResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::StopLoadingParams> {
  static std::unique_ptr<page::StopLoadingParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::StopLoadingParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::StopLoadingParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::StopLoadingResult> {
  static std::unique_ptr<page::StopLoadingResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::StopLoadingResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::StopLoadingResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::CrashParams> {
  static std::unique_ptr<page::CrashParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::CrashParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::CrashParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::CrashResult> {
  static std::unique_ptr<page::CrashResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::CrashResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::CrashResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::CloseParams> {
  static std::unique_ptr<page::CloseParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::CloseParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::CloseParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::CloseResult> {
  static std::unique_ptr<page::CloseResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::CloseResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::CloseResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<page::SetWebLifecycleStateState> {
  static page::SetWebLifecycleStateState Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return page::SetWebLifecycleStateState::FROZEN;
    }
    if (value.GetString() == "frozen")
      return page::SetWebLifecycleStateState::FROZEN;
    if (value.GetString() == "active")
      return page::SetWebLifecycleStateState::ACTIVE;
    errors->AddError("invalid enum value");
    return page::SetWebLifecycleStateState::FROZEN;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetWebLifecycleStateState& value, T*) {
  switch (value) {
    case page::SetWebLifecycleStateState::FROZEN:
      return std::make_unique<base::Value>("frozen");
    case page::SetWebLifecycleStateState::ACTIVE:
      return std::make_unique<base::Value>("active");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<page::SetWebLifecycleStateParams> {
  static std::unique_ptr<page::SetWebLifecycleStateParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetWebLifecycleStateParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetWebLifecycleStateParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::SetWebLifecycleStateResult> {
  static std::unique_ptr<page::SetWebLifecycleStateResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::SetWebLifecycleStateResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::SetWebLifecycleStateResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::StopScreencastParams> {
  static std::unique_ptr<page::StopScreencastParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::StopScreencastParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::StopScreencastParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::StopScreencastResult> {
  static std::unique_ptr<page::StopScreencastResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::StopScreencastResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::StopScreencastResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::DomContentEventFiredParams> {
  static std::unique_ptr<page::DomContentEventFiredParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::DomContentEventFiredParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::DomContentEventFiredParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::FrameAttachedParams> {
  static std::unique_ptr<page::FrameAttachedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::FrameAttachedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::FrameAttachedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::FrameClearedScheduledNavigationParams> {
  static std::unique_ptr<page::FrameClearedScheduledNavigationParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::FrameClearedScheduledNavigationParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::FrameClearedScheduledNavigationParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::FrameDetachedParams> {
  static std::unique_ptr<page::FrameDetachedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::FrameDetachedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::FrameDetachedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::FrameNavigatedParams> {
  static std::unique_ptr<page::FrameNavigatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::FrameNavigatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::FrameNavigatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::FrameResizedParams> {
  static std::unique_ptr<page::FrameResizedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::FrameResizedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::FrameResizedParams& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<page::FrameScheduledNavigationReason> {
  static page::FrameScheduledNavigationReason Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return page::FrameScheduledNavigationReason::FORM_SUBMISSION_GET;
    }
    if (value.GetString() == "formSubmissionGet")
      return page::FrameScheduledNavigationReason::FORM_SUBMISSION_GET;
    if (value.GetString() == "formSubmissionPost")
      return page::FrameScheduledNavigationReason::FORM_SUBMISSION_POST;
    if (value.GetString() == "httpHeaderRefresh")
      return page::FrameScheduledNavigationReason::HTTP_HEADER_REFRESH;
    if (value.GetString() == "scriptInitiated")
      return page::FrameScheduledNavigationReason::SCRIPT_INITIATED;
    if (value.GetString() == "metaTagRefresh")
      return page::FrameScheduledNavigationReason::META_TAG_REFRESH;
    if (value.GetString() == "pageBlockInterstitial")
      return page::FrameScheduledNavigationReason::PAGE_BLOCK_INTERSTITIAL;
    if (value.GetString() == "reload")
      return page::FrameScheduledNavigationReason::RELOAD;
    errors->AddError("invalid enum value");
    return page::FrameScheduledNavigationReason::FORM_SUBMISSION_GET;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::FrameScheduledNavigationReason& value, T*) {
  switch (value) {
    case page::FrameScheduledNavigationReason::FORM_SUBMISSION_GET:
      return std::make_unique<base::Value>("formSubmissionGet");
    case page::FrameScheduledNavigationReason::FORM_SUBMISSION_POST:
      return std::make_unique<base::Value>("formSubmissionPost");
    case page::FrameScheduledNavigationReason::HTTP_HEADER_REFRESH:
      return std::make_unique<base::Value>("httpHeaderRefresh");
    case page::FrameScheduledNavigationReason::SCRIPT_INITIATED:
      return std::make_unique<base::Value>("scriptInitiated");
    case page::FrameScheduledNavigationReason::META_TAG_REFRESH:
      return std::make_unique<base::Value>("metaTagRefresh");
    case page::FrameScheduledNavigationReason::PAGE_BLOCK_INTERSTITIAL:
      return std::make_unique<base::Value>("pageBlockInterstitial");
    case page::FrameScheduledNavigationReason::RELOAD:
      return std::make_unique<base::Value>("reload");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<page::FrameScheduledNavigationParams> {
  static std::unique_ptr<page::FrameScheduledNavigationParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::FrameScheduledNavigationParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::FrameScheduledNavigationParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::FrameStartedLoadingParams> {
  static std::unique_ptr<page::FrameStartedLoadingParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::FrameStartedLoadingParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::FrameStartedLoadingParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::FrameStoppedLoadingParams> {
  static std::unique_ptr<page::FrameStoppedLoadingParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::FrameStoppedLoadingParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::FrameStoppedLoadingParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::InterstitialHiddenParams> {
  static std::unique_ptr<page::InterstitialHiddenParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::InterstitialHiddenParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::InterstitialHiddenParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::InterstitialShownParams> {
  static std::unique_ptr<page::InterstitialShownParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::InterstitialShownParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::InterstitialShownParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::JavascriptDialogClosedParams> {
  static std::unique_ptr<page::JavascriptDialogClosedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::JavascriptDialogClosedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::JavascriptDialogClosedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::JavascriptDialogOpeningParams> {
  static std::unique_ptr<page::JavascriptDialogOpeningParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::JavascriptDialogOpeningParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::JavascriptDialogOpeningParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::LifecycleEventParams> {
  static std::unique_ptr<page::LifecycleEventParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::LifecycleEventParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::LifecycleEventParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::LoadEventFiredParams> {
  static std::unique_ptr<page::LoadEventFiredParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::LoadEventFiredParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::LoadEventFiredParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::NavigatedWithinDocumentParams> {
  static std::unique_ptr<page::NavigatedWithinDocumentParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::NavigatedWithinDocumentParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::NavigatedWithinDocumentParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::ScreencastFrameParams> {
  static std::unique_ptr<page::ScreencastFrameParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::ScreencastFrameParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::ScreencastFrameParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::ScreencastVisibilityChangedParams> {
  static std::unique_ptr<page::ScreencastVisibilityChangedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::ScreencastVisibilityChangedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::ScreencastVisibilityChangedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<page::WindowOpenParams> {
  static std::unique_ptr<page::WindowOpenParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return page::WindowOpenParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const page::WindowOpenParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_PAGE_H_
