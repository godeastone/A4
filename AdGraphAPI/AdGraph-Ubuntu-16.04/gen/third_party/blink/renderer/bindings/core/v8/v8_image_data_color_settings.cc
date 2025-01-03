// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_image_data_color_settings.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ImageDataColorSettingsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "colorSpace",
    "storageFormat",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ImageDataColorSettings::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ImageDataColorSettings& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ImageDataColorSettingsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> colorSpaceValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&colorSpaceValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (colorSpaceValue.IsEmpty() || colorSpaceValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> colorSpaceCppValue = colorSpaceValue;
    if (!colorSpaceCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "srgb",
        "rec2020",
        "p3",
    };
    if (!IsValidEnum(colorSpaceCppValue, validValues, arraysize(validValues), "CanvasColorSpace", exceptionState))
      return;
    impl.setColorSpace(colorSpaceCppValue);
  }

  v8::Local<v8::Value> storageFormatValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&storageFormatValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (storageFormatValue.IsEmpty() || storageFormatValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> storageFormatCppValue = storageFormatValue;
    if (!storageFormatCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "uint8",
        "uint16",
        "float32",
    };
    if (!IsValidEnum(storageFormatCppValue, validValues, arraysize(validValues), "ImageDataStorageFormat", exceptionState))
      return;
    impl.setStorageFormat(storageFormatCppValue);
  }
}

v8::Local<v8::Value> ImageDataColorSettings::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ImageDataColorSettings(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ImageDataColorSettings(const ImageDataColorSettings& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ImageDataColorSettingsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> colorSpaceValue;
  bool colorSpaceHasValueOrDefault = false;
  if (impl.hasColorSpace()) {
    colorSpaceValue = V8String(isolate, impl.colorSpace());
    colorSpaceHasValueOrDefault = true;
  } else {
    colorSpaceValue = V8String(isolate, "srgb");
    colorSpaceHasValueOrDefault = true;
  }
  if (colorSpaceHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), colorSpaceValue))) {
    return false;
  }

  v8::Local<v8::Value> storageFormatValue;
  bool storageFormatHasValueOrDefault = false;
  if (impl.hasStorageFormat()) {
    storageFormatValue = V8String(isolate, impl.storageFormat());
    storageFormatHasValueOrDefault = true;
  } else {
    storageFormatValue = V8String(isolate, "uint8");
    storageFormatHasValueOrDefault = true;
  }
  if (storageFormatHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), storageFormatValue))) {
    return false;
  }

  return true;
}

ImageDataColorSettings NativeValueTraits<ImageDataColorSettings>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ImageDataColorSettings impl;
  V8ImageDataColorSettings::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
