// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_configuration.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8AudioConfigurationKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "bitrate",
    "channels",
    "contentType",
    "samplerate",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8AudioConfiguration::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AudioConfiguration& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): contentType.");
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8AudioConfigurationKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bitrateValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&bitrateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (bitrateValue.IsEmpty() || bitrateValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t bitrateCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, bitrateValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setBitrate(bitrateCppValue);
  }

  v8::Local<v8::Value> channelsValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&channelsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (channelsValue.IsEmpty() || channelsValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> channelsCppValue = channelsValue;
    if (!channelsCppValue.Prepare(exceptionState))
      return;
    impl.setChannels(channelsCppValue);
  }

  v8::Local<v8::Value> contentTypeValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&contentTypeValue)) {
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

  v8::Local<v8::Value> samplerateValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&samplerateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (samplerateValue.IsEmpty() || samplerateValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t samplerateCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, samplerateValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setSamplerate(samplerateCppValue);
  }
}

v8::Local<v8::Value> AudioConfiguration::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8AudioConfiguration(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8AudioConfiguration(const AudioConfiguration& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8AudioConfigurationKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bitrateValue;
  bool bitrateHasValueOrDefault = false;
  if (impl.hasBitrate()) {
    bitrateValue = v8::Integer::NewFromUnsigned(isolate, impl.bitrate());
    bitrateHasValueOrDefault = true;
  }
  if (bitrateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), bitrateValue))) {
    return false;
  }

  v8::Local<v8::Value> channelsValue;
  bool channelsHasValueOrDefault = false;
  if (impl.hasChannels()) {
    channelsValue = V8String(isolate, impl.channels());
    channelsHasValueOrDefault = true;
  }
  if (channelsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), channelsValue))) {
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
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), contentTypeValue))) {
    return false;
  }

  v8::Local<v8::Value> samplerateValue;
  bool samplerateHasValueOrDefault = false;
  if (impl.hasSamplerate()) {
    samplerateValue = v8::Integer::NewFromUnsigned(isolate, impl.samplerate());
    samplerateHasValueOrDefault = true;
  }
  if (samplerateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), samplerateValue))) {
    return false;
  }

  return true;
}

AudioConfiguration NativeValueTraits<AudioConfiguration>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  AudioConfiguration impl;
  V8AudioConfiguration::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
