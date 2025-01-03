// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_AUDITS_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_AUDITS_H_

#include "headless/public/devtools/domains/types_audits.h"
#include "headless/public/internal/value_conversions.h"

namespace headless {
namespace internal {

template <>
struct FromValue<audits::GetEncodedResponseEncoding> {
  static audits::GetEncodedResponseEncoding Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::GetEncodedResponseEncoding::WEBP;
    }
    if (value.GetString() == "webp")
      return audits::GetEncodedResponseEncoding::WEBP;
    if (value.GetString() == "jpeg")
      return audits::GetEncodedResponseEncoding::JPEG;
    if (value.GetString() == "png")
      return audits::GetEncodedResponseEncoding::PNG;
    errors->AddError("invalid enum value");
    return audits::GetEncodedResponseEncoding::WEBP;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::GetEncodedResponseEncoding& value, T*) {
  switch (value) {
    case audits::GetEncodedResponseEncoding::WEBP:
      return std::make_unique<base::Value>("webp");
    case audits::GetEncodedResponseEncoding::JPEG:
      return std::make_unique<base::Value>("jpeg");
    case audits::GetEncodedResponseEncoding::PNG:
      return std::make_unique<base::Value>("png");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<audits::GetEncodedResponseParams> {
  static std::unique_ptr<audits::GetEncodedResponseParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::GetEncodedResponseParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::GetEncodedResponseParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<audits::GetEncodedResponseResult> {
  static std::unique_ptr<audits::GetEncodedResponseResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::GetEncodedResponseResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::GetEncodedResponseResult& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_AUDITS_H_
