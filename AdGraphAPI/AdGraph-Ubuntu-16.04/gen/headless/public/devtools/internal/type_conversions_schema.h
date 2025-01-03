// This file is generated

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_SCHEMA_H_
#define HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_SCHEMA_H_

#include "headless/public/devtools/domains/types_schema.h"
#include "headless/public/internal/value_conversions.h"

namespace headless {
namespace internal {


template <>
struct FromValue<schema::Domain> {
  static std::unique_ptr<schema::Domain> Parse(const base::Value& value, ErrorReporter* errors) {
    return schema::Domain::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const schema::Domain& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<schema::GetDomainsParams> {
  static std::unique_ptr<schema::GetDomainsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return schema::GetDomainsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const schema::GetDomainsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<schema::GetDomainsResult> {
  static std::unique_ptr<schema::GetDomainsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return schema::GetDomainsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const schema::GetDomainsResult& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace headless

#endif  // HEADLESS_PUBLIC_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_SCHEMA_H_
