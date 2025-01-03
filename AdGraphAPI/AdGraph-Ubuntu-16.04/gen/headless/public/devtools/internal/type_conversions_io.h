// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_IO_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_IO_H_

#include "headless/public/devtools/domains/types_io.h"
#include "headless/public/internal/value_conversions.h"

namespace headless {
namespace internal {



template <>
struct FromValue<io::CloseParams> {
  static std::unique_ptr<io::CloseParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return io::CloseParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const io::CloseParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<io::CloseResult> {
  static std::unique_ptr<io::CloseResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return io::CloseResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const io::CloseResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<io::ReadParams> {
  static std::unique_ptr<io::ReadParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return io::ReadParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const io::ReadParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<io::ReadResult> {
  static std::unique_ptr<io::ReadResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return io::ReadResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const io::ReadResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<io::ResolveBlobParams> {
  static std::unique_ptr<io::ResolveBlobParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return io::ResolveBlobParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const io::ResolveBlobParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<io::ResolveBlobResult> {
  static std::unique_ptr<io::ResolveBlobResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return io::ResolveBlobResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const io::ResolveBlobResult& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_IO_H_
