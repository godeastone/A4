// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/double_or_auto_keyword.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

DoubleOrAutoKeyword::DoubleOrAutoKeyword() : type_(SpecificType::kNone) {}

const String& DoubleOrAutoKeyword::GetAsAutoKeyword() const {
  DCHECK(IsAutoKeyword());
  return auto_keyword_;
}

void DoubleOrAutoKeyword::SetAutoKeyword(const String& value) {
  DCHECK(IsNull());
  NonThrowableExceptionState exceptionState;
  const char* validValues[] = {
      "auto",
  };
  if (!IsValidEnum(value, validValues, arraysize(validValues), "AutoKeyword", exceptionState)) {
    NOTREACHED();
    return;
  }
  auto_keyword_ = value;
  type_ = SpecificType::kAutoKeyword;
}

DoubleOrAutoKeyword DoubleOrAutoKeyword::FromAutoKeyword(const String& value) {
  DoubleOrAutoKeyword container;
  container.SetAutoKeyword(value);
  return container;
}

double DoubleOrAutoKeyword::GetAsDouble() const {
  DCHECK(IsDouble());
  return double_;
}

void DoubleOrAutoKeyword::SetDouble(double value) {
  DCHECK(IsNull());
  double_ = value;
  type_ = SpecificType::kDouble;
}

DoubleOrAutoKeyword DoubleOrAutoKeyword::FromDouble(double value) {
  DoubleOrAutoKeyword container;
  container.SetDouble(value);
  return container;
}

DoubleOrAutoKeyword::DoubleOrAutoKeyword(const DoubleOrAutoKeyword&) = default;
DoubleOrAutoKeyword::~DoubleOrAutoKeyword() = default;
DoubleOrAutoKeyword& DoubleOrAutoKeyword::operator=(const DoubleOrAutoKeyword&) = default;

void DoubleOrAutoKeyword::Trace(blink::Visitor* visitor) {
}

void V8DoubleOrAutoKeyword::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DoubleOrAutoKeyword& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
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
    if (!IsValidEnum(cppValue, validValues, arraysize(validValues), "AutoKeyword", exceptionState))
      return;
    impl.SetAutoKeyword(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const DoubleOrAutoKeyword& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case DoubleOrAutoKeyword::SpecificType::kNone:
      return v8::Null(isolate);
    case DoubleOrAutoKeyword::SpecificType::kAutoKeyword:
      return V8String(isolate, impl.GetAsAutoKeyword());
    case DoubleOrAutoKeyword::SpecificType::kDouble:
      return v8::Number::New(isolate, impl.GetAsDouble());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

DoubleOrAutoKeyword NativeValueTraits<DoubleOrAutoKeyword>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DoubleOrAutoKeyword impl;
  V8DoubleOrAutoKeyword::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
