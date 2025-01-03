// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_response_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ResponseInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "headers",
    "status",
    "statusText",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ResponseInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ResponseInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ResponseInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> headersValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&headersValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (headersValue.IsEmpty() || headersValue->IsUndefined()) {
    // Do nothing.
  } else {
    ByteStringSequenceSequenceOrByteStringByteStringRecord headersCppValue;
    V8ByteStringSequenceSequenceOrByteStringByteStringRecord::ToImpl(isolate, headersValue, headersCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setHeaders(headersCppValue);
  }

  v8::Local<v8::Value> statusValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&statusValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (statusValue.IsEmpty() || statusValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t statusCppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, statusValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setStatus(statusCppValue);
  }

  v8::Local<v8::Value> statusTextValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&statusTextValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (statusTextValue.IsEmpty() || statusTextValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> statusTextCppValue = NativeValueTraits<IDLByteString>::NativeValue(isolate, statusTextValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setStatusText(statusTextCppValue);
  }
}

v8::Local<v8::Value> ResponseInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ResponseInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ResponseInit(const ResponseInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ResponseInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> headersValue;
  bool headersHasValueOrDefault = false;
  if (impl.hasHeaders()) {
    headersValue = ToV8(impl.headers(), creationContext, isolate);
    headersHasValueOrDefault = true;
  }
  if (headersHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), headersValue))) {
    return false;
  }

  v8::Local<v8::Value> statusValue;
  bool statusHasValueOrDefault = false;
  if (impl.hasStatus()) {
    statusValue = v8::Integer::NewFromUnsigned(isolate, impl.status());
    statusHasValueOrDefault = true;
  } else {
    statusValue = v8::Integer::NewFromUnsigned(isolate, 200u);
    statusHasValueOrDefault = true;
  }
  if (statusHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), statusValue))) {
    return false;
  }

  v8::Local<v8::Value> statusTextValue;
  bool statusTextHasValueOrDefault = false;
  if (impl.hasStatusText()) {
    statusTextValue = V8String(isolate, impl.statusText());
    statusTextHasValueOrDefault = true;
  } else {
    statusTextValue = V8String(isolate, "OK");
    statusTextHasValueOrDefault = true;
  }
  if (statusTextHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), statusTextValue))) {
    return false;
  }

  return true;
}

ResponseInit NativeValueTraits<ResponseInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ResponseInit impl;
  V8ResponseInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
