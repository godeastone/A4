// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/rtc_ice_candidate_init_or_rtc_ice_candidate.h"

#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_candidate.h"

namespace blink {

RTCIceCandidateInitOrRTCIceCandidate::RTCIceCandidateInitOrRTCIceCandidate() : type_(SpecificType::kNone) {}

RTCIceCandidate* RTCIceCandidateInitOrRTCIceCandidate::GetAsRTCIceCandidate() const {
  DCHECK(IsRTCIceCandidate());
  return rtc_ice_candidate_;
}

void RTCIceCandidateInitOrRTCIceCandidate::SetRTCIceCandidate(RTCIceCandidate* value) {
  DCHECK(IsNull());
  rtc_ice_candidate_ = value;
  type_ = SpecificType::kRTCIceCandidate;
}

RTCIceCandidateInitOrRTCIceCandidate RTCIceCandidateInitOrRTCIceCandidate::FromRTCIceCandidate(RTCIceCandidate* value) {
  RTCIceCandidateInitOrRTCIceCandidate container;
  container.SetRTCIceCandidate(value);
  return container;
}

const RTCIceCandidateInit& RTCIceCandidateInitOrRTCIceCandidate::GetAsRTCIceCandidateInit() const {
  DCHECK(IsRTCIceCandidateInit());
  return rtc_ice_candidate_init_;
}

void RTCIceCandidateInitOrRTCIceCandidate::SetRTCIceCandidateInit(const RTCIceCandidateInit& value) {
  DCHECK(IsNull());
  rtc_ice_candidate_init_ = value;
  type_ = SpecificType::kRTCIceCandidateInit;
}

RTCIceCandidateInitOrRTCIceCandidate RTCIceCandidateInitOrRTCIceCandidate::FromRTCIceCandidateInit(const RTCIceCandidateInit& value) {
  RTCIceCandidateInitOrRTCIceCandidate container;
  container.SetRTCIceCandidateInit(value);
  return container;
}

RTCIceCandidateInitOrRTCIceCandidate::RTCIceCandidateInitOrRTCIceCandidate(const RTCIceCandidateInitOrRTCIceCandidate&) = default;
RTCIceCandidateInitOrRTCIceCandidate::~RTCIceCandidateInitOrRTCIceCandidate() = default;
RTCIceCandidateInitOrRTCIceCandidate& RTCIceCandidateInitOrRTCIceCandidate::operator=(const RTCIceCandidateInitOrRTCIceCandidate&) = default;

void RTCIceCandidateInitOrRTCIceCandidate::Trace(blink::Visitor* visitor) {
  visitor->Trace(rtc_ice_candidate_);
  visitor->Trace(rtc_ice_candidate_init_);
}

void V8RTCIceCandidateInitOrRTCIceCandidate::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RTCIceCandidateInitOrRTCIceCandidate& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (IsUndefinedOrNull(v8Value)) {
    RTCIceCandidateInit cppValue;
    V8RTCIceCandidateInit::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetRTCIceCandidateInit(cppValue);
    return;
  }

  if (V8RTCIceCandidate::hasInstance(v8Value, isolate)) {
    RTCIceCandidate* cppValue = V8RTCIceCandidate::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetRTCIceCandidate(cppValue);
    return;
  }

  if (v8Value->IsObject()) {
    RTCIceCandidateInit cppValue;
    V8RTCIceCandidateInit::ToImpl(isolate, v8Value, cppValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetRTCIceCandidateInit(cppValue);
    return;
  }

  exceptionState.ThrowTypeError("The provided value is not of type '(RTCIceCandidateInit or RTCIceCandidate)'");
}

v8::Local<v8::Value> ToV8(const RTCIceCandidateInitOrRTCIceCandidate& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case RTCIceCandidateInitOrRTCIceCandidate::SpecificType::kNone:
      return v8::Null(isolate);
    case RTCIceCandidateInitOrRTCIceCandidate::SpecificType::kRTCIceCandidate:
      return ToV8(impl.GetAsRTCIceCandidate(), creationContext, isolate);
    case RTCIceCandidateInitOrRTCIceCandidate::SpecificType::kRTCIceCandidateInit:
      return ToV8(impl.GetAsRTCIceCandidateInit(), creationContext, isolate);
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

RTCIceCandidateInitOrRTCIceCandidate NativeValueTraits<RTCIceCandidateInitOrRTCIceCandidate>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RTCIceCandidateInitOrRTCIceCandidate impl;
  V8RTCIceCandidateInitOrRTCIceCandidate::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
