// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_webgl_layer_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8XRWebGLLayerInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "alpha",
    "antialias",
    "depth",
    "framebufferScaleFactor",
    "multiview",
    "stencil",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8XRWebGLLayerInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, XRWebGLLayerInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8XRWebGLLayerInitKeys(isolate);
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

  v8::Local<v8::Value> antialiasValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&antialiasValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (antialiasValue.IsEmpty() || antialiasValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool antialiasCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, antialiasValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setAntialias(antialiasCppValue);
  }

  v8::Local<v8::Value> depthValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&depthValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (depthValue.IsEmpty() || depthValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool depthCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, depthValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDepth(depthCppValue);
  }

  v8::Local<v8::Value> framebufferScaleFactorValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&framebufferScaleFactorValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (framebufferScaleFactorValue.IsEmpty() || framebufferScaleFactorValue->IsUndefined()) {
    // Do nothing.
  } else {
    double framebufferScaleFactorCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, framebufferScaleFactorValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFramebufferScaleFactor(framebufferScaleFactorCppValue);
  }

  v8::Local<v8::Value> multiviewValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&multiviewValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (multiviewValue.IsEmpty() || multiviewValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool multiviewCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, multiviewValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setMultiview(multiviewCppValue);
  }

  v8::Local<v8::Value> stencilValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&stencilValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (stencilValue.IsEmpty() || stencilValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool stencilCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, stencilValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setStencil(stencilCppValue);
  }
}

v8::Local<v8::Value> XRWebGLLayerInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8XRWebGLLayerInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8XRWebGLLayerInit(const XRWebGLLayerInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8XRWebGLLayerInitKeys(isolate);
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

  v8::Local<v8::Value> antialiasValue;
  bool antialiasHasValueOrDefault = false;
  if (impl.hasAntialias()) {
    antialiasValue = v8::Boolean::New(isolate, impl.antialias());
    antialiasHasValueOrDefault = true;
  } else {
    antialiasValue = v8::Boolean::New(isolate, true);
    antialiasHasValueOrDefault = true;
  }
  if (antialiasHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), antialiasValue))) {
    return false;
  }

  v8::Local<v8::Value> depthValue;
  bool depthHasValueOrDefault = false;
  if (impl.hasDepth()) {
    depthValue = v8::Boolean::New(isolate, impl.depth());
    depthHasValueOrDefault = true;
  } else {
    depthValue = v8::Boolean::New(isolate, true);
    depthHasValueOrDefault = true;
  }
  if (depthHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), depthValue))) {
    return false;
  }

  v8::Local<v8::Value> framebufferScaleFactorValue;
  bool framebufferScaleFactorHasValueOrDefault = false;
  if (impl.hasFramebufferScaleFactor()) {
    framebufferScaleFactorValue = v8::Number::New(isolate, impl.framebufferScaleFactor());
    framebufferScaleFactorHasValueOrDefault = true;
  }
  if (framebufferScaleFactorHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), framebufferScaleFactorValue))) {
    return false;
  }

  v8::Local<v8::Value> multiviewValue;
  bool multiviewHasValueOrDefault = false;
  if (impl.hasMultiview()) {
    multiviewValue = v8::Boolean::New(isolate, impl.multiview());
    multiviewHasValueOrDefault = true;
  } else {
    multiviewValue = v8::Boolean::New(isolate, false);
    multiviewHasValueOrDefault = true;
  }
  if (multiviewHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), multiviewValue))) {
    return false;
  }

  v8::Local<v8::Value> stencilValue;
  bool stencilHasValueOrDefault = false;
  if (impl.hasStencil()) {
    stencilValue = v8::Boolean::New(isolate, impl.stencil());
    stencilHasValueOrDefault = true;
  } else {
    stencilValue = v8::Boolean::New(isolate, false);
    stencilHasValueOrDefault = true;
  }
  if (stencilHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), stencilValue))) {
    return false;
  }

  return true;
}

XRWebGLLayerInit NativeValueTraits<XRWebGLLayerInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  XRWebGLLayerInit impl;
  V8XRWebGLLayerInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
