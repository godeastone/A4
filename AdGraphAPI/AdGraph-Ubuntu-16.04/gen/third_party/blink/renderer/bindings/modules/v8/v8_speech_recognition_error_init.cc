// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition_error_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8SpeechRecognitionErrorInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "error",
    "message",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8SpeechRecognitionErrorInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, SpeechRecognitionErrorInit& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8SpeechRecognitionErrorInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> errorValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&errorValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (errorValue.IsEmpty() || errorValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> errorCppValue = errorValue;
    if (!errorCppValue.Prepare(exceptionState))
      return;
    impl.setError(errorCppValue);
  }

  v8::Local<v8::Value> messageValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&messageValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (messageValue.IsEmpty() || messageValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> messageCppValue = messageValue;
    if (!messageCppValue.Prepare(exceptionState))
      return;
    impl.setMessage(messageCppValue);
  }
}

v8::Local<v8::Value> SpeechRecognitionErrorInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8SpeechRecognitionErrorInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8SpeechRecognitionErrorInit(const SpeechRecognitionErrorInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8SpeechRecognitionErrorInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> errorValue;
  bool errorHasValueOrDefault = false;
  if (impl.hasError()) {
    errorValue = V8String(isolate, impl.error());
    errorHasValueOrDefault = true;
  }
  if (errorHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), errorValue))) {
    return false;
  }

  v8::Local<v8::Value> messageValue;
  bool messageHasValueOrDefault = false;
  if (impl.hasMessage()) {
    messageValue = V8String(isolate, impl.message());
    messageHasValueOrDefault = true;
  }
  if (messageHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), messageValue))) {
    return false;
  }

  return true;
}

SpeechRecognitionErrorInit NativeValueTraits<SpeechRecognitionErrorInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SpeechRecognitionErrorInit impl;
  V8SpeechRecognitionErrorInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
