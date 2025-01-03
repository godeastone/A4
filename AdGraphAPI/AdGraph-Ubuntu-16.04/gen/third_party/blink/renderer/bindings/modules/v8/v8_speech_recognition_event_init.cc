// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition_event_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_speech_recognition_result_list.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8SpeechRecognitionEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "resultIndex",
    "results",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8SpeechRecognitionEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, SpeechRecognitionEventInit& impl, ExceptionState& exceptionState) {
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

  const v8::Eternal<v8::Name>* keys = eternalV8SpeechRecognitionEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> resultIndexValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&resultIndexValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (resultIndexValue.IsEmpty() || resultIndexValue->IsUndefined()) {
    // Do nothing.
  } else {
    uint32_t resultIndexCppValue = NativeValueTraits<IDLUnsignedLong>::NativeValue(isolate, resultIndexValue, exceptionState, kNormalConversion);
    if (exceptionState.HadException())
      return;
    impl.setResultIndex(resultIndexCppValue);
  }

  v8::Local<v8::Value> resultsValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&resultsValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (resultsValue.IsEmpty() || resultsValue->IsUndefined()) {
    // Do nothing.
  } else if (resultsValue->IsNull()) {
    impl.setResultsToNull();
  } else {
    SpeechRecognitionResultList* resultsCppValue = V8SpeechRecognitionResultList::ToImplWithTypeCheck(isolate, resultsValue);
    if (!resultsCppValue) {
      exceptionState.ThrowTypeError("member results is not of type SpeechRecognitionResultList.");
      return;
    }
    impl.setResults(resultsCppValue);
  }
}

v8::Local<v8::Value> SpeechRecognitionEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8SpeechRecognitionEventInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8SpeechRecognitionEventInit(const SpeechRecognitionEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8EventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8SpeechRecognitionEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> resultIndexValue;
  bool resultIndexHasValueOrDefault = false;
  if (impl.hasResultIndex()) {
    resultIndexValue = v8::Integer::NewFromUnsigned(isolate, impl.resultIndex());
    resultIndexHasValueOrDefault = true;
  }
  if (resultIndexHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), resultIndexValue))) {
    return false;
  }

  v8::Local<v8::Value> resultsValue;
  bool resultsHasValueOrDefault = false;
  if (impl.hasResults()) {
    resultsValue = ToV8(impl.results(), creationContext, isolate);
    resultsHasValueOrDefault = true;
  } else {
    resultsValue = v8::Null(isolate);
    resultsHasValueOrDefault = true;
  }
  if (resultsHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), resultsValue))) {
    return false;
  }

  return true;
}

SpeechRecognitionEventInit NativeValueTraits<SpeechRecognitionEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  SpeechRecognitionEventInit impl;
  V8SpeechRecognitionEventInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
