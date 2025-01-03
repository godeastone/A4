// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_PERFORMANCE_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_PERFORMANCE_H_

#include "headless/public/devtools/domains/types_performance.h"
#include "headless/public/internal/value_conversions.h"

namespace headless {
namespace internal {


template <>
struct FromValue<performance::Metric> {
  static std::unique_ptr<performance::Metric> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::Metric::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::Metric& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance::DisableParams> {
  static std::unique_ptr<performance::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance::DisableResult> {
  static std::unique_ptr<performance::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance::EnableParams> {
  static std::unique_ptr<performance::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance::EnableResult> {
  static std::unique_ptr<performance::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance::GetMetricsParams> {
  static std::unique_ptr<performance::GetMetricsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::GetMetricsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::GetMetricsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance::GetMetricsResult> {
  static std::unique_ptr<performance::GetMetricsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::GetMetricsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::GetMetricsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance::MetricsParams> {
  static std::unique_ptr<performance::MetricsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::MetricsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::MetricsParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_PERFORMANCE_H_
