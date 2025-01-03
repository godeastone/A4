// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_context_attributes.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_device.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8WebGLContextAttributesKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "alpha",
    "antialias",
    "compatibleXRDevice",
    "depth",
    "failIfMajorPerformanceCaveat",
    "premultipliedAlpha",
    "preserveDrawingBuffer",
    "stencil",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8WebGLContextAttributes::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, WebGLContextAttributes& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8WebGLContextAttributesKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
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
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&depthValue)) {
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

  v8::Local<v8::Value> failIfMajorPerformanceCaveatValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&failIfMajorPerformanceCaveatValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (failIfMajorPerformanceCaveatValue.IsEmpty() || failIfMajorPerformanceCaveatValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool failIfMajorPerformanceCaveatCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, failIfMajorPerformanceCaveatValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFailIfMajorPerformanceCaveat(failIfMajorPerformanceCaveatCppValue);
  }

  v8::Local<v8::Value> premultipliedAlphaValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&premultipliedAlphaValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (premultipliedAlphaValue.IsEmpty() || premultipliedAlphaValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool premultipliedAlphaCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, premultipliedAlphaValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPremultipliedAlpha(premultipliedAlphaCppValue);
  }

  v8::Local<v8::Value> preserveDrawingBufferValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&preserveDrawingBufferValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (preserveDrawingBufferValue.IsEmpty() || preserveDrawingBufferValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool preserveDrawingBufferCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, preserveDrawingBufferValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setPreserveDrawingBuffer(preserveDrawingBufferCppValue);
  }

  v8::Local<v8::Value> stencilValue;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&stencilValue)) {
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

  if (OriginTrials::webXREnabled(executionContext)) {
    v8::Local<v8::Value> compatibleXRDeviceValue;
    if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&compatibleXRDeviceValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (compatibleXRDeviceValue.IsEmpty() || compatibleXRDeviceValue->IsUndefined()) {
      // Do nothing.
    } else {
      XRDevice* compatibleXRDeviceCppValue = V8XRDevice::ToImplWithTypeCheck(isolate, compatibleXRDeviceValue);
      if (!compatibleXRDeviceCppValue) {
        exceptionState.ThrowTypeError("member compatibleXRDevice is not of type XRDevice.");
        return;
      }
      impl.setCompatibleXRDevice(compatibleXRDeviceCppValue);
    }
  }
}

v8::Local<v8::Value> WebGLContextAttributes::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8WebGLContextAttributes(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8WebGLContextAttributes(const WebGLContextAttributes& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8WebGLContextAttributesKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), depthValue))) {
    return false;
  }

  v8::Local<v8::Value> failIfMajorPerformanceCaveatValue;
  bool failIfMajorPerformanceCaveatHasValueOrDefault = false;
  if (impl.hasFailIfMajorPerformanceCaveat()) {
    failIfMajorPerformanceCaveatValue = v8::Boolean::New(isolate, impl.failIfMajorPerformanceCaveat());
    failIfMajorPerformanceCaveatHasValueOrDefault = true;
  } else {
    failIfMajorPerformanceCaveatValue = v8::Boolean::New(isolate, false);
    failIfMajorPerformanceCaveatHasValueOrDefault = true;
  }
  if (failIfMajorPerformanceCaveatHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), failIfMajorPerformanceCaveatValue))) {
    return false;
  }

  v8::Local<v8::Value> premultipliedAlphaValue;
  bool premultipliedAlphaHasValueOrDefault = false;
  if (impl.hasPremultipliedAlpha()) {
    premultipliedAlphaValue = v8::Boolean::New(isolate, impl.premultipliedAlpha());
    premultipliedAlphaHasValueOrDefault = true;
  } else {
    premultipliedAlphaValue = v8::Boolean::New(isolate, true);
    premultipliedAlphaHasValueOrDefault = true;
  }
  if (premultipliedAlphaHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), premultipliedAlphaValue))) {
    return false;
  }

  v8::Local<v8::Value> preserveDrawingBufferValue;
  bool preserveDrawingBufferHasValueOrDefault = false;
  if (impl.hasPreserveDrawingBuffer()) {
    preserveDrawingBufferValue = v8::Boolean::New(isolate, impl.preserveDrawingBuffer());
    preserveDrawingBufferHasValueOrDefault = true;
  } else {
    preserveDrawingBufferValue = v8::Boolean::New(isolate, false);
    preserveDrawingBufferHasValueOrDefault = true;
  }
  if (preserveDrawingBufferHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), preserveDrawingBufferValue))) {
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), stencilValue))) {
    return false;
  }

  if (OriginTrials::webXREnabled(executionContext)) {
    v8::Local<v8::Value> compatibleXRDeviceValue;
    bool compatibleXRDeviceHasValueOrDefault = false;
    if (impl.hasCompatibleXRDevice()) {
      compatibleXRDeviceValue = ToV8(impl.compatibleXRDevice(), creationContext, isolate);
      compatibleXRDeviceHasValueOrDefault = true;
    } else {
      compatibleXRDeviceValue = v8::Null(isolate);
      compatibleXRDeviceHasValueOrDefault = true;
    }
    if (compatibleXRDeviceHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), compatibleXRDeviceValue))) {
      return false;
    }
  }

  return true;
}

WebGLContextAttributes NativeValueTraits<WebGLContextAttributes>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  WebGLContextAttributes impl;
  V8WebGLContextAttributes::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
