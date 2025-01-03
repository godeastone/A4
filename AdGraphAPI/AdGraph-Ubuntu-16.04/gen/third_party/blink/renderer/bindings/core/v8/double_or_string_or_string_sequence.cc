// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/double_or_string_or_string_sequence.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

DoubleOrStringOrStringSequence::DoubleOrStringOrStringSequence() : type_(SpecificType::kNone) {}

double DoubleOrStringOrStringSequence::GetAsDouble() const {
  DCHECK(IsDouble());
  return double_;
}

void DoubleOrStringOrStringSequence::SetDouble(double value) {
  DCHECK(IsNull());
  double_ = value;
  type_ = SpecificType::kDouble;
}

DoubleOrStringOrStringSequence DoubleOrStringOrStringSequence::FromDouble(double value) {
  DoubleOrStringOrStringSequence container;
  container.SetDouble(value);
  return container;
}

const String& DoubleOrStringOrStringSequence::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void DoubleOrStringOrStringSequence::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

DoubleOrStringOrStringSequence DoubleOrStringOrStringSequence::FromString(const String& value) {
  DoubleOrStringOrStringSequence container;
  container.SetString(value);
  return container;
}

const Vector<String>& DoubleOrStringOrStringSequence::GetAsStringSequence() const {
  DCHECK(IsStringSequence());
  return string_sequence_;
}

void DoubleOrStringOrStringSequence::SetStringSequence(const Vector<String>& value) {
  DCHECK(IsNull());
  string_sequence_ = value;
  type_ = SpecificType::kStringSequence;
}

DoubleOrStringOrStringSequence DoubleOrStringOrStringSequence::FromStringSequence(const Vector<String>& value) {
  DoubleOrStringOrStringSequence container;
  container.SetStringSequence(value);
  return container;
}

DoubleOrStringOrStringSequence::DoubleOrStringOrStringSequence(const DoubleOrStringOrStringSequence&) = default;
DoubleOrStringOrStringSequence::~DoubleOrStringOrStringSequence() = default;
DoubleOrStringOrStringSequence& DoubleOrStringOrStringSequence::operator=(const DoubleOrStringOrStringSequence&) = default;

void DoubleOrStringOrStringSequence::Trace(blink::Visitor* visitor) {
}

void V8DoubleOrStringOrStringSequence::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DoubleOrStringOrStringSequence& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (HasCallableIteratorSymbol(isolate, v8Value, exceptionState)) {
    Vector<String> cppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetStringSequence(cppValue);
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

v8::Local<v8::Value> ToV8(const DoubleOrStringOrStringSequence& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case DoubleOrStringOrStringSequence::SpecificType::kNone:
      return v8::Null(isolate);
    case DoubleOrStringOrStringSequence::SpecificType::kDouble:
      return v8::Number::New(isolate, impl.GetAsDouble());
    case DoubleOrStringOrStringSequence::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    case DoubleOrStringOrStringSequence::SpecificType::kStringSequence:
      return ToV8(impl.GetAsStringSequence(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

DoubleOrStringOrStringSequence NativeValueTraits<DoubleOrStringOrStringSequence>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DoubleOrStringOrStringSequence impl;
  V8DoubleOrStringOrStringSequence::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
