// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/usv_string_or_trusted_url.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_trusted_url.h"

namespace blink {

USVStringOrTrustedURL::USVStringOrTrustedURL() : type_(SpecificType::kNone) {}

TrustedURL* USVStringOrTrustedURL::GetAsTrustedURL() const {
  DCHECK(IsTrustedURL());
  return trusted_url_;
}

void USVStringOrTrustedURL::SetTrustedURL(TrustedURL* value) {
  DCHECK(IsNull());
  trusted_url_ = value;
  type_ = SpecificType::kTrustedURL;
}

USVStringOrTrustedURL USVStringOrTrustedURL::FromTrustedURL(TrustedURL* value) {
  USVStringOrTrustedURL container;
  container.SetTrustedURL(value);
  return container;
}

const String& USVStringOrTrustedURL::GetAsUSVString() const {
  DCHECK(IsUSVString());
  return usv_string_;
}

void USVStringOrTrustedURL::SetUSVString(const String& value) {
  DCHECK(IsNull());
  usv_string_ = value;
  type_ = SpecificType::kUSVString;
}

USVStringOrTrustedURL USVStringOrTrustedURL::FromUSVString(const String& value) {
  USVStringOrTrustedURL container;
  container.SetUSVString(value);
  return container;
}

USVStringOrTrustedURL::USVStringOrTrustedURL(const USVStringOrTrustedURL&) = default;
USVStringOrTrustedURL::~USVStringOrTrustedURL() = default;
USVStringOrTrustedURL& USVStringOrTrustedURL::operator=(const USVStringOrTrustedURL&) = default;

void USVStringOrTrustedURL::Trace(blink::Visitor* visitor) {
  visitor->Trace(trusted_url_);
}

void V8USVStringOrTrustedURL::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, USVStringOrTrustedURL& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8TrustedURL::hasInstance(v8Value, isolate)) {
    TrustedURL* cppValue = V8TrustedURL::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetTrustedURL(cppValue);
    return;
  }

  {
    V8StringResource<> cppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetUSVString(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const USVStringOrTrustedURL& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case USVStringOrTrustedURL::SpecificType::kNone:
      return v8::Null(isolate);
    case USVStringOrTrustedURL::SpecificType::kTrustedURL:
      return ToV8(impl.GetAsTrustedURL(), creationContext, isolate);
    case USVStringOrTrustedURL::SpecificType::kUSVString:
      return V8String(isolate, impl.GetAsUSVString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

USVStringOrTrustedURL NativeValueTraits<USVStringOrTrustedURL>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  USVStringOrTrustedURL impl;
  V8USVStringOrTrustedURL::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
