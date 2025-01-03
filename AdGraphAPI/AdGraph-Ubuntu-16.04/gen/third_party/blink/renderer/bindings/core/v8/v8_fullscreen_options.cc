// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_fullscreen_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FullscreenOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "prefersNavigationBar",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8FullscreenOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, FullscreenOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8FullscreenOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  if (RuntimeEnabledFeatures::FullscreenOptionsEnabled()) {
    v8::Local<v8::Value> prefersNavigationBarValue;
    if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&prefersNavigationBarValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (prefersNavigationBarValue.IsEmpty() || prefersNavigationBarValue->IsUndefined()) {
      // Do nothing.
    } else {
      bool prefersNavigationBarCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, prefersNavigationBarValue, exceptionState);
      if (exceptionState.HadException())
        return;
      impl.setPrefersNavigationBar(prefersNavigationBarCppValue);
    }
  }
}

v8::Local<v8::Value> FullscreenOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FullscreenOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FullscreenOptions(const FullscreenOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8FullscreenOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  if (RuntimeEnabledFeatures::FullscreenOptionsEnabled()) {
    v8::Local<v8::Value> prefersNavigationBarValue;
    bool prefersNavigationBarHasValueOrDefault = false;
    if (impl.hasPrefersNavigationBar()) {
      prefersNavigationBarValue = v8::Boolean::New(isolate, impl.prefersNavigationBar());
      prefersNavigationBarHasValueOrDefault = true;
    } else {
      prefersNavigationBarValue = v8::Boolean::New(isolate, false);
      prefersNavigationBarHasValueOrDefault = true;
    }
    if (prefersNavigationBarHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), prefersNavigationBarValue))) {
      return false;
    }
  }

  return true;
}

FullscreenOptions NativeValueTraits<FullscreenOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  FullscreenOptions impl;
  V8FullscreenOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
