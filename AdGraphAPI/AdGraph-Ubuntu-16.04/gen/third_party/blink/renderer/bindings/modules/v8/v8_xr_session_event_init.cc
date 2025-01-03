// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_session_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_session.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8XRSessionEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "session",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8XRSessionEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, XRSessionEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): session.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8XRSessionEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> sessionValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&sessionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sessionValue.IsEmpty() || sessionValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member session is undefined.");
    return;
  } else {
    XRSession* sessionCppValue = V8XRSession::ToImplWithTypeCheck(isolate, sessionValue);
    if (!sessionCppValue) {
      exceptionState.ThrowTypeError("member session is not of type XRSession.");
      return;
    }
    impl.setSession(sessionCppValue);
  }
}

v8::Local<v8::Value> XRSessionEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8XRSessionEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8XRSessionEventInit(const XRSessionEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8XRSessionEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> sessionValue;
  bool sessionHasValueOrDefault = false;
  if (impl.hasSession()) {
    sessionValue = ToV8(impl.session(), creationContext, isolate);
    sessionHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (sessionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), sessionValue))) {
    return false;
  }

  return true;
}

XRSessionEventInit NativeValueTraits<XRSessionEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  XRSessionEventInit impl;
  V8XRSessionEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
