// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_delay_options.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_node_options.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8DelayOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "delayTime",
    "maxDelayTime",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8DelayOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, DelayOptions& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8AudioNodeOptions::ToImpl(isolate, v8Value, impl, exceptionState);
  if (exceptionState.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8DelayOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> delayTimeValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&delayTimeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (delayTimeValue.IsEmpty() || delayTimeValue->IsUndefined()) {
    // Do nothing.
  } else {
    double delayTimeCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, delayTimeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setDelayTime(delayTimeCppValue);
  }

  v8::Local<v8::Value> maxDelayTimeValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&maxDelayTimeValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (maxDelayTimeValue.IsEmpty() || maxDelayTimeValue->IsUndefined()) {
    // Do nothing.
  } else {
    double maxDelayTimeCppValue = NativeValueTraits<IDLDouble>::NativeValue(isolate, maxDelayTimeValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setMaxDelayTime(maxDelayTimeCppValue);
  }
}

v8::Local<v8::Value> DelayOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8DelayOptions(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8DelayOptions(const DelayOptions& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8AudioNodeOptions(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8DelayOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> delayTimeValue;
  bool delayTimeHasValueOrDefault = false;
  if (impl.hasDelayTime()) {
    delayTimeValue = v8::Number::New(isolate, impl.delayTime());
    delayTimeHasValueOrDefault = true;
  } else {
    delayTimeValue = v8::Number::New(isolate, 0);
    delayTimeHasValueOrDefault = true;
  }
  if (delayTimeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), delayTimeValue))) {
    return false;
  }

  v8::Local<v8::Value> maxDelayTimeValue;
  bool maxDelayTimeHasValueOrDefault = false;
  if (impl.hasMaxDelayTime()) {
    maxDelayTimeValue = v8::Number::New(isolate, impl.maxDelayTime());
    maxDelayTimeHasValueOrDefault = true;
  } else {
    maxDelayTimeValue = v8::Number::New(isolate, 1);
    maxDelayTimeHasValueOrDefault = true;
  }
  if (maxDelayTimeHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), maxDelayTimeValue))) {
    return false;
  }

  return true;
}

DelayOptions NativeValueTraits<DelayOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DelayOptions impl;
  V8DelayOptions::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
