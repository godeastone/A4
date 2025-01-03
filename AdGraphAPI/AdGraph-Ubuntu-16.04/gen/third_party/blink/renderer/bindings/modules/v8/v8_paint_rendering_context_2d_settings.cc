// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_paint_rendering_context_2d_settings.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PaintRenderingContext2DSettingsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "alpha",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PaintRenderingContext2DSettings::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PaintRenderingContext2DSettings& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PaintRenderingContext2DSettingsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> alphaValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&alphaValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (alphaValue.IsEmpty() || alphaValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool alphaCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, alphaValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAlpha(alphaCppValue);
  }
}

v8::Local<v8::Value> PaintRenderingContext2DSettings::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PaintRenderingContext2DSettings(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PaintRenderingContext2DSettings(const PaintRenderingContext2DSettings& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PaintRenderingContext2DSettingsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> alphaValue;
  bool alphaHasValueOrDefault = false;
  if (impl.hasAlpha()) {
    alphaValue = v8::Boolean::New(isolate, impl.alpha());
    alphaHasValueOrDefault = true;
  } else {
    alphaValue = v8::Boolean::New(isolate, true);
    alphaHasValueOrDefault = true;
  }
  if (alphaHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), alphaValue))) {
    return false;
  }

  return true;
}

PaintRenderingContext2DSettings NativeValueTraits<PaintRenderingContext2DSettings>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PaintRenderingContext2DSettings impl;
  V8PaintRenderingContext2DSettings::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
