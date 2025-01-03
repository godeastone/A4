// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_server.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCIceServerKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "credential",
    "url",
    "urls",
    "username",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8RTCIceServer::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RTCIceServer& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCIceServerKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> credentialValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&credentialValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (credentialValue.IsEmpty() || credentialValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> credentialCppValue = credentialValue;
    if (!credentialCppValue.Prepare(exceptionState))
      return;
    impl.setCredential(credentialCppValue);
  }

  v8::Local<v8::Value> urlValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&urlValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (urlValue.IsEmpty() || urlValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> urlCppValue = urlValue;
    if (!urlCppValue.Prepare(exceptionState))
      return;
    impl.setURL(urlCppValue);
  }

  v8::Local<v8::Value> urlsValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&urlsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (urlsValue.IsEmpty() || urlsValue->IsUndefined()) {
    // Do nothing.
  } else {
    StringOrStringSequence urlsCppValue;
    V8StringOrStringSequence::ToImpl(isolate, urlsValue, urlsCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setURLs(urlsCppValue);
  }

  v8::Local<v8::Value> usernameValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&usernameValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (usernameValue.IsEmpty() || usernameValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> usernameCppValue = usernameValue;
    if (!usernameCppValue.Prepare(exceptionState))
      return;
    impl.setUsername(usernameCppValue);
  }
}

v8::Local<v8::Value> RTCIceServer::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCIceServer(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCIceServer(const RTCIceServer& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCIceServerKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> credentialValue;
  bool credentialHasValueOrDefault = false;
  if (impl.hasCredential()) {
    credentialValue = V8String(isolate, impl.credential());
    credentialHasValueOrDefault = true;
  }
  if (credentialHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), credentialValue))) {
    return false;
  }

  v8::Local<v8::Value> urlValue;
  bool urlHasValueOrDefault = false;
  if (impl.hasURL()) {
    urlValue = V8String(isolate, impl.url());
    urlHasValueOrDefault = true;
  }
  if (urlHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), urlValue))) {
    return false;
  }

  v8::Local<v8::Value> urlsValue;
  bool urlsHasValueOrDefault = false;
  if (impl.hasURLs()) {
    urlsValue = ToV8(impl.urls(), creationContext, isolate);
    urlsHasValueOrDefault = true;
  }
  if (urlsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), urlsValue))) {
    return false;
  }

  v8::Local<v8::Value> usernameValue;
  bool usernameHasValueOrDefault = false;
  if (impl.hasUsername()) {
    usernameValue = V8String(isolate, impl.username());
    usernameHasValueOrDefault = true;
  }
  if (usernameHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), usernameValue))) {
    return false;
  }

  return true;
}

RTCIceServer NativeValueTraits<RTCIceServer>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RTCIceServer impl;
  V8RTCIceServer::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
