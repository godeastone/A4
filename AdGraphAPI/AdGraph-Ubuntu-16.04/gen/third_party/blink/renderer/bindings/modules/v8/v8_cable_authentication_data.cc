// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_cable_authentication_data.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CableAuthenticationDataKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "authenticatorEid",
    "clientEid",
    "sessionPreKey",
    "version",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8CableAuthenticationData::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CableAuthenticationData& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): authenticatorEid, clientEid, sessionPreKey, version.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CableAuthenticationDataKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> authenticatorEidValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&authenticatorEidValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (authenticatorEidValue.IsEmpty() || authenticatorEidValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member authenticatorEid is undefined.");
    return;
  } else {
    ArrayBufferOrArrayBufferView authenticatorEidCppValue;
    V8ArrayBufferOrArrayBufferView::ToImpl(isolate, authenticatorEidValue, authenticatorEidCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAuthenticatorEid(authenticatorEidCppValue);
  }

  v8::Local<v8::Value> clientEidValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&clientEidValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (clientEidValue.IsEmpty() || clientEidValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member clientEid is undefined.");
    return;
  } else {
    ArrayBufferOrArrayBufferView clientEidCppValue;
    V8ArrayBufferOrArrayBufferView::ToImpl(isolate, clientEidValue, clientEidCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setClientEid(clientEidCppValue);
  }

  v8::Local<v8::Value> sessionPreKeyValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&sessionPreKeyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sessionPreKeyValue.IsEmpty() || sessionPreKeyValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member sessionPreKey is undefined.");
    return;
  } else {
    ArrayBufferOrArrayBufferView sessionPreKeyCppValue;
    V8ArrayBufferOrArrayBufferView::ToImpl(isolate, sessionPreKeyValue, sessionPreKeyCppValue, UnionTypeConversionMode::kNotNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setSessionPreKey(sessionPreKeyCppValue);
  }

  v8::Local<v8::Value> versionValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&versionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (versionValue.IsEmpty() || versionValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member version is undefined.");
    return;
  } else {
    int32_t versionCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, versionValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setVersion(versionCppValue);
  }
}

v8::Local<v8::Value> CableAuthenticationData::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CableAuthenticationData(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CableAuthenticationData(const CableAuthenticationData& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CableAuthenticationDataKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> authenticatorEidValue;
  bool authenticatorEidHasValueOrDefault = false;
  if (impl.hasAuthenticatorEid()) {
    authenticatorEidValue = ToV8(impl.authenticatorEid(), creationContext, isolate);
    authenticatorEidHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (authenticatorEidHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), authenticatorEidValue))) {
    return false;
  }

  v8::Local<v8::Value> clientEidValue;
  bool clientEidHasValueOrDefault = false;
  if (impl.hasClientEid()) {
    clientEidValue = ToV8(impl.clientEid(), creationContext, isolate);
    clientEidHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (clientEidHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), clientEidValue))) {
    return false;
  }

  v8::Local<v8::Value> sessionPreKeyValue;
  bool sessionPreKeyHasValueOrDefault = false;
  if (impl.hasSessionPreKey()) {
    sessionPreKeyValue = ToV8(impl.sessionPreKey(), creationContext, isolate);
    sessionPreKeyHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (sessionPreKeyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), sessionPreKeyValue))) {
    return false;
  }

  v8::Local<v8::Value> versionValue;
  bool versionHasValueOrDefault = false;
  if (impl.hasVersion()) {
    versionValue = v8::Integer::New(isolate, impl.version());
    versionHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (versionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), versionValue))) {
    return false;
  }

  return true;
}

CableAuthenticationData NativeValueTraits<CableAuthenticationData>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CableAuthenticationData impl;
  V8CableAuthenticationData::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
