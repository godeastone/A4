// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/string_or_double_or_performance_measure_options.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

StringOrDoubleOrPerformanceMeasureOptions::StringOrDoubleOrPerformanceMeasureOptions() : type_(SpecificType::kNone) {}

double StringOrDoubleOrPerformanceMeasureOptions::GetAsDouble() const {
  DCHECK(IsDouble());
  return double_;
}

void StringOrDoubleOrPerformanceMeasureOptions::SetDouble(double value) {
  DCHECK(IsNull());
  double_ = value;
  type_ = SpecificType::kDouble;
}

StringOrDoubleOrPerformanceMeasureOptions StringOrDoubleOrPerformanceMeasureOptions::FromDouble(double value) {
  StringOrDoubleOrPerformanceMeasureOptions container;
  container.SetDouble(value);
  return container;
}

const PerformanceMeasureOptions& StringOrDoubleOrPerformanceMeasureOptions::GetAsPerformanceMeasureOptions() const {
  DCHECK(IsPerformanceMeasureOptions());
  return performance_measure_options_;
}

void StringOrDoubleOrPerformanceMeasureOptions::SetPerformanceMeasureOptions(const PerformanceMeasureOptions& value) {
  DCHECK(IsNull());
  performance_measure_options_ = value;
  type_ = SpecificType::kPerformanceMeasureOptions;
}

StringOrDoubleOrPerformanceMeasureOptions StringOrDoubleOrPerformanceMeasureOptions::FromPerformanceMeasureOptions(const PerformanceMeasureOptions& value) {
  StringOrDoubleOrPerformanceMeasureOptions container;
  container.SetPerformanceMeasureOptions(value);
  return container;
}

const String& StringOrDoubleOrPerformanceMeasureOptions::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrDoubleOrPerformanceMeasureOptions::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrDoubleOrPerformanceMeasureOptions StringOrDoubleOrPerformanceMeasureOptions::FromString(const String& value) {
  StringOrDoubleOrPerformanceMeasureOptions container;
  container.SetString(value);
  return container;
}

StringOrDoubleOrPerformanceMeasureOptions::StringOrDoubleOrPerformanceMeasureOptions(const StringOrDoubleOrPerformanceMeasureOptions&) = default;
StringOrDoubleOrPerformanceMeasureOptions::~StringOrDoubleOrPerformanceMeasureOptions() = default;
StringOrDoubleOrPerformanceMeasureOptions& StringOrDoubleOrPerformanceMeasureOptions::operator=(const StringOrDoubleOrPerformanceMeasureOptions&) = default;

void StringOrDoubleOrPerformanceMeasureOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(performance_measure_options_);
}

void V8StringOrDoubleOrPerformanceMeasureOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StringOrDoubleOrPerformanceMeasureOptions& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (IsUndefinedOrNull(v8Value)) {
    PerformanceMeasureOptions cppValue;
    V8PerformanceMeasureOptions::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetPerformanceMeasureOptions(cppValue);
    return;
  }

  if (v8Value->IsObject()) {
    PerformanceMeasureOptions cppValue;
    V8PerformanceMeasureOptions::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetPerformanceMeasureOptions(cppValue);
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
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.Prepare(exceptionState))
      return;
    impl.SetString(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const StringOrDoubleOrPerformanceMeasureOptions& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrDoubleOrPerformanceMeasureOptions::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrDoubleOrPerformanceMeasureOptions::SpecificType::kDouble:
      return v8::Number::New(isolate, impl.GetAsDouble());
    case StringOrDoubleOrPerformanceMeasureOptions::SpecificType::kPerformanceMeasureOptions:
      return ToV8(impl.GetAsPerformanceMeasureOptions(), creationContext, isolate);
    case StringOrDoubleOrPerformanceMeasureOptions::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrDoubleOrPerformanceMeasureOptions NativeValueTraits<StringOrDoubleOrPerformanceMeasureOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  StringOrDoubleOrPerformanceMeasureOptions impl;
  V8StringOrDoubleOrPerformanceMeasureOptions::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
