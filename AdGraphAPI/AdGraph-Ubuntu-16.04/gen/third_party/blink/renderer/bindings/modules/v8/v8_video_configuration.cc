// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_video_configuration.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8VideoConfigurationKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "bitrate",
    "contentType",
    "framerate",
    "height",
    "width",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8VideoConfiguration::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, VideoConfiguration& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): bitrate, contentType, framerate, height, width.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8VideoConfigurationKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bitrateValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&bitrateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (bitrateValue.IsEmpty() || bitrateValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member bitrate is undefined.");
    return;
  } else {
    uint32_t bitrateCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, bitrateValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setBitrate(bitrateCppValue);
  }

  v8::Local<v8::Value> contentTypeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&contentTypeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (contentTypeValue.IsEmpty() || contentTypeValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member contentType is undefined.");
    return;
  } else {
    V8StringResource<> contentTypeCppValue = contentTypeValue;
    if (!contentTypeCppValue.Prepare(exceptionState))
      return;
    impl.setContentType(contentTypeCppValue);
  }

  v8::Local<v8::Value> framerateValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&framerateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (framerateValue.IsEmpty() || framerateValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member framerate is undefined.");
    return;
  } else {
    V8StringResource<> framerateCppValue = framerateValue;
    if (!framerateCppValue.Prepare(exceptionState))
      return;
    impl.setFramerate(framerateCppValue);
  }

  v8::Local<v8::Value> heightValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&heightValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (heightValue.IsEmpty() || heightValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member height is undefined.");
    return;
  } else {
    uint32_t heightCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, heightValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setHeight(heightCppValue);
  }

  v8::Local<v8::Value> widthValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&widthValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (widthValue.IsEmpty() || widthValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member width is undefined.");
    return;
  } else {
    uint32_t widthCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, widthValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setWidth(widthCppValue);
  }
}

v8::Local<v8::Value> VideoConfiguration::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8VideoConfiguration(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8VideoConfiguration(const VideoConfiguration& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8VideoConfigurationKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bitrateValue;
  bool bitrateHasValueOrDefault = false;
  if (impl.hasBitrate()) {
    bitrateValue = v8::Integer::NewFromUnsigned(isolate, impl.bitrate());
    bitrateHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (bitrateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), bitrateValue))) {
    return false;
  }

  v8::Local<v8::Value> contentTypeValue;
  bool contentTypeHasValueOrDefault = false;
  if (impl.hasContentType()) {
    contentTypeValue = V8String(isolate, impl.contentType());
    contentTypeHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (contentTypeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), contentTypeValue))) {
    return false;
  }

  v8::Local<v8::Value> framerateValue;
  bool framerateHasValueOrDefault = false;
  if (impl.hasFramerate()) {
    framerateValue = V8String(isolate, impl.framerate());
    framerateHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (framerateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), framerateValue))) {
    return false;
  }

  v8::Local<v8::Value> heightValue;
  bool heightHasValueOrDefault = false;
  if (impl.hasHeight()) {
    heightValue = v8::Integer::NewFromUnsigned(isolate, impl.height());
    heightHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (heightHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), heightValue))) {
    return false;
  }

  v8::Local<v8::Value> widthValue;
  bool widthHasValueOrDefault = false;
  if (impl.hasWidth()) {
    widthValue = v8::Integer::NewFromUnsigned(isolate, impl.width());
    widthHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (widthHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), widthValue))) {
    return false;
  }

  return true;
}

VideoConfiguration NativeValueTraits<VideoConfiguration>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  VideoConfiguration impl;
  V8VideoConfiguration::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
