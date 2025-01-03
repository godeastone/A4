// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_vr_layer_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_canvas_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_offscreen_canvas.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8VRLayerInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "leftBounds",
    "rightBounds",
    "source",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8VRLayerInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, VRLayerInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8VRLayerInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> leftBoundsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&leftBoundsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (leftBoundsValue.IsEmpty() || leftBoundsValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<float> leftBoundsCppValue = NativeValueTraits<IDLSequence<IDLFloat>>::NativeValue(isolate, leftBoundsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setLeftBounds(leftBoundsCppValue);
  }

  v8::Local<v8::Value> rightBoundsValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&rightBoundsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (rightBoundsValue.IsEmpty() || rightBoundsValue->IsUndefined()) {
    // Do nothing.
  } else {
    Vector<float> rightBoundsCppValue = NativeValueTraits<IDLSequence<IDLFloat>>::NativeValue(isolate, rightBoundsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRightBounds(rightBoundsCppValue);
  }

  v8::Local<v8::Value> sourceValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&sourceValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sourceValue.IsEmpty() || sourceValue->IsUndefined()) {
    // Do nothing.
  } else if (sourceValue->IsNull()) {
    impl.setSourceToNull();
  } else {
    HTMLCanvasElementOrOffscreenCanvas sourceCppValue;
    V8HTMLCanvasElementOrOffscreenCanvas::ToImpl(isolate, sourceValue, sourceCppValue, UnionTypeConversionMode::kNullable, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setSource(sourceCppValue);
  }
}

v8::Local<v8::Value> VRLayerInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8VRLayerInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8VRLayerInit(const VRLayerInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8VRLayerInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> leftBoundsValue;
  bool leftBoundsHasValueOrDefault = false;
  if (impl.hasLeftBounds()) {
    leftBoundsValue = ToV8(impl.leftBounds(), creationContext, isolate);
    leftBoundsHasValueOrDefault = true;
  } else {
    leftBoundsValue = ToV8(Vector<float>(), creationContext, isolate);
    leftBoundsHasValueOrDefault = true;
  }
  if (leftBoundsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), leftBoundsValue))) {
    return false;
  }

  v8::Local<v8::Value> rightBoundsValue;
  bool rightBoundsHasValueOrDefault = false;
  if (impl.hasRightBounds()) {
    rightBoundsValue = ToV8(impl.rightBounds(), creationContext, isolate);
    rightBoundsHasValueOrDefault = true;
  } else {
    rightBoundsValue = ToV8(Vector<float>(), creationContext, isolate);
    rightBoundsHasValueOrDefault = true;
  }
  if (rightBoundsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), rightBoundsValue))) {
    return false;
  }

  v8::Local<v8::Value> sourceValue;
  bool sourceHasValueOrDefault = false;
  if (impl.hasSource()) {
    sourceValue = ToV8(impl.source(), creationContext, isolate);
    sourceHasValueOrDefault = true;
  } else {
    sourceValue = v8::Null(isolate);
    sourceHasValueOrDefault = true;
  }
  if (sourceHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), sourceValue))) {
    return false;
  }

  return true;
}

VRLayerInit NativeValueTraits<VRLayerInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  VRLayerInit impl;
  V8VRLayerInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
