// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigation_preload_state.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8NavigationPreloadStateKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "enabled",
    "headerValue",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8NavigationPreloadState::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, NavigationPreloadState& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8NavigationPreloadStateKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> enabledValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&enabledValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (enabledValue.IsEmpty() || enabledValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool enabledCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, enabledValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setEnabled(enabledCppValue);
  }

  v8::Local<v8::Value> headerValueValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&headerValueValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (headerValueValue.IsEmpty() || headerValueValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> headerValueCppValue = NativeValueTraits<IDLByteString>::NativeValue(isolate, headerValueValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setHeaderValue(headerValueCppValue);
  }
}

v8::Local<v8::Value> NavigationPreloadState::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8NavigationPreloadState(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8NavigationPreloadState(const NavigationPreloadState& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8NavigationPreloadStateKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> enabledValue;
  bool enabledHasValueOrDefault = false;
  if (impl.hasEnabled()) {
    enabledValue = v8::Boolean::New(isolate, impl.enabled());
    enabledHasValueOrDefault = true;
  } else {
    enabledValue = v8::Boolean::New(isolate, false);
    enabledHasValueOrDefault = true;
  }
  if (enabledHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), enabledValue))) {
    return false;
  }

  v8::Local<v8::Value> headerValueValue;
  bool headerValueHasValueOrDefault = false;
  if (impl.hasHeaderValue()) {
    headerValueValue = V8String(isolate, impl.headerValue());
    headerValueHasValueOrDefault = true;
  }
  if (headerValueHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), headerValueValue))) {
    return false;
  }

  return true;
}

NavigationPreloadState NativeValueTraits<NavigationPreloadState>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  NavigationPreloadState impl;
  V8NavigationPreloadState::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
