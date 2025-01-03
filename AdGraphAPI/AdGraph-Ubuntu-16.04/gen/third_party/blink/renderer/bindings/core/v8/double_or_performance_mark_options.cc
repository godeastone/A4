// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/double_or_performance_mark_options.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

DoubleOrPerformanceMarkOptions::DoubleOrPerformanceMarkOptions() : type_(SpecificType::kNone) {}

double DoubleOrPerformanceMarkOptions::GetAsDouble() const {
  DCHECK(IsDouble());
  return double_;
}

void DoubleOrPerformanceMarkOptions::SetDouble(double value) {
  DCHECK(IsNull());
  double_ = value;
  type_ = SpecificType::kDouble;
}

DoubleOrPerformanceMarkOptions DoubleOrPerformanceMarkOptions::FromDouble(double value) {
  DoubleOrPerformanceMarkOptions container;
  container.SetDouble(value);
  return container;
}

const PerformanceMarkOptions& DoubleOrPerformanceMarkOptions::GetAsPerformanceMarkOptions() const {
  DCHECK(IsPerformanceMarkOptions());
  return performance_mark_options_;
}

void DoubleOrPerformanceMarkOptions::SetPerformanceMarkOptions(const PerformanceMarkOptions& value) {
  DCHECK(IsNull());
  performance_mark_options_ = value;
  type_ = SpecificType::kPerformanceMarkOptions;
}

DoubleOrPerformanceMarkOptions DoubleOrPerformanceMarkOptions::FromPerformanceMarkOptions(const PerformanceMarkOptions& value) {
  DoubleOrPerformanceMarkOptions container;
  container.SetPerformanceMarkOptions(value);
  return container;
}

DoubleOrPerformanceMarkOptions::DoubleOrPerformanceMarkOptions(const DoubleOrPerformanceMarkOptions&) = default;
DoubleOrPerformanceMarkOptions::~DoubleOrPerformanceMarkOptions() = default;
DoubleOrPerformanceMarkOptions& DoubleOrPerformanceMarkOptions::operator=(const DoubleOrPerformanceMarkOptions&) = default;

void DoubleOrPerformanceMarkOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(performance_mark_options_);
}

void V8DoubleOrPerformanceMarkOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DoubleOrPerformanceMarkOptions& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (IsUndefinedOrNull(v8Value)) {
    PerformanceMarkOptions cppValue;
    V8PerformanceMarkOptions::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetPerformanceMarkOptions(cppValue);
    return;
  }

  if (v8Value->IsObject()) {
    PerformanceMarkOptions cppValue;
    V8PerformanceMarkOptions::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetPerformanceMarkOptions(cppValue);
    return;
  }

  if (v8Value->IsNumber()) {
    double cppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetDouble(cppValue);
    return;
  }

  {
    double cppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetDouble(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const DoubleOrPerformanceMarkOptions& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case DoubleOrPerformanceMarkOptions::SpecificType::kNone:
      return v8::Null(isolate);
    case DoubleOrPerformanceMarkOptions::SpecificType::kDouble:
      return v8::Number::New(isolate, impl.GetAsDouble());
    case DoubleOrPerformanceMarkOptions::SpecificType::kPerformanceMarkOptions:
      return ToV8(impl.GetAsPerformanceMarkOptions(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

DoubleOrPerformanceMarkOptions NativeValueTraits<DoubleOrPerformanceMarkOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DoubleOrPerformanceMarkOptions impl;
  V8DoubleOrPerformanceMarkOptions::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
