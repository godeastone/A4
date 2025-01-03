// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/double_or_constrain_double_range.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

DoubleOrConstrainDoubleRange::DoubleOrConstrainDoubleRange() : type_(SpecificType::kNone) {}

const ConstrainDoubleRange& DoubleOrConstrainDoubleRange::GetAsConstrainDoubleRange() const {
  DCHECK(IsConstrainDoubleRange());
  return constrain_double_range_;
}

void DoubleOrConstrainDoubleRange::SetConstrainDoubleRange(const ConstrainDoubleRange& value) {
  DCHECK(IsNull());
  constrain_double_range_ = value;
  type_ = SpecificType::kConstrainDoubleRange;
}

DoubleOrConstrainDoubleRange DoubleOrConstrainDoubleRange::FromConstrainDoubleRange(const ConstrainDoubleRange& value) {
  DoubleOrConstrainDoubleRange container;
  container.SetConstrainDoubleRange(value);
  return container;
}

double DoubleOrConstrainDoubleRange::GetAsDouble() const {
  DCHECK(IsDouble());
  return double_;
}

void DoubleOrConstrainDoubleRange::SetDouble(double value) {
  DCHECK(IsNull());
  double_ = value;
  type_ = SpecificType::kDouble;
}

DoubleOrConstrainDoubleRange DoubleOrConstrainDoubleRange::FromDouble(double value) {
  DoubleOrConstrainDoubleRange container;
  container.SetDouble(value);
  return container;
}

DoubleOrConstrainDoubleRange::DoubleOrConstrainDoubleRange(const DoubleOrConstrainDoubleRange&) = default;
DoubleOrConstrainDoubleRange::~DoubleOrConstrainDoubleRange() = default;
DoubleOrConstrainDoubleRange& DoubleOrConstrainDoubleRange::operator=(const DoubleOrConstrainDoubleRange&) = default;

void DoubleOrConstrainDoubleRange::Trace(blink::Visitor* visitor) {
  visitor->Trace(constrain_double_range_);
}

void V8DoubleOrConstrainDoubleRange::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DoubleOrConstrainDoubleRange& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (IsUndefinedOrNull(v8Value)) {
    ConstrainDoubleRange cppValue;
    V8ConstrainDoubleRange::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetConstrainDoubleRange(cppValue);
    return;
  }

  if (v8Value->IsObject()) {
    ConstrainDoubleRange cppValue;
    V8ConstrainDoubleRange::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetConstrainDoubleRange(cppValue);
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

v8::Local<v8::Value> ToV8(const DoubleOrConstrainDoubleRange& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case DoubleOrConstrainDoubleRange::SpecificType::kNone:
      return v8::Null(isolate);
    case DoubleOrConstrainDoubleRange::SpecificType::kConstrainDoubleRange:
      return ToV8(impl.GetAsConstrainDoubleRange(), creationContext, isolate);
    case DoubleOrConstrainDoubleRange::SpecificType::kDouble:
      return v8::Number::New(isolate, impl.GetAsDouble());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

DoubleOrConstrainDoubleRange NativeValueTraits<DoubleOrConstrainDoubleRange>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DoubleOrConstrainDoubleRange impl;
  V8DoubleOrConstrainDoubleRange::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
