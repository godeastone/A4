// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/boolean_or_byte_string_byte_string_record.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

BooleanOrByteStringByteStringRecord::BooleanOrByteStringByteStringRecord() : type_(SpecificType::kNone) {}

bool BooleanOrByteStringByteStringRecord::GetAsBoolean() const {
  DCHECK(IsBoolean());
  return boolean_;
}

void BooleanOrByteStringByteStringRecord::SetBoolean(bool value) {
  DCHECK(IsNull());
  boolean_ = value;
  type_ = SpecificType::kBoolean;
}

BooleanOrByteStringByteStringRecord BooleanOrByteStringByteStringRecord::FromBoolean(bool value) {
  BooleanOrByteStringByteStringRecord container;
  container.SetBoolean(value);
  return container;
}

const Vector<std::pair<String, String>>& BooleanOrByteStringByteStringRecord::GetAsByteStringByteStringRecord() const {
  DCHECK(IsByteStringByteStringRecord());
  return byte_string_byte_string_record_;
}

void BooleanOrByteStringByteStringRecord::SetByteStringByteStringRecord(const Vector<std::pair<String, String>>& value) {
  DCHECK(IsNull());
  byte_string_byte_string_record_ = value;
  type_ = SpecificType::kByteStringByteStringRecord;
}

BooleanOrByteStringByteStringRecord BooleanOrByteStringByteStringRecord::FromByteStringByteStringRecord(const Vector<std::pair<String, String>>& value) {
  BooleanOrByteStringByteStringRecord container;
  container.SetByteStringByteStringRecord(value);
  return container;
}

BooleanOrByteStringByteStringRecord::BooleanOrByteStringByteStringRecord(const BooleanOrByteStringByteStringRecord&) = default;
BooleanOrByteStringByteStringRecord::~BooleanOrByteStringByteStringRecord() = default;
BooleanOrByteStringByteStringRecord& BooleanOrByteStringByteStringRecord::operator=(const BooleanOrByteStringByteStringRecord&) = default;

void BooleanOrByteStringByteStringRecord::Trace(blink::Visitor* visitor) {
}

void V8BooleanOrByteStringByteStringRecord::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, BooleanOrByteStringByteStringRecord& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (v8Value->IsObject()) {
    Vector<std::pair<String, String>> cppValue = NativeValueTraits<IDLRecord<IDLByteString, IDLByteString>>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetByteStringByteStringRecord(cppValue);
    return;
  }

  if (v8Value->IsBoolean()) {
    impl.SetBoolean(v8Value.As<v8::Boolean>()->Value());
    return;
  }

  {
    impl.SetBoolean(v8Value->BooleanValue());
    return;
  }
}

v8::Local<v8::Value> ToV8(const BooleanOrByteStringByteStringRecord& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case BooleanOrByteStringByteStringRecord::SpecificType::kNone:
      return v8::Null(isolate);
    case BooleanOrByteStringByteStringRecord::SpecificType::kBoolean:
      return v8::Boolean::New(isolate, impl.GetAsBoolean());
    case BooleanOrByteStringByteStringRecord::SpecificType::kByteStringByteStringRecord:
      return ToV8(impl.GetAsByteStringByteStringRecord(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

BooleanOrByteStringByteStringRecord NativeValueTraits<BooleanOrByteStringByteStringRecord>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  BooleanOrByteStringByteStringRecord impl;
  V8BooleanOrByteStringByteStringRecord::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
