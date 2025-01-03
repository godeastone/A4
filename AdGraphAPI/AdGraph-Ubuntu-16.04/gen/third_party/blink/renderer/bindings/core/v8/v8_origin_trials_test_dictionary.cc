// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_origin_trials_test_dictionary.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trials.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8OriginTrialsTestDictionaryKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "normalBool",
    "unconditionalBool",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8OriginTrialsTestDictionary::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, OriginTrialsTestDictionary& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8OriginTrialsTestDictionaryKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
  v8::Local<v8::Value> unconditionalBoolValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&unconditionalBoolValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (unconditionalBoolValue.IsEmpty() || unconditionalBoolValue->IsUndefined()) {
    // Do nothing.
  } else {
    bool unconditionalBoolCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, unconditionalBoolValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setUnconditionalBool(unconditionalBoolCppValue);
  }

  if (OriginTrials::originTrialsSampleAPIEnabled(executionContext)) {
    v8::Local<v8::Value> normalBoolValue;
    if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&normalBoolValue)) {
      exceptionState.RethrowV8Exception(block.Exception());
      return;
    }
    if (normalBoolValue.IsEmpty() || normalBoolValue->IsUndefined()) {
      // Do nothing.
    } else {
      bool normalBoolCppValue = NativeValueTraits<IDLBoolean>::NativeValue(isolate, normalBoolValue, exceptionState);
      if (exceptionState.HadException())
        return;
      impl.setNormalBool(normalBoolCppValue);
    }
  }
}

v8::Local<v8::Value> OriginTrialsTestDictionary::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8OriginTrialsTestDictionary(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8OriginTrialsTestDictionary(const OriginTrialsTestDictionary& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8OriginTrialsTestDictionaryKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);
  v8::Local<v8::Value> unconditionalBoolValue;
  bool unconditionalBoolHasValueOrDefault = false;
  if (impl.hasUnconditionalBool()) {
    unconditionalBoolValue = v8::Boolean::New(isolate, impl.unconditionalBool());
    unconditionalBoolHasValueOrDefault = true;
  } else {
    unconditionalBoolValue = v8::Boolean::New(isolate, true);
    unconditionalBoolHasValueOrDefault = true;
  }
  if (unconditionalBoolHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), unconditionalBoolValue))) {
    return false;
  }

  if (OriginTrials::originTrialsSampleAPIEnabled(executionContext)) {
    v8::Local<v8::Value> normalBoolValue;
    bool normalBoolHasValueOrDefault = false;
    if (impl.hasNormalBool()) {
      normalBoolValue = v8::Boolean::New(isolate, impl.normalBool());
      normalBoolHasValueOrDefault = true;
    } else {
      normalBoolValue = v8::Boolean::New(isolate, true);
      normalBoolHasValueOrDefault = true;
    }
    if (normalBoolHasValueOrDefault &&
        !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), normalBoolValue))) {
      return false;
    }
  }

  return true;
}

OriginTrialsTestDictionary NativeValueTraits<OriginTrialsTestDictionary>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  OriginTrialsTestDictionary impl;
  V8OriginTrialsTestDictionary::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
