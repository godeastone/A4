// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/string_or_trusted_script_url.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_script_url.h"

namespace blink {

StringOrTrustedScriptURL::StringOrTrustedScriptURL() : type_(SpecificType::kNone) {}

const String& StringOrTrustedScriptURL::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void StringOrTrustedScriptURL::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

StringOrTrustedScriptURL StringOrTrustedScriptURL::FromString(const String& value) {
  StringOrTrustedScriptURL container;
  container.SetString(value);
  return container;
}

TrustedScriptURL* StringOrTrustedScriptURL::GetAsTrustedScriptURL() const {
  DCHECK(IsTrustedScriptURL());
  return trusted_script_url_;
}

void StringOrTrustedScriptURL::SetTrustedScriptURL(TrustedScriptURL* value) {
  DCHECK(IsNull());
  trusted_script_url_ = value;
  type_ = SpecificType::kTrustedScriptURL;
}

StringOrTrustedScriptURL StringOrTrustedScriptURL::FromTrustedScriptURL(TrustedScriptURL* value) {
  StringOrTrustedScriptURL container;
  container.SetTrustedScriptURL(value);
  return container;
}

StringOrTrustedScriptURL::StringOrTrustedScriptURL(const StringOrTrustedScriptURL&) = default;
StringOrTrustedScriptURL::~StringOrTrustedScriptURL() = default;
StringOrTrustedScriptURL& StringOrTrustedScriptURL::operator=(const StringOrTrustedScriptURL&) = default;

void StringOrTrustedScriptURL::Trace(blink::Visitor* visitor) {
  visitor->Trace(trusted_script_url_);
}

void V8StringOrTrustedScriptURL::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, StringOrTrustedScriptURL& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8TrustedScriptURL::hasInstance(v8Value, isolate)) {
    TrustedScriptURL* cppValue = V8TrustedScriptURL::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetTrustedScriptURL(cppValue);
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

v8::Local<v8::Value> ToV8(const StringOrTrustedScriptURL& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case StringOrTrustedScriptURL::SpecificType::kNone:
      return v8::Null(isolate);
    case StringOrTrustedScriptURL::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    case StringOrTrustedScriptURL::SpecificType::kTrustedScriptURL:
      return ToV8(impl.GetAsTrustedScriptURL(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

StringOrTrustedScriptURL NativeValueTraits<StringOrTrustedScriptURL>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  StringOrTrustedScriptURL impl;
  V8StringOrTrustedScriptURL::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
