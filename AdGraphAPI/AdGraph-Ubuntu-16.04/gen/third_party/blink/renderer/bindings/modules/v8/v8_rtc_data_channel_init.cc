// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_data_channel_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCDataChannelInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "id",
    "maxRetransmitTime",
    "maxRetransmits",
    "negotiated",
    "ordered",
    "protocol",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8RTCDataChannelInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RTCDataChannelInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8RTCDataChannelInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> idValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&idValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (idValue.IsEmpty() || idValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t idCppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, idValue, exceptionState, kEnforceRange);
    if (exceptionState.HadException())
      return;
    impl.setId(idCppValue);
  }

  v8::Local<v8::Value> maxRetransmitTimeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&maxRetransmitTimeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (maxRetransmitTimeValue.IsEmpty() || maxRetransmitTimeValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t maxRetransmitTimeCppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, maxRetransmitTimeValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setMaxRetransmitTime(maxRetransmitTimeCppValue);
  }

  v8::Local<v8::Value> maxRetransmitsValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&maxRetransmitsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (maxRetransmitsValue.IsEmpty() || maxRetransmitsValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint16_t maxRetransmitsCppValue = NativeValueTraits<IDLUnsignedShort>::NativeValue(isolate, maxRetransmitsValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setMaxRetransmits(maxRetransmitsCppValue);
  }

  v8::Local<v8::Value> negotiatedValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&negotiatedValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (negotiatedValue.IsEmpty() || negotiatedValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool negotiatedCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, negotiatedValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setNegotiated(negotiatedCppValue);
  }

  v8::Local<v8::Value> orderedValue;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&orderedValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (orderedValue.IsEmpty() || orderedValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool orderedCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, orderedValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setOrdered(orderedCppValue);
  }

  v8::Local<v8::Value> protocolValue;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&protocolValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (protocolValue.IsEmpty() || protocolValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> protocolCppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, protocolValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setProtocol(protocolCppValue);
  }
}

v8::Local<v8::Value> RTCDataChannelInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCDataChannelInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCDataChannelInit(const RTCDataChannelInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8RTCDataChannelInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> idValue;
  bool idHasValueOrDefault = false;
  if (impl.hasId()) {
    idValue = v8::Integer::NewFromUnsigned(isolate, impl.id());
    idHasValueOrDefault = true;
  }
  if (idHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), idValue))) {
    return false;
  }

  v8::Local<v8::Value> maxRetransmitTimeValue;
  bool maxRetransmitTimeHasValueOrDefault = false;
  if (impl.hasMaxRetransmitTime()) {
    maxRetransmitTimeValue = v8::Integer::NewFromUnsigned(isolate, impl.maxRetransmitTime());
    maxRetransmitTimeHasValueOrDefault = true;
  }
  if (maxRetransmitTimeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), maxRetransmitTimeValue))) {
    return false;
  }

  v8::Local<v8::Value> maxRetransmitsValue;
  bool maxRetransmitsHasValueOrDefault = false;
  if (impl.hasMaxRetransmits()) {
    maxRetransmitsValue = v8::Integer::NewFromUnsigned(isolate, impl.maxRetransmits());
    maxRetransmitsHasValueOrDefault = true;
  }
  if (maxRetransmitsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), maxRetransmitsValue))) {
    return false;
  }

  v8::Local<v8::Value> negotiatedValue;
  bool negotiatedHasValueOrDefault = false;
  if (impl.hasNegotiated()) {
    negotiatedValue = v8::Boolean::New(isolate, impl.negotiated());
    negotiatedHasValueOrDefault = true;
  } else {
    negotiatedValue = v8::Boolean::New(isolate, false);
    negotiatedHasValueOrDefault = true;
  }
  if (negotiatedHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), negotiatedValue))) {
    return false;
  }

  v8::Local<v8::Value> orderedValue;
  bool orderedHasValueOrDefault = false;
  if (impl.hasOrdered()) {
    orderedValue = v8::Boolean::New(isolate, impl.ordered());
    orderedHasValueOrDefault = true;
  } else {
    orderedValue = v8::Boolean::New(isolate, true);
    orderedHasValueOrDefault = true;
  }
  if (orderedHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[4].Get(isolate), orderedValue))) {
    return false;
  }

  v8::Local<v8::Value> protocolValue;
  bool protocolHasValueOrDefault = false;
  if (impl.hasProtocol()) {
    protocolValue = V8String(isolate, impl.protocol());
    protocolHasValueOrDefault = true;
  } else {
    protocolValue = V8String(isolate, WTF::g_empty_string);
    protocolHasValueOrDefault = true;
  }
  if (protocolHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[5].Get(isolate), protocolValue))) {
    return false;
  }

  return true;
}

RTCDataChannelInit NativeValueTraits<RTCDataChannelInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RTCDataChannelInit impl;
  V8RTCDataChannelInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
