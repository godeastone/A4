// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_click_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_background_fetch_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8BackgroundFetchClickEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "state",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8BackgroundFetchClickEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, BackgroundFetchClickEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): state.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8BackgroundFetchEventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8BackgroundFetchClickEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> stateValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&stateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (stateValue.IsEmpty() || stateValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member state is undefined.");
    return;
  } else {
    V8StringResource<> stateCppValue = stateValue;
    if (!stateCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "pending",
        "succeeded",
        "failed",
    };
    if (!IsValidEnum(stateCppValue, validValues, arraysize(validValues), "BackgroundFetchState", exceptionState))
      return;
    impl.setState(stateCppValue);
  }
}

v8::Local<v8::Value> BackgroundFetchClickEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8BackgroundFetchClickEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8BackgroundFetchClickEventInit(const BackgroundFetchClickEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8BackgroundFetchEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8BackgroundFetchClickEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> stateValue;
  bool stateHasValueOrDefault = false;
  if (impl.hasState()) {
    stateValue = V8String(isolate, impl.state());
    stateHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (stateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), stateValue))) {
    return false;
  }

  return true;
}

BackgroundFetchClickEventInit NativeValueTraits<BackgroundFetchClickEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  BackgroundFetchClickEventInit impl;
  V8BackgroundFetchClickEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
