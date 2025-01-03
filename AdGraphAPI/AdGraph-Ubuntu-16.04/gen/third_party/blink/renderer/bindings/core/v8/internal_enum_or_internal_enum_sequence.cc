// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/internal_enum_or_internal_enum_sequence.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

InternalEnumOrInternalEnumSequence::InternalEnumOrInternalEnumSequence() : type_(SpecificType::kNone) {}

const String& InternalEnumOrInternalEnumSequence::GetAsInternalEnum() const {
  DCHECK(IsInternalEnum());
  return internal_enum_;
}

void InternalEnumOrInternalEnumSequence::SetInternalEnum(const String& value) {
  DCHECK(IsNull());
  NonThrowableExceptionState exceptionState;
  const char* validValues[] = {
      "foo",
      "bar",
      "baz",
  };
  if (!IsValidEnum(value, validValues, arraysize(validValues), "InternalEnum", exceptionState)) {
    NOTREACHED();
    return;
  }
  internal_enum_ = value;
  type_ = SpecificType::kInternalEnum;
}

InternalEnumOrInternalEnumSequence InternalEnumOrInternalEnumSequence::FromInternalEnum(const String& value) {
  InternalEnumOrInternalEnumSequence container;
  container.SetInternalEnum(value);
  return container;
}

const Vector<String>& InternalEnumOrInternalEnumSequence::GetAsInternalEnumSequence() const {
  DCHECK(IsInternalEnumSequence());
  return internal_enum_sequence_;
}

void InternalEnumOrInternalEnumSequence::SetInternalEnumSequence(const Vector<String>& value) {
  DCHECK(IsNull());
  NonThrowableExceptionState exceptionState;
  const char* validValues[] = {
      "foo",
      "bar",
      "baz",
  };
  if (!IsValidEnum(value, validValues, arraysize(validValues), "InternalEnum", exceptionState)) {
    NOTREACHED();
    return;
  }
  internal_enum_sequence_ = value;
  type_ = SpecificType::kInternalEnumSequence;
}

InternalEnumOrInternalEnumSequence InternalEnumOrInternalEnumSequence::FromInternalEnumSequence(const Vector<String>& value) {
  InternalEnumOrInternalEnumSequence container;
  container.SetInternalEnumSequence(value);
  return container;
}

InternalEnumOrInternalEnumSequence::InternalEnumOrInternalEnumSequence(const InternalEnumOrInternalEnumSequence&) = default;
InternalEnumOrInternalEnumSequence::~InternalEnumOrInternalEnumSequence() = default;
InternalEnumOrInternalEnumSequence& InternalEnumOrInternalEnumSequence::operator=(const InternalEnumOrInternalEnumSequence&) = default;

void InternalEnumOrInternalEnumSequence::Trace(blink::Visitor* visitor) {
}

void V8InternalEnumOrInternalEnumSequence::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, InternalEnumOrInternalEnumSequence& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (HasCallableIteratorSymbol(isolate, v8Value, exceptionState)) {
    Vector<String> cppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    const char* validValues[] = {
        "foo",
        "bar",
        "baz",
    };
    if (!IsValidEnum(cppValue, validValues, arraysize(validValues), "InternalEnum", exceptionState))
      return;
    impl.SetInternalEnumSequence(cppValue);
    return;
  }

  {
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "foo",
        "bar",
        "baz",
    };
    if (!IsValidEnum(cppValue, validValues, arraysize(validValues), "InternalEnum", exceptionState))
      return;
    impl.SetInternalEnum(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const InternalEnumOrInternalEnumSequence& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case InternalEnumOrInternalEnumSequence::SpecificType::kNone:
      return v8::Null(isolate);
    case InternalEnumOrInternalEnumSequence::SpecificType::kInternalEnum:
      return V8String(isolate, impl.GetAsInternalEnum());
    case InternalEnumOrInternalEnumSequence::SpecificType::kInternalEnumSequence:
      return ToV8(impl.GetAsInternalEnumSequence(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

InternalEnumOrInternalEnumSequence NativeValueTraits<InternalEnumOrInternalEnumSequence>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  InternalEnumOrInternalEnumSequence impl;
  V8InternalEnumOrInternalEnumSequence::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
