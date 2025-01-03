// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_candidate_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCIceCandidateInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "candidate",
    "sdpMLineIndex",
    "sdpMid",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8RTCIceCandidateInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RTCIceCandidateInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCIceCandidateInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> candidateValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&candidateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (candidateValue.IsEmpty() || candidateValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> candidateCppValue = candidateValue;
    if (!candidateCppValue.Prepare(exceptionState))
      return;
    impl.setCandidate(candidateCppValue);
  }

  v8::Local<v8::Value> sdpMLineIndexValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&sdpMLineIndexValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sdpMLineIndexValue.IsEmpty() || sdpMLineIndexValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t sdpMLineIndexCppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, sdpMLineIndexValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setSdpMLineIndex(sdpMLineIndexCppValue);
  }

  v8::Local<v8::Value> sdpMidValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&sdpMidValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sdpMidValue.IsEmpty() || sdpMidValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> sdpMidCppValue = sdpMidValue;
    if (!sdpMidCppValue.Prepare(exceptionState))
      return;
    impl.setSdpMid(sdpMidCppValue);
  }
}

v8::Local<v8::Value> RTCIceCandidateInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCIceCandidateInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCIceCandidateInit(const RTCIceCandidateInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCIceCandidateInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> candidateValue;
  bool candidateHasValueOrDefault = false;
  if (impl.hasCandidate()) {
    candidateValue = V8String(isolate, impl.candidate());
    candidateHasValueOrDefault = true;
  }
  if (candidateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), candidateValue))) {
    return false;
  }

  v8::Local<v8::Value> sdpMLineIndexValue;
  bool sdpMLineIndexHasValueOrDefault = false;
  if (impl.hasSdpMLineIndex()) {
    sdpMLineIndexValue = v8::Integer::NewFromUnsigned(isolate, impl.sdpMLineIndex());
    sdpMLineIndexHasValueOrDefault = true;
  }
  if (sdpMLineIndexHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), sdpMLineIndexValue))) {
    return false;
  }

  v8::Local<v8::Value> sdpMidValue;
  bool sdpMidHasValueOrDefault = false;
  if (impl.hasSdpMid()) {
    sdpMidValue = V8String(isolate, impl.sdpMid());
    sdpMidHasValueOrDefault = true;
  }
  if (sdpMidHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), sdpMidValue))) {
    return false;
  }

  return true;
}

RTCIceCandidateInit NativeValueTraits<RTCIceCandidateInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RTCIceCandidateInit impl;
  V8RTCIceCandidateInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
