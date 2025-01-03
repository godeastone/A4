// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/unsigned_long_or_unsigned_long_sequence.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

UnsignedLongOrUnsignedLongSequence::UnsignedLongOrUnsignedLongSequence() : type_(SpecificType::kNone) {}

uint32_t UnsignedLongOrUnsignedLongSequence::GetAsUnsignedLong() const {
  DCHECK(IsUnsignedLong());
  return unsigned_long_;
}

void UnsignedLongOrUnsignedLongSequence::SetUnsignedLong(uint32_t value) {
  DCHECK(IsNull());
  unsigned_long_ = value;
  type_ = SpecificType::kUnsignedLong;
}

UnsignedLongOrUnsignedLongSequence UnsignedLongOrUnsignedLongSequence::FromUnsignedLong(uint32_t value) {
  UnsignedLongOrUnsignedLongSequence container;
  container.SetUnsignedLong(value);
  return container;
}

const Vector<uint32_t>& UnsignedLongOrUnsignedLongSequence::GetAsUnsignedLongSequence() const {
  DCHECK(IsUnsignedLongSequence());
  return unsigned_long_sequence_;
}

void UnsignedLongOrUnsignedLongSequence::SetUnsignedLongSequence(const Vector<uint32_t>& value) {
  DCHECK(IsNull());
  unsigned_long_sequence_ = value;
  type_ = SpecificType::kUnsignedLongSequence;
}

UnsignedLongOrUnsignedLongSequence UnsignedLongOrUnsignedLongSequence::FromUnsignedLongSequence(const Vector<uint32_t>& value) {
  UnsignedLongOrUnsignedLongSequence container;
  container.SetUnsignedLongSequence(value);
  return container;
}

UnsignedLongOrUnsignedLongSequence::UnsignedLongOrUnsignedLongSequence(const UnsignedLongOrUnsignedLongSequence&) = default;
UnsignedLongOrUnsignedLongSequence::~UnsignedLongOrUnsignedLongSequence() = default;
UnsignedLongOrUnsignedLongSequence& UnsignedLongOrUnsignedLongSequence::operator=(const UnsignedLongOrUnsignedLongSequence&) = default;

void UnsignedLongOrUnsignedLongSequence::Trace(blink::Visitor* visitor) {
}

void V8UnsignedLongOrUnsignedLongSequence::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, UnsignedLongOrUnsignedLongSequence& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (HasCallableIteratorSymbol(isolate, v8Value, exceptionState)) {
    Vector<uint32_t> cppValue = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetUnsignedLongSequence(cppValue);
    return;
  }

  if (v8Value->IsNumber()) {
    uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, v8Value, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.SetUnsignedLong(cppValue);
    return;
  }

  {
    uint32_t cppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, v8Value, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.SetUnsignedLong(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const UnsignedLongOrUnsignedLongSequence& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case UnsignedLongOrUnsignedLongSequence::SpecificType::kNone:
      return v8::Null(isolate);
    case UnsignedLongOrUnsignedLongSequence::SpecificType::kUnsignedLong:
      return v8::Integer::NewFromUnsigned(isolate, impl.GetAsUnsignedLong());
    case UnsignedLongOrUnsignedLongSequence::SpecificType::kUnsignedLongSequence:
      return ToV8(impl.GetAsUnsignedLongSequence(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

UnsignedLongOrUnsignedLongSequence NativeValueTraits<UnsignedLongOrUnsignedLongSequence>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  UnsignedLongOrUnsignedLongSequence impl;
  V8UnsignedLongOrUnsignedLongSequence::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
