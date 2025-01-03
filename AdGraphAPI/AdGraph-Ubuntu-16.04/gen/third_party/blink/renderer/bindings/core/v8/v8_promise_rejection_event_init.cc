// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_promise_rejection_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PromiseRejectionEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "promise",
    "reason",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PromiseRejectionEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PromiseRejectionEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): promise.");
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

  const v8::Eternal<v8::Name>* keys = eternalV8PromiseRejectionEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> promiseValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&promiseValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (promiseValue.IsEmpty() || promiseValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member promise is undefined.");
    return;
  } else {
    ScriptPromise promiseCppValue = ScriptPromise::Cast(ScriptState::Current(isolate), promiseValue);
    impl.setPromise(promiseCppValue);
  }

  v8::Local<v8::Value> reasonValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&reasonValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (reasonValue.IsEmpty() || reasonValue->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue reasonCppValue = ScriptValue(ScriptState::Current(isolate), reasonValue);
    impl.setReason(reasonCppValue);
  }
}

v8::Local<v8::Value> PromiseRejectionEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PromiseRejectionEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PromiseRejectionEventInit(const PromiseRejectionEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8PromiseRejectionEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> promiseValue;
  bool promiseHasValueOrDefault = false;
  if (impl.hasPromise()) {
    promiseValue = impl.promise().V8Value();
    promiseHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (promiseHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), promiseValue))) {
    return false;
  }

  v8::Local<v8::Value> reasonValue;
  bool reasonHasValueOrDefault = false;
  if (impl.hasReason()) {
    reasonValue = impl.reason().V8Value();
    reasonHasValueOrDefault = true;
  }
  if (reasonHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), reasonValue))) {
    return false;
  }

  return true;
}

PromiseRejectionEventInit NativeValueTraits<PromiseRejectionEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PromiseRejectionEventInit impl;
  V8PromiseRejectionEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
