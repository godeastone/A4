// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ImageBitmapOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "colorSpaceConversion",
    "imageOrientation",
    "premultiplyAlpha",
    "resizeHeight",
    "resizeQuality",
    "resizeWidth",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8ImageBitmapOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ImageBitmapOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ImageBitmapOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> colorSpaceConversionValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&colorSpaceConversionValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (colorSpaceConversionValue.IsEmpty() || colorSpaceConversionValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> colorSpaceConversionCppValue = colorSpaceConversionValue;
    if (!colorSpaceConversionCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "none",
        "default",
        "srgb",
        "linear-rgb",
        "rec2020",
        "p3",
    };
    if (!IsValidEnum(colorSpaceConversionCppValue, validValues, arraysize(validValues), "ColorSpaceConversion", exceptionState))
      return;
    impl.setColorSpaceConversion(colorSpaceConversionCppValue);
  }

  v8::Local<v8::Value> imageOrientationValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&imageOrientationValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (imageOrientationValue.IsEmpty() || imageOrientationValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> imageOrientationCppValue = imageOrientationValue;
    if (!imageOrientationCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "none",
        "flipY",
    };
    if (!IsValidEnum(imageOrientationCppValue, validValues, arraysize(validValues), "ImageOrientation", exceptionState))
      return;
    impl.setImageOrientation(imageOrientationCppValue);
  }

  v8::Local<v8::Value> premultiplyAlphaValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&premultiplyAlphaValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (premultiplyAlphaValue.IsEmpty() || premultiplyAlphaValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> premultiplyAlphaCppValue = premultiplyAlphaValue;
    if (!premultiplyAlphaCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "none",
        "premultiply",
        "default",
    };
    if (!IsValidEnum(premultiplyAlphaCppValue, validValues, arraysize(validValues), "PremultiplyAlpha", exceptionState))
      return;
    impl.setPremultiplyAlpha(premultiplyAlphaCppValue);
  }

  if (RuntimeEnabledFeatures::ExtendedImageBitmapOptionsEnabled()) {
    v8::Local<v8::Value> resizeHeightValue;
    if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&resizeHeightValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (resizeHeightValue.IsEmpty() || resizeHeightValue->IsUndefined()) {
      // Do nothing.
    } else {
      uint32_t resizeHeightCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, resizeHeightValue, exceptionState, kEnforceRange);
      if (exceptionState.HadException())
        return;
      impl.setResizeHeight(resizeHeightCppValue);
    }

    v8::Local<v8::Value> resizeQualityValue;
    if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&resizeQualityValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (resizeQualityValue.IsEmpty() || resizeQualityValue->IsUndefined()) {
      // Do nothing.
    } else {
      V8StringResource<> resizeQualityCppValue = resizeQualityValue;
      if (!resizeQualityCppValue.Prepare(exceptionState))
        return;
      const char* validValues[] = {
          "pixelated",
          "low",
          "medium",
          "high",
          nullptr,
      };
      if (!IsValidEnum(resizeQualityCppValue, validValues, arraysize(validValues), "ResizeQuality", exceptionState))
        return;
      impl.setResizeQuality(resizeQualityCppValue);
    }

    v8::Local<v8::Value> resizeWidthValue;
    if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&resizeWidthValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (resizeWidthValue.IsEmpty() || resizeWidthValue->IsUndefined()) {
      // Do nothing.
    } else {
      uint32_t resizeWidthCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, resizeWidthValue, exceptionState, kEnforceRange);
      if (exceptionState.HadException())
        return;
      impl.setResizeWidth(resizeWidthCppValue);
    }
  }
}

v8::Local<v8::Value> ImageBitmapOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ImageBitmapOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ImageBitmapOptions(const ImageBitmapOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ImageBitmapOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> colorSpaceConversionValue;
  bool colorSpaceConversionHasValueOrDefault = false;
  if (impl.hasColorSpaceConversion()) {
    colorSpaceConversionValue = V8String(isolate, impl.colorSpaceConversion());
    colorSpaceConversionHasValueOrDefault = true;
  } else {
    colorSpaceConversionValue = V8String(isolate, "default");
    colorSpaceConversionHasValueOrDefault = true;
  }
  if (colorSpaceConversionHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), colorSpaceConversionValue))) {
    return false;
  }

  v8::Local<v8::Value> imageOrientationValue;
  bool imageOrientationHasValueOrDefault = false;
  if (impl.hasImageOrientation()) {
    imageOrientationValue = V8String(isolate, impl.imageOrientation());
    imageOrientationHasValueOrDefault = true;
  } else {
    imageOrientationValue = V8String(isolate, "none");
    imageOrientationHasValueOrDefault = true;
  }
  if (imageOrientationHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), imageOrientationValue))) {
    return false;
  }

  v8::Local<v8::Value> premultiplyAlphaValue;
  bool premultiplyAlphaHasValueOrDefault = false;
  if (impl.hasPremultiplyAlpha()) {
    premultiplyAlphaValue = V8String(isolate, impl.premultiplyAlpha());
    premultiplyAlphaHasValueOrDefault = true;
  } else {
    premultiplyAlphaValue = V8String(isolate, "default");
    premultiplyAlphaHasValueOrDefault = true;
  }
  if (premultiplyAlphaHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), premultiplyAlphaValue))) {
    return false;
  }

  if (RuntimeEnabledFeatures::ExtendedImageBitmapOptionsEnabled()) {
    v8::Local<v8::Value> resizeHeightValue;
    bool resizeHeightHasValueOrDefault = false;
    if (impl.hasResizeHeight()) {
      resizeHeightValue = v8::Integer::NewFromUnsigned(isolate, impl.resizeHeight());
      resizeHeightHasValueOrDefault = true;
    }
    if (resizeHeightHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), resizeHeightValue))) {
      return false;
    }

    v8::Local<v8::Value> resizeQualityValue;
    bool resizeQualityHasValueOrDefault = false;
    if (impl.hasResizeQuality()) {
      resizeQualityValue = V8String(isolate, impl.resizeQuality());
      resizeQualityHasValueOrDefault = true;
    } else {
      resizeQualityValue = V8String(isolate, "low");
      resizeQualityHasValueOrDefault = true;
    }
    if (resizeQualityHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), resizeQualityValue))) {
      return false;
    }

    v8::Local<v8::Value> resizeWidthValue;
    bool resizeWidthHasValueOrDefault = false;
    if (impl.hasResizeWidth()) {
      resizeWidthValue = v8::Integer::NewFromUnsigned(isolate, impl.resizeWidth());
      resizeWidthHasValueOrDefault = true;
    }
    if (resizeWidthHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), resizeWidthValue))) {
      return false;
    }
  }

  return true;
}

ImageBitmapOptions NativeValueTraits<ImageBitmapOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  ImageBitmapOptions impl;
  V8ImageBitmapOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
