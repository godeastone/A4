// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_css_matrix_component_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8CSSMatrixComponentOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "is2D",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8CSSMatrixComponentOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, CSSMatrixComponentOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8CSSMatrixComponentOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> is2DValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&is2DValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (is2DValue.IsEmpty() || is2DValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool is2DCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, is2DValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIs2D(is2DCppValue);
  }
}

v8::Local<v8::Value> CSSMatrixComponentOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8CSSMatrixComponentOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8CSSMatrixComponentOptions(const CSSMatrixComponentOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8CSSMatrixComponentOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> is2DValue;
  bool is2DHasValueOrDefault = false;
  if (impl.hasIs2D()) {
    is2DValue = v8::Boolean::New(isolate, impl.is2D());
    is2DHasValueOrDefault = true;
  }
  if (is2DHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), is2DValue))) {
    return false;
  }

  return true;
}

CSSMatrixComponentOptions NativeValueTraits<CSSMatrixComponentOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  CSSMatrixComponentOptions impl;
  V8CSSMatrixComponentOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
