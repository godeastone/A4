// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_face_detector_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FaceDetectorOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "fastMode",
    "maxDetectedFaces",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8FaceDetectorOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, FaceDetectorOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8FaceDetectorOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> fastModeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&fastModeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (fastModeValue.IsEmpty() || fastModeValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool fastModeCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, fastModeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setFastMode(fastModeCppValue);
  }

  v8::Local<v8::Value> maxDetectedFacesValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&maxDetectedFacesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (maxDetectedFacesValue.IsEmpty() || maxDetectedFacesValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t maxDetectedFacesCppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, maxDetectedFacesValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setMaxDetectedFaces(maxDetectedFacesCppValue);
  }
}

v8::Local<v8::Value> FaceDetectorOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FaceDetectorOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FaceDetectorOptions(const FaceDetectorOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8FaceDetectorOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> fastModeValue;
  bool fastModeHasValueOrDefault = false;
  if (impl.hasFastMode()) {
    fastModeValue = v8::Boolean::New(isolate, impl.fastMode());
    fastModeHasValueOrDefault = true;
  } else {
    fastModeValue = v8::Boolean::New(isolate, false);
    fastModeHasValueOrDefault = true;
  }
  if (fastModeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), fastModeValue))) {
    return false;
  }

  v8::Local<v8::Value> maxDetectedFacesValue;
  bool maxDetectedFacesHasValueOrDefault = false;
  if (impl.hasMaxDetectedFaces()) {
    maxDetectedFacesValue = v8::Integer::NewFromUnsigned(isolate, impl.maxDetectedFaces());
    maxDetectedFacesHasValueOrDefault = true;
  } else {
    maxDetectedFacesValue = v8::Integer::NewFromUnsigned(isolate, 10u);
    maxDetectedFacesHasValueOrDefault = true;
  }
  if (maxDetectedFacesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), maxDetectedFacesValue))) {
    return false;
  }

  return true;
}

FaceDetectorOptions NativeValueTraits<FaceDetectorOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  FaceDetectorOptions impl;
  V8FaceDetectorOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
