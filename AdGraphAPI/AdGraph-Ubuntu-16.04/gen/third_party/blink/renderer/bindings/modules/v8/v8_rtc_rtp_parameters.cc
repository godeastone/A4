// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_parameters.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_codec_parameters.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_rtp_encoding_parameters.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCRtpParametersKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "codecs",
    "encodings",
    "transactionId",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8RTCRtpParameters::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RTCRtpParameters& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtpParametersKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> codecsValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&codecsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (codecsValue.IsEmpty() || codecsValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<RTCRtpCodecParameters> codecsCppValue = NativeValueTraits<IDLSequence<RTCRtpCodecParameters>>::NativeValue(isolate, codecsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setCodecs(codecsCppValue);
  }

  v8::Local<v8::Value> encodingsValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&encodingsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (encodingsValue.IsEmpty() || encodingsValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<RTCRtpEncodingParameters> encodingsCppValue = NativeValueTraits<IDLSequence<RTCRtpEncodingParameters>>::NativeValue(isolate, encodingsValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setEncodings(encodingsCppValue);
  }

  v8::Local<v8::Value> transactionIdValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&transactionIdValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (transactionIdValue.IsEmpty() || transactionIdValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> transactionIdCppValue = transactionIdValue;
    if (!transactionIdCppValue.Prepare(exceptionState))
      return;
    impl.setTransactionId(transactionIdCppValue);
  }
}

v8::Local<v8::Value> RTCRtpParameters::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCRtpParameters(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCRtpParameters(const RTCRtpParameters& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCRtpParametersKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> codecsValue;
  bool codecsHasValueOrDefault = false;
  if (impl.hasCodecs()) {
    codecsValue = ToV8(impl.codecs(), creationContext, isolate);
    codecsHasValueOrDefault = true;
  }
  if (codecsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), codecsValue))) {
    return false;
  }

  v8::Local<v8::Value> encodingsValue;
  bool encodingsHasValueOrDefault = false;
  if (impl.hasEncodings()) {
    encodingsValue = ToV8(impl.encodings(), creationContext, isolate);
    encodingsHasValueOrDefault = true;
  }
  if (encodingsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), encodingsValue))) {
    return false;
  }

  v8::Local<v8::Value> transactionIdValue;
  bool transactionIdHasValueOrDefault = false;
  if (impl.hasTransactionId()) {
    transactionIdValue = V8String(isolate, impl.transactionId());
    transactionIdHasValueOrDefault = true;
  }
  if (transactionIdHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), transactionIdValue))) {
    return false;
  }

  return true;
}

RTCRtpParameters NativeValueTraits<RTCRtpParameters>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RTCRtpParameters impl;
  V8RTCRtpParameters::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
