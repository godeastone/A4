// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/string_or_trusted_html.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_html.h"

namespace blink {

StringOrTrustedHTML::StringOrTrustedHTML() : type_(SpecificType::kNone) {}

const String& StringOrTrustedHTML::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrTrustedHTML::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrTrustedHTML StringOrTrustedHTML::FromString(const String& value) {
  StringOrTrustedHTML container;
  container.SetString(value);
  return container;
}

TrustedHTML* StringOrTrustedHTML::GetAsTrustedHTML() const {
  DCHECK(IsTrustedHTML());
  return trusted_html_;
}

void StringOrTrustedHTML::SetTrustedHTML(TrustedHTML* value) {
  DCHECK(IsNull());
  trusted_html_ = value;
  type_ = SpecificType::kTrustedHTML;
}

StringOrTrustedHTML StringOrTrustedHTML::FromTrustedHTML(TrustedHTML* value) {
  StringOrTrustedHTML container;
  container.SetTrustedHTML(value);
  return container;
}

StringOrTrustedHTML::StringOrTrustedHTML(const StringOrTrustedHTML&) = default;
StringOrTrustedHTML::~StringOrTrustedHTML() = default;
StringOrTrustedHTML& StringOrTrustedHTML::operator=(const StringOrTrustedHTML&) = default;

void StringOrTrustedHTML::Trace(blink::Visitor* visitor) {
  visitor->Trace(trusted_html_);
}

void V8StringOrTrustedHTML::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StringOrTrustedHTML& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8TrustedHTML::hasInstance(v8Value, isolate)) {
    TrustedHTML* cppValue = V8TrustedHTML::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetTrustedHTML(cppValue);
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

v8::Local<v8::Value> ToV8(const StringOrTrustedHTML& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrTrustedHTML::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrTrustedHTML::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    case StringOrTrustedHTML::SpecificType::kTrustedHTML:
      return ToV8(impl.GetAsTrustedHTML(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrTrustedHTML NativeValueTraits<StringOrTrustedHTML>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  StringOrTrustedHTML impl;
  V8StringOrTrustedHTML::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
