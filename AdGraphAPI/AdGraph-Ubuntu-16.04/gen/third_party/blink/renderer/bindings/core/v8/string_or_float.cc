// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/string_or_float.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

StringOrFloat::StringOrFloat() : type_(SpecificType::kNone) {}

float StringOrFloat::GetAsFloat() const {
  DCHECK(IsFloat());
  return float_;
}

void StringOrFloat::SetFloat(float value) {
  DCHECK(IsNull());
  float_ = value;
  type_ = SpecificType::kFloat;
}

StringOrFloat StringOrFloat::FromFloat(float value) {
  StringOrFloat container;
  container.SetFloat(value);
  return container;
}

const String& StringOrFloat::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrFloat::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrFloat StringOrFloat::FromString(const String& value) {
  StringOrFloat container;
  container.SetString(value);
  return container;
}

StringOrFloat::StringOrFloat(const StringOrFloat&) = default;
StringOrFloat::~StringOrFloat() = default;
StringOrFloat& StringOrFloat::operator=(const StringOrFloat&) = default;

void StringOrFloat::Trace(blink::Visitor* visitor) {
}

void V8StringOrFloat::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StringOrFloat& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (v8Value->IsNumber()) {
    float cppValue = NativeValueTraits<IDLFloat>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetFloat(cppValue);
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

v8::Local<v8::Value> ToV8(const StringOrFloat& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrFloat::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrFloat::SpecificType::kFloat:
      return v8::Number::New(isolate, impl.GetAsFloat());
    case StringOrFloat::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrFloat NativeValueTraits<StringOrFloat>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  StringOrFloat impl;
  V8StringOrFloat::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
