// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_SYSTEM_INFO_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_SYSTEM_INFO_H_

#include "headless/public/devtools/domains/types_system_info.h"
#include "headless/public/internal/value_conversions.h"

namespace headless {
namespace internal {


template <>
struct FromValue<system_info::GPUDevice> {
  static std::unique_ptr<system_info::GPUDevice> Parse(const base::Value& value, ErrorReporter* errors) {
    return system_info::GPUDevice::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const system_info::GPUDevice& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<system_info::GPUInfo> {
  static std::unique_ptr<system_info::GPUInfo> Parse(const base::Value& value, ErrorReporter* errors) {
    return system_info::GPUInfo::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const system_info::GPUInfo& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<system_info::GetInfoParams> {
  static std::unique_ptr<system_info::GetInfoParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return system_info::GetInfoParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const system_info::GetInfoParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<system_info::GetInfoResult> {
  static std::unique_ptr<system_info::GetInfoResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return system_info::GetInfoResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const system_info::GetInfoResult& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_SYSTEM_INFO_H_
