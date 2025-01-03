// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_key_message_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaKeyMessageEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "message",
    "messageType",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MediaKeyMessageEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaKeyMessageEventInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    exceptionState.ThrowTypeError("Missing required member(s): message, messageType.");
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

  const v8::Eternal<v8::Name>* keys = eternalV8MediaKeyMessageEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> messageValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&messageValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (messageValue.IsEmpty() || messageValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member message is undefined.");
    return;
  } else {
    DOMArrayBuffer* messageCppValue = messageValue->IsArrayBuffer() ? V8ArrayBuffer::ToImpl(v8::Local<v8::ArrayBuffer>::Cast(messageValue)) : 0;
    if (!messageCppValue) {
      exceptionState.ThrowTypeError("member message is not of type ArrayBuffer.");
      return;
    }
    impl.setMessage(messageCppValue);
  }

  v8::Local<v8::Value> messageTypeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&messageTypeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (messageTypeValue.IsEmpty() || messageTypeValue->IsUndefined()) {
    exceptionState.ThrowTypeError("required member messageType is undefined.");
    return;
  } else {
    V8StringResource<> messageTypeCppValue = messageTypeValue;
    if (!messageTypeCppValue.Prepare(exceptionState))
      return;
    const char* validValues[] = {
        "license-request",
        "license-renewal",
        "license-release",
        "individualization-request",
    };
    if (!IsValidEnum(messageTypeCppValue, validValues, arraysize(validValues), "MediaKeyMessageType", exceptionState))
      return;
    impl.setMessageType(messageTypeCppValue);
  }
}

v8::Local<v8::Value> MediaKeyMessageEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaKeyMessageEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaKeyMessageEventInit(const MediaKeyMessageEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8MediaKeyMessageEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> messageValue;
  bool messageHasValueOrDefault = false;
  if (impl.hasMessage()) {
    messageValue = ToV8(impl.message(), creationContext, isolate);
    messageHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (messageHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), messageValue))) {
    return false;
  }

  v8::Local<v8::Value> messageTypeValue;
  bool messageTypeHasValueOrDefault = false;
  if (impl.hasMessageType()) {
    messageTypeValue = V8String(isolate, impl.messageType());
    messageTypeHasValueOrDefault = true;
  } else {
    NOTREACHED();
  }
  if (messageTypeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), messageTypeValue))) {
    return false;
  }

  return true;
}

MediaKeyMessageEventInit NativeValueTraits<MediaKeyMessageEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MediaKeyMessageEventInit impl;
  V8MediaKeyMessageEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
