// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_photo_settings.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8PhotoSettingsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "fillLightMode",
    "imageHeight",
    "imageWidth",
    "redEyeReduction",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8PhotoSettings::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PhotoSettings& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8PhotoSettingsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> fillLightModeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&fillLightModeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (fillLightModeValue.IsEmpty() || fillLightModeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> fillLightModeCppValue = fillLightModeValue;
    if (!fillLightModeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "off",
        "auto",
        "flash",
    };
    if (!IsValidEnum(fillLightModeCppValue, validValues, arraysize(validValues), "FillLightMode", exceptionState))
      return;
    impl.setFillLightMode(fillLightModeCppValue);
  }

  v8::Local<v8::Value> imageHeightValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&imageHeightValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (imageHeightValue.IsEmpty() || imageHeightValue->IsUndefined()) {
    // Do nothing.
  } else {
    double imageHeightCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, imageHeightValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setImageHeight(imageHeightCppValue);
  }

  v8::Local<v8::Value> imageWidthValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&imageWidthValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (imageWidthValue.IsEmpty() || imageWidthValue->IsUndefined()) {
    // Do nothing.
  } else {
    double imageWidthCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, imageWidthValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setImageWidth(imageWidthCppValue);
  }

  v8::Local<v8::Value> redEyeReductionValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&redEyeReductionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (redEyeReductionValue.IsEmpty() || redEyeReductionValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool redEyeReductionCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, redEyeReductionValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setRedEyeReduction(redEyeReductionCppValue);
  }
}

v8::Local<v8::Value> PhotoSettings::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8PhotoSettings(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8PhotoSettings(const PhotoSettings& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8PhotoSettingsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> fillLightModeValue;
  bool fillLightModeHasValueOrDefault = false;
  if (impl.hasFillLightMode()) {
    fillLightModeValue = V8String(isolate, impl.fillLightMode());
    fillLightModeHasValueOrDefault = true;
  }
  if (fillLightModeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), fillLightModeValue))) {
    return false;
  }

  v8::Local<v8::Value> imageHeightValue;
  bool imageHeightHasValueOrDefault = false;
  if (impl.hasImageHeight()) {
    imageHeightValue = v8::Number::New(isolate, impl.imageHeight());
    imageHeightHasValueOrDefault = true;
  }
  if (imageHeightHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), imageHeightValue))) {
    return false;
  }

  v8::Local<v8::Value> imageWidthValue;
  bool imageWidthHasValueOrDefault = false;
  if (impl.hasImageWidth()) {
    imageWidthValue = v8::Number::New(isolate, impl.imageWidth());
    imageWidthHasValueOrDefault = true;
  }
  if (imageWidthHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), imageWidthValue))) {
    return false;
  }

  v8::Local<v8::Value> redEyeReductionValue;
  bool redEyeReductionHasValueOrDefault = false;
  if (impl.hasRedEyeReduction()) {
    redEyeReductionValue = v8::Boolean::New(isolate, impl.redEyeReduction());
    redEyeReductionHasValueOrDefault = true;
  }
  if (redEyeReductionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), redEyeReductionValue))) {
    return false;
  }

  return true;
}

PhotoSettings NativeValueTraits<PhotoSettings>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  PhotoSettings impl;
  V8PhotoSettings::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
