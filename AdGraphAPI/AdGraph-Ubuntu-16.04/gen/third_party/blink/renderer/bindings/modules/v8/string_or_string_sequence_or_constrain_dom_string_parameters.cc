// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/string_or_string_sequence_or_constrain_dom_string_parameters.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"

namespace blink {

StringOrStringSequenceOrConstrainDOMStringParameters::StringOrStringSequenceOrConstrainDOMStringParameters() : type_(SpecificType::kNone) {}

const ConstrainDOMStringParameters& StringOrStringSequenceOrConstrainDOMStringParameters::GetAsConstrainDOMStringParameters() const {
  DCHECK(IsConstrainDOMStringParameters());
  return constrain_dom_string_parameters_;
}

void StringOrStringSequenceOrConstrainDOMStringParameters::SetConstrainDOMStringParameters(const ConstrainDOMStringParameters& value) {
  DCHECK(IsNull());
  constrain_dom_string_parameters_ = value;
  type_ = SpecificType::kConstrainDOMStringParameters;
}

StringOrStringSequenceOrConstrainDOMStringParameters StringOrStringSequenceOrConstrainDOMStringParameters::FromConstrainDOMStringParameters(const ConstrainDOMStringParameters& value) {
  StringOrStringSequenceOrConstrainDOMStringParameters container;
  container.SetConstrainDOMStringParameters(value);
  return container;
}

const String& StringOrStringSequenceOrConstrainDOMStringParameters::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrStringSequenceOrConstrainDOMStringParameters::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrStringSequenceOrConstrainDOMStringParameters StringOrStringSequenceOrConstrainDOMStringParameters::FromString(const String& value) {
  StringOrStringSequenceOrConstrainDOMStringParameters container;
  container.SetString(value);
  return container;
}

const Vector<String>& StringOrStringSequenceOrConstrainDOMStringParameters::GetAsStringSequence() const {
  DCHECK(IsStringSequence());
  return string_sequence_;
}

void StringOrStringSequenceOrConstrainDOMStringParameters::SetStringSequence(const Vector<String>& value) {
  DCHECK(IsNull());
  string_sequence_ = value;
  type_ = SpecificType::kStringSequence;
}

StringOrStringSequenceOrConstrainDOMStringParameters StringOrStringSequenceOrConstrainDOMStringParameters::FromStringSequence(const Vector<String>& value) {
  StringOrStringSequenceOrConstrainDOMStringParameters container;
  container.SetStringSequence(value);
  return container;
}

StringOrStringSequenceOrConstrainDOMStringParameters::StringOrStringSequenceOrConstrainDOMStringParameters(const StringOrStringSequenceOrConstrainDOMStringParameters&) = default;
StringOrStringSequenceOrConstrainDOMStringParameters::~StringOrStringSequenceOrConstrainDOMStringParameters() = default;
StringOrStringSequenceOrConstrainDOMStringParameters& StringOrStringSequenceOrConstrainDOMStringParameters::operator=(const StringOrStringSequenceOrConstrainDOMStringParameters&) = default;

void StringOrStringSequenceOrConstrainDOMStringParameters::Trace(blink::Visitor* visitor) {
  visitor->Trace(constrain_dom_string_parameters_);
}

void V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StringOrStringSequenceOrConstrainDOMStringParameters& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (IsUndefinedOrNull(v8Value)) {
    ConstrainDOMStringParameters cppValue;
    V8ConstrainDOMStringParameters::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetConstrainDOMStringParameters(cppValue);
    return;
  }

  if (HasCallableIteratorSymbol(isolate, v8Value, exceptionState)) {
    Vector<String> cppValue = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetStringSequence(cppValue);
    return;
  }

  if (v8Value->IsObject()) {
    ConstrainDOMStringParameters cppValue;
    V8ConstrainDOMStringParameters::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetConstrainDOMStringParameters(cppValue);
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

v8::Local<v8::Value> ToV8(const StringOrStringSequenceOrConstrainDOMStringParameters& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrStringSequenceOrConstrainDOMStringParameters::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrStringSequenceOrConstrainDOMStringParameters::SpecificType::kConstrainDOMStringParameters:
      return ToV8(impl.GetAsConstrainDOMStringParameters(), creationContext, isolate);
    case StringOrStringSequenceOrConstrainDOMStringParameters::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    case StringOrStringSequenceOrConstrainDOMStringParameters::SpecificType::kStringSequence:
      return ToV8(impl.GetAsStringSequence(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrStringSequenceOrConstrainDOMStringParameters NativeValueTraits<StringOrStringSequenceOrConstrainDOMStringParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  StringOrStringSequenceOrConstrainDOMStringParameters impl;
  V8StringOrStringSequenceOrConstrainDOMStringParameters::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
