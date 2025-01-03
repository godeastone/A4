// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_configuration.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_certificate.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_ice_server.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCConfigurationKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "bundlePolicy",
    "certificates",
    "iceCandidatePoolSize",
    "iceServers",
    "iceTransportPolicy",
    "iceTransports",
    "rtcpMuxPolicy",
    "sdpSemantics",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8RTCConfiguration::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RTCConfiguration& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCConfigurationKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bundlePolicyValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&bundlePolicyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (bundlePolicyValue.IsEmpty() || bundlePolicyValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> bundlePolicyCppValue = bundlePolicyValue;
    if (!bundlePolicyCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "balanced",
        "max-compat",
        "max-bundle",
    };
    if (!IsValidEnum(bundlePolicyCppValue, validValues, arraysize(validValues), "RTCBundlePolicy", exceptionState))
      return;
    impl.setBundlePolicy(bundlePolicyCppValue);
  }

  v8::Local<v8::Value> certificatesValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&certificatesValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (certificatesValue.IsEmpty() || certificatesValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<RTCCertificate>> certificatesCppValue = NativeValueTraits<IDLSequence<RTCCertificate>>::NativeValue(isolate, certificatesValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setCertificates(certificatesCppValue);
  }

  v8::Local<v8::Value> iceCandidatePoolSizeValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&iceCandidatePoolSizeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (iceCandidatePoolSizeValue.IsEmpty() || iceCandidatePoolSizeValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint8_t iceCandidatePoolSizeCppValue = NativeValueTraits<IDLOctet>::NativeValue(isolate, iceCandidatePoolSizeValue, exceptionState, kEnforceRange);
    if (exceptionState.HadException())
      return;
    impl.setIceCandidatePoolSize(iceCandidatePoolSizeCppValue);
  }

  v8::Local<v8::Value> iceServersValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&iceServersValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (iceServersValue.IsEmpty() || iceServersValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<RTCIceServer> iceServersCppValue = NativeValueTraits<IDLSequence<RTCIceServer>>::NativeValue(isolate, iceServersValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setIceServers(iceServersCppValue);
  }

  v8::Local<v8::Value> iceTransportPolicyValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&iceTransportPolicyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (iceTransportPolicyValue.IsEmpty() || iceTransportPolicyValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> iceTransportPolicyCppValue = iceTransportPolicyValue;
    if (!iceTransportPolicyCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "relay",
        "all",
    };
    if (!IsValidEnum(iceTransportPolicyCppValue, validValues, arraysize(validValues), "RTCIceTransportPolicy", exceptionState))
      return;
    impl.setIceTransportPolicy(iceTransportPolicyCppValue);
  }

  v8::Local<v8::Value> iceTransportsValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&iceTransportsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (iceTransportsValue.IsEmpty() || iceTransportsValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> iceTransportsCppValue = iceTransportsValue;
    if (!iceTransportsCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "relay",
        "all",
    };
    if (!IsValidEnum(iceTransportsCppValue, validValues, arraysize(validValues), "RTCIceTransportPolicy", exceptionState))
      return;
    impl.setIceTransports(iceTransportsCppValue);
  }

  v8::Local<v8::Value> rtcpMuxPolicyValue;
  if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&rtcpMuxPolicyValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (rtcpMuxPolicyValue.IsEmpty() || rtcpMuxPolicyValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> rtcpMuxPolicyCppValue = rtcpMuxPolicyValue;
    if (!rtcpMuxPolicyCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "negotiate",
        "require",
    };
    if (!IsValidEnum(rtcpMuxPolicyCppValue, validValues, arraysize(validValues), "RTCRtcpMuxPolicy", exceptionState))
      return;
    impl.setRtcpMuxPolicy(rtcpMuxPolicyCppValue);
  }

  if (RuntimeEnabledFeatures::RTCUnifiedPlanEnabled()) {
    v8::Local<v8::Value> sdpSemanticsValue;
    if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&sdpSemanticsValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (sdpSemanticsValue.IsEmpty() || sdpSemanticsValue->IsUndefined()) {
      // Do nothing.
    } else {
      V8StringResource<> sdpSemanticsCppValue = sdpSemanticsValue;
      if (!sdpSemanticsCppValue.Prepare(exceptionState))
        return;
      const char* validValues[] = {
          "plan-b",
          "unified-plan",
      };
      if (!IsValidEnum(sdpSemanticsCppValue, validValues, arraysize(validValues), "SdpSemantics", exceptionState))
        return;
      impl.setSdpSemantics(sdpSemanticsCppValue);
    }
  }
}

v8::Local<v8::Value> RTCConfiguration::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCConfiguration(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCConfiguration(const RTCConfiguration& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCConfigurationKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> bundlePolicyValue;
  bool bundlePolicyHasValueOrDefault = false;
  if (impl.hasBundlePolicy()) {
    bundlePolicyValue = V8String(isolate, impl.bundlePolicy());
    bundlePolicyHasValueOrDefault = true;
  } else {
    bundlePolicyValue = V8String(isolate, "balanced");
    bundlePolicyHasValueOrDefault = true;
  }
  if (bundlePolicyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), bundlePolicyValue))) {
    return false;
  }

  v8::Local<v8::Value> certificatesValue;
  bool certificatesHasValueOrDefault = false;
  if (impl.hasCertificates()) {
    certificatesValue = ToV8(impl.certificates(), creationContext, isolate);
    certificatesHasValueOrDefault = true;
  }
  if (certificatesHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), certificatesValue))) {
    return false;
  }

  v8::Local<v8::Value> iceCandidatePoolSizeValue;
  bool iceCandidatePoolSizeHasValueOrDefault = false;
  if (impl.hasIceCandidatePoolSize()) {
    iceCandidatePoolSizeValue = v8::Integer::NewFromUnsigned(isolate, impl.iceCandidatePoolSize());
    iceCandidatePoolSizeHasValueOrDefault = true;
  } else {
    iceCandidatePoolSizeValue = v8::Integer::NewFromUnsigned(isolate, 0u);
    iceCandidatePoolSizeHasValueOrDefault = true;
  }
  if (iceCandidatePoolSizeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), iceCandidatePoolSizeValue))) {
    return false;
  }

  v8::Local<v8::Value> iceServersValue;
  bool iceServersHasValueOrDefault = false;
  if (impl.hasIceServers()) {
    iceServersValue = ToV8(impl.iceServers(), creationContext, isolate);
    iceServersHasValueOrDefault = true;
  }
  if (iceServersHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), iceServersValue))) {
    return false;
  }

  v8::Local<v8::Value> iceTransportPolicyValue;
  bool iceTransportPolicyHasValueOrDefault = false;
  if (impl.hasIceTransportPolicy()) {
    iceTransportPolicyValue = V8String(isolate, impl.iceTransportPolicy());
    iceTransportPolicyHasValueOrDefault = true;
  }
  if (iceTransportPolicyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), iceTransportPolicyValue))) {
    return false;
  }

  v8::Local<v8::Value> iceTransportsValue;
  bool iceTransportsHasValueOrDefault = false;
  if (impl.hasIceTransports()) {
    iceTransportsValue = V8String(isolate, impl.iceTransports());
    iceTransportsHasValueOrDefault = true;
  }
  if (iceTransportsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), iceTransportsValue))) {
    return false;
  }

  v8::Local<v8::Value> rtcpMuxPolicyValue;
  bool rtcpMuxPolicyHasValueOrDefault = false;
  if (impl.hasRtcpMuxPolicy()) {
    rtcpMuxPolicyValue = V8String(isolate, impl.rtcpMuxPolicy());
    rtcpMuxPolicyHasValueOrDefault = true;
  } else {
    rtcpMuxPolicyValue = V8String(isolate, "require");
    rtcpMuxPolicyHasValueOrDefault = true;
  }
  if (rtcpMuxPolicyHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[6].Get(isolate), rtcpMuxPolicyValue))) {
    return false;
  }

  if (RuntimeEnabledFeatures::RTCUnifiedPlanEnabled()) {
    v8::Local<v8::Value> sdpSemanticsValue;
    bool sdpSemanticsHasValueOrDefault = false;
    if (impl.hasSdpSemantics()) {
      sdpSemanticsValue = V8String(isolate, impl.sdpSemantics());
      sdpSemanticsHasValueOrDefault = true;
    }
    if (sdpSemanticsHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[7].Get(isolate), sdpSemanticsValue))) {
      return false;
    }
  }

  return true;
}

RTCConfiguration NativeValueTraits<RTCConfiguration>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RTCConfiguration impl;
  V8RTCConfiguration::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
