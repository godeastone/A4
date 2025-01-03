// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_TETHERING_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_TETHERING_H_

#include "headless/public/devtools/domains/types_tethering.h"
#include "headless/public/internal/value_conversions.h"

namespace headless {
namespace internal {


template <>
struct FromValue<tethering::BindParams> {
  static std::unique_ptr<tethering::BindParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return tethering::BindParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tethering::BindParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tethering::BindResult> {
  static std::unique_ptr<tethering::BindResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return tethering::BindResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tethering::BindResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tethering::UnbindParams> {
  static std::unique_ptr<tethering::UnbindParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return tethering::UnbindParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tethering::UnbindParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tethering::UnbindResult> {
  static std::unique_ptr<tethering::UnbindResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return tethering::UnbindResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tethering::UnbindResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tethering::AcceptedParams> {
  static std::unique_ptr<tethering::AcceptedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return tethering::AcceptedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tethering::AcceptedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_TETHERING_H_
