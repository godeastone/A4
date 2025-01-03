// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/request_or_usv_string.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_request.h"

namespace blink {

RequestOrUSVString::RequestOrUSVString() : type_(SpecificType::kNone) {}

Request* RequestOrUSVString::GetAsRequest() const {
  DCHECK(IsRequest());
  return request_;
}

void RequestOrUSVString::SetRequest(Request* value) {
  DCHECK(IsNull());
  request_ = value;
  type_ = SpecificType::kRequest;
}

RequestOrUSVString RequestOrUSVString::FromRequest(Request* value) {
  RequestOrUSVString container;
  container.SetRequest(value);
  return container;
}

const String& RequestOrUSVString::GetAsUSVString() const {
  DCHECK(IsUSVString());
  return usv_string_;
}

void RequestOrUSVString::SetUSVString(const String& value) {
  DCHECK(IsNull());
  usv_string_ = value;
  type_ = SpecificType::kUSVString;
}

RequestOrUSVString RequestOrUSVString::FromUSVString(const String& value) {
  RequestOrUSVString container;
  container.SetUSVString(value);
  return container;
}

RequestOrUSVString::RequestOrUSVString(const RequestOrUSVString&) = default;
RequestOrUSVString::~RequestOrUSVString() = default;
RequestOrUSVString& RequestOrUSVString::operator=(const RequestOrUSVString&) = default;

void RequestOrUSVString::Trace(blink::Visitor* visitor) {
  visitor->Trace(request_);
}

void V8RequestOrUSVString::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RequestOrUSVString& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8Request::hasInstance(v8Value, isolate)) {
    Request* cppValue = V8Request::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetRequest(cppValue);
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

v8::Local<v8::Value> ToV8(const RequestOrUSVString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case RequestOrUSVString::SpecificType::kNone:
      return v8::Null(isolate);
    case RequestOrUSVString::SpecificType::kRequest:
      return ToV8(impl.GetAsRequest(), creationContext, isolate);
    case RequestOrUSVString::SpecificType::kUSVString:
      return V8String(isolate, impl.GetAsUSVString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

RequestOrUSVString NativeValueTraits<RequestOrUSVString>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RequestOrUSVString impl;
  V8RequestOrUSVString::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
