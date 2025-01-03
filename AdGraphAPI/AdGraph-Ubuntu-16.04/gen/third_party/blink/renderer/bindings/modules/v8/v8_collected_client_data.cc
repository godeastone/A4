// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_collected_client_data.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CollectedClientDataKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "challenge",
    "origin",
    "tokenBindingId",
    "type",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8CollectedClientData::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CollectedClientData& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): challenge, origin, type.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CollectedClientDataKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> challengeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&challengeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (challengeValue.IsEmpty() || challengeValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member challenge is undefined.");
    return;
  } else {
    V8StringResource<> challengeCppValue = challengeValue;
    if (!challengeCppValue.Prepare(exceptionState))
      return;
    impl.setChallenge(challengeCppValue);
  }

  v8::Local<v8::Value> originValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&originValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (originValue.IsEmpty() || originValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member origin is undefined.");
    return;
  } else {
    V8StringResource<> originCppValue = originValue;
    if (!originCppValue.Prepare(exceptionState))
      return;
    impl.setOrigin(originCppValue);
  }

  v8::Local<v8::Value> tokenBindingIdValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&tokenBindingIdValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (tokenBindingIdValue.IsEmpty() || tokenBindingIdValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> tokenBindingIdCppValue = tokenBindingIdValue;
    if (!tokenBindingIdCppValue.Prepare(exceptionState))
      return;
    impl.setTokenBindingId(tokenBindingIdCppValue);
  }

  v8::Local<v8::Value> typeValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&typeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (typeValue.IsEmpty() || typeValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member type is undefined.");
    return;
  } else {
    V8StringResource<> typeCppValue = typeValue;
    if (!typeCppValue.Prepare(exceptionState))
      return;
    impl.setType(typeCppValue);
  }
}

v8::Local<v8::Value> CollectedClientData::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CollectedClientData(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CollectedClientData(const CollectedClientData& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CollectedClientDataKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> challengeValue;
  bool challengeHasValueOrDefault = false;
  if (impl.hasChallenge()) {
    challengeValue = V8String(isolate, impl.challenge());
    challengeHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (challengeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), challengeValue))) {
    return false;
  }

  v8::Local<v8::Value> originValue;
  bool originHasValueOrDefault = false;
  if (impl.hasOrigin()) {
    originValue = V8String(isolate, impl.origin());
    originHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (originHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), originValue))) {
    return false;
  }

  v8::Local<v8::Value> tokenBindingIdValue;
  bool tokenBindingIdHasValueOrDefault = false;
  if (impl.hasTokenBindingId()) {
    tokenBindingIdValue = V8String(isolate, impl.tokenBindingId());
    tokenBindingIdHasValueOrDefault = true;
  }
  if (tokenBindingIdHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), tokenBindingIdValue))) {
    return false;
  }

  v8::Local<v8::Value> typeValue;
  bool typeHasValueOrDefault = false;
  if (impl.hasType()) {
    typeValue = V8String(isolate, impl.type());
    typeHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (typeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), typeValue))) {
    return false;
  }

  return true;
}

CollectedClientData NativeValueTraits<CollectedClientData>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CollectedClientData impl;
  V8CollectedClientData::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
