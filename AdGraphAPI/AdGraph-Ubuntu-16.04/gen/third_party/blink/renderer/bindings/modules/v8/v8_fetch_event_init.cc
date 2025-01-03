// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_fetch_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_request.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_extendable_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FetchEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "clientId",
    "isReload",
    "request",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8FetchEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, FetchEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): request.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8ExtendableEventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8FetchEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> clientIdValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&clientIdValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (clientIdValue.IsEmpty() || clientIdValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> clientIdCppValue = clientIdValue;
    if (!clientIdCppValue.Prepare(exceptionState))
      return;
    impl.setClientId(clientIdCppValue);
  }

  v8::Local<v8::Value> isReloadValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&isReloadValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (isReloadValue.IsEmpty() || isReloadValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool isReloadCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, isReloadValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIsReload(isReloadCppValue);
  }

  v8::Local<v8::Value> requestValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&requestValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (requestValue.IsEmpty() || requestValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member request is undefined.");
    return;
  } else {
    Request* requestCppValue = V8Request::ToImplWithTypeCheck(isolate, requestValue);
    if (!requestCppValue) {
      exceptionState.ThrowTypeError("member request is not of type Request.");
      return;
    }
    impl.setRequest(requestCppValue);
  }
}

v8::Local<v8::Value> FetchEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FetchEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FetchEventInit(const FetchEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8ExtendableEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8FetchEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> clientIdValue;
  bool clientIdHasValueOrDefault = false;
  if (impl.hasClientId()) {
    clientIdValue = V8String(isolate, impl.clientId());
    clientIdHasValueOrDefault = true;
  } else {
    clientIdValue = V8String(isolate, WTF::g_empty_string);
    clientIdHasValueOrDefault = true;
  }
  if (clientIdHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), clientIdValue))) {
    return false;
  }

  v8::Local<v8::Value> isReloadValue;
  bool isReloadHasValueOrDefault = false;
  if (impl.hasIsReload()) {
    isReloadValue = v8::Boolean::New(isolate, impl.isReload());
    isReloadHasValueOrDefault = true;
  } else {
    isReloadValue = v8::Boolean::New(isolate, false);
    isReloadHasValueOrDefault = true;
  }
  if (isReloadHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), isReloadValue))) {
    return false;
  }

  v8::Local<v8::Value> requestValue;
  bool requestHasValueOrDefault = false;
  if (impl.hasRequest()) {
    requestValue = ToV8(impl.request(), creationContext, isolate);
    requestHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (requestHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), requestValue))) {
    return false;
  }

  return true;
}

FetchEventInit NativeValueTraits<FetchEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  FetchEventInit impl;
  V8FetchEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
