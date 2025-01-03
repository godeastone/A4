// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_encoding_parameters.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCRtpEncodingParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "active",
    "maxBitrate",
    "priority",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8RTCRtpEncodingParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RTCRtpEncodingParameters& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtpEncodingParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> activeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&activeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (activeValue.IsEmpty() || activeValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool activeCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, activeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setActive(activeCppValue);
  }

  v8::Local<v8::Value> maxBitrateValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&maxBitrateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (maxBitrateValue.IsEmpty() || maxBitrateValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t maxBitrateCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, maxBitrateValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setMaxBitrate(maxBitrateCppValue);
  }

  v8::Local<v8::Value> priorityValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&priorityValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (priorityValue.IsEmpty() || priorityValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> priorityCppValue = priorityValue;
    if (!priorityCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "very-low",
        "low",
        "medium",
        "high",
    };
    if (!IsValidEnum(priorityCppValue, validValues, arraysize(validValues), "RTCPriorityType", exceptionState))
      return;
    impl.setPriority(priorityCppValue);
  }
}

v8::Local<v8::Value> RTCRtpEncodingParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCRtpEncodingParameters(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCRtpEncodingParameters(const RTCRtpEncodingParameters& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtpEncodingParametersKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> activeValue;
  bool activeHasValueOrDefault = false;
  if (impl.hasActive()) {
    activeValue = v8::Boolean::New(isolate, impl.active());
    activeHasValueOrDefault = true;
  } else {
    activeValue = v8::Boolean::New(isolate, true);
    activeHasValueOrDefault = true;
  }
  if (activeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), activeValue))) {
    return false;
  }

  v8::Local<v8::Value> maxBitrateValue;
  bool maxBitrateHasValueOrDefault = false;
  if (impl.hasMaxBitrate()) {
    maxBitrateValue = v8::Integer::NewFromUnsigned(isolate, impl.maxBitrate());
    maxBitrateHasValueOrDefault = true;
  }
  if (maxBitrateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), maxBitrateValue))) {
    return false;
  }

  v8::Local<v8::Value> priorityValue;
  bool priorityHasValueOrDefault = false;
  if (impl.hasPriority()) {
    priorityValue = V8String(isolate, impl.priority());
    priorityHasValueOrDefault = true;
  } else {
    priorityValue = V8String(isolate, "low");
    priorityHasValueOrDefault = true;
  }
  if (priorityHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), priorityValue))) {
    return false;
  }

  return true;
}

RTCRtpEncodingParameters NativeValueTraits<RTCRtpEncodingParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RTCRtpEncodingParameters impl;
  V8RTCRtpEncodingParameters::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
