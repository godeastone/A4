// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_frame_of_reference_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8XRFrameOfReferenceOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "disableStageEmulation",
    "stageEmulationHeight",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8XRFrameOfReferenceOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, XRFrameOfReferenceOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8XRFrameOfReferenceOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> disableStageEmulationValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&disableStageEmulationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (disableStageEmulationValue.IsEmpty() || disableStageEmulationValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool disableStageEmulationCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, disableStageEmulationValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDisableStageEmulation(disableStageEmulationCppValue);
  }

  v8::Local<v8::Value> stageEmulationHeightValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&stageEmulationHeightValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (stageEmulationHeightValue.IsEmpty() || stageEmulationHeightValue->IsUndefined()) {
    // Do nothing.
  } else {
    double stageEmulationHeightCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, stageEmulationHeightValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setStageEmulationHeight(stageEmulationHeightCppValue);
  }
}

v8::Local<v8::Value> XRFrameOfReferenceOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8XRFrameOfReferenceOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8XRFrameOfReferenceOptions(const XRFrameOfReferenceOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8XRFrameOfReferenceOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> disableStageEmulationValue;
  bool disableStageEmulationHasValueOrDefault = false;
  if (impl.hasDisableStageEmulation()) {
    disableStageEmulationValue = v8::Boolean::New(isolate, impl.disableStageEmulation());
    disableStageEmulationHasValueOrDefault = true;
  } else {
    disableStageEmulationValue = v8::Boolean::New(isolate, false);
    disableStageEmulationHasValueOrDefault = true;
  }
  if (disableStageEmulationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), disableStageEmulationValue))) {
    return false;
  }

  v8::Local<v8::Value> stageEmulationHeightValue;
  bool stageEmulationHeightHasValueOrDefault = false;
  if (impl.hasStageEmulationHeight()) {
    stageEmulationHeightValue = v8::Number::New(isolate, impl.stageEmulationHeight());
    stageEmulationHeightHasValueOrDefault = true;
  } else {
    stageEmulationHeightValue = v8::Number::New(isolate, 0);
    stageEmulationHeightHasValueOrDefault = true;
  }
  if (stageEmulationHeightHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), stageEmulationHeightValue))) {
    return false;
  }

  return true;
}

XRFrameOfReferenceOptions NativeValueTraits<XRFrameOfReferenceOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  XRFrameOfReferenceOptions impl;
  V8XRFrameOfReferenceOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
