// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/double_or_scroll_timeline_auto_keyword.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

DoubleOrScrollTimelineAutoKeyword::DoubleOrScrollTimelineAutoKeyword() : type_(SpecificType::kNone) {}

double DoubleOrScrollTimelineAutoKeyword::GetAsDouble() const {
  DCHECK(IsDouble());
  return double_;
}

void DoubleOrScrollTimelineAutoKeyword::SetDouble(double value) {
  DCHECK(IsNull());
  double_ = value;
  type_ = SpecificType::kDouble;
}

DoubleOrScrollTimelineAutoKeyword DoubleOrScrollTimelineAutoKeyword::FromDouble(double value) {
  DoubleOrScrollTimelineAutoKeyword container;
  container.SetDouble(value);
  return container;
}

const String& DoubleOrScrollTimelineAutoKeyword::GetAsScrollTimelineAutoKeyword() const {
  DCHECK(IsScrollTimelineAutoKeyword());
  return scroll_timeline_auto_keyword_;
}

void DoubleOrScrollTimelineAutoKeyword::SetScrollTimelineAutoKeyword(const String& value) {
  DCHECK(IsNull());
  NonThrowableExceptionState exceptionState;
  const char* validValues[] = {
      "auto",
  };
  if (!IsValidEnum(value, validValues, arraysize(validValues), "ScrollTimelineAutoKeyword", exceptionState)) {
    NOTREACHED();
    return;
  }
  scroll_timeline_auto_keyword_ = value;
  type_ = SpecificType::kScrollTimelineAutoKeyword;
}

DoubleOrScrollTimelineAutoKeyword DoubleOrScrollTimelineAutoKeyword::FromScrollTimelineAutoKeyword(const String& value) {
  DoubleOrScrollTimelineAutoKeyword container;
  container.SetScrollTimelineAutoKeyword(value);
  return container;
}

DoubleOrScrollTimelineAutoKeyword::DoubleOrScrollTimelineAutoKeyword(const DoubleOrScrollTimelineAutoKeyword&) = default;
DoubleOrScrollTimelineAutoKeyword::~DoubleOrScrollTimelineAutoKeyword() = default;
DoubleOrScrollTimelineAutoKeyword& DoubleOrScrollTimelineAutoKeyword::operator=(const DoubleOrScrollTimelineAutoKeyword&) = default;

void DoubleOrScrollTimelineAutoKeyword::Trace(blink::Visitor* visitor) {
}

void V8DoubleOrScrollTimelineAutoKeyword::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DoubleOrScrollTimelineAutoKeyword& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

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
    const char* validValues[] = {
        "auto",
    };
    if (!IsValidEnum(cppValue, validValues, arraysize(validValues), "ScrollTimelineAutoKeyword", exceptionState))
      return;
    impl.SetScrollTimelineAutoKeyword(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const DoubleOrScrollTimelineAutoKeyword& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case DoubleOrScrollTimelineAutoKeyword::SpecificType::kNone:
      return v8::Null(isolate);
    case DoubleOrScrollTimelineAutoKeyword::SpecificType::kDouble:
      return v8::Number::New(isolate, impl.GetAsDouble());
    case DoubleOrScrollTimelineAutoKeyword::SpecificType::kScrollTimelineAutoKeyword:
      return V8String(isolate, impl.GetAsScrollTimelineAutoKeyword());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

DoubleOrScrollTimelineAutoKeyword NativeValueTraits<DoubleOrScrollTimelineAutoKeyword>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DoubleOrScrollTimelineAutoKeyword impl;
  V8DoubleOrScrollTimelineAutoKeyword::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
