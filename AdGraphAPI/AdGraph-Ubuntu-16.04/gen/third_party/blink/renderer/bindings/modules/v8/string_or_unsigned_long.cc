// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/string_or_unsigned_long.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

StringOrUnsignedLong::StringOrUnsignedLong() : type_(SpecificType::kNone) {}

const String& StringOrUnsignedLong::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrUnsignedLong::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrUnsignedLong StringOrUnsignedLong::FromString(const String& value) {
  StringOrUnsignedLong container;
  container.SetString(value);
  return container;
}

uint32_t StringOrUnsignedLong::GetAsUnsignedLong() const {
  DCHECK(IsUnsignedLong());
  return unsigned_long_;
}

void StringOrUnsignedLong::SetUnsignedLong(uint32_t value) {
  DCHECK(IsNull());
  unsigned_long_ = value;
  type_ = SpecificType::kUnsignedLong;
}

StringOrUnsignedLong StringOrUnsignedLong::FromUnsignedLong(uint32_t value) {
  StringOrUnsignedLong container;
  container.SetUnsignedLong(value);
  return container;
}

StringOrUnsignedLong::StringOrUnsignedLong(const StringOrUnsignedLong&) = default;
StringOrUnsignedLong::~StringOrUnsignedLong() = default;
StringOrUnsignedLong& StringOrUnsignedLong::operator=(const StringOrUnsignedLong&) = default;

void StringOrUnsignedLong::Trace(blink::Visitor* visitor) {
}

void V8StringOrUnsignedLong::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StringOrUnsignedLong& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (v8Value->IsNumber()) {
    uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, v8Value, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.SetUnsignedLong(cppValue);
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

v8::Local<v8::Value> ToV8(const StringOrUnsignedLong& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrUnsignedLong::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrUnsignedLong::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    case StringOrUnsignedLong::SpecificType::kUnsignedLong:
      return v8::Integer::NewFromUnsigned(isolate, impl.GetAsUnsignedLong());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrUnsignedLong NativeValueTraits<StringOrUnsignedLong>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  StringOrUnsignedLong impl;
  V8StringOrUnsignedLong::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
