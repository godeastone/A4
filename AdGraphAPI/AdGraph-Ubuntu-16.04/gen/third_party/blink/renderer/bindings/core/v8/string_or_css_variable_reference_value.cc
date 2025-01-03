// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/string_or_css_variable_reference_value.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_variable_reference_value.h"

namespace blink {

StringOrCSSVariableReferenceValue::StringOrCSSVariableReferenceValue() : type_(SpecificType::kNone) {}

CSSStyleVariableReferenceValue* StringOrCSSVariableReferenceValue::GetAsCSSVariableReferenceValue() const {
  DCHECK(IsCSSVariableReferenceValue());
  return css_variable_reference_value_;
}

void StringOrCSSVariableReferenceValue::SetCSSVariableReferenceValue(CSSStyleVariableReferenceValue* value) {
  DCHECK(IsNull());
  css_variable_reference_value_ = value;
  type_ = SpecificType::kCSSVariableReferenceValue;
}

StringOrCSSVariableReferenceValue StringOrCSSVariableReferenceValue::FromCSSVariableReferenceValue(CSSStyleVariableReferenceValue* value) {
  StringOrCSSVariableReferenceValue container;
  container.SetCSSVariableReferenceValue(value);
  return container;
}

const String& StringOrCSSVariableReferenceValue::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrCSSVariableReferenceValue::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrCSSVariableReferenceValue StringOrCSSVariableReferenceValue::FromString(const String& value) {
  StringOrCSSVariableReferenceValue container;
  container.SetString(value);
  return container;
}

StringOrCSSVariableReferenceValue::StringOrCSSVariableReferenceValue(const StringOrCSSVariableReferenceValue&) = default;
StringOrCSSVariableReferenceValue::~StringOrCSSVariableReferenceValue() = default;
StringOrCSSVariableReferenceValue& StringOrCSSVariableReferenceValue::operator=(const StringOrCSSVariableReferenceValue&) = default;

void StringOrCSSVariableReferenceValue::Trace(blink::Visitor* visitor) {
  visitor->Trace(css_variable_reference_value_);
}

void V8StringOrCSSVariableReferenceValue::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StringOrCSSVariableReferenceValue& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8CSSVariableReferenceValue::hasInstance(v8Value, isolate)) {
    CSSStyleVariableReferenceValue* cppValue = V8CSSVariableReferenceValue::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetCSSVariableReferenceValue(cppValue);
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

v8::Local<v8::Value> ToV8(const StringOrCSSVariableReferenceValue& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrCSSVariableReferenceValue::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrCSSVariableReferenceValue::SpecificType::kCSSVariableReferenceValue:
      return ToV8(impl.GetAsCSSVariableReferenceValue(), creationContext, isolate);
    case StringOrCSSVariableReferenceValue::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrCSSVariableReferenceValue NativeValueTraits<StringOrCSSVariableReferenceValue>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  StringOrCSSVariableReferenceValue impl;
  V8StringOrCSSVariableReferenceValue::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
