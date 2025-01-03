// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_BROWSER_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_BROWSER_H_

#include "headless/public/devtools/domains/types_browser.h"
#include "headless/public/internal/value_conversions.h"

namespace headless {
namespace internal {


template <>
struct FromValue<browser::WindowState> {
  static browser::WindowState Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return browser::WindowState::NORMAL;
    }
    if (value.GetString() == "normal")
      return browser::WindowState::NORMAL;
    if (value.GetString() == "minimized")
      return browser::WindowState::MINIMIZED;
    if (value.GetString() == "maximized")
      return browser::WindowState::MAXIMIZED;
    if (value.GetString() == "fullscreen")
      return browser::WindowState::FULLSCREEN;
    errors->AddError("invalid enum value");
    return browser::WindowState::NORMAL;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::WindowState& value, T*) {
  switch (value) {
    case browser::WindowState::NORMAL:
      return std::make_unique<base::Value>("normal");
    case browser::WindowState::MINIMIZED:
      return std::make_unique<base::Value>("minimized");
    case browser::WindowState::MAXIMIZED:
      return std::make_unique<base::Value>("maximized");
    case browser::WindowState::FULLSCREEN:
      return std::make_unique<base::Value>("fullscreen");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<browser::Bounds> {
  static std::unique_ptr<browser::Bounds> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::Bounds::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::Bounds& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::Bucket> {
  static std::unique_ptr<browser::Bucket> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::Bucket::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::Bucket& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::Histogram> {
  static std::unique_ptr<browser::Histogram> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::Histogram::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::Histogram& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::CloseParams> {
  static std::unique_ptr<browser::CloseParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::CloseParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::CloseParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::CloseResult> {
  static std::unique_ptr<browser::CloseResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::CloseResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::CloseResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::GetVersionParams> {
  static std::unique_ptr<browser::GetVersionParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::GetVersionParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::GetVersionParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::GetVersionResult> {
  static std::unique_ptr<browser::GetVersionResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::GetVersionResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::GetVersionResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::GetBrowserCommandLineParams> {
  static std::unique_ptr<browser::GetBrowserCommandLineParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::GetBrowserCommandLineParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::GetBrowserCommandLineParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::GetBrowserCommandLineResult> {
  static std::unique_ptr<browser::GetBrowserCommandLineResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::GetBrowserCommandLineResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::GetBrowserCommandLineResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::GetHistogramsParams> {
  static std::unique_ptr<browser::GetHistogramsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::GetHistogramsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::GetHistogramsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::GetHistogramsResult> {
  static std::unique_ptr<browser::GetHistogramsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::GetHistogramsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::GetHistogramsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::GetHistogramParams> {
  static std::unique_ptr<browser::GetHistogramParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::GetHistogramParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::GetHistogramParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::GetHistogramResult> {
  static std::unique_ptr<browser::GetHistogramResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::GetHistogramResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::GetHistogramResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::GetWindowBoundsParams> {
  static std::unique_ptr<browser::GetWindowBoundsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::GetWindowBoundsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::GetWindowBoundsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::GetWindowBoundsResult> {
  static std::unique_ptr<browser::GetWindowBoundsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::GetWindowBoundsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::GetWindowBoundsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::GetWindowForTargetParams> {
  static std::unique_ptr<browser::GetWindowForTargetParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::GetWindowForTargetParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::GetWindowForTargetParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::GetWindowForTargetResult> {
  static std::unique_ptr<browser::GetWindowForTargetResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::GetWindowForTargetResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::GetWindowForTargetResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::SetWindowBoundsParams> {
  static std::unique_ptr<browser::SetWindowBoundsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::SetWindowBoundsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::SetWindowBoundsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<browser::SetWindowBoundsResult> {
  static std::unique_ptr<browser::SetWindowBoundsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return browser::SetWindowBoundsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const browser::SetWindowBoundsResult& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_BROWSER_H_
