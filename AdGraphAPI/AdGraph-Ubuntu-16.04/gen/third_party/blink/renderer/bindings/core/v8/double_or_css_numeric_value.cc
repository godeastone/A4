// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/double_or_css_numeric_value.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_numeric_value.h"

namespace blink {

DoubleOrCSSNumericValue::DoubleOrCSSNumericValue() : type_(SpecificType::kNone) {}

CSSNumericValue* DoubleOrCSSNumericValue::GetAsCSSNumericValue() const {
  DCHECK(IsCSSNumericValue());
  return css_numeric_value_;
}

void DoubleOrCSSNumericValue::SetCSSNumericValue(CSSNumericValue* value) {
  DCHECK(IsNull());
  css_numeric_value_ = value;
  type_ = SpecificType::kCSSNumericValue;
}

DoubleOrCSSNumericValue DoubleOrCSSNumericValue::FromCSSNumericValue(CSSNumericValue* value) {
  DoubleOrCSSNumericValue container;
  container.SetCSSNumericValue(value);
  return container;
}

double DoubleOrCSSNumericValue::GetAsDouble() const {
  DCHECK(IsDouble());
  return double_;
}

void DoubleOrCSSNumericValue::SetDouble(double value) {
  DCHECK(IsNull());
  double_ = value;
  type_ = SpecificType::kDouble;
}

DoubleOrCSSNumericValue DoubleOrCSSNumericValue::FromDouble(double value) {
  DoubleOrCSSNumericValue container;
  container.SetDouble(value);
  return container;
}

DoubleOrCSSNumericValue::DoubleOrCSSNumericValue(const DoubleOrCSSNumericValue&) = default;
DoubleOrCSSNumericValue::~DoubleOrCSSNumericValue() = default;
DoubleOrCSSNumericValue& DoubleOrCSSNumericValue::operator=(const DoubleOrCSSNumericValue&) = default;

void DoubleOrCSSNumericValue::Trace(blink::Visitor* visitor) {
  visitor->Trace(css_numeric_value_);
}

void V8DoubleOrCSSNumericValue::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DoubleOrCSSNumericValue& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8CSSNumericValue::hasInstance(v8Value, isolate)) {
    CSSNumericValue* cppValue = V8CSSNumericValue::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetCSSNumericValue(cppValue);
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

v8::Local<v8::Value> ToV8(const DoubleOrCSSNumericValue& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case DoubleOrCSSNumericValue::SpecificType::kNone:
      return v8::Null(isolate);
    case DoubleOrCSSNumericValue::SpecificType::kCSSNumericValue:
      return ToV8(impl.GetAsCSSNumericValue(), creationContext, isolate);
    case DoubleOrCSSNumericValue::SpecificType::kDouble:
      return v8::Number::New(isolate, impl.GetAsDouble());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

DoubleOrCSSNumericValue NativeValueTraits<DoubleOrCSSNumericValue>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DoubleOrCSSNumericValue impl;
  V8DoubleOrCSSNumericValue::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
