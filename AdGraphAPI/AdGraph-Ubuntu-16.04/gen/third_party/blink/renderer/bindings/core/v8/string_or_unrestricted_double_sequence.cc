// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/string_or_unrestricted_double_sequence.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

StringOrUnrestrictedDoubleSequence::StringOrUnrestrictedDoubleSequence() : type_(SpecificType::kNone) {}

const String& StringOrUnrestrictedDoubleSequence::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrUnrestrictedDoubleSequence::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrUnrestrictedDoubleSequence StringOrUnrestrictedDoubleSequence::FromString(const String& value) {
  StringOrUnrestrictedDoubleSequence container;
  container.SetString(value);
  return container;
}

const Vector<double>& StringOrUnrestrictedDoubleSequence::GetAsUnrestrictedDoubleSequence() const {
  DCHECK(IsUnrestrictedDoubleSequence());
  return unrestricted_double_sequence_;
}

void StringOrUnrestrictedDoubleSequence::SetUnrestrictedDoubleSequence(const Vector<double>& value) {
  DCHECK(IsNull());
  unrestricted_double_sequence_ = value;
  type_ = SpecificType::kUnrestrictedDoubleSequence;
}

StringOrUnrestrictedDoubleSequence StringOrUnrestrictedDoubleSequence::FromUnrestrictedDoubleSequence(const Vector<double>& value) {
  StringOrUnrestrictedDoubleSequence container;
  container.SetUnrestrictedDoubleSequence(value);
  return container;
}

StringOrUnrestrictedDoubleSequence::StringOrUnrestrictedDoubleSequence(const StringOrUnrestrictedDoubleSequence&) = default;
StringOrUnrestrictedDoubleSequence::~StringOrUnrestrictedDoubleSequence() = default;
StringOrUnrestrictedDoubleSequence& StringOrUnrestrictedDoubleSequence::operator=(const StringOrUnrestrictedDoubleSequence&) = default;

void StringOrUnrestrictedDoubleSequence::Trace(blink::Visitor* visitor) {
}

void V8StringOrUnrestrictedDoubleSequence::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StringOrUnrestrictedDoubleSequence& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (HasCallableIteratorSymbol(isolate, v8Value, exceptionState)) {
    Vector<double> cppValue = NativeValueTraits<IDLSequence<IDLUnrestrictedDouble>>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetUnrestrictedDoubleSequence(cppValue);
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

v8::Local<v8::Value> ToV8(const StringOrUnrestrictedDoubleSequence& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrUnrestrictedDoubleSequence::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrUnrestrictedDoubleSequence::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    case StringOrUnrestrictedDoubleSequence::SpecificType::kUnrestrictedDoubleSequence:
      return ToV8(impl.GetAsUnrestrictedDoubleSequence(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrUnrestrictedDoubleSequence NativeValueTraits<StringOrUnrestrictedDoubleSequence>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  StringOrUnrestrictedDoubleSequence impl;
  V8StringOrUnrestrictedDoubleSequence::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
