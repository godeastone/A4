// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_font_face_descriptors.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8FontFaceDescriptorsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "display",
    "featureSettings",
    "stretch",
    "style",
    "unicodeRange",
    "variant",
    "weight",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8FontFaceDescriptors::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, FontFaceDescriptors& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8FontFaceDescriptorsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> displayValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&displayValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (displayValue.IsEmpty() || displayValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> displayCppValue = displayValue;
    if (!displayCppValue.Prepare(exceptionState))
      return;
    impl.setDisplay(displayCppValue);
  }

  v8::Local<v8::Value> featureSettingsValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&featureSettingsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (featureSettingsValue.IsEmpty() || featureSettingsValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> featureSettingsCppValue = featureSettingsValue;
    if (!featureSettingsCppValue.Prepare(exceptionState))
      return;
    impl.setFeatureSettings(featureSettingsCppValue);
  }

  v8::Local<v8::Value> stretchValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&stretchValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (stretchValue.IsEmpty() || stretchValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> stretchCppValue = stretchValue;
    if (!stretchCppValue.Prepare(exceptionState))
      return;
    impl.setStretch(stretchCppValue);
  }

  v8::Local<v8::Value> styleValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&styleValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (styleValue.IsEmpty() || styleValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> styleCppValue = styleValue;
    if (!styleCppValue.Prepare(exceptionState))
      return;
    impl.setStyle(styleCppValue);
  }

  v8::Local<v8::Value> unicodeRangeValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&unicodeRangeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (unicodeRangeValue.IsEmpty() || unicodeRangeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> unicodeRangeCppValue = unicodeRangeValue;
    if (!unicodeRangeCppValue.Prepare(exceptionState))
      return;
    impl.setUnicodeRange(unicodeRangeCppValue);
  }

  v8::Local<v8::Value> variantValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&variantValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (variantValue.IsEmpty() || variantValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> variantCppValue = variantValue;
    if (!variantCppValue.Prepare(exceptionState))
      return;
    impl.setVariant(variantCppValue);
  }

  v8::Local<v8::Value> weightValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&weightValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (weightValue.IsEmpty() || weightValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> weightCppValue = weightValue;
    if (!weightCppValue.Prepare(exceptionState))
      return;
    impl.setWeight(weightCppValue);
  }
}

v8::Local<v8::Value> FontFaceDescriptors::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8FontFaceDescriptors(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8FontFaceDescriptors(const FontFaceDescriptors& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8FontFaceDescriptorsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> displayValue;
  bool displayHasValueOrDefault = false;
  if (impl.hasDisplay()) {
    displayValue = V8String(isolate, impl.display());
    displayHasValueOrDefault = true;
  } else {
    displayValue = V8String(isolate, "auto");
    displayHasValueOrDefault = true;
  }
  if (displayHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), displayValue))) {
    return false;
  }

  v8::Local<v8::Value> featureSettingsValue;
  bool featureSettingsHasValueOrDefault = false;
  if (impl.hasFeatureSettings()) {
    featureSettingsValue = V8String(isolate, impl.featureSettings());
    featureSettingsHasValueOrDefault = true;
  } else {
    featureSettingsValue = V8String(isolate, "normal");
    featureSettingsHasValueOrDefault = true;
  }
  if (featureSettingsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), featureSettingsValue))) {
    return false;
  }

  v8::Local<v8::Value> stretchValue;
  bool stretchHasValueOrDefault = false;
  if (impl.hasStretch()) {
    stretchValue = V8String(isolate, impl.stretch());
    stretchHasValueOrDefault = true;
  } else {
    stretchValue = V8String(isolate, "normal");
    stretchHasValueOrDefault = true;
  }
  if (stretchHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), stretchValue))) {
    return false;
  }

  v8::Local<v8::Value> styleValue;
  bool styleHasValueOrDefault = false;
  if (impl.hasStyle()) {
    styleValue = V8String(isolate, impl.style());
    styleHasValueOrDefault = true;
  } else {
    styleValue = V8String(isolate, "normal");
    styleHasValueOrDefault = true;
  }
  if (styleHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), styleValue))) {
    return false;
  }

  v8::Local<v8::Value> unicodeRangeValue;
  bool unicodeRangeHasValueOrDefault = false;
  if (impl.hasUnicodeRange()) {
    unicodeRangeValue = V8String(isolate, impl.unicodeRange());
    unicodeRangeHasValueOrDefault = true;
  } else {
    unicodeRangeValue = V8String(isolate, "U+0-10FFFF");
    unicodeRangeHasValueOrDefault = true;
  }
  if (unicodeRangeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), unicodeRangeValue))) {
    return false;
  }

  v8::Local<v8::Value> variantValue;
  bool variantHasValueOrDefault = false;
  if (impl.hasVariant()) {
    variantValue = V8String(isolate, impl.variant());
    variantHasValueOrDefault = true;
  } else {
    variantValue = V8String(isolate, "normal");
    variantHasValueOrDefault = true;
  }
  if (variantHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), variantValue))) {
    return false;
  }

  v8::Local<v8::Value> weightValue;
  bool weightHasValueOrDefault = false;
  if (impl.hasWeight()) {
    weightValue = V8String(isolate, impl.weight());
    weightHasValueOrDefault = true;
  } else {
    weightValue = V8String(isolate, "normal");
    weightHasValueOrDefault = true;
  }
  if (weightHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), weightValue))) {
    return false;
  }

  return true;
}

FontFaceDescriptors NativeValueTraits<FontFaceDescriptors>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  FontFaceDescriptors impl;
  V8FontFaceDescriptors::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
