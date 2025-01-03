// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_offer_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_offer_answer_options.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCOfferOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "iceRestart",
    "offerToReceiveAudio",
    "offerToReceiveVideo",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8RTCOfferOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RTCOfferOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8RTCOfferAnswerOptions::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8RTCOfferOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> iceRestartValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&iceRestartValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (iceRestartValue.IsEmpty() || iceRestartValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool iceRestartCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, iceRestartValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIceRestart(iceRestartCppValue);
  }

  v8::Local<v8::Value> offerToReceiveAudioValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&offerToReceiveAudioValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (offerToReceiveAudioValue.IsEmpty() || offerToReceiveAudioValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t offerToReceiveAudioCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, offerToReceiveAudioValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setOfferToReceiveAudio(offerToReceiveAudioCppValue);
  }

  v8::Local<v8::Value> offerToReceiveVideoValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&offerToReceiveVideoValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (offerToReceiveVideoValue.IsEmpty() || offerToReceiveVideoValue->IsUndefined()) {
    // Do nothing.
  } else {
    int32_t offerToReceiveVideoCppValue = NativeValueTraits<IDLLong>::NativeValue(isolate, offerToReceiveVideoValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setOfferToReceiveVideo(offerToReceiveVideoCppValue);
  }
}

v8::Local<v8::Value> RTCOfferOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCOfferOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCOfferOptions(const RTCOfferOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8RTCOfferAnswerOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8RTCOfferOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> iceRestartValue;
  bool iceRestartHasValueOrDefault = false;
  if (impl.hasIceRestart()) {
    iceRestartValue = v8::Boolean::New(isolate, impl.iceRestart());
    iceRestartHasValueOrDefault = true;
  } else {
    iceRestartValue = v8::Boolean::New(isolate, false);
    iceRestartHasValueOrDefault = true;
  }
  if (iceRestartHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), iceRestartValue))) {
    return false;
  }

  v8::Local<v8::Value> offerToReceiveAudioValue;
  bool offerToReceiveAudioHasValueOrDefault = false;
  if (impl.hasOfferToReceiveAudio()) {
    offerToReceiveAudioValue = v8::Integer::New(isolate, impl.offerToReceiveAudio());
    offerToReceiveAudioHasValueOrDefault = true;
  }
  if (offerToReceiveAudioHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), offerToReceiveAudioValue))) {
    return false;
  }

  v8::Local<v8::Value> offerToReceiveVideoValue;
  bool offerToReceiveVideoHasValueOrDefault = false;
  if (impl.hasOfferToReceiveVideo()) {
    offerToReceiveVideoValue = v8::Integer::New(isolate, impl.offerToReceiveVideo());
    offerToReceiveVideoHasValueOrDefault = true;
  }
  if (offerToReceiveVideoHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), offerToReceiveVideoValue))) {
    return false;
  }

  return true;
}

RTCOfferOptions NativeValueTraits<RTCOfferOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RTCOfferOptions impl;
  V8RTCOfferOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
