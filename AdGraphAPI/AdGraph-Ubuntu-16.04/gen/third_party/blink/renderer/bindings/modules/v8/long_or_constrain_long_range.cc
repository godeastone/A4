// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/long_or_constrain_long_range.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

LongOrConstrainLongRange::LongOrConstrainLongRange() : type_(SpecificType::kNone) {}

const ConstrainLongRange& LongOrConstrainLongRange::GetAsConstrainLongRange() const {
  DCHECK(IsConstrainLongRange());
  return constrain_long_range_;
}

void LongOrConstrainLongRange::SetConstrainLongRange(const ConstrainLongRange& value) {
  DCHECK(IsNull());
  constrain_long_range_ = value;
  type_ = SpecificType::kConstrainLongRange;
}

LongOrConstrainLongRange LongOrConstrainLongRange::FromConstrainLongRange(const ConstrainLongRange& value) {
  LongOrConstrainLongRange container;
  container.SetConstrainLongRange(value);
  return container;
}

int32_t LongOrConstrainLongRange::GetAsLong() const {
  DCHECK(IsLong());
  return long_;
}

void LongOrConstrainLongRange::SetLong(int32_t value) {
  DCHECK(IsNull());
  long_ = value;
  type_ = SpecificType::kLong;
}

LongOrConstrainLongRange LongOrConstrainLongRange::FromLong(int32_t value) {
  LongOrConstrainLongRange container;
  container.SetLong(value);
  return container;
}

LongOrConstrainLongRange::LongOrConstrainLongRange(const LongOrConstrainLongRange&) = default;
LongOrConstrainLongRange::~LongOrConstrainLongRange() = default;
LongOrConstrainLongRange& LongOrConstrainLongRange::operator=(const LongOrConstrainLongRange&) = default;

void LongOrConstrainLongRange::Trace(blink::Visitor* visitor) {
  visitor->Trace(constrain_long_range_);
}

void V8LongOrConstrainLongRange::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, LongOrConstrainLongRange& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (IsUndefinedOrNull(v8Value)) {
    ConstrainLongRange cppValue;
    V8ConstrainLongRange::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetConstrainLongRange(cppValue);
    return;
  }

  if (v8Value->IsObject()) {
    ConstrainLongRange cppValue;
    V8ConstrainLongRange::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetConstrainLongRange(cppValue);
    return;
  }

  if (v8Value->IsNumber()) {
    int32_t cppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, v8Value, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.SetLong(cppValue);
    return;
  }

  {
    int32_t cppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, v8Value, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.SetLong(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const LongOrConstrainLongRange& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case LongOrConstrainLongRange::SpecificType::kNone:
      return v8::Null(isolate);
    case LongOrConstrainLongRange::SpecificType::kConstrainLongRange:
      return ToV8(impl.GetAsConstrainLongRange(), creationContext, isolate);
    case LongOrConstrainLongRange::SpecificType::kLong:
      return v8::Integer::New(isolate, impl.GetAsLong());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

LongOrConstrainLongRange NativeValueTraits<LongOrConstrainLongRange>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  LongOrConstrainLongRange impl;
  V8LongOrConstrainLongRange::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
