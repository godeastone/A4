// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_page_transition_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PageTransitionEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "persisted",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PageTransitionEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PageTransitionEventInit& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8PageTransitionEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> persistedValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&persistedValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (persistedValue.IsEmpty() || persistedValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool persistedCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, persistedValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPersisted(persistedCppValue);
  }
}

v8::Local<v8::Value> PageTransitionEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PageTransitionEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PageTransitionEventInit(const PageTransitionEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8PageTransitionEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> persistedValue;
  bool persistedHasValueOrDefault = false;
  if (impl.hasPersisted()) {
    persistedValue = v8::Boolean::New(isolate, impl.persisted());
    persistedHasValueOrDefault = true;
  }
  if (persistedHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), persistedValue))) {
    return false;
  }

  return true;
}

PageTransitionEventInit NativeValueTraits<PageTransitionEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PageTransitionEventInit impl;
  V8PageTransitionEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
