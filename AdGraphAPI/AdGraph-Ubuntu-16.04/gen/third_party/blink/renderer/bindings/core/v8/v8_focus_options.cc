// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_focus_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FocusOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "preventScroll",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8FocusOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, FocusOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8FocusOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  if (RuntimeEnabledFeatures::FocusOptionsEnabled()) {
    v8::Local<v8::Value> preventScrollValue;
    if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&preventScrollValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (preventScrollValue.IsEmpty() || preventScrollValue->IsUndefined()) {
      // Do nothing.
    } else {
      bool preventScrollCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, preventScrollValue, exceptionState);
      if (exceptionState.HadException())
        return;
      impl.setPreventScroll(preventScrollCppValue);
    }
  }
}

v8::Local<v8::Value> FocusOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FocusOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FocusOptions(const FocusOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8FocusOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  if (RuntimeEnabledFeatures::FocusOptionsEnabled()) {
    v8::Local<v8::Value> preventScrollValue;
    bool preventScrollHasValueOrDefault = false;
    if (impl.hasPreventScroll()) {
      preventScrollValue = v8::Boolean::New(isolate, impl.preventScroll());
      preventScrollHasValueOrDefault = true;
    } else {
      preventScrollValue = v8::Boolean::New(isolate, false);
      preventScrollHasValueOrDefault = true;
    }
    if (preventScrollHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), preventScrollValue))) {
      return false;
    }
  }

  return true;
}

FocusOptions NativeValueTraits<FocusOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  FocusOptions impl;
  V8FocusOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
