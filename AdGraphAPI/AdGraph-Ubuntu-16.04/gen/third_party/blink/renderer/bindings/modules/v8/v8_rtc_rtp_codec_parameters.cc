// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_codec_parameters.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCRtpCodecParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "channels",
    "clockRate",
    "mimeType",
    "payloadType",
    "sdpFmtpLine",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8RTCRtpCodecParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RTCRtpCodecParameters& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtpCodecParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> channelsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&channelsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (channelsValue.IsEmpty() || channelsValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t channelsCppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, channelsValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setChannels(channelsCppValue);
  }

  v8::Local<v8::Value> clockRateValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&clockRateValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (clockRateValue.IsEmpty() || clockRateValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t clockRateCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, clockRateValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setClockRate(clockRateCppValue);
  }

  v8::Local<v8::Value> mimeTypeValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&mimeTypeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (mimeTypeValue.IsEmpty() || mimeTypeValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> mimeTypeCppValue = mimeTypeValue;
    if (!mimeTypeCppValue.Prepare(exceptionState))
      return;
    impl.setMimeType(mimeTypeCppValue);
  }

  v8::Local<v8::Value> payloadTypeValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&payloadTypeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (payloadTypeValue.IsEmpty() || payloadTypeValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint8_t payloadTypeCppValue = NativeValueTraits<IDLOctet>::NativeValue(isolate, payloadTypeValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setPayloadType(payloadTypeCppValue);
  }

  v8::Local<v8::Value> sdpFmtpLineValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&sdpFmtpLineValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (sdpFmtpLineValue.IsEmpty() || sdpFmtpLineValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> sdpFmtpLineCppValue = sdpFmtpLineValue;
    if (!sdpFmtpLineCppValue.Prepare(exceptionState))
      return;
    impl.setSdpFmtpLine(sdpFmtpLineCppValue);
  }
}

v8::Local<v8::Value> RTCRtpCodecParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCRtpCodecParameters(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCRtpCodecParameters(const RTCRtpCodecParameters& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtpCodecParametersKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> channelsValue;
  bool channelsHasValueOrDefault = false;
  if (impl.hasChannels()) {
    channelsValue = v8::Integer::NewFromUnsigned(isolate, impl.channels());
    channelsHasValueOrDefault = true;
  }
  if (channelsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), channelsValue))) {
    return false;
  }

  v8::Local<v8::Value> clockRateValue;
  bool clockRateHasValueOrDefault = false;
  if (impl.hasClockRate()) {
    clockRateValue = v8::Integer::NewFromUnsigned(isolate, impl.clockRate());
    clockRateHasValueOrDefault = true;
  }
  if (clockRateHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), clockRateValue))) {
    return false;
  }

  v8::Local<v8::Value> mimeTypeValue;
  bool mimeTypeHasValueOrDefault = false;
  if (impl.hasMimeType()) {
    mimeTypeValue = V8String(isolate, impl.mimeType());
    mimeTypeHasValueOrDefault = true;
  }
  if (mimeTypeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), mimeTypeValue))) {
    return false;
  }

  v8::Local<v8::Value> payloadTypeValue;
  bool payloadTypeHasValueOrDefault = false;
  if (impl.hasPayloadType()) {
    payloadTypeValue = v8::Integer::NewFromUnsigned(isolate, impl.payloadType());
    payloadTypeHasValueOrDefault = true;
  }
  if (payloadTypeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), payloadTypeValue))) {
    return false;
  }

  v8::Local<v8::Value> sdpFmtpLineValue;
  bool sdpFmtpLineHasValueOrDefault = false;
  if (impl.hasSdpFmtpLine()) {
    sdpFmtpLineValue = V8String(isolate, impl.sdpFmtpLine());
    sdpFmtpLineHasValueOrDefault = true;
  }
  if (sdpFmtpLineHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), sdpFmtpLineValue))) {
    return false;
  }

  return true;
}

RTCRtpCodecParameters NativeValueTraits<RTCRtpCodecParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RTCRtpCodecParameters impl;
  V8RTCRtpCodecParameters::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
