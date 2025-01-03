// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_pop_state_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PopStateEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "state",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PopStateEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PopStateEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8PopStateEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> stateValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&stateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (stateValue.IsEmpty() || stateValue->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue stateCppValue = ScriptValue(ScriptState::Current(isolate), stateValue);
    impl.setState(stateCppValue);
  }
}

v8::Local<v8::Value> PopStateEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PopStateEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PopStateEventInit(const PopStateEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8PopStateEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> stateValue;
  bool stateHasValueOrDefault = false;
  if (impl.hasState()) {
    stateValue = impl.state().V8Value();
    stateHasValueOrDefault = true;
  }
  if (stateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), stateValue))) {
    return false;
  }

  return true;
}

PopStateEventInit NativeValueTraits<PopStateEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PopStateEventInit impl;
  V8PopStateEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
