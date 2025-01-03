// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_peer_connection_ice_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_candidate.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCPeerConnectionIceEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "candidate",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8RTCPeerConnectionIceEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RTCPeerConnectionIceEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8EventInit::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8RTCPeerConnectionIceEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> candidateValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&candidateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (candidateValue.IsEmpty() || candidateValue->IsUndefined()) {
    // Do nothing.
  } else if (candidateValue->IsNull()) {
    impl.setCandidateToNull();
  } else {
    RTCIceCandidate* candidateCppValue = V8RTCIceCandidate::ToImplWithTypeCheck(isolate, candidateValue);
    if (!candidateCppValue) {
      exceptionState.ThrowTypeError("member candidate is not of type RTCIceCandidate.");
      return;
    }
    impl.setCandidate(candidateCppValue);
  }
}

v8::Local<v8::Value> RTCPeerConnectionIceEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCPeerConnectionIceEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCPeerConnectionIceEventInit(const RTCPeerConnectionIceEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8RTCPeerConnectionIceEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> candidateValue;
  bool candidateHasValueOrDefault = false;
  if (impl.hasCandidate()) {
    candidateValue = ToV8(impl.candidate(), creationContext, isolate);
    candidateHasValueOrDefault = true;
  } else {
    candidateValue = v8::Null(isolate);
    candidateHasValueOrDefault = true;
  }
  if (candidateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), candidateValue))) {
    return false;
  }

  return true;
}

RTCPeerConnectionIceEventInit NativeValueTraits<RTCPeerConnectionIceEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RTCPeerConnectionIceEventInit impl;
  V8RTCPeerConnectionIceEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
