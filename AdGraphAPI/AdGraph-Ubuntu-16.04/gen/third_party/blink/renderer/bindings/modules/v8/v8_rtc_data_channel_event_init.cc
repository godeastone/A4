// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_data_channel_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_rtc_data_channel.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8RTCDataChannelEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "channel",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8RTCDataChannelEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, RTCDataChannelEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): channel.");
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

  const v8::Eternal<v8::Name>* keys = eternalV8RTCDataChannelEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> channelValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&channelValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (channelValue.IsEmpty() || channelValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member channel is undefined.");
    return;
  } else {
    RTCDataChannel* channelCppValue = V8RTCDataChannel::ToImplWithTypeCheck(isolate, channelValue);
    if (!channelCppValue) {
      exceptionState.ThrowTypeError("member channel is not of type RTCDataChannel.");
      return;
    }
    impl.setChannel(channelCppValue);
  }
}

v8::Local<v8::Value> RTCDataChannelEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8RTCDataChannelEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8RTCDataChannelEventInit(const RTCDataChannelEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8RTCDataChannelEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> channelValue;
  bool channelHasValueOrDefault = false;
  if (impl.hasChannel()) {
    channelValue = ToV8(impl.channel(), creationContext, isolate);
    channelHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (channelHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), channelValue))) {
    return false;
  }

  return true;
}

RTCDataChannelEventInit NativeValueTraits<RTCDataChannelEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  RTCDataChannelEventInit impl;
  V8RTCDataChannelEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
