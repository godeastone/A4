// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/composite_operation_or_composite_operation_or_null_sequence.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

CompositeOperationOrCompositeOperationOrNullSequence::CompositeOperationOrCompositeOperationOrNullSequence() : type_(SpecificType::kNone) {}

const String& CompositeOperationOrCompositeOperationOrNullSequence::GetAsCompositeOperation() const {
  DCHECK(IsCompositeOperation());
  return composite_operation_;
}

void CompositeOperationOrCompositeOperationOrNullSequence::SetCompositeOperation(const String& value) {
  DCHECK(IsNull());
  NonThrowableExceptionState exceptionState;
  const char* validValues[] = {
      "replace",
      "add",
      "accumulate",
  };
  if (!IsValidEnum(value, validValues, arraysize(validValues), "CompositeOperation", exceptionState)) {
    NOTREACHED();
    return;
  }
  composite_operation_ = value;
  type_ = SpecificType::kCompositeOperation;
}

CompositeOperationOrCompositeOperationOrNullSequence CompositeOperationOrCompositeOperationOrNullSequence::FromCompositeOperation(const String& value) {
  CompositeOperationOrCompositeOperationOrNullSequence container;
  container.SetCompositeOperation(value);
  return container;
}

const Vector<String>& CompositeOperationOrCompositeOperationOrNullSequence::GetAsCompositeOperationOrNullSequence() const {
  DCHECK(IsCompositeOperationOrNullSequence());
  return composite_operation_or_null_sequence_;
}

void CompositeOperationOrCompositeOperationOrNullSequence::SetCompositeOperationOrNullSequence(const Vector<String>& value) {
  DCHECK(IsNull());
  NonThrowableExceptionState exceptionState;
  const char* validValues[] = {
      nullptr,
      "replace",
      "add",
      "accumulate",
  };
  if (!IsValidEnum(value, validValues, arraysize(validValues), "CompositeOperation", exceptionState)) {
    NOTREACHED();
    return;
  }
  composite_operation_or_null_sequence_ = value;
  type_ = SpecificType::kCompositeOperationOrNullSequence;
}

CompositeOperationOrCompositeOperationOrNullSequence CompositeOperationOrCompositeOperationOrNullSequence::FromCompositeOperationOrNullSequence(const Vector<String>& value) {
  CompositeOperationOrCompositeOperationOrNullSequence container;
  container.SetCompositeOperationOrNullSequence(value);
  return container;
}

CompositeOperationOrCompositeOperationOrNullSequence::CompositeOperationOrCompositeOperationOrNullSequence(const CompositeOperationOrCompositeOperationOrNullSequence&) = default;
CompositeOperationOrCompositeOperationOrNullSequence::~CompositeOperationOrCompositeOperationOrNullSequence() = default;
CompositeOperationOrCompositeOperationOrNullSequence& CompositeOperationOrCompositeOperationOrNullSequence::operator=(const CompositeOperationOrCompositeOperationOrNullSequence&) = default;

void CompositeOperationOrCompositeOperationOrNullSequence::Trace(blink::Visitor* visitor) {
}

void V8CompositeOperationOrCompositeOperationOrNullSequence::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CompositeOperationOrCompositeOperationOrNullSequence& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (HasCallableIteratorSymbol(isolate, v8Value, exceptionState)) {
    Vector<String> cppValue = NativeValueTraits<IDLSequence<IDLStringBase<kTreatNullAndUndefinedAsNullString>>>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    const char* validValues[] = {
        nullptr,
        "replace",
        "add",
        "accumulate",
    };
    if (!IsValidEnum(cppValue, validValues, arraysize(validValues), "CompositeOperation", exceptionState))
      return;
    impl.SetCompositeOperationOrNullSequence(cppValue);
    return;
  }

  {
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "replace",
        "add",
        "accumulate",
    };
    if (!IsValidEnum(cppValue, validValues, arraysize(validValues), "CompositeOperation", exceptionState))
      return;
    impl.SetCompositeOperation(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const CompositeOperationOrCompositeOperationOrNullSequence& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case CompositeOperationOrCompositeOperationOrNullSequence::SpecificType::kNone:
      return v8::Null(isolate);
    case CompositeOperationOrCompositeOperationOrNullSequence::SpecificType::kCompositeOperation:
      return V8String(isolate, impl.GetAsCompositeOperation());
    case CompositeOperationOrCompositeOperationOrNullSequence::SpecificType::kCompositeOperationOrNullSequence:
      return ToV8(impl.GetAsCompositeOperationOrNullSequence(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

CompositeOperationOrCompositeOperationOrNullSequence NativeValueTraits<CompositeOperationOrCompositeOperationOrNullSequence>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CompositeOperationOrCompositeOperationOrNullSequence impl;
  V8CompositeOperationOrCompositeOperationOrNullSequence::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
