// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_sensor_error_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_exception.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8SensorErrorEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "error",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8SensorErrorEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, SensorErrorEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): error.");
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

  const v8::Eternal<v8::Name>* keys = eternalV8SensorErrorEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> errorValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&errorValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (errorValue.IsEmpty() || errorValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member error is undefined.");
    return;
  } else {
    DOMException* errorCppValue = V8DOMException::ToImplWithTypeCheck(isolate, errorValue);
    if (!errorCppValue) {
      exceptionState.ThrowTypeError("member error is not of type DOMException.");
      return;
    }
    impl.setError(errorCppValue);
  }
}

v8::Local<v8::Value> SensorErrorEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8SensorErrorEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8SensorErrorEventInit(const SensorErrorEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8SensorErrorEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> errorValue;
  bool errorHasValueOrDefault = false;
  if (impl.hasError()) {
    errorValue = ToV8(impl.error(), creationContext, isolate);
    errorHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (errorHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), errorValue))) {
    return false;
  }

  return true;
}

SensorErrorEventInit NativeValueTraits<SensorErrorEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SensorErrorEventInit impl;
  V8SensorErrorEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
